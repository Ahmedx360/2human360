#include "memory/guest_mmio.hpp"

#include <algorithm>

namespace toohuman::runtime {
namespace {

bool supported_width(std::uint8_t width) noexcept {
    return width == 1 || width == 2 || width == 4 || width == 8;
}

} // namespace

GuestMmioBus& GuestMmioBus::global() noexcept {
    static GuestMmioBus bus;
    return bus;
}

bool GuestMmioBus::device_for(std::uint32_t address, std::size_t width,
                              GuestMmioDevice& device) noexcept {
    if (width == 0) return false;
    const auto end = static_cast<std::uint64_t>(address) + width;
    const auto xenos_end = static_cast<std::uint64_t>(kXenosMmioBase) +
                           kGuestMmioWindowSize;
    const auto xma_end = static_cast<std::uint64_t>(kXmaMmioBase) +
                         kGuestMmioWindowSize;
    if (address >= kXenosMmioBase && end <= xenos_end) {
        device = GuestMmioDevice::Xenos;
        return true;
    }
    if (address >= kXmaMmioBase && end <= xma_end) {
        device = GuestMmioDevice::Xma;
        return true;
    }
    return false;
}

bool GuestMmioBus::handles(std::uint32_t address, std::size_t width) noexcept {
    GuestMmioDevice ignored{};
    return device_for(address, width, ignored);
}

bool GuestMmioBus::resolve(std::uint32_t address, std::uint8_t width,
                           GuestMmioDevice& device,
                           std::uint32_t& offset) const noexcept {
    if (!supported_width(width) || !device_for(address, width, device))
        return false;
    const auto base = device == GuestMmioDevice::Xenos
        ? kXenosMmioBase : kXmaMmioBase;
    offset = address - base;
    return true;
}

void GuestMmioBus::record_locked(const GuestMmioAccess& access) noexcept {
    trace_[trace_next_] = access;
    trace_next_ = (trace_next_ + 1) % trace_.size();
    if (trace_count_ < trace_.size()) ++trace_count_;
    else ++dropped_trace_entries_;
}

std::uint64_t GuestMmioBus::read(std::uint32_t address,
                                 std::uint8_t width) noexcept {
    GuestMmioDevice device{};
    std::uint32_t offset = 0;
    if (!resolve(address, width, device, offset)) return 0;

    std::lock_guard lock(mutex_);
    const auto& bytes = device == GuestMmioDevice::Xenos ? xenos_ : xma_;
    std::uint64_t value = 0;
    for (std::uint8_t i = 0; i < width; ++i)
        value = (value << 8) | bytes[offset + i];
    record_locked({next_sequence_++, address, value, device, width, false});
    return value;
}

bool GuestMmioBus::write(std::uint32_t address, std::uint8_t width,
                         std::uint64_t value) noexcept {
    GuestMmioDevice device{};
    std::uint32_t offset = 0;
    if (!resolve(address, width, device, offset)) return false;

    std::lock_guard lock(mutex_);
    auto& bytes = device == GuestMmioDevice::Xenos ? xenos_ : xma_;
    for (std::uint8_t i = 0; i < width; ++i) {
        const auto shift = static_cast<unsigned>((width - 1u - i) * 8u);
        bytes[offset + i] = static_cast<std::uint8_t>(value >> shift);
    }
    const auto mask = width == 8 ? ~std::uint64_t{0}
        : ((std::uint64_t{1} << (width * 8u)) - 1u);
    record_locked({next_sequence_++, address, value & mask, device, width, true});
    return true;
}

std::vector<GuestMmioAccess> GuestMmioBus::trace() const {
    std::lock_guard lock(mutex_);
    std::vector<GuestMmioAccess> result;
    result.reserve(trace_count_);
    const auto first = trace_count_ == trace_.size() ? trace_next_ : 0;
    for (std::size_t i = 0; i < trace_count_; ++i)
        result.push_back(trace_[(first + i) % trace_.size()]);
    return result;
}

std::uint64_t GuestMmioBus::dropped_trace_entries() const noexcept {
    std::lock_guard lock(mutex_);
    return dropped_trace_entries_;
}

void GuestMmioBus::reset() noexcept {
    std::lock_guard lock(mutex_);
    xenos_.fill(0);
    xma_.fill(0);
    trace_.fill({});
    trace_next_ = 0;
    trace_count_ = 0;
    next_sequence_ = 1;
    dropped_trace_entries_ = 0;
}

std::uint64_t guest_mmio_read(std::uint32_t address,
                              std::uint8_t width) noexcept {
    return GuestMmioBus::global().read(address, width);
}

void guest_mmio_write(std::uint32_t address, std::uint8_t width,
                      std::uint64_t value) noexcept {
    (void)GuestMmioBus::global().write(address, width, value);
}

} // namespace toohuman::runtime
