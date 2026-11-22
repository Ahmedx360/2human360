#include "image/xex_image.hpp"

#include <algorithm>
#include <cassert>
#include <cstdint>
#include <vector>

namespace {

void put16le(std::vector<std::uint8_t>& b, std::size_t o, std::uint16_t v) {
    b[o] = static_cast<std::uint8_t>(v);
    b[o + 1] = static_cast<std::uint8_t>(v >> 8);
}
void put32le(std::vector<std::uint8_t>& b, std::size_t o, std::uint32_t v) {
    for (unsigned i = 0; i < 4; ++i) b[o + i] = static_cast<std::uint8_t>(v >> (i * 8));
}
void put16be(std::vector<std::uint8_t>& b, std::size_t o, std::uint16_t v) {
    b[o] = static_cast<std::uint8_t>(v >> 8);
    b[o + 1] = static_cast<std::uint8_t>(v);
}
void put32be(std::vector<std::uint8_t>& b, std::size_t o, std::uint32_t v) {
    b[o] = static_cast<std::uint8_t>(v >> 24);
    b[o + 1] = static_cast<std::uint8_t>(v >> 16);
    b[o + 2] = static_cast<std::uint8_t>(v >> 8);
    b[o + 3] = static_cast<std::uint8_t>(v);
}

std::vector<std::uint8_t> make_mapped_pe() {
    std::vector<std::uint8_t> pe(0x1800, 0);
    pe[0] = 'M'; pe[1] = 'Z';
    put32le(pe, 0x3C, 0x80);
    put32le(pe, 0x80, 0x00004550);
    put16le(pe, 0x84, 0x01F2);
    put16le(pe, 0x86, 1);
    put16le(pe, 0x94, 0xE0);
    const std::size_t opt = 0x98;
    put16le(pe, opt, 0x10B);
    put32le(pe, opt + 16, 0x1000);
    put32le(pe, opt + 28, 0x82000000);
    put32le(pe, opt + 56, 0x4000);
    put32le(pe, opt + 60, 0x200);
    const std::size_t sec = opt + 0xE0;
    const char name[] = ".text";
    for (std::size_t i = 0; i < 5; ++i) pe[sec + i] = name[i];
    put32le(pe, sec + 8, 0x1000);
    put32le(pe, sec + 12, 0x1000);
    put32le(pe, sec + 16, 0x1000);
    put32le(pe, sec + 20, 0x200);
    put32le(pe, sec + 36, 0x60000020);
    pe[0x1000] = 0x7B; // XEX payload section data is already at its guest RVA.
    return pe;
}

std::vector<std::uint8_t> make_basic_xex() {
    const auto pe = make_mapped_pe();
    constexpr std::size_t header_size = 0x1000;
    constexpr std::size_t format_info = 0x80;
    std::vector<std::uint8_t> xex(header_size + pe.size(), 0);
    put32be(xex, 0, 0x58455832);
    put32be(xex, 8, header_size);
    put32be(xex, 0x10, 0x100);
    put32be(xex, 0x14, 3);
    put32be(xex, 0x18, 0x000003FF);
    put32be(xex, 0x1C, format_info);
    put32be(xex, 0x20, 0x00010100);
    put32be(xex, 0x24, 0x82001000);
    put32be(xex, 0x28, 0x00010201);
    put32be(xex, 0x2C, 0x82000000);

    put32be(xex, 0x100, 0x200);
    put32be(xex, 0x104, 0x2000);
    put32be(xex, 0x210, 0x82000000);

    put32be(xex, format_info, 0x10);
    put16be(xex, format_info + 4, 0);
    put16be(xex, format_info + 6, 1);
    put32be(xex, format_info + 8, static_cast<std::uint32_t>(pe.size()));
    put32be(xex, format_info + 12, 0x800);
    std::copy(pe.begin(), pe.end(), xex.begin() + header_size);
    return xex;
}

} // namespace

int main() {
    auto xex = make_basic_xex();
    const auto loaded = toohuman::runtime::load_xex2_image(xex);
    assert(loaded);
    assert(loaded.compression_type == 1);
    assert(loaded.encryption_type == 0);
    assert(loaded.security_image_size == 0x2000);
    assert(loaded.decompressed_size == 0x2000);
    assert(loaded.image->image_base == 0x82000000);
    assert(loaded.image->entry_point == 0x82001000);
    assert(loaded.image->image_size == 0x4000);
    assert(loaded.image->bytes[0x1000] == 0x7B);
    assert(loaded.image->bytes[0x1FFF] == 0);
    assert(loaded.image->bytes[0x3000] == 0);
    assert(loaded.image->sections.size() == 1);
    assert(loaded.image->sections[0].virtual_address == 0x1000);

    auto encrypted = xex;
    put16be(encrypted, 0x84, 1);
    assert(!toohuman::runtime::load_xex2_image(encrypted));

    auto bad_compression = xex;
    put16be(bad_compression, 0x86, 2);
    assert(!toohuman::runtime::load_xex2_image(bad_compression));

    auto truncated = xex;
    truncated.pop_back();
    assert(!toohuman::runtime::load_xex2_image(truncated));

    auto wrong_magic = xex;
    wrong_magic[0] = 'N';
    assert(!toohuman::runtime::load_xex2_image(wrong_magic));
    return 0;
}
