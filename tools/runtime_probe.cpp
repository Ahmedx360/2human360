#include "image/xbox360_pe.hpp"
#include "image/xex_image.hpp"
#include "memory/guest_address_space.hpp"
#include "ppc/title_runtime.hpp"

#include <cstdint>
#include <fstream>
#include <iostream>
#include <limits>
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
        std::cerr << "Usage: TooHumanRuntimeProbe <default.xex> [default.exe]\n";
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
        loaded_image = *xex_image.image;
        std::cout << "XEX compression type: " << xex_image.compression_type
                  << "  decompressed image bytes: 0x" << std::hex
                  << xex_image.decompressed_size << std::dec << '\\n';
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

    std::string error;
    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    if (!memory.valid()) {
        std::cerr << "Guest address-space reservation failed: " << error << '\n';
        return 1;
    }

    toohuman::runtime::PpcImportRegistry imports;
    toohuman::runtime::TitleRuntimeInitReport report{};
    if (!toohuman::runtime::initialize_title_runtime(
            memory, *loaded_image, xex_bytes, imports, &report, &error)) {
        std::cerr << "Runtime initialization failed: " << error << '\n';
        return 1;
    }

    std::cout << "Guest image mapped at 0x" << std::hex << std::uppercase
              << loaded_image->image_base << " (size 0x" << loaded_image->image_size
              << ", entry 0x" << loaded_image->entry_point << ")\n" << std::dec;
    std::cout << "Registered PPC functions: " << report.translated_functions << '\n';
    std::cout << "Registered function imports: " << report.function_imports << '\n';
    std::cout << "Patched function IAT slots: " << report.function_iat_slots << '\n';
    std::cout << "Unbound variable imports: " << report.variable_imports << '\n';
    std::cout << "XEX default stack size: 0x" << std::hex << report.default_stack_size
              << "  default heap size: 0x" << report.default_heap_size << std::dec << '\n';
    if (report.tls_info) {
        std::cout << "XEX TLS slots: " << report.tls_info->slot_count
                  << "  template: 0x" << std::hex << report.tls_info->raw_data_address
                  << "  data size: 0x" << report.tls_info->data_size
                  << "  raw size: 0x" << report.tls_info->raw_data_size
                  << std::dec << '\n';
    }
    std::cout << "Runtime memory and dispatch are initialized. The game entry point "
                 "was NOT invoked; guest stack/TLS allocation and kernel HLE are not ready.\n";
    return 0;
}
