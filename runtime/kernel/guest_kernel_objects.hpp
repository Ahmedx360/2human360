#pragma once
#include <chrono>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <span>
#include <thread>
#include <unordered_map>
namespace toohuman::runtime {
using GuestKernelHandle = std::uint32_t;
enum class GuestKernelObjectType { Event, Semaphore, Mutant, Timer, Thread, File };
enum class GuestKernelObjectWaitResult { Signaled, Timeout, InvalidHandle };
// Wake threads blocked in multi-object dispatcher waits after an object changes state.
void notify_guest_kernel_object_waiters() noexcept;
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
    explicit GuestEventObject(bool manual_reset, bool initially_signaled = false,
                              std::uint32_t guest_object_address = 0);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override;
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override;
    [[nodiscard]] bool set();
    [[nodiscard]] bool reset();
    [[nodiscard]] bool pulse();
    void clear();
    [[nodiscard]] bool is_signaled() noexcept;
    [[nodiscard]] std::size_t waiting_count() noexcept;
    [[nodiscard]] std::uint32_t guest_object_address() const noexcept override {
        return guest_object_address_;
    }
private:
    friend class GuestKernelObjectTable;
    const bool manual_reset_;
    const std::uint32_t guest_object_address_{};
    bool signaled_{};
    std::size_t waiting_count_{};
    std::uint64_t pulse_generation_{};
    std::size_t pulse_tokens_{};
    std::mutex mutex_;
    std::condition_variable condition_;
};
class GuestSemaphoreObject final : public GuestKernelObject {
public:
    GuestSemaphoreObject(std::uint32_t initial_count, std::uint32_t maximum_count,
                         std::uint32_t guest_object_address = 0);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override;
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override;
    // Returns false for zero adjustment or an attempt to exceed the limit.
    // previous_count is populated on success and failure.
    [[nodiscard]] bool release(std::uint32_t adjustment,
                               std::uint32_t& previous_count) noexcept;
    [[nodiscard]] std::uint32_t count() const noexcept;
    [[nodiscard]] std::uint32_t maximum_count() const noexcept {
        return maximum_count_;
    }
    [[nodiscard]] std::uint32_t guest_object_address() const noexcept override {
        return guest_object_address_;
    }
private:
    friend class GuestKernelObjectTable;
    std::uint32_t count_{};
    const std::uint32_t maximum_count_{};
    const std::uint32_t guest_object_address_{};
    mutable std::mutex mutex_;
    std::condition_variable condition_;
};

class GuestMutantObject final : public GuestKernelObject {
public:
    explicit GuestMutantObject(bool initially_owned = false);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override;
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override;
    // A mutant may only be released by its current owner. Recursive acquisition
    // is supported and requires the same number of releases.
    [[nodiscard]] bool release() noexcept;
    [[nodiscard]] std::uint32_t recursion_count() noexcept;
private:
    friend class GuestKernelObjectTable;
    std::thread::id owner_{};
    std::uint32_t recursion_count_{};
    std::mutex mutex_;
    std::condition_variable condition_;
};

class GuestTimerObject final : public GuestKernelObject {
public:
    explicit GuestTimerObject(bool manual_reset);
    [[nodiscard]] GuestKernelObjectType type() const noexcept override;
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        std::optional<std::chrono::milliseconds> timeout) override;
    void set_timer(std::chrono::milliseconds due_delay, std::uint32_t period_ms);
    [[nodiscard]] bool cancel() noexcept;
    [[nodiscard]] bool is_armed() noexcept;
private:
    friend class GuestKernelObjectTable;
    [[nodiscard]] static std::chrono::steady_clock::time_point add_saturated(
        std::chrono::steady_clock::time_point now,
        std::chrono::milliseconds delay) noexcept;
    const bool manual_reset_;
    bool signaled_{};
    bool armed_{};
    std::uint32_t period_ms_{};
    std::chrono::steady_clock::time_point due_time_{};
    mutable std::mutex mutex_;
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
    // Atomically duplicate a handle; optionally close its source in the same operation.
    [[nodiscard]] std::optional<GuestKernelHandle> duplicate(
        GuestKernelHandle source, bool close_source = false);
    // Removes every handle that refers to the supplied object, used by owner teardown.
    [[nodiscard]] bool close_object(const std::shared_ptr<GuestKernelObject>& object);
    // Close every remaining object during process teardown. Callbacks run unlocked.
    void clear();
    [[nodiscard]] GuestKernelObjectWaitResult wait(
        GuestKernelHandle handle,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt) const;
    // Wait on up to 64 handles. Acquisition of the supported dispatcher objects
    // is performed while their state locks are held together, so WaitAll does not
    // consume a partial set when another object is not ready.
    [[nodiscard]] GuestKernelObjectWaitResult wait_multiple(
        std::span<const GuestKernelHandle> handles, bool wait_all,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt,
        std::size_t* signaled_index = nullptr) const;
    [[nodiscard]] GuestKernelObjectWaitResult wait_multiple_objects(
        std::span<const std::shared_ptr<GuestKernelObject>> objects, bool wait_all,
        std::optional<std::chrono::milliseconds> timeout = std::nullopt,
        std::size_t* signaled_index = nullptr) const;
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
