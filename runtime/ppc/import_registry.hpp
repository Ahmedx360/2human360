#pragma once

#include "image/xex_imports.hpp"
#include "ppc_context.h"
#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"

#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <thread>
#include <string>
#include <unordered_map>

namespace toohuman::runtime {

// Routes XEX2 function-import thunks through one generic PPC trampoline.
// Handlers are keyed by the exact library name and ordinal; unknown imports
// are reported with thunk, LR and argument registers, then fail fast.
class PpcImportRegistry final {
public:
    PpcImportRegistry() = default;
    ~PpcImportRegistry();

    PpcImportRegistry(const PpcImportRegistry&) = delete;
    PpcImportRegistry& operator=(const PpcImportRegistry&) = delete;

    [[nodiscard]] bool register_handler(const std::string& library,
                                        std::uint16_t ordinal,
                                        PPCFunc* handler,
                                        std::string* error = nullptr);

    [[nodiscard]] bool prepare_variable_imports(
        GuestAddressSpace& memory,
        LoadedPeImage& image,
        std::span<const std::uint8_t> xex_file,
        std::span<const XexImport> imports,
        std::size_t* bound_count = nullptr,
        std::string* error = nullptr);

    [[nodiscard]] bool install(GuestAddressSpace& memory,
                               std::span<const XexImport> imports,
                               std::size_t* registered_count = nullptr,
                               std::string* error = nullptr);

    void dispatch(PPCContext& context, std::uint8_t* base) const;

private:
    [[nodiscard]] static std::string make_key(const std::string& library,
                                              std::uint16_t ordinal);

    struct ImportBinding {
        XexImport import;
        PPCFunc* handler{};
    };

    std::unordered_map<std::uint32_t, ImportBinding> imports_by_thunk_;
    std::unordered_map<std::string, PPCFunc*> handlers_;
    std::unique_ptr<GuestHeap> guest_heap_;
    std::jthread timestamp_thread_;
    std::uint32_t xex_header_guest_address_{};
    std::uint32_t xex_header_size_{};
    bool variables_prepared_{};
    bool installed_{};
};

} // namespace toohuman::runtime
