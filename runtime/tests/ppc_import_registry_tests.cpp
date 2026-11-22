#include "memory/guest_address_space.hpp"
#include "ppc/import_registry.hpp"
#include "ppc/boot_hle.hpp"
#include "fs/guest_vfs.hpp"
#include "ppc/guest_thread_manager.hpp"
#include <ppc_config.h>

#include <atomic>
#include <cassert>
#include <chrono>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <vector>

namespace {
PPC_FUNC_IMPL(test_import_handler) {
    (void)base;
    ctx.r3.u32 = 0xBEEF1234u;
}

PPC_FUNC_IMPL(test_default_handler) {
    (void)ctx;
    (void)base;
}
}

int main() {
    std::string error;
    {
    toohuman::runtime::LoadedPeImage image;
    image.image_base = 0x82000000u;
    image.image_size = 0x10000u;
    image.entry_point = 0x82001000u;
    image.bytes.resize(image.image_size);

    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(memory.valid());
    assert(memory.map_image(image, &error));
    assert(memory.initialize_function_table(0x82001000u, 0x1000u, &error));
    assert(memory.fill_function_table(&test_default_handler));

    // Reserve writable guest scratch pages after the synthetic function table.
    // The 4 GiB reservation is PROT_NONE until an explicit commit.
    assert(memory.commit_region(0x82012000u, 0x6000u, &error));

    toohuman::runtime::PpcImportRegistry imports;
    assert(imports.register_handler("xboxkrnl.exe", 0x74u,
                                    &test_import_handler, &error));
    std::size_t startup_hle_count = 0;
    assert(toohuman::runtime::register_boot_imports(imports, &error, &startup_hle_count));
    assert(startup_hle_count == 65u);
    const std::vector<toohuman::runtime::XexImport> metadata{
        {"xboxkrnl.exe", 0x74u, 0, 1, 0x82001100u},
        {"xboxkrnl.exe", 0x011Bu, 0, 1, 0x82001104u},
        {"xboxkrnl.exe", 0x0126u, 0, 1, 0x82001108u},
        {"xboxkrnl.exe", 0x0066u, 0, 1, 0x8200110Cu},
        {"xboxkrnl.exe", 0x012Eu, 0, 1, 0x82001110u},
        {"xboxkrnl.exe", 0x012Fu, 0, 1, 0x82001114u},
        {"xboxkrnl.exe", 0x0125u, 0, 1, 0x82001118u},
        {"xboxkrnl.exe", 0x0130u, 0, 1, 0x8200111Cu},
        {"xboxkrnl.exe", 0x0141u, 0, 1, 0x82001120u},
        {"xboxkrnl.exe", 0x0152u, 0, 1, 0x82001124u},
        {"xboxkrnl.exe", 0x0153u, 0, 1, 0x82001128u},
        {"xboxkrnl.exe", 0x0154u, 0, 1, 0x8200112Cu},
        {"xboxkrnl.exe", 0x0155u, 0, 1, 0x82001130u},
        {"xboxkrnl.exe", 0x00D1u, 0, 1, 0x82001134u},
        {"xboxkrnl.exe", 0x00F6u, 0, 1, 0x82001138u},
        {"xboxkrnl.exe", 0x00CEu, 0, 1, 0x8200113Cu},
        {"xboxkrnl.exe", 0x00FDu, 0, 1, 0x82001140u},
        {"xboxkrnl.exe", 0x00CFu, 0, 1, 0x82001144u},
        {"xboxkrnl.exe", 0x0135u, 0, 1, 0x82001148u},
        {"xboxkrnl.exe", 0x012Du, 0, 1, 0x8200114Cu},
        {"xboxkrnl.exe", 0x0010u, 0, 1, 0x82001150u},
        {"xam.xex", 0x0282u, 0, 1, 0x82001154u},
        {"xam.xex", 0x02DCu, 0, 1, 0x82001158u},
        {"xboxkrnl.exe", 0x0195u, 0, 1, 0x8200115Cu},
        {"xboxkrnl.exe", 0x0197u, 0, 1, 0x82001160u},
        {"xboxkrnl.exe", 0x0194u, 0, 1, 0x82001164u},
        {"xboxkrnl.exe", 0x012Bu, 0, 1, 0x82001168u},
        {"xboxkrnl.exe", 0x011Bu, 0, 1, 0x8200116Cu},
        {"xboxkrnl.exe", 0x0136u, 0, 1, 0x82001170u},
        {"xboxkrnl.exe", 0x005Au, 0, 1, 0x82001174u},
        {"xboxkrnl.exe", 0x0083u, 0, 1, 0x82001178u},
        {"xboxkrnl.exe", 0x0084u, 0, 1, 0x8200117Cu},
        {"xboxkrnl.exe", 0x0140u, 0, 1, 0x82001180u},
        {"xboxkrnl.exe", 0x013Fu, 0, 1, 0x82001184u},
        {"xboxkrnl.exe", 0x000Du, 0, 1, 0x82001188u},
        {"xboxkrnl.exe", 0x0019u, 0, 1, 0x8200118Cu},
        {"xboxkrnl.exe", 0x0092u, 0, 1, 0x82001190u},
        {"xboxkrnl.exe", 0x00F5u, 0, 1, 0x82001194u},
        {"xboxkrnl.exe", 0x0196u, 0, 1, 0x82001198u},
        {"xboxkrnl.exe", 0x00DAu, 0, 1, 0x8200119Cu},
        {"xboxkrnl.exe", 0x00E4u, 0, 1, 0x820011A0u},
        {"xboxkrnl.exe", 0x00EFu, 0, 1, 0x820011A4u}
    };
    std::size_t registered = 0;
    assert(imports.install(memory, metadata, &registered, &error));
    assert(registered == 42u);
    assert(memory.get_function<PPCFunc*>(0x82001100u) != &test_default_handler);

    PPCContext context{};
    context.ctr.u32 = 0x82001100u;
    const auto import_thunk = memory.get_function<PPCFunc*>(0x82001100u);
    assert(import_thunk != nullptr);
    import_thunk(context, memory.base());
    assert(context.r3.u32 == 0xBEEF1234u);

    const auto call_test_import = [&](std::uint32_t thunk, PPCContext& ctx) {
        ctx.ctr.u32 = thunk;
        const auto function = memory.get_function<PPCFunc*>(thunk);
        assert(function != nullptr);
        function(ctx, memory.base());
    };
    // The new volume-information export is registered under Xbox ordinal 0xEF.
    PPCContext volume_dispatch_context{};
    volume_dispatch_context.r3.u32 = 0xDEADBEEFu;
    call_test_import(0x820011A4u, volume_dispatch_context);
    assert(volume_dispatch_context.r3.u32 == 0xC0000008u); // Invalid handle.

    PPCContext boot_context{};
    call_test_import(0x8200110Cu, boot_context); // KeGetCurrentProcessType
    assert(boot_context.r3.u32 == 1u);

    // Thread imports are resolved even before title startup constructs the executor.
    boot_context = {};
    call_test_import(0x82001188u, boot_context); // ExCreateThread.
    assert(boot_context.r3.u32 == 0xC0000002u);
    boot_context = {};
    boot_context.r3.u32 = 0x1000u;
    call_test_import(0x82001190u, boot_context); // KeResumeThread.
    assert(boot_context.r3.u32 == 0xFFFFFFFFu);
    boot_context = {};
    call_test_import(0x82001194u, boot_context); // NtResumeThread.
    assert(boot_context.r3.u32 == 0xC0000002u);
    boot_context = {};
    call_test_import(0x8200118Cu, boot_context); // ExTerminateThread outside a worker.
    assert(boot_context.r3.u32 == 0xC0000001u);

    // 28-byte Xbox RTL critical section: initialization, re-entrant try/enter/leave.
    constexpr std::uint32_t critical_section = 0x82012000u;
    boot_context = {};
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001114u, boot_context); // RtlInitializeCriticalSectionAndSpinCount
    assert(boot_context.r3.u32 == 0);
    assert(memory.base()[critical_section] == 1);
    auto guest_be32 = [&](std::uint32_t address) {
        const auto* p = memory.base() + address;
        return (std::uint32_t(p[0]) << 24) | (std::uint32_t(p[1]) << 16) |
               (std::uint32_t(p[2]) << 8) | std::uint32_t(p[3]);
    };
    auto guest_be64 = [&](std::uint32_t address) {
        const auto* p = memory.base() + address;
        std::uint64_t value = 0;
        for (unsigned i = 0; i < 8; ++i) value = (value << 8) | p[i];
        return value;
    };
    assert(guest_be32(critical_section + 0x10) == 0xFFFFFFFFu);
    constexpr std::uint32_t critical_section_pcr = 0x82015200u;
    constexpr std::uint32_t critical_section_kthread = 0x82015300u;
    const auto write_guest_be32 = [&](std::uint32_t address, std::uint32_t value) {
        memory.base()[address] = static_cast<std::uint8_t>(value >> 24);
        memory.base()[address + 1] = static_cast<std::uint8_t>(value >> 16);
        memory.base()[address + 2] = static_cast<std::uint8_t>(value >> 8);
        memory.base()[address + 3] = static_cast<std::uint8_t>(value);
    };
    write_guest_be32(critical_section_pcr + 0x100, critical_section_kthread);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001120u, boot_context); // TryEnter
    assert(boot_context.r3.u32 == 1);
    assert(guest_be32(critical_section + 0x18) == critical_section_kthread);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001120u, boot_context); // Recursive TryEnter
    assert(boot_context.r3.u32 == 1);
    assert(guest_be32(critical_section + 0x14) == 2);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x8200111Cu, boot_context); // Leave recursion level 2
    assert(guest_be32(critical_section + 0x14) == 1);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x8200111Cu, boot_context); // Final leave
    assert(guest_be32(critical_section + 0x10) == 0xFFFFFFFFu);
    assert(guest_be32(critical_section + 0x18) == 0);

    // KeTls slot allocation and per-host-thread values.
    boot_context = {};
    call_test_import(0x82001124u, boot_context); // KeTlsAlloc
    const auto tls_slot = boot_context.r3.u32;
    assert(tls_slot != 0xFFFFFFFFu && tls_slot < 256);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    boot_context.r4.u32 = 0xCAFEBABEu;
    call_test_import(0x82001130u, boot_context); // KeTlsSetValue
    assert(boot_context.r3.u32 == 1);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x8200112Cu, boot_context); // KeTlsGetValue
    assert(boot_context.r3.u32 == 0xCAFEBABEu);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x82001128u, boot_context); // KeTlsFree
    assert(boot_context.r3.u32 == 1);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x8200112Cu, boot_context); // freed slots read as zero
    assert(boot_context.r3.u32 == 0);

    // Native NTSTATUS conversion and UNICODE_STRING initialization.
    boot_context = {};
    boot_context.r3.u32 = 0xC0000008u;
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 6u);
    boot_context = {};
    boot_context.r3.u32 = 0xC000000Du;
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 87u);
    boot_context = {};
    boot_context.r3.u32 = 0xD0000008u; // Customer/driver status is normalized before lookup.
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 6u);
    constexpr std::uint32_t unicode_source = 0x82014000u;
    constexpr std::uint32_t unicode_descriptor = 0x82014020u;
    memory.base()[unicode_source] = 0;
    memory.base()[unicode_source + 1] = 'A';
    memory.base()[unicode_source + 2] = 0;
    memory.base()[unicode_source + 3] = 0;
    boot_context = {};
    boot_context.r3.u32 = unicode_descriptor;
    boot_context.r4.u32 = unicode_source;
    call_test_import(0x8200114Cu, boot_context);
    assert(guest_be32(unicode_descriptor) == 0x00020004u);
    assert(guest_be32(unicode_descriptor + 4) == unicode_source);

    // XConfig values use guest-endian encoding and report the returned size.
    constexpr std::uint32_t xconfig_value = 0x82014100u;
    constexpr std::uint32_t xconfig_required = 0x82014110u;
    boot_context = {};
    boot_context.r3.u32 = 2; // Secured category.
    boot_context.r4.u32 = 2; // AV region.
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 4;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(xconfig_value) == 0x1000u);
    assert(memory.base()[xconfig_required] == 0);
    assert(memory.base()[xconfig_required + 1] == 4);

    boot_context = {};
    boot_context.r3.u32 = 3;
    boot_context.r4.u32 = 9; // English.
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 4;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(xconfig_value) == 1u);

    boot_context = {};
    boot_context.r3.u32 = 2;
    boot_context.r4.u32 = 2;
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 1;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000023u);

    boot_context = {};
    call_test_import(0x82001154u, boot_context);
    assert(boot_context.r3.u32 == 0u); // XamGetSystemVersion's startup stub.

    // The XEX executable module has an LDR record; the uploaded PE has no exports.
    constexpr std::uint32_t fake_module_handle = 0x82014500u;
    constexpr std::uint32_t synthetic_xex_header = 0x82014300u;
    constexpr std::uint32_t module_name = 0x82014200u;
    constexpr std::uint32_t module_handle_out = 0x82014220u;
    constexpr std::uint32_t procedure_out = 0x82014224u;
    toohuman::runtime::set_executable_module_handle(fake_module_handle);
    // LDR_DATA_TABLE_ENTRY +0x58 points to the copied XEX header.
    write_guest_be32(fake_module_handle + 0x58, synthetic_xex_header);
    write_guest_be32(synthetic_xex_header + 8, 0x40);
    write_guest_be32(synthetic_xex_header + 0x14, 2);
    write_guest_be32(synthetic_xex_header + 0x18, 0x00030000u);
    write_guest_be32(synthetic_xex_header + 0x1C, 0x00000600u);
    write_guest_be32(synthetic_xex_header + 0x20, 0x00020104u);
    write_guest_be32(synthetic_xex_header + 0x24, 0x00000030u);

    // RtlImageXexHeaderField returns inline values or pointers based on key type.
    boot_context = {};
    boot_context.r3.u32 = synthetic_xex_header;
    boot_context.r4.u32 = 0x00030000u;
    call_test_import(0x82001168u, boot_context);
    assert(boot_context.r3.u32 == 0x600u);
    boot_context = {};
    boot_context.r3.u32 = synthetic_xex_header;
    boot_context.r4.u32 = 0x00020104u;
    call_test_import(0x82001168u, boot_context);
    assert(boot_context.r3.u32 == synthetic_xex_header + 0x30u);

    // RtlCompareMemoryUlong returns the matching prefix length in bytes.
    constexpr std::uint32_t compare_source = 0x82014380u;
    write_guest_be32(compare_source + 0, 0x11223344u);
    write_guest_be32(compare_source + 4, 0xAABBCCDDu);
    write_guest_be32(compare_source + 8, 0x11223344u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 4u);
    write_guest_be32(compare_source + 4, 0x11223344u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 12u);
    write_guest_be32(compare_source + 0, 0xAABBCCDDu);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 10; // Length must be ULONG-aligned.
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);

    // RtlRaiseException recognizes MSVC's thread-name marker without unwinding.
    constexpr std::uint32_t exception_record = 0x82014480u;
    write_guest_be32(exception_record, 0x406D1388u);
    boot_context = {};
    boot_context.r3.u32 = exception_record;
    call_test_import(0x82001170u, boot_context);

    boot_context = {};
    boot_context.r3.u32 = 9; // XEX system flag bit 9.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = 10; // XEX system flag bit 10.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = 11;
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = 32; // Invalid bit index.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 0u);

    boot_context = {};
    boot_context.r3.u32 = 0; // Null name selects executable module.
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(module_handle_out) == fake_module_handle);

    const char default_name[] = "Default.xex";
    std::memcpy(memory.base() + module_name, default_name, sizeof(default_name));
    boot_context = {};
    boot_context.r3.u32 = module_name;
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(module_handle_out) == fake_module_handle);

    const char unknown_name[] = "missing.xex";
    std::memcpy(memory.base() + module_name, unknown_name, sizeof(unknown_name));
    boot_context = {};
    boot_context.r3.u32 = module_name;
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0x490u);
    assert(guest_be32(module_handle_out) == 0);

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = 1; // Ordinal lookup.
    boot_context.r5.u32 = procedure_out;
    call_test_import(0x82001160u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000263u);
    assert(guest_be32(procedure_out) == 0);

    boot_context = {};
    boot_context.r3.u32 = 0; // Null hmodule also selects executable module.
    boot_context.r4.u32 = module_name; // Name lookup; executable still has no exports.
    boot_context.r5.u32 = procedure_out;
    call_test_import(0x82001160u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000263u);
    assert(guest_be32(procedure_out) == 0);

    // XexGetModuleSection parses the resource-info header (0x2FF) with bounded
    // offsets and writes its data pointer/size only to committed outputs.
    write_guest_be32(synthetic_xex_header + 8u, 0x40u);
    write_guest_be32(synthetic_xex_header + 0x14u, 1u);
    write_guest_be32(synthetic_xex_header + 0x18u, 0x000002FFu);
    write_guest_be32(synthetic_xex_header + 0x1Cu, 0x28u);
    write_guest_be32(synthetic_xex_header + 0x28u, 20u);
    std::memcpy(memory.base() + synthetic_xex_header + 0x2Cu, "TESTSEC", 7u);
    memory.base()[synthetic_xex_header + 0x33u] = 0;
    write_guest_be32(synthetic_xex_header + 0x34u, 0x82015000u);
    write_guest_be32(synthetic_xex_header + 0x38u, 0x40u);
    std::memcpy(memory.base() + module_name, "TESTSEC", 7u);
    memory.base()[module_name + 7u] = 0;

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    assert(guest_be32(module_handle_out) == 0x82015000u);
    assert(guest_be32(procedure_out) == 0x40u);

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = 0x60000000u; // Reserved but not committed.
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);

    write_guest_be32(synthetic_xex_header + 0x28u, 3u); // Must not underflow section size.
    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000225u);

    toohuman::runtime::set_executable_module_handle(0xFFFFFFF0u);
    boot_context = {};
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000225u);
    toohuman::runtime::set_executable_module_handle(0);

    toohuman::runtime::set_executable_module_handle(0);

    // NtQueryDirectoryFile emits the 0x40-byte FILE_DIRECTORY_INFORMATION
    // header and keeps a cursor on the directory object between calls.
    const auto directory_test_root =
        std::filesystem::temp_directory_path() / "toohuman_nt_query_directory_test";
    std::filesystem::remove_all(directory_test_root);
    std::filesystem::create_directories(directory_test_root);
    { std::ofstream(directory_test_root / "alpha.txt", std::ios::binary) << "abc"; }
    { std::ofstream(directory_test_root / "beta.bin", std::ios::binary) << "xy"; }
    auto directory_object = std::make_shared<toohuman::runtime::GuestFile>(
        directory_test_root, true, true, false, true);
    const auto directory_handle =
        toohuman::runtime::process_kernel_objects().insert(directory_object);
    assert(directory_handle);

    constexpr std::uint32_t directory_name_descriptor = 0x82016200u;
    constexpr std::uint32_t directory_pattern_buffer = 0x82016220u;
    constexpr std::uint32_t directory_iosb = 0x82016240u;
    constexpr std::uint32_t directory_info = 0x82016260u;
    constexpr std::uint32_t directory_restart = 0x82016300u;
    const std::string directory_pattern = "a*.txt";
    write_guest_be32(directory_name_descriptor,
        (static_cast<std::uint32_t>(directory_pattern.size()) << 16) |
         static_cast<std::uint32_t>(directory_pattern.size()));
    write_guest_be32(directory_name_descriptor + 4u, directory_pattern_buffer);
    std::memcpy(memory.base() + directory_pattern_buffer,
                directory_pattern.data(), directory_pattern.size());
    write_guest_be32(directory_restart, 1u);

    // An undersized result buffer must not consume the current directory entry.
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x48u; // Header fits; "alpha.txt" does not.
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0x80000005u); // STATUS_BUFFER_OVERFLOW.
    assert(guest_be32(directory_iosb) == 0x80000005u);
    assert(guest_be32(directory_iosb + 4u) == 0u);

    // Retry without restarting. The unreturned entry must still be first.
    write_guest_be32(directory_restart, 0u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x80u;
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context); // NtQueryDirectoryFile.
    assert(boot_context.r3.u32 == 0u);
    assert(guest_be32(directory_iosb) == 0u);
    assert(guest_be32(directory_info + 4u) == 0u);
    // EndOfFile and AllocationSize are 64-bit big-endian LARGE_INTEGERs.
    assert(guest_be64(directory_info + 0x28u) == 3u);
    assert(guest_be64(directory_info + 0x30u) == 0x1000u);
    assert(guest_be32(directory_info + 0x3Cu) == 9u);
    assert(guest_be32(directory_iosb + 4u) == 0x80u);
    assert(std::memcmp(memory.base() + directory_info + 0x40u, "alpha.txt", 9u) == 0);

    write_guest_be32(directory_restart, 0u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x80u;
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0x80000006u); // STATUS_NO_MORE_FILES.
    assert(guest_be32(directory_iosb) == 0x80000006u);

    // Invalid output memory is rejected before advancing the directory cursor.
    write_guest_be32(directory_restart, 1u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = 0x60000000u;
    boot_context.r9.u32 = 0x80u;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);

    assert(toohuman::runtime::process_kernel_objects().close(*directory_handle));
    std::filesystem::remove_all(directory_test_root);


    // Event create/set/clear/wait/close lifecycle, including manual vs auto reset.
    constexpr std::uint32_t handle_out = 0x82013000u;
    constexpr std::uint32_t timeout_in = 0x82013004u;
    constexpr std::uint32_t previous_state_out = 0x8201300Cu;
    const auto set_guest_u64 = [&](std::uint32_t address, std::uint64_t value) {
        for (std::uint32_t i = 0; i < 8; ++i)
            memory.base()[address + i] = static_cast<std::uint8_t>(value >> (56 - i * 8));
    };

    // KeQueryPerformanceFrequency uses the Xbox 360 50 MHz timebase.
    boot_context = {};
    call_test_import(0x82001178u, boot_context);
    assert(boot_context.r3.u32 == 50000000u);
    constexpr std::uint32_t guest_system_time_out = 0x82014120u;
    boot_context = {};
    boot_context.r3.u32 = guest_system_time_out;
    call_test_import(0x8200117Cu, boot_context);
    assert(guest_be32(guest_system_time_out) >= 0x01D00000u);
    assert(guest_be32(guest_system_time_out + 4) != 0u);

    constexpr std::uint32_t delay_interval = 0x82014130u;
    set_guest_u64(delay_interval, static_cast<std::uint64_t>(-10000ll)); // 1 ms.
    boot_context = {};
    boot_context.r3.u32 = 0; // KernelMode.
    boot_context.r4.u32 = 0; // Not alertable.
    boot_context.r5.u32 = delay_interval;
    call_test_import(0x82001174u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r5.u32 = 0; // Null interval pointer.
    call_test_import(0x82001174u, boot_context);
    assert(boot_context.r3.u32 == 0xC000000Du);

    // TIME_FIELDS round-trip: leap day, milliseconds and weekday in guest BE layout.
    constexpr std::uint32_t time_fields_in = 0x82014140u;
    constexpr std::uint32_t time_filetime = 0x82014160u;
    constexpr std::uint32_t time_fields_out = 0x82014170u;
    const auto write_be16_field = [&](std::uint32_t address, std::uint16_t value) {
        memory.base()[address] = static_cast<std::uint8_t>(value >> 8);
        memory.base()[address + 1] = static_cast<std::uint8_t>(value);
    };
    const auto read_be16_field = [&](std::uint32_t address) {
        return static_cast<std::uint16_t>(
            (static_cast<std::uint16_t>(memory.base()[address]) << 8) |
            memory.base()[address + 1]);
    };
    const std::uint16_t fields_values[]{2024, 2, 29, 12, 34, 56, 789, 4};
    for (std::uint32_t i = 0; i < 8; ++i)
        write_be16_field(time_fields_in + i * 2, fields_values[i]);
    boot_context = {};
    boot_context.r3.u32 = time_fields_in;
    boot_context.r4.u32 = time_filetime;
    call_test_import(0x82001184u, boot_context); // RtlTimeFieldsToTime (ordinal 0x013F)
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = time_filetime;
    boot_context.r4.u32 = time_fields_out;
    call_test_import(0x82001180u, boot_context); // RtlTimeToTimeFields (ordinal 0x0140)
    for (std::uint32_t i = 0; i < 8; ++i)
        assert(read_be16_field(time_fields_out + i * 2) == fields_values[i]);
    write_be16_field(time_fields_in + 4, 30); // Invalid 2024-02-30.
    boot_context = {};
    boot_context.r3.u32 = time_fields_in;
    boot_context.r4.u32 = time_filetime;
    call_test_import(0x82001184u, boot_context); // Invalid TIME_FIELDS must fail.
    assert(boot_context.r3.u32 == 0u);

    boot_context = {};
    boot_context.r3.u32 = 0xFFFFFFFFu;
    boot_context.r6.u32 = 0xFFFFFFFFu;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000008u);

    boot_context = {};
    boot_context.r3.u32 = handle_out;
    boot_context.r5.u32 = 0; // Notification event: manual reset.
    boot_context.r6.u32 = 1; // Initially signaled.
    call_test_import(0x82001134u, boot_context);
    assert(boot_context.r3.u32 == 0);
    const auto manual_event = guest_be32(handle_out);
    assert(manual_event != 0);

    constexpr std::uint32_t duplicate_out1 = 0x82013020u;
    constexpr std::uint32_t duplicate_out2 = 0x82013024u;
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = 0x60000000u; // Invalid output pointer must not duplicate.
    call_test_import(0x8200119Cu, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);
    assert(toohuman::runtime::process_kernel_objects().lookup(manual_event));

    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = duplicate_out1;
    call_test_import(0x8200119Cu, boot_context); // DUPLICATE_SAME_ACCESS default.
    assert(boot_context.r3.u32 == 0u);
    const auto duplicated_event1 = guest_be32(duplicate_out1);
    assert(duplicated_event1 != 0u && duplicated_event1 != manual_event);
    assert(toohuman::runtime::process_kernel_objects().lookup(duplicated_event1) ==
           toohuman::runtime::process_kernel_objects().lookup(manual_event));

    boot_context = {};
    boot_context.r3.u32 = duplicated_event1;
    boot_context.r4.u32 = duplicate_out2;
    boot_context.r5.u32 = 1u; // DUPLICATE_CLOSE_SOURCE.
    call_test_import(0x8200119Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);
    const auto duplicated_event2 = guest_be32(duplicate_out2);
    assert(duplicated_event2 != 0u);
    assert(!toohuman::runtime::process_kernel_objects().lookup(duplicated_event1));
    assert(toohuman::runtime::process_kernel_objects().lookup(duplicated_event2));
    boot_context = {};
    boot_context.r3.u32 = duplicated_event2;
    call_test_import(0x82001144u, boot_context); // NtClose.
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // Manual-reset remains signaled.
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    call_test_import(0x8200113Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0x102u); // STATUS_TIMEOUT.
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = previous_state_out;
    call_test_import(0x82001138u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(previous_state_out) == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = previous_state_out;
    call_test_import(0x82001138u, boot_context);
    assert(guest_be32(previous_state_out) == 1);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000008u); // STATUS_INVALID_HANDLE.

    boot_context = {};
    boot_context.r3.u32 = handle_out;
    boot_context.r5.u32 = 1; // Synchronization event: auto reset.
    boot_context.r6.u32 = 1;
    call_test_import(0x82001134u, boot_context);
    assert(boot_context.r3.u32 == 0);
    const auto auto_event = guest_be32(handle_out);
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // Auto-reset consumes signal.
    assert(boot_context.r3.u32 == 0x102u);

    // A blocked host waiter is released by NtSetEvent and consumes an auto-reset signal.
    set_guest_u64(timeout_in, static_cast<std::uint64_t>(-10000000ll)); // 1 second, relative.
    std::atomic<std::uint32_t> asynchronous_wait_status{0xFFFFFFFFu};
    std::thread waiter([&] {
        PPCContext wait_context{};
        wait_context.r3.u32 = auto_event;
        wait_context.r6.u32 = timeout_in;
        call_test_import(0x82001140u, wait_context);
        asynchronous_wait_status.store(wait_context.r3.u32, std::memory_order_release);
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    call_test_import(0x82001138u, boot_context);
    waiter.join();
    assert(asynchronous_wait_status.load(std::memory_order_acquire) == 0u);
    set_guest_u64(timeout_in, 0);

    boot_context = {};
    boot_context.r3.u32 = auto_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);

    // Thread completion handles share the event dispatcher table.
    toohuman::runtime::GuestThreadManager guest_threads(
        toohuman::runtime::process_kernel_objects());
    const auto completed_thread = guest_threads.create(
        toohuman::runtime::GuestThreadStartup{},
        [](toohuman::runtime::GuestThreadStartup&, std::stop_token) { return 0x12345678u; },
        true, &error);
    assert(completed_thread.has_value());

    // A suspended thread object times out through the same NT wait entry point.
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    boot_context.r6.u32 = timeout_in; // zero interval: poll
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0x102u); // STATUS_TIMEOUT.

    // Event-only operations reject a thread object even though both share handles.
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    call_test_import(0x82001138u, boot_context); // NtSetEvent.
    assert(boot_context.r3.u32 == 0xC0000008u);

    std::uint32_t previous_thread_suspend_count = 0;
    assert(guest_threads.resume(*completed_thread, &previous_thread_suspend_count, &error));
    assert(previous_thread_suspend_count == 1u);
    assert(guest_threads.wait(*completed_thread, std::chrono::seconds(2)) ==
           toohuman::runtime::GuestThreadWaitResult::Signaled);
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // NtWaitForSingleObjectEx.
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    call_test_import(0x82001144u, boot_context); // NtClose.
    assert(boot_context.r3.u32 == 0u);
    std::uint32_t closed_thread_exit = 0;
    assert(!guest_threads.get_exit_code(*completed_thread, closed_thread_exit));

    // XAM's 9th/10th arguments are stack-spilled at SP+0x54/+0x5C in the title caller.
    constexpr std::uint32_t message_stack = 0x82015000u;
    constexpr std::uint32_t message_result = 0x82015100u;
    constexpr std::uint32_t message_overlapped = 0x82015110u;
    constexpr std::uint32_t message_event_out = 0x82015140u;
    boot_context = {};
    boot_context.r3.u32 = message_event_out;
    boot_context.r5.u32 = 1; // Synchronization event.
    boot_context.r6.u32 = 0;
    call_test_import(0x82001134u, boot_context);
    const auto message_event = guest_be32(message_event_out);
    assert(message_event != 0);
    write_guest_be32(message_overlapped + 0x0C, message_event);
    write_guest_be32(message_stack + 0x54, message_result);
    write_guest_be32(message_stack + 0x5C, message_overlapped);
    boot_context = {};
    boot_context.r1.u32 = message_stack;
    boot_context.r3.u32 = 0xFF;
    boot_context.r4.u32 = 0;
    boot_context.r5.u32 = 0;
    boot_context.r6.u32 = 1;
    boot_context.r7.u32 = 0;
    boot_context.r8.u32 = 0; // Focused button.
    boot_context.r9.u32 = 1;
    boot_context.r10.u32 = 0;
    call_test_import(0x82001158u, boot_context);
    assert(boot_context.r3.u32 == 997u); // ERROR_IO_PENDING.
    assert(guest_be32(message_result) == 0u);
    assert(guest_be32(message_overlapped) == 0u);
    assert(guest_be32(message_overlapped + 0x18) == 0u);
    boot_context = {};
    boot_context.r3.u32 = message_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0u); // XAM completion signaled its event.
    boot_context = {};
    boot_context.r3.u32 = message_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);

    // RtlFillMemoryUlong writes big-endian ULONGs and ignores a partial tail.
    constexpr std::uint32_t test_buffer = 0x82016000u;
    context = {};
    context.ctr.u32 = 0x82001108u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    const std::uint8_t expected_fill[]{0x11, 0x22, 0x33, 0x44,
                                       0x11, 0x22, 0x33, 0x44, 0, 0, 0};
    assert(std::memcmp(memory.base() + test_buffer, expected_fill,
                       sizeof(expected_fill)) == 0);

    // RtlCompareMemoryUlong returns the matching prefix in bytes.
    context = {};
    context.ctr.u32 = 0x82001104u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    assert(context.r3.u32 == 8);
    memory.base()[test_buffer + 4] = 0xAA;
    context = {};
    context.ctr.u32 = 0x82001104u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    assert(context.r3.u32 == 4);
    }

    // Verify the real title's data exports are backed by guest memory and
    // their IAT slots are patched before the image is mapped/protected.
    auto variable_memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(variable_memory.valid());
    toohuman::runtime::LoadedPeImage variable_image;
    variable_image.image_base = 0x82000000u;
    variable_image.image_size = 0x017AFE00u;
    variable_image.entry_point = 0x82A46B18u;
    variable_image.bytes.resize(variable_image.image_size);
    std::vector<std::uint8_t> xex_header(0x100, 0);
    xex_header[8] = 0;
    xex_header[9] = 0;
    xex_header[10] = 0;
    xex_header[11] = 0x80;
    // Two optional-header entries: import metadata and immediate system flags.
    xex_header[0x17] = 2;
    xex_header[0x19] = 0x01;
    xex_header[0x1A] = 0x03;
    xex_header[0x1B] = 0xFF;
    xex_header[0x1F] = 0x40;
    xex_header[0x20] = 0x00;
    xex_header[0x21] = 0x03;
    xex_header[0x22] = 0x00;
    xex_header[0x23] = 0x00; // XEX system flags, immediate value.
    xex_header[0x25] = 0x00;
    xex_header[0x26] = 0x06;
    xex_header[0x27] = 0x00; // 0x00000600: privilege bits 9 and 10.
    xex_header[0x43] = 0x10;
    const std::vector<toohuman::runtime::XexImport> variable_imports{
        {"xboxkrnl.exe", 0x01C0u, 0, 0, 0x82000600u, 0},
        {"xboxkrnl.exe", 0x0193u, 0, 0, 0x82000604u, 0}
    };
    toohuman::runtime::PpcImportRegistry variable_registry;
    std::size_t bound_variables = 0;
    assert(variable_registry.prepare_variable_imports(
        variable_memory, variable_image, xex_header, variable_imports,
        &bound_variables, &error));
    assert(bound_variables == 2);
    const auto read_be32 = [](const std::vector<std::uint8_t>& bytes, std::size_t offset) {
        return (static_cast<std::uint32_t>(bytes[offset]) << 24) |
               (static_cast<std::uint32_t>(bytes[offset + 1]) << 16) |
               (static_cast<std::uint32_t>(bytes[offset + 2]) << 8) |
               static_cast<std::uint32_t>(bytes[offset + 3]);
    };
    const auto gpu_clock_storage = read_be32(variable_image.bytes, 0x600);
    const auto module_handle_storage = read_be32(variable_image.bytes, 0x604);
    assert(gpu_clock_storage >= 0x86000000u);
    assert(module_handle_storage >= 0x86000000u);
    const auto* gpu_clock = variable_memory.base() + gpu_clock_storage;
    assert(read_be32(std::vector<std::uint8_t>(gpu_clock, gpu_clock + 4), 0) == 500u);
    const auto module_record = read_be32(
        std::vector<std::uint8_t>(variable_memory.base() + module_handle_storage,
                                  variable_memory.base() + module_handle_storage + 4), 0);
    const auto header_copy = read_be32(
        std::vector<std::uint8_t>(variable_memory.base() + module_record + 0x58,
                                  variable_memory.base() + module_record + 0x5C), 0);
    assert(header_copy >= 0x86000000u);
    assert(variable_memory.base()[header_copy] == xex_header[0]);
    assert(variable_memory.base()[header_copy + 0x7F] == xex_header[0x7F]);

    assert(variable_memory.map_image(variable_image, &error));
    assert(variable_memory.initialize_function_table(
        static_cast<std::uint32_t>(PPC_CODE_BASE),
        static_cast<std::uint32_t>(PPC_CODE_SIZE), &error));
    assert(variable_memory.fill_function_table(&test_default_handler));

    const auto thunk_base = static_cast<std::uint32_t>(PPC_CODE_BASE + 0x100);
    const std::vector<toohuman::runtime::XexImport> pool_imports{
        {"xboxkrnl.exe", 0x000Bu, 0, 1, thunk_base, 0},
        {"xboxkrnl.exe", 0x000Fu, 0, 1, thunk_base + 4, 0},
        {"xam.xex", 0x01EAu, 0, 1, thunk_base + 8, 0},
        {"xam.xex", 0x01ECu, 0, 1, thunk_base + 12, 0},
        {"xboxkrnl.exe", 0x012Bu, 0, 1, thunk_base + 16, 0},
        {"xboxkrnl.exe", 0x0194u, 0, 1, thunk_base + 20, 0},
        {"xboxkrnl.exe", 0x00CCu, 0, 1, thunk_base + 24, 0},
        {"xboxkrnl.exe", 0x00DCu, 0, 1, thunk_base + 28, 0},
        {"xboxkrnl.exe", 0x00EEu, 0, 1, thunk_base + 32, 0},
        {"xboxkrnl.exe", 0x00E1u, 0, 1, thunk_base + 36, 0}
    };
    std::size_t registered_pool_imports = 0;
    assert(variable_registry.install(
        variable_memory, pool_imports, &registered_pool_imports, &error));
    assert(registered_pool_imports == 10);

    PPCContext header_field_context{};
    header_field_context.ctr.u32 = thunk_base + 16;
    header_field_context.r3.u32 = header_copy;
    header_field_context.r4.u32 = 0x000103FFu;
    const auto header_field_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 16);
    assert(header_field_function != nullptr);
    header_field_function(header_field_context, variable_memory.base());
    assert(header_field_context.r3.u32 == header_copy + 0x40u);

    // The uploaded Too Human XEX has system flags 0x600: bits 9 and 10
    // are set, bit 5 is clear. Out-of-range indices are safely rejected.
    const auto privilege_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 20);
    assert(privilege_function != nullptr);
    PPCContext privilege_context{};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 5;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 0);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 9;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 1);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 10;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 1);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 32;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 0);

    const auto call_import = [&](std::uint32_t thunk, PPCContext& ctx) {
        ctx.ctr.u32 = thunk;
        const auto function = variable_memory.get_function<PPCFunc*>(thunk);
        assert(function != nullptr);
        function(ctx, variable_memory.base());
    };
    const auto vm_page_size =
        static_cast<std::uint32_t>(toohuman::runtime::GuestAddressSpace::page_size());

    PPCContext pool_context{};
    pool_context.r4.u32 = 0x100;
    call_import(thunk_base, pool_context); // ExAllocatePoolTypeWithTag
    const auto pool_pointer = pool_context.r3.u32;
    assert(pool_pointer >= 0x86000000u && pool_pointer < 0x8E000000u);
    variable_memory.base()[pool_pointer] = 0xA5;

    pool_context = {};
    pool_context.r3.u32 = pool_pointer;
    call_import(thunk_base + 4, pool_context); // ExFreePool
    assert(pool_context.r3.u32 == 0);

    pool_context = {};
    pool_context.r3.u32 = 0x80;
    call_import(thunk_base + 8, pool_context); // XamAlloc
    const auto xam_pointer = pool_context.r3.u32;
    assert(xam_pointer >= 0x86000000u && xam_pointer < 0x8E000000u);

    pool_context = {};
    pool_context.r3.u32 = xam_pointer;
    call_import(thunk_base + 12, pool_context); // XamFree
    assert(pool_context.r3.u32 == 0);

    // Exercise the basic guest virtual-memory lifecycle using a pool buffer
    // for the in/out pointer arguments and MEMORY_BASIC_INFORMATION output.
    pool_context = {};
    pool_context.r4.u32 = 0x100;
    call_import(thunk_base, pool_context);
    const auto io_buffer = pool_context.r3.u32;
    assert(io_buffer >= 0x86000000u);
    const auto write_be = [&](std::uint32_t address, std::uint32_t value) {
        variable_memory.base()[address] = static_cast<std::uint8_t>(value >> 24);
        variable_memory.base()[address + 1] = static_cast<std::uint8_t>(value >> 16);
        variable_memory.base()[address + 2] = static_cast<std::uint8_t>(value >> 8);
        variable_memory.base()[address + 3] = static_cast<std::uint8_t>(value);
    };
    const auto read_guest_be = [&](std::uint32_t address) {
        return (static_cast<std::uint32_t>(variable_memory.base()[address]) << 24) |
               (static_cast<std::uint32_t>(variable_memory.base()[address + 1]) << 16) |
               (static_cast<std::uint32_t>(variable_memory.base()[address + 2]) << 8) |
               static_cast<std::uint32_t>(variable_memory.base()[address + 3]);
    };

    // Reserved-but-unallocated heap addresses are not valid syscall buffers.
    // This must return STATUS_ACCESS_VIOLATION without touching PROT_NONE pages.
    write_be(io_buffer + 4, 0x1000);
    PPCContext invalid_buffer_context{};
    invalid_buffer_context.r3.u32 = 0xA1000000u; // Inside virtual heap, but unallocated.
    invalid_buffer_context.r4.u32 = io_buffer + 4;
    invalid_buffer_context.r5.u32 = 0x3000;
    invalid_buffer_context.r6.u32 = 0x04;
    call_import(thunk_base + 24, invalid_buffer_context);
    assert(invalid_buffer_context.r3.u32 == 0xC0000005u);

    // The stack allocator's committed block is also a valid in/out buffer.
    const auto stack_io = variable_registry.stack_heap()->allocate(0x40, 16);
    assert(stack_io && *stack_io == 0x70000000u);
    write_be(*stack_io, 0);
    write_be(*stack_io + 4, vm_page_size + 1u);
    write_be(io_buffer + 4, vm_page_size + 1u);
    PPCContext vm_context{};
    vm_context.r3.u32 = *stack_io;
    vm_context.r4.u32 = *stack_io + 4;
    vm_context.r5.u32 = 0x3000; // MEM_RESERVE | MEM_COMMIT
    vm_context.r6.u32 = 0x04;   // PAGE_READWRITE
    vm_context.r7.u32 = 0;      // Not devkit memory.
    call_import(thunk_base + 24, vm_context);
    assert(vm_context.r3.u32 == 0);
    const auto virtual_address = read_guest_be(*stack_io);
    const auto virtual_size = read_guest_be(*stack_io + 4);
    assert(virtual_address == 0xA0000000u);
    assert(virtual_size == vm_page_size * 2u);

    vm_context = {};
    vm_context.r3.u32 = virtual_address + 0x100;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 16) == 0x04u);
    assert(read_guest_be(io_buffer + 20) == virtual_size);
    assert(read_guest_be(io_buffer + 24) == 0x1000u);
    assert(read_guest_be(io_buffer + 28) == 0x04u);
    assert(read_guest_be(io_buffer + 32) == 0x00020000u);

    // NtProtectVirtualMemory: r3/r4 point to in/out base/size, r5 is PAGE_*,
    // r6 points to OldProtect, and r7 is DebugMemory.
    write_be(*stack_io + 8, virtual_address + 0x100u);
    write_be(*stack_io + 12, vm_page_size);
    write_be(*stack_io + 16, 0xDEADBEEFu);
    PPCContext protect_context{};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x02u; // PAGE_READONLY
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 8) == virtual_address);
    assert(read_guest_be(*stack_io + 12) == vm_page_size);
    assert(read_guest_be(*stack_io + 16) == 0x04u); // Previous PAGE_READWRITE.

    // Query reports protection-homogeneous regions rather than the whole allocation.
    vm_context = {};
    vm_context.r3.u32 = virtual_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 16) == 0x04u); // Original AllocationProtect.
    assert(read_guest_be(io_buffer + 20) == vm_page_size);
    assert(read_guest_be(io_buffer + 24) == 0x1000u); // MEM_COMMIT.
    assert(read_guest_be(io_buffer + 28) == 0x02u); // Current PAGE_READONLY.
    assert(read_guest_be(io_buffer + 32) == 0x00020000u);

    vm_context = {};
    vm_context.r3.u32 = virtual_address + vm_page_size + 0x100u;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address + vm_page_size);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 20) == vm_page_size);
    assert(read_guest_be(io_buffer + 28) == 0x04u);

    // Restore write access and make sure OldProtect receives PAGE_READONLY.
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x04u; // PAGE_READWRITE
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 16) == 0x02u);

    // MEM_RESERVE and MEM_COMMIT have distinct state. Reserve two pages,
    // commit only the first, then query/protect both sides of the boundary.
    write_be(*stack_io + 8u, 0u);
    write_be(*stack_io + 12u, vm_page_size * 2u);
    PPCContext reserve_context{};
    reserve_context.r3.u32 = *stack_io + 8u;
    reserve_context.r4.u32 = *stack_io + 12u;
    reserve_context.r5.u32 = 0x2000u; // MEM_RESERVE only.
    reserve_context.r6.u32 = 0x04u;   // AllocationProtect PAGE_READWRITE.
    call_import(thunk_base + 24, reserve_context);
    assert(reserve_context.r3.u32 == 0u);
    const auto reserved_address = read_guest_be(*stack_io + 8u);
    assert(reserved_address == virtual_address + virtual_size);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size * 2u);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 16u) == 0x04u); // AllocationProtect.
    assert(read_guest_be(io_buffer + 20u) == vm_page_size * 2u);
    assert(read_guest_be(io_buffer + 24u) == 0x2000u); // MEM_RESERVE.
    assert(read_guest_be(io_buffer + 28u) == 0u);      // No current Protect.

    write_be(*stack_io + 8u, reserved_address + 0x100u);
    write_be(*stack_io + 12u, vm_page_size);
    PPCContext commit_context{};
    commit_context.r3.u32 = *stack_io + 8u;
    commit_context.r4.u32 = *stack_io + 12u;
    commit_context.r5.u32 = 0x1000u; // MEM_COMMIT inside existing reservation.
    commit_context.r6.u32 = 0x04u;   // PAGE_READWRITE.
    call_import(thunk_base + 24, commit_context);
    assert(commit_context.r3.u32 == 0u);
    assert(read_guest_be(*stack_io + 8u) == reserved_address);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 20u) == vm_page_size);
    assert(read_guest_be(io_buffer + 24u) == 0x1000u);
    assert(read_guest_be(io_buffer + 28u) == 0x04u);

    // Recommitting an already committed page must not wipe data already stored.
    variable_memory.base()[reserved_address + 0x180u] = 0xA5u;
    write_be(*stack_io + 8u, reserved_address + 0x100u);
    write_be(*stack_io + 12u, vm_page_size);
    commit_context = {};
    commit_context.r3.u32 = *stack_io + 8u;
    commit_context.r4.u32 = *stack_io + 12u;
    commit_context.r5.u32 = 0x1000u;
    commit_context.r6.u32 = 0x04u;
    call_import(thunk_base + 24, commit_context);
    assert(commit_context.r3.u32 == 0u);
    assert(variable_memory.base()[reserved_address + 0x180u] == 0xA5u);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + vm_page_size + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 20u) == vm_page_size);
    assert(read_guest_be(io_buffer + 24u) == 0x2000u);
    assert(read_guest_be(io_buffer + 28u) == 0u);

    write_be(*stack_io + 8u, reserved_address + vm_page_size);
    write_be(*stack_io + 12u, vm_page_size);
    write_be(*stack_io + 16u, 0xFFFFFFFFu);
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8u;
    protect_context.r4.u32 = *stack_io + 12u;
    protect_context.r5.u32 = 0x04u;
    protect_context.r6.u32 = *stack_io + 16u;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC00000A0u); // MEM_RESERVE is not protectable.

    write_be(*stack_io + 8u, reserved_address);
    write_be(*stack_io + 12u, 0u);
    vm_context = {};
    vm_context.r3.u32 = *stack_io + 8u;
    vm_context.r4.u32 = *stack_io + 12u;
    vm_context.r5.u32 = 0x8000u; // MEM_RELEASE.
    call_import(thunk_base + 28, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size * 2u);

    // Execute permissions are denied until guest execution/fault semantics exist.
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x20u; // PAGE_EXECUTE_READ
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC0000022u); // STATUS_ACCESS_DENIED.

    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC0000045u); // STATUS_INVALID_PAGE_PROTECTION.

    write_be(*stack_io + 4, 0); // MEM_RELEASE requires RegionSize == 0.
    vm_context = {};
    vm_context.r3.u32 = *stack_io;
    vm_context.r4.u32 = *stack_io + 4;
    vm_context.r5.u32 = 0x8000; // MEM_RELEASE
    vm_context.r6.u32 = 0;
    call_import(thunk_base + 28, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 4) == virtual_size);
    assert(variable_registry.stack_heap()->deallocate(*stack_io));

    // Concurrently allocate, query and release independent regions. Each host
    // worker owns its in/out buffers; only the import registry and guest heaps
    // are shared. This exercises the region metadata lock and heap ownership
    // across overlapping NtAllocate/NtProtect/NtQuery/NtFree calls.
    constexpr std::uint32_t kConcurrentVmWorkers = 8;
    constexpr std::uint32_t kConcurrentVmIterations = 64;
    const auto concurrent_scratch = variable_registry.stack_heap()->allocate(
        kConcurrentVmWorkers * 0x40u, 16);
    assert(concurrent_scratch);
    std::atomic<bool> start_workers{false};
    std::atomic<bool> concurrent_vm_failed{false};
    std::vector<std::thread> vm_workers;
    vm_workers.reserve(kConcurrentVmWorkers);
    for (std::uint32_t worker_index = 0;
         worker_index < kConcurrentVmWorkers; ++worker_index) {
        vm_workers.emplace_back([&, worker_index] {
            while (!start_workers.load(std::memory_order_acquire))
                std::this_thread::yield();
            const auto io = *concurrent_scratch + worker_index * 0x40u;
            for (std::uint32_t iteration = 0;
                 iteration < kConcurrentVmIterations; ++iteration) {
                write_be(io, 0);
                write_be(io + 4, vm_page_size);
                PPCContext allocate_context{};
                allocate_context.r3.u32 = io;
                allocate_context.r4.u32 = io + 4;
                allocate_context.r5.u32 = 0x3000u;
                allocate_context.r6.u32 = 0x04u;
                call_import(thunk_base + 24, allocate_context);
                if (allocate_context.r3.u32 != 0) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                const auto address = read_guest_be(io);
                const auto size = read_guest_be(io + 4);
                if (address < 0xA0000000u || size != vm_page_size) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                // Change this allocation to read-only, query the resulting
                // region metadata, then restore write access before releasing it.
                write_be(io + 8, address);
                write_be(io + 12, vm_page_size);
                write_be(io + 16, 0);
                PPCContext protect_context{};
                protect_context.r3.u32 = io + 8;
                protect_context.r4.u32 = io + 12;
                protect_context.r5.u32 = 0x02u;
                protect_context.r6.u32 = io + 16;
                call_import(thunk_base + 36, protect_context);
                if (protect_context.r3.u32 != 0 ||
                    read_guest_be(io + 16) != 0x04u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                PPCContext query_context{};
                query_context.r3.u32 = address + 0x20u;
                query_context.r4.u32 = io + 20;
                call_import(thunk_base + 32, query_context);
                if (query_context.r3.u32 != 0 ||
                    read_guest_be(io + 40) != 0x02u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                write_be(io + 8, address);
                write_be(io + 12, vm_page_size);
                PPCContext restore_context{};
                restore_context.r3.u32 = io + 8;
                restore_context.r4.u32 = io + 12;
                restore_context.r5.u32 = 0x04u;
                restore_context.r6.u32 = io + 16;
                call_import(thunk_base + 36, restore_context);
                if (restore_context.r3.u32 != 0 ||
                    read_guest_be(io + 16) != 0x02u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                write_be(io + 4, 0);
                PPCContext free_context{};
                free_context.r3.u32 = io;
                free_context.r4.u32 = io + 4;
                free_context.r5.u32 = 0x8000u;
                call_import(thunk_base + 28, free_context);
                if (free_context.r3.u32 != 0 ||
                    read_guest_be(io + 4) != vm_page_size) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }
            }
        });
    }
    start_workers.store(true, std::memory_order_release);
    for (auto& worker : vm_workers) worker.join();
    assert(!concurrent_vm_failed.load(std::memory_order_relaxed));
    assert(variable_registry.stack_heap()->deallocate(*concurrent_scratch));

    pool_context = {};
    pool_context.r3.u32 = io_buffer;
    call_import(thunk_base + 4, pool_context);
    return 0;
}
