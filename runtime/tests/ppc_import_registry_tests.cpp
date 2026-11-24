#include "memory/guest_address_space.hpp"
#include "memory/guest_mmio.hpp"
#include "ppc/import_registry.hpp"
#include "ppc/boot_hle.hpp"
#include "fs/guest_vfs.hpp"
#include "ppc/guest_thread_manager.hpp"
#include <ppc_config.h>

#include <array>
#include <atomic>
#include <cassert>
#include <chrono>
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <thread>
#include <vector>

namespace {
PPC_FUNC_IMPL(test_import_handler) {
    (void)base;
    ctx.r3.u32 = 0xBEEF1234u;
}

PPC_FUNC_IMPL(test_default_handler) {
    (void)ctx;
    (void)base;
}

std::uint32_t ppc_test_load_u32(std::uint8_t* base, std::uint32_t address) {
    return PPC_LOAD_U32(address);
}
void ppc_test_store_u32(std::uint8_t* base, std::uint32_t address,
                        std::uint32_t value) {
    PPC_STORE_U32(address, value);
}
}

int main() {
    std::string error;
    {
    toohuman::runtime::LoadedPeImage image;
    image.image_base = 0x82000000u;
    image.image_size = 0x10000u;
    image.entry_point = 0x82001000u;
    image.bytes.resize(image.image_size);

    auto memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(memory.valid());
    assert(memory.map_image(image, &error));
    assert(memory.initialize_function_table(0x82001000u, 0x1000u, &error));
    assert(memory.fill_function_table(&test_default_handler));

    // Reserve writable guest scratch pages after the synthetic function table.
    // The 4 GiB reservation is PROT_NONE until an explicit commit.
    assert(memory.commit_region(0x82012000u, 0x6000u, &error));
    // Back the primary PM4 ring and its read-pointer writeback through the
    // uncached 0xA0000000 physical alias.
    assert(memory.commit_region(0xA0010000u, 0x1000u, &error));
    assert(memory.commit_region(0xA0020000u, 0x1000u, &error));
    assert(memory.commit_region(0xA0030000u, 0x1000u, &error));
    assert(memory.commit_region(0xA0060000u, 0x1000u, &error));
    assert(memory.commit_region(0xA0070000u, 0x1000u, &error));

    // Scalar generated PPC memory accessors must bypass the PROT_NONE guest
    // aperture and use the runtime bus for Xenos/XMA, while preserving direct
    // big-endian RAM behavior for ordinary guest addresses.
    using toohuman::runtime::GuestMmioBus;
    using toohuman::runtime::kXenosMmioBase;
    GuestMmioBus::global().reset();
    const auto xenos_register = kXenosMmioBase + 0x40u;
    ppc_test_store_u32(memory.base(), xenos_register, 0x12345678u);
    assert(ppc_test_load_u32(memory.base(), xenos_register) == 0x12345678u);
    const auto mmio_trace = GuestMmioBus::global().trace();
    assert(mmio_trace.size() == 2u);
    assert(mmio_trace[0].write && mmio_trace[0].value == 0x12345678u);
    assert(!mmio_trace[1].write && mmio_trace[1].value == 0x12345678u);

    ppc_test_store_u32(memory.base(), 0x82012080u, 0x89ABCDEFu);
    assert(ppc_test_load_u32(memory.base(), 0x82012080u) == 0x89ABCDEFu);
    assert(memory.base()[0x82012080u] == 0x89u);
    assert(memory.base()[0x82012083u] == 0xEFu);

    toohuman::runtime::PpcImportRegistry imports;
    assert(imports.register_handler("xboxkrnl.exe", 0x0777u,
                                    &test_import_handler, &error));
    std::size_t startup_hle_count = 0;
    assert(toohuman::runtime::register_boot_imports(imports, &error, &startup_hle_count));
    assert(startup_hle_count == 91u);
    const std::vector<toohuman::runtime::XexImport> metadata{
        {"xboxkrnl.exe", 0x0777u, 0, 1, 0x82001100u},
        {"xboxkrnl.exe", 0x011Bu, 0, 1, 0x82001104u},
        {"xboxkrnl.exe", 0x0126u, 0, 1, 0x82001108u},
        {"xboxkrnl.exe", 0x0066u, 0, 1, 0x8200110Cu},
        {"xboxkrnl.exe", 0x012Eu, 0, 1, 0x82001110u},
        {"xboxkrnl.exe", 0x012Fu, 0, 1, 0x82001114u},
        {"xboxkrnl.exe", 0x0125u, 0, 1, 0x82001118u},
        {"xboxkrnl.exe", 0x0130u, 0, 1, 0x8200111Cu},
        {"xboxkrnl.exe", 0x0141u, 0, 1, 0x82001120u},
        {"xboxkrnl.exe", 0x0152u, 0, 1, 0x82001124u},
        {"xboxkrnl.exe", 0x0153u, 0, 1, 0x82001128u},
        {"xboxkrnl.exe", 0x0154u, 0, 1, 0x8200112Cu},
        {"xboxkrnl.exe", 0x0155u, 0, 1, 0x82001130u},
        {"xboxkrnl.exe", 0x00D1u, 0, 1, 0x82001134u},
        {"xboxkrnl.exe", 0x00F6u, 0, 1, 0x82001138u},
        {"xboxkrnl.exe", 0x00CEu, 0, 1, 0x8200113Cu},
        {"xboxkrnl.exe", 0x00FDu, 0, 1, 0x82001140u},
        {"xboxkrnl.exe", 0x00CFu, 0, 1, 0x82001144u},
        {"xboxkrnl.exe", 0x0135u, 0, 1, 0x82001148u},
        {"xboxkrnl.exe", 0x012Du, 0, 1, 0x8200114Cu},
        {"xboxkrnl.exe", 0x0010u, 0, 1, 0x82001150u},
        {"xam.xex", 0x0282u, 0, 1, 0x82001154u},
        {"xam.xex", 0x02DCu, 0, 1, 0x82001158u},
        {"xboxkrnl.exe", 0x0195u, 0, 1, 0x8200115Cu},
        {"xboxkrnl.exe", 0x0197u, 0, 1, 0x82001160u},
        {"xboxkrnl.exe", 0x0194u, 0, 1, 0x82001164u},
        {"xboxkrnl.exe", 0x012Bu, 0, 1, 0x82001168u},
        {"xboxkrnl.exe", 0x011Bu, 0, 1, 0x8200116Cu},
        {"xboxkrnl.exe", 0x0136u, 0, 1, 0x82001170u},
        {"xboxkrnl.exe", 0x005Au, 0, 1, 0x82001174u},
        {"xboxkrnl.exe", 0x0083u, 0, 1, 0x82001178u},
        {"xboxkrnl.exe", 0x0084u, 0, 1, 0x8200117Cu},
        {"xboxkrnl.exe", 0x0140u, 0, 1, 0x82001180u},
        {"xboxkrnl.exe", 0x013Fu, 0, 1, 0x82001184u},
        {"xboxkrnl.exe", 0x000Du, 0, 1, 0x82001188u},
        {"xboxkrnl.exe", 0x0019u, 0, 1, 0x8200118Cu},
        {"xboxkrnl.exe", 0x0092u, 0, 1, 0x82001190u},
        {"xboxkrnl.exe", 0x00F5u, 0, 1, 0x82001194u},
        {"xboxkrnl.exe", 0x0196u, 0, 1, 0x82001198u},
        {"xboxkrnl.exe", 0x00DAu, 0, 1, 0x8200119Cu},
        {"xboxkrnl.exe", 0x00E4u, 0, 1, 0x820011A0u},
        {"xboxkrnl.exe", 0x00EFu, 0, 1, 0x820011A4u},
        {"xboxkrnl.exe", 0x01B9u, 0, 1, 0x820011A8u},
        {"xboxkrnl.exe", 0x01BAu, 0, 1, 0x820011ACu},
        {"xboxkrnl.exe", 0x01C9u, 0, 1, 0x820011B0u},
        {"xboxkrnl.exe", 0x01CAu, 0, 1, 0x820011B4u},
        {"xam.xex",      0x03D1u, 0, 1, 0x820011B8u},
        {"xam.xex",      0x0190u, 0, 1, 0x820011C4u},
        {"xam.xex",      0x0191u, 0, 1, 0x820011C8u},
        {"xam.xex",      0x0192u, 0, 1, 0x820011CCu},
        {"xam.xex",      0x0198u, 0, 1, 0x820011D0u},
        {"xboxkrnl.exe", 0x0074u, 0, 1, 0x820011D4u},
        {"xboxkrnl.exe", 0x00D4u, 0, 1, 0x820011FCu},
        {"xboxkrnl.exe", 0x00F2u, 0, 1, 0x82001200u},
        {"xboxkrnl.exe", 0x00CDu, 0, 1, 0x82001204u},
        {"xboxkrnl.exe", 0x00D7u, 0, 1, 0x82001208u},
        {"xboxkrnl.exe", 0x00FAu, 0, 1, 0x8200120Cu},
        {"xboxkrnl.exe", 0x00D5u, 0, 1, 0x820011D8u},
        {"xboxkrnl.exe", 0x00F3u, 0, 1, 0x820011DCu},
        {"xboxkrnl.exe", 0x0088u, 0, 1, 0x820011E0u},
        {"xboxkrnl.exe", 0x00B0u, 0, 1, 0x820011E4u},
        {"xboxkrnl.exe", 0x0070u, 0, 1, 0x820011E8u},
        {"xboxkrnl.exe", 0x009Du, 0, 1, 0x820011ECu},
        {"xboxkrnl.exe", 0x008Fu, 0, 1, 0x820011F0u},
        {"xboxkrnl.exe", 0x007Fu, 0, 1, 0x820011F4u},
        {"xboxkrnl.exe", 0x00E2u, 0, 1, 0x820011F8u},
        {"xboxkrnl.exe", 0x01B6u, 0, 1, 0x820011BCu},
        {"xboxkrnl.exe", 0x01C3u, 0, 1, 0x820011C0u},
        {"xboxkrnl.exe", 0x00BEu, 0, 1, 0x82001210u},
        {"xboxkrnl.exe", 0x011Du, 0, 1, 0x82001214u}
    };
    std::size_t registered = 0;
    assert(imports.install(memory, metadata, &registered, &error));
    assert(registered == 70u);
    assert(memory.get_function<PPCFunc*>(0x82001100u) != &test_default_handler);

    // The real kernel imports configure the per-title primary Xenos ring.
    PPCContext ring_init{};
    ring_init.ctr.u32 = 0x820011C0u; // PPC bctrl target used by the import trampoline.
    ring_init.r3.u32 = 0x00010000u;
    ring_init.r4.u32 = 6u; // 1 << (6 + 3) = 512-byte primary ring.
    const auto ring_init_fn = memory.get_function<PPCFunc*>(0x820011C0u);
    assert(ring_init_fn != nullptr);
    ring_init_fn(ring_init, memory.base());
    assert(imports.xenos_command_processor().ring_initialized());
    assert(imports.xenos_command_processor().ring_physical_base() == 0x00010000u);
    assert(imports.xenos_command_processor().ring_size_log2() == 6u);

    PPCContext ring_writeback{};
    ring_writeback.ctr.u32 = 0x820011BCu; // PPC bctrl target used by the import trampoline.
    ring_writeback.r3.u32 = 0x00020000u;
    ring_writeback.r4.u32 = 4u;
    const auto ring_writeback_fn = memory.get_function<PPCFunc*>(0x820011BCu);
    assert(ring_writeback_fn != nullptr);
    ring_writeback_fn(ring_writeback, memory.base());
    assert(imports.xenos_command_processor().read_pointer_writeback_enabled());
    assert(imports.xenos_command_processor().read_pointer_writeback_physical() == 0x00020000u);
    assert(imports.xenos_command_processor().read_pointer_writeback_block_size_log2() == 4u);

    // A scalar PPC write to CP_RB_WPTR enters the configured bounded pump.
    // Type-0 writes update the MMIO mirror without recursively firing WPTR.
    const auto put_guest_be32 = [&](std::uint32_t address, std::uint32_t value) {
        auto* bytes = memory.base() + address;
        bytes[0] = static_cast<std::uint8_t>(value >> 24);
        bytes[1] = static_cast<std::uint8_t>(value >> 16);
        bytes[2] = static_cast<std::uint8_t>(value >> 8);
        bytes[3] = static_cast<std::uint8_t>(value);
    };
    const auto read_guest_be32 = [&](std::uint32_t address) {
        const auto* bytes = memory.base() + address;
        return (std::uint32_t(bytes[0]) << 24) |
               (std::uint32_t(bytes[1]) << 16) |
               (std::uint32_t(bytes[2]) << 8) |
               std::uint32_t(bytes[3]);
    };
    put_guest_be32(0xA0010000u, 0x20u); // One type-0 value to reg 0x20.
    put_guest_be32(0xA0010004u, 0xDEADBEEFu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 2u);
    assert(imports.xenos_command_processor().read_index() == 2u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x20u * 4u, 4) == 0xDEADBEEFu);
    assert(read_guest_be32(0xA0020000u) == 2u);

    // The primary ring can dispatch one bounded linear indirect buffer.
    // Nested indirect buffers and unrelated Type-3 opcodes remain rejected.
    put_guest_be32(0xA0030000u, 0x30u);
    put_guest_be32(0xA0030004u, 0xAABBCCDDu);
    put_guest_be32(0xA0010008u,
        0xC0000000u | (1u << 16) | (0x3Fu << 8)); // INDIRECT_BUFFER, 2 operands.
    put_guest_be32(0xA001000Cu, 0x00030000u);
    put_guest_be32(0xA0010010u, 2u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 5u);
    assert(imports.xenos_command_processor().read_index() == 5u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x30u * 4u, 4) ==
           0xAABBCCDDu);
    assert(read_guest_be32(0xA0020000u) == 5u);

    // A Type-3 NOP is accepted.
    put_guest_be32(0xA0010014u, 0xC0001000u); // PM4_NOP, one operand.
    put_guest_be32(0xA0010018u, 0u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 7u);
    assert(imports.xenos_command_processor().read_index() == 7u);
    assert(read_guest_be32(0xA0020000u) == 7u);

    // Disable every bin with SET_BIN_MASK, then select all bins. A predicated
    // indirect buffer is consumed but skipped while (select & mask) is zero.
    put_guest_be32(0xA001001Cu,
        0xC0000000u | (1u << 16) | (0x50u << 8)); // SET_BIN_MASK, low then high.
    put_guest_be32(0xA0010020u, 0u);
    put_guest_be32(0xA0010024u, 0u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 10u);
    assert(imports.xenos_command_processor().read_index() == 10u);

    put_guest_be32(0xA0010028u,
        0xC0000000u | (1u << 16) | (0x51u << 8)); // SET_BIN_SELECT.
    put_guest_be32(0xA001002Cu, 0xFFFFFFFFu);
    put_guest_be32(0xA0010030u, 0xFFFFFFFFu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 13u);
    assert(imports.xenos_command_processor().read_index() == 13u);

    put_guest_be32(0xA0010034u,
        0xC0000000u | (1u << 16) | (0x3Fu << 8) | 1u);
    put_guest_be32(0xA0010038u, 0x00030000u);
    put_guest_be32(0xA001003Cu, 2u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 16u);
    assert(imports.xenos_command_processor().read_index() == 16u);
    assert(read_guest_be32(0xA0020000u) == 16u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x31u * 4u, 4) == 0u); // Predicated IB was skipped.

    // Restore an all-ones bin mask so unpredicated commands and passing
    // predicated commands execute normally again.
    put_guest_be32(0xA0010040u,
        0xC0000000u | (1u << 16) | (0x50u << 8));
    put_guest_be32(0xA0010044u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010048u, 0xFFFFFFFFu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 19u);
    assert(imports.xenos_command_processor().read_index() == 19u);

    // A predicated indirect buffer with a nonzero bin-select/mask intersection
    // must execute; only a failed predicate is consumed without dispatch.
    put_guest_be32(0xA0030008u, 0x32u); // type-0 register write inside the IB.
    put_guest_be32(0xA003000Cu, 0xFEEDBEEFu);
    put_guest_be32(0xA00100C8u,
        0xC0000000u | (1u << 16) | (0x3Fu << 8) | 1u);
    put_guest_be32(0xA00100CCu, 0x00030008u);
    put_guest_be32(0xA00100D0u, 2u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 53u);
    assert(imports.xenos_command_processor().read_index() == 53u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x32u * 4u, 4) ==
           0xFEEDBEEFu);
    assert(read_guest_be32(0xA0020000u) == 53u);

    // PM4 MEM_WRITE stores guest big-endian dwords at a validated physical
    // target; invalid ranges reject before any data is written.
    put_guest_be32(0xA001004Cu,
        0xC0000000u | (1u << 16) | (0x3Du << 8)); // MEM_WRITE, address + one value.
    put_guest_be32(0xA0010050u, 0x00060000u);
    put_guest_be32(0xA0010054u, 0xCAFEBABEu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 22u);
    assert(imports.xenos_command_processor().read_index() == 22u);
    assert(read_guest_be32(0xA0020000u) == 22u);
    assert(read_guest_be32(0xA0060000u) == 0xCAFEBABEu);

    // REG_TO_MEM copies the register mirror to validated guest physical memory.
    put_guest_be32(0xA0010058u,
        0xC0000000u | (1u << 16) | (0x3Eu << 8));
    put_guest_be32(0xA001005Cu, 0x30u);
    put_guest_be32(0xA0010060u, 0x00070000u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 25u);
    assert(imports.xenos_command_processor().read_index() == 25u);
    assert(read_guest_be32(0xA0070000u) == 0xAABBCCDDu);

    // REG_RMW applies immediate AND/OR masks to a selected Xenos register.
    put_guest_be32(0xA0010064u,
        0xC0000000u | (2u << 16) | (0x21u << 8));
    put_guest_be32(0xA0010068u, 0x30u);
    put_guest_be32(0xA001006Cu, 0x00FF00FFu);
    put_guest_be32(0xA0010070u, 0x550000AAu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 29u);
    assert(imports.xenos_command_processor().read_index() == 29u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x30u * 4u, 4) ==
           0x55BB00FFu);

    // COND_WRITE compares a guest physical dword and conditionally updates a
    // register when the masked value matches.
    put_guest_be32(0xA0010074u,
        0xC0000000u | (5u << 16) | (0x45u << 8));
    put_guest_be32(0xA0010078u, 0x13u); // Equal, memory source, register target.
    put_guest_be32(0xA001007Cu, 0x00060000u);
    put_guest_be32(0xA0010080u, 0xCAFEBABEu);
    put_guest_be32(0xA0010084u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010088u, 0x31u);
    put_guest_be32(0xA001008Cu, 0x0BADF00Du);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 36u);
    assert(imports.xenos_command_processor().read_index() == 36u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x31u * 4u, 4) ==
           0x0BADF00Du);

    // A memory-target COND_WRITE uses a checked register comparison and
    // the checked physical write path.
    put_guest_be32(0xA0010090u,
        0xC0000000u | (5u << 16) | (0x45u << 8));
    put_guest_be32(0xA0010094u, 0x103u); // Equal, register poll, memory target.
    put_guest_be32(0xA0010098u, 0x30u);
    put_guest_be32(0xA001009Cu, 0x55BB00FFu);
    put_guest_be32(0xA00100A0u, 0xFFFFFFFFu);
    put_guest_be32(0xA00100A4u, 0x00060004u);
    put_guest_be32(0xA00100A8u, 0x11223344u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 43u);
    assert(imports.xenos_command_processor().read_index() == 43u);
    assert(read_guest_be32(0xA0060004u) == 0x11223344u);
    assert(read_guest_be32(0xA0020000u) == 43u);

    // A non-matching condition consumes the packet without writing its target.
    put_guest_be32(0xA00100ACu,
        0xC0000000u | (5u << 16) | (0x45u << 8));
    put_guest_be32(0xA00100B0u, 3u); // Equal, register source, register target.
    put_guest_be32(0xA00100B4u, 0x30u);
    put_guest_be32(0xA00100B8u, 0xFFFFFFFFu); // Does not equal current 0x55BB00FF.
    put_guest_be32(0xA00100BCu, 0xFFFFFFFFu);
    put_guest_be32(0xA00100C0u, 0x32u);
    put_guest_be32(0xA00100C4u, 0x12345678u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 50u);
    assert(imports.xenos_command_processor().read_index() == 50u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x32u * 4u, 4) == 0u);

    // WAIT_REG_MEM defers without consuming the packet or publishing RPTR.
    // A guest write to the polled register wakes the pump and retries the wait.
    put_guest_be32(0xA00100D4u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8));
    put_guest_be32(0xA00100D8u, 3u); // Equal, register source.
    put_guest_be32(0xA00100DCu, 0x12345678u);
    put_guest_be32(0xA00100E0u, 0xFFFFFFFFu);
    put_guest_be32(0xA00100E4u, 0u);
    put_guest_be32(0xA00100E8u, 0u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 59u);
    assert(imports.xenos_command_processor().read_index() == 53u);
    assert(read_guest_be32(0xA0020000u) == 53u);

    ppc_test_store_u32(memory.base(), kXenosMmioBase + 3u * 4u, 0x12345678u);
    assert(imports.xenos_command_processor().read_index() == 59u);
    assert(read_guest_be32(0xA0020000u) == 59u);

    // EVENT_WRITE updates the VGT event initiator register.
    put_guest_be32(0xA00100ECu,
        0xC0000000u | (0u << 16) | (0x46u << 8));
    put_guest_be32(0xA00100F0u, 0x123u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 61u);
    assert(imports.xenos_command_processor().read_index() == 61u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x21F9u * 4u, 4) == 0x23u);

    // EVENT_WRITE_SHD writes its supplied value to checked physical memory
    // and records the low six event-initiator bits. Timestamp mode is rejected.
    put_guest_be32(0xA00100F4u,
        0xC0000000u | (2u << 16) | (0x58u << 8));
    put_guest_be32(0xA00100F8u, 0x35u);
    put_guest_be32(0xA00100FCu, 0x00060010u);
    put_guest_be32(0xA0010100u, 0xF00DBAADu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 65u);
    assert(imports.xenos_command_processor().read_index() == 65u);
    assert(read_guest_be32(0xA0060010u) == 0xF00DBAADu);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x21F9u * 4u, 4) == 0x35u);

    // EVENT_WRITE_EXT stores the fixed 8-in-16 surface extent record.
    put_guest_be32(0xA0010104u,
        0xC0000000u | (1u << 16) | (0x5Au << 8));
    put_guest_be32(0xA0010108u, 0x29u);
    put_guest_be32(0xA001010Cu, 0x00060020u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 68u);
    assert(imports.xenos_command_processor().read_index() == 68u);
    assert(read_guest_be32(0xA0060020u) == 0x00000004u);
    assert(read_guest_be32(0xA0060024u) == 0x00000004u);
    assert(read_guest_be32(0xA0060028u) == 0x00000100u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x21F9u * 4u, 4) == 0x29u);

    // ME_INIT, WAIT_FOR_IDLE, CONTEXT_UPDATE and INVALIDATE_STATE are
    // accepted as side-effect-free markers pending GPU backend integration.
    const std::array<std::uint32_t, 4> marker_opcodes{0x48u, 0x26u, 0x5Eu, 0x3Bu};
    std::uint32_t marker_write_pointer = 68u;
    for (const auto opcode : marker_opcodes) {
        put_guest_be32(0xA0010000u + marker_write_pointer * 4u,
            0xC0000000u | (opcode << 8));
        put_guest_be32(0xA0010004u + marker_write_pointer * 4u, 0u);
        marker_write_pointer += 2u;
        ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u,
                           marker_write_pointer);
        assert(imports.xenos_command_processor().read_index() == marker_write_pointer);
    }

    // An indirect buffer may defer on WAIT_REG_MEM. The saved inner cursor
    // prevents the initial register write from being replayed on MMIO wake-up.
    put_guest_be32(0xA0030000u, 0x34u); // Type-0 write before the wait.
    put_guest_be32(0xA0030004u, 0xAAAAAAAAu);
    put_guest_be32(0xA0030008u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8));
    put_guest_be32(0xA003000Cu, 3u); // Equal, register source.
    put_guest_be32(0xA0030010u, 0xCAFEBABEu);
    put_guest_be32(0xA0030014u, 0xFFFFFFFFu);
    put_guest_be32(0xA0030018u, 0u);
    put_guest_be32(0xA003001Cu, 0u);
    put_guest_be32(0xA0030020u, 0x35u); // Type-0 write after the wait.
    put_guest_be32(0xA0030024u, 0xBBBBBBBBu);

    put_guest_be32(0xA0010130u,
        0xC0000000u | (1u << 16) | (0x3Fu << 8));
    put_guest_be32(0xA0010134u, 0x00030000u);
    put_guest_be32(0xA0010138u, 10u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 79u);
    assert(imports.xenos_command_processor().read_index() == 76u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x34u * 4u, 4) ==
           0xAAAAAAAAu);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x35u * 4u, 4) == 0u);

    ppc_test_store_u32(memory.base(), kXenosMmioBase + 3u * 4u, 0xCAFEBABEu);
    assert(imports.xenos_command_processor().read_index() == 79u);
    assert(read_guest_be32(0xA0020000u) == 79u);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x34u * 4u, 4) ==
           0xAAAAAAAAu);
    assert(GuestMmioBus::global().read(kXenosMmioBase + 0x35u * 4u, 4) ==
           0xBBBBBBBBu);

    // A multi-register Type-0 packet crosses the ring end and MMIO aperture
    // boundary; packet-wide preflight rejects it before the first write.
    put_guest_be32(0xA00101FCu, (1u << 16) | 0x3FFFu); // Ring dword 127.
    put_guest_be32(0xA0010000u, 0x11111111u);          // Ring dword 0.
    put_guest_be32(0xA0010004u, 0x22222222u);          // Ring dword 1.
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 2u);
    assert(imports.xenos_command_processor().read_index() == 127u);
    assert(read_guest_be32(0xA0020000u) == 127u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x3FFFu * 4u, 4) == 0u);
    PPCContext context{};
    context.ctr.u32 = 0x82001100u;
    const auto import_thunk = memory.get_function<PPCFunc*>(0x82001100u);
    assert(import_thunk != nullptr);
    import_thunk(context, memory.base());
    assert(context.r3.u32 == 0xBEEF1234u);

    // Xenos scratch-register writes mirror selected register values into
    // checked guest physical memory. The mask and address are programmed
    // before a three-register Type-0 packet writes scratch slots 0, 1 and 2.
    assert(imports.initialize_xenos_ring(0x00010000u, 6u, &error));
    put_guest_be32(0xA0010000u, (1u << 16) | 0x01DCu); // SCRATCH_UMSK, then ADDR.
    put_guest_be32(0xA0010004u, 0x5u);                 // Enable slots 0 and 2.
    put_guest_be32(0xA0010008u, 0x00060040u);          // Guest physical alias A0060040.
    put_guest_be32(0xA001000Cu, (2u << 16) | 0x0578u); // Three scratch registers.
    put_guest_be32(0xA0010010u, 0x11111111u);
    put_guest_be32(0xA0010014u, 0x22222222u);
    put_guest_be32(0xA0010018u, 0x33333333u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 7u);
    assert(imports.xenos_command_processor().read_index() == 7u);
    assert(read_guest_be32(0xA0060040u) == 0x11111111u);
    assert(read_guest_be32(0xA0060044u) == 0u); // Slot 1 is masked off.
    assert(read_guest_be32(0xA0060048u) == 0x33333333u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x0579u * 4u, 4) == 0x22222222u);

    // Direct CPU MMIO writes use the same scratch writeback behavior.
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01DCu * 4u, 0xDu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x057Bu * 4u, 0x44444444u);
    assert(read_guest_be32(0xA006004Cu) == 0x44444444u);

    // Type-3 REG_RMW writes also pass through the scratch writeback path.
    put_guest_be32(0xA001001Cu,
        0xC0000000u | (2u << 16) | (0x21u << 8)); // REG_RMW, three operands.
    put_guest_be32(0xA0010020u, 0x057Au);         // Scratch slot 2.
    put_guest_be32(0xA0010024u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010028u, 0x80000000u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 11u);
    assert(imports.xenos_command_processor().read_index() == 11u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x057Au * 4u, 4) == 0xB3333333u);
    assert(read_guest_be32(0xA0060048u) == 0xB3333333u);

    // A register-target COND_WRITE also uses the scratch writeback path.
    put_guest_be32(0xA001002Cu,
        0xC0000000u | (5u << 16) | (0x45u << 8)); // Six payload dwords.
    put_guest_be32(0xA0010030u, 3u);             // Equal, register poll, register target.
    put_guest_be32(0xA0010034u, 0x30u);
    put_guest_be32(0xA0010038u, 0x55BB00FFu);
    put_guest_be32(0xA001003Cu, 0xFFFFFFFFu);
    put_guest_be32(0xA0010040u, 0x0578u);         // Scratch slot 0.
    put_guest_be32(0xA0010044u, 0x55555555u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 18u);
    assert(imports.xenos_command_processor().read_index() == 18u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x0578u * 4u, 4) == 0x55555555u);
    assert(read_guest_be32(0xA0060040u) == 0x55555555u);

    // Invalid scratch destinations reject the PM4 packet before the register
    // mirror or previously committed scratch memory is modified.
    put_guest_be32(0xA0010048u, 0x8000u | 0x01DDu); // SCRATCH_ADDR = uncommitted page.
    put_guest_be32(0xA001004Cu, 0x00080000u);
    put_guest_be32(0xA0010050u, 0x8000u | 0x0578u); // One write to scratch slot 0.
    put_guest_be32(0xA0010054u, 0x99999999u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 22u);
    assert(imports.xenos_command_processor().read_index() == 20u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x0578u * 4u, 4) == 0x55555555u);
    assert(read_guest_be32(0xA0060040u) == 0x55555555u);

    // COHER_STATUS_HOST is set by CPU and PM4 writes. A WAIT_REG_MEM
    // reading this register acknowledges the pending coherency flag before
    // evaluating its comparison, allowing the following packet to proceed.
    constexpr std::uint32_t kCoherStatusHost = 0x0A31u;
    ppc_test_store_u32(memory.base(),
        kXenosMmioBase + kCoherStatusHost * 4u, 0x01000000u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + kCoherStatusHost * 4u, 4) == 0x81000000u);

    assert(imports.initialize_xenos_ring(0x00010000u, 6u, &error));
    put_guest_be32(0xA0010000u, kCoherStatusHost);
    put_guest_be32(0xA0010004u, 0x03000000u);
    put_guest_be32(0xA0010008u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8)); // WAIT_REG_MEM, five operands.
    put_guest_be32(0xA001000Cu, 3u); // Equal, register source.
    put_guest_be32(0xA0010010u, kCoherStatusHost);
    put_guest_be32(0xA0010014u, 0u); // Reference: zero after acknowledgement.
    put_guest_be32(0xA0010018u, 0x80000000u);
    put_guest_be32(0xA001001Cu, 0u); // No delay.
    put_guest_be32(0xA0010020u, 0x33u); // Type-0 command following the wait.
    put_guest_be32(0xA0010024u, 0xBEEFF00Du);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 10u);
    assert(imports.xenos_command_processor().read_index() == 10u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + kCoherStatusHost * 4u, 4) == 0u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x33u * 4u, 4) == 0xBEEFF00Du);

    // Guest-memory WAIT_REG_MEM wakes from a translated PPC RAM store that
    // overlaps the watched physical dword; no extra CP_RB_WPTR is required.
    assert(imports.initialize_xenos_ring(0x00010000u, 6u, &error));
    put_guest_be32(0xA0010000u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8)); // WAIT_REG_MEM, five operands.
    put_guest_be32(0xA0010004u, 0x13u);           // Equal, memory source.
    put_guest_be32(0xA0010008u, 0x00060000u);     // Physical address -> A0060000.
    put_guest_be32(0xA001000Cu, 0xCAFEBABEu);
    put_guest_be32(0xA0010010u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010014u, 0u);
    put_guest_be32(0xA0010018u, 0x34u);           // Register write after the wait.
    put_guest_be32(0xA001001Cu, 0x0BADF00Du);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 8u);
    assert(imports.xenos_command_processor().read_index() == 0u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x34u * 4u, 4) == 0u);

    // An adjacent dword does not wake the wait; only an overlapping store does.
    ppc_test_store_u32(memory.base(), 0xA0060004u, 0xCAFEBABEu);
    assert(imports.xenos_command_processor().read_index() == 0u);

    ppc_test_store_u32(memory.base(), 0xA0060000u, 0xCAFEBABEu);
    assert(imports.xenos_command_processor().read_index() == 8u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x34u * 4u, 4) == 0x0BADF00Du);

    // Big-endian scalar stores performed by boot HLE also wake a memory wait.
    // VdQueryVideoMode writes its width first; that dword satisfies the wait
    // and allows the following ring packet to execute without another WPTR.
    assert(imports.initialize_xenos_ring(0x00010000u, 6u, &error));
    put_guest_be32(0xA0010000u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8));
    put_guest_be32(0xA0010004u, 0x13u);           // Equal, memory source.
    put_guest_be32(0xA0010008u, 0x00060000u);     // Physical address -> A0060000.
    put_guest_be32(0xA001000Cu, 1280u);
    put_guest_be32(0xA0010010u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010014u, 0u);
    put_guest_be32(0xA0010018u, 0x35u);
    put_guest_be32(0xA001001Cu, 0xC0DEC0DEu);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 8u);
    assert(imports.xenos_command_processor().read_index() == 0u);

    PPCContext hle_video_mode{};
    hle_video_mode.r3.u32 = 0xA0060000u;
    toohuman::runtime::boot_hle::VdQueryVideoMode(hle_video_mode, memory.base());
    assert(hle_video_mode.r3.u32 == 0xA0060000u);
    assert(imports.xenos_command_processor().read_index() == 8u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x35u * 4u, 4) == 0xC0DEC0DEu);

    // NtReadFile's direct guest-buffer fill also wakes memory-polled waits.
    assert(imports.initialize_xenos_ring(0x00010000u, 6u, &error));
    put_guest_be32(0xA0010000u,
        0xC0000000u | (4u << 16) | (0x3Cu << 8));
    put_guest_be32(0xA0010004u, 0x13u);           // Equal, memory source.
    put_guest_be32(0xA0010008u, 0x00060100u);     // Physical address -> A0060100.
    put_guest_be32(0xA001000Cu, 0x11223344u);
    put_guest_be32(0xA0010010u, 0xFFFFFFFFu);
    put_guest_be32(0xA0010014u, 0u);
    put_guest_be32(0xA0010018u, 0x36u);
    put_guest_be32(0xA001001Cu, 0xFACE0FF0u);
    ppc_test_store_u32(memory.base(), kXenosMmioBase + 0x01C5u * 4u, 8u);
    assert(imports.xenos_command_processor().read_index() == 0u);

    const auto file_path = std::filesystem::temp_directory_path() /
        ("toohuman-wait-" + std::to_string(
            std::chrono::steady_clock::now().time_since_epoch().count()) + ".bin");
    {
        std::ofstream stream(file_path, std::ios::binary);
        std::vector<std::uint8_t> file_bytes(0x104u, 0u);
        file_bytes[0x100u] = 0x11u;
        file_bytes[0x101u] = 0x22u;
        file_bytes[0x102u] = 0x33u;
        file_bytes[0x103u] = 0x44u;
        stream.write(reinterpret_cast<const char*>(file_bytes.data()),
                     static_cast<std::streamsize>(file_bytes.size()));
        assert(stream.good());
    }
    auto guest_file = std::make_shared<toohuman::runtime::GuestFile>(
        file_path, false, true, false, false);
    const auto file_handle = toohuman::runtime::process_kernel_objects().insert(guest_file);
    assert(file_handle.has_value());

    PPCContext read_file_context{};
    read_file_context.r3.u32 = *file_handle;
    read_file_context.r7.u32 = 0xA0060300u;
    read_file_context.r8.u32 = 0xA0060000u;
    read_file_context.r9.u32 = 0x104u;
    toohuman::runtime::boot_hle::NtReadFile(read_file_context, memory.base());
    assert(read_file_context.r3.u32 == 0u);
    assert(read_guest_be32(0xA0060100u) == 0x11223344u);
    assert(read_guest_be32(0xA0060300u) == 0u);
    assert(read_guest_be32(0xA0060304u) == 0x104u);
    assert(imports.xenos_command_processor().read_index() == 8u);
    assert(GuestMmioBus::global().read(
        kXenosMmioBase + 0x36u * 4u, 4) == 0xFACE0FF0u);

    assert(toohuman::runtime::process_kernel_objects().close(*file_handle));
    guest_file.reset();
    std::filesystem::remove(file_path);

    const auto call_test_import = [&](std::uint32_t thunk, PPCContext& ctx) {
        ctx.ctr.u32 = thunk;
        const auto function = memory.get_function<PPCFunc*>(thunk);
        assert(function != nullptr);
        function(ctx, memory.base());
    };
    // MmGetPhysicalAddress resolves committed addresses in the runtime's
    // uncached physical alias, and does not invent mappings for arbitrary VAs.
    PPCContext physical_alias_query{};
    physical_alias_query.r3.u32 = 0xA0060000u;
    call_test_import(0x82001210u, physical_alias_query);
    assert(physical_alias_query.r3.u32 == 0x00060000u);

    PPCContext ordinary_virtual_query{};
    ordinary_virtual_query.r3.u32 = 0x82012000u;
    call_test_import(0x82001210u, ordinary_virtual_query);
    assert(ordinary_virtual_query.r3.u32 == 0u);

    PPCContext uncommitted_alias_query{};
    uncommitted_alias_query.r3.u32 = 0xA0080000u;
    call_test_import(0x82001210u, uncommitted_alias_query);
    assert(uncommitted_alias_query.r3.u32 == 0u);
    // RtlCompareStringN compares bounded ANSI spans and optionally folds
    // ASCII case. The title uses 0xFFFF lengths for NUL-terminated strings.
    const auto store_guest_ascii = [&](std::uint32_t address, const char* value) {
        std::size_t length = 0;
        while (value[length] != '\0') {
            memory.base()[address + static_cast<std::uint32_t>(length)] =
                static_cast<std::uint8_t>(value[length]);
            ++length;
        }
        memory.base()[address + static_cast<std::uint32_t>(length)] = 0u;
    };
    store_guest_ascii(0x82012200u, "Alpha");
    store_guest_ascii(0x82012220u, "alpha");
    store_guest_ascii(0x82012240u, "alphabet");
    PPCContext compare_strings{};
    compare_strings.r3.u32 = 0x82012200u;
    compare_strings.r4.u32 = 5u;
    compare_strings.r5.u32 = 0x82012220u;
    compare_strings.r6.u32 = 5u;
    compare_strings.r7.u32 = 0u;
    call_test_import(0x82001214u, compare_strings);
    assert(static_cast<std::int32_t>(compare_strings.r3.u32) < 0);

    compare_strings = {};
    compare_strings.r3.u32 = 0x82012200u;
    compare_strings.r4.u32 = 0xFFFFu;
    compare_strings.r5.u32 = 0x82012220u;
    compare_strings.r6.u32 = 0xFFFFu;
    compare_strings.r7.u32 = 1u;
    call_test_import(0x82001214u, compare_strings);
    assert(compare_strings.r3.u32 == 0u);

    // Explicit lengths compare only the shared prefix, matching the XDK's
    // RtlCompareStringN behavior for two supplied spans.
    compare_strings = {};
    compare_strings.r3.u32 = 0x82012200u;
    compare_strings.r4.u32 = 3u;
    compare_strings.r5.u32 = 0x82012240u;
    compare_strings.r6.u32 = 3u;
    call_test_import(0x82001214u, compare_strings);
    assert(compare_strings.r3.u32 == 0u);

    // The volume-information export uses the Xbox ABI:
    // (handle, iosb, information, length, information_class).
    // Supply valid non-handle arguments so the test reaches handle dispatch.
    PPCContext volume_dispatch_context{};
    volume_dispatch_context.r3.u32 = 0xDEADBEEFu;
    volume_dispatch_context.r4.u32 = 0x82012000u; // Writable scratch IO_STATUS_BLOCK.
    volume_dispatch_context.r6.u32 = 24u;          // FILE_FS_VOLUME_INFORMATION size.
    volume_dispatch_context.r7.u32 = 1u;           // FileFsVolumeInformation.
    call_test_import(0x820011A4u, volume_dispatch_context);
    assert(volume_dispatch_context.r3.u32 == 0xC0000008u); // Invalid handle.

    PPCContext video_flags_dispatch{};
    call_test_import(0x820011B0u, video_flags_dispatch);
    assert(video_flags_dispatch.r3.u32 == 3u);
    PPCContext xget_video_dispatch{};
    xget_video_dispatch.r3.u32 = 0x82012040u;
    call_test_import(0x820011B8u, xget_video_dispatch);
    assert(xget_video_dispatch.r3.u32 == 0u);
    const auto* mode_bytes = memory.base() + 0x82012040u;
    const auto mode_width = (std::uint32_t(mode_bytes[0]) << 24) |
        (std::uint32_t(mode_bytes[1]) << 16) |
        (std::uint32_t(mode_bytes[2]) << 8) | mode_bytes[3];
    assert(mode_width == 1280u);

    // XAM controller imports bind to the headless disconnected-device profile.
    PPCContext input_capabilities{};
    input_capabilities.r3.u32 = 0xFFu;
    input_capabilities.r4.u32 = 1u;
    input_capabilities.r5.u32 = 0;
    call_test_import(0x820011C4u, input_capabilities);
    assert(input_capabilities.r3.u32 == 0xA0u); // ERROR_BAD_ARGUMENTS.

    input_capabilities = {};
    input_capabilities.r5.u32 = 0x82013040u;
    call_test_import(0x820011C4u, input_capabilities);
    assert(input_capabilities.r3.u32 == 0x48Fu); // ERROR_DEVICE_NOT_CONNECTED.

    PPCContext input_state{};
    input_state.r5.u32 = 0; // NULL is a permitted connection query.
    call_test_import(0x820011C8u, input_state);
    assert(input_state.r3.u32 == 0x48Fu);

    PPCContext input_set_state{};
    call_test_import(0x820011CCu, input_set_state);
    assert(input_set_state.r3.u32 == 0xA0u);
    input_set_state = {};
    input_set_state.r5.u32 = 0x82013040u;
    call_test_import(0x820011CCu, input_set_state);
    assert(input_set_state.r3.u32 == 0x48Fu);

    PPCContext input_keystroke{};
    input_keystroke.r3.u32 = 0x60000000u; // Invalid user-index pointer.
    input_keystroke.r5.u32 = 0x82013050u;
    call_test_import(0x820011D0u, input_keystroke);
    assert(input_keystroke.r3.u32 == 0xA0u);
    input_keystroke = {};
    input_keystroke.r3.u32 = 0x82012080u;
    input_keystroke.r5.u32 = 0x82013050u;
    call_test_import(0x820011D0u, input_keystroke);
    assert(input_keystroke.r3.u32 == 0x48Fu);

    // A mutant initially owned by the creator supports recursive waits and
    // must be released the same number of times before it becomes available.
    constexpr std::uint32_t mutant_handle_output = 0x82013078u;
    PPCContext create_mutant{};
    create_mutant.r3.u32 = mutant_handle_output;
    create_mutant.r5.u32 = 1u; // Initial owner = calling host thread.
    call_test_import(0x820011FCu, create_mutant);
    assert(create_mutant.r3.u32 == 0u);
    const auto mutant_handle = read_guest_be32(mutant_handle_output);
    assert(mutant_handle != 0u);

    PPCContext wait_mutant{};
    wait_mutant.r3.u32 = mutant_handle;
    wait_mutant.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, wait_mutant);
    assert(wait_mutant.r3.u32 == 0u); // Recursive acquisition succeeds.

    PPCContext release_mutant{};
    release_mutant.r3.u32 = mutant_handle;
    call_test_import(0x82001200u, release_mutant);
    assert(release_mutant.r3.u32 == 0u); // Still recursively owned.
    release_mutant = {};
    release_mutant.r3.u32 = mutant_handle;
    call_test_import(0x82001200u, release_mutant);
    assert(release_mutant.r3.u32 == 0u); // Fully released.
    release_mutant = {};
    release_mutant.r3.u32 = mutant_handle;
    call_test_import(0x82001200u, release_mutant);
    assert(release_mutant.r3.u32 == 0xC0000046u); // STATUS_MUTANT_NOT_OWNED.

    wait_mutant = {};
    wait_mutant.r3.u32 = mutant_handle;
    wait_mutant.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, wait_mutant);
    assert(wait_mutant.r3.u32 == 0u); // Free mutant can be acquired.
    release_mutant = {};
    release_mutant.r3.u32 = mutant_handle;
    call_test_import(0x82001200u, release_mutant);
    assert(release_mutant.r3.u32 == 0u);
    PPCContext close_mutant{};
    close_mutant.r3.u32 = mutant_handle;
    call_test_import(0x82001144u, close_mutant);
    assert(close_mutant.r3.u32 == 0u);

    // NtCreateSemaphore exposes a handle; each successful wait consumes one
    // count, and releases return the previous count before waking waiters.
    constexpr std::uint32_t semaphore_handle_output = 0x82013060u;
    constexpr std::uint32_t semaphore_previous_count = 0x82013064u;
    PPCContext create_semaphore{};
    create_semaphore.r3.u32 = semaphore_handle_output;
    create_semaphore.r5.u32 = 1u; // Initial count.
    create_semaphore.r6.u32 = 2u; // Maximum count.
    call_test_import(0x820011D8u, create_semaphore);
    assert(create_semaphore.r3.u32 == 0u);
    const auto semaphore_handle = read_guest_be32(semaphore_handle_output);
    assert(semaphore_handle != 0u);

    // Invalid timeout storage must be rejected before the semaphore count changes.
    PPCContext invalid_semaphore_timeout{};
    invalid_semaphore_timeout.r3.u32 = semaphore_handle;
    invalid_semaphore_timeout.r6.u32 = 0x60000000u;
    call_test_import(0x82001140u, invalid_semaphore_timeout);
    assert(invalid_semaphore_timeout.r3.u32 == 0xC0000005u);

    // A zero release is an invalid parameter and does not change the count.
    PPCContext zero_semaphore_release{};
    zero_semaphore_release.r3.u32 = semaphore_handle;
    zero_semaphore_release.r4.u32 = 0u;
    zero_semaphore_release.r5.u32 = semaphore_previous_count;
    call_test_import(0x820011DCu, zero_semaphore_release);
    assert(zero_semaphore_release.r3.u32 == 0xC000000Du);

    PPCContext semaphore_wait{};
    semaphore_wait.r3.u32 = semaphore_handle;
    semaphore_wait.r6.u32 = 0x82013004u; // Zero LARGE_INTEGER: poll.
    call_test_import(0x82001140u, semaphore_wait);
    assert(semaphore_wait.r3.u32 == 0u);
    semaphore_wait = {};
    semaphore_wait.r3.u32 = semaphore_handle;
    semaphore_wait.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, semaphore_wait);
    assert(semaphore_wait.r3.u32 == 0x102u); // The initial count was consumed.

    PPCContext release_semaphore{};
    release_semaphore.r3.u32 = semaphore_handle;
    release_semaphore.r4.u32 = 1u;
    release_semaphore.r5.u32 = semaphore_previous_count;
    call_test_import(0x820011DCu, release_semaphore);
    assert(release_semaphore.r3.u32 == 0u);
    assert(read_guest_be32(semaphore_previous_count) == 0u);
    semaphore_wait = {};
    semaphore_wait.r3.u32 = semaphore_handle;
    semaphore_wait.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, semaphore_wait);
    assert(semaphore_wait.r3.u32 == 0u);

    // Fill to the configured limit; an extra release must fail.
    release_semaphore = {};
    release_semaphore.r3.u32 = semaphore_handle;
    release_semaphore.r4.u32 = 2u;
    release_semaphore.r5.u32 = semaphore_previous_count;
    call_test_import(0x820011DCu, release_semaphore);
    assert(release_semaphore.r3.u32 == 0u);
    assert(read_guest_be32(semaphore_previous_count) == 0u);
    release_semaphore = {};
    release_semaphore.r3.u32 = semaphore_handle;
    release_semaphore.r4.u32 = 1u;
    call_test_import(0x820011DCu, release_semaphore);
    assert(release_semaphore.r3.u32 == 0xC0000047u);
    // NtPulseEvent uses the handle form and reports the previous signal state.
    constexpr std::uint32_t pulse_event_handle_output = 0x82013068u;
    constexpr std::uint32_t pulse_event_previous_output = 0x8201306Cu;
    PPCContext create_pulse_event{};
    create_pulse_event.r3.u32 = pulse_event_handle_output;
    create_pulse_event.r5.u32 = 1u;
    create_pulse_event.r6.u32 = 0u;
    call_test_import(0x82001134u, create_pulse_event);
    assert(create_pulse_event.r3.u32 == 0u);
    const auto pulse_event_handle = read_guest_be32(pulse_event_handle_output);
    PPCContext pulse_handle_event{};
    pulse_handle_event.r3.u32 = pulse_event_handle;
    pulse_handle_event.r4.u32 = pulse_event_previous_output;
    call_test_import(0x820011F8u, pulse_handle_event);
    assert(pulse_handle_event.r3.u32 == 0u);
    assert(read_guest_be32(pulse_event_previous_output) == 0u);
    PPCContext close_pulse_event{};
    close_pulse_event.r3.u32 = pulse_event_handle;
    call_test_import(0x82001144u, close_pulse_event);
    assert(close_pulse_event.r3.u32 == 0u);

    PPCContext close_semaphore{};
    close_semaphore.r3.u32 = semaphore_handle;
    call_test_import(0x82001144u, close_semaphore);
    assert(close_semaphore.r3.u32 == 0u);

    // KeInitializeSemaphore backs a native 0x14-byte big-endian guest
    // dispatcher object. KeWait/KeRelease use that same guest address.
    constexpr std::uint32_t native_semaphore = 0x82015180u;
    PPCContext initialize_native_semaphore{};
    initialize_native_semaphore.r3.u32 = native_semaphore;
    initialize_native_semaphore.r4.u32 = 1u;
    initialize_native_semaphore.r5.u32 = 2u;
    call_test_import(0x820011D4u, initialize_native_semaphore);
    assert(initialize_native_semaphore.r3.u32 == 0u);
    assert(memory.base()[native_semaphore] == 5u); // SemaphoreObject.
    assert(read_guest_be32(native_semaphore + 4u) == 1u);
    assert(read_guest_be32(native_semaphore + 0x10u) == 2u);

    PPCContext native_wait{};
    native_wait.r3.u32 = native_semaphore;
    native_wait.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, native_wait);
    assert(native_wait.r3.u32 == 0u);
    assert(read_guest_be32(native_semaphore + 4u) == 0u);
    native_wait = {};
    native_wait.r3.u32 = native_semaphore;
    native_wait.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, native_wait);
    assert(native_wait.r3.u32 == 0x102u);

    PPCContext native_release{};
    native_release.r3.u32 = native_semaphore;
    native_release.r5.u32 = 1u; // Adjustment.
    call_test_import(0x820011E0u, native_release);
    assert(native_release.r3.u32 == 0u); // Previous count.
    assert(read_guest_be32(native_semaphore + 4u) == 1u);
    native_wait = {};
    native_wait.r3.u32 = native_semaphore;
    native_wait.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, native_wait);
    assert(native_wait.r3.u32 == 0u);
    assert(read_guest_be32(native_semaphore + 4u) == 0u);
    assert(toohuman::runtime::process_kernel_objects().close(native_semaphore));

    // Native KEVENTs share the guest-address dispatcher table with semaphores.
    constexpr std::uint32_t native_notification_event = 0x82015200u;
    PPCContext init_native_event{};
    init_native_event.r3.u32 = native_notification_event;
    init_native_event.r4.u32 = 0u; // Notification/manual reset.
    init_native_event.r5.u32 = 1u; // Initially signaled.
    call_test_import(0x820011E8u, init_native_event);
    assert(init_native_event.r3.u32 == 0u);
    assert(memory.base()[native_notification_event] == 0u);
    assert(read_guest_be32(native_notification_event + 4u) == 1u);

    PPCContext wait_native_event{};
    wait_native_event.r3.u32 = native_notification_event;
    wait_native_event.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, wait_native_event);
    assert(wait_native_event.r3.u32 == 0u);
    assert(read_guest_be32(native_notification_event + 4u) == 1u);

    PPCContext reset_native_event{};
    reset_native_event.r3.u32 = native_notification_event;
    call_test_import(0x820011F0u, reset_native_event);
    assert(reset_native_event.r3.u32 == 1u);
    assert(read_guest_be32(native_notification_event + 4u) == 0u);

    wait_native_event = {};
    wait_native_event.r3.u32 = native_notification_event;
    wait_native_event.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, wait_native_event);
    assert(wait_native_event.r3.u32 == 0x102u);

    PPCContext set_native_event{};
    set_native_event.r3.u32 = native_notification_event;
    set_native_event.r4.u32 = 1u;
    call_test_import(0x820011ECu, set_native_event);
    assert(set_native_event.r3.u32 == 0u);
    assert(read_guest_be32(native_notification_event + 4u) == 1u);
    wait_native_event = {};
    wait_native_event.r3.u32 = native_notification_event;
    wait_native_event.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, wait_native_event);
    assert(wait_native_event.r3.u32 == 0u);
    assert(read_guest_be32(native_notification_event + 4u) == 1u);
    PPCContext pulse_native_event{};
    pulse_native_event.r3.u32 = native_notification_event;
    call_test_import(0x820011F4u, pulse_native_event);
    assert(pulse_native_event.r3.u32 == 1u);
    assert(read_guest_be32(native_notification_event + 4u) == 0u);
    assert(toohuman::runtime::process_kernel_objects().close(
        native_notification_event));

    constexpr std::uint32_t native_synchronization_event = 0x82015220u;
    init_native_event = {};
    init_native_event.r3.u32 = native_synchronization_event;
    init_native_event.r4.u32 = 1u; // Synchronization/auto-reset.
    init_native_event.r5.u32 = 1u;
    call_test_import(0x820011E8u, init_native_event);
    assert(init_native_event.r3.u32 == 0u);
    wait_native_event = {};
    wait_native_event.r3.u32 = native_synchronization_event;
    wait_native_event.r7.u32 = 0x82013004u;
    call_test_import(0x820011E4u, wait_native_event);
    assert(wait_native_event.r3.u32 == 0u);
    assert(read_guest_be32(native_synchronization_event + 4u) == 0u);
    assert(toohuman::runtime::process_kernel_objects().close(
        native_synchronization_event));

    // Waitable timer imports share the NT waitable-object handle table.
    constexpr std::uint32_t timer_handle_out = 0x820130A0u;
    constexpr std::uint32_t due_time_pointer = 0x820130A8u;
    constexpr std::uint32_t timer_current_state = 0x820130B0u;
    PPCContext create_timer{};
    create_timer.r3.u32 = timer_handle_out;
    create_timer.r5.u32 = 1u; // Synchronization timer.
    call_test_import(0x82001208u, create_timer);
    assert(create_timer.r3.u32 == 0u);
    const auto timer_handle = read_guest_be32(timer_handle_out);

    put_guest_be32(due_time_pointer, 0u);
    put_guest_be32(due_time_pointer + 4u, 0u);
    PPCContext set_timer{};
    set_timer.r3.u32 = timer_handle;
    set_timer.r4.u32 = due_time_pointer;
    set_timer.r6.u32 = 1u;
    set_timer.r8.u32 = 1u;
    set_timer.r9.u32 = 20u;
    call_test_import(0x8200120Cu, set_timer);
    assert(set_timer.r3.u32 == 0x40000025u);

    PPCContext timer_wait{};
    timer_wait.r3.u32 = timer_handle;
    timer_wait.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, timer_wait);
    assert(timer_wait.r3.u32 == 0u);

    PPCContext cancel_timer{};
    cancel_timer.r3.u32 = timer_handle;
    cancel_timer.r4.u32 = timer_current_state;
    call_test_import(0x82001204u, cancel_timer);
    assert(cancel_timer.r3.u32 == 0u);
    assert(read_guest_be32(timer_current_state) == 0u);

    timer_wait = {};
    timer_wait.r3.u32 = timer_handle;
    timer_wait.r6.u32 = 0x82013004u;
    call_test_import(0x82001140u, timer_wait);
    assert(timer_wait.r3.u32 == 0x102u);
    PPCContext close_timer{};
    close_timer.r3.u32 = timer_handle;
    call_test_import(0x82001144u, close_timer);
    assert(close_timer.r3.u32 == 0u);

    PPCContext boot_context{};
    call_test_import(0x8200110Cu, boot_context); // KeGetCurrentProcessType
    assert(boot_context.r3.u32 == 1u);

    // Thread imports are resolved even before title startup constructs the executor.
    boot_context = {};
    call_test_import(0x82001188u, boot_context); // ExCreateThread.
    assert(boot_context.r3.u32 == 0xC0000002u);
    boot_context = {};
    boot_context.r3.u32 = 0x1000u;
    call_test_import(0x82001190u, boot_context); // KeResumeThread.
    assert(boot_context.r3.u32 == 0xFFFFFFFFu);
    boot_context = {};
    call_test_import(0x82001194u, boot_context); // NtResumeThread.
    assert(boot_context.r3.u32 == 0xC0000002u);
    boot_context = {};
    call_test_import(0x8200118Cu, boot_context); // ExTerminateThread outside a worker.
    assert(boot_context.r3.u32 == 0xC0000001u);

    // 28-byte Xbox RTL critical section: initialization, re-entrant try/enter/leave.
    constexpr std::uint32_t critical_section = 0x82012000u;
    boot_context = {};
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001114u, boot_context); // RtlInitializeCriticalSectionAndSpinCount
    assert(boot_context.r3.u32 == 0);
    assert(memory.base()[critical_section] == 1);
    auto guest_be32 = [&](std::uint32_t address) {
        const auto* p = memory.base() + address;
        return (std::uint32_t(p[0]) << 24) | (std::uint32_t(p[1]) << 16) |
               (std::uint32_t(p[2]) << 8) | std::uint32_t(p[3]);
    };
    auto guest_be64 = [&](std::uint32_t address) {
        const auto* p = memory.base() + address;
        std::uint64_t value = 0;
        for (unsigned i = 0; i < 8; ++i) value = (value << 8) | p[i];
        return value;
    };
    assert(guest_be32(critical_section + 0x10) == 0xFFFFFFFFu);
    constexpr std::uint32_t critical_section_pcr = 0x82015200u;
    constexpr std::uint32_t critical_section_kthread = 0x82015300u;
    const auto write_guest_be32 = [&](std::uint32_t address, std::uint32_t value) {
        memory.base()[address] = static_cast<std::uint8_t>(value >> 24);
        memory.base()[address + 1] = static_cast<std::uint8_t>(value >> 16);
        memory.base()[address + 2] = static_cast<std::uint8_t>(value >> 8);
        memory.base()[address + 3] = static_cast<std::uint8_t>(value);
    };
    write_guest_be32(critical_section_pcr + 0x100, critical_section_kthread);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001120u, boot_context); // TryEnter
    assert(boot_context.r3.u32 == 1);
    assert(guest_be32(critical_section + 0x18) == critical_section_kthread);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x82001120u, boot_context); // Recursive TryEnter
    assert(boot_context.r3.u32 == 1);
    assert(guest_be32(critical_section + 0x14) == 2);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x8200111Cu, boot_context); // Leave recursion level 2
    assert(guest_be32(critical_section + 0x14) == 1);
    boot_context = {};
    boot_context.r13.u32 = critical_section_pcr;
    boot_context.r3.u32 = critical_section;
    call_test_import(0x8200111Cu, boot_context); // Final leave
    assert(guest_be32(critical_section + 0x10) == 0xFFFFFFFFu);
    assert(guest_be32(critical_section + 0x18) == 0);

    // KeTls slot allocation and per-host-thread values.
    boot_context = {};
    call_test_import(0x82001124u, boot_context); // KeTlsAlloc
    const auto tls_slot = boot_context.r3.u32;
    assert(tls_slot != 0xFFFFFFFFu && tls_slot < 256);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    boot_context.r4.u32 = 0xCAFEBABEu;
    call_test_import(0x82001130u, boot_context); // KeTlsSetValue
    assert(boot_context.r3.u32 == 1);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x8200112Cu, boot_context); // KeTlsGetValue
    assert(boot_context.r3.u32 == 0xCAFEBABEu);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x82001128u, boot_context); // KeTlsFree
    assert(boot_context.r3.u32 == 1);
    boot_context = {};
    boot_context.r3.u32 = tls_slot;
    call_test_import(0x8200112Cu, boot_context); // freed slots read as zero
    assert(boot_context.r3.u32 == 0);

    // Native NTSTATUS conversion and UNICODE_STRING initialization.
    boot_context = {};
    boot_context.r3.u32 = 0xC0000008u;
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 6u);
    boot_context = {};
    boot_context.r3.u32 = 0xC000000Du;
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 87u);
    boot_context = {};
    boot_context.r3.u32 = 0xD0000008u; // Customer/driver status is normalized before lookup.
    call_test_import(0x82001148u, boot_context);
    assert(boot_context.r3.u32 == 6u);
    constexpr std::uint32_t unicode_source = 0x82014000u;
    constexpr std::uint32_t unicode_descriptor = 0x82014020u;
    memory.base()[unicode_source] = 0;
    memory.base()[unicode_source + 1] = 'A';
    memory.base()[unicode_source + 2] = 0;
    memory.base()[unicode_source + 3] = 0;
    boot_context = {};
    boot_context.r3.u32 = unicode_descriptor;
    boot_context.r4.u32 = unicode_source;
    call_test_import(0x8200114Cu, boot_context);
    assert(guest_be32(unicode_descriptor) == 0x00020004u);
    assert(guest_be32(unicode_descriptor + 4) == unicode_source);

    // XConfig values use guest-endian encoding and report the returned size.
    constexpr std::uint32_t xconfig_value = 0x82014100u;
    constexpr std::uint32_t xconfig_required = 0x82014110u;
    boot_context = {};
    boot_context.r3.u32 = 2; // Secured category.
    boot_context.r4.u32 = 2; // AV region.
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 4;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(xconfig_value) == 0x1000u);
    assert(memory.base()[xconfig_required] == 0);
    assert(memory.base()[xconfig_required + 1] == 4);

    boot_context = {};
    boot_context.r3.u32 = 3;
    boot_context.r4.u32 = 9; // English.
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 4;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(xconfig_value) == 1u);

    boot_context = {};
    boot_context.r3.u32 = 2;
    boot_context.r4.u32 = 2;
    boot_context.r5.u32 = xconfig_value;
    boot_context.r6.u32 = 1;
    boot_context.r7.u32 = xconfig_required;
    call_test_import(0x82001150u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000023u);

    boot_context = {};
    call_test_import(0x82001154u, boot_context);
    assert(boot_context.r3.u32 == 0u); // XamGetSystemVersion's startup stub.

    // The XEX executable module has an LDR record; the uploaded PE has no exports.
    constexpr std::uint32_t fake_module_handle = 0x82014500u;
    constexpr std::uint32_t synthetic_xex_header = 0x82014300u;
    constexpr std::uint32_t module_name = 0x82014200u;
    constexpr std::uint32_t module_handle_out = 0x82014220u;
    constexpr std::uint32_t procedure_out = 0x82014224u;
    toohuman::runtime::set_executable_module_handle(fake_module_handle);
    // LDR_DATA_TABLE_ENTRY +0x58 points to the copied XEX header.
    write_guest_be32(fake_module_handle + 0x58, synthetic_xex_header);
    write_guest_be32(synthetic_xex_header + 8, 0x40);
    write_guest_be32(synthetic_xex_header + 0x14, 2);
    write_guest_be32(synthetic_xex_header + 0x18, 0x00030000u);
    write_guest_be32(synthetic_xex_header + 0x1C, 0x00000600u);
    write_guest_be32(synthetic_xex_header + 0x20, 0x00020104u);
    write_guest_be32(synthetic_xex_header + 0x24, 0x00000030u);

    // RtlImageXexHeaderField returns inline values or pointers based on key type.
    boot_context = {};
    boot_context.r3.u32 = synthetic_xex_header;
    boot_context.r4.u32 = 0x00030000u;
    call_test_import(0x82001168u, boot_context);
    assert(boot_context.r3.u32 == 0x600u);
    boot_context = {};
    boot_context.r3.u32 = synthetic_xex_header;
    boot_context.r4.u32 = 0x00020104u;
    call_test_import(0x82001168u, boot_context);
    assert(boot_context.r3.u32 == synthetic_xex_header + 0x30u);

    // RtlCompareMemoryUlong returns the matching prefix length in bytes.
    constexpr std::uint32_t compare_source = 0x82014380u;
    write_guest_be32(compare_source + 0, 0x11223344u);
    write_guest_be32(compare_source + 4, 0xAABBCCDDu);
    write_guest_be32(compare_source + 8, 0x11223344u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 4u);
    write_guest_be32(compare_source + 4, 0x11223344u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 12u);
    write_guest_be32(compare_source + 0, 0xAABBCCDDu);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 12;
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = compare_source;
    boot_context.r4.u32 = 10; // Length must be ULONG-aligned.
    boot_context.r5.u32 = 0x11223344u;
    call_test_import(0x8200116Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);

    // RtlRaiseException recognizes MSVC's thread-name marker without unwinding.
    constexpr std::uint32_t exception_record = 0x82014480u;
    write_guest_be32(exception_record, 0x406D1388u);
    boot_context = {};
    boot_context.r3.u32 = exception_record;
    call_test_import(0x82001170u, boot_context);

    boot_context = {};
    boot_context.r3.u32 = 9; // XEX system flag bit 9.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = 10; // XEX system flag bit 10.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = 11;
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = 32; // Invalid bit index.
    call_test_import(0x82001164u, boot_context);
    assert(boot_context.r3.u32 == 0u);

    boot_context = {};
    boot_context.r3.u32 = 0; // Null name selects executable module.
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(module_handle_out) == fake_module_handle);

    const char default_name[] = "Default.xex";
    std::memcpy(memory.base() + module_name, default_name, sizeof(default_name));
    boot_context = {};
    boot_context.r3.u32 = module_name;
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(module_handle_out) == fake_module_handle);

    const char unknown_name[] = "missing.xex";
    std::memcpy(memory.base() + module_name, unknown_name, sizeof(unknown_name));
    boot_context = {};
    boot_context.r3.u32 = module_name;
    boot_context.r4.u32 = module_handle_out;
    call_test_import(0x8200115Cu, boot_context);
    assert(boot_context.r3.u32 == 0x490u);
    assert(guest_be32(module_handle_out) == 0);

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = 1; // Ordinal lookup.
    boot_context.r5.u32 = procedure_out;
    call_test_import(0x82001160u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000263u);
    assert(guest_be32(procedure_out) == 0);

    boot_context = {};
    boot_context.r3.u32 = 0; // Null hmodule also selects executable module.
    boot_context.r4.u32 = module_name; // Name lookup; executable still has no exports.
    boot_context.r5.u32 = procedure_out;
    call_test_import(0x82001160u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000263u);
    assert(guest_be32(procedure_out) == 0);

    // XexGetModuleSection parses the resource-info header (0x2FF) with bounded
    // offsets and writes its data pointer/size only to committed outputs.
    write_guest_be32(synthetic_xex_header + 8u, 0x40u);
    write_guest_be32(synthetic_xex_header + 0x14u, 1u);
    write_guest_be32(synthetic_xex_header + 0x18u, 0x000002FFu);
    write_guest_be32(synthetic_xex_header + 0x1Cu, 0x28u);
    write_guest_be32(synthetic_xex_header + 0x28u, 20u);
    std::memcpy(memory.base() + synthetic_xex_header + 0x2Cu, "TESTSEC", 7u);
    memory.base()[synthetic_xex_header + 0x33u] = 0;
    write_guest_be32(synthetic_xex_header + 0x34u, 0x82015000u);
    write_guest_be32(synthetic_xex_header + 0x38u, 0x40u);
    std::memcpy(memory.base() + module_name, "TESTSEC", 7u);
    memory.base()[module_name + 7u] = 0;

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    assert(guest_be32(module_handle_out) == 0x82015000u);
    assert(guest_be32(procedure_out) == 0x40u);

    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = 0x60000000u; // Reserved but not committed.
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);

    write_guest_be32(synthetic_xex_header + 0x28u, 3u); // Must not underflow section size.
    boot_context = {};
    boot_context.r3.u32 = fake_module_handle;
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000225u);

    toohuman::runtime::set_executable_module_handle(0xFFFFFFF0u);
    boot_context = {};
    boot_context.r4.u32 = module_name;
    boot_context.r5.u32 = module_handle_out;
    boot_context.r6.u32 = procedure_out;
    call_test_import(0x82001198u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000225u);
    toohuman::runtime::set_executable_module_handle(0);

    toohuman::runtime::set_executable_module_handle(0);

    // NtQueryDirectoryFile emits the 0x40-byte FILE_DIRECTORY_INFORMATION
    // header and keeps a cursor on the directory object between calls.
    const auto directory_test_root =
        std::filesystem::temp_directory_path() / "toohuman_nt_query_directory_test";
    std::filesystem::remove_all(directory_test_root);
    std::filesystem::create_directories(directory_test_root);
    { std::ofstream(directory_test_root / "alpha.txt", std::ios::binary) << "abc"; }
    { std::ofstream(directory_test_root / "beta.bin", std::ios::binary) << "xy"; }
    auto directory_object = std::make_shared<toohuman::runtime::GuestFile>(
        directory_test_root, true, true, false, true);
    const auto directory_handle =
        toohuman::runtime::process_kernel_objects().insert(directory_object);
    assert(directory_handle);

    constexpr std::uint32_t directory_name_descriptor = 0x82016200u;
    constexpr std::uint32_t directory_pattern_buffer = 0x82016220u;
    constexpr std::uint32_t directory_iosb = 0x82016240u;
    constexpr std::uint32_t directory_info = 0x82016260u;
    constexpr std::uint32_t directory_restart = 0x82016300u;
    const std::string directory_pattern = "a*.txt";
    write_guest_be32(directory_name_descriptor,
        (static_cast<std::uint32_t>(directory_pattern.size()) << 16) |
         static_cast<std::uint32_t>(directory_pattern.size()));
    write_guest_be32(directory_name_descriptor + 4u, directory_pattern_buffer);
    std::memcpy(memory.base() + directory_pattern_buffer,
                directory_pattern.data(), directory_pattern.size());
    write_guest_be32(directory_restart, 1u);

    // An undersized result buffer must not consume the current directory entry.
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x48u; // Header fits; "alpha.txt" does not.
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0x80000005u); // STATUS_BUFFER_OVERFLOW.
    assert(guest_be32(directory_iosb) == 0x80000005u);
    assert(guest_be32(directory_iosb + 4u) == 0u);

    // Retry without restarting. The unreturned entry must still be first.
    write_guest_be32(directory_restart, 0u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x80u;
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context); // NtQueryDirectoryFile.
    assert(boot_context.r3.u32 == 0u);
    assert(guest_be32(directory_iosb) == 0u);
    assert(guest_be32(directory_info + 4u) == 0u);
    // EndOfFile and AllocationSize are 64-bit big-endian LARGE_INTEGERs.
    assert(guest_be64(directory_info + 0x28u) == 3u);
    assert(guest_be64(directory_info + 0x30u) == 0x1000u);
    assert(guest_be32(directory_info + 0x3Cu) == 9u);
    assert(guest_be32(directory_iosb + 4u) == 0x80u);
    assert(std::memcmp(memory.base() + directory_info + 0x40u, "alpha.txt", 9u) == 0);

    write_guest_be32(directory_restart, 0u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = directory_info;
    boot_context.r9.u32 = 0x80u;
    boot_context.r10.u32 = directory_name_descriptor;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0x80000006u); // STATUS_NO_MORE_FILES.
    assert(guest_be32(directory_iosb) == 0x80000006u);

    // Invalid output memory is rejected before advancing the directory cursor.
    write_guest_be32(directory_restart, 1u);
    boot_context = {};
    boot_context.r1.u32 = directory_restart - 0x54u;
    boot_context.r3.u32 = *directory_handle;
    boot_context.r7.u32 = directory_iosb;
    boot_context.r8.u32 = 0x60000000u;
    boot_context.r9.u32 = 0x80u;
    call_test_import(0x820011A0u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);

    assert(toohuman::runtime::process_kernel_objects().close(*directory_handle));
    std::filesystem::remove_all(directory_test_root);


    // Event create/set/clear/wait/close lifecycle, including manual vs auto reset.
    constexpr std::uint32_t handle_out = 0x82013000u;
    constexpr std::uint32_t timeout_in = 0x82013004u;
    constexpr std::uint32_t previous_state_out = 0x8201300Cu;
    const auto set_guest_u64 = [&](std::uint32_t address, std::uint64_t value) {
        for (std::uint32_t i = 0; i < 8; ++i)
            memory.base()[address + i] = static_cast<std::uint8_t>(value >> (56 - i * 8));
    };

    // KeQueryPerformanceFrequency uses the Xbox 360 50 MHz timebase.
    boot_context = {};
    call_test_import(0x82001178u, boot_context);
    assert(boot_context.r3.u32 == 50000000u);
    constexpr std::uint32_t guest_system_time_out = 0x82014120u;
    boot_context = {};
    boot_context.r3.u32 = guest_system_time_out;
    call_test_import(0x8200117Cu, boot_context);
    assert(guest_be32(guest_system_time_out) >= 0x01D00000u);
    assert(guest_be32(guest_system_time_out + 4) != 0u);

    constexpr std::uint32_t delay_interval = 0x82014130u;
    set_guest_u64(delay_interval, static_cast<std::uint64_t>(-10000ll)); // 1 ms.
    boot_context = {};
    boot_context.r3.u32 = 0; // KernelMode.
    boot_context.r4.u32 = 0; // Not alertable.
    boot_context.r5.u32 = delay_interval;
    call_test_import(0x82001174u, boot_context);
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r5.u32 = 0; // Null interval pointer.
    call_test_import(0x82001174u, boot_context);
    assert(boot_context.r3.u32 == 0xC000000Du);

    // TIME_FIELDS round-trip: leap day, milliseconds and weekday in guest BE layout.
    constexpr std::uint32_t time_fields_in = 0x82014140u;
    constexpr std::uint32_t time_filetime = 0x82014160u;
    constexpr std::uint32_t time_fields_out = 0x82014170u;
    const auto write_be16_field = [&](std::uint32_t address, std::uint16_t value) {
        memory.base()[address] = static_cast<std::uint8_t>(value >> 8);
        memory.base()[address + 1] = static_cast<std::uint8_t>(value);
    };
    const auto read_be16_field = [&](std::uint32_t address) {
        return static_cast<std::uint16_t>(
            (static_cast<std::uint16_t>(memory.base()[address]) << 8) |
            memory.base()[address + 1]);
    };
    const std::uint16_t fields_values[]{2024, 2, 29, 12, 34, 56, 789, 4};
    for (std::uint32_t i = 0; i < 8; ++i)
        write_be16_field(time_fields_in + i * 2, fields_values[i]);
    boot_context = {};
    boot_context.r3.u32 = time_fields_in;
    boot_context.r4.u32 = time_filetime;
    call_test_import(0x82001184u, boot_context); // RtlTimeFieldsToTime (ordinal 0x013F)
    assert(boot_context.r3.u32 == 1u);
    boot_context = {};
    boot_context.r3.u32 = time_filetime;
    boot_context.r4.u32 = time_fields_out;
    call_test_import(0x82001180u, boot_context); // RtlTimeToTimeFields (ordinal 0x0140)
    for (std::uint32_t i = 0; i < 8; ++i)
        assert(read_be16_field(time_fields_out + i * 2) == fields_values[i]);
    write_be16_field(time_fields_in + 4, 30); // Invalid 2024-02-30.
    boot_context = {};
    boot_context.r3.u32 = time_fields_in;
    boot_context.r4.u32 = time_filetime;
    call_test_import(0x82001184u, boot_context); // Invalid TIME_FIELDS must fail.
    assert(boot_context.r3.u32 == 0u);

    boot_context = {};
    boot_context.r3.u32 = 0xFFFFFFFFu;
    boot_context.r6.u32 = 0xFFFFFFFFu;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000008u);

    boot_context = {};
    boot_context.r3.u32 = handle_out;
    boot_context.r5.u32 = 0; // Notification event: manual reset.
    boot_context.r6.u32 = 1; // Initially signaled.
    call_test_import(0x82001134u, boot_context);
    assert(boot_context.r3.u32 == 0);
    const auto manual_event = guest_be32(handle_out);
    assert(manual_event != 0);

    constexpr std::uint32_t duplicate_out1 = 0x82013020u;
    constexpr std::uint32_t duplicate_out2 = 0x82013024u;
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = 0x60000000u; // Invalid output pointer must not duplicate.
    call_test_import(0x8200119Cu, boot_context);
    assert(boot_context.r3.u32 == 0xC0000005u);
    assert(toohuman::runtime::process_kernel_objects().lookup(manual_event));

    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = duplicate_out1;
    call_test_import(0x8200119Cu, boot_context); // DUPLICATE_SAME_ACCESS default.
    assert(boot_context.r3.u32 == 0u);
    const auto duplicated_event1 = guest_be32(duplicate_out1);
    assert(duplicated_event1 != 0u && duplicated_event1 != manual_event);
    assert(toohuman::runtime::process_kernel_objects().lookup(duplicated_event1) ==
           toohuman::runtime::process_kernel_objects().lookup(manual_event));

    boot_context = {};
    boot_context.r3.u32 = duplicated_event1;
    boot_context.r4.u32 = duplicate_out2;
    boot_context.r5.u32 = 1u; // DUPLICATE_CLOSE_SOURCE.
    call_test_import(0x8200119Cu, boot_context);
    assert(boot_context.r3.u32 == 0u);
    const auto duplicated_event2 = guest_be32(duplicate_out2);
    assert(duplicated_event2 != 0u);
    assert(!toohuman::runtime::process_kernel_objects().lookup(duplicated_event1));
    assert(toohuman::runtime::process_kernel_objects().lookup(duplicated_event2));
    boot_context = {};
    boot_context.r3.u32 = duplicated_event2;
    call_test_import(0x82001144u, boot_context); // NtClose.
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // Manual-reset remains signaled.
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    call_test_import(0x8200113Cu, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0x102u); // STATUS_TIMEOUT.
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = previous_state_out;
    call_test_import(0x82001138u, boot_context);
    assert(boot_context.r3.u32 == 0);
    assert(guest_be32(previous_state_out) == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r4.u32 = previous_state_out;
    call_test_import(0x82001138u, boot_context);
    assert(guest_be32(previous_state_out) == 1);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = manual_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0xC0000008u); // STATUS_INVALID_HANDLE.

    boot_context = {};
    boot_context.r3.u32 = handle_out;
    boot_context.r5.u32 = 1; // Synchronization event: auto reset.
    boot_context.r6.u32 = 1;
    call_test_import(0x82001134u, boot_context);
    assert(boot_context.r3.u32 == 0);
    const auto auto_event = guest_be32(handle_out);
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0);
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // Auto-reset consumes signal.
    assert(boot_context.r3.u32 == 0x102u);

    // A blocked host waiter is released by NtSetEvent and consumes an auto-reset signal.
    set_guest_u64(timeout_in, static_cast<std::uint64_t>(-10000000ll)); // 1 second, relative.
    std::atomic<std::uint32_t> asynchronous_wait_status{0xFFFFFFFFu};
    std::thread waiter([&] {
        PPCContext wait_context{};
        wait_context.r3.u32 = auto_event;
        wait_context.r6.u32 = timeout_in;
        call_test_import(0x82001140u, wait_context);
        asynchronous_wait_status.store(wait_context.r3.u32, std::memory_order_release);
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(5));
    boot_context = {};
    boot_context.r3.u32 = auto_event;
    call_test_import(0x82001138u, boot_context);
    waiter.join();
    assert(asynchronous_wait_status.load(std::memory_order_acquire) == 0u);
    set_guest_u64(timeout_in, 0);

    boot_context = {};
    boot_context.r3.u32 = auto_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);

    // Thread completion handles share the event dispatcher table.
    toohuman::runtime::GuestThreadManager guest_threads(
        toohuman::runtime::process_kernel_objects());
    const auto completed_thread = guest_threads.create(
        toohuman::runtime::GuestThreadStartup{},
        [](toohuman::runtime::GuestThreadStartup&, std::stop_token) { return 0x12345678u; },
        true, &error);
    assert(completed_thread.has_value());

    // A suspended thread object times out through the same NT wait entry point.
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    boot_context.r6.u32 = timeout_in; // zero interval: poll
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0x102u); // STATUS_TIMEOUT.

    // Event-only operations reject a thread object even though both share handles.
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    call_test_import(0x82001138u, boot_context); // NtSetEvent.
    assert(boot_context.r3.u32 == 0xC0000008u);

    std::uint32_t previous_thread_suspend_count = 0;
    assert(guest_threads.resume(*completed_thread, &previous_thread_suspend_count, &error));
    assert(previous_thread_suspend_count == 1u);
    assert(guest_threads.wait(*completed_thread, std::chrono::seconds(2)) ==
           toohuman::runtime::GuestThreadWaitResult::Signaled);
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context); // NtWaitForSingleObjectEx.
    assert(boot_context.r3.u32 == 0u);
    boot_context = {};
    boot_context.r3.u32 = *completed_thread;
    call_test_import(0x82001144u, boot_context); // NtClose.
    assert(boot_context.r3.u32 == 0u);
    std::uint32_t closed_thread_exit = 0;
    assert(!guest_threads.get_exit_code(*completed_thread, closed_thread_exit));

    // XAM's 9th/10th arguments are stack-spilled at SP+0x54/+0x5C in the title caller.
    constexpr std::uint32_t message_stack = 0x82015000u;
    constexpr std::uint32_t message_result = 0x82015100u;
    constexpr std::uint32_t message_overlapped = 0x82015110u;
    constexpr std::uint32_t message_event_out = 0x82015140u;
    boot_context = {};
    boot_context.r3.u32 = message_event_out;
    boot_context.r5.u32 = 1; // Synchronization event.
    boot_context.r6.u32 = 0;
    call_test_import(0x82001134u, boot_context);
    const auto message_event = guest_be32(message_event_out);
    assert(message_event != 0);
    write_guest_be32(message_overlapped + 0x0C, message_event);
    write_guest_be32(message_stack + 0x54, message_result);
    write_guest_be32(message_stack + 0x5C, message_overlapped);
    boot_context = {};
    boot_context.r1.u32 = message_stack;
    boot_context.r3.u32 = 0xFF;
    boot_context.r4.u32 = 0;
    boot_context.r5.u32 = 0;
    boot_context.r6.u32 = 1;
    boot_context.r7.u32 = 0;
    boot_context.r8.u32 = 0; // Focused button.
    boot_context.r9.u32 = 1;
    boot_context.r10.u32 = 0;
    call_test_import(0x82001158u, boot_context);
    assert(boot_context.r3.u32 == 997u); // ERROR_IO_PENDING.
    assert(guest_be32(message_result) == 0u);
    assert(guest_be32(message_overlapped) == 0u);
    assert(guest_be32(message_overlapped + 0x18) == 0u);
    boot_context = {};
    boot_context.r3.u32 = message_event;
    boot_context.r6.u32 = timeout_in;
    call_test_import(0x82001140u, boot_context);
    assert(boot_context.r3.u32 == 0u); // XAM completion signaled its event.
    boot_context = {};
    boot_context.r3.u32 = message_event;
    call_test_import(0x82001144u, boot_context);
    assert(boot_context.r3.u32 == 0);

    // RtlFillMemoryUlong writes big-endian ULONGs and ignores a partial tail.
    constexpr std::uint32_t test_buffer = 0x82016000u;
    context = {};
    context.ctr.u32 = 0x82001108u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    const std::uint8_t expected_fill[]{0x11, 0x22, 0x33, 0x44,
                                       0x11, 0x22, 0x33, 0x44, 0, 0, 0};
    assert(std::memcmp(memory.base() + test_buffer, expected_fill,
                       sizeof(expected_fill)) == 0);

    // RtlCompareMemoryUlong returns the matching prefix in bytes.
    context = {};
    context.ctr.u32 = 0x82001104u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    assert(context.r3.u32 == 8);
    memory.base()[test_buffer + 4] = 0xAA;
    context = {};
    context.ctr.u32 = 0x82001104u;
    context.r3.u32 = test_buffer;
    context.r4.u32 = 11;
    context.r5.u32 = 0x11223344u;
    memory.get_function<PPCFunc*>(context.ctr.u32)(context, memory.base());
    assert(context.r3.u32 == 4);
    }

    // Verify the real title's data exports are backed by guest memory and
    // their IAT slots are patched before the image is mapped/protected.
    auto variable_memory = toohuman::runtime::GuestAddressSpace::reserve(&error);
    assert(variable_memory.valid());
    toohuman::runtime::LoadedPeImage variable_image;
    variable_image.image_base = 0x82000000u;
    variable_image.image_size = 0x017AFE00u;
    variable_image.entry_point = 0x82A46B18u;
    variable_image.bytes.resize(variable_image.image_size);
    std::vector<std::uint8_t> xex_header(0x100, 0);
    xex_header[8] = 0;
    xex_header[9] = 0;
    xex_header[10] = 0;
    xex_header[11] = 0x80;
    // Two optional-header entries: import metadata and immediate system flags.
    xex_header[0x17] = 2;
    xex_header[0x19] = 0x01;
    xex_header[0x1A] = 0x03;
    xex_header[0x1B] = 0xFF;
    xex_header[0x1F] = 0x40;
    xex_header[0x20] = 0x00;
    xex_header[0x21] = 0x03;
    xex_header[0x22] = 0x00;
    xex_header[0x23] = 0x00; // XEX system flags, immediate value.
    xex_header[0x25] = 0x00;
    xex_header[0x26] = 0x06;
    xex_header[0x27] = 0x00; // 0x00000600: privilege bits 9 and 10.
    xex_header[0x43] = 0x10;
    const std::vector<toohuman::runtime::XexImport> variable_imports{
        {"xboxkrnl.exe", 0x01C0u, 0, 0, 0x82000600u, 0},
        {"xboxkrnl.exe", 0x0193u, 0, 0, 0x82000604u, 0}
    };
    toohuman::runtime::PpcImportRegistry variable_registry;
    std::size_t bound_variables = 0;
    assert(variable_registry.prepare_variable_imports(
        variable_memory, variable_image, xex_header, variable_imports,
        &bound_variables, &error));
    assert(bound_variables == 2);
    const auto read_be32 = [](const std::vector<std::uint8_t>& bytes, std::size_t offset) {
        return (static_cast<std::uint32_t>(bytes[offset]) << 24) |
               (static_cast<std::uint32_t>(bytes[offset + 1]) << 16) |
               (static_cast<std::uint32_t>(bytes[offset + 2]) << 8) |
               static_cast<std::uint32_t>(bytes[offset + 3]);
    };
    const auto gpu_clock_storage = read_be32(variable_image.bytes, 0x600);
    const auto module_handle_storage = read_be32(variable_image.bytes, 0x604);
    assert(gpu_clock_storage >= 0x86000000u);
    assert(module_handle_storage >= 0x86000000u);
    const auto* gpu_clock = variable_memory.base() + gpu_clock_storage;
    assert(read_be32(std::vector<std::uint8_t>(gpu_clock, gpu_clock + 4), 0) == 500u);
    const auto module_record = read_be32(
        std::vector<std::uint8_t>(variable_memory.base() + module_handle_storage,
                                  variable_memory.base() + module_handle_storage + 4), 0);
    const auto header_copy = read_be32(
        std::vector<std::uint8_t>(variable_memory.base() + module_record + 0x58,
                                  variable_memory.base() + module_record + 0x5C), 0);
    assert(header_copy >= 0x86000000u);
    assert(variable_memory.base()[header_copy] == xex_header[0]);
    assert(variable_memory.base()[header_copy + 0x7F] == xex_header[0x7F]);

    assert(variable_memory.map_image(variable_image, &error));
    assert(variable_memory.initialize_function_table(
        static_cast<std::uint32_t>(PPC_CODE_BASE),
        static_cast<std::uint32_t>(PPC_CODE_SIZE), &error));
    assert(variable_memory.fill_function_table(&test_default_handler));

    const auto thunk_base = static_cast<std::uint32_t>(PPC_CODE_BASE + 0x100);
    const std::vector<toohuman::runtime::XexImport> pool_imports{
        {"xboxkrnl.exe", 0x000Bu, 0, 1, thunk_base, 0},
        {"xboxkrnl.exe", 0x000Fu, 0, 1, thunk_base + 4, 0},
        {"xam.xex", 0x01EAu, 0, 1, thunk_base + 8, 0},
        {"xam.xex", 0x01ECu, 0, 1, thunk_base + 12, 0},
        {"xboxkrnl.exe", 0x012Bu, 0, 1, thunk_base + 16, 0},
        {"xboxkrnl.exe", 0x0194u, 0, 1, thunk_base + 20, 0},
        {"xboxkrnl.exe", 0x00CCu, 0, 1, thunk_base + 24, 0},
        {"xboxkrnl.exe", 0x00DCu, 0, 1, thunk_base + 28, 0},
        {"xboxkrnl.exe", 0x00EEu, 0, 1, thunk_base + 32, 0},
        {"xboxkrnl.exe", 0x00E1u, 0, 1, thunk_base + 36, 0},
        {"xboxkrnl.exe", 0x00BAu, 0, 1, thunk_base + 40, 0},
        {"xboxkrnl.exe", 0x00BDu, 0, 1, thunk_base + 44, 0},
        {"xboxkrnl.exe", 0x00C4u, 0, 1, thunk_base + 48, 0},
        {"xboxkrnl.exe", 0x00C7u, 0, 1, thunk_base + 52, 0}
    };
    std::size_t registered_pool_imports = 0;
    assert(variable_registry.install(
        variable_memory, pool_imports, &registered_pool_imports, &error));
    assert(registered_pool_imports == 14);

    PPCContext header_field_context{};
    header_field_context.ctr.u32 = thunk_base + 16;
    header_field_context.r3.u32 = header_copy;
    header_field_context.r4.u32 = 0x000103FFu;
    const auto header_field_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 16);
    assert(header_field_function != nullptr);
    header_field_function(header_field_context, variable_memory.base());
    assert(header_field_context.r3.u32 == header_copy + 0x40u);

    // The uploaded Too Human XEX has system flags 0x600: bits 9 and 10
    // are set, bit 5 is clear. Out-of-range indices are safely rejected.
    const auto privilege_function =
        variable_memory.get_function<PPCFunc*>(thunk_base + 20);
    assert(privilege_function != nullptr);
    PPCContext privilege_context{};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 5;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 0);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 9;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 1);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 10;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 1);
    privilege_context = {};
    privilege_context.ctr.u32 = thunk_base + 20;
    privilege_context.r3.u32 = 32;
    privilege_function(privilege_context, variable_memory.base());
    assert(privilege_context.r3.u32 == 0);

    const auto call_import = [&](std::uint32_t thunk, PPCContext& ctx) {
        ctx.ctr.u32 = thunk;
        const auto function = variable_memory.get_function<PPCFunc*>(thunk);
        assert(function != nullptr);
        function(ctx, variable_memory.base());
    };
    // Physical allocations come from the dedicated XEX kernel heap.
    // MmFreePhysicalMemory takes (type, base_address); the heap only releases
    // the exact allocation returned by MmAllocatePhysicalMemoryEx.
    PPCContext physical_allocate{};
    physical_allocate.r4.u32 = 0x1000u;
    physical_allocate.r5.u32 = 0x04u; // PAGE_READWRITE.
    physical_allocate.r8.u32 = 0x1000u;
    call_import(thunk_base + 40, physical_allocate);
    const auto physical_block = physical_allocate.r3.u32;
    assert(physical_block >= 0x86000000u && physical_block < 0x8E000000u);
    assert(variable_memory.base()[physical_block] == 0u);

    PPCContext physical_protection{};
    physical_protection.r3.u32 = physical_block;
    call_import(thunk_base + 48, physical_protection);
    assert(physical_protection.r3.u32 == 0x04u); // X_PAGE_READWRITE.

    PPCContext set_physical_protection{};
    set_physical_protection.r3.u32 = physical_block;
    set_physical_protection.r4.u32 = 0x1000u;
    set_physical_protection.r5.u32 = 0x02u; // X_PAGE_READONLY.
    call_import(thunk_base + 52, set_physical_protection);
    physical_protection = {};
    physical_protection.r3.u32 = physical_block;
    call_import(thunk_base + 48, physical_protection);
    assert(physical_protection.r3.u32 == 0x02u);
    set_physical_protection.r5.u32 = 0x04u; // Restore X_PAGE_READWRITE.
    call_import(thunk_base + 52, set_physical_protection);
    physical_protection = {};
    physical_protection.r3.u32 = physical_block;
    call_import(thunk_base + 48, physical_protection);
    assert(physical_protection.r3.u32 == 0x04u);

    PPCContext physical_free{};
    physical_free.r3.u32 = 0u; // Allocation type.
    physical_free.r4.u32 = physical_block;
    call_import(thunk_base + 44, physical_free);
    // Repeated frees are rejected without damaging the free-list state.
    call_import(thunk_base + 44, physical_free);

    physical_protection = {};
    physical_protection.r3.u32 = physical_block;
    call_import(thunk_base + 48, physical_protection);
    assert(physical_protection.r3.u32 == 0u); // No longer allocated.

    PPCContext physical_reallocate{};
    physical_reallocate.r4.u32 = 0x1000u;
    physical_reallocate.r5.u32 = 0x04u;
    physical_reallocate.r8.u32 = 0x1000u;
    call_import(thunk_base + 40, physical_reallocate);
    assert(physical_reallocate.r3.u32 == physical_block);

    physical_free = {};
    physical_free.r4.u32 = physical_block;
    call_import(thunk_base + 44, physical_free);

    const auto vm_page_size =
        static_cast<std::uint32_t>(toohuman::runtime::GuestAddressSpace::page_size());

    PPCContext pool_context{};
    pool_context.r4.u32 = 0x100;
    call_import(thunk_base, pool_context); // ExAllocatePoolTypeWithTag
    const auto pool_pointer = pool_context.r3.u32;
    assert(pool_pointer >= 0x86000000u && pool_pointer < 0x8E000000u);
    variable_memory.base()[pool_pointer] = 0xA5;

    pool_context = {};
    pool_context.r3.u32 = pool_pointer;
    call_import(thunk_base + 4, pool_context); // ExFreePool
    assert(pool_context.r3.u32 == 0);

    pool_context = {};
    pool_context.r3.u32 = 0x80;
    call_import(thunk_base + 8, pool_context); // XamAlloc
    const auto xam_pointer = pool_context.r3.u32;
    assert(xam_pointer >= 0x86000000u && xam_pointer < 0x8E000000u);

    pool_context = {};
    pool_context.r3.u32 = xam_pointer;
    call_import(thunk_base + 12, pool_context); // XamFree
    assert(pool_context.r3.u32 == 0);

    // Exercise the basic guest virtual-memory lifecycle using a pool buffer
    // for the in/out pointer arguments and MEMORY_BASIC_INFORMATION output.
    pool_context = {};
    pool_context.r4.u32 = 0x100;
    call_import(thunk_base, pool_context);
    const auto io_buffer = pool_context.r3.u32;
    assert(io_buffer >= 0x86000000u);
    const auto write_be = [&](std::uint32_t address, std::uint32_t value) {
        variable_memory.base()[address] = static_cast<std::uint8_t>(value >> 24);
        variable_memory.base()[address + 1] = static_cast<std::uint8_t>(value >> 16);
        variable_memory.base()[address + 2] = static_cast<std::uint8_t>(value >> 8);
        variable_memory.base()[address + 3] = static_cast<std::uint8_t>(value);
    };
    const auto read_guest_be = [&](std::uint32_t address) {
        return (static_cast<std::uint32_t>(variable_memory.base()[address]) << 24) |
               (static_cast<std::uint32_t>(variable_memory.base()[address + 1]) << 16) |
               (static_cast<std::uint32_t>(variable_memory.base()[address + 2]) << 8) |
               static_cast<std::uint32_t>(variable_memory.base()[address + 3]);
    };

    // Reserved-but-unallocated heap addresses are not valid syscall buffers.
    // This must return STATUS_ACCESS_VIOLATION without touching PROT_NONE pages.
    write_be(io_buffer + 4, 0x1000);
    PPCContext invalid_buffer_context{};
    invalid_buffer_context.r3.u32 = 0xA1000000u; // Inside virtual heap, but unallocated.
    invalid_buffer_context.r4.u32 = io_buffer + 4;
    invalid_buffer_context.r5.u32 = 0x3000;
    invalid_buffer_context.r6.u32 = 0x04;
    call_import(thunk_base + 24, invalid_buffer_context);
    assert(invalid_buffer_context.r3.u32 == 0xC0000005u);

    // The stack allocator's committed block is also a valid in/out buffer.
    const auto stack_io = variable_registry.stack_heap()->allocate(0x40, 16);
    assert(stack_io && *stack_io == 0x70000000u);
    write_be(*stack_io, 0);
    write_be(*stack_io + 4, vm_page_size + 1u);
    write_be(io_buffer + 4, vm_page_size + 1u);
    PPCContext vm_context{};
    vm_context.r3.u32 = *stack_io;
    vm_context.r4.u32 = *stack_io + 4;
    vm_context.r5.u32 = 0x3000; // MEM_RESERVE | MEM_COMMIT
    vm_context.r6.u32 = 0x04;   // PAGE_READWRITE
    vm_context.r7.u32 = 0;      // Not devkit memory.
    call_import(thunk_base + 24, vm_context);
    assert(vm_context.r3.u32 == 0);
    const auto virtual_address = read_guest_be(*stack_io);
    const auto virtual_size = read_guest_be(*stack_io + 4);
    assert(virtual_address == 0xA0000000u);
    assert(virtual_size == vm_page_size * 2u);

    vm_context = {};
    vm_context.r3.u32 = virtual_address + 0x100;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 16) == 0x04u);
    assert(read_guest_be(io_buffer + 20) == virtual_size);
    assert(read_guest_be(io_buffer + 24) == 0x1000u);
    assert(read_guest_be(io_buffer + 28) == 0x04u);
    assert(read_guest_be(io_buffer + 32) == 0x00020000u);

    PPCContext address_protection{};
    address_protection.r3.u32 = virtual_address + 0x100u;
    call_import(thunk_base + 48, address_protection);
    assert(address_protection.r3.u32 == 0x04u); // Current PAGE_READWRITE.

    // NtProtectVirtualMemory: r3/r4 point to in/out base/size, r5 is PAGE_*,
    // r6 points to OldProtect, and r7 is DebugMemory.
    write_be(*stack_io + 8, virtual_address); // Page-aligned: protect exactly the first page.
    write_be(*stack_io + 12, vm_page_size);
    write_be(*stack_io + 16, 0xDEADBEEFu);
    PPCContext protect_context{};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x02u; // PAGE_READONLY
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 8) == virtual_address);
    assert(read_guest_be(*stack_io + 12) == vm_page_size);
    assert(read_guest_be(*stack_io + 16) == 0x04u); // Previous PAGE_READWRITE.

    // MmSetAddressProtect changes the second committed page directly and must
    // keep NtQueryVirtualMemory's per-range protection metadata synchronized.
    PPCContext set_virtual_protection{};
    set_virtual_protection.r3.u32 = virtual_address + vm_page_size + 0x100u;
    set_virtual_protection.r4.u32 = vm_page_size;
    set_virtual_protection.r5.u32 = 0x02u; // PAGE_READONLY.
    call_import(thunk_base + 52, set_virtual_protection);
    vm_context = {};
    vm_context.r3.u32 = virtual_address + vm_page_size + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 28u) == 0x02u);
    set_virtual_protection.r5.u32 = 0x04u;
    call_import(thunk_base + 52, set_virtual_protection);

    address_protection = {};
    address_protection.r3.u32 = virtual_address + 0x100u;
    call_import(thunk_base + 48, address_protection);
    assert(address_protection.r3.u32 == 0x02u); // Current PAGE_READONLY.

    // Query reports protection-homogeneous regions rather than the whole allocation.
    vm_context = {};
    vm_context.r3.u32 = virtual_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 16) == 0x04u); // Original AllocationProtect.
    assert(read_guest_be(io_buffer + 20) == vm_page_size);
    assert(read_guest_be(io_buffer + 24) == 0x1000u); // MEM_COMMIT.
    assert(read_guest_be(io_buffer + 28) == 0x02u); // Current PAGE_READONLY.
    assert(read_guest_be(io_buffer + 32) == 0x00020000u);

    vm_context = {};
    vm_context.r3.u32 = virtual_address + vm_page_size + 0x100u;
    vm_context.r4.u32 = io_buffer + 8;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(io_buffer + 8) == virtual_address + vm_page_size);
    assert(read_guest_be(io_buffer + 12) == virtual_address);
    assert(read_guest_be(io_buffer + 20) == vm_page_size);
    assert(read_guest_be(io_buffer + 28) == 0x04u);

    // Restore write access and make sure OldProtect receives PAGE_READONLY.
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x04u; // PAGE_READWRITE
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 16) == 0x02u);

    address_protection = {};
    address_protection.r3.u32 = virtual_address + 0x100u;
    call_import(thunk_base + 48, address_protection);
    assert(address_protection.r3.u32 == 0x04u); // Restored PAGE_READWRITE.

    // MEM_RESERVE and MEM_COMMIT have distinct state. Reserve two pages,
    // commit only the first, then query/protect both sides of the boundary.
    write_be(*stack_io + 8u, 0u);
    write_be(*stack_io + 12u, vm_page_size * 2u);
    PPCContext reserve_context{};
    reserve_context.r3.u32 = *stack_io + 8u;
    reserve_context.r4.u32 = *stack_io + 12u;
    reserve_context.r5.u32 = 0x2000u; // MEM_RESERVE only.
    reserve_context.r6.u32 = 0x04u;   // AllocationProtect PAGE_READWRITE.
    call_import(thunk_base + 24, reserve_context);
    assert(reserve_context.r3.u32 == 0u);
    const auto reserved_address = read_guest_be(*stack_io + 8u);
    assert(reserved_address == virtual_address + virtual_size);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size * 2u);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 16u) == 0x04u); // AllocationProtect.
    assert(read_guest_be(io_buffer + 20u) == vm_page_size * 2u);
    assert(read_guest_be(io_buffer + 24u) == 0x2000u); // MEM_RESERVE.
    assert(read_guest_be(io_buffer + 28u) == 0u);      // No current Protect.

    write_be(*stack_io + 8u, reserved_address + 0x100u);
    write_be(*stack_io + 12u, vm_page_size);
    PPCContext commit_context{};
    commit_context.r3.u32 = *stack_io + 8u;
    commit_context.r4.u32 = *stack_io + 12u;
    commit_context.r5.u32 = 0x1000u; // MEM_COMMIT inside existing reservation.
    commit_context.r6.u32 = 0x04u;   // PAGE_READWRITE.
    call_import(thunk_base + 24, commit_context);
    assert(commit_context.r3.u32 == 0u);
    assert(read_guest_be(*stack_io + 8u) == reserved_address);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 20u) == vm_page_size);
    assert(read_guest_be(io_buffer + 24u) == 0x1000u);
    assert(read_guest_be(io_buffer + 28u) == 0x04u);

    // Recommitting an already committed page must not wipe data already stored.
    variable_memory.base()[reserved_address + 0x180u] = 0xA5u;
    write_be(*stack_io + 8u, reserved_address + 0x100u);
    write_be(*stack_io + 12u, vm_page_size);
    commit_context = {};
    commit_context.r3.u32 = *stack_io + 8u;
    commit_context.r4.u32 = *stack_io + 12u;
    commit_context.r5.u32 = 0x1000u;
    commit_context.r6.u32 = 0x04u;
    call_import(thunk_base + 24, commit_context);
    assert(commit_context.r3.u32 == 0u);
    assert(variable_memory.base()[reserved_address + 0x180u] == 0xA5u);

    vm_context = {};
    vm_context.r3.u32 = reserved_address + vm_page_size + 0x100u;
    vm_context.r4.u32 = io_buffer + 8u;
    call_import(thunk_base + 32, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(io_buffer + 20u) == vm_page_size);
    assert(read_guest_be(io_buffer + 24u) == 0x2000u);
    assert(read_guest_be(io_buffer + 28u) == 0u);

    write_be(*stack_io + 8u, reserved_address + vm_page_size);
    write_be(*stack_io + 12u, vm_page_size);
    write_be(*stack_io + 16u, 0xFFFFFFFFu);
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8u;
    protect_context.r4.u32 = *stack_io + 12u;
    protect_context.r5.u32 = 0x04u;
    protect_context.r6.u32 = *stack_io + 16u;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC00000A0u); // MEM_RESERVE is not protectable.

    write_be(*stack_io + 8u, reserved_address);
    write_be(*stack_io + 12u, 0u);
    vm_context = {};
    vm_context.r3.u32 = *stack_io + 8u;
    vm_context.r4.u32 = *stack_io + 12u;
    vm_context.r5.u32 = 0x8000u; // MEM_RELEASE.
    call_import(thunk_base + 28, vm_context);
    assert(vm_context.r3.u32 == 0u);
    assert(read_guest_be(*stack_io + 12u) == vm_page_size * 2u);

    // Execute permissions are denied until guest execution/fault semantics exist.
    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0x20u; // PAGE_EXECUTE_READ
    protect_context.r6.u32 = *stack_io + 16;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC0000022u); // STATUS_ACCESS_DENIED.

    protect_context = {};
    protect_context.r3.u32 = *stack_io + 8;
    protect_context.r4.u32 = *stack_io + 12;
    protect_context.r5.u32 = 0;
    call_import(thunk_base + 36, protect_context);
    assert(protect_context.r3.u32 == 0xC0000045u); // STATUS_INVALID_PAGE_PROTECTION.

    write_be(*stack_io + 4, 0); // MEM_RELEASE requires RegionSize == 0.
    vm_context = {};
    vm_context.r3.u32 = *stack_io;
    vm_context.r4.u32 = *stack_io + 4;
    vm_context.r5.u32 = 0x8000; // MEM_RELEASE
    vm_context.r6.u32 = 0;
    call_import(thunk_base + 28, vm_context);
    assert(vm_context.r3.u32 == 0);
    assert(read_guest_be(*stack_io + 4) == virtual_size);
    assert(variable_registry.stack_heap()->deallocate(*stack_io));

    // Concurrently allocate, query and release independent regions. Each host
    // worker owns its in/out buffers; only the import registry and guest heaps
    // are shared. This exercises the region metadata lock and heap ownership
    // across overlapping NtAllocate/NtProtect/NtQuery/NtFree calls.
    constexpr std::uint32_t kConcurrentVmWorkers = 8;
    constexpr std::uint32_t kConcurrentVmIterations = 64;
    const auto concurrent_scratch = variable_registry.stack_heap()->allocate(
        kConcurrentVmWorkers * 0x40u, 16);
    assert(concurrent_scratch);
    std::atomic<bool> start_workers{false};
    std::atomic<bool> concurrent_vm_failed{false};
    std::vector<std::thread> vm_workers;
    vm_workers.reserve(kConcurrentVmWorkers);
    for (std::uint32_t worker_index = 0;
         worker_index < kConcurrentVmWorkers; ++worker_index) {
        vm_workers.emplace_back([&, worker_index] {
            while (!start_workers.load(std::memory_order_acquire))
                std::this_thread::yield();
            const auto io = *concurrent_scratch + worker_index * 0x40u;
            for (std::uint32_t iteration = 0;
                 iteration < kConcurrentVmIterations; ++iteration) {
                write_be(io, 0);
                write_be(io + 4, vm_page_size);
                PPCContext allocate_context{};
                allocate_context.r3.u32 = io;
                allocate_context.r4.u32 = io + 4;
                allocate_context.r5.u32 = 0x3000u;
                allocate_context.r6.u32 = 0x04u;
                call_import(thunk_base + 24, allocate_context);
                if (allocate_context.r3.u32 != 0) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                const auto address = read_guest_be(io);
                const auto size = read_guest_be(io + 4);
                if (address < 0xA0000000u || size != vm_page_size) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                // Change this allocation to read-only, query the resulting
                // region metadata, then restore write access before releasing it.
                write_be(io + 8, address);
                write_be(io + 12, vm_page_size);
                write_be(io + 16, 0);
                PPCContext protect_context{};
                protect_context.r3.u32 = io + 8;
                protect_context.r4.u32 = io + 12;
                protect_context.r5.u32 = 0x02u;
                protect_context.r6.u32 = io + 16;
                call_import(thunk_base + 36, protect_context);
                if (protect_context.r3.u32 != 0 ||
                    read_guest_be(io + 16) != 0x04u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                PPCContext query_context{};
                query_context.r3.u32 = address + 0x20u;
                query_context.r4.u32 = io + 20;
                call_import(thunk_base + 32, query_context);
                if (query_context.r3.u32 != 0 ||
                    read_guest_be(io + 40) != 0x02u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                write_be(io + 8, address);
                write_be(io + 12, vm_page_size);
                PPCContext restore_context{};
                restore_context.r3.u32 = io + 8;
                restore_context.r4.u32 = io + 12;
                restore_context.r5.u32 = 0x04u;
                restore_context.r6.u32 = io + 16;
                call_import(thunk_base + 36, restore_context);
                if (restore_context.r3.u32 != 0 ||
                    read_guest_be(io + 16) != 0x02u) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }

                write_be(io + 4, 0);
                PPCContext free_context{};
                free_context.r3.u32 = io;
                free_context.r4.u32 = io + 4;
                free_context.r5.u32 = 0x8000u;
                call_import(thunk_base + 28, free_context);
                if (free_context.r3.u32 != 0 ||
                    read_guest_be(io + 4) != vm_page_size) {
                    concurrent_vm_failed.store(true, std::memory_order_relaxed);
                    return;
                }
            }
        });
    }
    start_workers.store(true, std::memory_order_release);
    for (auto& worker : vm_workers) worker.join();
    assert(!concurrent_vm_failed.load(std::memory_order_relaxed));
    assert(variable_registry.stack_heap()->deallocate(*concurrent_scratch));

    pool_context = {};
    pool_context.r3.u32 = io_buffer;
    call_import(thunk_base + 4, pool_context);
    return 0;
}
