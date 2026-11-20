# 2human360 — Too Human (Xbox 360) Recomp

Static recompilation of *Too Human* (Xbox 360) using [XenonRecomp](https://github.com/hedge-dev/XenonRecomp),
following the layout of [LostOdysseyRecomp](https://github.com/freefrank/LostOdysseyRecomp).
You must supply your own legally obtained game files. No game data is included here.

## Image facts (`default.exe`, PE, big-endian PowerPC)
- Base `0x82000000`, entry `0x82A46B18`, `.text` RVA `0x330000` size `0xDFF2AC`, `.pdata` 0x8E200 bytes
- 396 jump tables found by XenonAnalyse (`TooHumanRecompLib/config/switch_tables.toml`)

## Save/restore helpers
| symbol | address |
|-|-|
| `__restgprlr_14` / `__savegprlr_14` | 0x82A53A20 / 0x82A539D0 |
| `__restfpr_14` / `__savefpr_14` | 0x82A6675C / 0x82A66710 |
| `__restvmx_14` / `__savevmx_14` | 0x82EC9BD8 / 0x82EC9940 |
| `__restvmx_64` / `__savevmx_64` | 0x82EC9C6C / 0x82EC99D4 |

## Reproduce
1. Clone XenonRecomp (recursive), apply `tools/patches/xenonrecomp-pe-loader.patch` (adds a PE loader; stock XenonRecomp only reads XEX2/ELF).
2. Put your `default.exe` in `private/`.
3. `XenonAnalyse private/default.exe TooHumanRecompLib/config/switch_tables.toml`
4. `XenonRecomp TooHumanRecompLib/config/TooHumanRecomp.toml <XenonRecomp>/XenonUtils/ppc_context.h`

## Status (honest)
Code generation has **not** completed yet; `ppc/` is not in this repo because XenonRecomp never finished.
What works: PE loading, XenonAnalyse (396 jump tables), helper-function discovery, config.
What fails: `XenonRecomp` function-boundary analysis. This binary's `.pdata` is fragmented:
29,897 of 72,768 entries are followed by an uncovered gap (see `tools/pdata_gaps.py`), e.g. fn 0x824BF8A8
ends at 0x824BF8DC but its code continues into the next entry at 0x824BF8E0 (one orphan instruction between).
Pass 2 of `Recompiler::Analyse()` then starts mid-function, follows backward `bc` branches before the
function base, and runs away (>6 GB RAM, OOM-killed). The patch adds an iteration cap + zero-size guard
so it no longer hangs, but results are not trustworthy until boundaries are fixed.

### Next steps
1. Merge adjacent `.pdata` fragments (treat gap + following entry as one function when the previous
   fragment does not end in blr/b) before the bl-target / sweep passes; guard `bc` targets below function base.
2. Recover import names (need original XEX2 or ordinal->name mapping; IAT at RVA 0x600 holds ordinals, library index in bits 16+).
3. Locate setjmp/longjmp; then a runtime (kernel/GPU/audio/input).

## Known blockers / TODO
- **Imports:** a bare PE has no XEX2 import tables, so kernel/xam import names are not recovered. The original `default.xex` (XEX2 header intact) is needed for named imports; otherwise imports must be reconstructed from ordinals.
- setjmp/longjmp addresses not located yet.
- No runtime (kernel, GPU, audio, input) exists yet — that is the bulk of the work (see LostOdysseyRecomp / UnleashedRecomp).
