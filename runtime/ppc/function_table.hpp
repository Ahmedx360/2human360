#pragma once

#include "memory/guest_address_space.hpp"

#include <cstddef>
#include <string>

namespace toohuman::runtime {

// Installs every generated PPC function into the indirect-call table expected
// by PPC_LOOKUP_FUNC / PPC_CALL_INDIRECT_FUNC. Unmapped slots are initialized
// to a diagnostic trap rather than left as null function pointers.
[[nodiscard]] bool initialize_recompiled_function_table(
    GuestAddressSpace& memory,
    std::size_t* registered_count = nullptr,
    std::string* error = nullptr);

} // namespace toohuman::runtime
