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

## Known blockers / TODO
- **Imports:** a bare PE has no XEX2 import tables, so kernel/xam import names are not recovered. The original `default.xex` (XEX2 header intact) is needed for named imports; otherwise imports must be reconstructed from ordinals.
- setjmp/longjmp addresses not located yet.
- No runtime (kernel, GPU, audio, input) exists yet — that is the bulk of the work (see LostOdysseyRecomp / UnleashedRecomp).
