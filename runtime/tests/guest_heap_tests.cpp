#include "memory/guest_address_space.hpp"
#include "memory/guest_heap.hpp"

#include <cassert>
#include <cstdint>
#include <string>

int main() {
    std::string error;
    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(memory.valid());

    toohuman::runtime::GuestHeap heap(memory, 0x70000003u, 0x10000u);
    assert(heap.initialize(&error));
    assert(heap.available_bytes() == 0x10000u);

    const auto first = heap.allocate(0x100u, 16);
    const auto second = heap.allocate(0x200u, 64);
    const auto third = heap.allocate(0x80u, 256);
    assert(first && second && third);
    assert((*first & 15u) == 0);
    assert((*second & 63u) == 0);
    assert((*third & 255u) == 0);
    assert(heap.allocation_size(*first) == 0x100u);
    assert(heap.allocation_size(*second) == 0x200u);
    assert(heap.owns(*first, 0x100u));
    assert(!heap.owns(0x70010003u));

    auto* first_host = memory.base() + *first;
    auto* second_host = memory.base() + *second;
    first_host[0] = 0xA5;
    second_host[0] = 0x5A;
    assert(first_host[0] == 0xA5);
    assert(second_host[0] == 0x5A);

    assert(heap.deallocate(*second));
    assert(!heap.deallocate(*second)); // Double free is rejected.
    assert(heap.deallocate(*first));
    assert(heap.deallocate(*third));
    assert(heap.available_bytes() == heap.size());

    assert(!heap.allocate(0x10001u));
    assert(!heap.allocate(32, 3)); // Alignment must be a power of two.
    assert(!heap.deallocate(0x70000000u));
    return 0;
}
