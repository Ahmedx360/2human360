#include "ppc/boot_hle.hpp"

namespace toohuman::runtime {

bool register_boot_imports(PpcImportRegistry& imports, std::string* error) {
    struct Entry { const char* library; std::uint16_t ordinal; PPCFunc* fn; };
    const Entry entries[] = {
        {"xboxkrnl.exe", 0x0003, &boot_hle::DbgPrint},
        {"xboxkrnl.exe", 0x0010, &boot_hle::ExGetXConfigSetting},
        {"xboxkrnl.exe", 0x0195, &boot_hle::XexGetModuleHandle},
        {"xboxkrnl.exe", 0x0197, &boot_hle::XexGetProcedureAddress},
        {"xboxkrnl.exe", 0x0021, &boot_hle::FscSetCacheElementCount},
        {"xboxkrnl.exe", 0x0028, &boot_hle::HalReturnToFirmware},
        {"xboxkrnl.exe", 0x0052, &boot_hle::KeBugCheck},
        {"xboxkrnl.exe", 0x0053, &boot_hle::KeBugCheckEx},
        {"xboxkrnl.exe", 0x0066, &boot_hle::KeGetCurrentProcessType},
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
        {"xam.xex",      0x0001, &boot_hle::NetDll_WSAStartup},
        {"xam.xex",      0x0282, &boot_hle::XamGetSystemVersion},
        {"xam.xex",      0x02DC, &boot_hle::XamShowMessageBoxUIEx},
        {"xam.xex",      0x0033, &boot_hle::NetDll_XNetStartup},
        {"xam.xex",      0x03CB, &boot_hle::XGetAVPack},
        {"xam.xex",      0x03CD, &boot_hle::XGetLanguage},
    };
    for (const auto& e : entries)
        if (!imports.register_handler(e.library, e.ordinal, e.fn, error)) return false;
    return true;
}

} // namespace toohuman::runtime
