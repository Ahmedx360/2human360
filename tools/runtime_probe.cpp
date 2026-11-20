#include "image/xbox360_pe.hpp"
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
    if (argc != 3) {
        std::cerr << "Usage: TooHumanRuntimeProbe <default.xex> <default.exe>\n";
        return 2;
    }

    std::vector<std::uint8_t> xex_bytes;
    std::vector<std::uint8_t> pe_bytes;
    if (!read_file(argv[1], xex_bytes) || !read_file(argv[2], pe_bytes)) return 2;

    const auto image = toohuman::runtime::load_xbox360_pe(pe_bytes);
    if (!image) {
        std::cerr << "PE load failed: " << image.error.message << '\n';
        return 1;
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
            memory, *image.image, xex_bytes, imports, &report, &error)) {
        std::cerr << "Runtime initialization failed: " << error << '\n';
        return 1;
    }

    std::cout << "Guest image mapped at 0x" << std::hex << std::uppercase
              << image.image->image_base << " (size 0x" << image.image->image_size
              << ", entry 0x" << image.image->entry_point << ")\n" << std::dec;
    std::cout << "Registered PPC functions: " << report.translated_functions << '\n';
    std::cout << "Registered function imports: " << report.function_imports << '\n';
    std::cout << "Parsed variable imports: " << report.variable_imports << '\n';
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
                 "was NOT invoked; startup stack/TLS and kernel HLE are not ready.\n";
    return 0;
}
