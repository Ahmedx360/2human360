# Runtime foundation

## Scope and safety boundary

TooHumanRecompLib remains the generated PowerPC game-code library. The runtime is a separate host-side layer: it owns guest memory, import dispatch, threads, files, graphics, audio, input and diagnostics. Do not include game-specific behavior in generic runtime primitives.

This first runtime-core increment deliberately does **not** load the game image, invoke the generated entry point, emulate MMIO, resolve kernel imports, or claim bootability. Those operations require verified image layout and XEX2 import metadata that the current bare PE input does not provide.

## Implemented: guest address-space view

`TooHumanRecomp::RuntimeCore` currently provides a non-owning `GuestMemory` view over a caller-owned byte span. It:

- maps a contiguous span to an explicit 32-bit guest base;
- validates the complete range using 64-bit arithmetic, including the 4 GiB boundary;
- rejects out-of-range reads and writes without forming invalid host pointers;
- exposes bounded byte views for future loaders and subsystem adapters;
- reads and writes unsigned PPC scalar values in big-endian order;
- avoids alignment assumptions by operating on bytes.

The owner remains responsible for allocating, initializing and retaining the backing storage. This is not yet a complete virtual memory manager: page permissions, sparse mappings, guard pages, aliases, MMIO dispatch and image-section loading are future work.

## Build and test

The runtime core is built independently of the generated PPC library and does not require the XenonRecomp submodule:

~~~sh
cmake -S . -B build/runtime -DTH_BUILD_RECOMP_LIB=OFF -DTH_BUILD_RUNTIME_CORE=ON -DBUILD_TESTING=ON
cmake --build build/runtime --parallel
ctest --test-dir build/runtime --output-on-failure
~~~

The guest-memory tests cover big-endian scalar access, boundary checks, unaligned access, const views and the upper end of the 32-bit address space.

## Next implementation sequence

1. Extend guest memory with explicit regions and permissions; keep MMIO outside ordinary RAM.
2. Add a guest image loader driven by verified PE/XEX metadata and section permissions.
3. Add a PPC dispatcher adapter around the generated function map, with validated guest entry points.
4. Build an import registry keyed by verified library/ordinal identities. Unknown imports must report the guest PC and arguments; never guess ordinal names.
5. Implement synchronization and thread primitives only after their ABI and observed call sites are documented.
6. Add virtual file access and save-data isolation.
7. Add GPU command capture/decoding before attempting a renderer; then add XMA and controller services.

Every step should have game-free tests and diagnostics before integration with the title.
