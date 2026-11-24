# Runtime foundation

## Scope and safety boundary

TooHumanRecompLib remains the generated PowerPC game-code library. The runtime is a separate host-side layer: it owns guest memory, import dispatch, threads, files, graphics, audio, input and diagnostics. Do not include game-specific behavior in generic runtime primitives.

This runtime foundation includes a bounded guest-memory view, a standalone PE loader, and a direct XEX2 loader. The XEX loader supports unencrypted images using no compression or basic block compression, reconstructs the already guest-RVA-laid-out payload, and parses the embedded PE metadata. It still does **not** invoke the generated entry point, emulate MMIO, or provide more than a small initial subset of kernel/XAM services; it does not claim bootability.

## Implemented: guest address-space reservation and PE image loading

`TooHumanRecomp::RuntimeCore` provides two complementary memory layers. `GuestMemory` is a non-owning bounded view over a caller-owned byte span. `GuestAddressSpace` reserves the full 4 GiB guest virtual address range in a 64-bit host process and commits the loaded image at `base + guest_virtual_address`, matching the addressing model emitted into translated PPC code. The image mapper applies read-only protections to headers and non-writable sections, read/write protections to writable sections, and no-access protections to gaps. Guest stack/heap/MMIO regions can be committed explicitly as read/write. `GuestHeap` adds a synchronized first-fit allocator with alignment, splitting, coalescing, ownership checks and double-free rejection; it requires the PPC function table to be initialized first when an image is mapped, rejects overlap with the image/table, and leaves MMIO/other allocations to the caller. The memory view:

- maps a contiguous span to an explicit 32-bit guest base;
- validates the complete range using 64-bit arithmetic, including the 4 GiB boundary;
- rejects out-of-range reads and writes without forming invalid host pointers;
- exposes bounded byte views for future loaders and subsystem adapters;
- reads and writes unsigned PPC scalar values in big-endian order;
- avoids alignment assumptions by operating on bytes.

The owner remains responsible for retaining the `GuestMemory` backing storage. The address-space reservation is owned by `GuestAddressSpace` and released with it. `GuestAddressSpace` tracks committed/protected regions and supports guard-page protections. Scalar accesses to the Xenos and XMA apertures are intercepted by `GuestMmioBus`; this is not yet a device emulator.

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

`load_xex2_image` handles unencrypted XEX2 images with no compression or basic block compression, validates the embedded PPCBE PE headers/sections, and keeps the decompressed payload at its guest RVA offsets. `parse_xex2_imports` reads the optional-header table, library string table, per-library identity/version records and big-endian thunk descriptors. It extracts the default stack/heap hints and TLS template descriptor, then validates the image base, entry point and every import target against the loaded image. A type-0 descriptor immediately followed by a matching type-1 descriptor is recognized as a function's IAT slot; the loader patches that slot to the guest address of its function thunk before applying image protections. Unpaired type-0 records remain genuine variable imports. `PpcImportRegistry` binds the title's 11 kernel data exports into a persistent 128 MiB guest pool, patches their IAT slots, maintains a live `KeTimeStampBundle`, installs function-import thunks into the PPC table and dispatches by exact `(library, ordinal)` keys. Initial HLE covers `ExAllocatePoolTypeWithTag`, `ExFreePool`, `XamAlloc` and `XamFree`; pool types/tags and XAM allocator-specific flags are not modeled. The guest pool currently occupies `0x86000000..0x8E000000` (128 MiB), after the mapped image and generated PPC function table. This fixed pool is a bootstrap allocator, not an implementation of Xbox virtual/physical memory management. The variable backing is a compatibility baseline; object-type and device-specific semantics are not complete. Four initial pool allocation handlers are built in; other callable imports require explicit handler registration. Unknown imports log the library, resolved export name, ordinal, thunk, LR and r3-r6 before aborting; variable imports are bound as data and are not callable thunks. Only one active registry is supported per process.

`MmGetPhysicalAddress` (xboxkrnl ordinal `0x00BE`) currently resolves committed addresses in the runtime's uncached physical alias (`0xA0000000..0xBFFFFFFF`) by subtracting the alias base. It returns zero for ordinary virtual addresses or uncommitted alias pages because this runtime does not yet model a general virtual-to-physical page map.
`MmAllocatePhysicalMemoryEx` allocates and zeroes a block from the 128 MiB kernel-variable heap with at least 4 KiB alignment; `MmFreePhysicalMemory` releases the exact returned base address. This is a compatibility allocator only: physical min/max constraints, cache modifiers, large-page flags, and device-specific physical heaps are not modeled. Invalid or repeated frees are rejected without changing allocator state.
`MmQueryAddressProtect` reports `X_PAGE_READWRITE`, `X_PAGE_READONLY`, or `X_PAGE_NOACCESS` for tracked heap allocations by inspecting the current committed guest page permissions. It returns zero for addresses outside those tracked allocations. This is limited to the guest heaps and does not implement a complete physical-memory manager.
`MmSetAddressProtect` applies those same supported XDK protection states to an allocation. For `NtAllocateVirtualMemory` regions it also splits/coalesces the per-page metadata used by `NtQueryVirtualMemory`; for pool and stack allocations it requires the complete page-aligned range to fit inside one allocation so it cannot change permissions on a neighboring small allocation. Execute/guard flags and untracked or cross-allocation ranges remain unsupported.
`RtlCompareStringN` (xboxkrnl ordinal `0x011D`) compares two bounded ANSI byte spans and supports the XDK `0xFFFF` NUL-terminated-length sentinel. Case-insensitive comparison currently folds ASCII `A`–`Z` only; full locale/Unicode collation is not implemented. NUL scans are bounded to 64 KiB and validated against readable guest memory.
`RtlInitUnicodeString` (xboxkrnl ordinal `0x012D`) scans at most 32,766 UTF-16 code units from readable guest memory and writes the big-endian `{Length, MaximumLength, Buffer}` descriptor without allocating or copying the source. A null source resets the descriptor. Invalid descriptor/source ranges and unterminated strings exceeding the representable `USHORT` length fail fast.

The initial Xbox synchronization imports now track per-host-thread IRQL (`PASSIVE_LEVEL` 0 and `DISPATCH_LEVEL` 2) and nested critical-region depth. `KfAcquireSpinLock` / `KfReleaseSpinLock` and the raised-IRQL `Ke*SpinLock` pair use an atomic 32-bit guest lock word with Xbox big-endian value 1. Contended acquisition yields and checks cooperative thread cancellation/suspension. This is not a hardware interrupt controller: APC delivery, DPC queues, higher IRQL levels, interrupt masking, and the full Xbox scheduler are not implemented.

The PE-only workflow cannot provide this metadata. Use the optional XEX TOML configuration with the matching original `default.xex` to preserve imports when regenerating the PPC translation. The `TooHumanXexImportAudit <default.xex>` utility now loads and audits the supplied XEX directly; the two-file `<default.xex> <default.exe>` form remains available for extracted PE workflows. The audit prints library IDs/versions, descriptor records, function/IAT pairings and genuine variable imports. The supplied Too Human executable has two import libraries (`xam.xex` and `xboxkrnl.exe`), 242 function thunks and 11 genuine variable imports.

## Implemented: guest virtual-memory query and protection

The Too Human runtime tracks each `NtAllocateVirtualMemory` reservation's
initial XDK protection and its current protection-homogeneous page ranges.
Allocation applies the requested `PAGE_NOACCESS`, `PAGE_READONLY`,
`PAGE_READWRITE`, or `PAGE_WRITECOPY` state to the host mapping (write-copy is
represented as writable RAM). Execute permissions and guard pages are not
emulated: execute requests return `STATUS_ACCESS_DENIED`, while unsupported
protection flags return `STATUS_INVALID_PAGE_PROTECTION`. Cache modifiers
`PAGE_NOCACHE` and `PAGE_WRITECOMBINE` are accepted but do not change host cache
policy.

`NtProtectVirtualMemory` uses the Xbox 360 ABI (`r3`/`r4` are pointers to the
in/out base and size, `r5` is the new protection, `r6` is optional
`OldProtect`, and `r7` is `DebugMemory`). It rounds the requested range to the
owning allocation's page granularity, refuses ranges that cross an allocation,
applies host page permissions, returns the first affected page's previous
protection, and splits/coalesces the region metadata. `NtQueryVirtualMemory`
uses the two-argument Xbox title ABI (`r3` is the queried address value and
`r4` is the `MEMORY_BASIC_INFORMATION` output pointer); it reports the
containing homogeneous region, the original `AllocationProtect`, and the
current `Protect` rather than assuming every page is read/write. The guest
allocator uses the native host page size as a minimum protection granularity
on hosts whose pages are larger than 4 KiB. Decommit and guard-page faults are
not modelled yet.


## Implemented: scalar MMIO interception and PM4 packet framing

`GuestMmioBus` intercepts scalar accesses to the current 64 KiB Xenos aperture
at `0x7FC80000` and XMA aperture at `0x7FEA0000`. It preserves guest
big-endian byte lanes, keeps independent register-file readback for each
aperture, rejects out-of-window accesses, and records a bounded 4096-entry
access trace. The register file itself remains a conservative readback model;
the title runtime layers the bounded primary-ring PM4 pump and explicitly
listed register/packet behaviors below on top. This is not complete Xenos
emulation, XMA decoding, interrupt delivery, fence handling or rendering.

The PM4 framing helper decodes one guest-logical dword stream packet at a time.
It handles the zero-word NOP, type-0 sequential/single-register writes, type-1
two-register writes, type-2 no-payload packets, and type-3 opcode/predicate
headers. It validates payload bounds before returning a packet view. A bounded
stream dispatcher routes register writes and Type-3 packets through explicit
callbacks, enforces a packet budget, and reports malformed input, missing
handlers and rejected callbacks instead of silently treating unknown commands
as successful.

The circular-ring consumer accepts a caller-provided span of guest-logical
dwords and read/write indices. It handles packets that cross the physical end
of the ring, validates pointers and incomplete payloads, enforces a per-call
packet budget, and returns the read index only after complete packet dispatch.

`dispatch_pm4_guest_ring` bridges that decoder to the reserved guest
address space. It translates an Xbox physical address through the
`0xA0000000 + (physical & 0x1FFFFFFF)` alias used by the reference runtime,
checks that the complete ring is committed and readable, converts guest
big-endian words, and copies only one bounded PM4 packet at a time. Packet
wraparound is handled without allocating a full-ring snapshot. The companion
`write_pm4_guest_read_pointer` validates a committed writable physical
target and stores the progress dword in guest big-endian order. Ring sizing
uses `1 << (size_log2 + 3)` bytes, matching the reference command processor's
8-byte sizing unit.

The `XenosCommandProcessor` wraps that bridge with primary-ring
configuration and pointer lifecycle. It validates the ring base and size,
starts the read pointer at zero, requires a valid dword write pointer before
pumping, and records the optional read-pointer writeback target.
`process_available` performs a bounded synchronous pump, advances only across
fully dispatched packets, and publishes partial progress if a later packet
fails. A failed writeback is reported separately from a packet-dispatch failure.

The pump is wired to Too Human's `VdInitializeRingBuffer` (kernel ordinal
`0x01C3`) and `VdEnableRingBufferRPtrWriteBack` (`0x01B6`) imports through
the per-title `PpcImportRegistry`. A 32-bit scalar Xenos write to
`CP_RB_WPTR` (register index `0x01C5`, MMIO address `0x7FC80714`) updates
the command processor's dword write pointer and invokes one bounded pump.
A 64-bit Xenos MMIO store is delivered to the observer as two ordered
32-bit writes (high dword first), preserving the title helper's split-register
semantics. The MMIO bus calls observers outside its register-file lock;
PM4 type-0/type-1 writes use an unobserved register-file path to avoid
recursively triggering the command processor. The dispatcher preflights all
Type-0/Type-1 register destinations before applying any writes, preventing a
packet with a later invalid register index from partially modifying earlier
registers. Registry-level locking serializes ring setup, write-pointer updates
and synchronous pumping. Observer teardown waits for in-flight callbacks.

This is not an asynchronous GPU worker or complete Xenos device. Type-0 and
type-1 packets update the Xenos register-file mirror. Writes to the scratch
register window (0x578-0x57F) also write through to guest physical memory
when the corresponding bit is enabled in SCRATCH_UMSK (0x1DC); the base
address comes from SCRATCH_ADDR (0x1DD). The complete dword destination is
checked for committed writable guest memory before a PM4 packet is accepted.
Direct scalar CPU MMIO writes and register-target REG_RMW/COND_WRITE use the
same writeback behavior. Writes to COHER_STATUS_HOST (0x0A31) set its pending
status bit; WAIT_REG_MEM against that register acknowledges it by clearing the
register before comparison. This mirrors Xenia's MakeCoherent handshake, but
does not flush texture/vertex caches because no resource cache exists yet.
This follows Xenia's documented register table and command-processor write
path:
[register table](https://github.com/xenia-project/xenia/blob/95a5c3ee250f80c3b9d139658649d9ffb6db3eec/src/xenia/gpu/register_table.inc),
[write path](https://github.com/xenia-project/xenia/blob/95a5c3ee250f80c3b9d139658649d9ffb6db3eec/src/xenia/gpu/command_processor.cc).
Type-3
NOP (opcode `0x10`) is consumed; bin-mask/bin-select state is tracked through
`SET_BIN_MASK`/`SET_BIN_SELECT` (opcodes `0x50`/`0x51`) and their low/high
dword forms (`0x60`-`0x63`); `MEM_WRITE` (opcode `0x3D`) writes its dword
payload to a prevalidated guest physical range using the address's Xenos
endian mode; `REG_TO_MEM` (opcode `0x3E`) copies a mirrored Xenos register to
a prevalidated guest physical dword; `REG_RMW` (opcode `0x21`) applies
immediate/register AND/OR operands to the mirrored register file;
`COND_WRITE` (opcode `0x45`) supports masked comparisons against either a
register or checked guest physical dword, followed by a conditional write to
a register or checked guest physical dword; and indirect-buffer opcodes
`0x3F` and `0x37` are supported for one non-nested level. The predicate bit
is evaluated against the current `bin_select & bin_mask` intersection, so a
predicated command is skipped when that intersection is zero and is dispatched
when nonzero. Each batch accepts at most 64 indirect buffers, each buffer is
limited to 64K dwords and 256 packets, and its complete physical-memory range
must be committed and readable. The callback also handles the event-write
subset `EVENT_WRITE` (`0x46`), non-timestamp `EVENT_WRITE_SHD` (`0x58`),
and `EVENT_WRITE_EXT` (`0x5A`), plus the side-effect-free markers `ME_INIT`
(`0x48`), `WAIT_FOR_IDLE` (`0x26`), `CONTEXT_UPDATE` (`0x5E`), and
`INVALIDATE_STATE` (`0x3B`). Timestamp-mode `EVENT_WRITE_SHD`, occlusion
query events, and all other Type-3 opcodes are logged and rejected. These are
bounded command-stream and guest-memory operations, not draw/shader
execution. `WAIT_REG_MEM` (opcode `0x3C`) validates its five operands,
supports register and checked physical-memory polling, and implements the
seven comparison operations. When its condition is not satisfied, the callback
returns a distinct deferred result: the command remains at RPTR without
blocking the guest thread. Register-polled waits are retried when the guest
writes the exact Xenos register being polled. Memory-polled waits arm a
low-overhead observer for translated PPC scalar stores and guest-memory output
from the boot/file HLE layers. It covers big-endian scalar stores, instrumented
structure clears/copies, and direct guest-buffer fills performed by `NtReadFile`;
a write overlapping the polled physical dword retries the packet immediately
without another CP write-pointer update. Internal PM4 DMA writes remain
unobserved because the command pump holds its serialization lock; they require
a later CP notification if they change a polled location. The wait interval is not slept and there is no independent
asynchronous polling worker. Linear indirect buffers preserve their inner
read cursor when a nested command defers or fails, so a primary-ring retry
resumes after completed inner packets instead of replaying them. The hardware's
read-pointer writeback block cadence is not modeled; the synchronous pump
writes the read pointer after each call that consumes dwords. Interrupts,
fences, DMA, register side effects and GPU opcode semantics remain
unimplemented. Callbacks should avoid partial side effects when they reject a
packet, because packet-level pointer progress is transactional but host
callback state is not automatically rolled back.

The PM4 stream dispatcher builds on the packet decoder and routes type-0
sequential/single-register writes and type-1 two-register writes to an explicit
register callback. Type-3 packets are forwarded with opcode, predicate and a
bounded payload span to an explicit opcode callback; type-2 and zero-word NOP
packets are consumed without side effects. Dispatch has a caller-supplied
packet budget and stops on malformed/truncated input, missing handlers, or
a callback rejection. It reports only fully consumed packets. The Xenos
command-processor pump is connected to the title's ring setup imports and
scalar `CP_RB_WPTR` MMIO write path. It traverses a bounded subset of indirect
buffers but rejects unsupported Type-3 operations and cannot process the
title's real command stream end to end.

## Implemented: bounded Xenos primary-ring pump

`XenosCommandProcessor` validates physical base/size for primary-ring
configuration and read-pointer writeback, initializes the read pointer,
validates CP write pointers as dword indices, and runs the bounded guest-ring
dispatcher on request. It publishes the read pointer in guest big-endian form
after a pump that consumed commands, including progress before a later
callback rejection. The caller supplies explicit PM4 callbacks; an unsupported
Type-3 operation is rejected rather than silently accepted.

The pump is synchronous and currently game-free. It is wired to the two
title ring-configuration imports and Xenos `CP_RB_WPTR` register index
`0x01C5`. It does not schedule a device worker or model the hardware's
read-pointer writeback block cadence; it writes once per pump call that
consumes dwords. Its Type-3 callback accepts NOP, checked physical MEM_WRITE,
`WAIT_REG_MEM`, non-timestamp event writes, side-effect-free PM4 markers,
and a limited one-level indirect-buffer path with resumable inner
packet cursors. Timestamp events,
occlusion-query events, drawing, interrupts and full GPU synchronization
remain unimplemented. For an
unmet `WAIT_REG_MEM` predicate, the dispatcher reports a deferred packet,
leaves the read pointer unchanged, and retries only when the caller pumps
again. This avoids blocking the guest CPU but is not a substitute for the
hardware's independent polling worker. Packet predicates are evaluated before
dispatch, including predicated indirect buffers: a failed bin intersection
skips the buffer, while a passing predicate executes its bounded contents.
`TooHumanXenosCommandProcessorTests` covers ring configuration, write-pointer
validation, packet progress, callback rejection, deferred-command retention
and read-pointer writeback failure. `TooHumanPpcImportRegistryTests` covers
the kernel-import-to-MMIO path, skipped and passing predicated indirect
buffers, and a `WAIT_REG_MEM` command retried after its register condition
changes.

## Startup import priorities and boot HLE

`tools/startup_import_trace.py` walks the recompiled call graph from `_xstart` in source order and reports where each
import is first reached (`docs/startup-imports.md`). 37 of the 242 function imports are reached by direct calls from the
entry point; they form a recognisable CRT startup (virtual-memory setup, critical sections, system queries, TLS, network init).
This is a static prioritisation aid: indirect calls and data-dependent branches are not followed, so the runtime's fail-fast
import log remains the source of truth.

`runtime/ppc/boot_hle.*` provides a host-backed compatibility subset for the imports currently reached or
prioritized by Too Human startup. It includes process/time queries; selected XConfig values; ANSI/Unicode string
initialization and Latin-1 conversions; FILETIME/TIME_FIELDS conversions; XEX header/module/privilege queries;
critical sections; 256 per-process kernel TLS indices with host-thread-local values; notification/synchronization events in a typed process handle table; selected
XAM startup/message-box behavior; a disconnected-controller compatibility profile for `XamInputGetCapabilities`, `XamInputGetState`, `XamInputSetState`, and `XamInputGetKeystrokeEx`; and diagnostic, exit, and networking-startup handlers. Register the handlers with
`register_boot_imports(registry)` before `initialize_title_runtime`.

The XAM controller subset registers ordinals 0x0190, 0x0191, 0x0192,
and 0x0198. It follows the Xenia/XAM result convention: required-null arguments
return `ERROR_BAD_ARGUMENTS` (0xA0), while valid calls return
`ERROR_DEVICE_NOT_CONNECTED` (0x48F), because this runtime has no host HID
provider yet. `XamInputGetState` preserves the documented null-state connection
query. No controller state is synthesized, and polling, keystrokes, and
vibration remain unimplemented until a host input backend is added.

Native `KEVENT` support shares the same waitable-object table: `KeInitializeEvent`
registers the 0x10-byte guest dispatcher record by address, `KeSetEvent` and
`KeResetEvent` change both host wait state and the guest signal-state field, and
`KeWaitForSingleObject` consumes synchronization events while leaving notification
events signaled. `KePulseEvent` and `NtPulseEvent` release only threads already queued at the
pulse instant (one for synchronization events, all for notification events)
and leave the event unsignaled. Priority increment and wait-switch hints are
ignored; multiple-object waits remain unimplemented.

Waitable timer handles now support `NtCreateTimer`, `NtSetTimerEx` and
`NtCancelTimer`. Notification timers remain signaled after expiry, while
synchronization timers consume the signal on one successful wait. One-shot and
periodic timers use steady-clock deadlines serviced by waiting threads; there
is no detached timer worker. Resume requests return the informational
`STATUS_TIMER_RESUME_IGNORED`. APC callback routines and named timer objects
are unsupported.

The NT mutant handle subset registers `NtCreateMutant`/`NtReleaseMutant`.
Mutants are recursive, host-thread-owned mutex objects; initial ownership,
same-thread recursive waits, owner-only release, invalid-handle and
not-owned errors are modelled. Named mutants, native `KMUTANT` structures,
abandonment recovery and priority/wait-switch semantics remain unsupported.

Semaphore support now includes `NtCreateSemaphore`/`NtReleaseSemaphore` handles and
native `KeInitializeSemaphore`/`KeReleaseSemaphore` objects. The counting
object consumes one count per successful wait, rejects releases that exceed its
configured limit, and wakes blocked waiters on release. Native guest
`KSEMAPHORE` records use the 0x14-byte big-endian layout (dispatcher header
plus limit), and `KeWaitForSingleObject` can wait on the address registered by
`KeInitializeSemaphore`. When an XDK-inlined initializer bypasses the import,
first-touch wait/set/reset/release lazily recognizes only validated native
header types 0/1 (event) and 5 (semaphore). Other dispatcher object types are
still rejected. Named semaphore attributes and multiple-object waits remain
unsupported.

The synchronization subset is deliberately bounded. Critical sections use recursive host mutexes and mirror the
28-byte guest structure's lock count, recursion count, and owner. Events support notification/manual-reset and
synchronization/auto-reset behavior, initial state, set/clear, finite or infinite waits, and close. The Xbox ABI is
preserved: `NtCreateEvent` receives its output handle in r3, object attributes in r4, event type in r5 and initial
state in r6; `NtWaitForSingleObjectEx` receives handle, wait mode, alertable flag and timeout pointer in r3-r6.
`NtWaitForSingleObjectEx` and `NtClose` use the shared object table. Event set/clear remains event-only. Named-object
lookup, APC delivery/alertable completion, multiple-wait operations, and other dispatcher-object types are not implemented. Kernel TLS values are per host thread, matching the intended one-host-thread-per-guest-thread
execution model.

Thread stacks and both guard regions use the host's native page size, with a 16 KiB minimum guest stack. This avoids assuming every host has 4 KiB pages. Partial context-allocation failures roll back already allocated runtime blocks and the stack reservation.

Guest thread context initialization now has a matching release path. It validates that KTHREAD, PCR, TLS and stack allocations still belong to the expected heaps, restores protected stack guard pages to read/write, clears per-thread state, and releases those allocations. Only the thread record that originally created the process-wide ProcessInfoBlock may release it; worker contexts leave the shared block intact. Regression tests verify malformed records are rejected without freeing memory and that a released worker stack can be reused.

GuestThreadManager owns host workers and registers thread-completion objects in the shared process handle table.
`NtWaitForSingleObjectEx` and `NtClose` therefore operate on both event and thread objects; event set/clear handlers
remain event-only. The manager models initial suspension/resume counts, finite/infinite completion waits, exit codes,
and handle closure without cancelling a live worker. Its optional exactly-once cleanup callback is deferred until
the worker has completed, the handle is closed, and in-flight waiters have returned. Manager shutdown stops and joins
workers and waits for cleanup callbacks before the runtime heaps can be destroyed.

`GuestThreadRuntime` implements the first guest-worker execution path. `ExCreateThread` builds a separate KTHREAD,
PCR, TLS and stack context, then invokes the selected entry through `invoke_recompiled_function`. The API startup
routine receives the user start address and context in r3/r4; without a startup routine, the start function receives
its context in r3. Creation flag bit 0 requests initial suspension; bit 0x80 selects the native KTHREAD address as the
guest handle. `NtResumeThread` and `KeResumeThread` resume the same typed thread object. `ExTerminateThread` unwinds
the current worker using a guest-thread exit signal. Registry shutdown requests cancellation, observed at the next
HLE/import dispatch boundary; pure PPC loops that never cross an HLE boundary are not preemptible yet.

This is not a complete Xbox scheduler. APCs, alertable waits, arbitrary-thread suspend/terminate, processor affinity,
priority semantics, and fully synchronized concurrent access to shared guest memory remain incomplete. `TooHumanGuestThreadRuntimeTests` exercises the PPC execution bridge and its guest register/context setup.

`XamShowMessageBoxUIEx` auto-selects the focused choice in this headless runtime. XConfig support is limited to the
explicit categories/settings in the handler. `DbgPrint` logs the format string without expanding guest varargs;
`RtlRaiseException` only recognizes the MSVC thread-name marker and otherwise fails fast; actual socket calls remain
unsupported even though XNet/WSA startup returns success. The handlers are tested by `TooHumanBootHleTests` without
linking the generated game library (needs `ppc_context.h`/SIMDe; set `-DTH_SIMDE_DIR=...` if the XenonRecomp
submodule is not checked out).

## Implemented: host thread lifecycle primitive

GuestThreadManager owns host workers that execute a caller-provided entry callback over an already prepared
GuestThreadStartup record. It models suspended/running/completed state, one initial suspend count,
resume-count reporting, completion waits (poll/finite/infinite), exit-code lookup (259 while active),
invalid handles, and handle closure without terminating a live worker. Completed workers are joined and
reaped on subsequent manager operations; remaining workers receive a stop request and are joined during
manager destruction.

This is intentionally a generic lifecycle layer rather than a claim of Xbox thread support. The callback must
cooperate with its stop token. It does not initialize guest context, execute PPC by itself, update guest
KTHREAD state on transitions, implement suspend beyond the initial gate, or register any kernel import.
TooHumanGuestThreadManagerTests exercises suspend/resume, timeout/completion, exit codes, invalid handles, deferred cleanup and closing a live handle without cancelling it.

## Implemented: guest virtual filesystem and directory enumeration

The `NtQueryInformationFile` HLE supports the Xbox `FileBasicInformation`
(class 4), `FileStandardInformation` (class 5), `FilePositionInformation`
(class 14), and `FileNetworkOpenInformation` (class 34) records. Basic
Basic and NetworkOpen information use the host file's last-write timestamp for
all four time fields until the VFS tracks creation/access/change timestamps
independently; both report VFS-derived file attributes.

The host-backed `GuestVfs` maps the title's game volume read-only and save/cache
volumes beneath a configurable save root. It normalizes Xbox device paths,
performs case-insensitive component lookup, rejects traversal and symlink
escapes, and enforces read/write permissions inherited from directory handles.
`GuestFile` supports synchronous reads, writes, seeks, resize, flush, file
metadata queries, and stateful directory enumeration. Directory enumeration
sorts entries deterministically, supports case-insensitive `*`/`?` matching,
retains its search expression and cursor across calls, and reports
`STATUS_NO_SUCH_FILE` separately from `STATUS_NO_MORE_FILES`.

The Xbox 360 `NtQueryDirectoryFile` export uses this title's compact ABI:
`r3` is the directory handle, `r7` the I/O status block, `r8` the output
buffer, `r9` its byte length, `r10` the optional 8-byte `ANSI_STRING`
search descriptor, and the ninth `RestartScan` argument is at `r1 + 0x54`.
It emits a single `FILE_DIRECTORY_INFORMATION` record per synchronous call.
The record's `EndOfFile` and `AllocationSize` fields are 64-bit big-endian
values; an undersized filename buffer returns `STATUS_BUFFER_OVERFLOW` without
advancing the enumeration cursor, allowing the caller to retry. On successful
queries, `IO_STATUS_BLOCK.Information` reports the supplied buffer length,
matching Xenia's Xbox 360 kernel implementation
([reference](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_io.cc)).
Optional event handles are
signaled on completion. APC callbacks, asynchronous I/O completion, other
directory-information classes, and multi-record batching are not implemented.

## Implemented: volume-information HLE

The Xbox kernel `NtQueryVolumeInformationFile` import (ordinal `0xEF`) now
supports `FileFsVolumeInformation` (class 1) and `FileFsSizeInformation`
(class 3). It validates the handle, I/O status block, output range, class and
minimum buffer size; writes all multibyte fields in guest big-endian order;
and reports the returned record size through `IO_STATUS_BLOCK.Information`.
The volume record currently uses the generic VFS mount defaults (zero serial,
creation time and label, no object support). The size record derives capacity
and available space from the host filesystem containing the opened file and
models 4 KiB allocation units (8 sectors of 512 bytes). This is a compatibility
baseline, not an emulation of FATX volume identity, device characteristics,
or exact Xbox media geometry. Device-information (class 4) and
attribute-information (class 5) queries remain unsupported and return
`STATUS_INVALID_INFO_CLASS`.

## Implemented: initial Xenos/XMA MMIO register bus

The runtime now recognizes the Xbox 360 Xenos register aperture at
`0x7FC80000-0x7FC8FFFF` and the XMA aperture at
`0x7FEA0000-0x7FEAFFFF`. The initial `GuestMmioBus` provides separate
64 KiB, byte-addressable register files for those devices, preserving
big-endian byte lanes for 8-, 16-, 32- and 64-bit scalar accesses. Unwritten
register bytes read as zero; writes are retained for readback. A bounded
4096-entry trace captures address, width, value, device and access direction.

When both the generated PPC library and runtime core are enabled, scalar
`PPC_LOAD_U*` and `PPC_STORE_U*` accessors check those apertures before
dereferencing guest RAM. Thus scalar register accesses do not fault against
the guest address space's default `PROT_NONE` reservation. Ordinary RAM
retains the original direct big-endian access path. The `PPC_MM_*` aliases
use the same checked accessors.

This remains an interception/diagnostics foundation rather than full device
emulation. Only the bounded PM4 command-processor subset and narrow Xenos
register effects documented earlier are implemented. Interrupts, a hardware
DMA engine, XMA decoding, vector/atomic MMIO operations, shader/draw execution
and a renderer remain absent. Returning zero for an untouched register is
only the register-file default; the trace must identify accesses that need
additional device semantics.
`TooHumanGuestMmioTests` covers range boundaries, independent apertures,
big-endian subword lanes, readback, invalid accesses and bounded tracing.
`TooHumanPpcImportRegistryTests` also verifies that generated scalar loads
and stores reach the bus without touching uncommitted guest pages.

## Implemented: display-query HLE compatibility profile

The runtime registers Too Human's `VdQueryVideoMode` (ordinal 0x1CA),
`VdQueryVideoFlags` (0x1C9), `VdGetCurrentDisplayInformation` (0x1BA),
`VdGetCurrentDisplayGamma` (0x1B9), and XAM `XGetVideoMode` (0x3D1).
They expose a deterministic 1280x720 progressive 16:9 HD mode at 60 Hz
(NTSC), using the Xbox/Xenia-compatible `X_VIDEO_MODE` (0x30-byte) and
`X_DISPLAY_INFO` (0x58-byte) big-endian layouts. Video flags are 0x3
(widescreen and at least 1024 pixels wide); gamma defaults to BT.709
(type 2) with power 2.22222233. Output ranges are checked before writing.

This is a host compatibility profile, not host-monitor enumeration or an
implemented renderer. `VdSetDisplayMode`, `VdSwap` and presentation remain
unsupported. A bounded synchronous primary-ring PM4 path and a limited subset
of Xenos register effects exist as documented above, but ring-buffer
interrupts, draw/shader execution and a functioning GPU backend do not.
The structure layouts and baseline values follow Xenia's definitions:
[X_VIDEO_MODE layout](https://github.com/xenia-project/xenia/blob/master/src/xenia/xbox.h)
and [video HLE](https://github.com/xenia-project/xenia/blob/master/src/xenia/kernel/xboxkrnl/xboxkrnl_video.cc).

## Next implementation sequence

1. Capture the title's actual Xenos register/PM4 traffic and extend the bounded decoder only for observed command formats and register semantics; keep a clear rejection path for unsupported opcodes.
2. Build a real Xenos execution backend (resource memory, draw/shader pipeline, synchronization and presentation) behind the existing PM4 bridge.
3. Extend PPC vector/atomic access interception only for operations confirmed to target device or aliased memory ranges.
4. Add XMA decoding and controller services after graphics/boot traces identify the required formats and ABIs.
5. Run the title from a matching decrypted XEX, capture the first unsupported import/MMIO access, and implement only behavior supported by call-site evidence.

Every step should have game-free tests and diagnostics before integration with the title.


The virtual-memory HLE tracks reservation state separately from current page protection. MEM_RESERVE pages are host-protected as inaccessible until MEM_COMMIT changes the committed subrange; NtProtectVirtualMemory rejects reserved pages, and NtQueryVirtualMemory reports MEM_RESERVE versus MEM_COMMIT per protection range.
