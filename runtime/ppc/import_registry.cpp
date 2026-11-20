#include "ppc/import_registry.hpp"

#include "ppc/title_import_manifest.hpp"
#include <ppc_config.h>

#include <atomic>
#include <chrono>
#include <cstring>
#include <thread>
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

constexpr std::uint32_t kKernelVariableHeapBase = 0x86000000u;
constexpr std::uint32_t kKernelVariableHeapSize = 0x01000000u;

void store_be32(std::uint8_t* p, std::uint32_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 24);
    p[1] = static_cast<std::uint8_t>(value >> 16);
    p[2] = static_cast<std::uint8_t>(value >> 8);
    p[3] = static_cast<std::uint8_t>(value);
}
void store_be16(std::uint8_t* p, std::uint16_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 8);
    p[1] = static_cast<std::uint8_t>(value);
}
void store_be64(std::uint8_t* p, std::uint64_t value) {
    store_be32(p, static_cast<std::uint32_t>(value >> 32));
    store_be32(p + 4, static_cast<std::uint32_t>(value));
}

struct KernelVariableSpec {
    std::uint16_t ordinal;
    std::uint32_t size;
};

constexpr KernelVariableSpec kKernelVariables[] = {
    {0x001B, 0x40}, // ExThreadObjectType
    {0x0059, 0x04}, // KeDebugMonitorData
    {0x00AD, 0x18}, // KeTimeStampBundle
    {0x0156, 0x10}, // XboxHardwareInfo
    {0x0158, 0x08}, // XboxKrnlVersion
    {0x0193, 0x04}, // XexExecutableModuleHandle
    {0x01AE, 0x400}, // ExLoadedCommandLine
    {0x01BE, 0x04}, // VdGlobalDevice
    {0x01C0, 0x04}, // VdGpuClockInMHz
    {0x01C1, 0x1C}, // VdHSIOCalibrationLock
    {0x0266, 0x04}, // KeCertMonitorData
};

const KernelVariableSpec* find_kernel_variable(std::uint16_t ordinal) {
    for (const auto& spec : kKernelVariables) {
        if (spec.ordinal == ordinal) return &spec;
    }
    return nullptr;
}

void update_timestamp_bundle(std::uint8_t* base, std::uint32_t address,
                             std::chrono::steady_clock::time_point start) {
    const auto now_steady = std::chrono::steady_clock::now();
    const auto elapsed_ms = static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(now_steady - start).count());
    const auto now_system = std::chrono::system_clock::now().time_since_epoch();
    const auto unix_100ns = static_cast<std::uint64_t>(
        std::chrono::duration_cast<std::chrono::nanoseconds>(now_system).count() / 100);
    constexpr std::uint64_t kWindowsEpochOffset100ns = 116444736000000000ull;
    auto* p = base + address;
    store_be64(p, elapsed_ms * 10000ull);
    store_be64(p + 8, unix_100ns + kWindowsEpochOffset100ns);
    store_be32(p + 16, static_cast<std::uint32_t>(elapsed_ms));
    store_be32(p + 20, 0);
}

} // namespace

PpcImportRegistry::~PpcImportRegistry() {
    timestamp_thread_.request_stop();
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
    const bool inserted = handlers_.emplace(make_key(library, ordinal), handler).second;
    if (!inserted) {
        set_error(error, "Duplicate handler registered for an import library/ordinal pair");
        return false;
    }
    return true;
}

bool PpcImportRegistry::prepare_variable_imports(
    GuestAddressSpace& memory,
    LoadedPeImage& image,
    std::span<const std::uint8_t> xex_file,
    std::span<const XexImport> imports,
    std::size_t* bound_count,
    std::string* error) {
    if (variables_prepared_ || installed_) {
        set_error(error, "Kernel variable imports have already been prepared or installed");
        return false;
    }
    if (!memory.valid() || memory.image_mapped()) {
        set_error(error, "Prepare kernel variables before mapping the guest image");
        return false;
    }
    if (image.image_base != PPC_IMAGE_BASE || image.image_size != PPC_IMAGE_SIZE ||
        static_cast<std::uint64_t>(image.image_base) + image.image_size >
            (std::uint64_t{1} << 32)) {
        set_error(error, "Kernel variable allocator requires the generated Too Human image range");
        return false;
    }

    const auto image_end = static_cast<std::uint64_t>(image.image_base) + image.image_size;
    const auto function_table_end = image_end + 2ull * PPC_CODE_SIZE;
    const auto heap_start = static_cast<std::uint64_t>(kKernelVariableHeapBase);
    const auto heap_end = heap_start + kKernelVariableHeapSize;
    if (heap_start < function_table_end || heap_start < image_end ||
        heap_end > (std::uint64_t{1} << 32)) {
        set_error(error, "Reserved kernel variable heap overlaps the image/function table or exceeds guest VA");
        return false;
    }

    std::vector<const XexImport*> variables;
    for (const auto& item : imports) {
        if (item.type == 0 && item.paired_thunk_address == 0) {
            if (item.library != "xboxkrnl.exe" || !find_kernel_variable(item.ordinal)) {
                set_error(error, "Too Human imports an unsupported kernel variable export");
                return false;
            }
            variables.push_back(&item);
        }
    }
    if (variables.empty()) {
        variables_prepared_ = true;
        if (bound_count) *bound_count = 0;
        return true;
    }

    variable_heap_ = std::make_unique<GuestHeap>(
        memory, kKernelVariableHeapBase, kKernelVariableHeapSize);
    if (!variable_heap_->initialize(error)) {
        variable_heap_.reset();
        return false;
    }

    const auto xex_header_size = static_cast<std::size_t>(
        (static_cast<std::uint32_t>(xex_file[8]) << 24) |
        (static_cast<std::uint32_t>(xex_file[9]) << 16) |
        (static_cast<std::uint32_t>(xex_file[10]) << 8) |
        static_cast<std::uint32_t>(xex_file[11]));
    if (xex_header_size == 0 || xex_header_size > xex_file.size()) {
        set_error(error, "XEX header size is invalid while creating XexExecutableModuleHandle");
        variable_heap_.reset();
        return false;
    }

    const auto allocate = [&](std::size_t size) -> std::optional<std::uint32_t> {
        const auto address = variable_heap_->allocate(size, 16);
        if (address) std::memset(memory.base() + *address, 0, size);
        return address;
    };

    std::unordered_map<std::uint16_t, std::uint32_t> variable_addresses;
    std::uint32_t timestamp_address = 0;
    for (const auto* item : variables) {
        const auto* spec = find_kernel_variable(item->ordinal);
        if (!spec) {
            set_error(error, "Kernel variable export is missing a size descriptor");
            variable_heap_.reset();
            return false;
        }

        auto storage = allocate(spec->size);
        if (!storage) {
            set_error(error, "Guest heap could not allocate a kernel variable export");
            variable_heap_.reset();
            return false;
        }
        auto* bytes = memory.base() + *storage;

        switch (item->ordinal) {
        case 0x00AD: // KeTimeStampBundle: 24-byte X_TIME_STAMP_BUNDLE.
            timestamp_address = *storage;
            break;
        case 0x0156: // XboxHardwareInfo: retail flags and six Xenon CPU cores.
            store_be32(bytes, 0x20);
            bytes[4] = 6;
            break;
        case 0x0158: // XboxKrnlVersion: permissive retail-compatible version.
            store_be16(bytes, 2);
            store_be16(bytes + 2, 0xFFFF);
            store_be16(bytes + 4, 0xFFFF);
            bytes[6] = 0x80;
            break;
        case 0x0193: { // XexExecutableModuleHandle -> LDR record -> XEX header copy.
            auto module_record = allocate(0x100);
            auto header_copy = allocate(xex_header_size);
            if (!module_record || !header_copy) {
                set_error(error, "Could not allocate XEX loader record/header backing");
                variable_heap_.reset();
                return false;
            }
            std::memcpy(memory.base() + *header_copy, xex_file.data(), xex_header_size);
            store_be32(memory.base() + *module_record + 0x58, *header_copy);
            store_be32(bytes, *module_record);
            break;
        }
        case 0x01AE: { // ExLoadedCommandLine.
            constexpr char command_line[] = "\"default.xex\"";
            std::memcpy(bytes, command_line, sizeof(command_line));
            break;
        }
        case 0x01C0: // VdGpuClockInMHz.
            store_be32(bytes, 500);
            break;
        default:
            // Debug/cert monitor pointers, device pointer, object type and
            // HSIO critical-section storage are valid zero-initialized objects.
            break;
        }

        const auto slot_offset = static_cast<std::uint64_t>(item->thunk_address) -
                                 image.image_base;
        if (item->thunk_address < image.image_base ||
            slot_offset > image.bytes.size() ||
            sizeof(std::uint32_t) > image.bytes.size() -
                static_cast<std::size_t>(slot_offset)) {
            set_error(error, "Kernel variable IAT slot lies outside the loaded image");
            variable_heap_.reset();
            return false;
        }
        store_be32(image.bytes.data() + static_cast<std::size_t>(slot_offset), *storage);
        variable_addresses[item->ordinal] = *storage;
    }

    if (timestamp_address != 0) {
        const auto start = std::chrono::steady_clock::now();
        update_timestamp_bundle(memory.base(), timestamp_address, start);
        auto* guest_base = memory.base();
        timestamp_thread_ = std::jthread(
            [guest_base, timestamp_address, start](std::stop_token stop) {
                while (!stop.stop_requested()) {
                    std::this_thread::sleep_for(std::chrono::milliseconds(1));
                    if (!stop.stop_requested()) {
                        update_timestamp_bundle(guest_base, timestamp_address, start);
                    }
                }
            });
    }

    variables_prepared_ = true;
    if (bound_count) *bound_count = variable_addresses.size();
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

    std::unordered_map<std::uint32_t, ImportBinding> pending;
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
        const auto handler_it = handlers_.find(make_key(import.library, import.ordinal));
        auto* handler = handler_it == handlers_.end() ? nullptr : handler_it->second;
        if (!pending.emplace(import.thunk_address, ImportBinding{import, handler}).second) {
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
    for (const auto& [address, binding] : imports_by_thunk_) {
        (void)binding;
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

    const auto& binding = import_it->second;
    const auto& import = binding.import;
    if (binding.handler == nullptr) {
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

    binding.handler(context, base);
}

} // namespace toohuman::runtime
