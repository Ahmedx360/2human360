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
| Kernel/XAM HLE | XEX2 import parser and exact library/ordinal dispatch registry implemented; actual kernel/XAM handlers are not implemented yet |
| Guest memory / image loader | Bounded big-endian memory view, checked PE32/PPCBE loader, 4 GiB guest address space, section protections and synchronized first-fit guest heap implemented; MMIO, aliases, threads and synchronization remain future work |
| PPC indirect calls | Generated function map, diagnostic unresolved-target trap, and caller-context invocation bridge implemented; XEX function-import thunks can be routed by library/ordinal |
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

The CMake targets build the generated PPC translation units as **TooHumanRecompLib** and, when runtime support is enabled, **TooHumanPpcRuntime**, which installs the generated function map, parses XEX imports and wires the title memory/dispatch setup through `initialize_title_runtime`. They are libraries, not a game executable. The runtime can invoke caller-selected translated functions and route XEX imports, but the title's real startup state, kernel/XAM handlers, graphics, audio and input are still missing.

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
cmake --build --preset validate-only --parallel
ctest --preset validate
~~~

The validation configuration also builds and tests the independent host-side runtime core, including guest-heap allocation/coalescing, synthetic PE loading, basic-compressed XEX image loading, and XEX import/IAT-pair fixtures. It builds `TooHumanXexImportAudit`. The full Clang CI build also links `TooHumanRuntimeProbe` against the complete generated library, checking the mapping table and runtime adapter link together. Run the adapter test after building with `ctest --test-dir build/clang-release -R TooHumanPpcImportRegistryTests --output-on-failure`. To build only that runtime foundation (without the generated PPC library or XenonRecomp submodule):

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

To inspect the real Too Human imports directly from the original decrypted `default.xex`, run `./build/runtime/TooHumanXexImportAudit private/default.xex`. The XEX loader handles the title's unencrypted basic-compressed payload, reconstructs its guest-RVA image, and reports library IDs/versions, import ordinals, paired function IAT slots, true variable imports, stack size and TLS metadata. The older two-file form with a matching extracted `default.exe` remains available. To link the generated PPC library and exercise the full memory/function-table/import initialization path using only the XEX, configure with `-DTH_BUILD_RUNTIME_PROBE=ON`, build `TooHumanRuntimeProbe`, then run `./build/probe/TooHumanRuntimeProbe private/default.xex`. The probe deliberately does not invoke the game entry point. To build it explicitly (with the XenonRecomp checkout and generated PPC sources available):

~~~sh
cmake -S . -B build/probe -DTH_BUILD_RECOMP_LIB=ON -DTH_BUILD_RUNTIME_CORE=ON -DTH_BUILD_RUNTIME_PROBE=ON -DBUILD_TESTING=OFF
cmake --build build/probe --target TooHumanRuntimeProbe --parallel
./build/probe/TooHumanRuntimeProbe private/default.xex
~~~

See [docs/runtime-foundation.md](docs/runtime-foundation.md) for the runtime scope and limitations. The standalone PE loader parses raw PE sections into compact image-relative storage. The XEX loader instead decompresses the console's already RVA-laid-out payload and preserves those guest offsets directly. Both paths map the image at guest virtual addresses inside a reserved 4 GiB host address range, matching generated PPC pointer calculations. It still does not boot the game.

On Windows, use a Developer Command Prompt with LLVM's clang-cl and Ninja available, and configure the compiler explicitly when needed:

~~~powershell
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang-cl -DCMAKE_BUILD_TYPE=Release
cmake --build build --target TooHumanPpcRuntime --parallel
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

5. Run XenonRecomp with TooHumanRecompLib/config/TooHumanRecomp.toml and the PPC context header from the XenonRecomp checkout. **Paths inside the TOML are relative to the TOML file's directory**, not the shell's current directory. If you have the original matching `default.xex`, prefer `TooHumanRecompLib/config/TooHumanRecomp.XEX.toml` and re-run analysis/recompilation from that XEX so its import metadata is retained.
6. Run the artifact checks and build commands above.

The configuration points to ../../private/default.exe, ../ppc, and switch_tables.toml relative to TooHumanRecompLib/config/.

The checked-in XenonRecomp patch corrects the known scalar-scratch code-emission mistakes, and the NOP-padded switch-table scanner now aligns computed bctr destinations to PowerPC instruction boundaries. The build has a non-destructive fallback normalizer for three already-generated legacy translation units, so the tracked PPC output is not rewritten by CMake.

## Why the PE loader patch is needed

The analyzed executable is a bare PE rather than an XEX2 container. XenonRecomp's normal XEX2/ELF loading path does not directly handle this PE, so the patch adds an Xbox 360 PowerPC PE loader and accounts for the observed section-address delta in this image.

A bare PE does not preserve the XEX2 import metadata. The matching original `default.xex` is required to recover the title's actual library/ordinal/thunk records. The supplied Too Human XEX is unencrypted and uses basic compression, which the new XEX-only loader handles directly. The registry is ready to route those records, but actual kernel/XAM service handlers still need to be implemented and tested.

## Architecture and next runtime milestones

See [docs/architecture.md](docs/architecture.md) for the runtime boundaries and implementation order, and [docs/runtime-foundation.md](docs/runtime-foundation.md) for the first implemented runtime primitive. The broad lesson taken from [LostOdysseyRecomp](https://github.com/freefrank/LostOdysseyRecomp) is to keep generated PPC code separate from the host runtime, and to implement kernel, memory, graphics, audio, input, and diagnostics as distinct systems.

## Copyright and game data

The generated C++ is a mechanical translation of copyrighted game code. Keep distribution rights and applicable law in mind before publishing generated output. This repository intentionally excludes the game executable and game assets; users must supply their own legally obtained files.
