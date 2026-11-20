#include "image/xex_image.hpp"

#include <algorithm>
#include <array>
#include <cstdint>
#include <limits>

namespace toohuman::runtime {
namespace {

constexpr std::uint32_t kXex2Magic = 0x58455832;
constexpr std::uint32_t kFileFormatInfoKey = 0x000003FF;
constexpr std::uint32_t kEntryPointKey = 0x00010100;
constexpr std::uint32_t kImageBaseKey = 0x00010201;
constexpr std::uint32_t kMaxImageSize = 512u * 1024u * 1024u;
constexpr std::uint16_t kXbox360PowerPcBe = 0x01F2;
constexpr std::uint16_t kPe32Magic = 0x010B;

bool fits(std::size_t offset, std::size_t length, std::size_t total) noexcept {
    return offset <= total && length <= total - offset;
}

std::uint16_t be16(std::span<const std::uint8_t> b, std::size_t o) noexcept {
    return static_cast<std::uint16_t>((static_cast<std::uint16_t>(b[o]) << 8) | b[o + 1]);
}
std::uint32_t be32(std::span<const std::uint8_t> b, std::size_t o) noexcept {
    return (static_cast<std::uint32_t>(b[o]) << 24) |
           (static_cast<std::uint32_t>(b[o + 1]) << 16) |
           (static_cast<std::uint32_t>(b[o + 2]) << 8) | b[o + 3];
}
std::uint16_t le16(std::span<const std::uint8_t> b, std::size_t o) noexcept {
    return static_cast<std::uint16_t>(b[o] | (static_cast<std::uint16_t>(b[o + 1]) << 8));
}
std::uint32_t le32(std::span<const std::uint8_t> b, std::size_t o) noexcept {
    return static_cast<std::uint32_t>(b[o]) |
           (static_cast<std::uint32_t>(b[o + 1]) << 8) |
           (static_cast<std::uint32_t>(b[o + 2]) << 16) |
           (static_cast<std::uint32_t>(b[o + 3]) << 24);
}
XexImageResult fail(const char* message) {
    XexImageResult result;
    result.error = message;
    return result;
}

} // namespace

XexImageResult load_xex2_image(std::span<const std::uint8_t> xex_file) {
    if (!fits(0, 0x18, xex_file.size()) || be32(xex_file, 0) != kXex2Magic) {
        return fail("Input is not a complete XEX2 header");
    }

    const auto payload_offset = static_cast<std::size_t>(be32(xex_file, 8));
    const auto security_offset = static_cast<std::size_t>(be32(xex_file, 0x10));
    const auto optional_count = be32(xex_file, 0x14);
    if (optional_count > (xex_file.size() - 0x18) / 8 ||
        !fits(security_offset, 0x114, xex_file.size()) ||
        payload_offset < 0x18 + static_cast<std::size_t>(optional_count) * 8 ||
        payload_offset > xex_file.size()) {
        return fail("XEX2 header, security header or payload offset is invalid");
    }

    const auto security_image_size = be32(xex_file, security_offset + 4);
    const auto security_load_address = be32(xex_file, security_offset + 0x110);
    if (security_image_size == 0 || security_image_size > kMaxImageSize) {
        return fail("XEX2 security header declares an invalid image size");
    }

    std::size_t file_format_offset = 0;
    std::uint32_t xex_image_base = 0;
    std::uint32_t xex_entry_point = 0;
    for (std::size_t i = 0; i < optional_count; ++i) {
        const auto offset = 0x18 + i * 8;
        const auto key = be32(xex_file, offset);
        const auto value = be32(xex_file, offset + 4);
        if (key == kFileFormatInfoKey) file_format_offset = value;
        else if (key == kImageBaseKey) xex_image_base = value;
        else if (key == kEntryPointKey) xex_entry_point = value;
    }

    std::vector<std::uint8_t> decompressed;
    std::uint16_t encryption_type = 0;
    std::uint16_t compression_type = 0;
    if (file_format_offset == 0) {
        if (!fits(payload_offset, security_image_size, xex_file.size())) {
            return fail("Uncompressed XEX payload is shorter than its security image size");
        }
        decompressed.assign(xex_file.begin() + payload_offset,
                            xex_file.begin() + payload_offset + security_image_size);
    } else {
        if (!fits(file_format_offset, 8, xex_file.size())) {
            return fail("XEX2 file-format header is truncated");
        }
        const auto info_size = be32(xex_file, file_format_offset);
        encryption_type = be16(xex_file, file_format_offset + 4);
        compression_type = be16(xex_file, file_format_offset + 6);
        if (info_size < 8 || !fits(file_format_offset, info_size, xex_file.size())) {
            return fail("XEX2 file-format header declares an invalid size");
        }
        if (encryption_type != 0) {
            return fail("XEX2 image is encrypted; this loader accepts decrypted XEX files only");
        }
        if (compression_type == 0) {
            if (!fits(payload_offset, security_image_size, xex_file.size())) {
                return fail("Uncompressed XEX payload is truncated");
            }
            decompressed.assign(xex_file.begin() + payload_offset,
                                xex_file.begin() + payload_offset + security_image_size);
        } else if (compression_type == 1) {
            if (info_size < 16 || ((info_size - 8) % 8) != 0) {
                return fail("XEX2 basic-compression block table has an invalid size");
            }
            const auto block_count = (info_size - 8) / 8;
            std::size_t source = payload_offset;
            std::uint64_t output_size = 0;
            for (std::size_t i = 0; i < block_count; ++i) {
                const auto block = file_format_offset + 8 + i * 8;
                const auto data_size = be32(xex_file, block);
                const auto zero_size = be32(xex_file, block + 4);
                if (!fits(source, data_size, xex_file.size())) {
                    return fail("XEX2 basic-compression block data is truncated");
                }
                output_size += static_cast<std::uint64_t>(data_size) + zero_size;
                if (output_size > kMaxImageSize || output_size > security_image_size) {
                    return fail("XEX2 basic-compression output exceeds the declared image size");
                }
                decompressed.insert(decompressed.end(),
                                    xex_file.begin() + source,
                                    xex_file.begin() + source + data_size);
                decompressed.insert(decompressed.end(), zero_size, 0);
                source += data_size;
            }
            if (source != xex_file.size()) {
                return fail("XEX2 basic-compression blocks do not consume the complete payload");
            }
        } else {
            return fail("XEX2 compression type is unsupported (normal/LZX and delta are not implemented)");
        }
    }

    if (decompressed.size() < 0x40 || decompressed[0] != 'M' || decompressed[1] != 'Z') {
        return fail("Decompressed XEX image does not contain a PE DOS header");
    }
    const auto pe_offset = static_cast<std::size_t>(le32(decompressed, 0x3C));
    if (!fits(pe_offset, 24, decompressed.size()) ||
        le32(decompressed, pe_offset) != 0x00004550) {
        return fail("Decompressed XEX image has an invalid PE signature");
    }
    if (le16(decompressed, pe_offset + 4) != kXbox360PowerPcBe) {
        return fail("XEX PE machine is not Xbox 360 PowerPC big-endian (0x01F2)");
    }
    const auto section_count = le16(decompressed, pe_offset + 6);
    const auto optional_size = le16(decompressed, pe_offset + 20);
    const auto optional_offset = pe_offset + 24;
    if (section_count == 0 || optional_size < 64 ||
        !fits(optional_offset, optional_size, decompressed.size()) ||
        le16(decompressed, optional_offset) != kPe32Magic) {
        return fail("Decompressed XEX image has an invalid PE32 optional header");
    }

    const auto entry_rva = le32(decompressed, optional_offset + 16);
    const auto pe_image_base = le32(decompressed, optional_offset + 28);
    const auto pe_image_size = le32(decompressed, optional_offset + 56);
    const auto headers_size = le32(decompressed, optional_offset + 60);
    if (pe_image_size == 0 || pe_image_size > kMaxImageSize ||
        static_cast<std::uint64_t>(pe_image_base) + pe_image_size > (std::uint64_t{1} << 32) ||
        entry_rva >= pe_image_size || headers_size > decompressed.size()) {
        return fail("XEX PE image range, entry point or header size is invalid");
    }

    const auto image_base = xex_image_base != 0 ? xex_image_base : security_load_address;
    if (image_base != pe_image_base) {
        return fail("XEX image base does not match the embedded PE image base");
    }
    const auto entry_point = xex_entry_point != 0 ? xex_entry_point : image_base + entry_rva;
    if (entry_point != image_base + entry_rva) {
        return fail("XEX entry point does not match the embedded PE entry point");
    }

    const auto section_table = optional_offset + optional_size;
    const auto section_table_size = static_cast<std::size_t>(section_count) * 40;
    if (!fits(section_table, section_table_size, decompressed.size())) {
        return fail("Decompressed XEX PE section table is truncated");
    }

    LoadedPeImage image;
    image.image_base = image_base;
    image.entry_point = entry_point;
    image.image_size = pe_image_size;
    image.headers_size = headers_size;
    image.bytes.assign(pe_image_size, 0);
    std::copy(decompressed.begin(),
              decompressed.begin() + std::min(decompressed.size(), image.bytes.size()),
              image.bytes.begin());
    image.sections.reserve(section_count);

    for (std::size_t i = 0; i < section_count; ++i) {
        const auto sh = section_table + i * 40;
        std::array<char, 9> name{};
        for (std::size_t n = 0; n < 8 && decompressed[sh + n] != 0; ++n) {
            name[n] = static_cast<char>(decompressed[sh + n]);
        }
        const auto virtual_size = le32(decompressed, sh + 8);
        const auto virtual_address = le32(decompressed, sh + 12);
        const auto raw_size = le32(decompressed, sh + 16);
        const auto characteristics = le32(decompressed, sh + 36);
        const auto mapped_size = virtual_size != 0 ? virtual_size : raw_size;
        if (mapped_size != 0 &&
            (virtual_address >= pe_image_size || mapped_size > pe_image_size - virtual_address)) {
            return fail("XEX PE section virtual range lies outside SizeOfImage");
        }
        image.sections.push_back({name.data(), virtual_address, virtual_size,
                                   raw_size, characteristics});
    }

    XexImageResult result;
    result.image = std::move(image);
    result.security_image_size = security_image_size;
    result.decompressed_size = decompressed.size();
    result.encryption_type = encryption_type;
    result.compression_type = compression_type;
    return result;
}

} // namespace toohuman::runtime
