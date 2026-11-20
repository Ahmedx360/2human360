#!/usr/bin/env python3
"""Normalize two known XenonRecomp code-generation defects in legacy PPC output."""

from __future__ import annotations

import argparse
from pathlib import Path


def normalize_cpp_source(source: str) -> str:
    """Return source with scalar PPCRegister scratch fields emitted correctly."""
    source = source.replace("temp.f32[0]", "temp.f32")
    source = source.replace("temp.u8[0]", "temp.u8")
    source = source.replace("* 1f;", "* 1.0f;")
    return source


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("input", type=Path, help="Generated C++ input file")
    parser.add_argument("--output", type=Path, help="Write normalized output to this path")
    parser.add_argument("--in-place", action="store_true", help="Replace the input file")
    args = parser.parse_args()

    if args.in_place and args.output:
        parser.error("--in-place and --output cannot be used together")
    if not args.in_place and not args.output:
        parser.error("provide --output or --in-place")

    original = args.input.read_text(encoding="utf-8")
    normalized = normalize_cpp_source(original)
    destination = args.input if args.in_place else args.output
    assert destination is not None
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text(normalized, encoding="utf-8", newline="\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
