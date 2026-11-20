# 2human360 — Too Human (Xbox 360) Recomp

Static recompilation of *Too Human* (Xbox 360) using [XenonRecomp](https://github.com/hedge-dev/XenonRecomp),
following the layout of [LostOdysseyRecomp](https://github.com/freefrank/LostOdysseyRecomp).
You must supply your own legally obtained game files. No game data is included here.

## Image facts (`default.exe`, PE, big-endian PowerPC)
- Base `0x82000000`, entry `0x82A46B18`, `.text` real RVA `0x32B000` (header says 0x330000) size `0xDFF2AC`, `.pdata` 0x8E200 bytes
- 396 jump tables found by XenonAnalyse (`TooHumanRecompLib/config/switch_tables.toml`)

## Save/restore helpers
| symbol | address |
|-|-|
| `__restgprlr_14` / `__savegprlr_14` | 0x82A4EA20 / 0x82A4E9D0 |
| `__restfpr_14` / `__savefpr_14` | 0x82A6175C / 0x82A61710 |
| `__restvmx_14` / `__savevmx_14` | 0x82EC4BD8 / 0x82EC4940 |
| `__restvmx_64` / `__savevmx_64` | 0x82EC4C6C / 0x82EC49D4 |

## Reproduce
1. Clone XenonRecomp (recursive), apply `tools/patches/xenonrecomp-pe-loader.patch` (adds a PE loader; stock XenonRecomp only reads XEX2/ELF).
2. Put your `default.exe` in `private/`.
3. `XenonAnalyse private/default.exe TooHumanRecompLib/config/switch_tables.toml`
4. `XenonRecomp TooHumanRecompLib/config/TooHumanRecomp.toml <XenonRecomp>/XenonUtils/ppc_context.h`

## Status
Static recompilation output is **complete**: `TooHumanRecompLib/ppc/` (729 files, ~262 MB, 100% of functions)
generated with the patched XenonRecomp. See `docs/recomp-diagnostics.md` for the final diagnostics.
**Not playable yet** - there is no runtime (kernel imports, GPU, audio, input) and import names are unresolved.

> The generated C++ is a mechanical translation of the copyrighted game executable. Consider keeping this
> repo private, or removing `TooHumanRecompLib/ppc/` before making it public (other recomp projects regenerate it locally).

## Known blockers / TODO
- **Imports:** a bare PE has no XEX2 import tables, so kernel/xam import names are not recovered. The original `default.xex` (XEX2 header intact) is needed for named imports; otherwise imports must be reconstructed from ordinals.
- setjmp/longjmp addresses not located yet.
- No runtime (kernel, GPU, audio, input) exists yet — that is the bulk of the work (see LostOdysseyRecomp / UnleashedRecomp).
