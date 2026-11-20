#include "image/xbox360_pe.hpp"
#include "image/xex_imports.hpp"

#include <cstdint>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
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
        std::cerr << "Usage: TooHumanXexImportAudit <default.xex> <default.exe>\n";
        return 2;
    }

    std::vector<std::uint8_t> xex_bytes;
    std::vector<std::uint8_t> pe_bytes;
    if (!read_file(argv[1], xex_bytes) || !read_file(argv[2], pe_bytes)) return 2;

    const auto pe = toohuman::runtime::load_xbox360_pe(pe_bytes);
    if (!pe) {
        std::cerr << "PE load failed: " << pe.error.message << '\n';
        return 1;
    }
    const auto imports = toohuman::runtime::parse_xex2_imports(xex_bytes, *pe.image);
    if (!imports) {
        std::cerr << "XEX2 import parsing failed: " << imports.error << '\n';
        return 1;
    }

    std::cout << "Image base: 0x" << std::hex << std::uppercase
              << pe.image->image_base << "  size: 0x" << pe.image->image_size
              << "  entry: 0x" << pe.image->entry_point << std::dec << '\n';
    std::cout << "Imported thunk records: " << imports.imports.size() << "\n\n";

    std::size_t functions = 0;
    std::size_t variables = 0;
    for (const auto& item : imports.imports) {
        const char* kind = item.type == 1 ? "FUNCTION" :
                           item.type == 0 ? "VARIABLE" : "UNKNOWN";
        functions += item.type == 1;
        variables += item.type == 0;
        std::cout << std::left << std::setw(9) << kind << ' '
                  << item.library << "!0x"
                  << std::hex << std::uppercase << std::setw(4) << std::setfill('0')
                  << item.ordinal << std::setfill(' ')
                  << "  thunk=0x" << std::setw(8) << item.thunk_address
                  << "  hint=0x" << std::setw(2) << static_cast<unsigned>(item.hint)
                  << std::dec << '\n';
    }

    std::cout << "\nFunction imports: " << functions
              << "  variable imports: " << variables << '\n';
    std::cout << "No import implementation is inferred by this audit tool. "
                 "Use the exact library/ordinal pairs to implement and test HLE handlers.\n";
    return 0;
}
