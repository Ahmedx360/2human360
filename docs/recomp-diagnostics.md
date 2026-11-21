# Recompiler diagnostics

## Current generated output

The repository currently tracks 376 numbered translation units under TooHumanRecompLib/ppc/, covering the analyzed function address space. The function mapping and shared declarations are generated alongside them. This is a translation milestone only; it does not provide a guest runtime.

The artifact validator checks:

- the XenonRecomp TOML and switch-table files parse correctly;
- image/code memory constants are internally plausible;
- generated translation-unit numbering is contiguous;
- function-map entries and shared declarations agree;
- no non-empty compiler-error sidecars are left behind;
- known scalar-scratch and computed-branch defects are normalized before compilation; branch targets are also checked for PowerPC word alignment.

Run the checks with:

~~~sh
cmake --preset validate-only
ctest --preset validate
~~~

## Known generator and translation defects corrected

Two custom emitter cases in tools/patches/xenonrecomp-pe-loader.patch previously treated the scalar PPCRegister temp scratch value as if its f32 or u8 members were vector arrays:

- PPC_INST_VCFPUXWS128 emitted temp.f32[0] and the invalid C++ float literal 1f;
- PPC_INST_VRLH emitted temp.u8[0].

The patch now emits scalar temp.f32 / temp.u8 accesses and a decimal float literal.

A full Clang build then exposed a second issue in ppc_recomp.125.cpp. Two NOP-padded computed-switch entries retained the low bits of their bctr destinations (0x8281405E and 0x82814C67). PowerPC bctr uses CTR[0:29] with the low two target bits cleared, so the valid destinations are 0x8281405C and 0x82814C64. The switch-table recovery script now applies that alignment rule; the existing switch table was corrected, and the build-time normalizer adds the missing instruction labels to a temporary compilation copy.

CMake therefore normalizes three legacy translation units in the build directory only (ppc_recomp.125.cpp, .191.cpp and .372.cpp). The checked-in generated PPC files are not rewritten by the build.

## Recompiler-specific findings

- The PE's code-section virtual addresses are shifted relative to the real image layout by 0x5000; the PE loader patch compensates for this.
- The analyser required a runaway-block traversal guard and correct treatment of backward branches that leave a function as tail calls.
- Some jump tables use a NOP between mtctr and bctr; tools/add_nop_switch_tables.py recovers the affected cases.
- Some switch labels fell outside inferred function bounds; tools/fix_switch_functions.py derives explicit bounds from the generated function map.
- The bare PE does not contain XEX2 import metadata, so kernel/XAM import names are not available from this input alone.
- setjmp/longjmp helper addresses remain unresolved in the XenonRecomp configuration.

See tools/patches/xenonrecomp-pe-loader.patch, TooHumanRecompLib/config/TooHumanRecomp.toml, and TooHumanRecompLib/config/switch_tables.toml for the title-specific data and changes.
