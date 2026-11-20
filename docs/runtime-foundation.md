# Runtime foundation

## Scope and safety boundary

TooHumanRecompLib remains the generated PowerPC game-code library. The runtime is a separate host-side layer: it owns guest memory, import dispatch, threads, files, graphics, audio, input and diagnostics. Do not include game-specific behavior in generic runtime primitives.

This runtime foundation now includes a bounded guest-memory view and a tested loader for the extracted Xbox 360 PowerPC PE used by this project. It still does **not** invoke the generated entry point, emulate MMIO, resolve kernel imports, or claim bootability. The bare PE does not contain the original XEX2 import tables.

## Implemented: guest address-space reservation and PE image loading

`TooHumanRecomp::RuntimeCore` provides two complementary memory layers. `GuestMemory` is a non-owning bounded view over a caller-owned byte span. `GuestAddressSpace` reserves the full 4 GiB guest virtual address range in a 64-bit host process and commits the loaded image at `base + guest_virtual_address`, matching the addressing model emitted into translated PPC code. The image mapper currently uses read/write pages for the complete image range; section-specific permissions are not yet applied. The memory view:

- maps a contiguous span to an explicit 32-bit guest base;
- validates the complete range using 64-bit arithmetic, including the 4 GiB boundary;
- rejects out-of-range reads and writes without forming invalid host pointers;
- exposes bounded byte views for future loaders and subsystem adapters;
- reads and writes unsigned PPC scalar values in big-endian order;
- avoids alignment assumptions by operating on bytes.

The owner remains responsible for retaining the `GuestMemory` backing storage. The address-space reservation is owned by `GuestAddressSpace` and released with it. Sparse mappings, per-section permissions, aliases and MMIO dispatch are future work.

## Build and test

The runtime core is built independently of the generated PPC library and does not require the XenonRecomp submodule:

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

The guest-memory tests cover big-endian scalar access, boundary checks, unaligned access, const views and the upper end of the 32-bit address space. The PE tests use a synthetic Xbox 360 PE to verify machine/type checks, entry-point validation, zero-fill behavior, section copying, the observed 0x5000 section-RVA correction, malformed/truncated input rejection, and mapping at the correct guest virtual address inside the 4 GiB reservation. They also verify the PPC indirect-call table's eight-byte host pointer slots, range checks and registration semantics.

## Implemented: generated PPC function table

When the generated library is enabled, `TooHumanPpcRuntime` registers every non-null entry in `PPCFuncMappings` into the guest table located immediately after the image. Its index formula matches `PPC_LOOKUP_FUNC`: `(guest_address - PPC_CODE_BASE) * 2`, yielding one host function-pointer slot for each aligned PPC instruction address. All unregistered slots point to a diagnostic trap that reports the unresolved CTR target and LR, then aborts instead of calling a null pointer. This does not resolve Xbox kernel/XAM imports; it makes missing targets observable.

## Next implementation sequence

1. Add per-section page permissions and guard unmapped ranges; the current loader commits the complete PE image range read/write. Keep MMIO outside ordinary RAM.
2. Add a host-call entry/return bridge with a verified guest stack, initial register state and clean PPC context lifecycle.
3. Obtain matching XEX2 import metadata and implement a registry keyed by verified library/ordinal identities. Unknown imports must report the guest PC and arguments; never guess ordinal names.
4. Implement synchronization and thread primitives only after their ABI and observed call sites are documented.
5. Add virtual file access and save-data isolation.
6. Add GPU command capture/decoding before attempting a renderer; then add XMA and controller services.

Every step should have game-free tests and diagnostics before integration with the title.
