#include "gpu/pm4_packet.hpp"

#include <array>
#include <cassert>
#include <cstdint>
#include <utility>
#include <vector>

namespace {

struct Capture {
    std::vector<std::pair<std::uint32_t, std::uint32_t>> registers;
    std::uint32_t opcode{};
    std::vector<std::uint32_t> payload;
};

bool write_register(void* opaque, std::uint32_t index, std::uint32_t value) {
    static_cast<Capture*>(opaque)->registers.emplace_back(index, value);
    return true;
}

bool type3(void* opaque, std::uint32_t opcode, bool,
           std::span<const std::uint32_t> payload) {
    auto& capture = *static_cast<Capture*>(opaque);
    capture.opcode = opcode;
    capture.payload.assign(payload.begin(), payload.end());
    return true;
}

} // namespace

int main() {
    using namespace toohuman::runtime;

    const Pm4DispatchCallbacks callbacks{};
    {
        std::array<std::uint32_t, 8> ring{};
        ring[6] = (2u << 16) | 0x40u;
        ring[7] = 0x11u;
        ring[0] = 0x22u;
        ring[1] = 0x33u;

        Capture capture;
        const Pm4DispatchCallbacks cb{&capture, write_register, type3};
        const auto result = dispatch_pm4_ring(ring, 6, 2, cb, 8);
        assert(result);
        assert(result.packets == 1u);
        assert(result.dwords_consumed == 4u);
        assert(result.read_index == 2u);
        assert(capture.registers.size() == 3u);
        assert((capture.registers[0] == std::pair<std::uint32_t, std::uint32_t>{0x40u, 0x11u}));
        assert((capture.registers[1] == std::pair<std::uint32_t, std::uint32_t>{0x41u, 0x22u}));
        assert((capture.registers[2] == std::pair<std::uint32_t, std::uint32_t>{0x42u, 0x33u}));
    }

    {
        std::array<std::uint32_t, 8> ring{};
        ring[6] = 0xC0000000u | (1u << 16) | (0x37u << 8);
        ring[7] = 0xABu;
        ring[0] = 0xCDu;

        Capture capture;
        const Pm4DispatchCallbacks cb{&capture, write_register, type3};
        const auto result = dispatch_pm4_ring(ring, 6, 1, cb, 4);
        assert(result);
        assert(result.packets == 1u);
        assert(result.read_index == 1u);
        assert(capture.opcode == 0x37u);
        assert((capture.payload == std::vector<std::uint32_t>{0xABu, 0xCDu}));
    }

    {
        constexpr std::array<std::uint32_t, 4> ring{0u, 0u, 0u, 0u};
        const auto result = dispatch_pm4_ring(ring, 0, 2, callbacks, 1);
        assert(!result);
        assert(result.error == Pm4RingDispatchError::PacketLimitReached);
        assert(result.packets == 1u);
        assert(result.read_index == 1u);
    }

    {
        std::array<std::uint32_t, 4> ring{};
        ring[2] = (2u << 16) | 0x10u;
        ring[3] = 0x1234u;
        Capture capture;
        const Pm4DispatchCallbacks cb{&capture, write_register, type3};
        const auto result = dispatch_pm4_ring(ring, 2, 0, cb, 4);
        assert(!result);
        assert(result.error == Pm4RingDispatchError::PacketDecodeFailed);
        assert(result.packets == 0u);
        assert(result.read_index == 2u);
    }

    {
        constexpr std::array<std::uint32_t, 4> ring{};
        const auto bad_read = dispatch_pm4_ring(ring, 4, 0, callbacks, 1);
        assert(bad_read.error == Pm4RingDispatchError::InvalidReadPointer);
        const auto bad_write = dispatch_pm4_ring(ring, 0, 4, callbacks, 1);
        assert(bad_write.error == Pm4RingDispatchError::InvalidWritePointer);
    }

    {
        constexpr std::array<std::uint32_t, 0> empty{};
        const auto invalid = dispatch_pm4_ring(empty, 0, 0, callbacks, 1);
        assert(invalid.error == Pm4RingDispatchError::InvalidRing);
    }

    return 0;
}
