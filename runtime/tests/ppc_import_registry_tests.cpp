#include "memory/guest_address_space.hpp"
#include "ppc/import_registry.hpp"

#include <cassert>
#include <cstdint>
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
    toohuman::runtime::LoadedPeImage image;
    image.image_base = 0x82000000u;
    image.image_size = 0x10000u;
    image.entry_point = 0x82001000u;
    image.bytes.resize(image.image_size);

    std::string error;
    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(memory.valid());
    assert(memory.map_image(image, &error));
    assert(memory.initialize_function_table(0x82001000u, 0x1000u, &error));
    assert(memory.fill_function_table(&test_default_handler));

    toohuman::runtime::PpcImportRegistry imports;
    assert(imports.register_handler("xboxkrnl.exe", 0x74u,
                                    &test_import_handler, &error));
    const std::vector<toohuman::runtime::XexImport> metadata{
        {"xboxkrnl.exe", 0x74u, 0, 1, 0x82001100u}
    };
    std::size_t registered = 0;
    assert(imports.install(memory, metadata, &registered, &error));
    assert(registered == 1);
    assert(memory.get_function<PPCFunc*>(0x82001100u) != &test_default_handler);

    PPCContext context{};
    context.ctr.u32 = 0x82001100u;
    const auto import_thunk = memory.get_function<PPCFunc*>(0x82001100u);
    assert(import_thunk != nullptr);
    import_thunk(context, memory.base());
    assert(context.r3.u32 == 0xBEEF1234u);

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
    return 0;
}
