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
| Kernel/XAM HLE | Exact XEX import inventory, 242 function thunks and 11 variable exports; 72 registered boot HLE handlers plus virtual-memory, file-system, video-query and Xenos ring-configuration services. Most of the 242 imports still need title-verified implementations; existing handlers remain compatibility subsets, not a complete Xbox kernel/XAM |
| Guest memory / image loader | Bounded big-endian memory, PE/XEX loading, 4 GiB guest address space, section protections, heaps, `MmGetPhysicalAddress` alias translation, `MmAllocatePhysicalMemoryEx`/`MmFreePhysicalMemory` compatibility allocation, `MmQueryAddressProtect`/`MmSetAddressProtect`, and virtual-memory allocation/query/protection; KTHREAD/PCR/TLS/stack contexts; typed event/thread handles; cooperative IRQL/critical-region tracking, atomic guest spin locks, and bounded `RtlInitAnsiString`/`RtlInitUnicodeString` descriptor setup; ExCreateThread/NtResumeThread worker execution; VFS, scalar Xenos/XMA MMIO interception, guest-physical PM4 ring access, and a bounded CP_RB_WPTR-triggered command pump with one-level indirect-buffer traversal and checked PM4 MEM_WRITE. Full scheduler semantics, APCs and Xenos device behavior remain incomplete |
| PPC indirect calls | Generated function map, diagnostic unresolved-target trap, caller-context invocation, function IAT patching and exact library/ordinal trampoline dispatch implemented |
| Xenos graphics / EDRAM | Scalar MMIO interception, bounded tracing, PM4 decoding, guest-physical ring translation, ring setup imports, CP_RB_WPTR-triggered type-0/type-1 register-file updates and bounded one-level indirect buffers are tested; Type-3 NOP, bin-mask/bin-select state, checked MEM_WRITE, REG_TO_MEM, REG_RMW, COND_WRITE and one-level indirect buffers are accepted; predicate bits use the bin-select/mask intersection, while nested indirect buffers and other Type-3 commands are rejected. Asynchronous GPU synchronization, full EDRAM, shader translation and host renderer remain unimplemented |
| XMA audio | XMA MMIO aperture is intercepted; XMA decoding, stream scheduling and host audio output are not implemented |
| Controller/input | Runtime implementation still required; XAM input imports are not yet backed by a host controller layer |
| Playability | **Not playable yet** |

The generated translation directory contains 376 numbered C++ files (about 255 MiB of source), plus the function map and PPC context headers. Translation coverage is not the same as a complete or playable PC port.

## Image facts

The analyzed input is default.exe, a big-endian PowerPC Xbox 360 PE image:

- Image base: 0x82000000
- Entry point: 0x82A46B18
- PE SizeOfImage: 0x017AFE00
- XEX title ID: 0x4D5307DE
- XEX default stack: 0x40000 bytes
- XEX TLS: 64 slots, 0x450-byte template
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

The CMake targets build the generated PPC translation units as **TooHumanRecompLib** and, when runtime support is enabled, **TooHumanPpcRuntime**, which installs the generated function map, parses XEX imports and wires title memory, boot HLE and guest-thread setup through `initialize_title_runtime`. They are libraries, not a finished game executable. The runtime now has a substantial startup compatibility layer, guest worker execution, a virtual filesystem and scalar Xenos/XMA MMIO interception, but the full kernel/XAM surface, asynchronous Xenos command processor and GPU opcode semantics/renderer, XMA audio, controller input and host application shell are still missing.

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

The validation workflow is configured to build and test the independent host-side runtime core, including guest-heap allocation/coalescing, synthetic PE loading, basic-compressed XEX image loading, and XEX import/IAT-pair fixtures. It builds `TooHumanXexImportAudit`. The full Clang CI job is configured to link `TooHumanRuntimeProbe` against the generated library, checking the mapping table and runtime adapter link together. Run the adapter test after building with `ctest --test-dir build/clang-release -R TooHumanPpcImportRegistryTests --output-on-failure`. To build only that runtime foundation (without the generated PPC library or XenonRecomp submodule):

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

To inspect the real Too Human imports directly from the original decrypted `default.xex`, run `./build/runtime/TooHumanXexImportAudit private/default.xex`. The XEX loader handles the title's unencrypted basic-compressed payload, reconstructs its guest-RVA image, and reports library IDs/versions, import ordinals, paired function IAT slots, true variable imports, stack size and TLS metadata. The older two-file form with a matching extracted `default.exe` remains available. To link the generated PPC library and exercise memory/function-table/function-IAT/kernel-variable and basic pool-allocation initialization using only the XEX, configure with `-DTH_BUILD_RUNTIME_PROBE=ON`, build `TooHumanRuntimeProbe`, then run `./build/probe/TooHumanRuntimeProbe private/default.xex`. The probe deliberately does not invoke the game entry point. To build it explicitly (with the XenonRecomp checkout and generated PPC sources available):

~~~sh
cmake -S . -B build/probe -DTH_BUILD_RECOMP_LIB=ON -DTH_BUILD_RUNTIME_CORE=ON -DTH_BUILD_RUNTIME_PROBE=ON -DBUILD_TESTING=OFF
cmake --build build/probe --target TooHumanRuntimeProbe --parallel
./build/probe/TooHumanRuntimeProbe private/default.xex
~~~

See [docs/runtime-foundation.md](docs/runtime-foundation.md) for runtime scope and limitations, and [docs/too-human-xex-imports.md](docs/too-human-xex-imports.md) for the real executable's import inventory. The standalone PE loader parses raw PE sections into compact image-relative storage. The XEX loader instead decompresses the console's already RVA-laid-out payload and preserves those guest offsets directly. Both paths map the image at guest virtual addresses inside a reserved 4 GiB host address range, matching generated PPC pointer calculations. It still does not boot the game.

On Windows, use a Developer Command Prompt with LLVM's clang-cl and Ninja available, and configure the compiler explicitly when needed:

~~~powershell
cmake -S . -B build -G Ninja -DCMAKE_CXX_COMPILER=clang-cl -DCMAKE_BUILD_TYPE=Release
cmake --build build --target TooHumanPpcRuntime --parallel
~~~

## Reproduce the recompilation

Initialize the pinned generator and its recursive dependencies:

~~~sh
git submodule update --init --recursive
~~~

Place your own decrypted game image in the repository-root `private/` directory. Prefer `private/default.xex`; the matching extracted `private/default.exe` remains supported for PE-only analysis. The XEX is preferable because it preserves the original import metadata.

Build the patched XenonRecomp tools:

~~~sh
python tools/recompile.py build-tools --generator Ninja
~~~

The helper uses `clang++` by default (or `clang-cl` on Windows); pass `--compiler` to override it. This applies `tools/patches/xenonrecomp-pe-loader.patch` to the pinned submodule only when the patch applies cleanly. Re-running the command is safe. If the submodule contains partial or conflicting edits, the helper stops without resetting or overwriting them.

Generate jump-table analysis into a separate review file:

~~~sh
python tools/recompile.py analyze
~~~

The output is `TooHumanRecompLib/config/switch_tables.generated.toml`. Review it and merge any new tables into `switch_tables.toml` yourself, preserving the manually recovered entries already checked in. The analysis command never overwrites the maintained table by default.

Regenerate the translated PPC code:

~~~sh
python tools/recompile.py generate
~~~

The helper selects `TooHumanRecomp.XEX.toml` when `private/default.xex` exists, otherwise `TooHumanRecomp.toml`. Pass `--config` to choose explicitly. Paths in these TOML files remain relative to the config file. Generation occurs in a temporary sibling directory; the current `TooHumanRecompLib/ppc` tree is replaced only after the required generated files, contiguous translation-unit numbering, error sidecars and repository artifact validator all pass. A failed run leaves the previous generated tree in place.

Run the artifact and Python regression checks:

~~~sh
python tools/recompile.py validate
~~~

The existing CMake validation-only preset remains available for the host-side runtime tests. The checked-in XenonRecomp patch fixes title-specific PE loading, PPC instruction emission and NOP-padded switch-table handling. The CMake game-code target still normalizes legacy generated files in build-directory copies; it does not rewrite the checked-in PPC output during an ordinary runtime build.

## Why the PE loader patch is needed

The analyzed executable is a bare PE rather than an XEX2 container. XenonRecomp's normal XEX2/ELF loading path does not directly handle this PE, so the patch adds an Xbox 360 PowerPC PE loader and accounts for the observed section-address delta in this image.

A bare PE does not preserve the XEX2 import metadata. The matching original `default.xex` is required to recover the title's actual library/ordinal/thunk records. The supplied Too Human XEX is unencrypted and uses basic compression, which the new XEX-only loader handles directly. The runtime now binds the 11 data exports and routes all 242 function imports through a diagnostic trampoline. Most kernel/XAM service handlers still need to be implemented and tested.

## Architecture and next runtime milestones

See [docs/architecture.md](docs/architecture.md) for the runtime boundaries and implementation order, and [docs/runtime-foundation.md](docs/runtime-foundation.md) for the first implemented runtime primitive. The broad lesson taken from [LostOdysseyRecomp](https://github.com/freefrank/LostOdysseyRecomp) is to keep generated PPC code separate from the host runtime, and to implement kernel, memory, graphics, audio, input, and diagnostics as distinct systems.

## Copyright and game data

The generated C++ is a mechanical translation of copyrighted game code. Keep distribution rights and applicable law in mind before publishing generated output. This repository intentionally excludes the game executable and game assets; users must supply their own legally obtained files.
