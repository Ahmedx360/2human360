#include "image/xbox360_pe.hpp"
#include "memory/guest_address_space.hpp"

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

    std::string address_space_error;
    auto address_space = toohuman::runtime::GuestAddressSpace::reserve(&address_space_error);
    assert(address_space.valid());
    assert(address_space.map_image(image, &address_space_error));
    assert(address_space.image_mapped());
    assert(address_space.initialize_function_table(0x82001000, 0x1000, &address_space_error));
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
