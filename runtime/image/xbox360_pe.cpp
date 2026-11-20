#include "image/xbox360_pe.hpp"

#include <algorithm>
#include <array>
#include <cstring>
#include <utility>

namespace toohuman::runtime {
namespace {

constexpr std::uint16_t kXbox360PowerPcBe = 0x01F2;
constexpr std::uint16_t kPe32Magic = 0x010B;
constexpr std::uint32_t kCodeSection = 0x00000020;
constexpr std::uint64_t kGuestAddressLimit = std::uint64_t{1} << 32;

bool range_fits(std::size_t offset, std::size_t length, std::size_t total) noexcept {
    return offset <= total && length <= total - offset;
}

std::uint16_t read_u16(std::span<const std::uint8_t> data, std::size_t offset) noexcept {
    return static_cast<std::uint16_t>(data[offset]) |
           static_cast<std::uint16_t>(static_cast<std::uint16_t>(data[offset + 1]) << 8);
}

std::uint32_t read_u32(std::span<const std::uint8_t> data, std::size_t offset) noexcept {
    return static_cast<std::uint32_t>(data[offset]) |
           (static_cast<std::uint32_t>(data[offset + 1]) << 8) |
           (static_cast<std::uint32_t>(data[offset + 2]) << 16) |
           (static_cast<std::uint32_t>(data[offset + 3]) << 24);
}

PeLoadResult failure(const char* message) {
    return {std::nullopt, {message}};
}

} // namespace

PeLoadResult load_xbox360_pe(std::span<const std::uint8_t> file) {
    if (file.size() < 0x40 || file[0] != 'M' || file[1] != 'Z') {
        return failure("Missing or truncated DOS header");
    }

    const auto pe_offset = static_cast<std::size_t>(read_u32(file, 0x3C));
    if (!range_fits(pe_offset, 24, file.size())) {
        return failure("PE header offset is outside the file");
    }
    if (read_u32(file, pe_offset) != 0x00004550) {
        return failure("Invalid PE signature");
    }

    const auto machine = read_u16(file, pe_offset + 4);
    const auto section_count = read_u16(file, pe_offset + 6);
    const auto optional_size = read_u16(file, pe_offset + 20);
    const auto optional_offset = pe_offset + 24;
    if (machine != kXbox360PowerPcBe) {
        return failure("PE machine is not Xbox 360 PowerPC big-endian (0x01F2)");
    }
    if (section_count == 0) {
        return failure("PE contains no sections");
    }
    if (optional_size < 64 || !range_fits(optional_offset, optional_size, file.size())) {
        return failure("Truncated PE32 optional header");
    }
    if (read_u16(file, optional_offset) != kPe32Magic) {
        return failure("Expected a PE32 optional header");
    }

    const auto entry_rva = read_u32(file, optional_offset + 16);
    const auto image_base = read_u32(file, optional_offset + 28);
    const auto image_size = read_u32(file, optional_offset + 56);
    const auto headers_size = read_u32(file, optional_offset + 60);
    if (image_size == 0 ||
        static_cast<std::uint64_t>(image_base) + image_size > kGuestAddressLimit) {
        return failure("PE image range is empty or exceeds the 32-bit guest address space");
    }
    if (entry_rva >= image_size ||
        static_cast<std::uint64_t>(image_base) + entry_rva > 0xFFFFFFFFull) {
        return failure("PE entry point lies outside the guest image");
    }

    const auto section_table = optional_offset + optional_size;
    const auto section_table_size = static_cast<std::size_t>(section_count) * 40;
    if (!range_fits(section_table, section_table_size, file.size())) {
        return failure("Truncated PE section table");
    }

    std::int64_t code_delta = 0;
    bool found_code_section = false;
    for (std::size_t i = 0; i < section_count; ++i) {
        const auto sh = section_table + i * 40;
        if ((read_u32(file, sh + 36) & kCodeSection) != 0) {
            code_delta = static_cast<std::int64_t>(read_u32(file, sh + 12)) -
                         static_cast<std::int64_t>(read_u32(file, sh + 20));
            found_code_section = true;
            break;
        }
    }
    if (!found_code_section) {
        return failure("PE has no code section from which to determine the image RVA adjustment");
    }

    LoadedPeImage loaded;
    loaded.image_base = image_base;
    loaded.entry_point = image_base + entry_rva;
    loaded.image_size = image_size;
    loaded.bytes.assign(image_size, 0);

    const auto header_copy = std::min<std::size_t>(
        {static_cast<std::size_t>(headers_size), file.size(), loaded.bytes.size()});
    std::copy_n(file.begin(), header_copy, loaded.bytes.begin());

    loaded.sections.reserve(section_count);
    for (std::size_t i = 0; i < section_count; ++i) {
        const auto sh = section_table + i * 40;
        std::array<char, 9> name{};
        for (std::size_t n = 0; n < 8 && file[sh + n] != 0; ++n) {
            name[n] = static_cast<char>(file[sh + n]);
        }

        const auto virtual_size = read_u32(file, sh + 8);
        auto virtual_address = read_u32(file, sh + 12);
        const auto raw_size = read_u32(file, sh + 16);
        const auto raw_offset = read_u32(file, sh + 20);
        const auto characteristics = read_u32(file, sh + 36);

        if (code_delta != 0 &&
            static_cast<std::int64_t>(virtual_address) -
                static_cast<std::int64_t>(raw_offset) == code_delta) {
            virtual_address = raw_offset;
        }

        const auto mapped_size = virtual_size != 0 ? virtual_size : raw_size;
        if (mapped_size == 0 && raw_size == 0) {
            loaded.sections.push_back({name.data(), virtual_address, virtual_size,
                                       raw_size, characteristics});
            continue;
        }
        if (virtual_address >= image_size || mapped_size > image_size - virtual_address) {
            return failure("PE section virtual range lies outside SizeOfImage");
        }
        if (raw_size != 0 && !range_fits(raw_offset, raw_size, file.size())) {
            return failure("PE section raw data lies outside the input file");
        }

        const auto copy_size = std::min<std::size_t>(raw_size, mapped_size);
        if (copy_size != 0) {
            std::copy_n(file.begin() + raw_offset, copy_size,
                        loaded.bytes.begin() + virtual_address);
        }
        loaded.sections.push_back({name.data(), virtual_address, virtual_size,
                                   raw_size, characteristics});
    }

    return {std::move(loaded), {}};
}

} // namespace toohuman::runtime
