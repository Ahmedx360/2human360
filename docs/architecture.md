# Too Human PC recompilation architecture

## Scope

The current project is the **guest-code translation layer**, not a full PC port. The generated PPC functions expect the Xbox 360 execution environment: guest address-space semantics, kernel/XAM imports, hardware-facing services, and platform state. A host executable cannot safely call the translated entry point until those contracts exist.

The design below adapts the useful project-organization lessons from LostOdysseyRecomp without copying its Lost Odyssey-specific game logic or assuming that the two games have identical engine behaviour.

## Recommended repository boundaries

| Component | Responsibility | Current state |
|---|---|---|
| TooHumanRecompLib | Static library containing XenonRecomp-generated PowerPC functions and their dispatch map | Generated sources and build target exist |
| TooHumanRecomp (future) | Host executable, startup, window, configuration, logging and game-data discovery | Not implemented |
| kernel (future) | Guest memory, exported Xbox kernel/XAM calls, handles, virtual files, events and synchronization | Not implemented |
| cpu / os (future) | PPC context lifecycle, guest-thread scheduling, TLS, exceptions and host/guest call bridges | Partially represented by the generated PPC context only |
| gpu (future) | Xenos command processor, register/MMIO handling, EDRAM and host graphics backend | Not implemented |
| apu (future) | XMA stream decoding, guest audio callbacks, mixing and host output | Not implemented |
| hid (future) | Xbox controller state mapped to SDL/GameInput/XInput, vibration and prompt data | Not implemented |
| debug (future) | Import tracing, guest PC logs, GPU/audio diagnostics and crash reports | Only analysis scripts and recompiler diagnostics exist |

Keep game-specific patches and constants separate from the generic execution environment. The same guest-kernel and GPU abstractions may eventually be reusable by other Xbox 360 recompiler projects, while Too Human's game hooks should remain title-local.

## Runtime dependencies that need real implementations

### 1. Guest address space and PPC dispatch

The generated code accesses a 32-bit guest address range through base + guest_offset, and the function map dispatches guest addresses to compiled host functions. The runtime must establish a consistent guest image base, allocation layout, read/write permissions, and any memory aliases required by the image.

Before calling the PE entry point, verify that:

- the complete declared image range is mapped and initialized;
- the image base and PPC code base agree with ppc_config.h;
- every indirect branch target resolves through the function map or an explicit import trampoline;
- guest stack, TLS and per-thread PPC contexts are valid;
- unsupported MMIO accesses are trapped or explicitly emulated rather than silently treated as ordinary RAM.

Do not infer that the PPC code range is the entire guest image; data sections, embedded resources and address-space reservations may lie outside .text.

### 2. Kernel and XAM imports

Create a dedicated import registry keyed by the executable's actual import identifiers (library and ordinal, or verified symbol names). Each registered import should have:

- its calling convention and argument/return marshalling documented;
- a host implementation or an explicit diagnostic stub;
- logging for unresolved imports, call counts and guest call sites;
- tests for handle ownership, wait semantics, memory bounds and error codes.

The current bare PE does not contain the original XEX2 import-name tables. Do not guess import names from ordinals. First acquire/inspect the matching XEX2 metadata or create a verified ordinal map from Too Human-specific evidence. Then implement the imports in dependency order: memory and synchronization, thread creation/waits, file I/O, timers, notifications and title/XAM services.

### 3. File system and content

Keep guest paths and handles behind a virtual file-system API. Map game content to user-selected folders and preserve the original media layout expected by Too Human. Add explicit diagnostics for missing files, short reads, path normalization and save-data writes. Do not bake host absolute paths into translated code.

### 4. Xenos graphics

The GPU layer is likely the largest system after kernel imports. Separate the guest-facing command processor from the host renderer:

1. decode guest register and packet writes;
2. model render targets, textures, vertex/index buffers and EDRAM behaviour;
3. translate shader and fixed-function state;
4. execute draws through a D3D12 or Vulkan backend;
5. log unsupported packets and preserve captures for regression analysis.

Use captured game scenes and small command-level tests before attempting full gameplay. Avoid treating GPU MMIO as normal guest RAM: command writes and readbacks need hardware-semantic handling.

### 5. XMA audio

Implement XMA decoding and the guest audio submission contract separately from host audio device management. Use SDL as an output abstraction only after the guest stream, looping, channel and timing semantics are known. Test silence, looping, seek, channel layout, underruns and device changes without booting the game.

### 6. Input and platform shell

Map a host gamepad API into the XInput/HID structures expected by the game. Keep controller enumeration, dead zones, trigger ranges, vibration and disconnect handling out of generated PPC code. A small keyboard fallback and visible input diagnostics help early boot testing.

## Suggested milestone order

1. **Build correctness:** generated sources compile into TooHumanRecompLib; preserve reproducible generator and artifact checks.
2. **Guest memory and dispatcher:** reserve/map the image, initialize PPC context and call a harmless verified function.
3. **Import observability:** create import trampolines that report unknown library/ordinal, guest PC and arguments without pretending to implement the API.
4. **Boot-critical kernel:** implement only imports proven to be called during startup, with tests and explicit semantics.
5. **File I/O and threading:** support asset reads, synchronization and guest thread scheduling.
6. **GPU bring-up:** capture/decode command streams, then render the earliest deterministic scene.
7. **Audio and input:** add XMA playback and controller support independently.
8. **Game-specific fixes:** add narrowly scoped hooks only after a reproducible guest/runtime failure is understood.

## Diagnostics and test strategy

Follow the reference project's strongest engineering practice: make failures observable and reproducible. Each subsystem should expose structured logs, and every nontrivial parser/decoder should have game-free tests.

Recommended records for future runtime logs include guest PC, import library/ordinal, thread ID, guest address, GPU packet/register, XMA stream and host error code. Preserve the original error before invoking extra diagnostic APIs.

Do not mark the project playable based on successful PPC compilation alone. A playable build requires a working guest runtime, graphics, audio, input, content access and save behaviour.
