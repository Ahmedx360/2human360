#pragma once
#include <chrono>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <unordered_map>
namespace toohuman::runtime {
using GuestKernelHandle = std::uint32_t;
enum class GuestKernelObjectType { Event, Thread, File };
enum class GuestKernelObjectWaitResult { Signaled, Timeout, InvalidHandle };
class GuestKernelObject {
public:
    virtual ~GuestKernelObject() = default;
    [[nodiscard]] virtual GuestKernelObjectType type() const noexcept = 0;
    [[nodiscard]] virtual GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) = 0;
    // Called after the handle is removed from the table, without its mutex held.
    virtual void on_handle_closed() noexcept {}
    // Guest-visible object body address (e.g. KTHREAD), or 0 when none exists.
    [[nodiscard]] virtual std::uint32_t guest_object_address() const noexcept { return 0; }
};
class GuestEventObject final : public GuestKernelObject {
public:
    explicit GuestEventObject(bool manual_reset, bool initially_signaled = false);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override;
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override;
    [[nodiscard]] bool set();
    void clear();
private:
    const bool manual_reset_;
    bool signaled_{};
    std::mutex mutex_;
    std::condition_variable condition_;
};
// Closing a handle removes future lookup access; existing references remain alive.
class GuestKernelObjectTable final {
public:
    GuestKernelObjectTable() = default;
    ~GuestKernelObjectTable();
    GuestKernelObjectTable(const GuestKernelObjectTable&) = delete;
    GuestKernelObjectTable& operator=(const GuestKernelObjectTable&) = delete;
    [[nodiscard]] std::optional<GuestKernelHandle> insert(std::shared_ptr<GuestKernelObject> object);
    // Insert at a guest ABI-visible value (e.g. a native KTHREAD address).
    [[nodiscard]] bool insert_at(GuestKernelHandle handle,
                                 std::shared_ptr<GuestKernelObject> object);
    [[nodiscard]] std::shared_ptr<GuestKernelObject> lookup(GuestKernelHandle handle) const;
    [[nodiscard]] bool close(GuestKernelHandle handle);
    // Removes every handle that refers to the supplied object, used by owner teardown.
    [[nodiscard]] bool close_object(const std::shared_ptr<GuestKernelObject>& object);
    // Close every remaining object during process teardown. Callbacks run unlocked.
    void clear();
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        GuestKernelHandle handle,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt) const;
    [[nodiscard]] std::size_t size() const;
private:
    struct ObjectHandleState {
        std::weak_ptr<GuestKernelObject> object;
        std::size_t open_handles{};
        bool closed{};
    };
    [[nodiscard]] bool add_handle_reference_locked(
        const std::shared_ptr<GuestKernelObject>& object);
    mutable std::mutex mutex_;
    std::unordered_map<GuestKernelHandle, std::shared_ptr<GuestKernelObject>> objects_;
    std::unordered_map<GuestKernelObject*, ObjectHandleState> object_handle_states_;
    GuestKernelHandle next_handle_{0x1000u};
};
[[nodiscard]] GuestKernelObjectTable& process_kernel_objects() noexcept;
} // namespace toohuman::runtime
