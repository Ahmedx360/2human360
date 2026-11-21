#pragma once

#include "ppc/import_registry.hpp"

#include <cstddef>
#include <string>

namespace toohuman::runtime {

// Startup HLEs for Xbox 360 kernel/XAM imports reached by Too Human. This layer includes bounded
// RTL helpers, host-backed critical sections and events, KeTls, and main/worker guest-thread context
// initialization. A separate host thread lifecycle primitive exists, but it is not yet wired to
// ExCreateThread/NtResumeThread or PPC execution. APCs, object-manager semantics, timers, and full
// guest scheduling remain incomplete.
//
// Calling convention (Xbox 360 PPC ABI): arguments in r3..r10, result in r3, guest memory big-endian.
//
// Register before initialize_title_runtime(); returns false (and sets *error) on a duplicate.
[[nodiscard]] bool register_boot_imports(PpcImportRegistry& imports,
                                         std::string* error = nullptr,
                                         std::size_t* registered_count = nullptr);

// Called once variable imports have created the executable LDR record.
void set_executable_module_handle(std::uint32_t handle) noexcept;

// Exposed for unit tests (they are plain PPC-callable functions).
namespace boot_hle {
PPCFunc KeGetCurrentProcessType;
PPCFunc KeQueryPerformanceFrequency;
PPCFunc KeQuerySystemTime;
PPCFunc KeDelayExecutionThread;
PPCFunc RtlTimeToTimeFields;
PPCFunc RtlTimeFieldsToTime;
PPCFunc XGetLanguage;
PPCFunc XGetAVPack;
PPCFunc ExGetXConfigSetting;
PPCFunc XamGetSystemVersion;
PPCFunc XamShowMessageBoxUIEx;
PPCFunc XexGetModuleHandle;
PPCFunc XexGetProcedureAddress;
PPCFunc XexCheckExecutablePrivilege;
PPCFunc RtlImageXexHeaderField;
PPCFunc RtlCompareMemoryUlong;
PPCFunc RtlRaiseException;
PPCFunc XamLoaderTerminateTitle;
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
