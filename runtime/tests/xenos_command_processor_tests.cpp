#include "gpu/xenos_command_processor.hpp"

#include <cassert>
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

namespace {

struct Capture {
    std::vector<std::pair<std::uint32_t, std::uint32_t>> registers;
    bool reject_register{};
};

bool write_register(void* opaque, std::uint32_t index, std::uint32_t value) {
    auto& capture = *static_cast<Capture*>(opaque);
    if (capture.reject_register) return false;
    capture.registers.emplace_back(index, value);
    return true;
}

bool type3(void*, std::uint32_t, bool, std::span<const std::uint32_t>) {
    return false; // No Type-3 semantics are implemented by this fixture.
}

void store_be32(std::uint8_t* bytes, std::uint32_t value) {
    bytes[0] = static_cast<std::uint8_t>(value >> 24);
    bytes[1] = static_cast<std::uint8_t>(value >> 16);
    bytes[2] = static_cast<std::uint8_t>(value >> 8);
    bytes[3] = static_cast<std::uint8_t>(value);
}

std::uint32_t load_be32(const std::uint8_t* bytes) {
    return (static_cast<std::uint32_t>(bytes[0]) << 24) |
           (static_cast<std::uint32_t>(bytes[1]) << 16) |
           (static_cast<std::uint32_t>(bytes[2]) << 8) |
           static_cast<std::uint32_t>(bytes[3]);
}

} // namespace

int main() {
    using namespace toohuman::runtime;

    XenosCommandProcessor cp;
    std::string error;
    assert(!cp.update_write_pointer(0, &error));
    assert(cp.initialize_ring(0x00010000u, 2u, &error));
    assert(cp.ring_initialized());
    assert(cp.ring_physical_base() == 0x00010000u);
    assert(cp.ring_size_log2() == 2u);
    assert(cp.read_index() == 0u);
    assert(!cp.write_pointer_initialized());
    assert(cp.enable_read_pointer_writeback(0x00020000u, 4u, &error));
    assert(cp.read_pointer_writeback_enabled());
    assert(cp.read_pointer_writeback_physical() == 0x00020000u);
    assert(cp.read_pointer_writeback_block_size_log2() == 4u);
    assert(!cp.initialize_ring(0x00010002u, 2u, &error));
    assert(!cp.initialize_ring(0x00010000u, 27u, &error));
    assert(!cp.update_write_pointer(8u, &error));
    assert(!cp.enable_read_pointer_writeback(0x1FFFFFFFu, 0u, &error));

    auto memory = GuestAddressSpace::reserve(&error);
    assert(memory.valid());
    constexpr std::uint32_t kRingGuest = 0xA0010000u;
    constexpr std::uint32_t kWritebackGuest = 0xA0020000u;
    assert(memory.commit_region(kRingGuest, 0x1000u, &error));
    assert(memory.commit_region(kWritebackGuest, 0x1000u, &error));

    // One type-0 write: header followed by a single register value.
    auto* ring = memory.base() + kRingGuest;
    store_be32(ring, (0u << 30) | (0u << 16) | 0x20u);
    store_be32(ring + 4u, 0x12345678u);
    assert(cp.update_write_pointer(2u, &error));

    Capture capture;
    const Pm4DispatchCallbacks callbacks{&capture, write_register, type3};
    const auto dispatched = cp.process_available(memory, callbacks, 4u);
    assert(dispatched);
    assert(dispatched.ring.dispatch.packets == 1u);
    assert(dispatched.ring.dispatch.dwords_consumed == 2u);
    assert(cp.read_index() == 2u);
    assert(capture.registers.size() == 1u);
    assert((capture.registers[0] ==
            std::pair<std::uint32_t, std::uint32_t>{0x20u, 0x12345678u}));
    assert(load_be32(memory.base() + kWritebackGuest) == 2u);

    // A NOP is fully consumed before the following register callback rejects.
    store_be32(ring + 2u * 4u, 0u);
    store_be32(ring + 3u * 4u, 0x30u);
    store_be32(ring + 4u * 4u, 0xAABBCCDDu);
    assert(cp.update_write_pointer(5u, &error));
    capture.reject_register = true;
    const auto rejected = cp.process_available(memory, callbacks, 4u);
    assert(!rejected);
    assert(rejected.error == XenosCommandProcessorError::GuestRingFailure);
    assert(rejected.ring.error == Pm4GuestRingError::CallbackRejected);
    assert(rejected.ring.dispatch.packets == 1u);
    assert(rejected.ring.dispatch.dwords_consumed == 1u);
    assert(cp.read_index() == 3u);
    assert(load_be32(memory.base() + kWritebackGuest) == 3u);

    // If command execution succeeds but writeback memory is not committed,
    // report that separately; the local consumer has still advanced.
    assert(cp.initialize_ring(0x00010000u, 2u, &error));
    assert(cp.enable_read_pointer_writeback(0x00030000u, 4u, &error));
    assert(cp.update_write_pointer(2u, &error));
    capture.reject_register = false;
    const auto writeback_failed = cp.process_available(memory, callbacks, 4u);
    assert(!writeback_failed);
    assert(writeback_failed.error == XenosCommandProcessorError::ReadPointerWritebackFailed);
    assert(writeback_failed.ring.dispatch.dwords_consumed == 2u);
    assert(cp.read_index() == 2u);

    // The command processor does not advance over a ring that is not committed.
    assert(cp.initialize_ring(0x00030000u, 2u, &error));
    assert(cp.update_write_pointer(1u, &error));
    const auto unmapped = cp.process_available(memory, callbacks, 4u);
    assert(!unmapped);
    assert(unmapped.ring.error == Pm4GuestRingError::RingNotReadable);
    assert(cp.read_index() == 0u);

    cp.reset();
    assert(!cp.ring_initialized());
    assert(!cp.read_pointer_writeback_enabled());
    return 0;
}
