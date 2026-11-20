#include "ppc/title_runtime.hpp"

#include "ppc/function_table.hpp"

namespace toohuman::runtime {

bool initialize_title_runtime(GuestAddressSpace& memory,
                              const LoadedPeImage& image,
                              std::span<const std::uint8_t> xex_file,
                              PpcImportRegistry& imports,
                              TitleRuntimeInitReport* report,
                              std::string* error) {
    if (memory.valid() && memory.image_mapped()) {
        if (error) *error = "Title runtime initialization requires a fresh guest address space";
        return false;
    }

    const auto import_result = parse_xex2_imports(xex_file, image);
    if (!import_result) {
        if (error) *error = import_result.error;
        return false;
    }

    if (!memory.valid()) {
        if (error) *error = "Reserve the 4 GiB guest address space before title initialization";
        return false;
    }

    // XEX payloads contain encoded type-0 IAT words. Patch the function slots
    // in a private image copy before map_image applies read-only section flags.
    LoadedPeImage mapped_image = image;
    std::size_t function_iat_count = 0;
    if (!patch_xex_function_iat_slots(
            mapped_image, import_result.imports, &function_iat_count, error)) {
        return false;
    }

    std::size_t variable_import_count = 0;
    for (const auto& item : import_result.imports) {
        if (item.type == 0 && item.paired_thunk_address == 0) {
            ++variable_import_count;
        }
    }

    if (!memory.map_image(mapped_image, error)) return false;

    std::size_t translated_count = 0;
    if (!initialize_recompiled_function_table(memory, &translated_count, error)) {
        return false;
    }

    std::size_t registered_count = 0;
    if (!imports.install(memory, import_result.imports, &registered_count, error)) {
        return false;
    }

    if (report) {
        report->translated_functions = translated_count;
        report->function_imports = registered_count;
        report->function_iat_slots = function_iat_count;
        report->variable_imports = variable_import_count;
        report->default_stack_size = import_result.default_stack_size;
        report->default_heap_size = import_result.default_heap_size;
        report->tls_info = import_result.tls_info;
    }
    return true;
}

} // namespace toohuman::runtime
