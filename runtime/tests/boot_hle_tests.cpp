// Unit tests for the stateless startup HLE. They need only ppc_context.h (no generated game code, no registry).
#include "ppc/boot_hle.hpp"
#include "fs/guest_vfs.hpp"
#include "kernel/guest_kernel_objects.hpp"
#include <ppc_config.h>

#include <atomic>
#include <cassert>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <thread>
#include <vector>

using namespace toohuman::runtime;

namespace {
std::vector<std::uint8_t> g_mem(0x10000, 0xCC);   // guest address N == g_mem[N]
std::uint8_t* base() { return g_mem.data(); }
void poke(std::uint32_t at, const char* s) { std::memcpy(base() + at, s, std::strlen(s) + 1); }
std::uint16_t be16(std::uint32_t a) { return static_cast<std::uint16_t>((g_mem[a] << 8) | g_mem[a + 1]); }
std::uint32_t be32(std::uint32_t a) {
    return (std::uint32_t(g_mem[a]) << 24) | (std::uint32_t(g_mem[a + 1]) << 16) | (std::uint32_t(g_mem[a + 2]) << 8) | g_mem[a + 3];
}
std::uint64_t be64(std::uint32_t a) {
    return (std::uint64_t(be32(a)) << 32) | be32(a + 4);
}
void put16(std::uint32_t a, std::uint16_t v) { g_mem[a] = v >> 8; g_mem[a + 1] = std::uint8_t(v); }
void put_be32_test(std::uint32_t a, std::uint32_t v) {
    g_mem[a] = static_cast<std::uint8_t>(v >> 24);
    g_mem[a + 1] = static_cast<std::uint8_t>(v >> 16);
    g_mem[a + 2] = static_cast<std::uint8_t>(v >> 8);
    g_mem[a + 3] = static_cast<std::uint8_t>(v);
}

}

namespace {
void test_executable_module_lookup() {
    constexpr std::uint32_t output = 0x7400u;
    constexpr std::uint32_t name = 0x7500u;
    set_executable_module_handle(0xA1B2C3D4u);

    poke(name, "DeFaUlT.XeX");
    PPCContext context{};
    context.r3.u32 = name;
    context.r4.u32 = output;
    boot_hle::XexGetModuleHandle(context, base());
    assert(context.r3.u32 == 0);
    assert(be32(output) == 0xA1B2C3D4u);

    poke(name, "not-default.xex");
    context = {};
    context.r3.u32 = name;
    context.r4.u32 = output;
    boot_hle::XexGetModuleHandle(context, base());
    assert(context.r3.u32 == 0x00000490u);
    assert(be32(output) == 0);

    set_executable_module_handle(0);
    context = {};
    context.r3.u32 = 0;
    context.r4.u32 = output;
    boot_hle::XexGetModuleHandle(context, base());
    assert(context.r3.u32 == 0x00000490u);
    assert(be32(output) == 0);
}

void test_rtl_image_xex_header_field() {
    constexpr std::uint32_t header = 0x7000u;
    constexpr std::uint32_t header_size = 0x80u;
    std::memset(base() + header, 0, header_size);
    auto write_be32 = [](std::uint32_t address, std::uint32_t value) {
        g_mem[address] = static_cast<std::uint8_t>(value >> 24);
        g_mem[address + 1] = static_cast<std::uint8_t>(value >> 16);
        g_mem[address + 2] = static_cast<std::uint8_t>(value >> 8);
        g_mem[address + 3] = static_cast<std::uint8_t>(value);
    };
    write_be32(header + 8u, header_size);
    write_be32(header + 0x14u, 3u);
    // Inline-valued optional header (key type 0).
    write_be32(header + 0x18u, 0x00010100u);
    write_be32(header + 0x1Cu, 0x82A46B18u);
    // Pointer-to-inline-value optional header (key type 1).
    write_be32(header + 0x20u, 0x00010101u);
    write_be32(header + 0x24u, 0x1234u);
    // Offset-valued optional header (key type 2).
    write_be32(header + 0x28u, 0x000002FFu);
    write_be32(header + 0x2Cu, 0x50u);

    PPCContext context{};
    context.r3.u32 = header;
    context.r4.u32 = 0x00010100u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == 0x82A46B18u);

    context = {};
    context.r3.u32 = header;
    context.r4.u32 = 0x00010101u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == header + 0x24u);

    context = {};
    context.r3.u32 = header;
    context.r4.u32 = 0x000002FFu;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == header + 0x50u);

    context = {};
    context.r3.u32 = header;
    context.r4.u32 = 0x00010200u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == 0u);

    // Invalid guest pointers and malformed header sizes/counts fail closed.
    context = {};
    context.r3.u32 = 0xFFFFFFF0u;
    context.r4.u32 = 0x00010100u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == 0u);

    write_be32(header + 8u, 0x17u);
    context = {};
    context.r3.u32 = header;
    context.r4.u32 = 0x00010100u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == 0u);

    write_be32(header + 8u, header_size);
    write_be32(header + 0x14u, 0xFFFFFFFFu);
    context = {};
    context.r3.u32 = header;
    context.r4.u32 = 0x00010100u;
    boot_hle::RtlImageXexHeaderField(context, base());
    assert(context.r3.u32 == 0u);
}

void test_query_volume_information_file() {
    namespace fs = std::filesystem;
    const auto root = fs::temp_directory_path() / "toohuman_volume_information_tests";
    fs::remove_all(root);
    fs::create_directories(root);
    const auto path = root / "fixture.bin";
    { std::ofstream stream(path, std::ios::binary); stream << "Too Human"; }

    auto file = std::make_shared<GuestFile>(path, false, true, false, false);
    const auto handle = process_kernel_objects().insert(file);
    assert(handle.has_value());

    constexpr std::uint32_t iosb = 0x7800u;
    constexpr std::uint32_t information = 0x7900u;
    PPCContext context{};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = information;
    context.r6.u32 = 24u;
    context.r7.u32 = 1u; // FileFsVolumeInformation.
    boot_hle::NtQueryVolumeInformationFile(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(iosb) == 0u);
    assert(be32(iosb + 4u) == 17u);
    assert(be64(information) == 0u);
    assert(be32(information + 8u) == 0u);
    assert(g_mem[information + 16u] == 0u);

    context = {};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = information;
    context.r6.u32 = 24u;
    context.r7.u32 = 3u; // FileFsSizeInformation.
    boot_hle::NtQueryVolumeInformationFile(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(iosb) == 0u);
    assert(be32(iosb + 4u) == 24u);
    const auto total_units = be64(information);
    const auto available_units = be64(information + 8u);
    assert(total_units > 0u);
    assert(available_units <= total_units);
    assert(be32(information + 16u) == 8u);
    assert(be32(information + 20u) == 512u);

    // FileBasicInformation (class 4) returns big-endian times and attributes.
    constexpr std::uint32_t basic_information = 0x7A00u;
    context = {};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = basic_information;
    context.r6.u32 = 40u;
    context.r7.u32 = 4u;
    boot_hle::NtQueryInformationFile(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(iosb) == 0u);
    assert(be32(iosb + 4u) == 40u);
    assert(be64(basic_information + 0x00u) > 0u);
    assert(be64(basic_information + 0x00u) == be64(basic_information + 0x10u));
    assert(be32(basic_information + 0x20u) == 0x80u); // FILE_ATTRIBUTE_NORMAL.

    constexpr std::uint32_t network_information = 0x7B00u;
    context = {};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = network_information;
    context.r6.u32 = 56u;
    context.r7.u32 = 34u; // FileNetworkOpenInformation.
    boot_hle::NtQueryInformationFile(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(iosb) == 0u);
    assert(be32(iosb + 4u) == 56u);
    const auto basic_write_time = be64(basic_information + 0x10u);
    const auto network_write_time = be64(network_information + 0x10u);
    const auto timestamp_delta = basic_write_time > network_write_time
        ? basic_write_time - network_write_time
        : network_write_time - basic_write_time;
    assert(basic_write_time > 0u && network_write_time > 0u);
    assert(timestamp_delta < 10000000ull); // Less than one second in FILETIME units.
    assert(be32(network_information + 0x30u) == 0x80u);

    context = {};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = information;
    context.r6.u32 = 23u;
    context.r7.u32 = 3u;
    boot_hle::NtQueryVolumeInformationFile(context, base());
    assert(context.r3.u32 == 0xC0000004u); // STATUS_INFO_LENGTH_MISMATCH.
    assert(be32(iosb) == 0xC0000004u);
    assert(be32(iosb + 4u) == 0u);

    context = {};
    context.r3.u32 = *handle;
    context.r4.u32 = iosb;
    context.r5.u32 = information;
    context.r6.u32 = 24u;
    context.r7.u32 = 4u; // DeviceInformation is not modelled by this VFS.
    boot_hle::NtQueryVolumeInformationFile(context, base());
    assert(context.r3.u32 == 0xC0000003u); // STATUS_INVALID_INFO_CLASS.
    assert(be32(iosb) == 0xC0000003u);

    assert(process_kernel_objects().close(*handle));
    file.reset(); // Close the host stream before removing the fixture on Windows.
    fs::remove_all(root);
}

void test_xam_controller_disconnected_profile() {
    constexpr std::uint32_t kBadArguments = 0x000000A0u;
    constexpr std::uint32_t kDeviceNotConnected = 0x0000048Fu;
    constexpr std::uint32_t output = 0x7400u;
    constexpr std::uint32_t user_index = 0x7500u;

    // Capabilities requires an output pointer but does not fabricate a device.
    PPCContext context{};
    context.r5.u32 = 0;
    boot_hle::XamInputGetCapabilities(context, base());
    assert(context.r3.u32 == kBadArguments);

    g_mem[output + 0] = 0xAAu;
    g_mem[output + 1] = 0xBBu;
    g_mem[output + 2] = 0xCCu;
    g_mem[output + 3] = 0xDDu;
    context = {};
    context.r3.u32 = 0xFFu; // Any user.
    context.r4.u32 = 1u;    // Gamepad.
    context.r5.u32 = output;
    boot_hle::XamInputGetCapabilities(context, base());
    assert(context.r3.u32 == kDeviceNotConnected);
    assert(be32(output) == 0xAABBCCDDu);

    // GetState intentionally accepts NULL as a connection-only query.
    context = {};
    context.r3.u32 = 0xFFu;
    context.r4.u32 = 1u;
    context.r5.u32 = 0;
    boot_hle::XamInputGetState(context, base());
    assert(context.r3.u32 == kDeviceNotConnected);

    context = {};
    context.r5.u32 = 0;
    boot_hle::XamInputSetState(context, base());
    assert(context.r3.u32 == kBadArguments);
    context = {};
    context.r5.u32 = output;
    boot_hle::XamInputSetState(context, base());
    assert(context.r3.u32 == kDeviceNotConnected);

    // KeystrokeEx requires both guest pointers; no connected device means
    // the output record must remain untouched.
    context = {};
    context.r3.u32 = user_index;
    context.r4.u32 = 1u;
    context.r5.u32 = output;
    boot_hle::XamInputGetKeystrokeEx(context, base());
    assert(context.r3.u32 == kDeviceNotConnected);
    assert(be32(output) == 0xAABBCCDDu);

    context = {};
    context.r3.u32 = user_index;
    context.r5.u32 = 0;
    boot_hle::XamInputGetKeystrokeEx(context, base());
    assert(context.r3.u32 == kBadArguments);
    context = {};
    context.r3.u32 = 0;
    context.r5.u32 = output;
    boot_hle::XamInputGetKeystrokeEx(context, base());
    assert(context.r3.u32 == kBadArguments);
    context = {};
    context.r3.u32 = 0xFFFFFFF0u; // Unmapped user-index pointer.
    context.r5.u32 = output;
    boot_hle::XamInputGetKeystrokeEx(context, base());
    assert(context.r3.u32 == kBadArguments);
}



void test_ke_wait_for_multiple_objects() {
    constexpr std::uint32_t first_event = 0x7D00u;
    constexpr std::uint32_t second_event = 0x7D20u;
    constexpr std::uint32_t objects_array = 0x7D40u;
    constexpr std::uint32_t timeout = 0x7D60u;
    std::memset(base() + timeout, 0, 8u);

    PPCContext context{};
    context.r3.u32 = first_event;
    context.r4.u32 = 1u; // SynchronizationEvent.
    context.r5.u32 = 1u; // Initially signaled.
    boot_hle::KeInitializeEvent(context, base());
    assert(context.r3.u32 == 0u);

    context = {};
    context.r3.u32 = second_event;
    context.r4.u32 = 1u;
    context.r5.u32 = 0u;
    boot_hle::KeInitializeEvent(context, base());
    assert(context.r3.u32 == 0u);

    put_be32_test(objects_array, first_event);
    put_be32_test(objects_array + 4u, second_event);

    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = objects_array;
    context.r5.u32 = 0u; // WaitAll.
    context.r6.u32 = 0u; // WaitReason.
    context.r7.u32 = 0u; // KernelMode.
    context.r8.u32 = 0u; // Not alertable.
    context.r9.u32 = timeout;
    boot_hle::KeWaitForMultipleObjects(context, base());
    assert(context.r3.u32 == 0x00000102u); // STATUS_TIMEOUT.
    assert(be32(first_event + 4u) == 1u);
    assert(be32(second_event + 4u) == 0u);

    context = {};
    context.r3.u32 = second_event;
    context.r4.u32 = 0u;
    context.r5.u32 = 0u;
    boot_hle::KeSetEvent(context, base());
    assert(context.r3.u32 == 0u);

    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = objects_array;
    context.r5.u32 = 0u;
    context.r7.u32 = 0u;
    context.r9.u32 = timeout;
    boot_hle::KeWaitForMultipleObjects(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(first_event + 4u) == 0u);
    assert(be32(second_event + 4u) == 0u);

    context = {};
    context.r3.u32 = first_event;
    context.r4.u32 = 0u;
    context.r5.u32 = 0u;
    boot_hle::KeSetEvent(context, base());
    context = {};
    context.r3.u32 = second_event;
    context.r4.u32 = 0u;
    context.r5.u32 = 0u;
    boot_hle::KeSetEvent(context, base());

    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = objects_array;
    context.r5.u32 = 1u; // WaitAny.
    context.r7.u32 = 0u;
    context.r9.u32 = timeout;
    boot_hle::KeWaitForMultipleObjects(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(first_event + 4u) == 0u);
    assert(be32(second_event + 4u) == 1u);

    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = objects_array;
    context.r5.u32 = 1u;
    context.r7.u32 = 0u;
    context.r9.u32 = timeout;
    boot_hle::KeWaitForMultipleObjects(context, base());
    assert(context.r3.u32 == 1u);
    assert(be32(second_event + 4u) == 0u);

    assert(process_kernel_objects().close(first_event));
    assert(process_kernel_objects().close(second_event));
}

void test_wait_for_multiple_objects_hle() {
    constexpr std::uint32_t handles_array = 0x7C00u;
    constexpr std::uint32_t timeout = 0x7C40u;
    std::memset(base() + timeout, 0, 8u);

    auto first = std::make_shared<GuestEventObject>(false, true);
    auto second = std::make_shared<GuestEventObject>(false, false);
    auto first_handle = process_kernel_objects().insert(first);
    auto second_handle = process_kernel_objects().insert(second);
    assert(first_handle && second_handle);
    put_be32_test(handles_array, *first_handle);
    put_be32_test(handles_array + 4u, *second_handle);

    PPCContext context{};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 0u; // WaitAll.
    context.r6.u32 = 0u; // KernelMode.
    context.r7.u32 = 0u; // Not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0x00000102u); // STATUS_TIMEOUT.
    // WaitAll must not consume the first auto-reset event when the second is
    // not ready. The implementation acquires the set atomically under locks.
    assert(first->is_signaled());
    assert(!second->is_signaled());

    (void)second->set();
    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 0u;
    context.r7.u32 = 0u; // KernelMode, not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0u);
    assert(!first->is_signaled());
    assert(!second->is_signaled());

    (void)first->set();
    (void)second->set();
    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 1u; // WaitAny.
    context.r6.u32 = 1u; // UserMode.
    context.r7.u32 = 0u; // Not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0u); // First signaled handle wins.
    assert(!first->is_signaled());
    assert(second->is_signaled());

    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 1u;
    context.r7.u32 = 0u; // KernelMode, not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 1u);
    assert(!second->is_signaled());

    context = {};
    context.r3.u32 = 0u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 1u;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0xC000000Du); // STATUS_INVALID_PARAMETER.

    // WaitAll cannot contain two handles to the same dispatcher object.
    put_be32_test(handles_array + 4u, *first_handle);
    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 0u;
    context.r7.u32 = 0u; // KernelMode, not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0xC000000Du); // STATUS_INVALID_PARAMETER.

    put_be32_test(handles_array + 4u, 0xDEADBEEFu);
    context = {};
    context.r3.u32 = 2u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 1u;
    context.r7.u32 = 0u; // KernelMode, not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0xC0000008u); // STATUS_INVALID_HANDLE.

    assert(process_kernel_objects().close(*first_handle));
    assert(process_kernel_objects().close(*second_handle));

    // The same wait-set path must acquire the other dispatcher primitives.
    auto semaphore = std::make_shared<GuestSemaphoreObject>(1u, 1u);
    auto mutant = std::make_shared<GuestMutantObject>();
    auto timer = std::make_shared<GuestTimerObject>(false);
    timer->set_timer(std::chrono::milliseconds::zero(), 0u);
    const auto semaphore_handle = process_kernel_objects().insert(semaphore);
    const auto mutant_handle = process_kernel_objects().insert(mutant);
    const auto timer_handle = process_kernel_objects().insert(timer);
    assert(semaphore_handle && mutant_handle && timer_handle);
    put_be32_test(handles_array, *semaphore_handle);
    put_be32_test(handles_array + 4u, *mutant_handle);
    put_be32_test(handles_array + 8u, *timer_handle);

    context = {};
    context.r3.u32 = 3u;
    context.r4.u32 = handles_array;
    context.r5.u32 = 0u; // WaitAll.
    context.r7.u32 = 0u; // KernelMode, not alertable.
    context.r8.u32 = timeout;
    boot_hle::NtWaitForMultipleObjectsEx(context, base());
    assert(context.r3.u32 == 0u);
    assert(semaphore->count() == 0u);
    assert(mutant->recursion_count() == 1u);
    assert(timer->wait(std::chrono::milliseconds::zero()) ==
           GuestKernelObjectWaitResult::Timeout); // Auto-reset timer was consumed.

    std::uint32_t previous_count = 0;
    assert(semaphore->release(1u, previous_count));
    assert(mutant->release());
    assert(process_kernel_objects().close(*semaphore_handle));
    assert(process_kernel_objects().close(*mutant_handle));
    assert(process_kernel_objects().close(*timer_handle));
}

void test_waitable_timer_hle() {
    constexpr std::uint32_t handle_output = 0x7700u;
    constexpr std::uint32_t due_pointer = 0x7720u;
    constexpr std::uint32_t current_state = 0x7730u;
    constexpr std::uint32_t timeout = 0x7740u;
    auto put_be64_test = [](std::uint32_t address, std::uint64_t value) {
        for (unsigned i = 0; i < 8u; ++i)
            g_mem[address + i] = static_cast<std::uint8_t>(
                value >> ((7u - i) * 8u));
    };
    std::memset(base() + timeout, 0, 8u);

    PPCContext context{};
    context.r3.u32 = handle_output;
    context.r5.u32 = 1u; // Synchronization timer.
    boot_hle::NtCreateTimer(context, base());
    assert(context.r3.u32 == 0u);
    const auto handle = be32(handle_output);

    // Immediate first expiry, then one periodic expiry. Resume is ignored
    // informationally while the timer still becomes armed.
    put_be64_test(due_pointer, 0u);
    context = {};
    context.r3.u32 = handle;
    context.r4.u32 = due_pointer;
    context.r6.u32 = 1u;
    context.r8.u32 = 1u;
    context.r9.u32 = 15u;
    boot_hle::NtSetTimerEx(context, base());
    assert(context.r3.u32 == 0x40000025u);

    context = {};
    context.r3.u32 = handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0u);

    put_be64_test(timeout, static_cast<std::uint64_t>(-10000000ll)); // one second
    context = {};
    context.r3.u32 = handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0u);

    context = {};
    context.r3.u32 = handle;
    context.r4.u32 = current_state;
    boot_hle::NtCancelTimer(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(current_state) == 0u);

    std::memset(base() + timeout, 0, 8u);
    context = {};
    context.r3.u32 = handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0x102u);

    // Kernel APC routines are not silently accepted without APC delivery.
    put_be64_test(due_pointer, 0u);
    context = {};
    context.r3.u32 = handle;
    context.r4.u32 = due_pointer;
    context.r5.u32 = 0x82001000u;
    context.r6.u32 = 1u;
    context.r9.u32 = 0u;
    boot_hle::NtSetTimerEx(context, base());
    assert(context.r3.u32 == 0xC00000BBu);
    context = {};
    context.r3.u32 = handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0u);
}

void test_native_event_dispatcher_object() {
    constexpr std::uint32_t notification_event = 0x7600u;
    constexpr std::uint32_t synchronization_event = 0x7620u;
    constexpr std::uint32_t timeout = 0x7200u;
    constexpr std::uint32_t kStatusTimeout = 0x00000102u;

    std::memset(base() + timeout, 0, 8u);
    PPCContext context{};
    context.r3.u32 = notification_event;
    context.r4.u32 = 0u; // NotificationEvent.
    context.r5.u32 = 1u; // Initially signaled.
    boot_hle::KeInitializeEvent(context, base());
    assert(context.r3.u32 == 0u);
    assert(g_mem[notification_event] == 0u);
    assert(be32(notification_event + 4u) == 1u);

    context = {};
    context.r3.u32 = notification_event;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(notification_event + 4u) == 1u);

    context = {};
    context.r3.u32 = notification_event;
    boot_hle::KeResetEvent(context, base());
    assert(context.r3.u32 == 1u);
    assert(be32(notification_event + 4u) == 0u);
    context = {};
    context.r3.u32 = notification_event;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == kStatusTimeout);

    context = {};
    context.r3.u32 = notification_event;
    context.r4.u32 = 1u; // Priority increment (ignored).
    context.r5.u32 = 0u; // Do not wait.
    boot_hle::KeSetEvent(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(notification_event + 4u) == 1u);

    context = {};
    context.r3.u32 = notification_event;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(notification_event + 4u) == 1u); // Manual reset stays signaled.
    assert(process_kernel_objects().close(notification_event));

    context = {};
    context.r3.u32 = synchronization_event;
    context.r4.u32 = 1u; // SynchronizationEvent.
    context.r5.u32 = 1u;
    boot_hle::KeInitializeEvent(context, base());
    assert(context.r3.u32 == 0u);
    assert(g_mem[synchronization_event] == 1u);
    assert(be32(synchronization_event + 4u) == 1u);

    context = {};
    context.r3.u32 = synchronization_event;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(synchronization_event + 4u) == 0u); // Auto-reset is consumed.

    context = {};
    context.r3.u32 = synchronization_event;
    context.r4.u32 = 0u;
    context.r5.u32 = 0u;
    boot_hle::KeSetEvent(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(synchronization_event + 4u) == 1u);

    context = {};
    context.r3.u32 = synchronization_event;
    boot_hle::KeResetEvent(context, base());
    assert(context.r3.u32 == 1u);
    assert(be32(synchronization_event + 4u) == 0u);
    assert(process_kernel_objects().close(synchronization_event));

    // XDK-inlined initialization: a valid native dispatcher header can be
    // lazily registered when the first KeSet/Wait import is reached.
    constexpr std::uint32_t lazy_auto_event = 0x7640u;
    std::memset(base() + lazy_auto_event, 0, 0x10u);
    g_mem[lazy_auto_event] = 1u; // SynchronizationEvent, initially clear.
    auto write_be32 = [](std::uint32_t address, std::uint32_t value) {
        g_mem[address] = static_cast<std::uint8_t>(value >> 24);
        g_mem[address + 1u] = static_cast<std::uint8_t>(value >> 16);
        g_mem[address + 2u] = static_cast<std::uint8_t>(value >> 8);
        g_mem[address + 3u] = static_cast<std::uint8_t>(value);
    };
    context = {};
    context.r3.u32 = lazy_auto_event;
    context.r4.u32 = 0u;
    context.r5.u32 = 0u;
    boot_hle::KeSetEvent(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(lazy_auto_event + 4u) == 1u);
    context = {};
    context.r3.u32 = lazy_auto_event;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(lazy_auto_event + 4u) == 0u);
    assert(process_kernel_objects().close(lazy_auto_event));

    // The same lazy path recognizes a preinitialized native semaphore (type 5).
    constexpr std::uint32_t lazy_semaphore = 0x7680u;
    std::memset(base() + lazy_semaphore, 0, 0x14u);
    g_mem[lazy_semaphore] = 5u;
    write_be32(lazy_semaphore + 4u, 1u);
    write_be32(lazy_semaphore + 0x10u, 2u);
    context = {};
    context.r3.u32 = lazy_semaphore;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(lazy_semaphore + 4u) == 0u);
    context = {};
    context.r3.u32 = lazy_semaphore;
    context.r5.u32 = 1u;
    boot_hle::KeReleaseSemaphore(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(lazy_semaphore + 4u) == 1u);
    context = {};
    context.r3.u32 = lazy_semaphore;
    context.r7.u32 = timeout;
    boot_hle::KeWaitForSingleObject(context, base());
    assert(context.r3.u32 == 0u);
    assert(be32(lazy_semaphore + 4u) == 0u);
    assert(process_kernel_objects().close(lazy_semaphore));
}

void test_video_display_queries() {
    constexpr std::uint32_t mode = 0x7000u;
    constexpr std::uint32_t display = 0x7100u;
    constexpr std::uint32_t gamma_type = 0x7200u;
    constexpr std::uint32_t gamma_power = 0x7204u;

    PPCContext context{};
    context.r3.u32 = mode;
    boot_hle::VdQueryVideoMode(context, base());
    assert(context.r3.u32 == mode);
    assert(be32(mode + 0x00u) == 1280u);
    assert(be32(mode + 0x04u) == 720u);
    assert(be32(mode + 0x08u) == 0u);
    assert(be32(mode + 0x0Cu) == 1u);
    assert(be32(mode + 0x10u) == 1u);
    assert(be32(mode + 0x14u) == 0x42700000u); // 60.0f, big-endian.
    assert(be32(mode + 0x18u) == 1u);          // NTSC.
    assert(be32(mode + 0x1Cu) == 0x4Au);
    assert(be32(mode + 0x20u) == 1u);
    assert(be32(mode + 0x24u) == 0u);
    assert(be32(mode + 0x28u) == 0u);
    assert(be32(mode + 0x2Cu) == 0u);

    context = {};
    boot_hle::VdQueryVideoFlags(context, base());
    assert(context.r3.u32 == 3u);

    context = {};
    context.r3.u32 = mode;
    boot_hle::XGetVideoMode(context, base());
    assert(context.r3.u32 == 0u); // XAM API returns ERROR_SUCCESS.
    assert(be32(mode) == 1280u && be32(mode + 4u) == 720u);

    context = {};
    context.r3.u32 = display;
    boot_hle::VdGetCurrentDisplayInformation(context, base());
    assert(context.r3.u32 == display);
    assert(be16(display + 0x00u) == 1280u);
    assert(be16(display + 0x02u) == 720u);
    assert(be32(display + 0x10u) == 1280u);
    assert(be32(display + 0x14u) == 720u);
    assert(be32(display + 0x18u) == 1280u);
    assert(be32(display + 0x1Cu) == 720u);
    assert(be32(display + 0x20u) == 1u);
    assert(be32(display + 0x30u) == 1u);
    assert(be16(display + 0x40u) == 320u);
    assert(be16(display + 0x42u) == 180u);
    assert(be16(display + 0x44u) == 320u);
    assert(be16(display + 0x46u) == 180u);
    assert(be16(display + 0x48u) == 1280u);
    assert(be16(display + 0x4Au) == 720u);
    assert(be32(display + 0x4Cu) == 0x42700000u);
    assert(be32(display + 0x50u) == 0u);
    assert(be16(display + 0x56u) == 1280u);

    context = {};
    context.r3.u32 = gamma_type;
    context.r4.u32 = gamma_power;
    boot_hle::VdGetCurrentDisplayGamma(context, base());
    assert(context.r3.u32 == gamma_type);
    assert(be32(gamma_type) == 2u); // BT.709.
    float expected_power = 2.22222233f;
    std::uint32_t expected_power_bits = 0;
    std::memcpy(&expected_power_bits, &expected_power, sizeof(expected_power_bits));
    assert(be32(gamma_power) == expected_power_bits);

    context = {};
    context.r3.u32 = 0xFFFFFFF0u; // The 48-byte record would cross the 4 GiB limit.
    boot_hle::VdQueryVideoMode(context, base());
    assert(context.r3.u32 == 0xC0000005u); // Invalid guest range.
}

void test_critical_sections() {
    constexpr std::uint32_t address = 0x8000u;
    PPCContext context{};

    context.r3.u32 = address;
    context.r4.u32 = 0x1234u;
    boot_hle::RtlInitializeCriticalSectionAndSpinCount(context, base());
    assert(context.r3.u32 == 0);
    assert(g_mem[address] == 1u);
    assert(g_mem[address + 1] == 19u); // ceil(0x1234 / 256)
    assert(be32(address + 0x10) == 0xFFFFFFFFu);

    context = {};
    context.r3.u32 = address;
    boot_hle::RtlEnterCriticalSection(context, base());
    const auto owner = be32(address + 0x18);
    assert(owner != 0);
    assert(be32(address + 0x10) == 0);
    assert(be32(address + 0x14) == 1);

    // Recursive acquisition by the owner is valid and updates the guest fields.
    context = {};
    context.r3.u32 = address;
    boot_hle::RtlEnterCriticalSection(context, base());
    assert(be32(address + 0x10) == 1);
    assert(be32(address + 0x14) == 2);

    context = {};
    context.r3.u32 = address;
    boot_hle::RtlTryEnterCriticalSection(context, base());
    assert(context.r3.u32 == 1);
    assert(be32(address + 0x10) == 2);
    assert(be32(address + 0x14) == 3);

    // A different host thread must not steal an owned critical section.
    std::atomic<std::uint32_t> competing_result{0xFFFFFFFFu};
    std::thread competitor([&] {
        PPCContext other{};
        other.r3.u32 = address;
        boot_hle::RtlTryEnterCriticalSection(other, base());
        competing_result.store(other.r3.u32, std::memory_order_release);
    });
    competitor.join();
    assert(competing_result.load(std::memory_order_acquire) == 0);

    for (int i = 0; i < 3; ++i) {
        context = {};
        context.r3.u32 = address;
        boot_hle::RtlLeaveCriticalSection(context, base());
    }
    assert(be32(address + 0x10) == 0xFFFFFFFFu);
    assert(be32(address + 0x14) == 0);
    assert(be32(address + 0x18) == 0);

    // Once released, a different host thread can acquire and release it.
    std::atomic<std::uint32_t> acquired_after_release{0};
    std::thread next_owner([&] {
        PPCContext other{};
        other.r3.u32 = address;
        boot_hle::RtlTryEnterCriticalSection(other, base());
        acquired_after_release.store(other.r3.u32, std::memory_order_release);
        if (other.r3.u32 != 0) {
            other.r3.u32 = address;
            boot_hle::RtlLeaveCriticalSection(other, base());
        }
    });
    next_owner.join();
    assert(acquired_after_release.load(std::memory_order_acquire) == 1);
    assert(be32(address + 0x10) == 0xFFFFFFFFu);
    assert(be32(address + 0x14) == 0);
}

void test_tls() {
    constexpr std::uint32_t slot_count = 256;
    constexpr std::uint32_t out_of_indexes = 0xFFFFFFFFu;
    std::vector<std::uint32_t> allocated;
    allocated.reserve(slot_count);

    // The Xbox process TLS bitmap contains 256 indices.
    PPCContext context{};
    for (std::uint32_t i = 0; i < slot_count; ++i) {
        context = {};
        boot_hle::KeTlsAlloc(context, base());
        assert(context.r3.u32 == i);
        allocated.push_back(context.r3.u32);
    }
    context = {};
    boot_hle::KeTlsAlloc(context, base());
    assert(context.r3.u32 == out_of_indexes);

    const auto slot = slot_count - 1;
    context = {};
    context.r3.u32 = slot;
    context.r4.u32 = 0x12345678u;
    boot_hle::KeTlsSetValue(context, base());
    assert(context.r3.u32 == 1);

    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0x12345678u);

    // Each guest thread has an independent value for the same process-wide slot.
    std::atomic<bool> other_thread_ready{false};
    std::atomic<bool> release_other_thread{false};
    std::atomic<std::uint32_t> other_thread_initial{out_of_indexes};
    std::atomic<std::uint32_t> other_thread_value{0};
    std::atomic<std::uint32_t> other_thread_after_free{out_of_indexes};
    std::thread other_thread([&] {
        PPCContext other{};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_initial.store(other.r3.u32, std::memory_order_release);

        other = {};
        other.r3.u32 = slot;
        other.r4.u32 = 0xAABBCCDDu;
        boot_hle::KeTlsSetValue(other, base());
        assert(other.r3.u32 == 1);
        other = {};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_value.store(other.r3.u32, std::memory_order_release);

        other_thread_ready.store(true, std::memory_order_release);
        while (!release_other_thread.load(std::memory_order_acquire))
            std::this_thread::yield();

        other = {};
        other.r3.u32 = slot;
        boot_hle::KeTlsGetValue(other, base());
        other_thread_after_free.store(other.r3.u32, std::memory_order_release);
    });

    while (!other_thread_ready.load(std::memory_order_acquire))
        std::this_thread::yield();
    assert(other_thread_initial.load(std::memory_order_acquire) == 0);
    assert(other_thread_value.load(std::memory_order_acquire) == 0xAABBCCDDu);

    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0x12345678u);

    // Free invalidates the index in every host thread; reallocation clears this thread's stale value.
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 1);
    release_other_thread.store(true, std::memory_order_release);
    other_thread.join();
    assert(other_thread_after_free.load(std::memory_order_acquire) == 0);

    context = {};
    boot_hle::KeTlsAlloc(context, base());
    assert(context.r3.u32 == slot);
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 1);

    // Release the remaining slots and check invalid-index behavior.
    for (std::uint32_t i = 0; i < allocated.size() - 1; ++i) {
        context = {};
        context.r3.u32 = allocated[i];
        boot_hle::KeTlsFree(context, base());
        assert(context.r3.u32 == 1);
    }
    context = {};
    context.r3.u32 = out_of_indexes;
    boot_hle::KeTlsFree(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot_count;
    boot_hle::KeTlsGetValue(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = slot_count;
    context.r4.u32 = 1;
    boot_hle::KeTlsSetValue(context, base());
    assert(context.r3.u32 == 0);
}

void test_events() {
    constexpr std::uint32_t output = 0x7000u;
    constexpr std::uint32_t timeout = 0x7200u;
    constexpr std::uint32_t previous_state = 0x7300u;
    constexpr std::uint32_t status_timeout = 0x00000102u;
    constexpr std::uint32_t status_invalid_handle = 0xC0000008u;
    std::memset(base() + timeout, 0, 8); // zero LARGE_INTEGER => poll

    PPCContext context{};

    // EVENT_TYPE 0 is notification/manual-reset; EVENT_TYPE 1 is synchronization/auto-reset.
    context.r3.u32 = output;
    context.r4.u32 = 0; // unnamed
    context.r5.u32 = 0; // notification event
    context.r6.u32 = 1; // initially signaled
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto manual_handle = be32(output);
    assert(manual_handle != 0);

    for (int i = 0; i < 2; ++i) {
        context = {};
        context.r3.u32 = manual_handle;
        context.r6.u32 = timeout;
        boot_hle::NtWaitForSingleObjectEx(context, base());
        assert(context.r3.u32 == 0); // manual-reset remains signaled
    }

    context = {};
    context.r3.u32 = manual_handle;
    boot_hle::NtClearEvent(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_timeout);

    context = {};
    context.r3.u32 = manual_handle;
    context.r4.u32 = previous_state;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0 && be32(previous_state) == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r4.u32 = previous_state;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0 && be32(previous_state) == 1);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = manual_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_invalid_handle);

    // An auto-reset event consumes its initial signal after one successful wait.
    context = {};
    context.r3.u32 = output + 4;
    context.r4.u32 = 0;
    context.r5.u32 = 1;
    context.r6.u32 = 1;
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto auto_handle = be32(output + 4);
    assert(auto_handle != 0);

    context = {};
    context.r3.u32 = auto_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    context.r3.u32 = auto_handle;
    context.r6.u32 = timeout;
    boot_hle::NtWaitForSingleObjectEx(context, base());
    assert(context.r3.u32 == status_timeout);

    // An infinite wait is released by NtSetEvent, including the signal-before-wait race.
    context = {};
    context.r3.u32 = output + 8;
    context.r4.u32 = 0;
    context.r5.u32 = 1;
    context.r6.u32 = 0;
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0);
    const auto wake_handle = be32(output + 8);

    std::atomic<bool> waiter_started{false};
    std::atomic<std::uint32_t> wait_result{0xFFFFFFFFu};
    std::thread waiter([&] {
        PPCContext wait_context{};
        wait_context.r3.u32 = wake_handle;
        wait_context.r6.u32 = 0; // infinite
        waiter_started.store(true, std::memory_order_release);
        boot_hle::NtWaitForSingleObjectEx(wait_context, base());
        wait_result.store(wait_context.r3.u32, std::memory_order_release);
    });
    while (!waiter_started.load(std::memory_order_acquire)) std::this_thread::yield();

    context = {};
    context.r3.u32 = wake_handle;
    boot_hle::NtSetEvent(context, base());
    assert(context.r3.u32 == 0);
    waiter.join();
    assert(wait_result.load(std::memory_order_acquire) == 0);

    context = {};
    context.r3.u32 = auto_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);
    context = {};
    context.r3.u32 = wake_handle;
    boot_hle::NtClose(context, base());
    assert(context.r3.u32 == 0);

    context = {};
    boot_hle::NtCreateEvent(context, base());
    assert(context.r3.u32 == 0xC000000Du); // NULL handle output is invalid
}

} // namespace

int main() {
    PPCContext ctx{};

    // Constant-returning queries.
    boot_hle::KeGetCurrentProcessType(ctx, base());  assert(ctx.r3.u32 == 1);
    boot_hle::XGetLanguage(ctx, base());             assert(ctx.r3.u32 == 1);
    boot_hle::XGetAVPack(ctx, base());               assert(ctx.r3.u32 == 6);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::FscSetCacheElementCount(ctx, base()); assert(ctx.r3.u32 == 0);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::NetDll_XNetStartup(ctx, base());      assert(ctx.r3.u32 == 0);
    ctx.r3.u32 = 0xFFFFFFFF; boot_hle::NetDll_WSAStartup(ctx, base());       assert(ctx.r3.u32 == 0);

    // RtlInitAnsiString: big-endian {Length, MaximumLength, Buffer}, source not copied.
    poke(0x2000, "Too Human");
    ctx = {}; ctx.r3.u32 = 0x1000; ctx.r4.u32 = 0x2000;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1000) == 9 && be16(0x1002) == 10 && be32(0x1004) == 0x2000);

    // Null source -> empty string, null buffer.
    ctx = {}; ctx.r3.u32 = 0x1010; ctx.r4.u32 = 0;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1010) == 0 && be16(0x1012) == 0 && be32(0x1014) == 0);

    // Empty (non-null) string -> Length 0, MaximumLength 1.
    poke(0x2100, "");
    ctx = {}; ctx.r3.u32 = 0x1020; ctx.r4.u32 = 0x2100;
    boot_hle::RtlInitAnsiString(ctx, base());
    assert(be16(0x1020) == 0 && be16(0x1022) == 1 && be32(0x1024) == 0x2100);

    // Multibyte -> Unicode: widened to big-endian UTF-16, byte count reported.
    poke(0x3000, "AB\xE9");     // 0xE9 is Latin-1 e-acute
    ctx = {}; ctx.r3.u32 = 0x4000; ctx.r4.u32 = 64; ctx.r5.u32 = 0x4F00; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 3;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(ctx.r3.u32 == 0 && be32(0x4F00) == 6);
    assert(be16(0x4000) == 'A' && be16(0x4002) == 'B' && be16(0x4004) == 0x00E9);

    // Output buffer too small: truncates to whole WCHARs (max 3 bytes -> 1 char).
    ctx = {}; ctx.r3.u32 = 0x4100; ctx.r4.u32 = 3; ctx.r5.u32 = 0x4F04; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 3;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(be32(0x4F04) == 2);

    // Optional out-size pointer may be null.
    ctx = {}; ctx.r3.u32 = 0x4200; ctx.r4.u32 = 64; ctx.r5.u32 = 0; ctx.r6.u32 = 0x3000; ctx.r7.u32 = 2;
    boot_hle::RtlMultiByteToUnicodeN(ctx, base());
    assert(ctx.r3.u32 == 0 && be16(0x4200) == 'A');

    // Unicode -> multibyte: > U+00FF becomes '?'.
    put16(0x5000, 'h'); put16(0x5002, 0x4E2D); put16(0x5004, 0x00FF);
    ctx = {}; ctx.r3.u32 = 0x6000; ctx.r4.u32 = 64; ctx.r5.u32 = 0x6F00; ctx.r6.u32 = 0x5000; ctx.r7.u32 = 6;
    boot_hle::RtlUnicodeToMultiByteN(ctx, base());
    assert(ctx.r3.u32 == 0 && be32(0x6F00) == 3);
    assert(g_mem[0x6000] == 'h' && g_mem[0x6001] == '?' && g_mem[0x6002] == 0xFF);

    // Odd source byte count drops the half character; output limit respected.
    ctx = {}; ctx.r3.u32 = 0x6100; ctx.r4.u32 = 1; ctx.r5.u32 = 0x6F04; ctx.r6.u32 = 0x5000; ctx.r7.u32 = 5;
    boot_hle::RtlUnicodeToMultiByteN(ctx, base());
    assert(be32(0x6F04) == 1);

    test_executable_module_lookup();
    test_rtl_image_xex_header_field();
    test_query_volume_information_file();
    test_video_display_queries();
    test_xam_controller_disconnected_profile();
    test_native_event_dispatcher_object();
    test_ke_wait_for_multiple_objects();
    test_wait_for_multiple_objects_hle();
    test_waitable_timer_hle();
    test_critical_sections();
    test_tls();
    test_events();

    return 0;
}
