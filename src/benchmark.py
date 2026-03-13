#!/usr/bin/env python3
"""
Cachegrind Benchmark Script for Project CodeNet.

This script benchmarks C++ submissions from the Project CodeNet dataset
using Valgrind's Cachegrind tool across multiple simulated cache sizes.

Pipeline
--------

Dataset -> Compilation -> Job Queue -> Worker Processes -> Result Queue -> CSV

Workers execute Cachegrind and send parsed metrics to a dedicated
writer process which writes results to a CSV file.
"""

from __future__ import annotations

import csv
import multiprocessing as mp
import subprocess
import time
from pathlib import Path
from dataclasses import dataclass
from typing import Iterator, List, Tuple


# Configuration

DATASET_DIR: Path = Path("dataset")
BUILD_DIR: Path = Path("/dev/shm/build")
INPUT_DIR: Path = Path("inputs")
RESULT_DIR: Path = Path("results")
RESULT_FILE: Path = RESULT_DIR / "benchmark.csv"

# Compiler configuration
CXX: str = "g++"
CXX_FLAGS: List[str] = ["-O2", "-g", "-std=c++17"]

# Cachegrind configurations: (L1 cache size, L2 cache size) in bytes
CACHE_CONFIGS: List[Tuple[int, int]] = [
    (4 * 1024, 32 * 1024),
    (8 * 1024, 32 * 1024),
    (16 * 1024, 128 * 1024),
    (32 * 1024, 512 * 1024),
    (64 * 1024, 2 * 1024 * 1024),
    (128 * 1024, 4 * 1024 * 1024)
]

NUM_WORKERS: int = max(1, mp.cpu_count() - 2)
TIMEOUT: int = 60

# Logging options
VERBOSE: bool = True
SILENT: bool = False

log_queue: mp.SimpleQueue = mp.SimpleQueue()


# Logging functions

def info(msg: str) -> None:
    """
    Print an informational message.

    Messages are only printed if VERBOSE mode is enabled.
    """
    if VERBOSE:
        log_queue.put(f"(I) {msg}")


def warn(msg: str) -> None:
    """
    Print a warning message.

    Messages are suppressed if SILENT mode is enabled.
    """
    if not SILENT:
        log_queue.put(f" (W) {msg}")


# Data Classes

@dataclass(frozen=True)
class Submission:
    """
    Represents a source code submission from the dataset.

    Attributes
    ----------
    problem : str
        Name of the problem directory the submission belongs to.

    source : Path
        Path to the C++ source file.

    binary : Path
        Path to the compiled executable.
    """

    problem: str
    source: Path
    binary: Path


@dataclass(frozen=True)
class BenchmarkJob:
    """
    Represents a single Cachegrind benchmarking job.

    Attributes
    ----------
    submission : Submission
    input_file : Path | None
    name : str
    """

    submission: Submission
    input_file: Path | None
    name: str


# Dataset Processing

def retrieve_submissions() -> Iterator[Submission]:
    """
    Iterate through the dataset directory and yield all C++ submissions.

    Yields
    ------
    Submission
        Metadata describing each submission.
    """

    for problem_dir in sorted(DATASET_DIR.iterdir()):
        # Skip non-directory entries
        if not problem_dir.is_dir():
            continue

        problem: str = problem_dir.name

        for source in sorted(problem_dir.glob("*.cpp")):
            # Construct build path: BUILD_DIR/problem/submission
            rel: Path = source.relative_to(DATASET_DIR)
            binary: Path = BUILD_DIR / rel.with_suffix("")

            yield Submission(problem, source, binary)

        info(f"Problem {problem} complete")


# Compilation

def compile_submission(subm: Submission) -> bool:
    """
    Compile a submission into a binary executable.

    Returns
    -------
    bool
        True if compilation succeeds, False otherwise.
    """

    # Skip compilation if binary already exists
    if subm.binary.exists():
        return True

    # Create a build directory for the problem
    subm.binary.parent.mkdir(parents=True, exist_ok=True)

    # Construct compiler command: `g++ -O2 -g --std=c++17 src.cpp -o src`
    cmd: List[str] = (
        [CXX] + CXX_FLAGS + [str(subm.source), "-o", str(subm.binary)]
    )

    try:
        subprocess.run(cmd, stderr=subprocess.DEVNULL, check=True)
        return True

    except subprocess.CalledProcessError:
        warn(f"Compilation failed: {subm.source}")
        return False


# Job Generation

def generate_jobs(sem: mp.Semaphore, queue: mp.SimpleQueue) -> None:
    """
    Generate benchmarking jobs and enqueue them for worker processes.

    Each submission is compiled and expanded into multiple jobs
    corresponding to different cache configurations.

    Parameters
    ----------
    queue : mp.SimpleQueue
        Multiprocessing queue used to distribute BenchmarkJob objects
        to worker processes.
    """

    for subm in retrieve_submissions():
        # Skip submissions that fail compilation
        if not compile_submission(subm):
            continue
        
        # Extract the benchmark name as 'problem/submission'
        name: str = str(subm.source.relative_to(DATASET_DIR).with_suffix(""))

        # Create path to input file if the problem needs one
        input_file: Path = INPUT_DIR / f"{subm.problem}.txt"
        if not input_file.exists():
            input_file = None

        sem.acquire()
        queue.put(BenchmarkJob(subm, input_file, name))


# Cachegrind Parsing

def parse_summary(path: Path) -> List[int]:
    """
    Parse Cachegrind output file and extract summary metrics.

    Cachegrind produces a line beginning with "summary:"
    containing instruction and memory statistics.

    Parameters
    ----------
    path : Path
        Path to Cachegrind output file.

    Returns
    -------
    List[int]
        List of integer metrics extracted from the summary line.

    Raises
    ------
    RuntimeError
        If the summary line cannot be found.
    """

    with path.open() as f:
        for line in f:
            if line.startswith("summary:"):
                return [int(x) for x in line.split()[1:]]

    raise RuntimeError("Cachegrind summary not found")


# Worker Process

def worker(
    sem: mp.Semaphore, job_queue: mp.SimpleQueue, result_queue: mp.SimpleQueue
) -> None:
    """
    Worker process responsible for executing Cachegrind jobs.

    Workers repeatedly pull BenchmarkJob objects from the job queue,
    execute Cachegrind, parse the output metrics, and push results
    to the result queue. Each job represents a single compiled
    submission. The worker runs Cachegrind for every cache
    configuration defined in CACHE_CONFIGS.

    Parameters
    ----------
    job_queue : mp.Queue
        Queue from which BenchmarkJob objects are retrieved.

    result_queue : mp.Queue
        Queue where parsed benchmark results are pushed.
    """

    # Temporary Cachegrind output file
    outfile: Path = Path(f"/dev/shm/cg_{mp.current_process().pid}.out")

    while True:
        # Retrieve next job
        job: BenchmarkJob | None = job_queue.get()
        if job is None:
            if outfile.exists():
                outfile.unlink()
            return

        # Decrement job_queue size
        sem.release()

        # Open input file if it exists
        stdin_file = job.input_file.open("rb") if job.input_file else None

        try:
            # Benchmark each cache configuration
            for l1, l2 in CACHE_CONFIGS:
                # Rewind input file
                if stdin_file is not None:
                    stdin_file.seek(0)

                # Construct Cachegrind command
                cmd = [
                    "valgrind",
                    "--tool=cachegrind",
                    "--quiet",
                    "--cache-sim=yes",
                    "--branch-sim=no",
                    f"--I1={l1},8,64",
                    f"--D1={l1},8,64",
                    f"--LL={l2},16,64",
                    f"--cachegrind-out-file={outfile}",
                    str(job.submission.binary),
                ]

                # Execute Cachegrind benchmark
                subprocess.run(
                    cmd,
                    stdin=stdin_file,
                    stdout=subprocess.DEVNULL,
                    stderr=subprocess.DEVNULL,
                    timeout=TIMEOUT,
                    check=True,
                )
                # Parse metrics from Cachegrind output and put to result queue
                metrics: List[int] = parse_summary(outfile)
                result_queue.put((job.name, l1, l2, *metrics))

        except subprocess.TimeoutExpired:
            warn(f"Timeout: {job.name} ({l1},{l2})")

        except subprocess.CalledProcessError:
            warn(f"Cachegrind failed: {job.name} ({l1},{l2})")
        
        except RuntimeError as e:
            warn(f"{str(e)}: {job.name} ({l1},{l2})")

        finally:
            if stdin_file is not None:
                stdin_file.close()


# Result Writer

def writer(result_queue: mp.SimpleQueue) -> None:
    """
    Consume benchmark results and write them to a CSV file.

    The writer process continuously reads rows from result_queue
    and writes them to RESULT_FILE.

    Shutdown Protocol
    -----------------
    The writer exits when it receives a `None` sentinel.

    Parameters
    ----------
    result_queue : mp.Queue
        Queue containing benchmark result rows.
    """

    with RESULT_FILE.open("w", newline="") as f:
        csv_writer = csv.writer(f)

        # Write CSV header
        csv_writer.writerow([
            "problem/submission",
            "L1",
            "L2",
            "Ir",
            "I1mr",
            "ILmr",
            "Dr",
            "D1mr",
            "DLmr",
            "Dw",
        ])

        while True:
            # Retrieve next benchmark result
            row: tuple | None = result_queue.get()
            if row is None:
                return

            csv_writer.writerow(row)


def logger(log_queue: mp.SimpleQueue) -> None:
    """
    Dedicated logging process that prints messages from other processes.
    Ensures ordered, non-interleaved output.
    """
    while True:
        msg = log_queue.get()
        if msg is None:
            break
        timestamp: str = time.strftime("%H:%M:%S")
        print(f"[{timestamp}] {msg}", flush=True)


def main() -> None:
    """
    Entry point for the benchmark pipeline.
    """

    # Create output directories
    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    RESULT_DIR.mkdir(parents=True, exist_ok=True)

    # Create logging process
    logger_proc: mp.Process = mp.Process(target=logger, args=(log_queue,), daemon=True)
    logger_proc.start()

    info(f"Workers: {NUM_WORKERS}")

    # Create multiprocessing queues
    # job_queue: mp.Queue = mp.Queue(maxsize=NUM_WORKERS * 4)
    sem: mp.Semaphore = mp.Semaphore(NUM_WORKERS * 4)
    job_queue: mp.SimpleQueue = mp.SimpleQueue()
    result_queue: mp.SimpleQueue = mp.SimpleQueue()

    # Generate CSV writer process
    writer_proc: mp.Process = mp.Process(target=writer, args=(result_queue,))
    writer_proc.start()

    # Generate worker processes
    workers: List[mp.Process] = []
    for _ in range(NUM_WORKERS):
        p: mp.Process = mp.Process(
            target=worker, args=(sem, job_queue, result_queue)
        )
        p.start()
        workers.append(p)

    info("Starting benchmark")
    start_time: float = time.perf_counter()

    # Generate jobs and put them onto the job queue
    generate_jobs(sem, job_queue)

    for _ in workers:
        job_queue.put(None)

    for p in workers:
        p.join()

    result_queue.put(None)
    writer_proc.join()

    # Format elapsed time
    elapsed: float = time.perf_counter() - start_time
    hours, rem = divmod(elapsed, 3600)
    minutes, seconds = divmod(rem, 60)

    info("Benchmark complete")
    info(f"Total benchmark time: {int(hours):02}:{int(minutes):02}:{int(seconds):02}")

    log_queue.put(None)
    logger_proc.join()


if __name__ == "__main__":
    main()
