#!/usr/bin/env python3

from __future__ import annotations

import csv
from pathlib import Path
from dataclasses import dataclass
from typing import List, Optional


RESULT_DIR: Path = Path("results")
OUTPUT_FILE: Path = Path("cachegrind_dataset.csv")


@dataclass
class CachegrindMetrics:
    problem: str
    solution: str
    l1_size: int
    l2_size: int

    Ir: int
    I1mr: int
    ILmr: int
    Dr: int
    D1mr: int
    DLmr: int
    Dw: int


def parse_summary_line(line: str) -> Optional[List[int]]:
    """
    Parse 'summary:' line from cachegrind output.
    """

    if not line.startswith("summary:"):
        return None

    values = line.split()[1:]
    return [int(v) for v in values]


def parse_filename(path: Path) -> tuple[str, int, int]:
    """
    Extract solution name and cache sizes from filename.

    Example:
    sol_L132768_L2262144.cg
    """

    name = path.stem

    parts = name.split("_")

    solution = parts[0]

    l1 = int(parts[1].replace("L1", ""))
    l2 = int(parts[2].replace("L2", ""))

    return solution, l1, l2


def parse_cachegrind_file(path: Path) -> Optional[CachegrindMetrics]:

    problem = path.parent.name

    solution, l1, l2 = parse_filename(path)

    with open(path) as f:
        for line in f:
            metrics = parse_summary_line(line)

            if metrics:
                return CachegrindMetrics(
                    problem=problem,
                    solution=solution,
                    l1_size=l1,
                    l2_size=l2,
                    Ir=metrics[0],
                    I1mr=metrics[1],
                    ILmr=metrics[2],
                    Dr=metrics[3],
                    D1mr=metrics[4],
                    DLmr=metrics[5],
                    Dw=metrics[6],
                )

    return None


def discover_cachegrind_files(root: Path) -> List[Path]:

    files: List[Path] = []

    for problem in root.iterdir():
        if not problem.is_dir():
            continue

        for file in problem.glob("*.cg"):
            files.append(file)

    return files


def main() -> None:

    files = discover_cachegrind_files(RESULT_DIR)

    dataset: List[CachegrindMetrics] = []

    for file in files:

        metrics = parse_cachegrind_file(file)

        if metrics:
            dataset.append(metrics)

    print(f"Parsed {len(dataset)} results")

    with open(OUTPUT_FILE, "w", newline="") as csvfile:

        writer = csv.writer(csvfile)

        writer.writerow([
            "problem",
            "solution",
            "L1_size",
            "L2_size",
            "Ir",
            "I1_misses",
            "IL_misses",
            "Dr",
            "D1_misses",
            "DL_misses",
            "Dw"
        ])

        for row in dataset:

            writer.writerow([
                row.problem,
                row.solution,
                row.l1_size,
                row.l2_size,
                row.Ir,
                row.I1mr,
                row.ILmr,
                row.Dr,
                row.D1mr,
                row.DLmr,
                row.Dw
            ])

    print("Dataset written to", OUTPUT_FILE)


if __name__ == "__main__":
    main()