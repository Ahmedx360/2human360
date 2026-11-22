#!/usr/bin/env python3
"""Prepare and run Too Human's pinned XenonRecomp toolchain safely.

The generator is kept separate from the runtime build. Generated PPC output is
built in a staging directory and only replaces TooHumanRecompLib/ppc after its
required files and the repository's artifact validator pass.
"""

from __future__ import annotations

import argparse
import os
import re
import shutil
import subprocess
import sys
import tempfile
import tomllib
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
SUBMODULE = ROOT / "tools" / "XenonRecomp"
PATCH = ROOT / "tools" / "patches" / "xenonrecomp-pe-loader.patch"
LIB_ROOT = ROOT / "TooHumanRecompLib"
CONFIG_ROOT = LIB_ROOT / "config"
DEFAULT_PE_CONFIG = CONFIG_ROOT / "TooHumanRecomp.toml"
DEFAULT_XEX_CONFIG = CONFIG_ROOT / "TooHumanRecomp.XEX.toml"
DEFAULT_BUILD_DIR = ROOT / "build" / "xenon-tools"
REQUIRED_GENERATED_FILES = (
    "ppc_func_mapping.cpp",
    "ppc_recomp_shared.h",
    "ppc_context.h",
    "ppc_config.h",
)
SOURCE_PATTERN = re.compile(r"^ppc_recomp\.(\d+)\.cpp$")


class RecompileError(RuntimeError):
    """A recoverable error in the local recompilation workflow."""


def run_command(command: list[str], *, cwd: Path = ROOT) -> None:
    print("$ " + subprocess.list2cmdline(command), flush=True)
    try:
        result = subprocess.run(command, cwd=cwd, check=False)
    except FileNotFoundError as exc:
        raise RecompileError(f"Required executable was not found: {command[0]}") from exc
    if result.returncode != 0:
        raise RecompileError(
            f"Command failed with exit code {result.returncode}: "
            f"{subprocess.list2cmdline(command)}"
        )


def check_patch_state(submodule: Path = SUBMODULE, patch: Path = PATCH) -> str:
    """Return 'applied' or 'ready'; never reset or modify unrelated submodule work."""
    if not (submodule / ".git").exists() and not (submodule / ".git").is_file():
        raise RecompileError(
            "XenonRecomp submodule is not initialized. Run "
            "'git submodule update --init --recursive' first."
        )
    if not patch.is_file():
        raise RecompileError(f"Required project patch is missing: {patch}")

    reverse = subprocess.run(
        ["git", "apply", "--reverse", "--check", str(patch)],
        cwd=submodule,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
        check=False,
    )
    if reverse.returncode == 0:
        return "applied"

    forward = subprocess.run(
        ["git", "apply", "--check", str(patch)],
        cwd=submodule,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
        check=False,
    )
    if forward.returncode == 0:
        return "ready"

    detail = (forward.stderr or forward.stdout or reverse.stderr).strip()
    raise RecompileError(
        "The Too Human XenonRecomp patch is neither cleanly applied nor cleanly "
        "applicable. The submodule may contain partial or conflicting local edits. "
        "No files were changed. Reconcile tools/XenonRecomp manually before retrying."
        + (f"\n{detail}" if detail else "")
    )


def ensure_patch_applied(*, check_only: bool = False) -> str:
    state = check_patch_state()
    if state == "applied":
        print("XenonRecomp title patch: already applied")
        return state
    if check_only:
        print("XenonRecomp title patch: cleanly applicable (not applied)")
        return state

    run_command(["git", "apply", str(PATCH)], cwd=SUBMODULE)
    print("XenonRecomp title patch: applied")
    return "applied"


def tool_build_directory(value: str | None) -> Path:
    path = Path(value).expanduser() if value else DEFAULT_BUILD_DIR
    return path.resolve() if path.is_absolute() else (ROOT / path).resolve()


def build_tools(args: argparse.Namespace) -> None:
    ensure_patch_applied()
    build_dir = tool_build_directory(args.build_dir)
    build_dir.parent.mkdir(parents=True, exist_ok=True)
    command = [
        "cmake",
        "-S", str(SUBMODULE),
        "-B", str(build_dir),
        "-DCMAKE_BUILD_TYPE=Release",
    ]
    if args.generator:
        command.extend(["-G", args.generator])
    run_command(command)
    run_command([
        "cmake", "--build", str(build_dir),
        "--target", "XenonRecomp", "XenonAnalyse",
        "--parallel",
    ])
    print(f"XenonRecomp tools built in: {build_dir}")


def find_built_tool(name: str, build_dir: Path) -> Path:
    suffix = ".exe" if os.name == "nt" else ""
    # Each executable is declared in a separate CMake subdirectory. Ninja and
    # Make therefore normally place it below <build>/<target>/.
    candidates = (
        build_dir / f"{name}{suffix}",
        build_dir / name,
        build_dir / name / f"{name}{suffix}",
        build_dir / name / name,
        build_dir / name / "Release" / f"{name}{suffix}",
        build_dir / "bin" / f"{name}{suffix}",
        build_dir / "Release" / f"{name}{suffix}",
    )
    for candidate in candidates:
        if candidate.is_file():
            return candidate
    raise RecompileError(
        f"Could not find {name} in {build_dir}. Run "
        "'python tools/recompile.py build-tools' or pass --executable."
    )


def select_input(explicit: str | None) -> Path:
    if explicit:
        path = Path(explicit).expanduser()
        return path.resolve() if path.is_absolute() else (ROOT / path).resolve()
    xex = ROOT / "private" / "default.xex"
    pe = ROOT / "private" / "default.exe"
    if xex.is_file():
        return xex
    if pe.is_file():
        return pe
    raise RecompileError(
        "No game image found. Place your own decrypted private/default.xex "
        "(preferred) or private/default.exe in the repository."
    )


def analyse(args: argparse.Namespace) -> None:
    ensure_patch_applied()
    build_dir = tool_build_directory(args.build_dir)
    executable = (
        Path(args.executable).expanduser().resolve()
        if args.executable
        else find_built_tool("XenonAnalyse", build_dir)
    )
    input_path = select_input(args.input)
    output_path = Path(args.output).expanduser()
    if not output_path.is_absolute():
        output_path = (ROOT / output_path).resolve()
    output_path.parent.mkdir(parents=True, exist_ok=True)

    fd, temporary_name = tempfile.mkstemp(
        prefix=f".{output_path.name}.", suffix=".tmp", dir=output_path.parent
    )
    os.close(fd)
    temporary_path = Path(temporary_name)
    try:
        run_command([str(executable), str(input_path), str(temporary_path)])
        if not temporary_path.is_file() or temporary_path.stat().st_size == 0:
            raise RecompileError("XenonAnalyse did not produce a non-empty switch-table file")
        try:
            parsed = tomllib.loads(temporary_path.read_text(encoding="utf-8"))
        except (OSError, tomllib.TOMLDecodeError) as exc:
            raise RecompileError(f"XenonAnalyse output is not valid TOML: {exc}") from exc
        switches = parsed.get("switch", [])
        if not isinstance(switches, list):
            raise RecompileError("XenonAnalyse output does not contain a [[switch]] list")
        os.replace(temporary_path, output_path)
    finally:
        temporary_path.unlink(missing_ok=True)

    print(
        f"XenonAnalyse found {len(switches)} switch tables: {output_path}\n"
        "Review and merge the generated tables into config/switch_tables.toml; "
        "the existing file (including manual recovery work) was not overwritten."
    )


def load_config(config_path: Path) -> tuple[dict, str]:
    try:
        raw = config_path.read_text(encoding="utf-8")
        parsed = tomllib.loads(raw)
    except (OSError, tomllib.TOMLDecodeError) as exc:
        raise RecompileError(f"Could not read recompiler config {config_path}: {exc}") from exc

    main = parsed.get("main")
    if not isinstance(main, dict):
        raise RecompileError(f"{config_path} has no [main] table")
    for key in ("file_path", "out_directory_path", "switch_table_file_path"):
        if not isinstance(main.get(key), str) or not main[key]:
            raise RecompileError(f"{config_path} has no valid main.{key}")
    return parsed, raw


def choose_config(explicit: str | None) -> Path:
    if explicit:
        path = Path(explicit).expanduser()
        return path.resolve() if path.is_absolute() else (ROOT / path).resolve()
    if (ROOT / "private" / "default.xex").is_file():
        return DEFAULT_XEX_CONFIG
    return DEFAULT_PE_CONFIG


def rewrite_output_directory(config_text: str, output_path: str) -> str:
    """Change exactly the main output directory in a copied TOML config."""
    pattern = re.compile(
        r'(?m)^(?P<prefix>\s*out_directory_path\s*=\s*)'
        r'"(?:[^"\\]|\\.)*"(?P<suffix>\s*(?:#.*)?)$'
    )
    rewritten, count = pattern.subn(
        lambda match: f'{match.group("prefix")}"{output_path}"{match.group("suffix")}',
        config_text,
        count=1,
    )
    if count != 1:
        raise RecompileError("Could not identify exactly one main.out_directory_path in the TOML config")
    return rewritten


def validate_generated_directory(output: Path) -> int:
    for name in REQUIRED_GENERATED_FILES:
        path = output / name
        if not path.is_file() or path.stat().st_size == 0:
            raise RecompileError(f"XenonRecomp output is missing or empty: {path}")

    indices: list[int] = []
    for path in output.iterdir():
        match = SOURCE_PATTERN.match(path.name)
        if match and path.is_file() and path.stat().st_size > 0:
            indices.append(int(match.group(1)))
    indices.sort()
    if not indices:
        raise RecompileError("XenonRecomp produced no non-empty ppc_recomp.*.cpp translation units")
    if indices != list(range(len(indices))):
        raise RecompileError("Generated translation-unit numbering is not contiguous from ppc_recomp.0.cpp")

    errors = []
    for sidecar in output.glob("ppc_recomp.*.cpp.err"):
        try:
            if sidecar.read_text(encoding="utf-8", errors="replace").strip():
                errors.append(sidecar.name)
        except OSError:
            errors.append(sidecar.name)
    if errors:
        raise RecompileError("Non-empty XenonRecomp error sidecars: " + ", ".join(errors[:12]))
    return len(indices)


def run_artifact_validator() -> None:
    run_command([sys.executable, str(ROOT / "tools" / "validate_recomp.py")])


def generate(args: argparse.Namespace) -> None:
    ensure_patch_applied()
    config_path = choose_config(args.config)
    parsed, original_config = load_config(config_path)
    main = parsed["main"]

    input_path = (config_path.parent / main["file_path"]).resolve()
    switch_path = (config_path.parent / main["switch_table_file_path"]).resolve()
    context_header = SUBMODULE / "XenonUtils" / "ppc_context.h"
    if not input_path.is_file():
        raise RecompileError(f"Configured game image does not exist: {input_path}")
    if not switch_path.is_file():
        raise RecompileError(f"Configured switch-table file does not exist: {switch_path}")
    if not context_header.is_file():
        raise RecompileError(f"XenonRecomp PPC context header is missing: {context_header}")

    build_dir = tool_build_directory(args.build_dir)
    executable = (
        Path(args.executable).expanduser().resolve()
        if args.executable
        else find_built_tool("XenonRecomp", build_dir)
    )

    stage_dir = Path(tempfile.mkdtemp(prefix=".ppc-staging-", dir=LIB_ROOT))
    stage_config: Path | None = None
    output_dir = LIB_ROOT / "ppc"
    try:
        relative_stage = os.path.relpath(stage_dir, config_path.parent).replace(os.sep, "/")
        staged_text = rewrite_output_directory(original_config, relative_stage)
        fd, stage_config_name = tempfile.mkstemp(
            prefix=f".{config_path.stem}.staging.", suffix=".toml", dir=config_path.parent
        )
        stage_config = Path(stage_config_name)
        with os.fdopen(fd, "w", encoding="utf-8", newline="\n") as stream:
            stream.write(staged_text)

        run_command([str(executable), str(stage_config), str(context_header)])
        unit_count = validate_generated_directory(stage_dir)

        # Keep the old checked-in output recoverable until the new tree also
        # passes the repository's stricter artifact checks.
        with tempfile.TemporaryDirectory(prefix=".ppc-backup-", dir=LIB_ROOT) as backup_name:
            backup_tree = Path(backup_name) / "ppc"
            had_previous = output_dir.exists()
            if had_previous:
                output_dir.rename(backup_tree)
            try:
                stage_dir.rename(output_dir)
                run_artifact_validator()
            except BaseException:
                if output_dir.exists():
                    shutil.rmtree(output_dir)
                if had_previous and backup_tree.exists():
                    backup_tree.rename(output_dir)
                raise

        print(
            f"Generated {unit_count} PPC translation units and installed them at "
            f"{output_dir.relative_to(ROOT)}"
        )
    finally:
        if stage_dir.exists():
            shutil.rmtree(stage_dir, ignore_errors=True)
        if stage_config is not None:
            stage_config.unlink(missing_ok=True)


def validate_command(_: argparse.Namespace) -> None:
    run_artifact_validator()
    run_command([
        sys.executable, "-m", "unittest", "discover",
        "-s", str(ROOT / "tools" / "tests"),
        "-p", "test_*.py",
    ])


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    subparsers = parser.add_subparsers(dest="command", required=True)

    patch_parser = subparsers.add_parser(
        "patch", help="apply the title patch to the pinned XenonRecomp submodule safely"
    )
    patch_parser.add_argument("--check", action="store_true", help="check state without applying")

    build_parser = subparsers.add_parser("build-tools", help="build XenonAnalyse and XenonRecomp")
    build_parser.add_argument("--build-dir", help="CMake build directory (default: build/xenon-tools)")
    build_parser.add_argument("--generator", help="optional CMake generator, e.g. Ninja")

    analyse_parser = subparsers.add_parser(
        "analyze", help="scan the supplied image into a separate switch-table TOML for review"
    )
    analyse_parser.add_argument("--input", help="image path; defaults to private/default.xex then default.exe")
    analyse_parser.add_argument(
        "--output",
        default="TooHumanRecompLib/config/switch_tables.generated.toml",
        help="generated TOML output; defaults to a separate file so manual tables are preserved",
    )
    analyse_parser.add_argument("--build-dir", help="CMake build directory (default: build/xenon-tools)")
    analyse_parser.add_argument("--executable", help="explicit XenonAnalyse executable path")

    generate_parser = subparsers.add_parser(
        "generate", help="run XenonRecomp and transactionally replace generated PPC output"
    )
    generate_parser.add_argument(
        "--config", help="recompiler TOML; auto-prefers TooHumanRecomp.XEX.toml when default.xex exists"
    )
    generate_parser.add_argument("--build-dir", help="CMake build directory (default: build/xenon-tools)")
    generate_parser.add_argument("--executable", help="explicit XenonRecomp executable path")

    subparsers.add_parser("validate", help="run generated-artifact validation and Python regression tests")

    args = parser.parse_args()
    try:
        if args.command == "patch":
            ensure_patch_applied(check_only=args.check)
        elif args.command == "build-tools":
            build_tools(args)
        elif args.command == "analyze":
            analyse(args)
        elif args.command == "generate":
            generate(args)
        elif args.command == "validate":
            validate_command(args)
    except (RecompileError, OSError, subprocess.SubprocessError) as exc:
        print(f"Recompilation workflow failed: {exc}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
