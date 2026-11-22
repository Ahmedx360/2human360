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
    bool predicate{};
    std::vector<std::uint32_t> type3_payload;
    bool reject_register{};
    bool reject_type3{};
};

bool write_register(void* opaque, std::uint32_t index, std::uint32_t value) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (capture.reject_register) return false;
    capture.registers.emplace_back(index, value);
    return true;
}

bool type3(void* opaque, std::uint32_t opcode, bool predicate,
           std::span<const std::uint32_t> payload) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (capture.reject_type3) return false;
    capture.opcode = opcode;
    capture.predicate = predicate;
    capture.type3_payload.assign(payload.begin(), payload.end());
    return true;
}

} // namespace

int main() {
    using namespace toohuman::runtime;

    constexpr std::array<std::uint32_t, 15> stream{
        (2u << 16) | 0x10u, 0x11u, 0x22u, 0x33u,
        (1u << 16) | (1u << 15) | 0x20u, 0x44u, 0x55u,
        0x40000000u | (0x31u << 11) | 0x30u, 0x66u, 0x77u,
        0xC0000000u | (1u << 16) | (0x55u << 8) | 1u, 0x88u, 0x99u,
        0x80000000u, 0u
    };

    Capture capture;
    const Pm4DispatchCallbacks callbacks{
        &capture, write_register, type3
    };
    const auto result = dispatch_pm4_stream(stream, callbacks, 8);
    assert(result);
    assert(result.packets == 6u);
    assert(result.dwords_consumed == stream.size());
    assert(capture.registers.size() == 7u);
    assert((capture.registers[0] == std::pair<std::uint32_t, std::uint32_t>{0x10u, 0x11u}));
    assert((capture.registers[1] == std::pair<std::uint32_t, std::uint32_t>{0x11u, 0x22u}));
    assert((capture.registers[2] == std::pair<std::uint32_t, std::uint32_t>{0x12u, 0x33u}));
    assert((capture.registers[3] == std::pair<std::uint32_t, std::uint32_t>{0x20u, 0x44u}));
    assert((capture.registers[4] == std::pair<std::uint32_t, std::uint32_t>{0x20u, 0x55u}));
    assert((capture.registers[5] == std::pair<std::uint32_t, std::uint32_t>{0x30u, 0x66u}));
    assert((capture.registers[6] == std::pair<std::uint32_t, std::uint32_t>{0x31u, 0x77u}));
    assert(capture.opcode == 0x55u);
    assert(capture.predicate);
    assert((capture.type3_payload == std::vector<std::uint32_t>{0x88u, 0x99u}));

    {
        Capture limited;
        const Pm4DispatchCallbacks cb{&limited, write_register, type3};
        const auto stopped = dispatch_pm4_stream(stream, cb, 1);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::PacketLimitReached);
        assert(stopped.packets == 1u);
        assert(stopped.dwords_consumed == 3u);
    }

    {
        const Pm4DispatchCallbacks missing{};
        const auto stopped = dispatch_pm4_stream(stream, missing, 8);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::MissingRegisterHandler);
        assert(stopped.packets == 0u);
    }

    {
        constexpr std::array<std::uint32_t, 2> type3_only{
            0xC0000000u | (0u << 16) | (0x44u << 8), 0xABu
        };
        const Pm4DispatchCallbacks missing_type3{};
        const auto stopped = dispatch_pm4_stream(type3_only, missing_type3, 1);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::MissingType3Handler);
    }

    {
        Capture rejected;
        rejected.reject_register = true;
        const Pm4DispatchCallbacks cb{&rejected, write_register, type3};
        const auto stopped = dispatch_pm4_stream(stream, cb, 8);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::CallbackRejected);
        assert(stopped.packets == 0u);
        assert(stopped.dwords_consumed == 0u);
    }

    {
        constexpr std::array<std::uint32_t, 2> truncated{
            (2u << 16) | 0x10u, 0x11u
        };
        Capture invalid;
        const Pm4DispatchCallbacks cb{&invalid, write_register, type3};
        const auto stopped = dispatch_pm4_stream(truncated, cb, 8);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::PacketDecodeFailed);
    }

    return 0;
}
