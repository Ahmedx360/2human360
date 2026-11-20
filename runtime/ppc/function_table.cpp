#include "ppc/function_table.hpp"

#include "ppc_context.h"

#include <cstdio>
#include <cstdlib>
#include <limits>

namespace toohuman::runtime {
namespace {

PPC_FUNC_IMPL(toohuman_unresolved_indirect_call) {
    std::fprintf(stderr,
                 "[TooHuman] Unresolved indirect PPC target 0x%08X (LR=0x%016llX)\n",
                 static_cast<unsigned>(ctx.ctr.u32),
                 static_cast<unsigned long long>(ctx.lr));
    std::fflush(stderr);
    std::abort();
}

} // namespace

bool initialize_recompiled_function_table(GuestAddressSpace& memory,
                                          std::size_t* registered_count,
                                          std::string* error) {
    if (memory.image_base() != PPC_IMAGE_BASE ||
        memory.image_size() != PPC_IMAGE_SIZE) {
        if (error) *error = "Loaded PE image base/size does not match generated ppc_config.h";
        return false;
    }
    if (!memory.initialize_function_table(PPC_CODE_BASE, PPC_CODE_SIZE, error)) {
        return false;
    }
    if (!memory.fill_function_table(&toohuman_unresolved_indirect_call)) {
        if (error) *error = "Could not initialize the PPC function table with diagnostic traps";
        return false;
    }

    std::size_t count = 0;
    for (std::size_t i = 0; PPCFuncMappings[i].guest != 0; ++i) {
        const auto guest = PPCFuncMappings[i].guest;
        if (guest > std::numeric_limits<std::uint32_t>::max()) {
            if (error) *error = "Generated PPC mapping contains an address above 32 bits";
            return false;
        }
        if (PPCFuncMappings[i].host == nullptr) continue;
        if (!memory.set_function(static_cast<std::uint32_t>(guest),
                                 PPCFuncMappings[i].host)) {
            if (error) *error = "Generated PPC mapping lies outside the configured code range or is unaligned";
            return false;
        }
        ++count;
    }

    if (count == 0) {
        if (error) *error = "Generated PPC function mapping is empty";
        return false;
    }
    if (registered_count) *registered_count = count;
    return true;
}

} // namespace toohuman::runtime
