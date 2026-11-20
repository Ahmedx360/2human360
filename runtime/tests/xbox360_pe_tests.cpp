#include "image/xbox360_pe.hpp"
#include "image/xex_imports.hpp"
#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"

#include <array>
#include <cassert>
#include <cstdint>
#include <vector>
#include <string>

using toohuman::runtime::load_xbox360_pe;

namespace { void test_guest_function() {} }
using TestGuestFunction = void (*)();

namespace {
void put16(std::vector<std::uint8_t>& b, std::size_t o, std::uint16_t v) {
    b[o] = static_cast<std::uint8_t>(v);
    b[o + 1] = static_cast<std::uint8_t>(v >> 8);
}
void put32(std::vector<std::uint8_t>& b, std::size_t o, std::uint32_t v) {
    for (unsigned i = 0; i < 4; ++i) b[o + i] = static_cast<std::uint8_t>(v >> (i * 8));
}
std::vector<std::uint8_t> make_pe() {
    std::vector<std::uint8_t> b(0x2400, 0);
    b[0] = 'M'; b[1] = 'Z';
    put32(b, 0x3C, 0x80);
    put32(b, 0x80, 0x00004550);
    put16(b, 0x84, 0x01F2);
    put16(b, 0x86, 2);
    put16(b, 0x94, 0xE0);
    const std::size_t opt = 0x98;
    put16(b, opt, 0x10B);
    put32(b, opt + 16, 0x1000);
    put32(b, opt + 28, 0x82000000);
    put32(b, opt + 56, 0x10000);
    put32(b, opt + 60, 0x200);
    const std::size_t sec = opt + 0xE0;
    const char text_name[] = ".text";
    for (std::size_t i = 0; i < 5; ++i) b[sec + i] = text_name[i];
    put32(b, sec + 8, 0x1000);
    put32(b, sec + 12, 0x6000); // Converter-shifted VA.
    put32(b, sec + 16, 0x1000);
    put32(b, sec + 20, 0x1000);
    put32(b, sec + 36, 0x20);
    const auto data_sec = sec + 40;
    const char data_name[] = ".data";
    for (std::size_t i = 0; i < 5; ++i) b[data_sec + i] = data_name[i];
    put32(b, data_sec + 8, 0x1000);
    put32(b, data_sec + 12, 0x4000);
    put32(b, data_sec + 16, 0x200);
    put32(b, data_sec + 20, 0x2000);
    put32(b, data_sec + 36, 0xC0000040);
    for (std::size_t i = 0; i < 0x1000; ++i) b[0x1000 + i] = 0xA5;
    for (std::size_t i = 0; i < 0x200; ++i) b[0x2000 + i] = 0x5A;
    return b;
}
}

std::vector<std::uint8_t> make_xex_imports() {
    std::vector<std::uint8_t> b(0x300, 0);
    put32(b, 0, 0x58455832); // XEX2
    put32(b, 0x14, 6);       // Import, image-base, entry, stack, heap and TLS headers.
    put32(b, 0x18, 0x000103FF);
    put32(b, 0x1C, 0x50);    // Import header file offset.
    put32(b, 0x20, 0x00010201);
    put32(b, 0x24, 0x82000000);
    put32(b, 0x28, 0x00010100);
    put32(b, 0x2C, 0x82001000);
    put32(b, 0x30, 0x00020200);
    put32(b, 0x34, 0x00100000);
    put32(b, 0x38, 0x00020401);
    put32(b, 0x3C, 0x02000000);
    put32(b, 0x40, 0x00020104);
    put32(b, 0x44, 0xC0);
    put32(b, 0x50, 0x4C);    // Header size.
    put32(b, 0x54, 16);      // Padded library-name table.
    put32(b, 0x58, 1);       // One import library.
    const char name[] = "xboxkrnl.exe";
    for (std::size_t i = 0; i < sizeof(name); ++i) b[0x5C + i] = name[i];
    const std::size_t library = 0x6C;
    put32(b, library, 0x30);
    put32(b, library + 0x18, 0x12345678);
    put32(b, library + 0x1C, 0x00010002);
    put32(b, library + 0x20, 0x00010001);
    put16(b, library + 0x24, 0);
    put16(b, library + 0x26, 2);
    put32(b, library + 0x28, 0x82001000);
    put32(b, library + 0x2C, 0x82001004);
    put32(b, 0xC0, 64);
    put32(b, 0xC4, 0x82004000);
    put32(b, 0xC8, 0x40);
    put32(b, 0xCC, 0x20);
    return b;
}

int main() {
    auto file = make_pe();
    auto result = load_xbox360_pe(file);
    assert(result);
    const auto& image = *result.image;
    assert(image.image_base == 0x82000000);
    assert(image.entry_point == 0x82001000);
    assert(image.image_size == 0x10000);
    assert(image.sections.size() == 2);
    assert(image.sections[0].name == ".text");
    assert(image.sections[0].virtual_address == 0x1000);
    assert(image.bytes[0x1000] == 0xA5);
    assert(image.sections[1].virtual_address == 0x4000);
    assert(image.bytes[0x4000] == 0x5A);
    assert(image.bytes[0x3000] == 0); // BSS/zero-fill remains zero.

    auto import_image = image;
    import_image.bytes[0x1000] = 0x00;
    import_image.bytes[0x1001] = 0x00;
    import_image.bytes[0x1002] = 0x00;
    import_image.bytes[0x1003] = 0x74;
    import_image.bytes[0x1004] = 0x01;
    import_image.bytes[0x1005] = 0x00;
    import_image.bytes[0x1006] = 0x00;
    import_image.bytes[0x1007] = 0x74;
    const auto xex = make_xex_imports();
    const auto imports = toohuman::runtime::parse_xex2_imports(xex, import_image);
    assert(imports);
    assert(imports.imports.size() == 2);
    assert(imports.libraries.size() == 1);
    assert(imports.libraries[0].name == "xboxkrnl.exe");
    assert(imports.libraries[0].library_id == 0x12345678);
    assert(imports.libraries[0].version == 0x00010002);
    assert(imports.libraries[0].minimum_version == 0x00010001);
    assert(imports.imports[0].library == "xboxkrnl.exe");
    assert(imports.imports[0].ordinal == 0x74);
    assert(imports.imports[0].type == 0);
    assert(imports.imports[0].hint == 0);
    assert(imports.imports[0].thunk_address == 0x82001000);
    assert(imports.imports[0].paired_thunk_address == 0x82001004);
    assert(imports.imports[1].type == 1);
    assert(imports.imports[1].ordinal == 0x74);
    assert(imports.imports[1].thunk_address == 0x82001004);
    assert(imports.default_stack_size == 0x00100000);
    assert(imports.default_heap_size == 0x02000000);
    assert(imports.tls_info.has_value());
    assert(imports.tls_info->slot_count == 64);
    assert(imports.tls_info->raw_data_address == 0x82004000);
    assert(imports.tls_info->data_size == 0x40);
    assert(imports.tls_info->raw_data_size == 0x20);
    auto invalid_xex = xex;
    invalid_xex[0] = 'N';
    assert(!toohuman::runtime::parse_xex2_imports(invalid_xex, import_image));
    auto mismatched_base = xex;
    put32(mismatched_base, 0x24, 0x83000000);
    assert(!toohuman::runtime::parse_xex2_imports(mismatched_base, import_image));
    auto security_base = xex;
    put32(security_base, 0x10, 0x100);
    put32(security_base, 0x14, 5);
    put32(security_base, 0x20, 0x00010100);
    put32(security_base, 0x24, 0x82001000);
    put32(security_base, 0x28, 0x00020200);
    put32(security_base, 0x2C, 0x00100000);
    put32(security_base, 0x30, 0x00020401);
    put32(security_base, 0x34, 0x02000000);
    put32(security_base, 0x38, 0x00020104);
    put32(security_base, 0x3C, 0xC0);
    put32(security_base, 0x210, 0x82000000);
    const auto security_base_result = toohuman::runtime::parse_xex2_imports(security_base, import_image);
    assert(security_base_result);
    assert(security_base_result.default_stack_size == 0x00100000);
    assert(security_base_result.default_heap_size == 0x02000000);
    assert(security_base_result.tls_info.has_value());
    assert(security_base_result.tls_info->raw_data_address == 0x82004000);

    std::string address_space_error;
    auto address_space = toohuman::runtime::GuestAddressSpace::reserve(&address_space_error);
    assert(address_space.valid());
    assert(address_space.map_image(image, &address_space_error));
    auto* guest_data = reinterpret_cast<std::uint8_t*>(
        reinterpret_cast<std::uintptr_t>(address_space.base()) + image.image_base + 0x4000u);
    guest_data[0] = 0x7B;
    assert(guest_data[0] == 0x7B);
    assert(address_space.commit_region(0x70000000, 0x10000, &address_space_error));
    const auto stack_probe = reinterpret_cast<std::uint8_t*>(
        reinterpret_cast<std::uintptr_t>(address_space.base()) + 0x70000000u);
    stack_probe[0] = 0xCC;
    assert(stack_probe[0] == 0xCC);
    assert(address_space.image_mapped());
    assert(address_space.initialize_function_table(0x82001000, 0x1000, &address_space_error));
    toohuman::runtime::GuestHeap overlapping_heap(
        address_space, image.image_base + image.image_size, 0x1000);
    assert(!overlapping_heap.initialize(&address_space_error));
    assert(address_space.fill_function_table(&test_guest_function));
    assert(address_space.get_function<TestGuestFunction>(0x82001004) == &test_guest_function);
    assert(address_space.set_function(0x82001100, &test_guest_function));
    assert(address_space.get_function<TestGuestFunction>(0x82001100) == &test_guest_function);
    assert(address_space.get_function<TestGuestFunction>(0x82001104) == nullptr);
    assert(!address_space.set_function(0x82002000, &test_guest_function));
    const auto guest_entry = reinterpret_cast<const std::uint8_t*>(
        reinterpret_cast<std::uintptr_t>(address_space.base()) + image.entry_point);
    assert(*guest_entry == 0xA5);
    assert(!address_space.map_image(image, &address_space_error));

    auto wrong_machine = file;
    put16(wrong_machine, 0x84, 0x01F0);
    assert(!load_xbox360_pe(wrong_machine));

    auto truncated = file;
    truncated.resize(0x2100);
    assert(!load_xbox360_pe(truncated));

    auto oversized_image = file;
    put32(oversized_image, 0x98 + 56, 0x30000000);
    assert(!load_xbox360_pe(oversized_image));

    auto bad_entry = file;
    put32(bad_entry, 0x98 + 16, 0x10000);
    assert(!load_xbox360_pe(bad_entry));

    auto bad_section = file;
    put32(bad_section, 0x98 + 0xE0 + 40 + 12, 0xF800);
    assert(!load_xbox360_pe(bad_section));
    return 0;
}
