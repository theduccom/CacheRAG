#!/usr/bin/env python3

from __future__ import annotations

import multiprocessing
import subprocess
from pathlib import Path
from dataclasses import dataclass
from typing import List, Tuple, Iterable
from concurrent.futures import ProcessPoolExecutor


# Directory paths
DATASET_DIR: Path = Path("dataset")
BUILD_DIR: Path = Path("out")
RESULT_DIR: Path = Path("results")

# Compiler configuration
CXX: str = "g++"
CXXFLAGS: List[str] = ["-O2", "-g", "-std=c++17"]

# Cachegrind configuration (L1 size, L2 size)
CACHE_CONFIGS: List[Tuple[int, int]] = [
    (16384, 262144),
    (32768, 262144),
    (32768, 524288),
]

# Workers for Cachegrind
NWORKERS: int = max(1, multiprocessing.cpu_count() - 1)
TIMEOUT: int = 60


# Data structures
@dataclass(frozen=True)
class Solution:
    """A submission"""
    problem: str
    source: Path
    binary: Path


@dataclass(frozen=True)
class CacheConfig:
    """Cache configuration for a benchmark run."""
    l1_size: int
    l2_size: int


@dataclass(frozen=True)
class BenchmarkJob:
    """A single cachegrind execution job."""
    solution: Solution
    config: CacheConfig


def collect_solutions(root: Path) -> List[Path]:
    """
    Collect all .cpp solution files in the dataset.

    Directory structure assumed:

    dataset/
        problem1/
            solution1.cpp
            solution2.cpp
    """

    solutions: List[Path] = []

    N = 0

    # Iterate through root directory
    for problem_dir in root.iterdir():
        # Skip if not a problem directory
        if not problem_dir.is_dir():
            continue

        # Extract C++ solutions
        for file in problem_dir.glob("*.cpp"):
            solutions.append(file)
            N = N + 1
            if N > 500:
                break

    return solutions


def compile_solution(sol: Solution) -> Solution:
    """
    Compile a C++ source file into a binary.

    Returns the path to the compiled binary.
    """

    sol.binary.parent.mkdir(parents=True, exist_ok=True)

    # Generate compilation command: `g++ -O2 -g --std=c++17 .cpp -o .out`
    cmd: List[str] = ([CXX] + CXXFLAGS + [str(sol.src), "-o", str(sol.binary)])

    subprocess.run(cmd, stderr=subprocess.DEVNULL, check=True)

    return binary


# ------------------------------------------------
# Cachegrind execution
# ------------------------------------------------

def run_cachegrind_job(job: BenchmarkJob) -> JobResult:
    """
    Execute a single cachegrind benchmark job.
    """

    binary: Path = job.binary
    config: CacheConfig = job.config

    result_dir: Path = RESULT_DIR / binary.parent.name
    result_dir.mkdir(parents=True, exist_ok=True)

    outfile: Path = result_dir / (
        f"{binary.name}_L1{config.l1_size}_L2{config.l2_size}.cg"
    )

    cmd: List[str] = [
        "valgrind",
        "--tool=cachegrind",
        "--cache-sim=yes",
        f"--I1={config.l1_size},8,64",
        f"--D1={config.l1_size},8,64",
        f"--LL={config.l2_size},16,64",
        f"--cachegrind-out-file={outfile}",
        str(binary),
    ]

    try:
        subprocess.run(
            cmd,
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=True,
        )

        return JobResult(
            status="OK",
            binary_name=binary.name,
            l1_size=config.l1_size,
            l2_size=config.l2_size,
        )

    except subprocess.CalledProcessError:
        return JobResult(
            status="FAIL",
            binary_name=binary.name,
            l1_size=config.l1_size,
            l2_size=config.l2_size,
        )


# ------------------------------------------------
# Job creation
# ------------------------------------------------

def create_jobs(
    binaries: Iterable[Path],
    configs: Iterable[Tuple[int, int]]
) -> List[BenchmarkJob]:
    """
    Create benchmark jobs for each binary and cache configuration.
    """

    jobs: List[BenchmarkJob] = []

    for binary in binaries:
        for (l1, l2) in configs:
            config: CacheConfig = CacheConfig(l1, l2)

            jobs.append(
                BenchmarkJob(
                    binary=binary,
                    config=config,
                )
            )

    return jobs


# Benchmark pipeline
def main() -> None:

    BUILD_DIR.mkdir(exist_ok=True)
    RESULT_DIR.mkdir(exist_ok=True)

    print("Collecting solutions...")

    sources: List[Path] = collect_solutions(DATASET_DIR)

    print(f"Found {len(sources)} source files")

    print("Compiling solutions...")

    binaries: List[Path] = []

    for src in sources:
        try:
            binary: Path = compile_solution(src)
            binaries.append(binary)
        except Exception as e:
            print("Compile failed:", src, e)

    print(f"Compiled {len(binaries)} binaries")

    # -------------------------
    # Job generation
    # -------------------------

    jobs: List[BenchmarkJob] = create_jobs(binaries, CACHE_CONFIGS)

    print(f"Total cachegrind jobs: {len(jobs)}")
    print(f"Running with {MAX_WORKERS} workers")

    success: int = 0
    fail: int = 0

    # -------------------------
    # Parallel execution
    # -------------------------

    with ProcessPoolExecutor(MAX_WORKERS) as pool:

        futures = [pool.submit(run_cachegrind_job, job) for job in jobs]

        for future in as_completed(futures):

            result: JobResult = future.result()

            if result.status == "OK":
                success += 1
            else:
                fail += 1

    print("Finished")
    print("Success:", success)
    print("Fail:", fail)


if __name__ == "__main__":
    main()
