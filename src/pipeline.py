#!/usr/bin/env python3

from __future__ import annotations

import multiprocessing as mp
import subprocess
from pathlib import Path
from dataclasses import dataclass
from typing import Iterator, List, Tuple


# Directory paths
DATASET_DIR: Path = Path("dataset")
BUILD_DIR: Path = Path("build")
RESULT_DIR: Path = Path("results")

# Compiler configuration
CXX: str = "g++"
CXX_FLAGS: List[str] = ["-O2", "-g", "-std=c++17"]

# Cachegrind configuration (L1 size, L2 size)
CACHE_CONFIGS: List[Tuple[int, int]] = [
    (16384, 262144),
    (32768, 262144),
    (32768, 524288),
]

NUM_WORKERS: int = max(1, mp.cpu_count() - 1)
TIMEOUT: int = 60


# ------------------------------------------------
# Data Structures
# ------------------------------------------------

@dataclass(frozen=True)
class Submission:
    problem: str
    source: Path
    binary: Path


@dataclass(frozen=True)
class BenchmarkJob:
    problem: str
    binary: Path
    solution_name: str
    l1: int
    l2: int


def retrieve_submissions() -> Iterator[Submission]:
    """
    """

    # Iterate through the dataset
    for problem_dir in sorted(DATASET_DIR.iterdir()):
        # Skip if not a directory
        if not problem_dir.is_dir():
            continue

        # Extract the problem name
        problem: str = problem_dir.name

        # Iterate through each submission in problem_dir
        for src in sorted(problem_dir.glob("*.cpp")):

            rel: Path = src.relative_to(DATASET_DIR)
            binary: Path = BUILD_DIR / rel.with_suffix("")

            yield Submission(problem, src, binary)


def compile_solution(sol: Solution) -> bool:
    """
    """

    # ?
    sol.binary.parent.mkdir(parents=True, exist_ok=True)

    # Generate compilation command: `g++ -O2 -g --std=c++17 .cpp -o .out`
    cmd: List[str] = ([CXX] + CXX_FLAGS + [str(sol.source), "-o", str(sol.binary)])

    try:
        subprocess.run(cmd, stderr=subprocess.DEVNULL, check=True)
        return True
    except subprocess.CalledProcessError:
        print("Compilation failed:", sol.source)
        return False


# ------------------------------------------------
# Worker
# ------------------------------------------------

def worker(job_queue: mp.Queue) -> None:

    while True:

        job: BenchmarkJob | None = job_queue.get()

        if job is None:
            return

        result_dir = RESULT_DIR / job.problem / job.solution_name
        result_dir.mkdir(parents=True, exist_ok=True)

        outfile = result_dir / f"L1{job.l1}_L2{job.l2}.cg"

        if outfile.exists():
            continue

        cmd = [
            "valgrind",
            "--tool=cachegrind",
            f"--I1={job.l1},8,64",
            f"--D1={job.l1},8,64",
            f"--LL={job.l2},16,64",
            f"--cachegrind-out-file={outfile}",
            str(job.binary),
        ]

        try:

            subprocess.run(
                cmd,
                stdout=subprocess.DEVNULL,
                stderr=subprocess.DEVNULL,
                timeout=TIMEOUT,
                check=False,
            )

        except subprocess.TimeoutExpired:
            pass


# ------------------------------------------------
# Job generation
# ------------------------------------------------

def generate_jobs(queue: mp.Queue) -> None:

    for sol in discover_solutions():

        if not compile_solution(sol):
            continue

        solution_name = sol.binary.stem

        for l1, l2 in CACHE_CONFIGS:

            job = BenchmarkJob(
                problem=sol.problem,
                binary=sol.binary,
                solution_name=solution_name,
                l1=l1,
                l2=l2,
            )

            queue.put(job)


# ------------------------------------------------
# Main
# ------------------------------------------------

def main() -> None:

    BUILD_DIR.mkdir(exist_ok=True)
    RESULT_DIR.mkdir(exist_ok=True)

    print("Workers:", NUM_WORKERS)

    job_queue: mp.Queue = mp.Queue(maxsize=NUM_WORKERS * 4)

    workers: List[mp.Process] = []

    for _ in range(NUM_WORKERS):

        p = mp.Process(target=worker, args=(job_queue,))
        p.start()
        workers.append(p)

    generate_jobs(job_queue)

    # stop workers
    for _ in workers:
        job_queue.put(None)

    for w in workers:
        w.join()

    print("Benchmark complete")


if __name__ == "__main__":
    main()