#!/usr/bin/env python3
"""
Cachegrind Benchmark Runner for Project CodeNet

This script benchmarks C++ submissions from the Project CodeNet dataset
using Valgrind's Cachegrind tool across multiple simulated cache sizes.

Pipeline Architecture
---------------------

Dataset -> Compilation -> Job Queue -> Worker Processes -> Result Queue -> CSV Writer

1. The dataset directory is scanned for C++ submissions.
2. Each submission is compiled into a binary.
3. For each compiled binary and cache configuration, a BenchmarkJob is created.
4. Worker processes execute Cachegrind on each job.
5. The writer process collects results and stores them in a CSV file.

Multiprocessing is used to parallelize the expensive Cachegrind runs.

Designed to scale to very large datasets (100k+ submissions).
"""

from __future__ import annotations

import csv
import multiprocessing as mp
import subprocess
from pathlib import Path
from dataclasses import dataclass
from typing import Iterator, List, Tuple


# Configuration

DATASET_DIR: Path = Path("dataset")
BUILD_DIR: Path = Path("/dev/shm/build")
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

NUM_WORKERS: int = max(1, mp.cpu_count() - 1)
TIMEOUT: int = 60

# Logging options
VERBOSE: bool = True
SILENT: bool = False


# Logging functions

def info(msg: str) -> None:
    """
    Print an informational message.

    Messages are only printed if VERBOSE mode is enabled.
    """
    if VERBOSE:
        print(f"(i) {msg}")


def warn(msg: str) -> None:
    """
    Print a warning message.

    Messages are suppressed if SILENT mode is enabled.
    """
    if not SILENT:
        print(f"(w) {msg}")


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
    """Represents a single Cachegrind benchmarking job."""

    problem: str
    binary: Path
    submission: str
    l1: int
    l2: int


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
        for src in sorted(problem_dir.glob("*.cpp")):
            # Construct build path: BUILD_DIR/problem/submission
            rel: Path = src.relative_to(DATASET_DIR)
            binary: Path = BUILD_DIR / rel.with_suffix("")

            yield Submission(problem, src, binary)


# Compilation

def compile_submission(subm: Submission) -> bool:
    """
    Compile a submission into a binary executable.

    Return:
    bool
        True if compilation succeeds, False otherwise.
    """

    # Skip compilation if binary already exists
    if subm.binary.exists():
        return True

    # Create a build directory for the problem
    subm.binary.parent.mkdir(parents=True, exist_ok=True)

    # Construct compiler command: `g++ -O2 -g --std=c++17 .cpp -o .out`
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

def generate_jobs(queue: mp.Queue[BenchmarkJob | None]) -> None:
    """
    Generate benchmarking jobs and enqueue them for worker processes.

    Each submission is compiled and expanded into multiple jobs
    corresponding to different cache configurations.

    Parameters
    ----------
    queue : mp.Queue[BenchmarkJob | None]
        Multiprocessing queue used to distribute BenchmarkJob objects
        to worker processes.
    """

    for subm in retrieve_submissions():
        # Skip submissions that fail compilation
        if not compile_submission(subm):
            continue

        subm_name = subm.binary.stem

        # Create one job per cache configuration
        for l1, l2 in CACHE_CONFIGS:
            queue.put(
                BenchmarkJob(
                    problem=subm.problem,
                    binary=subm.binary,
                    submission=subm_name,
                    l1=l1,
                    l2=l2,
                )
            )


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

def worker(job_queue: mp.Queue, result_queue: mp.Queue) -> None:
    """
    Worker process responsible for executing Cachegrind jobs.

    Workers repeatedly pull BenchmarkJob objects from the job queue,
    execute Cachegrind, parse the output metrics, and push results
    to the result queue.

    Shutdown Protocol
    -----------------
    The worker exits when it receives a `None` sentinel from job_queue.

    Parameters
    ----------
    job_queue : mp.Queue
        Queue from which BenchmarkJob objects are retrieved.

    result_queue : mp.Queue
        Queue where parsed benchmark results are pushed.
    """

    while True:
        # Retrieve next job
        job: BenchmarkJob | None = job_queue.get()
        if job is None:
            return

        # Temporary Cachegrind output file
        outfile = Path(f"/dev/shm/cg_{mp.current_process().pid}.out")

        # Construct Cachegrind command
        cmd = [
            "valgrind",
            "--tool=cachegrind",
            "--quiet",
            "--cache-sim=yes",
            "--branch-sim=no",
            f"--I1={job.l1},8,64",
            f"--D1={job.l1},8,64",
            f"--LL={job.l2},16,64",
            f"--cachegrind-out-file={outfile}",
            str(job.binary),
        ]

        try:
            # Execute Cachegrind benchmark
            subprocess.run(
                cmd,
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
                timeout=TIMEOUT,
                check=False,
            )
            # Parse metrics from Cachegrind output and put to result queue
            metrics = parse_summary(outfile)
            result_queue.put(
                (job.problem, job.submission, job.l1, job.l2, *metrics)
            )

        except subprocess.TimeoutExpired:
            warn(f"Timeout: {job.submission} ({job.l1},{job.l2})")

        finally:
            if outfile.exists():
                outfile.unlink()


# Result Writer

def writer(result_queue: mp.Queue) -> None:
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
            "problem",
            "submission",
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
            row = result_queue.get()
            if row is None:
                return

            csv_writer.writerow(row)


# Main

def main() -> None:
    """
    Entry point for the benchmark pipeline.

    Responsibilities
    ----------------
    1. Create required directories
    2. Start writer process
    3. Spawn worker processes
    4. Generate benchmark jobs
    5. Coordinate process shutdown
    """
    # Create output directories
    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    RESULT_DIR.mkdir(parents=True, exist_ok=True)

    info("Workers:", NUM_WORKERS)

    # Create multiprocessing queues
    job_queue: mpQueue = mp.Queue(maxsize=NUM_WORKERS * 4)
    result_queue: mpQueue = mp.Queue()

    # Generate CSV writer process
    writer_proc: mp.Process = mp.Process(target=writer, args=(result_queue,))
    writer_proc.start()

    # Generate worker processes
    workers: List[mp.Process] = []
    for _ in range(NUM_WORKERS):
        p: mp.Process = mp.Process(target=worker, args=(job_queue, result_queue))
        p.start()
        workers.append(p)

    info("Starting benchmark")

    # Generate jobs and put them onto the job queue
    generate_jobs(job_queue)

    for _ in workers:
        job_queue.put(None)

    for p in workers:
        p.join()

    result_queue.put(None)
    writer_proc.join()

    info("Benchmark complete")


if __name__ == "__main__":
    main()
