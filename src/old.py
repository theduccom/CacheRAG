#!/usr/bin/env python3
"""
Cachegrind Benchmark Script for Project CodeNet.

This script benchmarks C++ submissions from the Project CodeNet dataset
using Valgrind's Cachegrind tool across multiple simulated cache sizes.
"""

from __future__ import annotations

import csv
import multiprocessing as mp
import subprocess
import time
from pathlib import Path
from dataclasses import dataclass
from typing import Iterator, List, Tuple
from concurrent.futures import ThreadPoolExecutor, as_completed

import signal
import os
import sys


#
# Configuration
#

# Directory configuration
DATASET_DIR: Path = Path("dataset")
BUILD_DIR: Path = Path("/dev/shm/CacheRAG/build")
INPUT_DIR: Path = Path("inputs")
RESULT_DIR: Path = Path("results")
RESULT_FILE: Path = RESULT_DIR / f"benchmark{time.strftime("%H:%M:%S")}.csv"

# Compiler configuration
CXX: str = "g++"
CXX_FLAGS: List[str] = ["-O2", "-std=c++17"]

# Cachegrind configurations: (L1 cache size, L2 cache size) in bytes
CACHE_CONFIGS: List[Tuple[int, int]] = [
    (4 * 1024, 32 * 1024),
    (8 * 1024, 32 * 1024),
    (16 * 1024, 128 * 1024),
    (32 * 1024, 512 * 1024),
    (64 * 1024, 2 * 1024 * 1024),
    (128 * 1024, 4 * 1024 * 1024)
]

NWORKERS: int = max(1, mp.cpu_count() - 2)
TIMEOUT: int = 30

# Logging options
VERBOSE: bool = True
SILENT: bool = False

log_queue: mp.SimpleQueue = mp.SimpleQueue()
shutdown: mp.Event = mp.Event()

#
# Data Classes
#

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
    """

    submission: Submission
    input_file: Path
    name: str


#
# Logging Worker
#

def info(msg: str) -> None:
    """
    Print an informational message.

    Messages are only printed if VERBOSE mode is enabled.
    """

    if VERBOSE:
        log_queue.put(f"\033[32mINFO\033[0m {msg}")


def warn(msg: str) -> None:
    """
    Print a warning message.

    Messages are suppressed if SILENT mode is enabled.
    """

    if not SILENT:
        log_queue.put(f"\033[31mWARN\033[0m {msg}")


def loggerfn(log_queue: mp.SimpleQueue) -> None:
    while True:
        # Retrieve message from queue
        msg: str | None = log_queue.get()
        if msg is None:
            break
        timestamp: str = time.strftime("%H:%M:%S")
        print(f"[{timestamp}] {msg}", flush=True)


#
# CSV Writer Worker
#

def writerfn(result_queue: mp.SimpleQueue) -> None:

    queue_time: float = 0.0

    with RESULT_FILE.open("w", newline="") as file:
        writer = csv.writer(file)

        # Write CSV header
        writer.writerow([
            "problem", "submission", "L1", "L2", "Ir",
            "I1mr", "ILmr", "Dr", "D1mr", "DLmr", "Dw"
        ])

        while True:
            # Retrieve next benchmark result
            tmp: float = time.perf_counter()
            row: Tuple | None = result_queue.get()
            queue_time += time.perf_counter() - tmp
            if row is None:
                break
            writer.writerow(row)


#
# Compile Worker
#

def retrieve_submissions() -> Iterator[Submission]:
    """
    Iterate through the dataset directory and yield all C++ submissions.
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
        
        info(f"(compile) Problem '{problem}' complete")


def compilerfn(job_queue: mp.SimpleQueue, sem: mp.Semaphore) -> None:
    total: float = 0.0

    for subm in retrieve_submissions():
        # Check if process was signaled
        if shutdown.is_set():
            break

        # Skip compilation if binary exists
        if not subm.binary.exists():
            # Create a build directory for the problem
            subm.binary.parent.mkdir(parents=True, exist_ok=True)

            # Construct compiler command: `g++ -O2 --std=c++17 src.cpp -o src`
            cmd: List[str] = (
                [CXX] + CXX_FLAGS + [str(subm.source), "-o", str(subm.binary)]
            )

            try:
                subprocess.run(cmd, check=True, stderr=subprocess.DEVNULL)
            except subprocess.CalledProcessError:
                warn(f"Compilation failed: {subm.source}")
                continue

        # Generate BenchmarkJob and enqueue for compute workers
        name: str = str(subm.source.relative_to(DATASET_DIR).with_suffix(""))

        # Create path to input file if the problem needs one
        input_file: Path = INPUT_DIR / f"{subm.problem}.txt"
        if not input_file.exists():
            input_file = INPUT_DIR / "empty.txt"

        tmp: float = time.perf_counter()
        sem.acquire()
        total += time.perf_counter() - tmp
        job_queue.put(BenchmarkJob(subm, input_file, name))

    info(f"(compile) semaphore wait time: {total:.2f}")


#
# Compute Worker
#

def parse_summary(path: Path) -> List[int]:
    with path.open() as f:
        for line in f:
            if line.startswith("summary:"):
                return [int(x) for x in line.split()[1:]]

    raise RuntimeError("Cachegrind summary not found")


def workerfn(
    job_queue: mp.SimpleQueue, result_queue: mp.SimpleQueue, sem: mp.Semaphore
) -> None:

    # Temporary Cachegrind output file
    outfile: Path = Path(f"/dev/shm/CacheRAG/cg/{mp.current_process().pid}.out")

    total: float = 0.0

    while not shutdown.is_set():
        # Retrieve next job
        tmp = time.perf_counter()
        job: BenchmarkJob | None = job_queue.get()
        total += time.perf_counter() - tmp
        if job is None or shutdown.is_set():
            break
        sem.release()

        try:
            with job.input_file.open("rb") as stdin_file:
                # Benchmark each cache configuration
                for l1, l2 in CACHE_CONFIGS:
                    # Rewind input file
                    stdin_file.seek(0)
                    # Construct Cachegrind command
                    cmd = [
                        "valgrind", "--tool=cachegrind", "--quiet",
                        "--cache-sim=yes", "--branch-sim=no",
                        f"--I1={l1},8,64", f"--D1={l1},8,64",
                        f"--LL={l2},16,64", f"--cachegrind-out-file={outfile}",
                        str(job.submission.binary)
                    ]
                    # Execute Cachegrind benchmark
                    subprocess.run(
                        cmd, stdin=stdin_file, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, timeout=TIMEOUT, check=True
                    )
                    # Parse metrics from Cachegrind output
                    metrics = parse_summary(outfile)
                    result_queue.put((job.name, l1, l2, *metrics))
        except subprocess.TimeoutExpired:
            warn(f"(compute) Timeout expired: {job.name} ({l1},{l2})")
        except subprocess.CalledProcessError:
            warn(f"(compute) Cachegrind failed: {job.name} ({l1},{l2})")
        except RuntimeError as e:
            warn(f"(compute) {str(e)}: {job.name} ({l1},{l2})")

    # Unlink Cachegrind output file
    if outfile.exists():
        outfile.unlink()
    
    info(f"(compute) queue wait time: {total:.2f}")


#
# Main
#

def main() -> None:
    """
    Entry point for the benchmark pipeline.
    """

    # Create output directories
    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    RESULT_DIR.mkdir(parents=True, exist_ok=True)

    # Create multiprocessing queues
    job_queue: mp.SimpleQueue = mp.SimpleQueue()
    result_queue: mp.SimpleQueue = mp.SimpleQueue()
    sem: mp.Semaphore = mp.Semaphore(NWORKERS * 4)

    # Block signals in all child processes
    orig = signal.signal(signal.SIGINT, signal.SIG_IGN)

    # Start logger
    logger: mp.Process = mp.Process(target=loggerfn, args=(log_queue,))
    logger.start()

    info(f"Workers: {NWORKERS}")
    info("Starting benchmark")
    start_time: float = time.perf_counter()

    # Start CSV writer
    writer: mp.Process = mp.Process(target=writerfn, args=(result_queue,))
    writer.start()

    # Start compute workers
    workers: List[mp.Process] = []
    for _ in range(NWORKERS):
        p: mp.Process = mp.Process(
            target=workerfn, args=(job_queue, result_queue, sem)
        )
        workers.append(p)
        p.start()

    # Start compile worker
    compiler: mp.Process = mp.Process(target=compilerfn, args=(job_queue, sem))
    compiler.start()
    
    # Re-install default python signal handler
    signal.signal(signal.SIGINT, orig)

    # Wait for compile worker to exit
    try:
        while compiler.is_alive():
            time.sleep(10)
    except KeyboardInterrupt:
        info("SIGINT Recieved, shutting down")
        shutdown.set()
    finally:
        compiler.join()

    # Wait for compute workers to exit
    for _ in workers:
        job_queue.put(None)
    for p in workers:
        p.join()

    # Wait for CSV writer to exit
    result_queue.put(None)
    writer.join()

    # Format elapsed time
    elapsed: float = time.perf_counter() - start_time
    hours, rem = divmod(elapsed, 3600)
    minutes, seconds = divmod(rem, 60)

    info("Benchmark complete")
    info(f"Total benchmark time: {int(hours):02}:{int(minutes):02}:{int(seconds):02}")

    # Signal logger to exit
    log_queue.put(None)
    logger.join()


if __name__ == "__main__":
    main()
