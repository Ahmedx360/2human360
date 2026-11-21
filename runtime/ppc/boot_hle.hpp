#pragma once

#include "ppc/import_registry.hpp"

#include <string>

namespace toohuman::runtime {

// Stateless startup-time HLE for Xbox 360 kernel/XAM imports reached by Too Human's CRT startup
// (see docs/startup-imports.md). Everything here is pure: no object manager, scheduler, files or
// device state. Imports that need a thread/object model (critical sections, events, waits, TLS) are
// intentionally NOT included and still fail fast until that model exists.
//
// Calling convention (Xbox 360 PPC ABI): arguments in r3..r10, result in r3, guest memory big-endian.
//
// Register before initialize_title_runtime(); returns false (and sets *error) on a duplicate.
[[nodiscard]] bool register_boot_imports(PpcImportRegistry& imports, std::string* error = nullptr);

// Exposed for unit tests (they are plain PPC-callable functions).
namespace boot_hle {
PPCFunc KeGetCurrentProcessType;
PPCFunc XGetLanguage;
PPCFunc XGetAVPack;
PPCFunc RtlInitAnsiString;
PPCFunc RtlMultiByteToUnicodeN;
PPCFunc RtlUnicodeToMultiByteN;
PPCFunc FscSetCacheElementCount;
PPCFunc DbgPrint;
PPCFunc KeBugCheck;
PPCFunc KeBugCheckEx;
PPCFunc HalReturnToFirmware;
PPCFunc NetDll_XNetStartup;
PPCFunc NetDll_WSAStartup;
} // namespace boot_hle

} // namespace toohuman::runtime
