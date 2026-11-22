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

    def test_nop_padded_bctr_targets_are_aligned_and_labelled(self):
        source = (
            "switch (index) {\n"
            "    case 32: goto loc_8281405E;\n"
            "    case 33: goto loc_82814C67;\n"
            "}\n"
            "loc_82814058:\n"
            "\t// lwz r10,8(r31)\n"
            "\tctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);\n"
            "\t// cmpwi cr6,r10,0\n"
            "\tctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);\n"
            "\t// sthx r9,r10,r31\n"
            "\tPPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u16);\n"
            "\t// lwz r10,104(r31)\n"
        )
        fixed = normalize_cpp_source(source)
        self.assertIn("goto loc_8281405C;", fixed)
        self.assertIn("goto loc_82814C64;", fixed)
        self.assertIn("loc_8281405C:\n", fixed)
        self.assertIn("loc_82814C64:\n", fixed)
        self.assertNotRegex(fixed, r"goto loc_8281405E|goto loc_82814C67")

    def test_forward_calls_get_declarations_before_same_unit_aliases(self):
        source = (
            '#include "ppc_recomp_shared.h"\n'
            'PPC_FUNC_IMPL(__imp__sub_82000000) {\n'
            '\tsub_82000010(ctx, base);\n'
            '\tsub_82000020(ctx, base);\n'
            '}\n'
            '__attribute__((alias("__imp__sub_82000010"))) PPC_WEAK_FUNC(sub_82000010);\n'
            'PPC_FUNC_IMPL(__imp__sub_82000010) { return; }\n'
            '__attribute__((alias("__imp__sub_82000020"))) PPC_WEAK_FUNC(sub_82000020);\n'
            'PPC_FUNC_IMPL(__imp__sub_82000020) { return; }\n'
        )
        fixed = normalize_cpp_source(source)
        self.assertIn(
            '#include "ppc_recomp_shared.h"\n'
            'PPC_EXTERN_FUNC(sub_82000010);\n'
            'PPC_EXTERN_FUNC(sub_82000020);\n',
            fixed,
        )
        self.assertEqual(fixed.count("PPC_EXTERN_FUNC(sub_82000010);"), 1)
        self.assertEqual(fixed.count("PPC_EXTERN_FUNC(sub_82000020);"), 1)

    def test_forward_declaration_normalization_is_idempotent(self):
        source = (
            '#include "ppc_recomp_shared.h"\n'
            'PPC_FUNC_IMPL(__imp__sub_82000000) { sub_82000010(ctx, base); }\n'
            '__attribute__((alias("__imp__sub_82000010"))) PPC_WEAK_FUNC(sub_82000010);\n'
        )
        fixed = normalize_cpp_source(source)
        self.assertEqual(normalize_cpp_source(fixed), fixed)

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
