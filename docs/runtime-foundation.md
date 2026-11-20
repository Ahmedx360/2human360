# Runtime foundation

## Scope and safety boundary

TooHumanRecompLib remains the generated PowerPC game-code library. The runtime is a separate host-side layer: it owns guest memory, import dispatch, threads, files, graphics, audio, input and diagnostics. Do not include game-specific behavior in generic runtime primitives.

This runtime foundation includes a bounded guest-memory view, a standalone PE loader, and a direct XEX2 loader. The XEX loader supports unencrypted images using no compression or basic block compression, reconstructs the already guest-RVA-laid-out payload, and parses the embedded PE metadata. It still does **not** invoke the generated entry point, emulate MMIO, implement kernel/XAM services, or claim bootability.

## Implemented: guest address-space reservation and PE image loading

`TooHumanRecomp::RuntimeCore` provides two complementary memory layers. `GuestMemory` is a non-owning bounded view over a caller-owned byte span. `GuestAddressSpace` reserves the full 4 GiB guest virtual address range in a 64-bit host process and commits the loaded image at `base + guest_virtual_address`, matching the addressing model emitted into translated PPC code. The image mapper applies read-only protections to headers and non-writable sections, read/write protections to writable sections, and no-access protections to gaps. Guest stack/heap/MMIO regions can be committed explicitly as read/write. `GuestHeap` adds a synchronized first-fit allocator with alignment, splitting, coalescing, ownership checks and double-free rejection; it requires the PPC function table to be initialized first when an image is mapped, rejects overlap with the image/table, and leaves MMIO/other allocations to the caller. The memory view:

- maps a contiguous span to an explicit 32-bit guest base;
- validates the complete range using 64-bit arithmetic, including the 4 GiB boundary;
- rejects out-of-range reads and writes without forming invalid host pointers;
- exposes bounded byte views for future loaders and subsystem adapters;
- reads and writes unsigned PPC scalar values in big-endian order;
- avoids alignment assumptions by operating on bytes.

The owner remains responsible for retaining the `GuestMemory` backing storage. The address-space reservation is owned by `GuestAddressSpace` and released with it. Sparse region tracking, aliases, guard-page policy and MMIO dispatch are future work.

## Build and test

The runtime core is built independently of the generated PPC library and does not require the XenonRecomp submodule:

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

The guest-memory tests cover big-endian scalar access, boundary checks, unaligned access, const views and the upper end of the 32-bit address space. The PE tests use a synthetic Xbox 360 PE to verify machine/type checks, entry-point validation, zero-fill behavior, section copying, the observed 0x5000 section-RVA correction, malformed/truncated input rejection, and mapping at the correct guest virtual address inside the 4 GiB reservation. They also verify the PPC indirect-call table's eight-byte host pointer slots, range checks and registration semantics. The XEX tests cover basic-compressed image reconstruction, library IDs/versions, descriptor bounds, big-endian thunk decoding and function-IAT pairing; the PPC adapter test invokes an installed import trampoline and confirms the exact library/ordinal handler receives the PPC context.

## Implemented: generated PPC function table and call bridge

When the generated library is enabled, `TooHumanPpcRuntime` registers every non-null entry in `PPCFuncMappings` into the guest table located immediately after the image. Its index formula matches `PPC_LOOKUP_FUNC`: `(guest_address - PPC_CODE_BASE) * 2`, yielding one host function-pointer slot for each aligned PPC instruction address. All unregistered slots point to a diagnostic trap that reports the unresolved CTR target and LR, then aborts instead of calling a null pointer. This does not resolve Xbox kernel/XAM imports; it makes missing targets observable. `invoke_recompiled_function` can call a known mapped guest function using a caller-prepared `PPCContext`. `commit_region` lets the host reserve guest stack/TLS/heap ranges at explicitly selected guest addresses, but no default stack layout or thread lifecycle is assumed.

## Implemented: XEX2 import metadata and dispatch registry

`load_xex2_image` handles unencrypted XEX2 images with no compression or basic block compression, validates the embedded PPCBE PE headers/sections, and keeps the decompressed payload at its guest RVA offsets. `parse_xex2_imports` reads the optional-header table, library string table, per-library identity/version records and big-endian thunk descriptors. It extracts the default stack/heap hints and TLS template descriptor, then validates the image base, entry point and every import target against the loaded image. A type-0 descriptor immediately followed by a matching type-1 descriptor is recognized as a function's IAT slot; the loader patches that slot to the guest address of its function thunk before applying image protections. Unpaired type-0 records remain genuine variable imports. `PpcImportRegistry` binds the title's 11 kernel data exports into a persistent 128 MiB guest pool, patches their IAT slots, maintains a live `KeTimeStampBundle`, installs function-import thunks into the PPC table and dispatches by exact `(library, ordinal)` keys. Initial HLE covers `ExAllocatePoolTypeWithTag`, `ExFreePool`, `XamAlloc` and `XamFree`; pool types/tags and XAM allocator-specific flags are not modeled. The variable backing is a compatibility baseline; object-type and device-specific semantics are not complete. Handlers must be registered explicitly. Unknown imports log the library, ordinal, thunk, LR and r3-r6 before aborting; variable imports are parsed but are not callable thunks and are not dispatched. Only one active registry is supported per process.

The PE-only workflow cannot provide this metadata. Use the optional XEX TOML configuration with the matching original `default.xex` to preserve imports when regenerating the PPC translation. The `TooHumanXexImportAudit <default.xex>` utility now loads and audits the supplied XEX directly; the two-file `<default.xex> <default.exe>` form remains available for extracted PE workflows. The audit prints library IDs/versions, descriptor records, function/IAT pairings and genuine variable imports. The supplied Too Human executable has two import libraries (`xam.xex` and `xboxkrnl.exe`), 242 function thunks and 11 genuine variable imports.

## Next implementation sequence

1. Add explicit MMIO ranges and aliases without exposing them as ordinary RAM.
2. Implement only the imports proven to be called during Too Human startup, beginning with memory, synchronization and thread creation. Keep unknown ordinals fail-fast and document each ABI.
3. Establish Too Human's real startup stack, TLS, register state and guest-thread lifecycle from XEX metadata and observed call sites.
4. Add virtual file access and save-data isolation.
5. Add GPU command capture/decoding before attempting a renderer; then add XMA and controller services.

Every step should have game-free tests and diagnostics before integration with the title.
