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
    return 0;
}
