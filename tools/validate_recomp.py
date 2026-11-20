#!/usr/bin/env python3
"""Validate Too Human's generated PPC artifacts and recompilation metadata."""

from __future__ import annotations

import re
import sys
import tomllib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))

from fix_generated_cpp import normalize_cpp_source


def read_define(text: str, name: str) -> int:
    pattern = rf"^\s*#define\s+{re.escape(name)}\s+(0x[0-9a-fA-F]+|[0-9]+)(?:ull|llu|ll|u)?\s*$"
    match = re.search(pattern, text, re.MULTILINE)
    if not match:
        raise ValueError(f"Missing integer define: {name}")
    return int(match.group(1), 0)


def main() -> int:
    errors: list[str] = []
    warnings: list[str] = []

    config_path = ROOT / "TooHumanRecompLib/config/TooHumanRecomp.toml"
    switch_path = ROOT / "TooHumanRecompLib/config/switch_tables.toml"
    ppc_dir = ROOT / "TooHumanRecompLib/ppc"
    mapping_path = ppc_dir / "ppc_func_mapping.cpp"
    shared_path = ppc_dir / "ppc_recomp_shared.h"

    try:
        config = tomllib.loads(config_path.read_text(encoding="utf-8"))
        switches = tomllib.loads(switch_path.read_text(encoding="utf-8"))
    except (OSError, tomllib.TOMLDecodeError) as exc:
        print(f"ERROR: cannot parse recompilation config: {exc}", file=sys.stderr)
        return 1

    main_config = config.get("main", {})
    expected_input = (config_path.parent / main_config.get("file_path", "")).resolve()
    if expected_input != (ROOT / "private/default.exe").resolve():
        errors.append(f"file_path resolves to {expected_input}, expected repository-root private/default.exe")

    output_path = (config_path.parent / main_config.get("out_directory_path", "")).resolve()
    if output_path != ppc_dir.resolve():
        errors.append(f"out_directory_path resolves to {output_path}, expected {ppc_dir}")
    switch_config = (config_path.parent / main_config.get("switch_table_file_path", "")).resolve()
    if switch_config != switch_path.resolve():
        errors.append("switch_table_file_path does not resolve to config/switch_tables.toml")

    try:
        ppc_config = (ppc_dir / "ppc_config.h").read_text(encoding="utf-8")
        image_base = read_define(ppc_config, "PPC_IMAGE_BASE")
        image_size = read_define(ppc_config, "PPC_IMAGE_SIZE")
        code_base = read_define(ppc_config, "PPC_CODE_BASE")
        code_size = read_define(ppc_config, "PPC_CODE_SIZE")
    except (OSError, ValueError) as exc:
        errors.append(f"Invalid PPC memory configuration: {exc}")
        image_base = image_size = code_base = code_size = 0

    image_end = image_base + image_size
    if not image_size or image_end > 0x1_0000_0000:
        errors.append("PPC image range is empty or exceeds the 32-bit guest address space")
    if not code_size or not (image_base <= code_base < image_end):
        errors.append("PPC code range does not begin inside the guest image")
    elif code_base + code_size > image_end:
        warnings.append("PPC_CODE_SIZE extends beyond the declared image; verify section boundaries")

    function_bounds = config.get("functions", [])
    addresses = [item.get("address") for item in function_bounds]
    if len(addresses) != len(set(addresses)):
        errors.append("Duplicate manually-bounded function addresses are present")
    for item in function_bounds:
        address, size = item.get("address"), item.get("size")
        if not isinstance(address, int) or not isinstance(size, int) or size <= 0:
            errors.append(f"Invalid manual function bound: {item!r}")
        elif not (image_base <= address < image_end and address + size <= image_end):
            errors.append(f"Manual function bound lies outside the guest image: {item!r}")

    switch_entries = switches.get("switch", [])
    if not switch_entries:
        errors.append("No switch tables were found")
    for index, item in enumerate(switch_entries):
        labels = item.get("labels", [])
        if not isinstance(item.get("base"), int) or not isinstance(item.get("default"), int) or not labels:
            errors.append(f"Malformed switch table #{index + 1}")
        elif any(not isinstance(label, int) for label in labels):
            errors.append(f"Non-integer switch label in table #{index + 1}")

    if not mapping_path.is_file() or not shared_path.is_file():
        errors.append("Generated function mapping or shared declaration header is missing")
    else:
        mapping_text = mapping_path.read_text(encoding="utf-8")
        shared_text = shared_path.read_text(encoding="utf-8")
        mapping_ids = re.findall(r"\{\s*0x([0-9A-Fa-f]+),\s*sub_([0-9A-Fa-f]+)\s*\}", mapping_text)
        declared_ids = re.findall(r"PPC_EXTERN_FUNC\(sub_([0-9A-Fa-f]+)\)", shared_text)
        mapping_addresses = {int(guest, 16) for guest, symbol in mapping_ids if guest.lower() == symbol.lower()}
        declared_addresses = {int(symbol, 16) for symbol in declared_ids}
        if not mapping_ids or not declared_ids:
            errors.append("Function mapping or shared declarations contain no generated symbols")
        if mapping_addresses != declared_addresses:
            errors.append(
                "Function mapping and declarations differ "
                f"({len(mapping_addresses)} mapped vs {len(declared_addresses)} declared)"
            )
        if "PPCFuncMappings[]" not in mapping_text or "{ 0, nullptr }" not in mapping_text:
            errors.append("PPCFuncMappings array or null terminator is missing")

    generated = sorted(
        ppc_dir.glob("ppc_recomp.*.cpp"),
        key=lambda path: int(re.search(r"\.(\d+)\.cpp$", path.name).group(1)),
    )
    indices = [int(re.search(r"\.(\d+)\.cpp$", path.name).group(1)) for path in generated]
    if not generated:
        errors.append("No generated ppc_recomp.*.cpp translation units were found")
    elif indices != list(range(len(indices))):
        errors.append("Generated translation-unit numbering is not contiguous from ppc_recomp.0.cpp")

    fixed_files: list[str] = []
    bad_patterns = re.compile(
        r"temp\.(?:s8|u8|s16|u16|s32|u32|s64|u64|f32|f64)\[\d+\]|(?<![\w.])\d+f\b"
    )
    for source_path in generated:
        try:
            original = source_path.read_text(encoding="utf-8")
        except OSError as exc:
            errors.append(f"Cannot read {source_path.name}: {exc}")
            continue
        normalized = normalize_cpp_source(original)
        if normalized != original:
            fixed_files.append(source_path.name)
        remaining = bad_patterns.search(normalized)
        if remaining:
            errors.append(f"Unfixed scratch/literal emission in {source_path.name}: {remaining.group(0)}")

    nonempty_error_logs = []
    for sidecar in ppc_dir.glob("ppc_recomp.*.cpp.err"):
        try:
            content = sidecar.read_text(encoding="utf-8", errors="replace")
        except OSError:
            continue
        if content.strip():
            nonempty_error_logs.append(sidecar.name)
    if nonempty_error_logs:
        errors.append("Non-empty compiler-error sidecars remain: " + ", ".join(nonempty_error_logs[:12]))

    if fixed_files:
        warnings.append("Build-time normalization required for legacy units: " + ", ".join(fixed_files))

    print(
        f"Too Human PPC validation: {len(generated)} translation units, "
        f"{len(function_bounds)} manual function bounds, {len(switch_entries)} switch tables"
    )
    if fixed_files:
        print(f"Legacy units normalized by build helper: {len(fixed_files)}")
    for warning in warnings:
        print(f"WARNING: {warning}")
    for error in errors:
        print(f"ERROR: {error}", file=sys.stderr)

    return 1 if errors else 0


if __name__ == "__main__":
    raise SystemExit(main())
