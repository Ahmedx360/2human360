#include "ppc/boot_hle.hpp"

namespace toohuman::runtime {

bool register_boot_imports(PpcImportRegistry& imports, std::string* error) {
    struct Entry { const char* library; std::uint16_t ordinal; PPCFunc* fn; };
    const Entry entries[] = {
        {"xboxkrnl.exe", 0x0003, &boot_hle::DbgPrint},
        {"xboxkrnl.exe", 0x0021, &boot_hle::FscSetCacheElementCount},
        {"xboxkrnl.exe", 0x0028, &boot_hle::HalReturnToFirmware},
        {"xboxkrnl.exe", 0x0052, &boot_hle::KeBugCheck},
        {"xboxkrnl.exe", 0x0053, &boot_hle::KeBugCheckEx},
        {"xboxkrnl.exe", 0x0066, &boot_hle::KeGetCurrentProcessType},
        {"xboxkrnl.exe", 0x012C, &boot_hle::RtlInitAnsiString},
        {"xboxkrnl.exe", 0x0133, &boot_hle::RtlMultiByteToUnicodeN},
        {"xboxkrnl.exe", 0x0143, &boot_hle::RtlUnicodeToMultiByteN},
        {"xam.xex",      0x0001, &boot_hle::NetDll_WSAStartup},
        {"xam.xex",      0x0033, &boot_hle::NetDll_XNetStartup},
        {"xam.xex",      0x03CB, &boot_hle::XGetAVPack},
        {"xam.xex",      0x03CD, &boot_hle::XGetLanguage},
    };
    for (const auto& e : entries)
        if (!imports.register_handler(e.library, e.ordinal, e.fn, error)) return false;
    return true;
}

} // namespace toohuman::runtime
