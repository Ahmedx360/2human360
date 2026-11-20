#include "image/xbox360_pe.hpp"
#include "image/xex_image.hpp"
#include "image/xex_imports.hpp"

#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <optional>
#include <string>
#include <vector>

namespace {

bool read_file(const char* path, std::vector<std::uint8_t>& bytes) {
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    if (!stream) {
        std::cerr << "Could not open: " << path << '\n';
        return false;
    }
    const auto end = stream.tellg();
    if (end < 0) {
        std::cerr << "Could not determine file size: " << path << '\n';
        return false;
    }
    const auto size = static_cast<std::uint64_t>(end);
    if (size > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        size > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        std::cerr << "File is too large for this host: " << path << '\n';
        return false;
    }
    bytes.resize(static_cast<std::size_t>(size));
    stream.seekg(0);
    if (!bytes.empty() &&
        !stream.read(reinterpret_cast<char*>(bytes.data()),
                     static_cast<std::streamsize>(bytes.size()))) {
        std::cerr << "Could not read complete file: " << path << '\n';
        return false;
    }
    return true;
}

} // namespace

int main(int argc, char** argv) {
    if (argc != 2 && argc != 3) {
        std::cerr << "Usage: TooHumanXexImportAudit <default.xex> [default.exe]\n";
        return 2;
    }

    std::vector<std::uint8_t> xex_bytes;
    if (!read_file(argv[1], xex_bytes)) return 2;

    std::optional<toohuman::runtime::LoadedPeImage> loaded_image;
    if (argc == 2) {
        const auto xex_image = toohuman::runtime::load_xex2_image(xex_bytes);
        if (!xex_image) {
            std::cerr << "XEX image load failed: " << xex_image.error << '\n';
            return 1;
        }
        std::cout << "XEX compression: " << xex_image.compression_type
                  << "  encryption: " << xex_image.encryption_type
                  << "  security image size: 0x" << std::hex
                  << xex_image.security_image_size << "  decompressed: 0x"
                  << xex_image.decompressed_size << std::dec << '\n';
        loaded_image = *xex_image.image;
    } else {
        std::vector<std::uint8_t> pe_bytes;
        if (!read_file(argv[2], pe_bytes)) return 2;
        const auto pe = toohuman::runtime::load_xbox360_pe(pe_bytes);
        if (!pe) {
            std::cerr << "PE load failed: " << pe.error.message << '\n';
            return 1;
        }
        loaded_image = *pe.image;
    }
    const auto imports = toohuman::runtime::parse_xex2_imports(xex_bytes, *loaded_image);
    if (!imports) {
        std::cerr << "XEX2 import parsing failed: " << imports.error << '\n';
        return 1;
    }

    std::cout << "Image base: 0x" << std::hex << std::uppercase
              << loaded_image->image_base << "  size: 0x" << loaded_image->image_size
              << "  entry: 0x" << loaded_image->entry_point << std::dec << '\n';
    std::cout << "Default stack size: 0x" << std::hex << imports.default_stack_size
              << "  default heap size: 0x" << imports.default_heap_size
              << std::dec << "\n";
    if (imports.tls_info) {
        std::cout << "TLS slots: " << imports.tls_info->slot_count
                  << "  template: 0x" << std::hex << imports.tls_info->raw_data_address
                  << "  data size: 0x" << imports.tls_info->data_size
                  << "  raw size: 0x" << imports.tls_info->raw_data_size
                  << std::dec << '\n';
    }
    std::cout << "Import libraries:\n";
    for (const auto& library : imports.libraries) {
        std::cout << "  " << library.name << " id=0x" << std::hex << library.library_id
                  << " version=0x" << library.version << " min=0x"
                  << library.minimum_version << std::dec
                  << " descriptors=" << library.descriptor_count << '\n';
    }
    std::cout << "Imported thunk records: " << imports.imports.size() << "\n\n";

    std::size_t functions = 0;
    std::size_t variables = 0;
    std::size_t function_iat_slots = 0;
    for (const auto& item : imports.imports) {
        const char* kind = item.type == 1 ? "FUNCTION" :
                           item.type == 0 ? "VARIABLE" : "UNKNOWN";
        functions += item.type == 1;
        variables += item.type == 0 && item.paired_thunk_address == 0;
        function_iat_slots += item.type == 0 && item.paired_thunk_address != 0;
        std::cout << std::left << std::setw(9) << kind << ' '
                  << item.library << "!0x"
                  << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                  << item.ordinal << std::setfill(' ')
                  << "  thunk=0x" << std::setw(8) << item.thunk_address
                  << "  hint=0x" << std::setw(2) << static_cast<unsigned>(item.hint)
                  << std::dec << '\n';
    }

    std::cout << "\nFunction imports: " << functions
              << "  function IAT slots: " << function_iat_slots
              << "  true variable imports: " << variables << '\n';
    std::cout << "No import implementation is inferred by this audit tool. "
                 "Use the exact library/ordinal pairs to implement and test HLE handlers.\n";
    return 0;
}
