#pragma once
#include "kernel/guest_kernel_objects.hpp"
#include "ppc/title_runtime.hpp"
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <optional>
#include <stop_token>
#include <string>
#include <thread>
#include <vector>
namespace toohuman::runtime {
using GuestThreadHandle = GuestKernelHandle;
using GuestThreadWaitResult = GuestKernelObjectWaitResult;
enum class GuestThreadLifecycleState { Suspended, Running, Completed };
class GuestThreadManager final {
public:
    using Entry = std::function<std::uint32_t(GuestThreadStartup&, std::stop_token)>;
    using Cleanup = std::function<void(GuestThreadStartup&)>;
    static constexpr std::uint32_t kStillActive = 259u;
    static constexpr std::uint32_t kStatusThreadIsTerminating = 0xC000004Bu;
    static constexpr std::uint32_t kStatusUnsuccessful = 0xC0000001u;
    GuestThreadManager() noexcept;
    // The supplied object table must outlive this manager.
    explicit GuestThreadManager(GuestKernelObjectTable& object_table) noexcept;
    ~GuestThreadManager();
    GuestThreadManager(const GuestThreadManager&) = delete;
    GuestThreadManager& operator=(const GuestThreadManager&) = delete;
    [[nodiscard]] std::optional<GuestThreadHandle> create(
        GuestThreadStartup startup, Entry entry, bool initially_suspended = false,
        std::string* error = nullptr, Cleanup cleanup = {});
    [[nodiscard]] bool resume(GuestThreadHandle handle,
                              std::uint32_t* previous_count = nullptr,
                              std::string* error = nullptr);
    [[nodiscard]] GuestThreadWaitResult wait(
        GuestThreadHandle handle,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt);
    [[nodiscard]] bool get_state(
        GuestThreadHandle handle, GuestThreadLifecycleState& state,
        std::uint32_t* suspend_count = nullptr) const;
    [[nodiscard]] bool get_exit_code(GuestThreadHandle handle,
                                     std::uint32_t& exit_code) const;
    [[nodiscard]] bool close_handle(GuestThreadHandle handle);
private:
    struct Record;
    [[nodiscard]] std::shared_ptr<Record> find_thread(GuestThreadHandle handle) const;
    void reap_completed_workers();
    mutable std::mutex mutex_;
    GuestKernelObjectTable owned_object_table_;
    GuestKernelObjectTable* object_table_{};
    std::vector<std::shared_ptr<Record>> workers_;
    std::vector<GuestKernelHandle> owned_handles_;
    bool shutting_down_{};
};
} // namespace toohuman::runtime
