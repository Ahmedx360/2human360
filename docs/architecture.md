# Too Human PC recompilation architecture

## Scope

The current project contains two deliberately separate layers:

- TooHumanRecompLib: XenonRecomp-generated PowerPC functions and their dispatch map.
- TooHumanRecomp::RuntimeCore: host-side primitives that will provide the Xbox 360 execution environment.

The runtime core is an incremental foundation, not a complete emulator. A host executable must not call the translated entry point until guest memory, PPC context lifecycle, import dispatch, threading and hardware-facing services are valid.

## Repository boundaries

| Component | Responsibility | Current state |
|---|---|---|
| TooHumanRecompLib | Static library containing generated PowerPC functions and dispatch map | Generated sources and build target exist |
| runtime/memory | Bounded PPC big-endian access, 4 GiB guest VA reservation and heap allocation | Reservation, PE mapping/protections and synchronized first-fit guest heap implemented; MMIO/aliases pending |
| runtime/image | Extracted Xbox 360 PE parsing and XEX2 import metadata | PE32/PPCBE loader and XEX2 import parser implemented and synthetic-fixture tested |
| runtime/ppc | Populate XenonRecomp's indirect-call table, invoke known functions and route XEX imports | Generated map registration, unresolved-target trap, caller-context invocation and ordinal-keyed import registry implemented; game startup state/HLE handlers are missing |
| TooHumanRecomp (future) | Host executable, startup, window, configuration, logging and game-data discovery | Not implemented |
| kernel (future) | Verified Xbox kernel/XAM imports, handles, virtual files, events and synchronization | XEX2 metadata parsing and ordinal-keyed thunk dispatch exist; no HLE handlers yet |
| cpu / os (future) | PPC context lifecycle, guest-thread scheduling, TLS, exceptions and host/guest call bridges | Generated PPC context exists; runtime lifecycle not implemented |
| gpu (future) | Xenos command processor, register/MMIO handling, EDRAM and host graphics backend | Not implemented |
| apu (future) | XMA stream decoding, guest audio callbacks, mixing and host output | Not implemented |
| hid (future) | Xbox controller state mapped to SDL/GameInput/XInput, vibration and prompt data | Not implemented |
| debug (future) | Import tracing, guest PC logs, GPU/audio diagnostics and crash reports | Analysis scripts and recompiler diagnostics exist |

Keep title-specific patches and constants separate from generic execution services. Do not copy Lost Odyssey game logic or assume both titles have identical engine behavior.

## Runtime contracts

### 1. Guest address space and PPC dispatch

The generated code accesses guest memory through a 32-bit guest address space and a host base pointer. TooHumanRecomp::RuntimeCore provides a bounded, non-owning contiguous memory view with big-endian scalar reads/writes, plus a checked loader for the extracted Too Human PE. See runtime-foundation.md. The PE loader returns compact image-relative storage; `GuestAddressSpace` now reserves 4 GiB and maps those bytes at `base + guest_virtual_address`, matching generated PPC pointer calculations. The image is currently committed read/write as one range; section-level protection and MMIO remain unimplemented.

Before invoking the game entry point, the runtime still must:

- reserve and handle explicit MMIO ranges and aliases;
- ensure image base and PPC code base agree with ppc_config.h;
- populate the indirect-call table from `PPCFuncMappings` and trap unmapped targets;
- commit and initialize guest stack/TLS regions and establish per-thread PPC contexts;
- trap or emulate MMIO rather than treating device registers as ordinary RAM.

Do not infer that the PPC code range is the entire guest image. Data sections, resources and address-space reservations may lie outside .text. The current memory view is not a sparse/page-based virtual memory manager and does not implement aliases, guard pages or MMIO.

### 2. Kernel and XAM imports

The XEX2 import metadata parser and ordinal-keyed thunk registry are implemented. The registry accepts explicit handlers and fails fast with the library, ordinal, thunk, LR and argument registers when no handler exists. It currently skips variable imports and supports one active registry per process. Add real imports only from the matching `default.xex` metadata or a verified export table. Each registered import needs a documented calling convention and argument/return contract, plus tests for ownership, wait semantics, memory bounds and error codes.

The current bare PE does not contain original XEX2 import-name tables. Do not guess names from ordinals. First inspect matching XEX2 metadata or build a verified Too Human-specific ordinal map. Then implement imports in observed dependency order: memory and synchronization, thread creation/waits, file I/O, timers, notifications and title/XAM services.

### 3. File system and content

Keep guest paths and handles behind a virtual file-system API. Map game content to user-selected folders and preserve the media layout expected by Too Human. Add diagnostics for missing files, short reads, path normalization and save-data writes. Never bake host absolute paths into translated code.

### 4. Xenos graphics

Separate the guest-facing command processor from the host renderer:

1. Decode guest register and packet writes.
2. Model render targets, textures, vertex/index buffers and EDRAM behavior.
3. Translate shader and fixed-function state.
4. Execute draws through a D3D12 or Vulkan backend.
5. Log unsupported packets and preserve captures for regression analysis.

Use captured game scenes and command-level tests before attempting full gameplay. GPU MMIO requires hardware-semantic handling.

### 5. XMA audio

Implement XMA decoding and guest audio submission separately from host audio device management. SDL can provide host output after guest stream, looping, channel and timing semantics are understood. Test silence, looping, seek, channel layout, underruns and device changes without booting the game.

### 6. Input and platform shell

Map a host gamepad API into the XInput/HID structures expected by the game. Keep controller enumeration, dead zones, trigger ranges, vibration and disconnect handling out of generated PPC code.

## Milestone order

1. Build correctness — generated sources compile into TooHumanRecompLib; keep generator and artifact checks reproducible.
2. Guest memory and image loader — apply per-section permissions to the validated PE image and define explicit MMIO ranges.
3. Game startup — establish the title's verified stack, TLS, initial PPCContext and thread lifecycle before invoking the entry point.
4. Game startup — initialize the verified guest stack, TLS, initial PPCContext and thread lifecycle.
5. Boot-critical kernel — implement only imports proven to be called during startup, with documented semantics and tests.
6. File I/O and threading — support asset reads, synchronization and guest thread scheduling.
7. GPU bring-up — capture/decode command streams, then render the earliest deterministic scene.
8. Audio and input — add XMA playback and controller support independently.
9. Game-specific fixes — add narrowly scoped hooks only after a reproducible guest/runtime failure is understood.

## Diagnostics and test strategy

Follow the reference project's strongest engineering practice: make failures observable and reproducible. Each subsystem should expose structured logs, and every nontrivial parser/decoder should have game-free tests.

Recommended runtime records include guest PC, import library/ordinal, thread ID, guest address, GPU packet/register, XMA stream and host error code. Preserve the original error before invoking extra diagnostic APIs.

Successful PPC compilation is not evidence of playability. A playable build requires a working guest runtime, graphics, audio, input, content access and save behavior.
