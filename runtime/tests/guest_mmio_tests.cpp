#include "memory/guest_mmio.hpp"

#include <cassert>
#include <cstdint>
#include <vector>

int main() {
    using namespace toohuman::runtime;
    auto& bus = GuestMmioBus::global();
    bus.reset();

    assert(GuestMmioBus::handles(kXenosMmioBase, 1));
    assert(GuestMmioBus::handles(kXenosMmioBase + 0xFFF8u, 8));
    assert(GuestMmioBus::handles(kXmaMmioBase, 4));
    assert(!GuestMmioBus::handles(kXenosMmioBase - 1u, 1));
    assert(!GuestMmioBus::handles(kXenosMmioBase + kGuestMmioWindowSize - 1u, 2));
    assert(!GuestMmioBus::handles(kXmaMmioBase + kGuestMmioWindowSize, 1));

    GuestMmioDevice device{};
    assert(GuestMmioBus::device_for(kXenosMmioBase + 0x20u, 4, device));
    assert(device == GuestMmioDevice::Xenos);
    assert(GuestMmioBus::device_for(kXmaMmioBase + 0x20u, 4, device));
    assert(device == GuestMmioDevice::Xma);

    constexpr std::uint32_t reg = kXenosMmioBase + 0x20u;
    assert(bus.read(reg, 4) == 0u); // Unwritten registers are deterministic zero.
    assert(bus.write(reg, 4, 0x11223344u));
    assert(bus.read(reg, 4) == 0x11223344u);
    assert(bus.read(reg + 1u, 1) == 0x22u); // Guest big-endian byte lane.
    assert(bus.read(reg + 2u, 2) == 0x3344u);
    assert(bus.write(reg + 2u, 2, 0xAABBu));
    assert(bus.read(reg, 4) == 0x1122AABBu);
    assert(bus.write(reg, 1, 0xFEu));
    assert(bus.read(reg, 4) == 0xFE22AABBu);

    constexpr std::uint32_t wide_reg = kXenosMmioBase + 0x100u;
    assert(bus.write(wide_reg, 8, 0x0123456789ABCDEFull));
    assert(bus.read(wide_reg, 8) == 0x0123456789ABCDEFull);

    // The XMA aperture has independent storage at the same offset.
    constexpr std::uint32_t xma_reg = kXmaMmioBase + 0x20u;
    assert(bus.read(xma_reg, 4) == 0u);
    assert(bus.write(xma_reg, 4, 0xCAFEBABEu));
    assert(bus.read(xma_reg, 4) == 0xCAFEBABEu);
    assert(bus.read(reg, 4) == 0xFE22AABBu);

    const auto before_invalid = bus.trace().size();
    assert(!bus.write(kXenosMmioBase + kGuestMmioWindowSize - 1u, 2, 0xFFFFu));
    assert(bus.read(kXenosMmioBase + kGuestMmioWindowSize - 1u, 2) == 0u);
    assert(bus.trace().size() == before_invalid);
    assert(guest_mmio_read(0x82000000u, 4) == 0u);
    guest_mmio_write(0x82000000u, 4, 0xDEADBEEFu);

    const auto trace = bus.trace();
    assert(trace.size() == before_invalid);
    assert(trace.front().sequence == 1u);
    assert(trace.front().address == reg);
    assert(trace.front().value == 0u);
    assert(!trace.front().write);
    assert(trace[12].address == xma_reg);
    assert(trace[12].value == 0xCAFEBABEu);
    assert(trace[12].write);
    assert(trace[12].device == GuestMmioDevice::Xma);
    assert(trace[13].address == xma_reg);
    assert(!trace[13].write);

    bus.reset();
    assert(bus.trace().empty());
    assert(bus.dropped_trace_entries() == 0u);
    assert(bus.read(reg, 4) == 0u);

    // Trace is bounded: overflow discards the oldest records, never register state.
    for (std::size_t i = 0; i < GuestMmioBus::kTraceCapacity + 7u; ++i)
        assert(bus.write(reg, 4, static_cast<std::uint32_t>(i)));
    const auto bounded = bus.trace();
    assert(bounded.size() == GuestMmioBus::kTraceCapacity);
    assert(bus.dropped_trace_entries() == 8u);
    assert(bounded.front().sequence == 9u);
    assert(bounded.back().sequence == GuestMmioBus::kTraceCapacity + 7u);
    assert(bus.read(reg, 4) == GuestMmioBus::kTraceCapacity + 6u);

    return 0;
}
