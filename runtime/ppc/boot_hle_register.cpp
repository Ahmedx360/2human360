#include "ppc/boot_hle.hpp"

namespace toohuman::runtime {

bool register_boot_imports(PpcImportRegistry& imports, std::string* error,
                           std::size_t* registered_count) {
    struct Entry { const char* library; std::uint16_t ordinal; PPCFunc* fn; };
    const Entry entries[] = {
        {"xboxkrnl.exe", 0x0003, &boot_hle::DbgPrint},
        {"xboxkrnl.exe", 0x0010, &boot_hle::ExGetXConfigSetting},
        {"xboxkrnl.exe", 0x011B, &boot_hle::RtlCompareMemoryUlong},
        {"xboxkrnl.exe", 0x012B, &boot_hle::RtlImageXexHeaderField},
        {"xboxkrnl.exe", 0x0136, &boot_hle::RtlRaiseException},
        {"xboxkrnl.exe", 0x0194, &boot_hle::XexCheckExecutablePrivilege},
        {"xboxkrnl.exe", 0x0196, &boot_hle::XexGetModuleSection},
        {"xboxkrnl.exe", 0x00DA, &boot_hle::NtDuplicateObject},
        {"xboxkrnl.exe", 0x00D2, &boot_hle::NtCreateFile},
        {"xboxkrnl.exe", 0x00DF, &boot_hle::NtOpenFile},
        {"xboxkrnl.exe", 0x00F0, &boot_hle::NtReadFile},
        {"xboxkrnl.exe", 0x00FF, &boot_hle::NtWriteFile},
        {"xboxkrnl.exe", 0x00E8, &boot_hle::NtQueryInformationFile},
        {"xboxkrnl.exe", 0x00F7, &boot_hle::NtSetInformationFile},
        {"xboxkrnl.exe", 0x00E7, &boot_hle::NtQueryFullAttributesFile},
        {"xboxkrnl.exe", 0x00DB, &boot_hle::NtFlushBuffersFile},
        {"xboxkrnl.exe", 0x00C7, &boot_hle::MmSetAddressProtect},
        {"xboxkrnl.exe", 0x0099, &boot_hle::KeSetBasePriorityThread},
        {"xboxkrnl.exe", 0x0105, &boot_hle::ObDereferenceObject},
        {"xboxkrnl.exe", 0x0097, &boot_hle::KeSetAffinityThread},
        {"xboxkrnl.exe", 0x0110, &boot_hle::ObReferenceObjectByHandle},
        {"xboxkrnl.exe", 0x0195, &boot_hle::XexGetModuleHandle},
        {"xboxkrnl.exe", 0x0197, &boot_hle::XexGetProcedureAddress},
        {"xam.xex",      0x01A9, &boot_hle::XamLoaderTerminateTitle},
        {"xboxkrnl.exe", 0x0021, &boot_hle::FscSetCacheElementCount},
        {"xboxkrnl.exe", 0x0028, &boot_hle::HalReturnToFirmware},
        {"xboxkrnl.exe", 0x0052, &boot_hle::KeBugCheck},
        {"xboxkrnl.exe", 0x0053, &boot_hle::KeBugCheckEx},
        {"xboxkrnl.exe", 0x0066, &boot_hle::KeGetCurrentProcessType},
        {"xboxkrnl.exe", 0x0083, &boot_hle::KeQueryPerformanceFrequency},
        {"xboxkrnl.exe", 0x0084, &boot_hle::KeQuerySystemTime},
        {"xboxkrnl.exe", 0x005A, &boot_hle::KeDelayExecutionThread},
        {"xboxkrnl.exe", 0x0140, &boot_hle::RtlTimeToTimeFields},
        {"xboxkrnl.exe", 0x013F, &boot_hle::RtlTimeFieldsToTime},
        {"xboxkrnl.exe", 0x012C, &boot_hle::RtlInitAnsiString},
        {"xboxkrnl.exe", 0x012D, &boot_hle::RtlInitUnicodeString},
        {"xboxkrnl.exe", 0x0133, &boot_hle::RtlMultiByteToUnicodeN},
        {"xboxkrnl.exe", 0x0135, &boot_hle::RtlNtStatusToDosError},
        {"xboxkrnl.exe", 0x0143, &boot_hle::RtlUnicodeToMultiByteN},
        {"xboxkrnl.exe", 0x0125, &boot_hle::RtlEnterCriticalSection},
        {"xboxkrnl.exe", 0x012E, &boot_hle::RtlInitializeCriticalSection},
        {"xboxkrnl.exe", 0x012F, &boot_hle::RtlInitializeCriticalSectionAndSpinCount},
        {"xboxkrnl.exe", 0x0130, &boot_hle::RtlLeaveCriticalSection},
        {"xboxkrnl.exe", 0x0141, &boot_hle::RtlTryEnterCriticalSection},
        {"xboxkrnl.exe", 0x0152, &boot_hle::KeTlsAlloc},
        {"xboxkrnl.exe", 0x0153, &boot_hle::KeTlsFree},
        {"xboxkrnl.exe", 0x0154, &boot_hle::KeTlsGetValue},
        {"xboxkrnl.exe", 0x0155, &boot_hle::KeTlsSetValue},
        {"xboxkrnl.exe", 0x00CE, &boot_hle::NtClearEvent},
        {"xboxkrnl.exe", 0x00CF, &boot_hle::NtClose},
        {"xboxkrnl.exe", 0x00D1, &boot_hle::NtCreateEvent},
        {"xboxkrnl.exe", 0x00F6, &boot_hle::NtSetEvent},
        {"xboxkrnl.exe", 0x00FD, &boot_hle::NtWaitForSingleObjectEx},
        {"xboxkrnl.exe", 0x000D, &boot_hle::ExCreateThread},
        {"xboxkrnl.exe", 0x0019, &boot_hle::ExTerminateThread},
        {"xboxkrnl.exe", 0x0092, &boot_hle::KeResumeThread},
        {"xboxkrnl.exe", 0x00F5, &boot_hle::NtResumeThread},
        {"xam.xex",      0x0001, &boot_hle::NetDll_WSAStartup},
        {"xam.xex",      0x0282, &boot_hle::XamGetSystemVersion},
        {"xam.xex",      0x02DC, &boot_hle::XamShowMessageBoxUIEx},
        {"xam.xex",      0x0033, &boot_hle::NetDll_XNetStartup},
        {"xam.xex",      0x03CB, &boot_hle::XGetAVPack},
        {"xam.xex",      0x03CD, &boot_hle::XGetLanguage},
    };
    std::size_t count = 0;
    for (const auto& e : entries) {
        if (!imports.register_handler(e.library, e.ordinal, e.fn, error)) {
            if (registered_count) *registered_count = count;
            return false;
        }
        ++count;
    }
    if (registered_count) *registered_count = count;
    return true;
}

} // namespace toohuman::runtime
