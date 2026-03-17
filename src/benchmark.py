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
from typing import Iterator, List, Tuple, TypeAlias

import signal
import os
import sys


#/
# Configuration
#/

# Directory configuration
DATASET_DIR: Path = Path("dataset")
INPUT_DIR: Path = Path("inputs")
RESULT_DIR: Path = Path("results")
BUILD_DIR: Path = Path("/dev/shm/CacheRAG/build")
CACHEGRIND_DIR: Path = Path("/dev/shm/CacheRAG/cg")

# Result files
RESULT_FILE: Path = RESULT_DIR / f"benchmark{time.strftime('%H:%M:%S')}.csv"
LOG_FILE: Path = RESULT_DIR / f"log.txt"

# Compiler configuration
CXX: str = "g++"
CXX_FLAGS: List[str] = ["-O2", "-std=c++17", "-pipe", "-s"]

# Cachegrind configurations: (L1 cache size, L2 cache size) in bytes
CACHE_CONFIGS: List[Tuple[int, int]] = [
    (4 * 1024, 32 * 1024),
    (8 * 1024, 32 * 1024),
    (16 * 1024, 128 * 1024),
    (32 * 1024, 512 * 1024),
    (64 * 1024, 2 * 1024 * 1024),
    (128 * 1024, 4 * 1024 * 1024)
]

NWORKERS: int = max(1, mp.cpu_count() - 1)
NUMA_CORES: int = 2
SLEEP_TIME: int = 10
TIMEOUT: int = 30

# Logging options
VERBOSE: bool = True
SILENT: bool = False

# Multiprocessing setup
mp.set_start_method("fork")
stat_q: mp.SimpleQueue = mp.SimpleQueue()
log_q: mp.SimpleQueue = mp.SimpleQueue()
shutdown: mp.Event = mp.Event()


#/
# Data Classes
#/

@dataclass(frozen=True, slots=True)
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


@dataclass(frozen=True, slots=True)
class BenchmarkJob:
    """
    Represents a single Cachegrind benchmarking job.
    """

    submission: Submission
    input_file: Path
    name: str


#/
# Logging Worker
#/

def info(msg: str) -> None:
    if VERBOSE:
        log_q.put(("INFO", msg))


def warn(msg: str) -> None:
    if not SILENT:
        log_q.put(("WARN", msg))


def loggerfn(log_q: mp.SimpleQueue) -> None:
    with LOG_FILE.open("w") as file:
        while True:
            # Retrieve message from queue
            item: Tuple[str, str] | None = log_q.get()
            if item is None:
                break

            level, msg = item
            timestamp: str = time.strftime("%H:%M:%S")

            # Write to log file
            file.write(f"[{timestamp}] [{level}] {msg}\n")

            # Add shell colors to level
            if level == "INFO":
                level = "\033[32mINFO\033[0m"
            elif level == "WARN":
                level = "\033[31mWARN\033[0m"

            # Write to stdout
            print(f"[{timestamp}] [{level}] {msg}", flush=True)


#/
# Compile stage
#/

def c_producerfn(compile_q: mp.SimpleQueue, sem: mp.Semaphore):
    for problem_dir in sorted(DATASET_DIR.iterdir()):
        # Check if process was signaled
        if shutdown.is_set():
            break

        # Skip non-directory entries
        if not problem_dir.is_dir():
            continue

        problem: str = problem_dir.name
        batch: List[Submission] = []

        for source in sorted(problem_dir.glob("*.cpp")):
            # Construct build path: BUILD_DIR/problem/submission
            rel = source.relative_to(DATASET_DIR)
            binary = BUILD_DIR / rel.with_suffix("")

            batch.append(Submission(problem, source, binary))

        if not batch:
            continue
        
        # Create a build directory for the problem
        batch[0].binary.parent.mkdir(parents=True, exist_ok=True)

        mid: int = len(batch) // 2

        # Put problems into queue with batch size approx 150
        sem.acquire()
        compile_q.put((problem, batch[:mid]))
        sem.acquire()
        compile_q.put((problem, batch[mid:]))


def _compile(id: int, subm: Submission) -> bool:
    """
    Compile a single submission.
    """

    # Skip compilation if binary exists
    if subm.binary.exists():
        return True

    # Create compilation command with NUMA bindings
    cmd: List[str] = ["numactl", f"--cpunodebind={id}", f"--membind={id}"]
    cmd += [CXX] + CXX_FLAGS + [str(subm.source), "-o", str(subm.binary)]

    try:
        subprocess.run(cmd, check=True, stderr=subprocess.DEVNULL)
        return True

    except subprocess.CalledProcessError:
        warn(f"Compilation failed: {subm.source}")
        return False


def compilerfn(id: int, compile_q: mp.SimpleQueue, sem: mp.Semaphore):
    # Statistics
    q_delay: float = 0.0
    f_subm: int = 0

    while not shutdown.is_set():
        # Retrieve batch from queue
        tmp: float = time.perf_counter()
        job: Tuple[str, List[Submissions]] | None = compile_q.get()
        q_delay += time.perf_counter() - tmp
        if job is None or shutdown.is_set():
            break

        problem, batch = job

        # Compile every submission in batch
        for subm in batch:
            if not _compile(id, subm):
                f_subm += 1

        sem.release()

    stat_q.put((q_delay, f_subm))


#
# Benchmark stage
#

def b_producerfn(benchmark_q: mp.SimpleQueue, sem: mp.Semaphore) -> None:
    for problem_dir in sorted(BUILD_DIR.iterdir()):
        # Check if process was signaled
        if shutdown.is_set():
            break

        problem: str = problem_dir.name
        empty: Path = Path("")

        # Create path to input file if the problem needs one
        input_file: Path = INPUT_DIR / f"{problem}.txt"
        if not input_file.exists():
            input_file = INPUT_DIR / "empty.txt"

        for binary in sorted(problem_dir.glob("*")):
            rel = binary.relative_to(BUILD_DIR)
            subm: Submission = Submission(problem, rel, binary)

            sem.acquire()
            benchmark_q.put(BenchmarkJob(subm, input_file, str(rel)))

        info(f"(producer) Problem {problem} complete")


def writerfn(result_q: mp.SimpleQueue) -> None:
    # Statistics
    q_delay: float = 0.0

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
            row: Tuple | None = result_q.get()
            q_delay += time.perf_counter() - tmp
            if row is None:
                break

            writer.writerow(row)

    stat_q.put(q_delay)


def _parse_summary(path: Path) -> List[int]:
    with path.open() as f:
        for line in f:
            if line.startswith("summary:"):
                return [int(x) for x in line.split()[1:]]

    raise RuntimeError("Cachegrind summary not found")


def _cachegrind() -> None:
    pass


def benchmarkfn(id, benchmark_q, result_q, sem) -> None:
    # Statistics
    q_delay: float = 0.0
    n_timeout: int = 0
    n_cachegrind: int = 0

    # Temporary Cachegrind output file
    outfile: Path = CACHEGRIND_DIR / f"{mp.current_process().pid}.out"

    while not shutdown.is_set():
        # Retrieve next benchmark job
        tmp: float = time.perf_counter()
        job: BenchmarkJob | None = benchmark_q.get()
        q_delay += time.perf_counter() - tmp
        if job is None or shutdown.is_set():
            break

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
                        cmd,
                        stdin=stdin_file,
                        stdout=subprocess.DEVNULL,
                        stderr=subprocess.DEVNULL,
                        timeout=TIMEOUT, check=True
                    )
                    # Parse metrics from Cachegrind output
                    metrics = _parse_summary(outfile)
                    result_q.put((job.name, l1, l2, *metrics))
        except subprocess.TimeoutExpired:
            warn(f"(compute) Timeout expired: {job.name} ({l1},{l2})")
            n_timeout += 1
        except subprocess.CalledProcessError:
            warn(f"(compute) Cachegrind failed: {job.name} ({l1},{l2})")
            n_cachegrind += 1
        except RuntimeError as e:
            warn(f"(compute) {str(e)}: {job.name} ({l1},{l2})")

        # Release benchmark_q semaphore
        sem.release()

    # Unlink Cachegrind output file
    if outfile.exists():
        outfile.unlink()

    stat_q.put(("benchmark", q_delay, n_timeout, n_cachegrind))


#/
# Pipeline driver
#/

def _format_elpased(start: float, end: float) -> Tuple[int, int, int]:
    elapsed: float = end - start
    hours, rem = divmod(elapsed, 3600)
    minutes, seconds = divmod(rem, 60)

    return (int(hours), int(minutes), int(seconds))


def _collect_statistics() -> None:
    stat_q.put(None)


def _wait(process: mp.Process) -> None:
    try:
        while process.is_alive():
            time.sleep(SLEEP_TIME)
    except KeyboardInterrupt:
        info("SIGINT Recieved, shutting down")
        shutdown.set()
    finally:
        process.join()


def main() -> None:
    """
    Entry point for the benchmark pipeline.
    """

    # Create output directories
    BUILD_DIR.mkdir(parents=True, exist_ok=True)
    RESULT_DIR.mkdir(parents=True, exist_ok=True)
    CACHEGRIND_DIR.mkdir(parents=True, exist_ok=True)

    # Create compile multiprocessing queues
    compile_q: mp.SimpleQueue = mp.SimpleQueue()
    c_sem: mp.Semaphore = mp.Semaphore(NWORKERS * 2)

    # Block signals in all child processes
    orig = signal.signal(signal.SIGINT, signal.SIG_IGN)

    # Start logger
    logger = mp.Process(target=loggerfn, args=(log_q,))
    logger.start()

    info(f"Workers: {NWORKERS}")

    workers: List[mp.Process] = []

    # Start compile workers
    for i in range(NWORKERS):
        p = mp.Process(target=compilerfn, args=(i % NUMA_CORES, compile_q, c_sem))
        p.start()
        workers.append(p)

    info("Starting compilation stage")
    tstart: float = time.perf_counter()

    # Start producer
    producer = mp.Process(target=c_producerfn, args=(compile_q, c_sem))
    producer.start()

    # Re-install default python signal handler
    signal.signal(signal.SIGINT, orig)

    # Wait for producer to exit
    _wait(producer)

    # Wait for compile workers to exit
    for _ in workers:
        compile_q.put(None)
    for p in workers:
        p.join()
    workers = []

    # Format elapsed time
    tend: float = time.perf_counter()
    hrs, mins, secs = _format_elpased(tstart, tend)

    info("Compilation stage complete")
    info(f"Total compilation time: {hrs:02}:{mins:02}:{secs:02}")

    # Collect pipeline statistics
    _collect_statistics()

    # Create benchmark multiprocessing queues
    benchmark_q: mp.SimpleQueue = mp.SimpleQueue()
    result_q: mp.SimpleQueue = mp.SimpleQueue()
    b_sem: mp.Semaphore = mp.Semaphore(NWORKERS * 3)

    # Block signals in all child processes
    signal.signal(signal.SIGINT, signal.SIG_IGN)

    # Start benchmark workers
    for i in range(NWORKERS):
        p = mp.Process(target=benchmarkfn, args=(0, benchmark_q, result_q, b_sem))
        p.start()
        workers.append(p)

    # Start CSV writer
    writer = mp.Process(target=writerfn, args=(result_q,))
    writer.start()

    info("Starting benchmark stage")
    tstart: float = time.perf_counter()

    # Start producer
    producer = mp.Process(target=b_producerfn, args=(benchmark_q, b_sem))
    producer.start()

    # Re-install default python signal handler
    signal.signal(signal.SIGINT, orig)

    # Wait for producer to exit
    _wait(producer)

    # Wait for compute workers to exit
    for _ in workers:
        benchmark_q.put(None)
    for p in workers:
        p.join()

    # Wait for writer to exit
    result_q.put(None)
    writer.join()

    # Format elapsed time
    tend: float = time.perf_counter()
    hrs, mins, secs = _format_elpased(tstart, tend)

    info("Benchmark stage complete")
    info(f"Total benchmark time: {hrs:02}:{mins:02}:{secs:02}")
    
    # Collect pipeline statistics
    _collect_statistics()

    # Wait for logger to exit
    log_q.put(None)
    logger.join()


if __name__ == "__main__":
    main()