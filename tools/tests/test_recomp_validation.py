import sys
import unittest
from pathlib import Path

TOOLS = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(TOOLS))

from fix_generated_cpp import normalize_cpp_source
from validate_recomp import read_define


class GeneratedCodeNormalizationTests(unittest.TestCase):
    def test_scalar_float_scratch_and_literal(self):
        source = "temp.f32[0] = source.f32[1] * 1f;"
        self.assertEqual(normalize_cpp_source(source), "temp.f32 = source.f32[1] * 1.0f;")

    def test_scalar_byte_scratch(self):
        source = "temp.u8[0] = source.u8[4] & 0xF;"
        self.assertEqual(normalize_cpp_source(source), "temp.u8 = source.u8[4] & 0xF;")

    def test_unrelated_source_is_unchanged(self):
        source = "ctx.v8.u16[0] = uint16_t(ctx.v9.u16[0]);"
        self.assertEqual(normalize_cpp_source(source), source)


class PpcConfigParsingTests(unittest.TestCase):
    def test_hex_integer_macro(self):
        self.assertEqual(read_define("#define PPC_IMAGE_BASE 0x82000000ull", "PPC_IMAGE_BASE"), 0x82000000)

    def test_missing_macro_is_rejected(self):
        with self.assertRaises(ValueError):
            read_define("#define OTHER_DEFINE 123", "PPC_IMAGE_BASE")


if __name__ == "__main__":
    unittest.main()
