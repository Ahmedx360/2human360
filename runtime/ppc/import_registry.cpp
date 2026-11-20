#include "ppc/import_registry.hpp"

#include <atomic>
#include <cstdio>
#include <cstdlib>
#include <utility>

namespace toohuman::runtime {
namespace {

std::atomic<PpcImportRegistry*> g_active_registry{nullptr};

PPC_FUNC_IMPL(toohuman_import_trampoline) {
    auto* registry = g_active_registry.load(std::memory_order_acquire);
    if (!registry) {
        std::fprintf(stderr,
                     "[TooHuman] Import trampoline reached without an active import registry "
                     "(target=0x%08X, LR=0x%016llX)\n",
                     static_cast<unsigned>(ctx.ctr.u32),
                     static_cast<unsigned long long>(ctx.lr));
        std::fflush(stderr);
        std::abort();
    }
    registry->dispatch(ctx, base);
}

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

} // namespace

PpcImportRegistry::~PpcImportRegistry() {
    if (installed_) {
        auto* expected = this;
        g_active_registry.compare_exchange_strong(
            expected, nullptr, std::memory_order_acq_rel);
    }
}

std::string PpcImportRegistry::make_key(const std::string& library,
                                       std::uint16_t ordinal) {
    std::string key = library;
    key.push_back('\0');
    key.push_back(static_cast<char>(ordinal >> 8));
    key.push_back(static_cast<char>(ordinal));
    return key;
}

bool PpcImportRegistry::register_handler(const std::string& library,
                                         std::uint16_t ordinal,
                                         PPCFunc* handler,
                                         std::string* error) {
    if (installed_) {
        set_error(error, "Import handlers must be registered before the registry is installed");
        return false;
    }
    if (library.empty() || handler == nullptr) {
        set_error(error, "Import handler requires a library name and non-null PPC function");
        return false;
    }
    const auto [it, inserted] = handlers_.emplace(make_key(library, ordinal), handler);
    if (!inserted) {
        set_error(error, "Duplicate handler registered for an import library/ordinal pair");
        return false;
    }
    return true;
}

bool PpcImportRegistry::install(GuestAddressSpace& memory,
                                std::span<const XexImport> imports,
                                std::size_t* registered_count,
                                std::string* error) {
    if (installed_) {
        set_error(error, "Import registry is already installed");
        return false;
    }
    if (!memory.image_mapped()) {
        set_error(error, "Map the guest image before installing XEX imports");
        return false;
    }
    if (g_active_registry.load(std::memory_order_acquire) != nullptr) {
        set_error(error, "Another PPC import registry is already active in this process");
        return false;
    }

    std::unordered_map<std::uint32_t, XexImport> pending;
    for (const auto& import : imports) {
        if (import.type == 0) continue; // Variable imports are not callable thunks.
        if (import.type != 1) {
            set_error(error, "XEX import contains an unsupported thunk type");
            return false;
        }
        if ((import.thunk_address & 3u) != 0 ||
            memory.get_function<PPCFunc*>(import.thunk_address) == nullptr) {
            set_error(error, "XEX function-import thunk is outside the configured PPC function table");
            return false;
        }
        if (!pending.emplace(import.thunk_address, import).second) {
            set_error(error, "XEX import metadata contains a duplicate function thunk address");
            return false;
        }
    }

    auto* expected = static_cast<PpcImportRegistry*>(nullptr);
    if (!g_active_registry.compare_exchange_strong(
            expected, this, std::memory_order_acq_rel)) {
        set_error(error, "Another PPC import registry became active during installation");
        return false;
    }

    imports_by_thunk_ = std::move(pending);
    for (const auto& [address, import] : imports_by_thunk_) {
        (void)import;
        if (!memory.set_function(address, &toohuman_import_trampoline)) {
            g_active_registry.store(nullptr, std::memory_order_release);
            imports_by_thunk_.clear();
            set_error(error, "Could not install an XEX import thunk into the PPC function table");
            return false;
        }
    }

    installed_ = true;
    if (registered_count) *registered_count = imports_by_thunk_.size();
    return true;
}

void PpcImportRegistry::dispatch(PPCContext& context, std::uint8_t* base) const {
    const auto thunk_address = context.ctr.u32;
    const auto import_it = imports_by_thunk_.find(thunk_address);
    if (import_it == imports_by_thunk_.end()) {
        std::fprintf(stderr,
                     "[TooHuman] Unknown import thunk 0x%08X (LR=0x%016llX)\n",
                     static_cast<unsigned>(thunk_address),
                     static_cast<unsigned long long>(context.lr));
        std::fflush(stderr);
        std::abort();
    }

    const auto& import = import_it->second;
    const auto handler_it = handlers_.find(make_key(import.library, import.ordinal));
    if (handler_it == handlers_.end()) {
        std::fprintf(stderr,
                     "[TooHuman] Unimplemented import %s ordinal 0x%04X "
                     "(thunk=0x%08X, LR=0x%016llX, r3=0x%08X, r4=0x%08X, "
                     "r5=0x%08X, r6=0x%08X)\n",
                     import.library.c_str(),
                     static_cast<unsigned>(import.ordinal),
                     static_cast<unsigned>(thunk_address),
                     static_cast<unsigned long long>(context.lr),
                     static_cast<unsigned>(context.r3.u32),
                     static_cast<unsigned>(context.r4.u32),
                     static_cast<unsigned>(context.r5.u32),
                     static_cast<unsigned>(context.r6.u32));
        std::fflush(stderr);
        std::abort();
    }

    handler_it->second(context, base);
}

} // namespace toohuman::runtime
