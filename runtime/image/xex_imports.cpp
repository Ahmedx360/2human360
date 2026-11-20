#include "image/xex_imports.hpp"

#include <algorithm>
#include <limits>
#include <utility>

namespace toohuman::runtime {
namespace {

constexpr std::uint32_t kXex2Magic = 0x58455832;
constexpr std::uint32_t kEntryPointKey = 0x00010100;
constexpr std::uint32_t kImageBaseKey = 0x00010201;
constexpr std::uint32_t kImportLibrariesKey = 0x000103FF;
constexpr std::uint32_t kDefaultStackSizeKey = 0x00020200;
constexpr std::uint32_t kDefaultHeapSizeKey = 0x00020401;
constexpr std::uint32_t kTlsInfoKey = 0x00020104;
constexpr std::size_t kFixedHeaderSize = 0x18;
constexpr std::size_t kOptionalHeaderSize = 8;
constexpr std::size_t kImportHeaderSize = 12;
constexpr std::size_t kImportLibrarySize = 0x28;
constexpr std::size_t kImportDescriptorSize = 4;

bool fits(std::size_t offset, std::size_t length, std::size_t total) noexcept {
    return offset <= total && length <= total - offset;
}

std::uint16_t read_be16(std::span<const std::uint8_t> data, std::size_t offset) noexcept {
    return static_cast<std::uint16_t>(
        (static_cast<std::uint16_t>(data[offset]) << 8) | data[offset + 1]);
}

std::uint32_t read_be32(std::span<const std::uint8_t> data, std::size_t offset) noexcept {
    return (static_cast<std::uint32_t>(data[offset]) << 24) |
           (static_cast<std::uint32_t>(data[offset + 1]) << 16) |
           (static_cast<std::uint32_t>(data[offset + 2]) << 8) |
           static_cast<std::uint32_t>(data[offset + 3]);
}

XexImportResult fail(const char* message) {
    XexImportResult result;
    result.error = message;
    return result;
}

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

} // namespace

XexImportResult parse_xex2_imports(std::span<const std::uint8_t> xex_file,
                                   const LoadedPeImage& image) {
    if (!fits(0, kFixedHeaderSize, xex_file.size()) ||
        read_be32(xex_file, 0) != kXex2Magic) {
        return fail("Input is not a complete XEX2 header");
    }

    const auto optional_count = read_be32(xex_file, 0x14);
    if (optional_count > (xex_file.size() - kFixedHeaderSize) / kOptionalHeaderSize) {
        return fail("XEX2 optional-header table is truncated");
    }

    std::size_t import_offset = 0;
    bool found_import_header = false;
    std::uint32_t xex_image_base = 0;
    std::uint32_t xex_entry_point = 0;
    std::uint32_t default_stack_size = 0;
    std::uint32_t default_heap_size = 0;
    std::optional<XexTlsInfo> tls_info;
    for (std::size_t i = 0; i < optional_count; ++i) {
        const auto offset = kFixedHeaderSize + i * kOptionalHeaderSize;
        const auto key = read_be32(xex_file, offset);
        const auto value = read_be32(xex_file, offset + 4);
        if (key == kImportLibrariesKey) {
            import_offset = value;
            found_import_header = true;
        } else if (key == kImageBaseKey) {
            xex_image_base = value;
        } else if (key == kEntryPointKey) {
            xex_entry_point = value;
        } else if (key == kDefaultStackSizeKey) {
            default_stack_size = value;
        } else if (key == kDefaultHeapSizeKey) {
            default_heap_size = value;
        } else if (key == kTlsInfoKey) {
            if (!fits(value, 16, xex_file.size())) {
                return fail("XEX2 TLS info points outside the file");
            }
            tls_info = XexTlsInfo{
                read_be32(xex_file, value),
                read_be32(xex_file, value + 4),
                read_be32(xex_file, value + 8),
                read_be32(xex_file, value + 12)
            };
        }
    }
    if (!found_import_header) {
        return fail("XEX2 has no import-libraries optional header");
    }
    const auto security_offset = read_be32(xex_file, 0x10);
    if (security_offset != 0) {
        if (!fits(security_offset, 0x114, xex_file.size())) {
            return fail("XEX2 security header is truncated");
        }
        if (xex_image_base == 0) xex_image_base = read_be32(xex_file, security_offset + 0x110);
    }
    if (xex_image_base == 0) xex_image_base = image.image_base;
    if (xex_image_base != image.image_base) {
        return fail("XEX2 image base does not match the extracted PE image base");
    }
    if (xex_entry_point != 0 && xex_entry_point != image.entry_point) {
        return fail("XEX2 entry point does not match the extracted PE image entry point");
    }
    if (tls_info) {
        if (tls_info->data_size < tls_info->raw_data_size) {
            return fail("XEX2 TLS data size is smaller than its raw template size");
        }
        if (tls_info->raw_data_size != 0) {
            if (tls_info->raw_data_address < image.image_base) {
                return fail("XEX2 TLS template address precedes the extracted PE image");
            }
            const auto tls_offset = static_cast<std::uint64_t>(tls_info->raw_data_address) - image.image_base;
            if (tls_offset > image.bytes.size() ||
                tls_info->raw_data_size > image.bytes.size() - static_cast<std::size_t>(tls_offset)) {
                return fail("XEX2 TLS template lies outside the extracted PE image");
            }
        }
    }
    const auto optional_table_end = kFixedHeaderSize +
                                    static_cast<std::size_t>(optional_count) * kOptionalHeaderSize;
    if (import_offset < optional_table_end ||
        !fits(import_offset, kImportHeaderSize, xex_file.size())) {
        return fail("XEX2 import header points outside the file");
    }

    const auto declared_import_header_size = read_be32(xex_file, import_offset);
    if (declared_import_header_size < kImportHeaderSize ||
        !fits(import_offset, declared_import_header_size, xex_file.size())) {
        return fail("XEX2 import header declares an invalid size");
    }
    if (image.image_size == 0 || image.bytes.size() != image.image_size ||
        static_cast<std::uint64_t>(image.image_base) + image.image_size > (std::uint64_t{1} << 32)) {
        return fail("The extracted PE image has an invalid guest address range");
    }

    const auto string_table_size = read_be32(xex_file, import_offset + 4);
    const auto library_count = read_be32(xex_file, import_offset + 8);
    const auto string_table_offset = import_offset + kImportHeaderSize;
    if (library_count == 0 || library_count > 4096 ||
        !fits(string_table_offset, string_table_size, xex_file.size())) {
        return fail("XEX2 import string table or library count is invalid");
    }

    std::vector<std::string> library_names;
    library_names.reserve(library_count);
    std::size_t string_cursor = string_table_offset;
    const auto string_end = string_table_offset + string_table_size;
    for (std::size_t i = 0; i < library_count; ++i) {
        if (string_cursor >= string_end) {
            return fail("XEX2 import string table has fewer names than libraries");
        }
        const auto terminator = std::find(xex_file.begin() + string_cursor,
                                          xex_file.begin() + string_end, 0);
        if (terminator == xex_file.begin() + string_end) {
            return fail("XEX2 import library name is not null-terminated");
        }
        const auto length = static_cast<std::size_t>(terminator - (xex_file.begin() + string_cursor));
        if (length == 0 || length > 255) {
            return fail("XEX2 import library name is empty or too long");
        }
        library_names.emplace_back(
            reinterpret_cast<const char*>(xex_file.data() + string_cursor), length);
        const auto consumed = length + 1;
        const auto padded = (consumed + 3) & ~std::size_t{3};
        if (padded > string_end - string_cursor) {
            return fail("XEX2 import string padding exceeds the string table");
        }
        string_cursor += padded;
    }

    std::size_t library_cursor = string_end;
    XexImportResult result;
    result.default_stack_size = default_stack_size;
    result.default_heap_size = default_heap_size;
    result.tls_info = tls_info;
    for (std::size_t library_index = 0; library_index < library_count; ++library_index) {
        if (!fits(library_cursor, kImportLibrarySize, xex_file.size())) {
            return fail("XEX2 import library header is truncated");
        }
        const auto declared_record_size = read_be32(xex_file, library_cursor);
        const auto library_id = read_be32(xex_file, library_cursor + 0x18);
        const auto library_version = read_be32(xex_file, library_cursor + 0x1C);
        const auto minimum_version = read_be32(xex_file, library_cursor + 0x20);
        const auto name_index = read_be16(xex_file, library_cursor + 0x24);
        const auto import_count = read_be16(xex_file, library_cursor + 0x26);

        const auto descriptors_size =
            static_cast<std::size_t>(import_count) * kImportDescriptorSize;
        const auto record_size = kImportLibrarySize + descriptors_size;
        if (declared_record_size != record_size ||
            !fits(library_cursor, record_size, xex_file.size()) ||
            name_index >= library_names.size()) {
            return fail("XEX2 import library record size or name index is invalid");
        }

        const auto library_name = library_names[name_index];
        result.libraries.push_back({
            library_name, library_id, library_version, minimum_version,
            name_index, import_count
        });
        const auto first_import_index = result.imports.size();
        const auto descriptors_offset = library_cursor + kImportLibrarySize;
        for (std::size_t descriptor_index = 0;
             descriptor_index < import_count; ++descriptor_index) {
            const auto descriptor_offset =
                descriptors_offset + descriptor_index * kImportDescriptorSize;
            const auto thunk_address = read_be32(xex_file, descriptor_offset);
            if (thunk_address < image.image_base || (thunk_address & 3u) != 0) {
                return fail("XEX2 import thunk address precedes the loaded PE image");
            }
            const auto thunk_offset =
                static_cast<std::uint64_t>(thunk_address) - image.image_base;
            if (thunk_offset > image.bytes.size() ||
                sizeof(std::uint32_t) > image.bytes.size() - static_cast<std::size_t>(thunk_offset)) {
                return fail("XEX2 import thunk address lies outside the loaded PE image");
            }

            const auto thunk_value =
                (static_cast<std::uint32_t>(image.bytes[thunk_offset]) << 24) |
                (static_cast<std::uint32_t>(image.bytes[thunk_offset + 1]) << 16) |
                (static_cast<std::uint32_t>(image.bytes[thunk_offset + 2]) << 8) |
                static_cast<std::uint32_t>(image.bytes[thunk_offset + 3]);
            const auto thunk_type = static_cast<std::uint8_t>((thunk_value >> 24) & 0xFFu);
            if (thunk_type > 1) {
                return fail("XEX import descriptor contains an unsupported thunk type");
            }
            result.imports.push_back({
                library_name,
                static_cast<std::uint16_t>(thunk_value & 0xFFFFu),
                static_cast<std::uint8_t>((thunk_value >> 16) & 0xFFu),
                static_cast<std::uint8_t>((thunk_value >> 24) & 0xFFu),
                thunk_address,
                0
            });
        }

        for (std::size_t i = 0; i < import_count; ++i) {
            auto& item = result.imports[first_import_index + i];
            if (item.type != 0 || i + 1 >= import_count) continue;
            const auto& next = result.imports[first_import_index + i + 1];
            if (next.type == 1 && next.ordinal == item.ordinal &&
                next.hint == item.hint) {
                item.paired_thunk_address = next.thunk_address;
            }
        }
        library_cursor += record_size;
    }

    if (library_cursor != import_offset + declared_import_header_size) {
        return fail("XEX2 import-library records do not fill the declared import block");
    }
    return result;
}

bool patch_xex_function_iat_slots(LoadedPeImage& image,
                                  std::span<const XexImport> imports,
                                  std::size_t* patched_count,
                                  std::string* error) {
    if (image.image_size == 0 || image.bytes.size() != image.image_size ||
        static_cast<std::uint64_t>(image.image_base) + image.image_size >
            (std::uint64_t{1} << 32)) {
        set_error(error, "Cannot patch function IAT slots in an invalid guest image");
        return false;
    }

    std::vector<std::pair<std::size_t, std::uint32_t>> patches;
    for (const auto& item : imports) {
        if (item.type != 0 || item.paired_thunk_address == 0) continue;
        if (item.thunk_address < image.image_base ||
            item.paired_thunk_address < image.image_base ||
            (item.thunk_address & 3u) != 0 ||
            (item.paired_thunk_address & 3u) != 0) {
            set_error(error, "XEX function IAT pairing contains an invalid guest address");
            return false;
        }
        const auto slot_offset =
            static_cast<std::uint64_t>(item.thunk_address) - image.image_base;
        const auto thunk_offset =
            static_cast<std::uint64_t>(item.paired_thunk_address) - image.image_base;
        if (slot_offset > image.bytes.size() ||
            sizeof(std::uint32_t) > image.bytes.size() - static_cast<std::size_t>(slot_offset) ||
            thunk_offset >= image.bytes.size()) {
            set_error(error, "XEX function IAT pairing points outside the guest image");
            return false;
        }
        patches.emplace_back(static_cast<std::size_t>(slot_offset),
                             item.paired_thunk_address);
    }

    for (const auto& [offset, value] : patches) {
        image.bytes[offset] = static_cast<std::uint8_t>(value >> 24);
        image.bytes[offset + 1] = static_cast<std::uint8_t>(value >> 16);
        image.bytes[offset + 2] = static_cast<std::uint8_t>(value >> 8);
        image.bytes[offset + 3] = static_cast<std::uint8_t>(value);
    }
    if (patched_count) *patched_count = patches.size();
    return true;
}

} // namespace toohuman::runtime
