# Runtime foundation

## Scope and safety boundary

TooHumanRecompLib remains the generated PowerPC game-code library. The runtime is a separate host-side layer: it owns guest memory, import dispatch, threads, files, graphics, audio, input and diagnostics. Do not include game-specific behavior in generic runtime primitives.

This runtime foundation now includes a bounded guest-memory view and a tested loader for the extracted Xbox 360 PowerPC PE used by this project. It still does **not** invoke the generated entry point, emulate MMIO, resolve kernel imports, or claim bootability. The bare PE does not contain the original XEX2 import tables.

## Implemented: guest address-space view

`TooHumanRecomp::RuntimeCore` currently provides a non-owning `GuestMemory` view over a caller-owned byte span. It:

- maps a contiguous span to an explicit 32-bit guest base;
- validates the complete range using 64-bit arithmetic, including the 4 GiB boundary;
- rejects out-of-range reads and writes without forming invalid host pointers;
- exposes bounded byte views for future loaders and subsystem adapters;
- reads and writes unsigned PPC scalar values in big-endian order;
- avoids alignment assumptions by operating on bytes.

The owner remains responsible for allocating, initializing and retaining the backing storage. This is not yet a complete virtual memory manager: page permissions, sparse mappings, guard pages, aliases and MMIO dispatch are future work.

## Build and test

The runtime core is built independently of the generated PPC library and does not require the XenonRecomp submodule:

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

The guest-memory tests cover big-endian scalar access, boundary checks, unaligned access, const views and the upper end of the 32-bit address space. The PE tests use a synthetic Xbox 360 PE to verify machine/type checks, entry-point validation, zero-fill behavior, section copying, the observed 0x5000 section-RVA correction, and malformed/truncated input rejection.

## Next implementation sequence

1. Build a 4 GiB guest address-space reservation so generated PPC loads using `base + guest_virtual_address` have the exact addressing model they were compiled for. The current PE loader returns a compact image-relative byte vector and must not be passed directly as the generated-code `base` pointer.
2. Add per-section page permissions and guard unmapped ranges; keep MMIO outside ordinary RAM.
3. Add a PPC dispatcher adapter around the generated function map, with validated guest entry points and a tested return/trap mechanism.
4. Build an import registry keyed by verified library/ordinal identities. Unknown imports must report the guest PC and arguments; never guess ordinal names.
5. Implement synchronization and thread primitives only after their ABI and observed call sites are documented.
6. Add virtual file access and save-data isolation.
7. Add GPU command capture/decoding before attempting a renderer; then add XMA and controller services.

Every step should have game-free tests and diagnostics before integration with the title.
