#pragma once

#include "ppc/import_registry.hpp"

#include <string>

namespace toohuman::runtime {

// Early-startup HLE for Xbox 360 kernel/XAM imports reached by Too Human's CRT startup
// (see docs/startup-imports.md). This layer includes bounded string helpers, simple host-backed
// recursive critical sections, and host-thread-local KeTls slots. It does not yet provide the
// Xbox object manager, guest scheduler, events, waits, or per-guest-thread KTHREAD/PCR structures.
//
// Calling convention (Xbox 360 PPC ABI): arguments in r3..r10, result in r3, guest memory big-endian.
//
// Register before initialize_title_runtime(); returns false (and sets *error) on a duplicate.
[[nodiscard]] bool register_boot_imports(PpcImportRegistry& imports, std::string* error = nullptr);

// Called once variable imports have created the executable LDR record.
void set_executable_module_handle(std::uint32_t handle) noexcept;

// Exposed for unit tests (they are plain PPC-callable functions).
namespace boot_hle {
PPCFunc KeGetCurrentProcessType;
PPCFunc XGetLanguage;
PPCFunc XGetAVPack;
PPCFunc ExGetXConfigSetting;
PPCFunc XamGetSystemVersion;
PPCFunc XamShowMessageBoxUIEx;
PPCFunc XexGetModuleHandle;
PPCFunc XexGetProcedureAddress;
PPCFunc RtlInitAnsiString;
PPCFunc RtlInitUnicodeString;
PPCFunc RtlMultiByteToUnicodeN;
PPCFunc RtlUnicodeToMultiByteN;
PPCFunc RtlInitializeCriticalSection;
PPCFunc RtlInitializeCriticalSectionAndSpinCount;
PPCFunc RtlEnterCriticalSection;
PPCFunc RtlTryEnterCriticalSection;
PPCFunc RtlLeaveCriticalSection;
PPCFunc KeTlsAlloc;
PPCFunc KeTlsFree;
PPCFunc KeTlsGetValue;
PPCFunc KeTlsSetValue;
PPCFunc NtCreateEvent;
PPCFunc NtSetEvent;
PPCFunc NtClearEvent;
PPCFunc NtWaitForSingleObjectEx;
PPCFunc NtClose;
PPCFunc RtlNtStatusToDosError;
PPCFunc FscSetCacheElementCount;
PPCFunc DbgPrint;
PPCFunc KeBugCheck;
PPCFunc KeBugCheckEx;
PPCFunc HalReturnToFirmware;
PPCFunc NetDll_XNetStartup;
PPCFunc NetDll_WSAStartup;
} // namespace boot_hle

} // namespace toohuman::runtime
