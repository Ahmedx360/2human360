# 2human360 — Too Human (Xbox 360) recompilation

A static PowerPC recompilation project for **Too Human** (Xbox 360), using [XenonRecomp](https://github.com/hedge-dev/XenonRecomp). This repository currently contains the translated game code and title-specific analysis work. It does **not** contain a working PC game runtime yet.

You must provide your own legally obtained game files. No game executable, assets, or other game data are included.

## Current state

| Layer | Status |
|---|---|
| PE image analysis | Completed for the supplied default.exe image |
| PPC function translation | 376 generated C++ translation units are checked in |
| Jump-table recovery | 396 initial tables, plus manually recovered NOP-padded tables |
| Recompiler fixes | Title-specific PE loader, switch-boundary and VMX/codegen fixes |
| Generated-code library | CMake static-library target added; requires Clang and SIMDe |
| Kernel/XAM HLE | Not implemented; import names are not resolved |
| Guest memory, threads and synchronization | Runtime implementation still required |
| Xenos graphics / EDRAM | Runtime implementation still required |
| XMA audio | Runtime implementation still required |
| Controller/input | Runtime implementation still required |
| Playability | **Not playable yet** |

The generated translation directory contains 376 numbered C++ files (about 255 MiB of source), plus the function map and PPC context headers. Translation coverage is not the same as a complete or playable PC port.

## Image facts

The analyzed input is default.exe, a big-endian PowerPC Xbox 360 PE image:

- Image base: 0x82000000
- Entry point: 0x82A46B18
- .text real RVA: 0x32B000 (the section header reports 0x330000)
- .text size: 0xDFF2AC
- .pdata size: 0x8E200

The save/restore helper locations currently recorded in the XenonRecomp configuration are:

| Helper | Address |
|---|---:|
| __restgprlr_14 / __savegprlr_14 | 0x82A4EA20 / 0x82A4E9D0 |
| __restfpr_14 / __savefpr_14 | 0x82A6175C / 0x82A61710 |
| __restvmx_14 / __savevmx_14 | 0x82EC4BD8 / 0x82EC4940 |
| __restvmx_64 / __savevmx_64 | 0x82EC4C6C / 0x82EC49D4 |

These are image-specific observations, not generic Xbox 360 addresses.

## Build the generated game-code library

The CMake target builds the generated PPC translation units as **TooHumanRecompLib**. It is a library of translated guest functions only; it is not an executable and cannot launch the game without the runtime layers listed above.

### Requirements

- CMake 3.25+
- Ninja (for the supplied presets)
- Clang / clang-cl
- Python 3.11+
- Git with submodule support

Initialize the pinned XenonRecomp and nested SIMDe dependencies:

~~~sh
git submodule update --init --recursive
~~~

Build with the supplied Clang preset:

~~~sh
cmake --preset clang-release
cmake --build --preset clang-release --parallel
~~~

To run the artifact and Python regression checks without compiling the very large PPC library:

~~~sh
cmake --preset validate-only
ctest --preset validate
~~~

On Windows, use a Developer Command Prompt with LLVM's clang-cl and Ninja available, and configure the compiler explicitly when needed:

~~~powershell
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang-cl -DCMAKE_BUILD_TYPE=Release
cmake --build build --target TooHumanRecompLib --parallel
~~~

## Reproduce the recompilation

1. Initialize tools/XenonRecomp and its recursive submodules.
2. Apply the Too Human PE and instruction-support patch to the pinned XenonRecomp checkout:

   ~~~sh
   git -C tools/XenonRecomp apply ../../tools/patches/xenonrecomp-pe-loader.patch
   ~~~

3. Place your legally obtained, extracted default.exe at the repository-root path private/default.exe.
4. From the repository root, run XenonAnalyse with the input image and switch-table configuration:

   ~~~sh
   XenonAnalyse private/default.exe TooHumanRecompLib/config/switch_tables.toml
   ~~~

5. Run XenonRecomp with TooHumanRecompLib/config/TooHumanRecomp.toml and the PPC context header from the XenonRecomp checkout. **Paths inside the TOML are relative to the TOML file's directory**, not the shell's current directory.
6. Run the artifact checks and build commands above.

The configuration points to ../../private/default.exe, ../ppc, and switch_tables.toml relative to TooHumanRecompLib/config/.

The checked-in XenonRecomp patch corrects the known scalar-scratch code-emission mistakes, and the NOP-padded switch-table scanner now aligns computed bctr destinations to PowerPC instruction boundaries. The build has a non-destructive fallback normalizer for three already-generated legacy translation units, so the tracked PPC output is not rewritten by CMake.

## Why the PE loader patch is needed

The analyzed executable is a bare PE rather than an XEX2 container. XenonRecomp's normal XEX2/ELF loading path does not directly handle this PE, so the patch adds an Xbox 360 PowerPC PE loader and accounts for the observed section-address delta in this image.

A bare PE does not preserve the XEX2 import metadata. As a result, this workflow does not recover the original Xbox kernel/XAM import names. A matching original default.xex with its XEX2 metadata, or a researched ordinal-to-import map, is still needed for import resolution.

## Architecture and next runtime milestones

See [docs/architecture.md](docs/architecture.md) for the proposed runtime boundaries and an incremental implementation order. The broad lesson taken from [LostOdysseyRecomp](https://github.com/freefrank/LostOdysseyRecomp) is to keep generated PPC code separate from the host runtime, and to implement kernel, memory, graphics, audio, input, and diagnostics as distinct systems.

## Copyright and game data

The generated C++ is a mechanical translation of copyrighted game code. Keep distribution rights and applicable law in mind before publishing generated output. This repository intentionally excludes the game executable and game assets; users must supply their own legally obtained files.
