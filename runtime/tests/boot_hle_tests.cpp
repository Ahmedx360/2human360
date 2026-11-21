// Unit tests for the stateless startup HLE. They need only ppc_context.h (no generated game code, no registry).
#include "ppc/boot_hle.hpp"
#include <ppc_config.h>

#include <cassert>
#include <cstdint>
#include <cstring>
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
void put16(std::uint32_t a, std::uint16_t v) { g_mem[a] = v >> 8; g_mem[a + 1] = std::uint8_t(v); }
}

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

    return 0;
}
