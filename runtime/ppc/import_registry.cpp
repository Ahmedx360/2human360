#include "ppc/import_registry.hpp"
#include "ppc/guest_thread_execution.hpp"
#include "ppc/guest_thread_runtime.hpp"
#include "ppc/title_runtime.hpp"

#include "ppc/title_import_manifest.hpp"
#include <ppc_config.h>

#include <algorithm>
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
    static const bool trace_ret = std::getenv("TH_TRACE_IMPORTS") != nullptr;
    if (trace_ret) std::fprintf(stderr, "    -> r3=%08X\n", static_cast<unsigned>(ctx.r3.u32));
}

void set_error(std::string* error, const char* message) {
    if (error) *error = message;
}

constexpr std::uint32_t kGuestHeapBase = 0x86000000u;
constexpr std::uint32_t kGuestHeapSize = 0x08000000u;

void store_be32(std::uint8_t* p, std::uint32_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 24);
    p[1] = static_cast<std::uint8_t>(value >> 16);
    p[2] = static_cast<std::uint8_t>(value >> 8);
    p[3] = static_cast<std::uint8_t>(value);
}
std::uint32_t load_be32(const std::uint8_t* p) {
    return (static_cast<std::uint32_t>(p[0]) << 24) |
           (static_cast<std::uint32_t>(p[1]) << 16) |
           (static_cast<std::uint32_t>(p[2]) << 8) |
           static_cast<std::uint32_t>(p[3]);
}
void store_be16(std::uint8_t* p, std::uint16_t value) {
    p[0] = static_cast<std::uint8_t>(value >> 8);
    p[1] = static_cast<std::uint8_t>(value);
}
void store_be64(std::uint8_t* p, std::uint64_t value) {
    store_be32(p, static_cast<std::uint32_t>(value >> 32));
    store_be32(p + 4, static_cast<std::uint32_t>(value));
}

bool guest_range_valid(std::uint32_t address, std::uint64_t length) noexcept {
    return length == 0 ||
           (address != 0 && static_cast<std::uint64_t>(address) + length <=
                                (std::uint64_t{1} << 32));
}

bool translate_guest_protection(std::uint32_t flags,
                                GuestMemoryProtection& protection) noexcept {
    // Cache modifiers are accepted. Guard pages and unknown flags are not
    // modelled by the current guest fault/exception layer.
    constexpr std::uint32_t kAllowedModifiers = 0x00000600u;
    if ((flags & ~(0x000000FFu | kAllowedModifiers)) != 0) return false;
    switch (flags & 0xFFu) {
    case 0x01u: protection = GuestMemoryProtection::NoAccess; return true;
    case 0x02u: protection = GuestMemoryProtection::ReadOnly; return true;
    case 0x04u:
    case 0x08u: protection = GuestMemoryProtection::ReadWrite; return true;
    default: return false;
    }
}

[[noreturn]] void invalid_guest_memory_call(const char* name,
                                            std::uint32_t address,
                                            std::uint32_t length) {
    std::fprintf(stderr,
                 "[TooHuman] %s received invalid guest range 0x%08X + 0x%08X\n",
                 name, static_cast<unsigned>(address), static_cast<unsigned>(length));
    std::fflush(stderr);
    std::abort();
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

std::optional<std::uint32_t> PpcImportRegistry::allocate_runtime_memory(
    std::size_t bytes, std::size_t alignment) {
    if (!virtual_heap_) return std::nullopt;
    return virtual_heap_->allocate(bytes, alignment);
}

PpcImportRegistry::PpcImportRegistry() = default;

PpcImportRegistry* PpcImportRegistry::active() noexcept {
    return g_active_registry.load(std::memory_order_acquire);
}

bool PpcImportRegistry::initialize_thread_runtime(
    GuestAddressSpace& memory, const LoadedPeImage& image,
    const XexImportResult& xex, const GuestThreadStartup& main_thread,
    std::string* error) {
    std::lock_guard lock(thread_runtime_mutex_);
    if (!installed_ || thread_runtime_) {
        if (error) *error = "Thread runtime requires one installed registry and may only be initialized once";
        return false;
    }
    if (memory_ != &memory || !virtual_heap_ || !stack_heap_ ||
        !virtual_heap_->allocation_size(main_thread.process_info_block_address).has_value()) {
        if (error) *error = "Thread runtime requires the installed memory, heaps and process information block";
        return false;
    }
    try {
        thread_runtime_ = std::make_unique<GuestThreadRuntime>(
            memory, image, xex, *virtual_heap_, *stack_heap_, guest_heap_.get(), main_thread);
    } catch (...) {
        if (error) *error = "Could not allocate the guest thread runtime";
        return false;
    }
    return true;
}

std::uint32_t PpcImportRegistry::create_guest_thread(PPCContext& context,
                                                     std::uint8_t* base) {
    std::lock_guard lock(thread_runtime_mutex_);
    return thread_runtime_ ? thread_runtime_->create_thread(context, base) : 0xC0000002u;
}
std::uint32_t PpcImportRegistry::resume_guest_thread(PPCContext& context,
                                                     std::uint8_t* base) {
    std::lock_guard lock(thread_runtime_mutex_);
    return thread_runtime_ ? thread_runtime_->resume_thread(context, base) : 0xC0000002u;
}
std::uint32_t PpcImportRegistry::resume_guest_kernel_thread(PPCContext& context) {
    std::lock_guard lock(thread_runtime_mutex_);
    return thread_runtime_ ? thread_runtime_->resume_kernel_thread(context) : 0xFFFFFFFFu;
}

PpcImportRegistry::~PpcImportRegistry() {
    // Move the service out under the mutex, then join it without holding the
    // mutex: a worker already inside an HLE handler must be allowed to finish.
    std::unique_ptr<GuestThreadRuntime> stopping_threads;
    {
        std::lock_guard lock(thread_runtime_mutex_);
        stopping_threads = std::move(thread_runtime_);
    }
    stopping_threads.reset();
    // This is the process-scoped singleton handle table. Do not leak event
    // handles across title/registry lifetimes.
    process_kernel_objects().clear();
    // Join before releasing registry-owned state. The worker holds a raw
    // pointer into GuestAddressSpace, whose lifetime is managed by the caller.
    timestamp_thread_.request_stop();
    if (timestamp_thread_.joinable()) timestamp_thread_.join();
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
    if (xex_file.size() < 0x18) {
        set_error(error, "XEX header is truncated while preparing kernel variables");
        return false;
    }
    if (image.image_base != PPC_IMAGE_BASE || image.image_size != PPC_IMAGE_SIZE ||
        image.bytes.size() != image.image_size ||
        static_cast<std::uint64_t>(image.image_base) + image.image_size >
            (std::uint64_t{1} << 32)) {
        set_error(error, "Kernel variable allocator requires the generated Too Human image range");
        return false;
    }

    const auto image_end = static_cast<std::uint64_t>(image.image_base) + image.image_size;
    const auto function_table_end = image_end + 2ull * PPC_CODE_SIZE;
    const auto heap_start = static_cast<std::uint64_t>(kGuestHeapBase);
    const auto heap_end = heap_start + kGuestHeapSize;
    if (heap_start < function_table_end || heap_start < image_end ||
        heap_end > (std::uint64_t{1} << 32)) {
        set_error(error, "Reserved kernel variable heap overlaps the image/function table or exceeds guest VA");
        return false;
    }

    memory_ = &memory;
    image_base_ = image.image_base;
    image_size_ = image.image_size;
    executable_module_handle_ = 0;
    xex_header_guest_address_ = 0;
    xex_header_size_ = 0;
    virtual_heap_ = std::make_unique<GuestHeap>(
        memory, 0xA0000000u, 0x20000000u);
    if (!virtual_heap_->initialize(error)) {
        virtual_heap_.reset();
        return false;
    }
    // Xenia keeps thread stacks in a dedicated guest VA range. Commit only
    // allocated stack pages rather than the full 240 MiB reservation.
    stack_heap_ = std::make_unique<GuestHeap>(memory, 0x70000000u, 0x0F000000u);
    if (!stack_heap_->initialize(error)) {
        stack_heap_.reset();
        virtual_heap_.reset();
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

    guest_heap_ = std::make_unique<GuestHeap>(
        memory, kGuestHeapBase, kGuestHeapSize);
    if (!guest_heap_->initialize(error)) {
        guest_heap_.reset();
        return false;
    }

    const auto xex_header_size = static_cast<std::size_t>(
        (static_cast<std::uint32_t>(xex_file[8]) << 24) |
        (static_cast<std::uint32_t>(xex_file[9]) << 16) |
        (static_cast<std::uint32_t>(xex_file[10]) << 8) |
        static_cast<std::uint32_t>(xex_file[11]));
    if (xex_header_size == 0 || xex_header_size > xex_file.size()) {
        set_error(error, "XEX header size is invalid while creating XexExecutableModuleHandle");
        guest_heap_.reset();
        return false;
    }

    const auto allocate = [&](std::size_t size) -> std::optional<std::uint32_t> {
        const auto address = guest_heap_->allocate(size, 16);
        if (address) std::memset(memory.base() + *address, 0, size);
        return address;
    };

    std::unordered_map<std::uint16_t, std::uint32_t> variable_addresses;
    std::uint32_t timestamp_address = 0;
    for (const auto* item : variables) {
        const auto* spec = find_kernel_variable(item->ordinal);
        if (!spec) {
            set_error(error, "Kernel variable export is missing a size descriptor");
            guest_heap_.reset();
            return false;
        }

        auto storage = allocate(spec->size);
        if (!storage) {
            set_error(error, "Guest heap could not allocate a kernel variable export");
            guest_heap_.reset();
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
                guest_heap_.reset();
                return false;
            }
            std::memcpy(memory.base() + *header_copy, xex_file.data(), xex_header_size);
            xex_header_guest_address_ = *header_copy;
            xex_header_size_ = xex_header_size;
            store_be32(memory.base() + *module_record + 0x58, *header_copy);
            store_be32(bytes, *module_record);
            executable_module_handle_ = *module_record;
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
            guest_heap_.reset();
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
    if (!variables_prepared_) {
        const bool has_unbound_variables = std::any_of(
            imports.begin(), imports.end(), [](const XexImport& item) {
                return item.type == 0 && item.paired_thunk_address == 0;
            });
        if (has_unbound_variables) {
            set_error(error, "Prepare the XEX variable exports before installing function imports");
            return false;
        }
        variables_prepared_ = true;
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

void PpcImportRegistry::dispatch(PPCContext& context, std::uint8_t* base) {
    throw_if_guest_thread_stop_requested();
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
    static const bool trace_imports = std::getenv("TH_TRACE_IMPORTS") != nullptr;
    if (trace_imports) {
        std::fprintf(stderr, "[import] %s#%u r3=%08X r4=%08X r5=%08X r6=%08X lr=%08X\n",
                     import.library.c_str(), static_cast<unsigned>(import.ordinal),
                     static_cast<unsigned>(context.r3.u32), static_cast<unsigned>(context.r4.u32),
                     static_cast<unsigned>(context.r5.u32), static_cast<unsigned>(context.r6.u32),
                     static_cast<unsigned>(context.lr));
    }
    if (binding.handler == nullptr && guest_heap_) {
        if (import.library == "xboxkrnl.exe" && import.ordinal == 0x000B) {
            const auto allocation = guest_heap_->allocate(context.r4.u32, 16);
            context.r3.u32 = allocation.value_or(0);
            return;
        }
        if (import.library == "xboxkrnl.exe" && import.ordinal == 0x00BA) {
            // MmAllocatePhysicalMemoryEx(flags, size, protect, min, max, alignment).
            const auto alignment = std::max<std::uint32_t>(
                context.r8.u32 != 0 ? context.r8.u32 : 0x1000u, 0x1000u);
            const auto allocation = guest_heap_->allocate(context.r4.u32, alignment);
            if (allocation) std::memset(base + *allocation, 0, context.r4.u32);
            context.r3.u32 = allocation.value_or(0);
            return;
        }
        if (import.library == "xboxkrnl.exe" && import.ordinal == 0x000F) {
            (void)guest_heap_->deallocate(context.r3.u32);
            context.r3.u32 = 0;
            return;
        }
        if (import.library == "xam.xex" && import.ordinal == 0x01EA) {
            const auto allocation = guest_heap_->allocate(context.r3.u32, 16);
            context.r3.u32 = allocation.value_or(0);
            return;
        }
        if (import.library == "xam.xex" && import.ordinal == 0x01EC) {
            (void)guest_heap_->deallocate(context.r3.u32);
            context.r3.u32 = 0;
            return;
        }
    }
    if (binding.handler == nullptr && import.library == "xboxkrnl.exe") {
        // These byte-oriented RTL helpers are safe to implement without
        // emulating scheduler, object-manager, or device state. Xbox PPC
        // ULONG values are big-endian in guest memory.
        if (import.ordinal == 0x011B) { // RtlCompareMemoryUlong
            const auto address = context.r3.u32;
            const auto length = context.r4.u32;
            const auto pattern = context.r5.u32;
            const auto word_count = length / 4;
            const auto compared_size = static_cast<std::uint64_t>(word_count) * 4;
            if (!guest_range_valid(address, compared_size))
                invalid_guest_memory_call("RtlCompareMemoryUlong", address, length);
            const auto* source = base + address;
            std::uint32_t matched = 0;
            for (; matched < word_count; ++matched) {
                const auto* word = source + static_cast<std::size_t>(matched) * 4;
                const auto value = (static_cast<std::uint32_t>(word[0]) << 24) |
                                   (static_cast<std::uint32_t>(word[1]) << 16) |
                                   (static_cast<std::uint32_t>(word[2]) << 8) |
                                   static_cast<std::uint32_t>(word[3]);
                if (value != pattern) break;
            }
            // NT returns the matching prefix length in bytes, not a boolean
            // and not the number of ULONGs.
            context.r3.u32 = matched * 4;
            return;
        }
        if (import.ordinal == 0x0126) { // RtlFillMemoryUlong
            const auto address = context.r3.u32;
            const auto length = context.r4.u32;
            const auto pattern = context.r5.u32;
            const auto word_count = length / 4;
            const auto fill_size = static_cast<std::uint64_t>(word_count) * 4;
            if (!guest_range_valid(address, fill_size))
                invalid_guest_memory_call("RtlFillMemoryUlong", address, length);
            auto* destination = base + address;
            for (std::uint32_t i = 0; i < word_count; ++i) {
                auto* word = destination + static_cast<std::size_t>(i) * 4;
                store_be32(word, pattern);
            }
            return;
        }
    }

    if (binding.handler == nullptr &&
        import.library == "xboxkrnl.exe" && import.ordinal == 0x012B) {
        // RtlImageXexHeaderField: inline values (key kind 0/1) are returned
        // by address of their directory entry; larger fields are offsets
        // from the XEX header base. The title's import descriptor is kind FF.
        const auto header = context.r3.u32;
        const auto requested_key = context.r4.u32;
        std::uint32_t result = 0;
        if (header == xex_header_guest_address_ && xex_header_size_ >= 0x18 &&
            guest_range_valid(header, xex_header_size_)) {
            const auto* bytes = base + header;
            const auto count =
                (static_cast<std::uint32_t>(bytes[0x14]) << 24) |
                (static_cast<std::uint32_t>(bytes[0x15]) << 16) |
                (static_cast<std::uint32_t>(bytes[0x16]) << 8) |
                static_cast<std::uint32_t>(bytes[0x17]);
            if (count <= (xex_header_size_ - 0x18) / 8) {
                for (std::uint32_t i = 0; i < count; ++i) {
                    const auto offset = static_cast<std::size_t>(0x18) +
                                        static_cast<std::size_t>(i) * 8;
                    const auto key =
                        (static_cast<std::uint32_t>(bytes[offset]) << 24) |
                        (static_cast<std::uint32_t>(bytes[offset + 1]) << 16) |
                        (static_cast<std::uint32_t>(bytes[offset + 2]) << 8) |
                        static_cast<std::uint32_t>(bytes[offset + 3]);
                    if (key != requested_key) continue;
                    const auto value =
                        (static_cast<std::uint32_t>(bytes[offset + 4]) << 24) |
                        (static_cast<std::uint32_t>(bytes[offset + 5]) << 16) |
                        (static_cast<std::uint32_t>(bytes[offset + 6]) << 8) |
                        static_cast<std::uint32_t>(bytes[offset + 7]);
                    const auto kind = key & 0xFFu;
                    if (kind <= 1u) {
                        result = header + static_cast<std::uint32_t>(offset + 4);
                    } else if (value < xex_header_size_) {
                        std::uint64_t required = kind == 0xFFu
                            ? 4u : static_cast<std::uint64_t>(kind) * 4u;
                        if (required <= xex_header_size_ - value)
                            result = header + value;
                    }
                    break;
                }
            }
        }
        context.r3.u32 = result;
        return;
    }

    if (binding.handler == nullptr &&
        import.library == "xboxkrnl.exe" && import.ordinal == 0x0194) {
        // XexCheckExecutablePrivilege reads the immediate XEX system-flags
        // header (0x00030000). The privilege argument is a bit index.
        const auto privilege = context.r3.u32;
        std::uint32_t system_flags = 0;
        if (xex_header_guest_address_ != 0 && xex_header_size_ >= 0x18 &&
            guest_range_valid(xex_header_guest_address_, xex_header_size_)) {
            const auto* bytes = base + xex_header_guest_address_;
            const auto count =
                (static_cast<std::uint32_t>(bytes[0x14]) << 24) |
                (static_cast<std::uint32_t>(bytes[0x15]) << 16) |
                (static_cast<std::uint32_t>(bytes[0x16]) << 8) |
                static_cast<std::uint32_t>(bytes[0x17]);
            if (count <= (xex_header_size_ - 0x18) / 8) {
                for (std::uint32_t i = 0; i < count; ++i) {
                    const auto offset = static_cast<std::size_t>(0x18) +
                                        static_cast<std::size_t>(i) * 8;
                    const auto key =
                        (static_cast<std::uint32_t>(bytes[offset]) << 24) |
                        (static_cast<std::uint32_t>(bytes[offset + 1]) << 16) |
                        (static_cast<std::uint32_t>(bytes[offset + 2]) << 8) |
                        static_cast<std::uint32_t>(bytes[offset + 3]);
                    if (key != 0x00030000u) continue;
                    system_flags =
                        (static_cast<std::uint32_t>(bytes[offset + 4]) << 24) |
                        (static_cast<std::uint32_t>(bytes[offset + 5]) << 16) |
                        (static_cast<std::uint32_t>(bytes[offset + 6]) << 8) |
                        static_cast<std::uint32_t>(bytes[offset + 7]);
                    break;
                }
            }
        }
        context.r3.u32 = privilege < 32u
            ? ((system_flags >> privilege) & 1u) : 0u;
        return;
    }

    if (binding.handler == nullptr && import.library == "xboxkrnl.exe") {
        constexpr std::uint32_t kStatusSuccess = 0x00000000u;
        constexpr std::uint32_t kStatusUnsuccessful = 0xC0000001u;
        constexpr std::uint32_t kStatusAccessViolation = 0xC0000005u;
        constexpr std::uint32_t kStatusInvalidParameter = 0xC000000Du;
        constexpr std::uint32_t kStatusNoMemory = 0xC0000017u;
        constexpr std::uint32_t kStatusMemoryNotAllocated = 0xC00000A0u;
        constexpr std::uint32_t kStatusNotSupported = 0xC00000BBu;
        constexpr std::uint32_t kStatusAccessDenied = 0xC0000022u;
        constexpr std::uint32_t kStatusInvalidPageProtection = 0xC0000045u;
        constexpr std::uint32_t kMemCommit = 0x00001000u;
        constexpr std::uint32_t kMemReserve = 0x00002000u;
        constexpr std::uint32_t kMemDecommit = 0x00004000u;
        constexpr std::uint32_t kMemRelease = 0x00008000u;
        constexpr std::uint32_t kMemReset = 0x00080000u;
        constexpr std::uint32_t kMemNoZero = 0x00800000u;
        constexpr std::uint32_t kMemLargePages = 0x20000000u;

        const auto heap_contains_allocated_range = [&](const GuestHeap& heap,
                                                       std::uint32_t address,
                                                       std::uint64_t length) {
            const auto allocation = heap.allocation_containing(address);
            if (!allocation || address < allocation->first) return false;
            const auto allocation_end = static_cast<std::uint64_t>(allocation->first) +
                                        allocation->second;
            const auto requested_end = static_cast<std::uint64_t>(address) + length;
            return requested_end <= allocation_end;
        };
        const auto valid_guest_buffer = [&](std::uint32_t address,
                                            std::uint64_t length) {
            if (!guest_range_valid(address, length) ||
                length > std::numeric_limits<std::size_t>::max() ||
                memory_ == nullptr ||
                !GuestAddressSpace::is_accessible_range(
                    base, address, static_cast<std::size_t>(length),
                    GuestMemoryAccess::Write)) return false;
            const auto end = static_cast<std::uint64_t>(address) + length;
            const auto image_end = static_cast<std::uint64_t>(image_base_) + image_size_;
            if (address >= image_base_ && end <= image_end) return true;
            if (guest_heap_ && heap_contains_allocated_range(*guest_heap_, address, length))
                return true;
            if (virtual_heap_ && heap_contains_allocated_range(*virtual_heap_, address, length))
                return true;
            return stack_heap_ && heap_contains_allocated_range(*stack_heap_, address, length);
        };

        if (import.ordinal == 0x00CC) { // NtAllocateVirtualMemory
            std::lock_guard region_lock(virtual_memory_regions_mutex_);
            const auto base_pointer = context.r3.u32;
            const auto size_pointer = context.r4.u32;
            if (!valid_guest_buffer(base_pointer, 4) ||
                !valid_guest_buffer(size_pointer, 4)) {
                context.r3.u32 = kStatusAccessViolation;
                return;
            }
            const auto requested_base = load_be32(base + base_pointer);
            const auto requested_size = load_be32(base + size_pointer);
            const auto allocation_type = context.r5.u32;
            const auto protection = context.r6.u32;
            const auto debug_memory = context.r7.u32;
            const bool reserve_requested = (allocation_type & kMemReserve) != 0;
            const bool commit_requested = (allocation_type & kMemCommit) != 0;
            GuestMemoryProtection host_protection{};
            if (debug_memory != 0 || requested_size == 0 ||
                (allocation_type & kMemReset) != 0 ||
                (!reserve_requested && !commit_requested)) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            if (commit_requested && !reserve_requested && requested_base == 0) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            if ((protection & 0xF0u) != 0) {
                context.r3.u32 = kStatusAccessDenied;
                return;
            }
            if (!translate_guest_protection(protection, host_protection)) {
                context.r3.u32 = kStatusInvalidPageProtection;
                return;
            }

            const auto page_size = static_cast<std::uint32_t>(std::max<std::size_t>(
                GuestAddressSpace::page_size(),
                (allocation_type & kMemLargePages) ? 0x10000u : 0x1000u));
            const auto adjusted_base = requested_base == 0
                ? 0u : requested_base & ~(page_size - 1u);
            const auto rounded_size =
                (static_cast<std::uint64_t>(requested_size) + page_size - 1u) &
                ~(static_cast<std::uint64_t>(page_size) - 1u);
            if (rounded_size == 0 || rounded_size > 0xFFFFFFFFu) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }

            if (commit_requested && !reserve_requested) {
                // MEM_COMMIT inside a region reserved by an earlier call.
                for (auto& [region_base, region] : virtual_memory_regions_) {
                    const auto region_end =
                        static_cast<std::uint64_t>(region_base) + region.size;
                    const auto requested_end =
                        static_cast<std::uint64_t>(adjusted_base) + rounded_size;
                    if (adjusted_base < region_base || requested_end > region_end)
                        continue;
                    if (page_size != region.page_size) {
                        context.r3.u32 = kStatusInvalidParameter;
                        return;
                    }

                    const auto range_begin = adjusted_base - region_base;
                    const auto range_end = static_cast<std::uint32_t>(
                        requested_end - region_base);
                    const auto old_range = std::find_if(
                        region.protections.begin(), region.protections.end(),
                        [range_begin](const VirtualMemoryProtectionRange& range) {
                            return range_begin >= range.offset &&
                                   range_begin < static_cast<std::uint64_t>(range.offset) + range.size;
                        });
                    if (old_range == region.protections.end()) {
                        context.r3.u32 = kStatusMemoryNotAllocated;
                        return;
                    }

                    if (memory_ == nullptr ||
                        !memory_->protect_region(adjusted_base,
                                                 static_cast<std::size_t>(rounded_size),
                                                 host_protection, nullptr)) {
                        context.r3.u32 = kStatusAccessDenied;
                        return;
                    }
                    if ((allocation_type & kMemNoZero) == 0) {
                        // MEM_COMMIT is idempotent for pages already committed.
                        // Zero only newly committed (previously reserved) spans.
                        for (const auto& range : region.protections) {
                            if (range.committed) continue;
                            const auto range_begin_old =
                                static_cast<std::uint64_t>(range.offset);
                            const auto range_end_old = range_begin_old + range.size;
                            const auto zero_begin = std::max(
                                range_begin_old, static_cast<std::uint64_t>(range_begin));
                            const auto zero_end = std::min(
                                range_end_old, static_cast<std::uint64_t>(range_end));
                            if (zero_begin >= zero_end) continue;
                            const auto guest_zero = static_cast<std::uint32_t>(
                                static_cast<std::uint64_t>(region_base) + zero_begin);
                            std::memset(base + guest_zero, 0,
                                        static_cast<std::size_t>(zero_end - zero_begin));
                        }
                    }

                    std::vector<VirtualMemoryProtectionRange> updated;
                    updated.reserve(region.protections.size() + 2u);
                    for (const auto& range : region.protections) {
                        const auto begin = static_cast<std::uint64_t>(range.offset);
                        const auto end = begin + range.size;
                        if (end <= range_begin || begin >= range_end) {
                            updated.push_back(range);
                            continue;
                        }
                        if (begin < range_begin) {
                            updated.push_back({range.offset,
                                static_cast<std::uint32_t>(range_begin - begin),
                                range.protection, range.committed});
                        }
                        const auto overlap_begin = std::max(begin,
                            static_cast<std::uint64_t>(range_begin));
                        const auto overlap_end = std::min(end,
                            static_cast<std::uint64_t>(range_end));
                        updated.push_back({static_cast<std::uint32_t>(overlap_begin),
                            static_cast<std::uint32_t>(overlap_end - overlap_begin),
                            protection, true});
                        if (end > range_end) {
                            updated.push_back({range_end,
                                static_cast<std::uint32_t>(end - range_end),
                                range.protection, range.committed});
                        }
                    }

                    std::vector<VirtualMemoryProtectionRange> merged;
                    merged.reserve(updated.size());
                    for (const auto& range : updated) {
                        if (!merged.empty() &&
                            merged.back().protection == range.protection &&
                            merged.back().committed == range.committed &&
                            static_cast<std::uint64_t>(merged.back().offset) +
                                merged.back().size == range.offset) {
                            merged.back().size += range.size;
                        } else {
                            merged.push_back(range);
                        }
                    }
                    region.protections = std::move(merged);

                    store_be32(base + base_pointer, adjusted_base);
                    store_be32(base + size_pointer,
                               static_cast<std::uint32_t>(rounded_size));
                    context.r3.u32 = kStatusSuccess;
                    return;
                }
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }

            std::optional<std::uint32_t> allocation;
            if (adjusted_base == 0) {
                allocation = virtual_heap_->allocate(
                    static_cast<std::size_t>(rounded_size), page_size);
            } else {
                allocation = virtual_heap_->allocate_at(
                    adjusted_base, static_cast<std::size_t>(rounded_size), page_size);
            }
            if (!allocation) {
                context.r3.u32 = kStatusNoMemory;
                return;
            }
            if (commit_requested && (allocation_type & kMemNoZero) == 0) {
                std::memset(base + *allocation, 0,
                            static_cast<std::size_t>(rounded_size));
            }
            const auto initial_host_protection = commit_requested
                ? host_protection : GuestMemoryProtection::NoAccess;
            if (memory_ == nullptr ||
                !memory_->protect_region(*allocation,
                                         static_cast<std::size_t>(rounded_size),
                                         initial_host_protection, nullptr)) {
                (void)virtual_heap_->deallocate(*allocation);
                context.r3.u32 = kStatusAccessDenied;
                return;
            }

            VirtualMemoryRegion region{};
            region.size = static_cast<std::uint32_t>(rounded_size);
            region.page_size = page_size;
            region.allocation_protect = protection;
            region.protections.push_back(
                {0u, region.size, protection, commit_requested});
            const auto [it, inserted] =
                virtual_memory_regions_.emplace(*allocation, std::move(region));
            (void)it;
            if (!inserted) {
                (void)memory_->protect_region(
                    *allocation, static_cast<std::size_t>(rounded_size),
                    GuestMemoryProtection::ReadWrite, nullptr);
                (void)virtual_heap_->deallocate(*allocation);
                context.r3.u32 = kStatusUnsuccessful;
                return;
            }

            store_be32(base + base_pointer, *allocation);
            store_be32(base + size_pointer, static_cast<std::uint32_t>(rounded_size));
            context.r3.u32 = kStatusSuccess;
            return;
        }

        if (import.ordinal == 0x00DC) { // NtFreeVirtualMemory
            std::lock_guard region_lock(virtual_memory_regions_mutex_);
            const auto base_pointer = context.r3.u32;
            const auto size_pointer = context.r4.u32;
            if (!valid_guest_buffer(base_pointer, 4) ||
                !valid_guest_buffer(size_pointer, 4)) {
                context.r3.u32 = kStatusAccessViolation;
                return;
            }
            const auto guest_address = load_be32(base + base_pointer);
            const auto region_size = load_be32(base + size_pointer);
            const auto free_type = context.r5.u32;
            const auto debug_memory = context.r6.u32;
            if (debug_memory != 0 || guest_address == 0) {
                context.r3.u32 = guest_address == 0
                    ? kStatusMemoryNotAllocated : kStatusInvalidParameter;
                return;
            }
            if (free_type == kMemDecommit) {
                // Decommit must preserve the reservation. The current heap
                // allocator models whole reservations, so do not fake success.
                context.r3.u32 = kStatusNotSupported;
                return;
            }
            if (free_type != kMemRelease || region_size != 0) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            const auto region_it = virtual_memory_regions_.find(guest_address);
            if (region_it == virtual_memory_regions_.end()) {
                context.r3.u32 = kStatusUnsuccessful;
                return;
            }
            const auto allocation = virtual_heap_->allocation_containing(guest_address);
            if (!allocation || allocation->first != guest_address ||
                !virtual_heap_->deallocate(guest_address)) {
                context.r3.u32 = kStatusUnsuccessful;
                return;
            }
            store_be32(base + size_pointer,
                       static_cast<std::uint32_t>(allocation->second));
            virtual_memory_regions_.erase(region_it);
            context.r3.u32 = kStatusSuccess;
            return;
        }

        if (import.ordinal == 0x00E1) { // NtProtectVirtualMemory
            std::lock_guard region_lock(virtual_memory_regions_mutex_);
            const auto base_pointer = context.r3.u32;
            const auto size_pointer = context.r4.u32;
            const auto old_protection_pointer = context.r6.u32;
            if (!valid_guest_buffer(base_pointer, 4) ||
                !valid_guest_buffer(size_pointer, 4) ||
                (old_protection_pointer != 0 &&
                 !valid_guest_buffer(old_protection_pointer, 4))) {
                context.r3.u32 = kStatusAccessViolation;
                return;
            }

            const auto requested_base = load_be32(base + base_pointer);
            const auto requested_size = load_be32(base + size_pointer);
            const auto new_protection = context.r5.u32;
            if (requested_size == 0 || context.r7.u32 != 0) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            if ((new_protection & 0xF0u) != 0) {
                context.r3.u32 = kStatusAccessDenied;
                return;
            }
            GuestMemoryProtection host_protection{};
            if (!translate_guest_protection(new_protection, host_protection)) {
                context.r3.u32 = kStatusInvalidPageProtection;
                return;
            }

            const auto allocation = virtual_heap_->allocation_containing(requested_base);
            if (!allocation) {
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }
            const auto region_it = virtual_memory_regions_.find(allocation->first);
            if (region_it == virtual_memory_regions_.end()) {
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }
            auto& region = region_it->second;
            if (region.page_size == 0) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            const std::uint64_t page_mask =
                static_cast<std::uint64_t>(region.page_size) - 1u;
            const std::uint64_t raw_end =
                static_cast<std::uint64_t>(requested_base) + requested_size;
            if (raw_end > GuestAddressSpace::kSize) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            const auto aligned_base = static_cast<std::uint64_t>(requested_base) & ~page_mask;
            const auto aligned_end = (raw_end + page_mask) & ~page_mask;
            const auto allocation_end =
                static_cast<std::uint64_t>(allocation->first) + allocation->second;
            if (aligned_end > GuestAddressSpace::kSize || aligned_end <= aligned_base ||
                aligned_base < allocation->first || aligned_end > allocation_end ||
                aligned_end - aligned_base > 0xFFFFFFFFu) {
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }

            const auto range_begin = static_cast<std::uint32_t>(aligned_base - allocation->first);
            const auto range_end = static_cast<std::uint32_t>(aligned_end - allocation->first);
            const auto current = std::find_if(
                region.protections.begin(), region.protections.end(),
                [range_begin](const VirtualMemoryProtectionRange& range) {
                    return range_begin >= range.offset &&
                           range_begin < static_cast<std::uint64_t>(range.offset) + range.size;
                });
            if (current == region.protections.end()) {
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }
            std::uint64_t committed_cursor = range_begin;
            for (const auto& range : region.protections) {
                const auto range_begin_old = static_cast<std::uint64_t>(range.offset);
                const auto range_end_old = range_begin_old + range.size;
                if (range_end_old <= committed_cursor) continue;
                if (range_begin_old > committed_cursor || !range.committed) break;
                committed_cursor = std::min<std::uint64_t>(range_end_old, range_end);
                if (committed_cursor == range_end) break;
            }
            if (committed_cursor != range_end) {
                context.r3.u32 = kStatusMemoryNotAllocated;
                return;
            }

            const auto old_protection = current->protection;
            if (memory_ == nullptr ||
                !memory_->protect_region(static_cast<std::uint32_t>(aligned_base),
                                         static_cast<std::size_t>(aligned_end - aligned_base),
                                         host_protection, nullptr)) {
                context.r3.u32 = kStatusAccessDenied;
                return;
            }

            std::vector<VirtualMemoryProtectionRange> updated;
            updated.reserve(region.protections.size() + 2);
            for (const auto& range : region.protections) {
                const auto range_begin_old = static_cast<std::uint64_t>(range.offset);
                const auto range_end_old = range_begin_old + range.size;
                if (range_end_old <= range_begin || range_begin_old >= range_end) {
                    updated.push_back(range);
                    continue;
                }
                if (range_begin_old < range_begin) {
                    updated.push_back({range.offset,
                        static_cast<std::uint32_t>(range_begin - range_begin_old),
                        range.protection, range.committed});
                }
                const auto overlap_begin = std::max(range_begin_old,
                                                    static_cast<std::uint64_t>(range_begin));
                const auto overlap_end = std::min(range_end_old,
                                                  static_cast<std::uint64_t>(range_end));
                updated.push_back({static_cast<std::uint32_t>(overlap_begin),
                    static_cast<std::uint32_t>(overlap_end - overlap_begin),
                    new_protection, range.committed});
                if (range_end_old > range_end) {
                    updated.push_back({static_cast<std::uint32_t>(range_end),
                        static_cast<std::uint32_t>(range_end_old - range_end),
                        range.protection, range.committed});
                }
            }

            std::vector<VirtualMemoryProtectionRange> merged;
            merged.reserve(updated.size());
            for (const auto& range : updated) {
                if (!merged.empty() &&
                    merged.back().protection == range.protection &&
                    merged.back().committed == range.committed &&
                    static_cast<std::uint64_t>(merged.back().offset) +
                        merged.back().size == range.offset) {
                    merged.back().size += range.size;
                } else {
                    merged.push_back(range);
                }
            }
            region.protections = std::move(merged);

            if (old_protection_pointer != 0)
                store_be32(base + old_protection_pointer, old_protection);
            store_be32(base + base_pointer, static_cast<std::uint32_t>(aligned_base));
            store_be32(base + size_pointer,
                       static_cast<std::uint32_t>(aligned_end - aligned_base));
            context.r3.u32 = kStatusSuccess;
            return;
        }

        if (import.ordinal == 0x00EE) { // NtQueryVirtualMemory
            std::lock_guard region_lock(virtual_memory_regions_mutex_);
            const auto guest_address = context.r3.u32;
            const auto information_pointer = context.r4.u32;
            constexpr std::uint32_t kMemoryBasicInformationSize = 28;
            if (!valid_guest_buffer(information_pointer, kMemoryBasicInformationSize)) {
                context.r3.u32 = kStatusAccessViolation;
                return;
            }
            const auto allocation = virtual_heap_->allocation_containing(guest_address);
            if (!allocation) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            const auto region_it = virtual_memory_regions_.find(allocation->first);
            if (region_it == virtual_memory_regions_.end()) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            const auto offset = guest_address - allocation->first;
            const auto& region = region_it->second;
            const auto protection_it = std::find_if(
                region.protections.begin(), region.protections.end(),
                [offset](const VirtualMemoryProtectionRange& range) {
                    return offset >= range.offset &&
                           static_cast<std::uint64_t>(offset) <
                               static_cast<std::uint64_t>(range.offset) + range.size;
                });
            if (protection_it == region.protections.end()) {
                context.r3.u32 = kStatusInvalidParameter;
                return;
            }
            store_be32(base + information_pointer + 0,
                       allocation->first + protection_it->offset);
            store_be32(base + information_pointer + 4, allocation->first);
            store_be32(base + information_pointer + 8, region.allocation_protect);
            store_be32(base + information_pointer + 12, protection_it->size);
            store_be32(base + information_pointer + 16,
                       protection_it->committed ? kMemCommit : kMemReserve);
            store_be32(base + information_pointer + 20,
                       protection_it->committed ? protection_it->protection : 0u);
            store_be32(base + information_pointer + 24, 0x00020000u); // MEM_PRIVATE
            context.r3.u32 = kStatusSuccess;
            return;
        }
    }

    if (binding.handler == nullptr) {
        const auto resolved_name = lookup_title_export_name(import.library, import.ordinal);
        const auto export_name = resolved_name.empty()
            ? std::string_view("<unknown>") : resolved_name;
        std::fprintf(stderr,
                     "[TooHuman] Unimplemented import %s!%.*s ordinal 0x%04X "
                     "(thunk=0x%08X, LR=0x%016llX, r3=0x%08X, r4=0x%08X, "
                     "r5=0x%08X, r6=0x%08X)\n",
                     import.library.c_str(),
                     static_cast<int>(export_name.size()),
                     export_name.data(),
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
