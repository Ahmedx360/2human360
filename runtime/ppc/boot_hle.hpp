#pragma once

#include "ppc/import_registry.hpp"

#include <cstddef>
#include <string>

namespace toohuman::runtime {

// Startup HLEs for Xbox 360 kernel/XAM imports reached by Too Human. This layer includes bounded
// RTL helpers, host-backed critical sections, a shared waitable kernel-object table for events and thread
// completions, KeTls, and initial guest worker-thread execution through the recompiled PPC function table.
// APCs, alertable waits, processor affinity/priority semantics, and full guest scheduling remain incomplete.
//
// Calling convention (Xbox 360 PPC ABI): arguments in r3..r10, result in r3, guest memory big-endian.
//
// Register before initialize_title_runtime(); returns false (and sets *error) on a duplicate.
namespace boot_hle {
PPCFunc NtCreateFile;
PPCFunc NtOpenFile;
PPCFunc NtReadFile;
PPCFunc NtWriteFile;
PPCFunc NtQueryInformationFile;
PPCFunc NtQueryVolumeInformationFile;
PPCFunc NtSetInformationFile;
PPCFunc NtQueryFullAttributesFile;
PPCFunc NtQueryDirectoryFile;
PPCFunc NtFlushBuffersFile;
} // namespace boot_hle

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
PPCFunc XGetVideoMode;
PPCFunc VdQueryVideoMode;
PPCFunc VdQueryVideoFlags;
PPCFunc VdGetCurrentDisplayInformation;
PPCFunc VdGetCurrentDisplayGamma;
PPCFunc VdInitializeRingBuffer;
PPCFunc VdEnableRingBufferRPtrWriteBack;
PPCFunc ExGetXConfigSetting;
PPCFunc XamGetSystemVersion;
PPCFunc XamInputGetCapabilities;
PPCFunc XamInputGetState;
PPCFunc XamInputSetState;
PPCFunc XamInputGetKeystrokeEx;
PPCFunc XamShowMessageBoxUIEx;
PPCFunc XexGetModuleHandle;
PPCFunc XexGetProcedureAddress;
PPCFunc XexCheckExecutablePrivilege;
PPCFunc XexGetModuleSection;
PPCFunc NtDuplicateObject;
PPCFunc XamShowDirtyDiscErrorUI;
PPCFunc MmSetAddressProtect;
PPCFunc KeSetBasePriorityThread;
PPCFunc ObDereferenceObject;
PPCFunc KeSetAffinityThread;
PPCFunc ObReferenceObjectByHandle;
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
PPCFunc ExCreateThread;
PPCFunc ExTerminateThread;
PPCFunc KeResumeThread;
PPCFunc NtResumeThread;
PPCFunc NtSuspendThread;
PPCFunc NtCreateEvent;
PPCFunc KeInitializeEvent;
PPCFunc KeSetEvent;
PPCFunc KeResetEvent;
PPCFunc KePulseEvent;
PPCFunc NtPulseEvent;
PPCFunc NtCreateTimer;
PPCFunc NtSetTimerEx;
PPCFunc NtCancelTimer;
PPCFunc NtCreateMutant;
PPCFunc NtReleaseMutant;
PPCFunc NtCreateSemaphore;
PPCFunc NtReleaseSemaphore;
PPCFunc KeInitializeSemaphore;
PPCFunc KeReleaseSemaphore;
PPCFunc KeWaitForSingleObject;
PPCFunc KeWaitForMultipleObjects;
PPCFunc NtSetEvent;
PPCFunc NtClearEvent;
PPCFunc NtWaitForSingleObjectEx;
PPCFunc NtWaitForMultipleObjectsEx;
PPCFunc NtClose;
PPCFunc RtlNtStatusToDosError;
PPCFunc FscSetCacheElementCount;
PPCFunc DbgPrint;
PPCFunc KeBugCheck;
PPCFunc KeBugCheckEx;
PPCFunc HalReturnToFirmware;
PPCFunc NetDll_XNetStartup;
PPCFunc NetDll_WSAStartup;
PPCFunc InterlockedPopEntrySList;
PPCFunc XeCryptShaInit;
PPCFunc XeCryptShaUpdate;
PPCFunc XeCryptShaFinal;
PPCFunc XeCryptSha;
} // namespace boot_hle

} // namespace toohuman::runtime
