#!/usr/bin/env python3
"""Normalize known XenonRecomp code-generation defects in legacy PPC output."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


def normalize_cpp_source(source: str) -> str:
    """Return source with legacy XenonRecomp output repaired non-destructively."""
    source = source.replace("temp.f32[0]", "temp.f32")
    source = source.replace("temp.u8[0]", "temp.u8")
    source = source.replace("* 1f;", "* 1.0f;")

    # XenonRecomp can emit a direct call to a function whose weak alias is
    # declared later in the same translation unit. C++ requires a declaration
    # before that call. The pinned PPC context defines PPC_EXTERN_FUNC(name)
    # as the matching declaration without changing the generated definition.
    call_positions: dict[str, int] = {}
    for match in re.finditer(
        r"(?m)^\s*(sub_[0-9A-Fa-f]{8})\(ctx,\s*base\);", source
    ):
        call_positions.setdefault(match.group(1), match.start())

    declarations = []
    for name, call_pos in call_positions.items():
        alias_match = re.search(
            rf"PPC_WEAK_FUNC\(\s*{re.escape(name)}\s*\)\s*;", source
        )
        if alias_match and alias_match.start() > call_pos:
            # The declaration may already have been inserted by a prior run.
            if not re.search(
                rf"(?m)^PPC_EXTERN_FUNC\(\s*{re.escape(name)}\s*\);",
                source[:call_pos],
            ):
                declarations.append(name)

    if declarations:
        include_end = source.find("\n")
        if include_end < 0:
            raise ValueError("Generated PPC source has no include line")
        forward_declarations = "".join(
            f"PPC_EXTERN_FUNC({name});\n" for name in sorted(declarations)
        )
        source = source[: include_end + 1] + forward_declarations + source[include_end + 1 :]

    # bctr forms its destination from CTR[0:29] followed by two zero bits.
    # Two historical switch entries retained nonzero low bits; restore the
    # actual instruction boundaries and place labels where execution lands.
    source = source.replace("goto loc_8281405E;", "goto loc_8281405C;")
    source = source.replace("goto loc_82814C67;", "goto loc_82814C64;")

    if "goto loc_8281405C;" in source and "loc_8281405C:" not in source:
        anchor = (
            "loc_82814058:\n"
            "\t// lwz r10,8(r31)\n"
            "\tctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);\n"
            "\t// cmpwi cr6,r10,0"
        )
        replacement = (
            "loc_82814058:\n"
            "\t// lwz r10,8(r31)\n"
            "\tctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);\n"
            "loc_8281405C:\n"
            "\t// cmpwi cr6,r10,0"
        )
        if anchor not in source:
            raise ValueError("Cannot locate insertion point for legacy PPC label loc_8281405C")
        source = source.replace(anchor, replacement, 1)

    if "goto loc_82814C64;" in source and "loc_82814C64:" not in source:
        anchor = (
            "\t// sthx r9,r10,r31\n"
            "\tPPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);\n"
            "\t// lwz r10,104(r31)"
        )
        replacement = (
            "\t// sthx r9,r10,r31\n"
            "\tPPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);\n"
            "loc_82814C64:\n"
            "\t// lwz r10,104(r31)"
        )
        if anchor not in source:
            raise ValueError("Cannot locate insertion point for legacy PPC label loc_82814C64")
        source = source.replace(anchor, replacement, 1)

    # Import thunk records were emitted as data-only functions
    # (`.long 0x010100DC`), so direct `bl` calls to them did nothing. Route
    # them through the runtime function table, where the import registry
    # installs its trampoline at the thunk address.
    def route_thunk(match: re.Match[str]) -> str:
        word = int(match.group("word"), 16)
        if (word >> 24) != 0x01 or ((word >> 16) & 0xFF) > 1:
            return match.group(0)
        return (
            f"PPC_FUNC_IMPL(__imp__sub_{match.group('addr')}) {{\n"
            "\tPPC_FUNC_PROLOGUE();\n"
            f"\tctx.ctr.u32 = 0x{match.group('addr')};\n"
            f"\tPPC_CALL_INDIRECT_FUNC(0x{match.group('addr')});\n"
            "}"
        )

    source = re.sub(
        r"PPC_FUNC_IMPL\(__imp__sub_(?P<addr>[0-9A-Fa-f]{8})\) \{\n"
        r"\tPPC_FUNC_PROLOGUE\(\);\n"
        r"\t// \.long (?P<word>0x[0-9A-Fa-f]+)\n\}",
        route_thunk,
        source,
    )

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
