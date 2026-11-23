#include "gpu/pm4_packet.hpp"

#include <array>
#include <cassert>
#include <cstdint>
#include <utility>
#include <vector>

namespace {

using toohuman::runtime::Pm4CallbackResult;

struct Capture {
    std::vector<std::pair<std::uint32_t, std::uint32_t>> registers;
    std::uint32_t opcode{};
    bool predicate{};
    std::vector<std::uint32_t> type3_payload;
    bool reject_register{};
    bool reject_type3{};
    bool defer_type3{};
    std::uint32_t reject_validation_index{0xFFFFFFFFu};
    std::size_t validation_calls{};
};

bool write_register(void* opaque, std::uint32_t index, std::uint32_t value) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (capture.reject_register) return false;
    capture.registers.emplace_back(index, value);
    return true;
}

bool validate_register(void* opaque, std::uint32_t index,
                       std::uint32_t) {
    auto& capture = *static_cast<Capture*>(opaque);
    ++capture.validation_calls;
    return index != capture.reject_validation_index;
}

Pm4CallbackResult type3(void* opaque, std::uint32_t opcode, bool predicate,
           std::span<const std::uint32_t> payload) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (capture.reject_type3) return Pm4CallbackResult::Rejected;
    if (capture.defer_type3) return Pm4CallbackResult::Deferred;
    capture.opcode = opcode;
    capture.predicate = predicate;
    capture.type3_payload.assign(payload.begin(), payload.end());
    return Pm4CallbackResult::Accepted;
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
        assert(stopped.dwords_consumed == 4u);
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
        // A packet's full register run must pass preflight before the first
        // write is applied. The second index is outside the Xenos aperture.
    {
        constexpr std::array<std::uint32_t, 6> wait_reg_mem{
            0xC0000000u | (4u << 16) | (0x3Cu << 8),
            3u, 0x12345678u, 0xFFFFFFFFu, 0u, 0u
        };
        Capture deferred;
        deferred.defer_type3 = true;
        const Pm4DispatchCallbacks cb{&deferred, write_register, type3};
        const auto pending = dispatch_pm4_stream(wait_reg_mem, cb, 1u);
        assert(!pending);
        assert(pending.error == Pm4DispatchError::CallbackDeferred);
        assert(pending.packets == 0u);
        assert(pending.dwords_consumed == 0u);
    }

        constexpr std::array<std::uint32_t, 3> out_of_range_type0{
            (1u << 16) | 0x3FFFu, 0x11111111u, 0x22222222u
        };
        Capture preflight;
        preflight.reject_validation_index = 0x4000u;
        const Pm4DispatchCallbacks cb{
            &preflight, write_register, type3, validate_register
        };
        const auto stopped = dispatch_pm4_stream(out_of_range_type0, cb, 4u);
        assert(!stopped);
        assert(stopped.error == Pm4DispatchError::CallbackRejected);
        assert(preflight.validation_calls == 2u);
        assert(preflight.registers.empty());
        assert(stopped.packets == 0u);
        assert(stopped.dwords_consumed == 0u);

        // Type-1's two destination registers are likewise checked before
        // either write callback runs.
        constexpr std::array<std::uint32_t, 3> rejected_type1{
            0x40000000u | (0x31u << 11) | 0x30u, 0x11111111u, 0x22222222u
        };
        Capture type1_preflight;
        type1_preflight.reject_validation_index = 0x31u;
        const Pm4DispatchCallbacks type1_callbacks{
            &type1_preflight, write_register, type3, validate_register
        };
        const auto type1_stopped = dispatch_pm4_stream(
            rejected_type1, type1_callbacks, 1u);
        assert(!type1_stopped);
        assert(type1_stopped.error == Pm4DispatchError::CallbackRejected);
        assert(type1_preflight.validation_calls == 2u);
        assert(type1_preflight.registers.empty());
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
