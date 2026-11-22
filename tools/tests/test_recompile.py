import os
import sys
import tempfile
import unittest
from pathlib import Path

TOOLS = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(TOOLS))

from recompile import (
    RecompileError,
    find_built_tool,
    rewrite_output_directory,
    validate_generated_directory,
)


class BuiltToolLocationTests(unittest.TestCase):
    def test_finds_executable_in_its_cmake_target_subdirectory(self):
        with tempfile.TemporaryDirectory() as temp:
            build = Path(temp)
            suffix = ".exe" if os.name == "nt" else ""
            executable = build / "XenonRecomp" / f"XenonRecomp{suffix}"
            executable.parent.mkdir(parents=True)
            executable.write_bytes(b"test executable")
            self.assertEqual(find_built_tool("XenonRecomp", build), executable)


class RecompileConfigTests(unittest.TestCase):
    def test_rewrite_changes_only_output_directory(self):
        original = (
            '[main]\n'
            'file_path = "../../private/default.xex"\n'
            'out_directory_path = "../ppc"\n'
            'switch_table_file_path = "switch_tables.toml"\n'
        )
        updated = rewrite_output_directory(original, "../.ppc-staging-test")
        self.assertIn('file_path = "../../private/default.xex"', updated)
        self.assertIn('out_directory_path = "../.ppc-staging-test"', updated)
        self.assertIn('switch_table_file_path = "switch_tables.toml"', updated)
        self.assertEqual(updated.count('out_directory_path ='), 1)

    def test_missing_output_setting_is_rejected(self):
        with self.assertRaises(RecompileError):
            rewrite_output_directory('[main]\nfile_path = "default.xex"\n', "../stage")


class GeneratedOutputTests(unittest.TestCase):
    def make_output(self, root: Path, units=(0, 1)):
        for name in (
            "ppc_func_mapping.cpp",
            "ppc_recomp_shared.h",
            "ppc_context.h",
            "ppc_config.h",
        ):
            (root / name).write_text("// generated\n", encoding="utf-8")
        for index in units:
            (root / f"ppc_recomp.{index}.cpp").write_text("// PPC\n", encoding="utf-8")

    def test_valid_output_reports_translation_unit_count(self):
        with tempfile.TemporaryDirectory() as temp:
            output = Path(temp)
            self.make_output(output, units=(0, 1, 2))
            self.assertEqual(validate_generated_directory(output), 3)

    def test_gapped_translation_units_are_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            output = Path(temp)
            self.make_output(output, units=(0, 2))
            with self.assertRaisesRegex(RecompileError, "not contiguous"):
                validate_generated_directory(output)

    def test_missing_required_artifact_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            output = Path(temp)
            self.make_output(output)
            (output / "ppc_config.h").unlink()
            with self.assertRaisesRegex(RecompileError, "ppc_config.h"):
                validate_generated_directory(output)

    def test_nonempty_error_sidecar_is_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            output = Path(temp)
            self.make_output(output)
            (output / "ppc_recomp.1.cpp.err").write_text("failed\n", encoding="utf-8")
            with self.assertRaisesRegex(RecompileError, "error sidecars"):
                validate_generated_directory(output)


if __name__ == "__main__":
    unittest.main()
