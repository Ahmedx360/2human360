#pragma once

#include "image/xex_imports.hpp"
#include "ppc_context.h"
#include "memory/guest_address_space.hpp"

#include <cstddef>
#include <cstdint>
#include <span>
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

    [[nodiscard]] bool install(GuestAddressSpace& memory,
                               std::span<const XexImport> imports,
                               std::size_t* registered_count = nullptr,
                               std::string* error = nullptr);

    void dispatch(PPCContext& context, std::uint8_t* base) const;

private:
    [[nodiscard]] static std::string make_key(const std::string& library,
                                              std::uint16_t ordinal);

    std::unordered_map<std::uint32_t, XexImport> imports_by_thunk_;
    std::unordered_map<std::string, PPCFunc*> handlers_;
    bool installed_{};
};

} // namespace toohuman::runtime
