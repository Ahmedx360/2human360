#include "memory/guest_address_space.hpp"
#include "ppc/import_registry.hpp"
#include <ppc_config.h>

#include <cassert>
#include <cstdint>
#include <cstring>
#include <string>
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

    toohuman::runtime::PpcImportRegistry imports;
    assert(imports.register_handler("xboxkrnl.exe", 0x74u,
                                    &test_import_handler, &error));
    const std::vector<toohuman::runtime::XexImport> metadata{
        {"xboxkrnl.exe", 0x74u, 0, 1, 0x82001100u},
        {"xboxkrnl.exe", 0x011Bu, 0, 1, 0x82001104u},
        {"xboxkrnl.exe", 0x0126u, 0, 1, 0x82001108u}
    };
    std::size_t registered = 0;
    assert(imports.install(memory, metadata, &registered, &error));
    assert(registered == 3);
    assert(memory.get_function<PPCFunc*>(0x82001100u) != &test_default_handler);

    PPCContext context{};
    context.ctr.u32 = 0x82001100u;
    const auto import_thunk = memory.get_function<PPCFunc*>(0x82001100u);
    assert(import_thunk != nullptr);
    import_thunk(context, memory.base());
    assert(context.r3.u32 == 0xBEEF1234u);

    // RtlFillMemoryUlong writes big-endian ULONGs and ignores a partial tail.
    constexpr std::uint32_t test_buffer = 0x82011000u;
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
    xex_header[0x25] = 0x02;
    xex_header[0x26] = 0x20; // 0x00000220: privilege bits 5 and 9.
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
        {"xboxkrnl.exe", 0x0194u, 0, 1, thunk_base + 20, 0}
    };
    std::size_t registered_pool_imports = 0;
    assert(variable_registry.install(
        variable_memory, pool_imports, &registered_pool_imports, &error));
    assert(registered_pool_imports == 6);

    PPCContext header_field_context{};
    header_field_context.ctr.u32 = thunk_base + 16;
    header_field_context.r3.u32 = header_copy;
    header_field_context.r4.u32 = 0x000103FFu;
    const auto header_field_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 16);
    assert(header_field_function != nullptr);
    header_field_function(header_field_context, variable_memory.base());
    assert(header_field_context.r3.u32 == header_copy + 0x40u);

    // The real Too Human header's 0x220 system flags grant bits 5 and 9,
    // while bit 10 is absent. Out-of-range bit indices are safely rejected.
    const auto privilege_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 20);
    assert(privilege_function != nullptr);
    PPCContext privilege_context{};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 5;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 1);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 10;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 0);
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
    return 0;
}
