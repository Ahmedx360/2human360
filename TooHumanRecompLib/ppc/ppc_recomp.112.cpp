#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8274C1F0"))) PPC_WEAK_FUNC(sub_8274C1F0);
PPC_FUNC_IMPL(__imp__sub_8274C1F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C200"))) PPC_WEAK_FUNC(sub_8274C200);
PPC_FUNC_IMPL(__imp__sub_8274C200) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C228"))) PPC_WEAK_FUNC(sub_8274C228);
PPC_FUNC_IMPL(__imp__sub_8274C228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C238"))) PPC_WEAK_FUNC(sub_8274C238);
PPC_FUNC_IMPL(__imp__sub_8274C238) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x8274c270
	if (!ctx.cr0.eq) goto loc_8274C270;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8274C270:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8274c280
	if (!ctx.cr6.eq) goto loc_8274C280;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8274C280:
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C2B8"))) PPC_WEAK_FUNC(sub_8274C2B8);
PPC_FUNC_IMPL(__imp__sub_8274C2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C2C8"))) PPC_WEAK_FUNC(sub_8274C2C8);
PPC_FUNC_IMPL(__imp__sub_8274C2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x8274c30c
	if (!ctx.cr0.eq) goto loc_8274C30C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8274C30C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C348"))) PPC_WEAK_FUNC(sub_8274C348);
PPC_FUNC_IMPL(__imp__sub_8274C348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C358"))) PPC_WEAK_FUNC(sub_8274C358);
PPC_FUNC_IMPL(__imp__sub_8274C358) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x8274c39c
	if (!ctx.cr0.eq) goto loc_8274C39C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8274C39C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C3D8"))) PPC_WEAK_FUNC(sub_8274C3D8);
PPC_FUNC_IMPL(__imp__sub_8274C3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C3E8"))) PPC_WEAK_FUNC(sub_8274C3E8);
PPC_FUNC_IMPL(__imp__sub_8274C3E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x8274c42c
	if (!ctx.cr0.eq) goto loc_8274C42C;
	// andi. r10,r11,4112
	ctx.r10.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8274C42C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C468"))) PPC_WEAK_FUNC(sub_8274C468);
PPC_FUNC_IMPL(__imp__sub_8274C468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C478"))) PPC_WEAK_FUNC(sub_8274C478);
PPC_FUNC_IMPL(__imp__sub_8274C478) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C4D8"))) PPC_WEAK_FUNC(sub_8274C4D8);
PPC_FUNC_IMPL(__imp__sub_8274C4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C4E8"))) PPC_WEAK_FUNC(sub_8274C4E8);
PPC_FUNC_IMPL(__imp__sub_8274C4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C548"))) PPC_WEAK_FUNC(sub_8274C548);
PPC_FUNC_IMPL(__imp__sub_8274C548) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C558"))) PPC_WEAK_FUNC(sub_8274C558);
PPC_FUNC_IMPL(__imp__sub_8274C558) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C5B8"))) PPC_WEAK_FUNC(sub_8274C5B8);
PPC_FUNC_IMPL(__imp__sub_8274C5B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C5C8"))) PPC_WEAK_FUNC(sub_8274C5C8);
PPC_FUNC_IMPL(__imp__sub_8274C5C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwimi r11,r4,30,1,1
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (ctx.r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r11,11848(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne cr6,0x8274c604
	if (!ctx.cr6.eq) goto loc_8274C604;
	// andi. r9,r11,4112
	ctx.r9.u64 = ctx.r11.u64 & 4112;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_8274C604:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8274c614
	if (!ctx.cr6.eq) goto loc_8274C614;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_8274C614:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, ctx.r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, ctx.r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, ctx.r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C650"))) PPC_WEAK_FUNC(sub_8274C650);
PPC_FUNC_IMPL(__imp__sub_8274C650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C660"))) PPC_WEAK_FUNC(sub_8274C660);
PPC_FUNC_IMPL(__imp__sub_8274C660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,24252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C698"))) PPC_WEAK_FUNC(sub_8274C698);
PPC_FUNC_IMPL(__imp__sub_8274C698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C6C0"))) PPC_WEAK_FUNC(sub_8274C6C0);
PPC_FUNC_IMPL(__imp__sub_8274C6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C6E0"))) PPC_WEAK_FUNC(sub_8274C6E0);
PPC_FUNC_IMPL(__imp__sub_8274C6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C6F0"))) PPC_WEAK_FUNC(sub_8274C6F0);
PPC_FUNC_IMPL(__imp__sub_8274C6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,24252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r12,15
	ctx.r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFE00000000;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C780"))) PPC_WEAK_FUNC(sub_8274C780);
PPC_FUNC_IMPL(__imp__sub_8274C780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,17048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C7F0"))) PPC_WEAK_FUNC(sub_8274C7F0);
PPC_FUNC_IMPL(__imp__sub_8274C7F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C818"))) PPC_WEAK_FUNC(sub_8274C818);
PPC_FUNC_IMPL(__imp__sub_8274C818) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C828"))) PPC_WEAK_FUNC(sub_8274C828);
PPC_FUNC_IMPL(__imp__sub_8274C828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-32456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C868"))) PPC_WEAK_FUNC(sub_8274C868);
PPC_FUNC_IMPL(__imp__sub_8274C868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,10606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,17664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17664);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C898"))) PPC_WEAK_FUNC(sub_8274C898);
PPC_FUNC_IMPL(__imp__sub_8274C898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23932);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8274c8ac
	if (ctx.cr6.eq) goto loc_8274C8AC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x8274c8b0
	goto loc_8274C8B0;
loc_8274C8AC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_8274C8B0:
	// stw r11,23932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23932, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C8B8"))) PPC_WEAK_FUNC(sub_8274C8B8);
PPC_FUNC_IMPL(__imp__sub_8274C8B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,23932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23932);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C8C8"))) PPC_WEAK_FUNC(sub_8274C8C8);
PPC_FUNC_IMPL(__imp__sub_8274C8C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11876, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274c8dc
	if (!ctx.cr6.eq) goto loc_8274C8DC;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274C8DC:
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C900"))) PPC_WEAK_FUNC(sub_8274C900);
PPC_FUNC_IMPL(__imp__sub_8274C900) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C908"))) PPC_WEAK_FUNC(sub_8274C908);
PPC_FUNC_IMPL(__imp__sub_8274C908) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C928"))) PPC_WEAK_FUNC(sub_8274C928);
PPC_FUNC_IMPL(__imp__sub_8274C928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C938"))) PPC_WEAK_FUNC(sub_8274C938);
PPC_FUNC_IMPL(__imp__sub_8274C938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C960"))) PPC_WEAK_FUNC(sub_8274C960);
PPC_FUNC_IMPL(__imp__sub_8274C960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C970"))) PPC_WEAK_FUNC(sub_8274C970);
PPC_FUNC_IMPL(__imp__sub_8274C970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11880, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274c984
	if (!ctx.cr6.eq) goto loc_8274C984;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274C984:
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C9A8"))) PPC_WEAK_FUNC(sub_8274C9A8);
PPC_FUNC_IMPL(__imp__sub_8274C9A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C9B0"))) PPC_WEAK_FUNC(sub_8274C9B0);
PPC_FUNC_IMPL(__imp__sub_8274C9B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C9D8"))) PPC_WEAK_FUNC(sub_8274C9D8);
PPC_FUNC_IMPL(__imp__sub_8274C9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274C9E8"))) PPC_WEAK_FUNC(sub_8274C9E8);
PPC_FUNC_IMPL(__imp__sub_8274C9E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA08"))) PPC_WEAK_FUNC(sub_8274CA08);
PPC_FUNC_IMPL(__imp__sub_8274CA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA18"))) PPC_WEAK_FUNC(sub_8274CA18);
PPC_FUNC_IMPL(__imp__sub_8274CA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,11,18,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA40"))) PPC_WEAK_FUNC(sub_8274CA40);
PPC_FUNC_IMPL(__imp__sub_8274CA40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA50"))) PPC_WEAK_FUNC(sub_8274CA50);
PPC_FUNC_IMPL(__imp__sub_8274CA50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA78"))) PPC_WEAK_FUNC(sub_8274CA78);
PPC_FUNC_IMPL(__imp__sub_8274CA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CA88"))) PPC_WEAK_FUNC(sub_8274CA88);
PPC_FUNC_IMPL(__imp__sub_8274CA88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CAA8"))) PPC_WEAK_FUNC(sub_8274CAA8);
PPC_FUNC_IMPL(__imp__sub_8274CAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CAB8"))) PPC_WEAK_FUNC(sub_8274CAB8);
PPC_FUNC_IMPL(__imp__sub_8274CAB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CAD8"))) PPC_WEAK_FUNC(sub_8274CAD8);
PPC_FUNC_IMPL(__imp__sub_8274CAD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CAE8"))) PPC_WEAK_FUNC(sub_8274CAE8);
PPC_FUNC_IMPL(__imp__sub_8274CAE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB10"))) PPC_WEAK_FUNC(sub_8274CB10);
PPC_FUNC_IMPL(__imp__sub_8274CB10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB20"))) PPC_WEAK_FUNC(sub_8274CB20);
PPC_FUNC_IMPL(__imp__sub_8274CB20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (ctx.r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB48"))) PPC_WEAK_FUNC(sub_8274CB48);
PPC_FUNC_IMPL(__imp__sub_8274CB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB58"))) PPC_WEAK_FUNC(sub_8274CB58);
PPC_FUNC_IMPL(__imp__sub_8274CB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (ctx.r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB78"))) PPC_WEAK_FUNC(sub_8274CB78);
PPC_FUNC_IMPL(__imp__sub_8274CB78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CB88"))) PPC_WEAK_FUNC(sub_8274CB88);
PPC_FUNC_IMPL(__imp__sub_8274CB88) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10499(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBA0"))) PPC_WEAK_FUNC(sub_8274CBA0);
PPC_FUNC_IMPL(__imp__sub_8274CBA0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBA8"))) PPC_WEAK_FUNC(sub_8274CBA8);
PPC_FUNC_IMPL(__imp__sub_8274CBA8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10498(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBC0"))) PPC_WEAK_FUNC(sub_8274CBC0);
PPC_FUNC_IMPL(__imp__sub_8274CBC0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBC8"))) PPC_WEAK_FUNC(sub_8274CBC8);
PPC_FUNC_IMPL(__imp__sub_8274CBC8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBE0"))) PPC_WEAK_FUNC(sub_8274CBE0);
PPC_FUNC_IMPL(__imp__sub_8274CBE0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CBE8"))) PPC_WEAK_FUNC(sub_8274CBE8);
PPC_FUNC_IMPL(__imp__sub_8274CBE8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC00"))) PPC_WEAK_FUNC(sub_8274CC00);
PPC_FUNC_IMPL(__imp__sub_8274CC00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC08"))) PPC_WEAK_FUNC(sub_8274CC08);
PPC_FUNC_IMPL(__imp__sub_8274CC08) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC20"))) PPC_WEAK_FUNC(sub_8274CC20);
PPC_FUNC_IMPL(__imp__sub_8274CC20) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC28"))) PPC_WEAK_FUNC(sub_8274CC28);
PPC_FUNC_IMPL(__imp__sub_8274CC28) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC40"))) PPC_WEAK_FUNC(sub_8274CC40);
PPC_FUNC_IMPL(__imp__sub_8274CC40) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC48"))) PPC_WEAK_FUNC(sub_8274CC48);
PPC_FUNC_IMPL(__imp__sub_8274CC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r11,r11,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r11.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC88"))) PPC_WEAK_FUNC(sub_8274CC88);
PPC_FUNC_IMPL(__imp__sub_8274CC88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10564(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CC98"))) PPC_WEAK_FUNC(sub_8274CC98);
PPC_FUNC_IMPL(__imp__sub_8274CC98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11856, ctx.r4.u32);
	// addi r4,r3,12676
	ctx.r4.s64 = ctx.r3.s64 + 12676;
	// b 0x8274e4e0
	sub_8274E4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274CCA8"))) PPC_WEAK_FUNC(sub_8274CCA8);
PPC_FUNC_IMPL(__imp__sub_8274CCA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CCB0"))) PPC_WEAK_FUNC(sub_8274CCB0);
PPC_FUNC_IMPL(__imp__sub_8274CCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,17852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8274cce4
	if (!ctx.cr6.eq) goto loc_8274CCE4;
	// lfs f12,10836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8274cce8
	if (ctx.cr6.eq) goto loc_8274CCE8;
loc_8274CCE4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8274CCE8:
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x8274cd0c
	if (!ctx.cr6.eq) goto loc_8274CD0C;
	// lfs f12,10844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10844);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8274cd10
	if (ctx.cr6.eq) goto loc_8274CD10;
loc_8274CD0C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8274CD10:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10832, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10840(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10840, temp.u32);
	// rldicr r12,r12,45,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,43,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CD58"))) PPC_WEAK_FUNC(sub_8274CD58);
PPC_FUNC_IMPL(__imp__sub_8274CD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CD78"))) PPC_WEAK_FUNC(sub_8274CD78);
PPC_FUNC_IMPL(__imp__sub_8274CD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8274cda0
	if (!ctx.cr6.eq) goto loc_8274CDA0;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8274cda4
	if (ctx.cr6.eq) goto loc_8274CDA4;
loc_8274CDA0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8274CDA4:
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x8274cdc8
	if (!ctx.cr6.eq) goto loc_8274CDC8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8274cdcc
	if (ctx.cr6.eq) goto loc_8274CDCC;
loc_8274CDC8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8274CDCC:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE10"))) PPC_WEAK_FUNC(sub_8274CE10);
PPC_FUNC_IMPL(__imp__sub_8274CE10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE20"))) PPC_WEAK_FUNC(sub_8274CE20);
PPC_FUNC_IMPL(__imp__sub_8274CE20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE40"))) PPC_WEAK_FUNC(sub_8274CE40);
PPC_FUNC_IMPL(__imp__sub_8274CE40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE50"))) PPC_WEAK_FUNC(sub_8274CE50);
PPC_FUNC_IMPL(__imp__sub_8274CE50) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE68"))) PPC_WEAK_FUNC(sub_8274CE68);
PPC_FUNC_IMPL(__imp__sub_8274CE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CE70"))) PPC_WEAK_FUNC(sub_8274CE70);
PPC_FUNC_IMPL(__imp__sub_8274CE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12440(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// stw r4,11860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11860, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ce84
	if (!ctx.cr6.eq) goto loc_8274CE84;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274CE84:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r4.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CEA8"))) PPC_WEAK_FUNC(sub_8274CEA8);
PPC_FUNC_IMPL(__imp__sub_8274CEA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CEB0"))) PPC_WEAK_FUNC(sub_8274CEB0);
PPC_FUNC_IMPL(__imp__sub_8274CEB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,11864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11864, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274cec4
	if (!ctx.cr6.eq) goto loc_8274CEC4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274CEC4:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CEE8"))) PPC_WEAK_FUNC(sub_8274CEE8);
PPC_FUNC_IMPL(__imp__sub_8274CEE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CEF0"))) PPC_WEAK_FUNC(sub_8274CEF0);
PPC_FUNC_IMPL(__imp__sub_8274CEF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,11868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11868, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274cf04
	if (!ctx.cr6.eq) goto loc_8274CF04;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274CF04:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF28"))) PPC_WEAK_FUNC(sub_8274CF28);
PPC_FUNC_IMPL(__imp__sub_8274CF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF30"))) PPC_WEAK_FUNC(sub_8274CF30);
PPC_FUNC_IMPL(__imp__sub_8274CF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,11872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11872, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274cf44
	if (!ctx.cr6.eq) goto loc_8274CF44;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8274CF44:
	// lwz r11,10460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF68"))) PPC_WEAK_FUNC(sub_8274CF68);
PPC_FUNC_IMPL(__imp__sub_8274CF68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF70"))) PPC_WEAK_FUNC(sub_8274CF70);
PPC_FUNC_IMPL(__imp__sub_8274CF70) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11884, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF78"))) PPC_WEAK_FUNC(sub_8274CF78);
PPC_FUNC_IMPL(__imp__sub_8274CF78) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CF80"))) PPC_WEAK_FUNC(sub_8274CF80);
PPC_FUNC_IMPL(__imp__sub_8274CF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11892(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11892, temp.u32);
	// lfs f13,-32456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,10598(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10598, ctx.r11.u16);
	// sth r11,10596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10596, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CFC8"))) PPC_WEAK_FUNC(sub_8274CFC8);
PPC_FUNC_IMPL(__imp__sub_8274CFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274CFD8"))) PPC_WEAK_FUNC(sub_8274CFD8);
PPC_FUNC_IMPL(__imp__sub_8274CFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11896(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11896, temp.u32);
	// lfs f13,17852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17852);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10602, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D018"))) PPC_WEAK_FUNC(sub_8274D018);
PPC_FUNC_IMPL(__imp__sub_8274D018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D028"))) PPC_WEAK_FUNC(sub_8274D028);
PPC_FUNC_IMPL(__imp__sub_8274D028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f0,11900(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11900, temp.u32);
	// lfs f13,17852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17852);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10600(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10600, ctx.r11.u16);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D068"))) PPC_WEAK_FUNC(sub_8274D068);
PPC_FUNC_IMPL(__imp__sub_8274D068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,11900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D078"))) PPC_WEAK_FUNC(sub_8274D078);
PPC_FUNC_IMPL(__imp__sub_8274D078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D098"))) PPC_WEAK_FUNC(sub_8274D098);
PPC_FUNC_IMPL(__imp__sub_8274D098) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D0C0"))) PPC_WEAK_FUNC(sub_8274D0C0);
PPC_FUNC_IMPL(__imp__sub_8274D0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D0E8"))) PPC_WEAK_FUNC(sub_8274D0E8);
PPC_FUNC_IMPL(__imp__sub_8274D0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D110"))) PPC_WEAK_FUNC(sub_8274D110);
PPC_FUNC_IMPL(__imp__sub_8274D110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D138"))) PPC_WEAK_FUNC(sub_8274D138);
PPC_FUNC_IMPL(__imp__sub_8274D138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D160"))) PPC_WEAK_FUNC(sub_8274D160);
PPC_FUNC_IMPL(__imp__sub_8274D160) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D188"))) PPC_WEAK_FUNC(sub_8274D188);
PPC_FUNC_IMPL(__imp__sub_8274D188) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D1A8"))) PPC_WEAK_FUNC(sub_8274D1A8);
PPC_FUNC_IMPL(__imp__sub_8274D1A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D1C8"))) PPC_WEAK_FUNC(sub_8274D1C8);
PPC_FUNC_IMPL(__imp__sub_8274D1C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D1F0"))) PPC_WEAK_FUNC(sub_8274D1F0);
PPC_FUNC_IMPL(__imp__sub_8274D1F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D218"))) PPC_WEAK_FUNC(sub_8274D218);
PPC_FUNC_IMPL(__imp__sub_8274D218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D240"))) PPC_WEAK_FUNC(sub_8274D240);
PPC_FUNC_IMPL(__imp__sub_8274D240) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D268"))) PPC_WEAK_FUNC(sub_8274D268);
PPC_FUNC_IMPL(__imp__sub_8274D268) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D290"))) PPC_WEAK_FUNC(sub_8274D290);
PPC_FUNC_IMPL(__imp__sub_8274D290) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D2B8"))) PPC_WEAK_FUNC(sub_8274D2B8);
PPC_FUNC_IMPL(__imp__sub_8274D2B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D2D8"))) PPC_WEAK_FUNC(sub_8274D2D8);
PPC_FUNC_IMPL(__imp__sub_8274D2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D2E8"))) PPC_WEAK_FUNC(sub_8274D2E8);
PPC_FUNC_IMPL(__imp__sub_8274D2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D2F8"))) PPC_WEAK_FUNC(sub_8274D2F8);
PPC_FUNC_IMPL(__imp__sub_8274D2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D308"))) PPC_WEAK_FUNC(sub_8274D308);
PPC_FUNC_IMPL(__imp__sub_8274D308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D318"))) PPC_WEAK_FUNC(sub_8274D318);
PPC_FUNC_IMPL(__imp__sub_8274D318) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D328"))) PPC_WEAK_FUNC(sub_8274D328);
PPC_FUNC_IMPL(__imp__sub_8274D328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D338"))) PPC_WEAK_FUNC(sub_8274D338);
PPC_FUNC_IMPL(__imp__sub_8274D338) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D348"))) PPC_WEAK_FUNC(sub_8274D348);
PPC_FUNC_IMPL(__imp__sub_8274D348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D358"))) PPC_WEAK_FUNC(sub_8274D358);
PPC_FUNC_IMPL(__imp__sub_8274D358) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D368"))) PPC_WEAK_FUNC(sub_8274D368);
PPC_FUNC_IMPL(__imp__sub_8274D368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D378"))) PPC_WEAK_FUNC(sub_8274D378);
PPC_FUNC_IMPL(__imp__sub_8274D378) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D388"))) PPC_WEAK_FUNC(sub_8274D388);
PPC_FUNC_IMPL(__imp__sub_8274D388) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D398"))) PPC_WEAK_FUNC(sub_8274D398);
PPC_FUNC_IMPL(__imp__sub_8274D398) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D3A8"))) PPC_WEAK_FUNC(sub_8274D3A8);
PPC_FUNC_IMPL(__imp__sub_8274D3A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D3B8"))) PPC_WEAK_FUNC(sub_8274D3B8);
PPC_FUNC_IMPL(__imp__sub_8274D3B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D3C8"))) PPC_WEAK_FUNC(sub_8274D3C8);
PPC_FUNC_IMPL(__imp__sub_8274D3C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D3D8"))) PPC_WEAK_FUNC(sub_8274D3D8);
PPC_FUNC_IMPL(__imp__sub_8274D3D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,1087
	ctx.r11.s64 = 1087;
	// bne cr6,0x8274d3e8
	if (!ctx.cr6.eq) goto loc_8274D3E8;
	// li r11,1024
	ctx.r11.s64 = 1024;
loc_8274D3E8:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, ctx.r11.u32);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D418"))) PPC_WEAK_FUNC(sub_8274D418);
PPC_FUNC_IMPL(__imp__sub_8274D418) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D428"))) PPC_WEAK_FUNC(sub_8274D428);
PPC_FUNC_IMPL(__imp__sub_8274D428) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// stw r4,12028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12028, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r11,r9,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8274d460
	if (ctx.cr6.eq) goto loc_8274D460;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8274d460
	if (ctx.cr6.eq) goto loc_8274D460;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8274d460
	if (ctx.cr6.eq) goto loc_8274D460;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8274D460:
	// rlwinm r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r7,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// rlwinm r8,r7,15,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r9,r7,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,10372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10372, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D4D0"))) PPC_WEAK_FUNC(sub_8274D4D0);
PPC_FUNC_IMPL(__imp__sub_8274D4D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12028(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12028);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D4D8"))) PPC_WEAK_FUNC(sub_8274D4D8);
PPC_FUNC_IMPL(__imp__sub_8274D4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r11,r9,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8274d510
	if (ctx.cr6.eq) goto loc_8274D510;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8274d510
	if (ctx.cr6.eq) goto loc_8274D510;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8274d510
	if (ctx.cr6.eq) goto loc_8274D510;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8274D510:
	// rlwinm r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r7,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// rlwinm r8,r7,15,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r9,r7,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rldicr r12,r12,54,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,10380(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10380);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10380, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D580"))) PPC_WEAK_FUNC(sub_8274D580);
PPC_FUNC_IMPL(__imp__sub_8274D580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D588"))) PPC_WEAK_FUNC(sub_8274D588);
PPC_FUNC_IMPL(__imp__sub_8274D588) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12448(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r11,r9,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8274d5c0
	if (ctx.cr6.eq) goto loc_8274D5C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8274d5c0
	if (ctx.cr6.eq) goto loc_8274D5C0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8274d5c0
	if (ctx.cr6.eq) goto loc_8274D5C0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8274D5C0:
	// rlwinm r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r7,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// rlwinm r8,r7,15,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r9,r7,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,10384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10384, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D630"))) PPC_WEAK_FUNC(sub_8274D630);
PPC_FUNC_IMPL(__imp__sub_8274D630) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12036);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D638"))) PPC_WEAK_FUNC(sub_8274D638);
PPC_FUNC_IMPL(__imp__sub_8274D638) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r11,r9,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8274d670
	if (ctx.cr6.eq) goto loc_8274D670;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8274d670
	if (ctx.cr6.eq) goto loc_8274D670;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8274d670
	if (ctx.cr6.eq) goto loc_8274D670;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8274D670:
	// rlwinm r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwinm r9,r7,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// rlwinm r8,r7,15,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// rlwinm r9,r7,0,16,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,16,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,10388(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10388, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D6E0"))) PPC_WEAK_FUNC(sub_8274D6E0);
PPC_FUNC_IMPL(__imp__sub_8274D6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12040);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D6E8"))) PPC_WEAK_FUNC(sub_8274D6E8);
PPC_FUNC_IMPL(__imp__sub_8274D6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D710"))) PPC_WEAK_FUNC(sub_8274D710);
PPC_FUNC_IMPL(__imp__sub_8274D710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D720"))) PPC_WEAK_FUNC(sub_8274D720);
PPC_FUNC_IMPL(__imp__sub_8274D720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10620(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10620, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,48,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D748"))) PPC_WEAK_FUNC(sub_8274D748);
PPC_FUNC_IMPL(__imp__sub_8274D748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D758"))) PPC_WEAK_FUNC(sub_8274D758);
PPC_FUNC_IMPL(__imp__sub_8274D758) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10616, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D780"))) PPC_WEAK_FUNC(sub_8274D780);
PPC_FUNC_IMPL(__imp__sub_8274D780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D790"))) PPC_WEAK_FUNC(sub_8274D790);
PPC_FUNC_IMPL(__imp__sub_8274D790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D7B8"))) PPC_WEAK_FUNC(sub_8274D7B8);
PPC_FUNC_IMPL(__imp__sub_8274D7B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D7C8"))) PPC_WEAK_FUNC(sub_8274D7C8);
PPC_FUNC_IMPL(__imp__sub_8274D7C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (ctx.r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D7E8"))) PPC_WEAK_FUNC(sub_8274D7E8);
PPC_FUNC_IMPL(__imp__sub_8274D7E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D7F8"))) PPC_WEAK_FUNC(sub_8274D7F8);
PPC_FUNC_IMPL(__imp__sub_8274D7F8) {
	PPC_FUNC_PROLOGUE();
	// li r12,1
	ctx.r12.s64 = 1;
	// stw r4,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D818"))) PPC_WEAK_FUNC(sub_8274D818);
PPC_FUNC_IMPL(__imp__sub_8274D818) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D820"))) PPC_WEAK_FUNC(sub_8274D820);
PPC_FUNC_IMPL(__imp__sub_8274D820) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,4,27,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D840"))) PPC_WEAK_FUNC(sub_8274D840);
PPC_FUNC_IMPL(__imp__sub_8274D840) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D850"))) PPC_WEAK_FUNC(sub_8274D850);
PPC_FUNC_IMPL(__imp__sub_8274D850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D870"))) PPC_WEAK_FUNC(sub_8274D870);
PPC_FUNC_IMPL(__imp__sub_8274D870) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10556(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10556);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r11,r10,0,24,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D888"))) PPC_WEAK_FUNC(sub_8274D888);
PPC_FUNC_IMPL(__imp__sub_8274D888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D8B0"))) PPC_WEAK_FUNC(sub_8274D8B0);
PPC_FUNC_IMPL(__imp__sub_8274D8B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D8B8"))) PPC_WEAK_FUNC(sub_8274D8B8);
PPC_FUNC_IMPL(__imp__sub_8274D8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D8E0"))) PPC_WEAK_FUNC(sub_8274D8E0);
PPC_FUNC_IMPL(__imp__sub_8274D8E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D8E8"))) PPC_WEAK_FUNC(sub_8274D8E8);
PPC_FUNC_IMPL(__imp__sub_8274D8E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D908"))) PPC_WEAK_FUNC(sub_8274D908);
PPC_FUNC_IMPL(__imp__sub_8274D908) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D910"))) PPC_WEAK_FUNC(sub_8274D910);
PPC_FUNC_IMPL(__imp__sub_8274D910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D938"))) PPC_WEAK_FUNC(sub_8274D938);
PPC_FUNC_IMPL(__imp__sub_8274D938) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D940"))) PPC_WEAK_FUNC(sub_8274D940);
PPC_FUNC_IMPL(__imp__sub_8274D940) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D960"))) PPC_WEAK_FUNC(sub_8274D960);
PPC_FUNC_IMPL(__imp__sub_8274D960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D970"))) PPC_WEAK_FUNC(sub_8274D970);
PPC_FUNC_IMPL(__imp__sub_8274D970) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// lbz r10,10943(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10943);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// bne 0x8274d9a8
	if (!ctx.cr0.eq) goto loc_8274D9A8;
	// rlwinm r11,r11,0,12,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8274d9a8
	if (!ctx.cr6.eq) goto loc_8274D9A8;
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	ctx.r12.s64 = -257;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// b 0x8274d9b0
	goto loc_8274D9B0;
loc_8274D9A8:
	// ld r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_8274D9B0:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D9C8"))) PPC_WEAK_FUNC(sub_8274D9C8);
PPC_FUNC_IMPL(__imp__sub_8274D9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D9D8"))) PPC_WEAK_FUNC(sub_8274D9D8);
PPC_FUNC_IMPL(__imp__sub_8274D9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274D9F8"))) PPC_WEAK_FUNC(sub_8274D9F8);
PPC_FUNC_IMPL(__imp__sub_8274D9F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA08"))) PPC_WEAK_FUNC(sub_8274DA08);
PPC_FUNC_IMPL(__imp__sub_8274DA08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA28"))) PPC_WEAK_FUNC(sub_8274DA28);
PPC_FUNC_IMPL(__imp__sub_8274DA28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA38"))) PPC_WEAK_FUNC(sub_8274DA38);
PPC_FUNC_IMPL(__imp__sub_8274DA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA58"))) PPC_WEAK_FUNC(sub_8274DA58);
PPC_FUNC_IMPL(__imp__sub_8274DA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA68"))) PPC_WEAK_FUNC(sub_8274DA68);
PPC_FUNC_IMPL(__imp__sub_8274DA68) {
	PPC_FUNC_PROLOGUE();
	// stb r4,10562(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA80"))) PPC_WEAK_FUNC(sub_8274DA80);
PPC_FUNC_IMPL(__imp__sub_8274DA80) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA88"))) PPC_WEAK_FUNC(sub_8274DA88);
PPC_FUNC_IMPL(__imp__sub_8274DA88) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13596, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA90"))) PPC_WEAK_FUNC(sub_8274DA90);
PPC_FUNC_IMPL(__imp__sub_8274DA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DA98"))) PPC_WEAK_FUNC(sub_8274DA98);
PPC_FUNC_IMPL(__imp__sub_8274DA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,23,2,8
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (ctx.r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DAA8"))) PPC_WEAK_FUNC(sub_8274DAA8);
PPC_FUNC_IMPL(__imp__sub_8274DAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,11852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DAB8"))) PPC_WEAK_FUNC(sub_8274DAB8);
PPC_FUNC_IMPL(__imp__sub_8274DAB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274DAC0;
	__savegprlr_29(ctx, base);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lbz r9,11924(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11924);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,20064
	ctx.r8.s64 = ctx.r8.s64 + 20064;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 11) & 0x800) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x600000) | (ctx.r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lbz r9,12002(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12002);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274DB80"))) PPC_WEAK_FUNC(sub_8274DB80);
PPC_FUNC_IMPL(__imp__sub_8274DB80) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DBB8"))) PPC_WEAK_FUNC(sub_8274DBB8);
PPC_FUNC_IMPL(__imp__sub_8274DBB8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DC50"))) PPC_WEAK_FUNC(sub_8274DC50);
PPC_FUNC_IMPL(__imp__sub_8274DC50) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DC60"))) PPC_WEAK_FUNC(sub_8274DC60);
PPC_FUNC_IMPL(__imp__sub_8274DC60) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274DC68;
	__savegprlr_29(ctx, base);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lbz r9,11924(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11924);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,20064
	ctx.r8.s64 = ctx.r8.s64 + 20064;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0x400) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x180000) | (ctx.r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xE000000) | (ctx.r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lbz r9,12002(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12002);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274DD28"))) PPC_WEAK_FUNC(sub_8274DD28);
PPC_FUNC_IMPL(__imp__sub_8274DD28) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DD60"))) PPC_WEAK_FUNC(sub_8274DD60);
PPC_FUNC_IMPL(__imp__sub_8274DD60) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	ctx.r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x40 ? 0 : (ctx.r31.u64 >> (ctx.r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DDF0"))) PPC_WEAK_FUNC(sub_8274DDF0);
PPC_FUNC_IMPL(__imp__sub_8274DDF0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DE00"))) PPC_WEAK_FUNC(sub_8274DE00);
PPC_FUNC_IMPL(__imp__sub_8274DE00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DE40"))) PPC_WEAK_FUNC(sub_8274DE40);
PPC_FUNC_IMPL(__imp__sub_8274DE40) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DE58"))) PPC_WEAK_FUNC(sub_8274DE58);
PPC_FUNC_IMPL(__imp__sub_8274DE58) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x7FF00000) | (ctx.r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = ctx.r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DEF0"))) PPC_WEAK_FUNC(sub_8274DEF0);
PPC_FUNC_IMPL(__imp__sub_8274DEF0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12002);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DF00"))) PPC_WEAK_FUNC(sub_8274DF00);
PPC_FUNC_IMPL(__imp__sub_8274DF00) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8274df20
	if (!ctx.cr0.eq) goto loc_8274DF20;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8274df5c
	if (ctx.cr0.eq) goto loc_8274DF5C;
loc_8274DF20:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,20064
	ctx.r10.s64 = ctx.r10.s64 + 20064;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_8274DF5C:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11924(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11924, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DF68"))) PPC_WEAK_FUNC(sub_8274DF68);
PPC_FUNC_IMPL(__imp__sub_8274DF68) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11924(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11924);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DF78"))) PPC_WEAK_FUNC(sub_8274DF78);
PPC_FUNC_IMPL(__imp__sub_8274DF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lfs f0,17668(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17668);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274DFD8"))) PPC_WEAK_FUNC(sub_8274DFD8);
PPC_FUNC_IMPL(__imp__sub_8274DFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// lfs f0,17664(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17664);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E020"))) PPC_WEAK_FUNC(sub_8274E020);
PPC_FUNC_IMPL(__imp__sub_8274E020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lfs f0,16528(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16528);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E080"))) PPC_WEAK_FUNC(sub_8274E080);
PPC_FUNC_IMPL(__imp__sub_8274E080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// lfs f0,17660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17660);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 22;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E0C0"))) PPC_WEAK_FUNC(sub_8274E0C0);
PPC_FUNC_IMPL(__imp__sub_8274E0C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3136
	ctx.r11.s64 = ctx.r4.s64 + 3136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274e120
	if (ctx.cr6.eq) goto loc_8274E120;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x8274e0f4
	if (ctx.cr6.gt) goto loc_8274E0F4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8274E0F4:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_8274E120:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11950(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11950, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E130"))) PPC_WEAK_FUNC(sub_8274E130);
PPC_FUNC_IMPL(__imp__sub_8274E130) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11950(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11950);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E140"))) PPC_WEAK_FUNC(sub_8274E140);
PPC_FUNC_IMPL(__imp__sub_8274E140) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,3136
	ctx.r11.s64 = ctx.r4.s64 + 3136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274e1a0
	if (ctx.cr6.eq) goto loc_8274E1A0;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8274e174
	if (ctx.cr6.lt) goto loc_8274E174;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8274E174:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_8274E1A0:
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11976(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11976, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E1B0"))) PPC_WEAK_FUNC(sub_8274E1B0);
PPC_FUNC_IMPL(__imp__sub_8274E1B0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11976(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11976);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E1C0"))) PPC_WEAK_FUNC(sub_8274E1C0);
PPC_FUNC_IMPL(__imp__sub_8274E1C0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E210"))) PPC_WEAK_FUNC(sub_8274E210);
PPC_FUNC_IMPL(__imp__sub_8274E210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E230"))) PPC_WEAK_FUNC(sub_8274E230);
PPC_FUNC_IMPL(__imp__sub_8274E230) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E268"))) PPC_WEAK_FUNC(sub_8274E268);
PPC_FUNC_IMPL(__imp__sub_8274E268) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E280"))) PPC_WEAK_FUNC(sub_8274E280);
PPC_FUNC_IMPL(__imp__sub_8274E280) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E2B8"))) PPC_WEAK_FUNC(sub_8274E2B8);
PPC_FUNC_IMPL(__imp__sub_8274E2B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E2D0"))) PPC_WEAK_FUNC(sub_8274E2D0);
PPC_FUNC_IMPL(__imp__sub_8274E2D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E308"))) PPC_WEAK_FUNC(sub_8274E308);
PPC_FUNC_IMPL(__imp__sub_8274E308) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E320"))) PPC_WEAK_FUNC(sub_8274E320);
PPC_FUNC_IMPL(__imp__sub_8274E320) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E360"))) PPC_WEAK_FUNC(sub_8274E360);
PPC_FUNC_IMPL(__imp__sub_8274E360) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E378"))) PPC_WEAK_FUNC(sub_8274E378);
PPC_FUNC_IMPL(__imp__sub_8274E378) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,22,5,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r8.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E3B8"))) PPC_WEAK_FUNC(sub_8274E3B8);
PPC_FUNC_IMPL(__imp__sub_8274E3B8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E3D0"))) PPC_WEAK_FUNC(sub_8274E3D0);
PPC_FUNC_IMPL(__imp__sub_8274E3D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E410"))) PPC_WEAK_FUNC(sub_8274E410);
PPC_FUNC_IMPL(__imp__sub_8274E410) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E428"))) PPC_WEAK_FUNC(sub_8274E428);
PPC_FUNC_IMPL(__imp__sub_8274E428) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E468"))) PPC_WEAK_FUNC(sub_8274E468);
PPC_FUNC_IMPL(__imp__sub_8274E468) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E480"))) PPC_WEAK_FUNC(sub_8274E480);
PPC_FUNC_IMPL(__imp__sub_8274E480) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r7,r10,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srd r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E4C8"))) PPC_WEAK_FUNC(sub_8274E4C8);
PPC_FUNC_IMPL(__imp__sub_8274E4C8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E4E0"))) PPC_WEAK_FUNC(sub_8274E4E0);
PPC_FUNC_IMPL(__imp__sub_8274E4E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12648(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12648);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f13,12656(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12656);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,12660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12660);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f13,12652(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12652);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,11856(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// stw r11,12676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12676, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r10,12680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12680, ctx.r10.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r31,12684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12684, ctx.r31.u32);
	// stw r30,12688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12688, ctx.r30.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x8274e59c
	if (ctx.cr6.eq) goto loc_8274E59C;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8274e578
	if (ctx.cr6.gt) goto loc_8274E578;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8274E578:
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8274e584
	if (ctx.cr6.gt) goto loc_8274E584;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8274E584:
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8274e590
	if (ctx.cr6.lt) goto loc_8274E590;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8274E590:
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8274e59c
	if (ctx.cr6.lt) goto loc_8274E59C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8274E59C:
	// lwz r11,10436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r5,16,1,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (ctx.r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r11.u32);
	// stw r10,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r10.u32);
	// bl 0x8274bc58
	ctx.lr = 0x8274E5C0;
	sub_8274BC58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E5D8"))) PPC_WEAK_FUNC(sub_8274E5D8);
PPC_FUNC_IMPL(__imp__sub_8274E5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8274bf48
	ctx.lr = 0x8274E648;
	sub_8274BF48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E658"))) PPC_WEAK_FUNC(sub_8274E658);
PPC_FUNC_IMPL(__imp__sub_8274E658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8274E660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8274e6c8
	if (ctx.cr6.eq) goto loc_8274E6C8;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subfic r11,r29,17
	ctx.xer.ca = ctx.r29.u32 <= 17;
	ctx.r11.s64 = 17 - ctx.r29.s64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	ctx.r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
	// stw r6,1780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_8274E6C8:
	// addi r11,r29,3115
	ctx.r11.s64 = ctx.r29.s64 + 3115;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8274e740
	if (ctx.cr6.eq) goto loc_8274E740;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274e6f0
	if (ctx.cr6.eq) goto loc_8274E6F0;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x8274e740
	goto loc_8274E740;
loc_8274E6F0:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274e740
	if (ctx.cr0.eq) goto loc_8274E740;
	// lwz r11,13528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8274e718
	if (ctx.cr6.lt) goto loc_8274E718;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82742f28
	ctx.lr = 0x8274E718;
	sub_82742F28(ctx, base);
loc_8274E718:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r9.u32);
loc_8274E740:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stwx r30,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,12528(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12528, ctx.r9.u8);
	// beq 0x8274e770
	if (ctx.cr0.eq) goto loc_8274E770;
	// lbz r11,11832(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11832);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274e770
	if (ctx.cr6.eq) goto loc_8274E770;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8274E770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274E778"))) PPC_WEAK_FUNC(sub_8274E778);
PPC_FUNC_IMPL(__imp__sub_8274E778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3115
	ctx.r11.s64 = ctx.r4.s64 + 3115;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8274e7d4
	if (ctx.cr6.eq) goto loc_8274E7D4;
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// subfic r9,r4,239
	ctx.xer.ca = ctx.r4.u32 <= 239;
	ctx.r9.s64 = 239 - ctx.r4.s64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r31,r10,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x827446d8
	ctx.lr = 0x8274E7D4;
	sub_827446D8(ctx, base);
loc_8274E7D4:
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lbz r11,12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12528);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274E800"))) PPC_WEAK_FUNC(sub_8274E800);
PPC_FUNC_IMPL(__imp__sub_8274E800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274E808;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,12436(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12436);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8274e884
	if (ctx.cr6.eq) goto loc_8274E884;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274e834
	if (ctx.cr6.eq) goto loc_8274E834;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8274e884
	goto loc_8274E884;
loc_8274E834:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274e884
	if (ctx.cr0.eq) goto loc_8274E884;
	// lwz r11,13528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8274e85c
	if (ctx.cr6.lt) goto loc_8274E85C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82742f28
	ctx.lr = 0x8274E85C;
	sub_82742F28(ctx, base);
loc_8274E85C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r30,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r9.u32);
loc_8274E884:
	// stw r29,12436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12436, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274E890"))) PPC_WEAK_FUNC(sub_8274E890);
PPC_FUNC_IMPL(__imp__sub_8274E890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274E898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3110
	ctx.r11.s64 = ctx.r4.s64 + 3110;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r5.u32);
	// beq cr6,0x8274e9d4
	if (ctx.cr6.eq) goto loc_8274E9D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8274e8c4
	if (ctx.cr6.eq) goto loc_8274E8C4;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_8274E8C4:
	// addi r10,r11,2593
	ctx.r10.s64 = ctx.r11.s64 + 2593;
	// lwz r6,28(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r6,r9,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3007
	ctx.r10.s64 = ctx.r4.s64 + 3007;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// stdx r6,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u64);
	// lwzx r11,r7,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r6,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
	// beq cr6,0x8274e9d4
	if (ctx.cr6.eq) goto loc_8274E9D4;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r10,r7,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8274e948
	if (ctx.cr6.eq) goto loc_8274E948;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x8274e948
	if (ctx.cr6.eq) goto loc_8274E948;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x8274e948
	if (ctx.cr6.eq) goto loc_8274E948;
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x8274e9d4
	if (!ctx.cr6.eq) goto loc_8274E9D4;
loc_8274E948:
	// rlwinm r10,r7,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8274e9d4
	if (ctx.cr0.eq) goto loc_8274E9D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x8274e964
	if (ctx.cr6.eq) goto loc_8274E964;
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
loc_8274E964:
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r6,r30,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 16) & 0xF;
	// rlwinm r3,r30,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 15) & 0x7;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// andc r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ~ctx.r10.u64;
	// rlwinm r6,r30,0,16,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// addi r29,r7,2593
	ctx.r29.s64 = ctx.r7.s64 + 2593;
	// rlwinm r3,r3,16,12,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xF0000;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r6,r3
	ctx.r7.u64 = ctx.r6.u64 | ctx.r3.u64;
	// clrldi r6,r8,56
	ctx.r6.u64 = ctx.r8.u64 & 0xFF;
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// srd r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r8,r8,0,16,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// ldx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
loc_8274E9D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8274eb50
	if (!ctx.cr6.eq) goto loc_8274EB50;
	// lbz r11,10943(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10943);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10943, ctx.r10.u8);
	// beq cr6,0x8274ea2c
	if (ctx.cr6.eq) goto loc_8274EA2C;
	// lhz r11,28(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8274ea10
	if (ctx.cr6.eq) goto loc_8274EA10;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8274ea10
	if (ctx.cr6.eq) goto loc_8274EA10;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8274ea24
	if (!ctx.cr6.eq) goto loc_8274EA24;
loc_8274EA10:
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,10943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10943, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8274EA24:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8274ea38
	goto loc_8274EA38;
loc_8274EA2C:
	// lwz r4,12456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8274ea40
	if (ctx.cr6.eq) goto loc_8274EA40;
loc_8274EA38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274bbc8
	ctx.lr = 0x8274EA40;
	sub_8274BBC8(ctx, base);
loc_8274EA40:
	// lwz r11,12716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb18
	if (!ctx.cr6.eq) goto loc_8274EB18;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8274eb18
	if (!ctx.cr0.eq) goto loc_8274EB18;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8274eb18
	if (!ctx.cr0.eq) goto loc_8274EB18;
	// lbz r10,12187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8274eb18
	if (!ctx.cr0.eq) goto loc_8274EB18;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8274ea7c
	if (ctx.cr0.eq) goto loc_8274EA7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274eb0c
	goto loc_8274EB0C;
loc_8274EA7C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274eb04
	if (ctx.cr0.eq) goto loc_8274EB04;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ea9c
	if (ctx.cr6.eq) goto loc_8274EA9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb04
	if (!ctx.cr6.eq) goto loc_8274EB04;
loc_8274EA9C:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274eab4
	if (ctx.cr6.eq) goto loc_8274EAB4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb04
	if (!ctx.cr6.eq) goto loc_8274EB04;
loc_8274EAB4:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274eacc
	if (ctx.cr6.eq) goto loc_8274EACC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb04
	if (!ctx.cr6.eq) goto loc_8274EB04;
loc_8274EACC:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274eae4
	if (ctx.cr6.eq) goto loc_8274EAE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb04
	if (!ctx.cr6.eq) goto loc_8274EB04;
loc_8274EAE4:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274eafc
	if (ctx.cr6.eq) goto loc_8274EAFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274eb04
	if (!ctx.cr6.eq) goto loc_8274EB04;
loc_8274EAFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274eb08
	goto loc_8274EB08;
loc_8274EB04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EB08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8274EB0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8274eb1c
	if (!ctx.cr0.eq) goto loc_8274EB1C;
loc_8274EB18:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8274EB1C:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// lwz r11,11860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11860);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r9.u8);
	// lwz r10,12440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11860, ctx.r11.u32);
	// bne cr6,0x8274eb40
	if (!ctx.cr6.eq) goto loc_8274EB40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EB40:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwimi r11,r10,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// b 0x8274ebd4
	goto loc_8274EBD4;
loc_8274EB50:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8274eb7c
	if (!ctx.cr6.eq) goto loc_8274EB7C;
	// lwz r11,11864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11864);
	// lwz r10,12444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11864, ctx.r11.u32);
	// bne cr6,0x8274eb70
	if (!ctx.cr6.eq) goto loc_8274EB70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EB70:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x8274ebd0
	goto loc_8274EBD0;
loc_8274EB7C:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8274eba8
	if (!ctx.cr6.eq) goto loc_8274EBA8;
	// lwz r11,11868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11868);
	// lwz r10,12448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11868, ctx.r11.u32);
	// bne cr6,0x8274eb9c
	if (!ctx.cr6.eq) goto loc_8274EB9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EB9C:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x8274ebd0
	goto loc_8274EBD0;
loc_8274EBA8:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x8274ebe8
	if (!ctx.cr6.eq) goto loc_8274EBE8;
	// lwz r11,11872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11872);
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11872, ctx.r11.u32);
	// bne cr6,0x8274ebc8
	if (!ctx.cr6.eq) goto loc_8274EBC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EBC8:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10460);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_8274EBD0:
	// stw r10,10460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10460, ctx.r10.u32);
loc_8274EBD4:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8274EBE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274EBF0"))) PPC_WEAK_FUNC(sub_8274EBF0);
PPC_FUNC_IMPL(__imp__sub_8274EBF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,12456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12456, ctx.r30.u32);
	// beq cr6,0x8274ed34
	if (ctx.cr6.eq) goto loc_8274ED34;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ec28
	if (!ctx.cr6.eq) goto loc_8274EC28;
	// bl 0x8274bbc8
	ctx.lr = 0x8274EC28;
	sub_8274BBC8(ctx, base);
loc_8274EC28:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,10376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10376, ctx.r11.u32);
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// lbz r9,10943(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10943);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,10560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10560, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10942, ctx.r10.u8);
	// beq 0x8274ed10
	if (ctx.cr0.eq) goto loc_8274ED10;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8274ec68
	if (ctx.cr0.eq) goto loc_8274EC68;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274ecf8
	goto loc_8274ECF8;
loc_8274EC68:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274ecf0
	if (ctx.cr0.eq) goto loc_8274ECF0;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ec88
	if (ctx.cr6.eq) goto loc_8274EC88;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ecf0
	if (!ctx.cr6.eq) goto loc_8274ECF0;
loc_8274EC88:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274eca0
	if (ctx.cr6.eq) goto loc_8274ECA0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ecf0
	if (!ctx.cr6.eq) goto loc_8274ECF0;
loc_8274ECA0:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ecb8
	if (ctx.cr6.eq) goto loc_8274ECB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ecf0
	if (!ctx.cr6.eq) goto loc_8274ECF0;
loc_8274ECB8:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ecd0
	if (ctx.cr6.eq) goto loc_8274ECD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ecf0
	if (!ctx.cr6.eq) goto loc_8274ECF0;
loc_8274ECD0:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ece8
	if (ctx.cr6.eq) goto loc_8274ECE8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ecf0
	if (!ctx.cr6.eq) goto loc_8274ECF0;
loc_8274ECE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274ecf4
	goto loc_8274ECF4;
loc_8274ECF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274ECF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8274ECF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274ed10
	if (ctx.cr0.eq) goto loc_8274ED10;
	// lwz r11,10368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10368);
	// lwz r10,13172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13172);
	// rlwimi r11,r10,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10368, ctx.r11.u32);
loc_8274ED10:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x8274ed54
	goto loc_8274ED54;
loc_8274ED34:
	// lwz r11,10560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,10560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10560, ctx.r11.u32);
	// stb r10,10942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10942, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_8274ED54:
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee30
	if (!ctx.cr6.eq) goto loc_8274EE30;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8274ee30
	if (!ctx.cr0.eq) goto loc_8274EE30;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8274ee30
	if (!ctx.cr0.eq) goto loc_8274EE30;
	// lbz r10,12187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8274ee30
	if (!ctx.cr0.eq) goto loc_8274EE30;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8274ed94
	if (ctx.cr0.eq) goto loc_8274ED94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274ee24
	goto loc_8274EE24;
loc_8274ED94:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274ee1c
	if (ctx.cr0.eq) goto loc_8274EE1C;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274edb4
	if (ctx.cr6.eq) goto loc_8274EDB4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee1c
	if (!ctx.cr6.eq) goto loc_8274EE1C;
loc_8274EDB4:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274edcc
	if (ctx.cr6.eq) goto loc_8274EDCC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee1c
	if (!ctx.cr6.eq) goto loc_8274EE1C;
loc_8274EDCC:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ede4
	if (ctx.cr6.eq) goto loc_8274EDE4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee1c
	if (!ctx.cr6.eq) goto loc_8274EE1C;
loc_8274EDE4:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274edfc
	if (ctx.cr6.eq) goto loc_8274EDFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee1c
	if (!ctx.cr6.eq) goto loc_8274EE1C;
loc_8274EDFC:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8274ee14
	if (ctx.cr6.eq) goto loc_8274EE14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8274ee1c
	if (!ctx.cr6.eq) goto loc_8274EE1C;
loc_8274EE14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274ee20
	goto loc_8274EE20;
loc_8274EE1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EE20:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8274EE24:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x8274ee34
	if (!ctx.cr0.eq) goto loc_8274EE34;
loc_8274EE30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8274EE34:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// lwz r11,11876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11876);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r9.u8);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,11876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11876, ctx.r11.u32);
	// bne cr6,0x8274ee58
	if (!ctx.cr6.eq) goto loc_8274EE58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EE58:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r11,11880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11880);
	// stw r11,11880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11880, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8274ee90
	if (!ctx.cr6.eq) goto loc_8274EE90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8274EE90:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// rlwimi r11,r10,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274EEC8"))) PPC_WEAK_FUNC(sub_8274EEC8);
PPC_FUNC_IMPL(__imp__sub_8274EEC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82754078
	ctx.lr = 0x8274EEF0;
	sub_82754078(ctx, base);
	// addi r30,r31,15004
	ctx.r30.s64 = ctx.r31.s64 + 15004;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = ctx.r11.s64 + 1536;
loc_8274EF00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8274ef20
	if (!ctx.cr0.eq) goto loc_8274EF20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8274ef00
	if (!ctx.cr6.eq) goto loc_8274EF00;
loc_8274EF20:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8274ef74
	if (ctx.cr0.eq) goto loc_8274EF74;
	// lwz r3,23904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8274ef4c
	if (ctx.cr6.eq) goto loc_8274EF4C;
	// lwz r11,23908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23908);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8274ef4c
	if (!ctx.cr0.eq) goto loc_8274EF4C;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a45878
	ctx.lr = 0x8274EF4C;
	sub_82A45878(ctx, base);
loc_8274EF4C:
	// lwz r11,23908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23908);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,23908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23908, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8274EF68;
	sub_82A4EA80(ctx, base);
	// lwz r11,16708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16708, ctx.r11.u32);
loc_8274EF74:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274EF90"))) PPC_WEAK_FUNC(sub_8274EF90);
PPC_FUNC_IMPL(__imp__sub_8274EF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82754110
	ctx.lr = 0x8274EFB8;
	sub_82754110(ctx, base);
	// addi r30,r31,15004
	ctx.r30.s64 = ctx.r31.s64 + 15004;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = ctx.r11.s64 + 1536;
loc_8274EFC8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8274efe8
	if (!ctx.cr0.eq) goto loc_8274EFE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8274efc8
	if (!ctx.cr6.eq) goto loc_8274EFC8;
loc_8274EFE8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8274f03c
	if (ctx.cr0.eq) goto loc_8274F03C;
	// lwz r3,23904(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23904);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8274f014
	if (ctx.cr6.eq) goto loc_8274F014;
	// lwz r11,23908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23908);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8274f014
	if (!ctx.cr0.eq) goto loc_8274F014;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a45878
	ctx.lr = 0x8274F014;
	sub_82A45878(ctx, base);
loc_8274F014:
	// lwz r11,23908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23908);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,23908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23908, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8274F030;
	sub_82A4EA80(ctx, base);
	// lwz r11,16708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,16708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16708, ctx.r11.u32);
loc_8274F03C:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F058"))) PPC_WEAK_FUNC(sub_8274F058);
PPC_FUNC_IMPL(__imp__sub_8274F058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274f10c
	if (ctx.cr6.eq) goto loc_8274F10C;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x8274f0b4
	if (!ctx.cr6.eq) goto loc_8274F0B4;
	// ld r9,21608(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21608);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,21608(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21608, ctx.r9.u64);
	// b 0x8274f0c4
	goto loc_8274F0C4;
loc_8274F0B4:
	// ld r8,21600(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21600);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,21600(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21600, ctx.r9.u64);
loc_8274F0C4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,13436(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13436);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8274f10c
	if (ctx.cr6.eq) goto loc_8274F10C;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfs f13,21592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21592);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-27804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8274F10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274F10C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F120"))) PPC_WEAK_FUNC(sub_8274F120);
PPC_FUNC_IMPL(__imp__sub_8274F120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274F128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8274F138:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8274f138
	if (!ctx.cr0.eq) goto loc_8274F138;
	// lbz r11,10941(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8274f1e4
	if (!ctx.cr0.eq) goto loc_8274F1E4;
	// lwz r11,10896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10896);
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,88(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8274f194
	if (ctx.cr6.eq) goto loc_8274F194;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8274F194:
	// bl 0x82a6e450
	ctx.lr = 0x8274F198;
	sub_82A6E450(ctx, base);
	// lwz r11,10888(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8274f1b4
	if (!ctx.cr6.eq) goto loc_8274F1B4;
	// lwz r11,11004(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274f1b4
	if (ctx.cr6.eq) goto loc_8274F1B4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8274F1B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// bge cr6,0x8274f1cc
	if (!ctx.cr6.lt) goto loc_8274F1CC;
loc_8274F1C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8274f1e8
	goto loc_8274F1E8;
loc_8274F1CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82749bf8
	ctx.lr = 0x8274F1D4;
	sub_82749BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8274f1e4
	if (!ctx.cr0.eq) goto loc_8274F1E4;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x8274f1c4
	goto loc_8274F1C4;
loc_8274F1E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8274F1E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274F1F0"))) PPC_WEAK_FUNC(sub_8274F1F0);
PPC_FUNC_IMPL(__imp__sub_8274F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82a45e50
	ctx.lr = 0x8274F214;
	sub_82A45E50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,23936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23936, ctx.r3.u32);
	// bne 0x8274f228
	if (!ctx.cr0.eq) goto loc_8274F228;
loc_8274F220:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8274f334
	goto loc_8274F334;
loc_8274F228:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82a45e50
	ctx.lr = 0x8274F234;
	sub_82A45E50(ctx, base);
	// stw r3,23944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23944, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8274f220
	if (ctx.cr0.eq) goto loc_8274F220;
	// lwz r11,23936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23936);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,156
	ctx.r11.s64 = ctx.r11.s64 + 156;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,31832
	ctx.r4.s64 = ctx.r6.s64 + 31832;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x8274F290;
	sub_82A4EA80(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,10568(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10568);
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwinm r6,r6,0,29,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// lwz r9,23936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23936);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8274F2E4:
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bne 0x8274f2e4
	if (!ctx.cr0.eq) goto loc_8274F2E4;
	// lwz r11,23936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23936);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r11,r11,-156
	ctx.r11.s64 = ctx.r11.s64 + -156;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,23940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23940, ctx.r11.u32);
loc_8274F334:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F350"))) PPC_WEAK_FUNC(sub_8274F350);
PPC_FUNC_IMPL(__imp__sub_8274F350) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F368"))) PPC_WEAK_FUNC(sub_8274F368);
PPC_FUNC_IMPL(__imp__sub_8274F368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8274f3a0
	if (!ctx.cr6.eq) goto loc_8274F3A0;
	// bl 0x82757a18
	ctx.lr = 0x8274F38C;
	sub_82757A18(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x82a45ee8
	ctx.lr = 0x8274F398;
	sub_82A45EE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8274f3a8
	goto loc_8274F3A8;
loc_8274F3A0:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_8274F3A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F3C0"))) PPC_WEAK_FUNC(sub_8274F3C0);
PPC_FUNC_IMPL(__imp__sub_8274F3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10888);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274f3e4
	if (ctx.cr6.eq) goto loc_8274F3E4;
	// bl 0x82a6e450
	ctx.lr = 0x8274F3E4;
	sub_82A6E450(ctx, base);
loc_8274F3E4:
	// bl 0x82a6e450
	ctx.lr = 0x8274F3E8;
	sub_82A6E450(ctx, base);
	// stw r3,10888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F400"))) PPC_WEAK_FUNC(sub_8274F400);
PPC_FUNC_IMPL(__imp__sub_8274F400) {
	PPC_FUNC_PROLOGUE();
	// eieio 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10888, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274F410"))) PPC_WEAK_FUNC(sub_8274F410);
PPC_FUNC_IMPL(__imp__sub_8274F410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274F418;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,12440
	ctx.r29.s64 = ctx.r31.s64 + 12440;
loc_8274F428:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,14832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14832);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8274f448
	if (ctx.cr6.eq) goto loc_8274F448;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274e890
	ctx.lr = 0x8274F448;
	sub_8274E890(ctx, base);
loc_8274F448:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8274f428
	if (ctx.cr6.lt) goto loc_8274F428;
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,14824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14824);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8274f474
	if (ctx.cr6.eq) goto loc_8274F474;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x8274F474;
	sub_8274EBF0(ctx, base);
loc_8274F474:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82758938
	ctx.lr = 0x8274F480;
	sub_82758938(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82758590
	ctx.lr = 0x8274F48C;
	sub_82758590(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,11820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11820, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x8274e800
	ctx.lr = 0x8274F4AC;
	sub_8274E800(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8274F4B8:
	// subfic r11,r30,95
	ctx.xer.ca = ctx.r30.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r30.s64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	ctx.r11.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274e658
	ctx.lr = 0x8274F4E8;
	sub_8274E658(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8274f4b8
	if (ctx.cr6.lt) goto loc_8274F4B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8274F4F8:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82742d00
	ctx.lr = 0x8274F514;
	sub_82742D00(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 26, ctx.xer);
	// blt cr6,0x8274f4f8
	if (ctx.cr6.lt) goto loc_8274F4F8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274F528"))) PPC_WEAK_FUNC(sub_8274F528);
PPC_FUNC_IMPL(__imp__sub_8274F528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274F530;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r31,16712
	ctx.r30.s64 = ctx.r31.s64 + 16712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312e90c
	ctx.lr = 0x8274F544;
	sub_8312E90C(ctx, base);
	// lwz r11,16548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16548);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16548, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16704);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16700(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16700);
	// stw r11,16552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16552, ctx.r11.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8274f5e8
	if (ctx.cr6.eq) goto loc_8274F5E8;
loc_8274F570:
	// lwz r11,16700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16700);
	// lwz r8,16548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16548);
	// rlwinm r11,r11,3,25,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x78;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,16572
	ctx.r10.s64 = ctx.r11.s64 + 16572;
	// lwz r10,16576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16576);
	// lwz r11,16572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16572);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8274f5e8
	if (ctx.cr6.gt) goto loc_8274F5E8;
	// lwz r10,16568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r10.u32);
	// bne cr6,0x8274f5b4
	if (!ctx.cr6.eq) goto loc_8274F5B4;
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// b 0x8274f5c4
	goto loc_8274F5C4;
loc_8274F5B4:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 24848, ctx.r11.u32);
	// eieio 
	// sync 
loc_8274F5C4:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,16700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16700);
	// stw r10,23328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23328, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16700, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16704);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8274f570
	if (!ctx.cr6.eq) goto loc_8274F570;
loc_8274F5E8:
	// lwz r11,16544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274f614
	if (ctx.cr6.eq) goto loc_8274F614;
	// lwz r10,16568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,16548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16548);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274F614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8274F614:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8312e8bc
	ctx.lr = 0x8274F620;
	sub_8312E8BC(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274F628"))) PPC_WEAK_FUNC(sub_8274F628);
PPC_FUNC_IMPL(__imp__sub_8274F628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8274F630;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,2236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r31,16712
	ctx.r26.s64 = ctx.r31.s64 + 16712;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312e90c
	ctx.lr = 0x8274F650;
	sub_8312E90C(ctx, base);
	// lwz r10,16564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16564);
	// lwz r11,21556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21556);
	// rlwinm r30,r29,24,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// rlwinm r28,r29,0,0,19
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,16564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16564, ctx.r10.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x8274f680
	if (!ctx.cr6.eq) goto loc_8274F680;
	// li r29,60
	ctx.r29.s64 = 60;
loc_8274F680:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,16552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16552);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r24,r10,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x8312e60c
	ctx.lr = 0x8274F694;
	sub_8312E60C(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = ctx.r24.s64 * 100;
	// divwu r11,r11,r29
	ctx.r11.u32 = ctx.r11.u32 / ctx.r29.u32;
	// twllei r29,0
	// twllei r11,0
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r7,100
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 100, ctx.xer);
	// ble cr6,0x8274f6bc
	if (!ctx.cr6.gt) goto loc_8274F6BC;
	// li r7,100
	ctx.r7.s64 = 100;
loc_8274F6BC:
	// lwz r8,16556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16556);
	// lwz r10,16548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16548);
	// add r11,r8,r30
	ctx.r11.u64 = ctx.r8.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8274f6e8
	if (ctx.cr6.gt) goto loc_8274F6E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8274f6e8
	if (ctx.cr6.eq) goto loc_8274F6E8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x8274f6e8
	if (!ctx.cr6.gt) goto loc_8274F6E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8274F6E8:
	// lwz r9,16540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16540);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8274f72c
	if (ctx.cr6.eq) goto loc_8274F72C;
	// cntlzw r6,r28
	ctx.r6.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,16564(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16564);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8274F728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8274F72C:
	// lwz r10,16548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16548);
	// stw r11,16556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16556, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8274f770
	if (ctx.cr6.eq) goto loc_8274F770;
	// lwz r10,16564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16564);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8274f770
	if (ctx.cr6.eq) goto loc_8274F770;
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16704);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r9,r10,16572
	ctx.r9.s64 = ctx.r10.s64 + 16572;
	// stw r11,16576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16576, ctx.r11.u32);
	// stw r28,16572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16572, ctx.r28.u32);
	// lwz r11,16704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16704);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16704, ctx.r11.u32);
	// b 0x8274f7ac
	goto loc_8274F7AC;
loc_8274F770:
	// lwz r11,16568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16568, ctx.r11.u32);
	// beq cr6,0x8274f798
	if (ctx.cr6.eq) goto loc_8274F798;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r28,24848(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 24848, ctx.r28.u32);
	// eieio 
	// sync 
	// b 0x8274f7a4
	goto loc_8274F7A4;
loc_8274F798:
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8274F7A4:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,23328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23328, ctx.r11.u32);
loc_8274F7AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312e8bc
	ctx.lr = 0x8274F7B8;
	sub_8312E8BC(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274F7C0"))) PPC_WEAK_FUNC(sub_8274F7C0);
PPC_FUNC_IMPL(__imp__sub_8274F7C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8274F7C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82753850
	ctx.lr = 0x8274F7DC;
	sub_82753850(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761d90
	ctx.lr = 0x8274F7E8;
	sub_82761D90(ctx, base);
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8274f870
	if (!ctx.cr6.eq) goto loc_8274F870;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274f80c
	if (!ctx.cr6.gt) goto loc_8274F80C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274F80C;
	sub_82746938(ctx, base);
loc_8274F80C:
	// li r11,1401
	ctx.r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8274F870:
	// lwz r11,13596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274f8b8
	if (ctx.cr6.eq) goto loc_8274F8B8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8274f8b8
	if (ctx.cr6.eq) goto loc_8274F8B8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8274f8b0
	if (ctx.cr6.eq) goto loc_8274F8B0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8274f8a8
	if (ctx.cr6.eq) goto loc_8274F8A8;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8274f8c0
	if (!ctx.cr6.eq) goto loc_8274F8C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8274f8c4
	goto loc_8274F8C4;
loc_8274F8A8:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8274f8c4
	goto loc_8274F8C4;
loc_8274F8B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8274f8c4
	goto loc_8274F8C4;
loc_8274F8B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8274f8c4
	goto loc_8274F8C4;
loc_8274F8C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8274F8C4:
	// lwz r10,11852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11852);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// or r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 | ctx.r29.u64;
	// ble cr6,0x8274f8f4
	if (!ctx.cr6.gt) goto loc_8274F8F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274F8F0;
	sub_82746938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8274F8F4:
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,-2520
	ctx.r6.s64 = ctx.r11.s64 + -2520;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746b30
	ctx.lr = 0x8274F90C;
	sub_82746B30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x8274f97c
	if (!ctx.cr6.eq) goto loc_8274F97C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274f92c
	if (!ctx.cr6.gt) goto loc_8274F92C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274F92C;
	sub_82746938(ctx, base);
loc_8274F92C:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8274F97C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82753850
	ctx.lr = 0x8274F988;
	sub_82753850(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274F9A0"))) PPC_WEAK_FUNC(sub_8274F9A0);
PPC_FUNC_IMPL(__imp__sub_8274F9A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274f9d4
	if (!ctx.cr6.gt) goto loc_8274F9D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82746938
	ctx.lr = 0x8274F9D4;
	sub_82746938(ctx, base);
loc_8274F9D4:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r10,6209
	ctx.r10.s64 = 6209;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,-1793
	ctx.r8.s64 = -1793;
	// ori r11,r9,310
	ctx.r11.u64 = ctx.r9.u64 | 310;
	// li r7,6448
	ctx.r7.s64 = 6448;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r9,3,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x8274fa24
	if (ctx.cr6.eq) goto loc_8274FA24;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8274FA24:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8274FA48"))) PPC_WEAK_FUNC(sub_8274FA48);
PPC_FUNC_IMPL(__imp__sub_8274FA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8274FA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r30,r11,310
	ctx.r30.u64 = ctx.r11.u64 | 310;
	// bne cr6,0x8274fb2c
	if (!ctx.cr6.eq) goto loc_8274FB2C;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x8274fae4
	if (!ctx.cr6.eq) goto loc_8274FAE4;
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// li r9,127
	ctx.r9.s64 = 127;
loc_8274FA84:
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// sth r8,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r8.u16);
	// divwu r7,r10,r9
	ctx.r7.u32 = ctx.r10.u32 / ctx.r9.u32;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// sth r8,512(r11)
	PPC_STORE_U16(ctx.r11.u32 + 512, ctx.r8.u16);
	// ori r6,r6,65408
	ctx.r6.u64 = ctx.r6.u64 | 65408;
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// clrlwi r8,r7,16
	ctx.r8.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r8,-510(r11)
	PPC_STORE_U16(ctx.r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// sth r8,514(r11)
	PPC_STORE_U16(ctx.r11.u32 + 514, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x8274fa84
	if (ctx.cr6.lt) goto loc_8274FA84;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82754110
	ctx.lr = 0x8274FADC;
	sub_82754110(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8274fb34
	goto loc_8274FB34;
loc_8274FAE4:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
loc_8274FAE8:
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// ori r8,r8,65280
	ctx.r8.u64 = ctx.r8.u64 | 65280;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// sth r9,-1024(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1024, ctx.r9.u16);
	// sth r9,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x8274fae8
	if (ctx.cr6.lt) goto loc_8274FAE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82754078
	ctx.lr = 0x8274FB28;
	sub_82754078(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8274FB2C:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8274fb40
	if (!ctx.cr6.eq) goto loc_8274FB40;
loc_8274FB34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82754348
	ctx.lr = 0x8274FB3C;
	sub_82754348(ctx, base);
	// b 0x8274fb48
	goto loc_8274FB48;
loc_8274FB40:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82754250
	ctx.lr = 0x8274FB48;
	sub_82754250(ctx, base);
loc_8274FB48:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274FB50"))) PPC_WEAK_FUNC(sub_8274FB50);
PPC_FUNC_IMPL(__imp__sub_8274FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8274FB58;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,23932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8274fb90
	if (ctx.cr0.eq) goto loc_8274FB90;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8274f7c0
	ctx.lr = 0x8274FB90;
	sub_8274F7C0(ctx, base);
loc_8274FB90:
	// rlwinm. r27,r25,0,29,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8274fc5c
	if (ctx.cr0.eq) goto loc_8274FC5C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274fbb0
	if (!ctx.cr6.gt) goto loc_8274FBB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274FBB0;
	sub_82746938(ctx, base);
loc_8274FBB0:
	// li r11,6515
	ctx.r11.s64 = 6515;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6500
	ctx.r11.s64 = 6500;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r21,3
	ctx.r21.s64 = 3;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r20,6515
	ctx.r20.s64 = 6515;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r18,1
	ctx.r18.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r17,256
	ctx.r17.s64 = 256;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r16,6226
	ctx.r16.s64 = 6226;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r15,6200
	ctx.r15.s64 = 6200;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r9,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r14.u32 = ea;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r8,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r14.u32 = ea;
	// stwu r22,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r14.u32 = ea;
	// stwu r10,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r14.u32 = ea;
	// stwu r21,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r14.u32 = ea;
	// stwu r20,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r14.u32 = ea;
	// stwu r19,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r14.u32 = ea;
	// stwu r18,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r18.u32);
	ctx.r14.u32 = ea;
	// stwu r17,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r14.u32 = ea;
	// stwu r16,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r16.u32);
	ctx.r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r14.u32 = ea;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r15,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r15.u32);
	ctx.r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + ctx.r14.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r14.u32 = ea;
	// stw r14,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r14.u32);
	// bl 0x8274b740
	ctx.lr = 0x8274FC5C;
	sub_8274B740(ctx, base);
loc_8274FC5C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274f9a0
	ctx.lr = 0x8274FC68;
	sub_8274F9A0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274fc80
	if (!ctx.cr6.gt) goto loc_8274FC80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274FC80;
	sub_82746938(ctx, base);
loc_8274FC80:
	// rlwinm r11,r26,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xFFF;
	// li r10,6212
	ctx.r10.s64 = 6212;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r26,3
	ctx.r10.u64 = ctx.r26.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x8274fd00
	if (ctx.cr6.eq) goto loc_8274FD00;
	// li r10,6200
	ctx.r10.s64 = 6200;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r8,15360
	ctx.r10.u64 = ctx.r8.u64 | 15360;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,6226
	ctx.r3.s64 = 6226;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_8274FD00:
	// rlwinm. r10,r25,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x8274fd1c
	if (ctx.cr0.eq) goto loc_8274FD1C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274fa48
	ctx.lr = 0x8274FD1C;
	sub_8274FA48(ctx, base);
loc_8274FD1C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8274FD28"))) PPC_WEAK_FUNC(sub_8274FD28);
PPC_FUNC_IMPL(__imp__sub_8274FD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8274FD30;
	__savegprlr_22(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r4,r28,28
	ctx.r4.s64 = ctx.r28.s64 + 28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,16560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16560);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16560, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8274FD5C;
	sub_82A4EA80(ctx, base);
	// lwz r11,13608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13608);
	// li r22,3
	ctx.r22.s64 = 3;
	// lwz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// clrlwi r10,r29,26
	ctx.r10.u64 = ctx.r29.u32 & 0x3F;
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x8274fd7c
	if (!ctx.cr6.eq) goto loc_8274FD7C;
	// rlwimi r29,r22,1,26,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r22.u32, 1) & 0x3F) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x8274fd8c
	goto loc_8274FD8C;
loc_8274FD7C:
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x8274fd90
	if (!ctx.cr6.eq) goto loc_8274FD90;
	// li r10,27
	ctx.r10.s64 = 27;
	// rlwimi r29,r10,1,26,31
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFFC0);
loc_8274FD8C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
loc_8274FD90:
	// rlwinm r30,r11,15,17,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r31,14844
	ctx.r3.s64 = ctx.r31.s64 + 14844;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwimi r9,r11,25,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 25) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r8,r10,0,31,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFE001) | (ctx.r8.u64 & 0x1FFE);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// rlwimi r30,r8,0,0,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFE) | (ctx.r30.u64 & 0xFFFFFFFF00000001);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8274FDC4;
	sub_82A4EA80(ctx, base);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r11,r30,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x2;
	// lwz r10,13612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13612);
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
	// lwz r7,21632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21632);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r6,r29,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// clrlwi r5,r29,26
	ctx.r5.u64 = ctx.r29.u32 & 0x3F;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// beq cr6,0x8274fed0
	if (ctx.cr6.eq) goto loc_8274FED0;
	// lwz r10,21624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21624);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x8274fed0
	if (!ctx.cr6.lt) goto loc_8274FED0;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8274fe8c
	if (!ctx.cr6.gt) goto loc_8274FE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274FE8C;
	sub_82746938(ctx, base);
loc_8274FE8C:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r11,22528
	ctx.r9.u64 = ctx.r11.u64 | 22528;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r8,48879
	ctx.r10.u64 = ctx.r8.u64 | 48879;
	// li r29,1
	ctx.r29.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8274FED0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8274ff10
	if (ctx.cr6.eq) goto loc_8274FF10;
	// addi r10,r31,13640
	ctx.r10.s64 = ctx.r31.s64 + 13640;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r8,r24,28
	ctx.r8.s64 = ctx.r24.s64 + 28;
loc_8274FEE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8274ff04
	if (!ctx.cr0.eq) goto loc_8274FF04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8274fee4
	if (!ctx.cr6.eq) goto loc_8274FEE4;
loc_8274FF04:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// bne 0x8274ff14
	if (!ctx.cr0.eq) goto loc_8274FF14;
loc_8274FF10:
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_8274FF14:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274ff40
	if (ctx.cr6.eq) goto loc_8274FF40;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8274ff3c
	if (!ctx.cr6.gt) goto loc_8274FF3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8274FF3C;
	sub_82746938(ctx, base);
loc_8274FF3C:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8274FF40:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8274ff54
	if (ctx.cr6.eq) goto loc_8274FF54;
	// lwz r11,23908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23908);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,23908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23908, ctx.r11.u32);
loc_8274FF54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82761ca8
	ctx.lr = 0x8274FF60;
	sub_82761CA8(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8312e97c
	ctx.lr = 0x8274FF6C;
	sub_8312E97C(ctx, base);
	// lwz r11,21532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8274ff88
	if (ctx.cr6.eq) goto loc_8274FF88;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8274ffd8
	goto loc_8274FFD8;
loc_8274FF88:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745680
	ctx.lr = 0x8274FF94;
	sub_82745680(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e98c
	ctx.lr = 0x8274FFD0;
	sub_8312E98C(ctx, base);
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8274FFD8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,23300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23300, ctx.r11.u32);
	// beq cr6,0x82750068
	if (ctx.cr6.eq) goto loc_82750068;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x8275001c
	if (!ctx.cr6.gt) goto loc_8275001C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8275001C;
	sub_82746938(ctx, base);
loc_8275001C:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r11,22528
	ctx.r9.u64 = ctx.r11.u64 | 22528;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r8,48879
	ctx.r10.u64 = ctx.r8.u64 | 48879;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,21628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21628);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stw r11,21628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21628, ctx.r11.u32);
loc_82750068:
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82750078
	if (ctx.cr6.eq) goto loc_82750078;
	// stw r11,23928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23928, ctx.r11.u32);
loc_82750078:
	// lwz r25,16708(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16708);
	// stw r23,16708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16708, ctx.r23.u32);
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82750100
	if (ctx.cr0.eq) goto loc_82750100;
	// lwz r11,13608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13608);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x827500a4
	if (ctx.cr6.eq) goto loc_827500A4;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x827500a8
	if (!ctx.cr6.eq) goto loc_827500A8;
loc_827500A4:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_827500A8:
	// lwz r11,13612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13612);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,13544(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13544);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 720, ctx.xer);
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x827500dc
	if (!ctx.cr6.eq) goto loc_827500DC;
	// lwz r11,13548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13548);
	// cmplwi cr6,r11,480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 480, ctx.xer);
	// beq cr6,0x827500d8
	if (ctx.cr6.eq) goto loc_827500D8;
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x827500dc
	if (!ctx.cr6.eq) goto loc_827500DC;
loc_827500D8:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_827500DC:
	// bl 0x8312e9fc
	ctx.lr = 0x827500E0;
	sub_8312E9FC(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8312e9dc
	ctx.lr = 0x827500E8;
	sub_8312E9DC(ctx, base);
	// lhz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 472);
	// lhz r10,474(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 474);
	// lhz r9,486(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 486);
	// stw r11,21544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21544, ctx.r11.u32);
	// stw r10,21548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21548, ctx.r10.u32);
	// stw r9,21552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21552, ctx.r9.u32);
loc_82750100:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82750124
	if (ctx.cr6.eq) goto loc_82750124;
	// addi r3,r31,13640
	ctx.r3.s64 = ctx.r31.s64 + 13640;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82750118;
	sub_82A4EA80(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274b8e8
	ctx.lr = 0x82750124;
	sub_8274B8E8(ctx, base);
loc_82750124:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82750210
	if (ctx.cr6.eq) goto loc_82750210;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82750210
	if (!ctx.cr6.eq) goto loc_82750210;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r31,13668
	ctx.r3.s64 = ctx.r31.s64 + 13668;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lis r29,10280
	ctx.r29.s64 = 673710080;
	// bne cr6,0x82750178
	if (!ctx.cr6.eq) goto loc_82750178;
	// ori r29,r29,310
	ctx.r29.u64 = ctx.r29.u64 | 310;
	// b 0x8275017c
	goto loc_8275017C;
loc_82750178:
	// ori r29,r29,262
	ctx.r29.u64 = ctx.r29.u64 | 262;
loc_8275017C:
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827501d8
	if (ctx.cr6.eq) goto loc_827501D8;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
loc_82750194:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827501b4
	if (!ctx.cr0.eq) goto loc_827501B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82750194
	if (!ctx.cr6.eq) goto loc_82750194;
loc_827501B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827501d8
	if (ctx.cr0.eq) goto loc_827501D8;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x827501C8;
	sub_82A4EA80(ctx, base);
	// lbz r11,10942(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10942, ctx.r11.u8);
	// b 0x827501f4
	goto loc_827501F4;
loc_827501D8:
	// lbz r11,10942(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827501f8
	if (ctx.cr0.eq) goto loc_827501F8;
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827501f8
	if (!ctx.cr6.eq) goto loc_827501F8;
	// addi r27,r31,13724
	ctx.r27.s64 = ctx.r31.s64 + 13724;
loc_827501F4:
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
loc_827501F8:
	// lbz r11,10943(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82750208
	if (!ctx.cr0.eq) goto loc_82750208;
	// ori r25,r25,3
	ctx.r25.u64 = ctx.r25.u64 | 3;
loc_82750208:
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x8275025c
	goto loc_8275025C;
loc_82750210:
	// lbz r11,10942(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// addi r27,r31,13724
	ctx.r27.s64 = ctx.r31.s64 + 13724;
	// lwz r29,13608(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13608);
	// addi r26,r31,15004
	ctx.r26.s64 = ctx.r31.s64 + 15004;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82750248
	if (ctx.cr0.eq) goto loc_82750248;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,13668
	ctx.r3.s64 = ctx.r31.s64 + 13668;
	// bl 0x82a4efb0
	ctx.lr = 0x82750238;
	sub_82A4EFB0(ctx, base);
	// lbz r11,10942(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// ori r25,r25,4
	ctx.r25.u64 = ctx.r25.u64 | 4;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10942, ctx.r11.u8);
loc_82750248:
	// lbz r11,10943(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82750258
	if (ctx.cr0.eq) goto loc_82750258;
	// ori r25,r25,3
	ctx.r25.u64 = ctx.r25.u64 | 3;
loc_82750258:
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8275025C:
	// stb r11,10943(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10943, ctx.r11.u8);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8275027c
	if (!ctx.cr6.eq) goto loc_8275027C;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82750280
	if (ctx.cr0.eq) goto loc_82750280;
loc_8275027C:
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_82750280:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827502b0
	if (ctx.cr6.eq) goto loc_827502B0;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274fb50
	ctx.lr = 0x827502AC;
	sub_8274FB50(ctx, base);
	// b 0x82750318
	goto loc_82750318;
loc_827502B0:
	// lwz r11,23932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827502cc
	if (ctx.cr0.eq) goto loc_827502CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274f7c0
	ctx.lr = 0x827502C8;
	sub_8274F7C0(ctx, base);
	// b 0x82750318
	goto loc_82750318;
loc_827502CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827502e4
	if (!ctx.cr6.gt) goto loc_827502E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827502E4;
	sub_82746938(ctx, base);
loc_827502E4:
	// li r10,6212
	ctx.r10.s64 = 6212;
	// rlwinm r11,r28,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r28,3
	ctx.r10.u64 = ctx.r28.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x8274f9a0
	ctx.lr = 0x82750318;
	sub_8274F9A0(ctx, base);
loc_82750318:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,21536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21536);
	// stw r29,21680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21680, ctx.r29.u32);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,21692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21692, ctx.r28.u32);
	// stw r27,21696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21696, ctx.r27.u32);
	// stw r6,21684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21684, ctx.r6.u32);
	// stw r7,21688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21688, ctx.r7.u32);
	// stw r26,21700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21700, ctx.r26.u32);
	// beq 0x82750404
	if (ctx.cr0.eq) goto loc_82750404;
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8275037c
	if (!ctx.cr6.eq) goto loc_8275037C;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8275037c
	if (!ctx.cr0.eq) goto loc_8275037C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82752058
	ctx.lr = 0x82750374;
	sub_82752058(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x827503cc
	goto loc_827503CC;
loc_8275037C:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// bl 0x82a4efb0
	ctx.lr = 0x8275038C;
	sub_82A4EFB0(ctx, base);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// lwz r11,2324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2324);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827503c8
	if (ctx.cr6.eq) goto loc_827503C8;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827503C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827503C8:
	// lwz r30,232(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
loc_827503CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827503e8
	if (!ctx.cr6.gt) goto loc_827503E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827503E4;
	sub_82746938(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_827503E8:
	// lis r11,-32139
	ctx.r11.s64 = -2106261504;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,8160
	ctx.r6.s64 = ctx.r11.s64 + 8160;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746b30
	ctx.lr = 0x82750400;
	sub_82746B30(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82750404:
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8275047c
	if (ctx.cr0.eq) goto loc_8275047C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82750424
	if (!ctx.cr6.gt) goto loc_82750424;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82750424;
	sub_82746938(ctx, base);
loc_82750424:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r10,7758
	ctx.r10.s64 = 7758;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// std r23,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r23.u64);
	// stw r23,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r23.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// bl 0x8312e99c
	ctx.lr = 0x82750468;
	sub_8312E99C(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8275047c
	if (ctx.cr0.eq) goto loc_8275047C;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8312e68c
	ctx.lr = 0x8275047C;
	sub_8312E68C(ctx, base);
loc_8275047C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,10908(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// bl 0x82746938
	ctx.lr = 0x82750488;
	sub_82746938(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82762e08
	ctx.lr = 0x82750498;
	sub_82762E08(ctx, base);
	// lwz r11,14912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82745d50
	ctx.lr = 0x827504A8;
	sub_82745D50(ctx, base);
	// lwz r4,14940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14940);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827504c4
	if (ctx.cr6.eq) goto loc_827504C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746a38
	ctx.lr = 0x827504C4;
	sub_82746A38(ctx, base);
loc_827504C4:
	// lwz r11,23932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8275052c
	if (ctx.cr0.eq) goto loc_8275052C;
	// lwz r11,256(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_827504FC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8274f120
	ctx.lr = 0x82750504;
	sub_8274F120(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82750520
	if (ctx.cr0.eq) goto loc_82750520;
	// lwz r11,16568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16568);
	// lwz r10,16560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16560);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x827504fc
	if (!ctx.cr6.lt) goto loc_827504FC;
loc_82750520:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8274f058
	ctx.lr = 0x82750528;
	sub_8274F058(ctx, base);
	// b 0x82750530
	goto loc_82750530;
loc_8275052C:
	// stw r30,14940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14940, ctx.r30.u32);
loc_82750530:
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r11.u8);
	// bl 0x82753a30
	ctx.lr = 0x82750544;
	sub_82753A30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274bad0
	ctx.lr = 0x82750550;
	sub_8274BAD0(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82750558"))) PPC_WEAK_FUNC(sub_82750558);
PPC_FUNC_IMPL(__imp__sub_82750558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,12648
	ctx.r4.s64 = ctx.r31.s64 + 12648;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8275057C;
	sub_82A4EA80(ctx, base);
	// lwz r11,12676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12676);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,12680(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12680);
	// lwz r8,12684(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12684);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12688(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12688);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,14832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14832);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x8274e890
	ctx.lr = 0x827505B0;
	sub_8274E890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8274f7c0
	ctx.lr = 0x827505BC;
	sub_8274F7C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,14828(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14828);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f1,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vrlimi128 v13,v0,4,3
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,0
	ctx.r9.s64 = 0;
	// lvlx v11,0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v13,3,2
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v13.f32), 78), 3));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8275e9e0
	ctx.lr = 0x82750640;
	sub_8275E9E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82750648;
	sub_82746938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lfs f6,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8274bf48
	ctx.lr = 0x8275066C;
	sub_8274BF48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8274e4e0
	ctx.lr = 0x82750678;
	sub_8274E4E0(ctx, base);
	// addi r5,r31,13640
	ctx.r5.s64 = ctx.r31.s64 + 13640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14828);
	// bl 0x8274fd28
	ctx.lr = 0x82750688;
	sub_8274FD28(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827506A0"))) PPC_WEAK_FUNC(sub_827506A0);
PPC_FUNC_IMPL(__imp__sub_827506A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827506A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r31,r4,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r29
	ctx.r11.u64 = ctx.r4.u64 + ctx.r29.u64;
	// subf r10,r31,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// subf r11,r9,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// subf r27,r28,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r28.s64;
	// bl 0x82745680
	ctx.lr = 0x827506EC;
	sub_82745680(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82750770
	if (ctx.cr0.eq) goto loc_82750770;
	// addi r11,r31,4096
	ctx.r11.s64 = ctx.r31.s64 + 4096;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x82750730
	if (ctx.cr6.eq) goto loc_82750730;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a4efb0
	ctx.lr = 0x8275072C;
	sub_82A4EFB0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82750730:
	// rlwinm r30,r29,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x82750744;
	sub_82A4EA80(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82750768
	if (ctx.cr6.eq) goto loc_82750768;
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a4efb0
	ctx.lr = 0x82750764;
	sub_82A4EFB0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
loc_82750768:
	// stw r31,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82750770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82750778"))) PPC_WEAK_FUNC(sub_82750778);
PPC_FUNC_IMPL(__imp__sub_82750778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82750780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827507a8
	if (!ctx.cr6.gt) goto loc_827507A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82746938
	ctx.lr = 0x827507A8;
	sub_82746938(ctx, base);
loc_827507A8:
	// lwz r11,12716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12716);
	// li r9,1
	ctx.r9.s64 = 1;
	// mulli r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 * 6;
	// oris r11,r11,49158
	ctx.r11.u64 = ctx.r11.u64 | 3221618688;
	// rlwimi r10,r9,16,0,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFFF800) | (ctx.r10.u64 & 0xFFFFFFFF000007FF);
	// ori r11,r11,11520
	ctx.r11.u64 = ctx.r11.u64 | 11520;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r9,0,3,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFF000;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82750840"))) PPC_WEAK_FUNC(sub_82750840);
PPC_FUNC_IMPL(__imp__sub_82750840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82750848;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,21704
	ctx.r3.s64 = ctx.r31.s64 + 21704;
	// bl 0x82a4efb0
	ctx.lr = 0x82750860;
	sub_82A4EFB0(ctx, base);
	// addi r30,r31,21760
	ctx.r30.s64 = ctx.r31.s64 + 21760;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82750874;
	sub_82A4EFB0(ctx, base);
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r29,r11,262
	ctx.r29.u64 = ctx.r11.u64 | 262;
	// lwz r11,21680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21680);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x827508c0
	if (ctx.cr6.eq) goto loc_827508C0;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82750898;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,23296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23296, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82754250
	ctx.lr = 0x827508AC;
	sub_82754250(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274f9a0
	ctx.lr = 0x827508B8;
	sub_8274F9A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827508C0;
	sub_82746938(ctx, base);
loc_827508C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827508D0"))) PPC_WEAK_FUNC(sub_827508D0);
PPC_FUNC_IMPL(__imp__sub_827508D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,21680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21680);
	// bl 0x8274f9a0
	ctx.lr = 0x827508EC;
	sub_8274F9A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,21696(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21696);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,21688(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21688);
	// lwz r4,21684(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21684);
	// bl 0x8274b740
	ctx.lr = 0x82750904;
	sub_8274B740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,21700(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21700);
	// lwz r4,21680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21680);
	// bl 0x8274fa48
	ctx.lr = 0x82750914;
	sub_8274FA48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8275091C;
	sub_82746938(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82750930"))) PPC_WEAK_FUNC(sub_82750930);
PPC_FUNC_IMPL(__imp__sub_82750930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46740
	ctx.lr = 0x8275094C;
	sub_82A46740(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r10,21676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21676);
	// sradi r11,r11,10
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x3FF) != 0);
	ctx.r11.s64 = ctx.r11.s64 >> 10;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82750978"))) PPC_WEAK_FUNC(sub_82750978);
PPC_FUNC_IMPL(__imp__sub_82750978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82750980;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827509a0
	if (!ctx.cr6.gt) goto loc_827509A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827509A0;
	sub_82746938(ctx, base);
loc_827509A0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r6,r6,8708
	ctx.r6.u64 = ctx.r6.u64 | 8708;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r29,8978
	ctx.r29.s64 = 8978;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// li r11,8205
	ctx.r11.s64 = 8205;
	// li r27,0
	ctx.r27.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82750a40
	if (!ctx.cr6.gt) goto loc_82750A40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82750A40;
	sub_82746938(ctx, base);
loc_82750A40:
	// li r11,8452
	ctx.r11.s64 = 8452;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8706
	ctx.r11.s64 = 8706;
	// li r9,8705
	ctx.r9.s64 = 8705;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r7,8962
	ctx.r7.s64 = 8962;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r30,8712
	ctx.r30.s64 = 8712;
	// li r29,4
	ctx.r29.s64 = 4;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r28,8707
	ctx.r28.s64 = 8707;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82750AC0"))) PPC_WEAK_FUNC(sub_82750AC0);
PPC_FUNC_IMPL(__imp__sub_82750AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82750AC8;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r10,r25,7
	ctx.r10.s64 = ctx.r25.s64 + 7;
	// addi r9,r24,7
	ctx.r9.s64 = ctx.r24.s64 + 7;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// rlwinm r20,r10,0,0,28
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// rlwinm r19,r9,0,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82750B20:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82750b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82750B20;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x827426c8
	ctx.lr = 0x82750B54;
	sub_827426C8(ctx, base);
	// lwz r21,12456(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82750b68
	if (ctx.cr6.eq) goto loc_82750B68;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x827446d8
	ctx.lr = 0x82750B68;
	sub_827446D8(ctx, base);
loc_82750B68:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x82750B74;
	sub_8274EBF0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r28,r1,608
	ctx.r28.s64 = ctx.r1.s64 + 608;
	// addi r26,r31,12440
	ctx.r26.s64 = ctx.r31.s64 + 12440;
loc_82750B80:
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82750b94
	if (ctx.cr6.eq) goto loc_82750B94;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x827446d8
	ctx.lr = 0x82750B94;
	sub_827446D8(ctx, base);
loc_82750B94:
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274e890
	ctx.lr = 0x82750BA8;
	sub_8274E890(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82750b80
	if (ctx.cr6.lt) goto loc_82750B80;
	// lwz r11,10688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// rldicr r26,r10,35,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r11.u32);
	// clrlwi r18,r9,31
	ctx.r18.u64 = ctx.r9.u32 & 0x1;
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82750d04
	if (ctx.cr6.eq) goto loc_82750D04;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82750c10
	if (ctx.cr6.eq) goto loc_82750C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82747650
	ctx.lr = 0x82750C0C;
	sub_82747650(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82750C10:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750c40
	if (ctx.cr6.eq) goto loc_82750C40;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750C34;
	sub_827479E8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82750C40:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750c78
	if (ctx.cr6.eq) goto loc_82750C78;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750C64;
	sub_827479E8(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82750C78:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750cc0
	if (ctx.cr6.eq) goto loc_82750CC0;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750CA8;
	sub_827479E8(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82750CC0:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750d04
	if (ctx.cr6.eq) goto loc_82750D04;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750CEC;
	sub_827479E8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82750D04:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82750d54
	if (ctx.cr6.eq) goto loc_82750D54;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750d54
	if (ctx.cr6.eq) goto loc_82750D54;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750D3C;
	sub_827479E8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82750D54:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82750d8c
	if (ctx.cr6.eq) goto loc_82750D8C;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82750d8c
	if (ctx.cr6.eq) goto loc_82750D8C;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82750D80;
	sub_827479E8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82750D8C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82750da8
	if (!ctx.cr6.gt) goto loc_82750DA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82750DA4;
	sub_82746938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82750DA8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r4,27
	ctx.r4.s64 = 27;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82745680
	ctx.lr = 0x82750DCC;
	sub_82745680(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,28280
	ctx.r28.s64 = ctx.r11.s64 + 28280;
	// bne 0x82750de4
	if (!ctx.cr0.eq) goto loc_82750DE4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82750e20
	goto loc_82750E20;
loc_82750DE4:
	// lis r11,-16359
	ctx.r11.s64 = -1072103424;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,24
	ctx.r9.s64 = 24;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r28,-96
	ctx.r4.s64 = ctx.r28.s64 + -96;
	// li r5,96
	ctx.r5.s64 = 96;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x82750E14;
	sub_82A4EA80(ctx, base);
	// addi r10,r30,96
	ctx.r10.s64 = ctx.r30.s64 + 96;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82750E20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82750e3c
	if (ctx.cr0.eq) goto loc_82750E3C;
	// addi r5,r28,-160
	ctx.r5.s64 = ctx.r28.s64 + -160;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827506a0
	ctx.lr = 0x82750E3C;
	sub_827506A0(ctx, base);
loc_82750E3C:
	// li r4,432
	ctx.r4.s64 = 432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745680
	ctx.lr = 0x82750E48;
	sub_82745680(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82750e58
	if (!ctx.cr0.eq) goto loc_82750E58;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82750e94
	goto loc_82750E94;
loc_82750E58:
	// lis r11,-15954
	ctx.r11.s64 = -1045561344;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,429
	ctx.r9.s64 = 429;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r28,192
	ctx.r4.s64 = ctx.r28.s64 + 192;
	// li r5,1716
	ctx.r5.s64 = 1716;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x82750E88;
	sub_82A4EA80(ctx, base);
	// addi r10,r30,1716
	ctx.r10.s64 = ctx.r30.s64 + 1716;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82750E94:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82750eb0
	if (ctx.cr0.eq) goto loc_82750EB0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827506a0
	ctx.lr = 0x82750EB0;
	sub_827506A0(ctx, base);
loc_82750EB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82750ecc
	if (!ctx.cr6.gt) goto loc_82750ECC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82750EC8;
	sub_82746938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82750ECC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82750978
	ctx.lr = 0x82750EF8;
	sub_82750978(ctx, base);
	// clrldi r11,r25,32
	ctx.r11.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// clrldi r10,r24,32
	ctx.r10.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r22,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// stfs f31,288(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r4,r9,20396
	ctx.r4.s64 = ctx.r9.s64 + 20396;
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,20060(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20060);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f13,356(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// lfs f12,20396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20396);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,18028(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18028);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20644);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,17852(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17852);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,17672(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17672);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,17664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17664);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,304(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f11,312(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f10,316(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f9,328(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f8,332(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,360(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f7,308(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f31,384(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f31,388(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// fmsubs f2,f6,f13,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f12,20640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20640);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f11,20636(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20636);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f10,20632(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20632);
	ctx.f10.f64 = double(temp.f32);
	// lis r30,-32215
	ctx.r30.s64 = -2111242240;
	// lfs f9,20628(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20628);
	ctx.f9.f64 = double(temp.f32);
	// li r5,160
	ctx.r5.s64 = 160;
	// lfs f8,20624(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20624);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,20620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20620);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lfs f13,20616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20616);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,20612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20612);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// lfs f6,20608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20608);
	ctx.f6.f64 = double(temp.f32);
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,376(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f1,380(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f2,344(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f2,348(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,392(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f12,404(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f11,408(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f10,412(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f0,416(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f9,420(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f8,424(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f7,428(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f6,436(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f13,440(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f5,444(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x827510CC;
	sub_82A4EFB0(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82751194
	if (ctx.cr6.eq) goto loc_82751194;
	// addi r28,r1,452
	ctx.r28.s64 = ctx.r1.s64 + 452;
loc_827510DC:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// stfs f31,-4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + -4, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827423b0
	ctx.lr = 0x82751144;
	sub_827423B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// lwz r9,252(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwimi r8,r11,0,0,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r8.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r9,r10,11,13,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x7FC00) | (ctx.r9.u64 & 0xFFFFFFFFFFF803FF);
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// rlwinm r11,r7,0,13,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82750778
	ctx.lr = 0x82751180;
	sub_82750778(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x827510dc
	if (ctx.cr6.lt) goto loc_827510DC;
loc_82751194:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827511ac
	if (!ctx.cr6.gt) goto loc_827511AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827511AC;
	sub_82746938(ctx, base);
loc_827511AC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ori r11,r11,20480
	ctx.r11.u64 = ctx.r11.u64 | 20480;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// bl 0x827506a0
	ctx.lr = 0x827511EC;
	sub_827506A0(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827506a0
	ctx.lr = 0x82751200;
	sub_827506A0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82751218
	if (!ctx.cr6.gt) goto loc_82751218;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82751218;
	sub_82746938(ctx, base);
loc_82751218:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// ori r8,r10,136
	ctx.r8.u64 = ctx.r10.u64 | 136;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,262
	ctx.r9.u64 = ctx.r9.u64 | 262;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,21688(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21688);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,21684(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21684);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bl 0x827423b0
	ctx.lr = 0x82751284;
	sub_827423B0(ctx, base);
	// lwz r11,21692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21692);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8275129c
	if (!ctx.cr6.lt) goto loc_8275129C;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// b 0x827512a0
	goto loc_827512A0;
loc_8275129C:
	// addis r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -1090519040;
loc_827512A0:
	// lwz r8,656(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r8,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r20.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8275e9e0
	ctx.lr = 0x827512EC;
	sub_8275E9E0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274ebf0
	ctx.lr = 0x827512F8;
	sub_8274EBF0(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82751308
	if (ctx.cr6.eq) goto loc_82751308;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82744750
	ctx.lr = 0x82751308;
	sub_82744750(ctx, base);
loc_82751308:
	// addi r28,r1,608
	ctx.r28.s64 = ctx.r1.s64 + 608;
loc_8275130C:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8274e890
	ctx.lr = 0x82751320;
	sub_8274E890(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82751330
	if (ctx.cr6.eq) goto loc_82751330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82744750
	ctx.lr = 0x82751330;
	sub_82744750(ctx, base);
loc_82751330:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8275130c
	if (ctx.cr6.lt) goto loc_8275130C;
	// lwz r11,10688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r18,r11,0,0,30
	ctx.r18.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFFE) | (ctx.r18.u64 & 0xFFFFFFFF00000001);
	// stw r18,10688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10688, ctx.r18.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// bl 0x82746dd8
	ctx.lr = 0x82751360;
	sub_82746DD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82751370"))) PPC_WEAK_FUNC(sub_82751370);
PPC_FUNC_IMPL(__imp__sub_82751370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82751378;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827423b0
	ctx.lr = 0x827513F4;
	sub_827423B0(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r9,384(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// li r5,112
	ctx.r5.s64 = 112;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82758c98
	ctx.lr = 0x82751424;
	sub_82758C98(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82744f70
	ctx.lr = 0x82751438;
	sub_82744F70(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82751558
	if (ctx.cr6.eq) goto loc_82751558;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82751464
	if (ctx.cr6.eq) goto loc_82751464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82747650
	ctx.lr = 0x82751460;
	sub_82747650(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82751464:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82751494
	if (ctx.cr6.eq) goto loc_82751494;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82751488;
	sub_827479E8(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82751494:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x827514cc
	if (ctx.cr6.eq) goto loc_827514CC;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x827514B8;
	sub_827479E8(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_827514CC:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82751514
	if (ctx.cr6.eq) goto loc_82751514;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x827514FC;
	sub_827479E8(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82751514:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82751558
	if (ctx.cr6.eq) goto loc_82751558;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82751540;
	sub_827479E8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82751558:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x827515a8
	if (ctx.cr6.eq) goto loc_827515A8;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x827515a8
	if (ctx.cr6.eq) goto loc_827515A8;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x82751590;
	sub_827479E8(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_827515A8:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x827515e0
	if (ctx.cr6.eq) goto loc_827515E0;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x827515e0
	if (ctx.cr6.eq) goto loc_827515E0;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827479e8
	ctx.lr = 0x827515D4;
	sub_827479E8(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_827515E0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827515fc
	if (!ctx.cr6.gt) goto loc_827515FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827515F8;
	sub_82746938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827515FC:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r4,312
	ctx.r4.s64 = 312;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82745680
	ctx.lr = 0x82751620;
	sub_82745680(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,30188
	ctx.r28.s64 = ctx.r11.s64 + 30188;
	// bne 0x82751638
	if (!ctx.cr0.eq) goto loc_82751638;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82751674
	goto loc_82751674;
loc_82751638:
	// lis r11,-16074
	ctx.r11.s64 = -1053425664;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,309
	ctx.r9.s64 = 309;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r4,r28,228
	ctx.r4.s64 = ctx.r28.s64 + 228;
	// li r5,1236
	ctx.r5.s64 = 1236;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x82751668;
	sub_82A4EA80(ctx, base);
	// addi r10,r30,1236
	ctx.r10.s64 = ctx.r30.s64 + 1236;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82751674:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82751690
	if (ctx.cr0.eq) goto loc_82751690;
	// addi r5,r28,36
	ctx.r5.s64 = ctx.r28.s64 + 36;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,244
	ctx.r4.s64 = 244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827506a0
	ctx.lr = 0x82751690;
	sub_827506A0(ctx, base);
loc_82751690:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82745680
	ctx.lr = 0x8275169C;
	sub_82745680(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827516dc
	if (ctx.cr0.eq) goto loc_827516DC;
	// lis r11,-16374
	ctx.r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82a4ea80
	ctx.lr = 0x827516D4;
	sub_82A4EA80(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_827516DC:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827516f8
	if (!ctx.cr6.gt) goto loc_827516F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x827516F4;
	sub_82746938(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827516F8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,5888
	ctx.r9.s64 = 385875968;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82750978
	ctx.lr = 0x82751724;
	sub_82750978(ctx, base);
	// addi r5,r24,28
	ctx.r5.s64 = ctx.r24.s64 + 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82750778
	ctx.lr = 0x82751734;
	sub_82750778(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8275174c
	if (!ctx.cr6.gt) goto loc_8275174C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x8275174C;
	sub_82746938(ctx, base);
loc_8275174C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r24,604(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// addi r8,r10,-27776
	ctx.r8.s64 = ctx.r10.s64 + -27776;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r9,20480
	ctx.r9.u64 = ctx.r9.u64 | 20480;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,2696(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2696);
	ctx.f12.f64 = double(temp.f32);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// addi r28,r1,148
	ctx.r28.s64 = ctx.r1.s64 + 148;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fdivs f3,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f7.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f30,f9
	ctx.f30.f64 = double(float(ctx.f9.f64));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f8,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// fdivs f31,f11,f4
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f4.f64));
	// stfs f10,176(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f11,-17364(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -17364);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f5,f12
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f10,17852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17852);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f9,17672(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17672);
	ctx.f9.f64 = double(temp.f32);
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stfs f8,180(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r26,r1,304
	ctx.r26.s64 = ctx.r1.s64 + 304;
	// lfs f8,-25412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25412);
	ctx.f8.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f7,192(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f12,212(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fdivs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// lfs f6,-27776(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27776);
	ctx.f6.f64 = double(temp.f32);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fdivs f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// stfs f11,216(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f11,18128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18128);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f8,256(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f8,f2,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f4,224(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f9,188(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f8,204(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f12,236(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// fadds f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// fmuls f4,f30,f11
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// fmuls f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f12,20604(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20604);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,20596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20596);
	ctx.f9.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f8,20592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20592);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f11,30996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 30996);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f6,20584(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20584);
	ctx.f6.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f10,20600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20600);
	ctx.f10.f64 = double(temp.f32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lfs f7,20588(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20588);
	ctx.f7.f64 = double(temp.f32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fctidz f0,f2
	ctx.f0.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfs f12,260(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f30,240(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f4,252(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfs f10,264(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f12,272(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f9,276(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f8,280(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f11,284(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f7,288(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f5,244(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f3,248(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f6,292(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f11,300(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
	// std r29,8(r26)
	PPC_STORE_U64(ctx.r26.u32 + 8, ctx.r29.u64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// std r29,16(r26)
	PPC_STORE_U64(ctx.r26.u32 + 16, ctx.r29.u64);
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// std r29,24(r26)
	PPC_STORE_U64(ctx.r26.u32 + 24, ctx.r29.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mullw r28,r10,r11
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x827506a0
	ctx.lr = 0x82751944;
	sub_827506A0(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82751a5c
	if (ctx.cr6.eq) goto loc_82751A5C;
loc_82751950:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// add r11,r10,r23
	ctx.r11.u64 = ctx.r10.u64 + ctx.r23.u64;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8275196c
	if (ctx.cr6.eq) goto loc_8275196C;
	// li r9,16384
	ctx.r9.s64 = 16384;
loc_8275196C:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// rlwinm r9,r9,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFFFF;
	// mulli r30,r9,42
	ctx.r30.s64 = ctx.r9.s64 * 42;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8275198c
	if (!ctx.cr6.lt) goto loc_8275198C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8275198C:
	// clrldi r7,r27,32
	ctx.r7.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// rlwinm r11,r11,0,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFC;
	// addi r6,r9,512
	ctx.r6.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r6,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// andi. r10,r8,49400
	ctx.r10.u64 = ctx.r8.u64 & 49400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,19200
	ctx.r10.u64 = ctx.r10.u64 | 1258291200;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r8,19200
	ctx.r8.s64 = 1258291200;
	// ori r10,r10,2561
	ctx.r10.u64 = ctx.r10.u64 | 2561;
	// oris r11,r9,19200
	ctx.r11.u64 = ctx.r9.u64 | 1258291200;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x827506a0
	ctx.lr = 0x82751A08;
	sub_827506A0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82751a20
	if (!ctx.cr6.gt) goto loc_82751A20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82746938
	ctx.lr = 0x82751A20;
	sub_82746938(ctx, base);
loc_82751A20:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mullw r10,r30,r24
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r24.s32);
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// li r9,129
	ctx.r9.s64 = 129;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// blt cr6,0x82751950
	if (ctx.cr6.lt) goto loc_82751950;
loc_82751A5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827450c0
	ctx.lr = 0x82751A70;
	sub_827450C0(ctx, base);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82758c98
	ctx.lr = 0x82751A84;
	sub_82758C98(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82751A98"))) PPC_WEAK_FUNC(sub_82751A98);
PPC_FUNC_IMPL(__imp__sub_82751A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82751AA0;
	__savegprlr_15(ctx, base);
	// stwu r1,-3456(r1)
	ea = -3456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// beq 0x82751afc
	if (ctx.cr0.eq) goto loc_82751AFC;
	// addi r31,r26,21760
	ctx.r31.s64 = ctx.r26.s64 + 21760;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82751AD8;
	sub_82A4EFB0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,23296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 23296, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82754250
	ctx.lr = 0x82751AEC;
	sub_82754250(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82746938
	ctx.lr = 0x82751AF4;
	sub_82746938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82751eac
	goto loc_82751EAC;
loc_82751AFC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r31,r11,-16384
	ctx.r31.s64 = ctx.r11.s64 + -1073741824;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82751e94
	if (!ctx.cr6.eq) goto loc_82751E94;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82751e94
	if (ctx.cr6.gt) goto loc_82751E94;
	// lwz r11,21684(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21684);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82751e8c
	if (ctx.cr6.gt) goto loc_82751E8C;
	// lwz r11,21688(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21688);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82751e8c
	if (ctx.cr6.gt) goto loc_82751E8C;
	// addi r22,r7,4096
	ctx.r22.s64 = ctx.r7.s64 + 4096;
	// cmplwi cr6,r22,16384
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 16384, ctx.xer);
	// blt cr6,0x82751b6c
	if (ctx.cr6.lt) goto loc_82751B6C;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
loc_82751B6C:
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82a4efb0
	ctx.lr = 0x82751B80;
	sub_82A4EFB0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8312eaec
	ctx.lr = 0x82751B88;
	sub_8312EAEC(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r26,21704
	ctx.r3.s64 = ctx.r26.s64 + 21704;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fmuls f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
loc_82751C08:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82751c28
	if (!ctx.cr0.eq) goto loc_82751C28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82751c08
	if (!ctx.cr6.eq) goto loc_82751C08;
loc_82751C28:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82751c54
	if (ctx.cr0.eq) goto loc_82751C54;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x82751C3C;
	sub_82A4EA80(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,21688(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21688);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,21684(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21684);
	// bl 0x8274b740
	ctx.lr = 0x82751C54;
	sub_8274B740(ctx, base);
loc_82751C54:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82751c6c
	if (ctx.cr0.eq) goto loc_82751C6C;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r31,36
	ctx.r25.s64 = ctx.r31.s64 + 36;
	// b 0x82751d04
	goto loc_82751D04;
loc_82751C6C:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82751cfc
	if (ctx.cr0.eq) goto loc_82751CFC;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// addi r9,r1,1776
	ctx.r9.s64 = ctx.r1.s64 + 1776;
	// addi r8,r1,1778
	ctx.r8.s64 = ctx.r1.s64 + 1778;
	// addi r7,r1,2288
	ctx.r7.s64 = ctx.r1.s64 + 2288;
	// addi r6,r1,2290
	ctx.r6.s64 = ctx.r1.s64 + 2290;
	// subf r30,r10,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// subf r29,r10,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r28,r10,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r27,r10,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r10.s64;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r25,r1,1776
	ctx.r25.s64 = ctx.r1.s64 + 1776;
	// addi r9,r1,1778
	ctx.r9.s64 = ctx.r1.s64 + 1778;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82751CAC:
	// lhz r17,-512(r11)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r11.u32 + -512);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r7,-510(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -510);
	// lhz r16,0(r11)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r15,512(r11)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r11.u32 + 512);
	// add r8,r7,r17
	ctx.r8.u64 = ctx.r7.u64 + ctx.r17.u64;
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r3,514(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 514);
	// add r7,r5,r16
	ctx.r7.u64 = ctx.r5.u64 + ctx.r16.u64;
	// sth r17,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r17.u16);
	// add r6,r3,r15
	ctx.r6.u64 = ctx.r3.u64 + ctx.r15.u64;
	// sthx r16,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r16.u16);
	// sthx r15,r28,r11
	PPC_STORE_U16(ctx.r28.u32 + ctx.r11.u32, ctx.r15.u16);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// sthx r7,r29,r11
	PPC_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r7.u16);
	// sthx r6,r27,r11
	PPC_STORE_U16(ctx.r27.u32 + ctx.r11.u32, ctx.r6.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82751cac
	if (!ctx.cr0.eq) goto loc_82751CAC;
	// b 0x82751d04
	goto loc_82751D04;
loc_82751CFC:
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82751D04:
	// lwz r11,23296(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23296);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82751d4c
	if (!ctx.cr6.eq) goto loc_82751D4C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82751dd0
	if (ctx.cr6.eq) goto loc_82751DD0;
	// addi r10,r26,21760
	ctx.r10.s64 = ctx.r26.s64 + 21760;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r8,r25,1536
	ctx.r8.s64 = ctx.r25.s64 + 1536;
loc_82751D24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82751d44
	if (!ctx.cr0.eq) goto loc_82751D44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82751d24
	if (!ctx.cr6.eq) goto loc_82751D24;
loc_82751D44:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82751dd0
	if (ctx.cr0.eq) goto loc_82751DD0;
loc_82751D4C:
	// stw r24,23296(r26)
	PPC_STORE_U32(ctx.r26.u32 + 23296, ctx.r24.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82751d70
	if (ctx.cr6.eq) goto loc_82751D70;
	// addi r3,r26,21760
	ctx.r3.s64 = ctx.r26.s64 + 21760;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82751D68;
	sub_82A4EA80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x82751d74
	goto loc_82751D74;
loc_82751D70:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
loc_82751D74:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82751dc8
	if (!ctx.cr6.eq) goto loc_82751DC8;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// addi r11,r1,1232
	ctx.r11.s64 = ctx.r1.s64 + 1232;
loc_82751D84:
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// ori r8,r8,65280
	ctx.r8.u64 = ctx.r8.u64 | 65280;
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// sth r9,-1024(r11)
	PPC_STORE_U16(ctx.r11.u32 + -1024, ctx.r9.u16);
	// sth r9,-512(r11)
	PPC_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x82751d84
	if (ctx.cr6.lt) goto loc_82751D84;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82754078
	ctx.lr = 0x82751DC4;
	sub_82754078(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82751DC8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82754250
	ctx.lr = 0x82751DD0;
	sub_82754250(ctx, base);
loc_82751DD0:
	// lwz r11,21536(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21536);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// clrlwi r10,r11,1
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r10,21536(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21536, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// srawi r30,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 31;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82750ac0
	ctx.lr = 0x82751DFC;
	sub_82750AC0(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r10,21536(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21536);
	// addi r9,r11,-25036
	ctx.r9.s64 = ctx.r11.s64 + -25036;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r21,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r21.u32);
	// rlwimi r10,r30,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r10,21536(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21536, ctx.r10.u32);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,32(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r8,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// beq 0x82751e54
	if (ctx.cr0.eq) goto loc_82751E54;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// b 0x82751e60
	goto loc_82751E60;
loc_82751E54:
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82751e6c
	if (ctx.cr0.eq) goto loc_82751E6C;
	// addi r4,r1,1776
	ctx.r4.s64 = ctx.r1.s64 + 1776;
loc_82751E60:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82a4ea80
	ctx.lr = 0x82751E6C;
	sub_82A4EA80(ctx, base);
loc_82751E6C:
	// cmplwi cr6,r19,1560
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1560, ctx.xer);
	// li r5,1560
	ctx.r5.s64 = 1560;
	// bgt cr6,0x82751e7c
	if (ctx.cr6.gt) goto loc_82751E7C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82751E7C:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82751E88;
	sub_82A4EA80(ctx, base);
	// b 0x82751e98
	goto loc_82751E98;
loc_82751E8C:
	// li r21,7
	ctx.r21.s64 = 7;
	// b 0x82751e98
	goto loc_82751E98;
loc_82751E94:
	// li r21,6
	ctx.r21.s64 = 6;
loc_82751E98:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,1572
	ctx.r4.s64 = ctx.r31.s64 + 1572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8274ba28
	ctx.lr = 0x82751EA8;
	sub_8274BA28(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82751EAC:
	// addi r1,r1,3456
	ctx.r1.s64 = ctx.r1.s64 + 3456;
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82751EB8"))) PPC_WEAK_FUNC(sub_82751EB8);
PPC_FUNC_IMPL(__imp__sub_82751EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// lwz r10,21680(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21680);
	// lwz r8,21684(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21684);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// ori r11,r11,310
	ctx.r11.u64 = ctx.r11.u64 | 310;
	// lwz r7,21688(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21688);
	// ori r6,r9,6144
	ctx.r6.u64 = ctx.r9.u64 | 6144;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ble cr6,0x82751ef8
	if (!ctx.cr6.gt) goto loc_82751EF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82751f0c
	goto loc_82751F0C;
loc_82751EF8:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r11,r11,59648
	ctx.r11.u64 = ctx.r11.u64 | 59648;
	// subfc r11,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
loc_82751F0C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82751f4c
	if (!ctx.cr6.eq) goto loc_82751F4C;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// lfs f13,16524(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16524);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16520);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// b 0x82751f8c
	goto loc_82751F8C;
loc_82751F4C:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r10,r9,20132
	ctx.r10.s64 = ctx.r9.s64 + 20132;
	// xori r9,r7,1
	ctx.r9.u64 = ctx.r7.u64 ^ 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// mulli r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 * 3;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f13,16524(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16524);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16516(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16516);
	ctx.f0.f64 = double(temp.f32);
loc_82751F8C:
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// fmuls f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f11,16512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16512);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,-32760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32760);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, ctx.f12.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82751FE0"))) PPC_WEAK_FUNC(sub_82751FE0);
PPC_FUNC_IMPL(__imp__sub_82751FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,2236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a46740
	ctx.lr = 0x82752008;
	sub_82A46740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// sradi r10,r10,10
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 10;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,2324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2324);
	// lwz r10,21676(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21676);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82752044
	if (ctx.cr6.eq) goto loc_82752044;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,93
	ctx.r3.s64 = 93;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82752044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82752044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82752058"))) PPC_WEAK_FUNC(sub_82752058);
PPC_FUNC_IMPL(__imp__sub_82752058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x82752060;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x827520A4;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// addi r18,r11,-25036
	ctx.r18.s64 = ctx.r11.s64 + -25036;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x827423b0
	ctx.lr = 0x827520F0;
	sub_827423B0(ctx, base);
	// lwz r11,28(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r10,40(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r11,r9,11,16,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0xFC00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF03FF);
	// rlwimi r10,r8,21,9,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 21) & 0x600000) | (ctx.r10.u64 & 0xFFFFFFFFFF9FFFFF);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// stw r11,28(r18)
	PPC_STORE_U32(ctx.r18.u32 + 28, ctx.r11.u32);
	// stw r10,40(r18)
	PPC_STORE_U32(ctx.r18.u32 + 40, ctx.r10.u32);
	// addis r11,r31,-16384
	ctx.r11.s64 = ctx.r31.s64 + -1073741824;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82752124
	if (ctx.cr6.lt) goto loc_82752124;
	// addis r11,r31,-16640
	ctx.r11.s64 = ctx.r31.s64 + -1090519040;
loc_82752124:
	// lwz r10,32(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// rlwimi r11,r10,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,32(r18)
	PPC_STORE_U32(ctx.r18.u32 + 32, ctx.r11.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x82752148
	if (!ctx.cr6.eq) goto loc_82752148;
	// li r10,27
	ctx.r10.s64 = 27;
	// rlwimi r11,r10,1,26,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r11,32(r18)
	PPC_STORE_U32(ctx.r18.u32 + 32, ctx.r11.u32);
loc_82752148:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8312eaec
	ctx.lr = 0x82752150;
	sub_8312EAEC(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82752160;
	sub_82A4EA80(ctx, base);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r19,208(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82752174
	if (!ctx.cr6.eq) goto loc_82752174;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
loc_82752174:
	// lwz r20,212(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82752188
	if (!ctx.cr6.eq) goto loc_82752188;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82752188:
	// lwz r22,200(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpw cr6,r22,r25
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x827521a0
	if (!ctx.cr6.eq) goto loc_827521A0;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_827521A0:
	// lwz r26,204(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x827521b8
	if (!ctx.cr6.eq) goto loc_827521B8;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_827521B8:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r20,32
	ctx.r9.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// clrldi r10,r19,32
	ctx.r10.u64 = ctx.r19.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfs f12,-32680(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32680);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82752234
	if (!ctx.cr6.lt) goto loc_82752234;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// b 0x82752238
	goto loc_82752238;
loc_82752234:
	// fmr f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f0.f64;
loc_82752238:
	// fsubs f13,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8275224c
	if (!ctx.cr6.lt) goto loc_8275224C;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x82752250
	goto loc_82752250;
loc_8275224C:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_82752250:
	// subf r30,r25,r22
	ctx.r30.s64 = ctx.r22.s64 - ctx.r25.s64;
	// subf r28,r27,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r27.s64;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// bl 0x82a4cba0
	ctx.lr = 0x82752274;
	sub_82A4CBA0(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// bl 0x82a4cba0
	ctx.lr = 0x827522A0;
	sub_82A4CBA0(ctx, base);
	// lwz r11,21540(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21540);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// andi. r10,r10,9
	ctx.r10.u64 = ctx.r10.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r8,r10,19
	ctx.r8.s64 = ctx.r10.s64 + 19;
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// twllei r11,0
	// divw r10,r9,r11
	ctx.r10.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// twlgei r11,-1
	// bgt cr6,0x82752308
	if (ctx.cr6.gt) goto loc_82752308;
	// li r10,24
	ctx.r10.s64 = 24;
loc_82752308:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// twllei r8,0
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r9,r8
	ctx.r11.s32 = ctx.r9.s32 / ctx.r8.s32;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// twlgei r9,-1
	// bgt cr6,0x8275233c
	if (ctx.cr6.gt) goto loc_8275233C;
	// li r11,24
	ctx.r11.s64 = 24;
loc_8275233C:
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// srawi r5,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 2;
	// divw r7,r7,r10
	ctx.r7.s32 = ctx.r7.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addze r24,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r24.s64 = temp.s64;
	// mullw r31,r7,r10
	ctx.r31.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// andc r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// divw r7,r6,r11
	ctx.r7.s32 = ctx.r6.s32 / ctx.r11.s32;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// twllei r10,0
	// twllei r11,0
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r23.s64 = temp.s64;
	// twlgei r9,-1
	// twlgei r8,-1
	// mullw r29,r7,r11
	ctx.r29.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x827523b8
	if (!ctx.cr6.gt) goto loc_827523B8;
	// rotlwi r9,r30,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// divw r8,r30,r10
	ctx.r8.s32 = ctx.r30.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r10,0
	// mullw r31,r8,r10
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// twlgei r10,-1
loc_827523B8:
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x827523dc
	if (!ctx.cr6.gt) goto loc_827523DC;
	// rotlwi r10,r28,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// divw r9,r28,r11
	ctx.r9.s32 = ctx.r28.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	// mullw r29,r9,r11
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
loc_827523DC:
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mullw r11,r29,r20
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r20.s32);
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// mullw r10,r31,r19
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r19.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// twllei r28,0
	// twllei r30,0
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r9,r27,r26
	ctx.r9.u64 = ctx.r27.u64 + ctx.r26.u64;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// divwu r11,r10,r30
	ctx.r11.u32 = ctx.r10.u32 / ctx.r30.u32;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r10,r25,r22
	ctx.r10.u64 = ctx.r25.u64 + ctx.r22.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// srawi r10,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 1;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r19,r10,r11
	ctx.r19.s64 = ctx.r11.s64 - ctx.r10.s64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fdivs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// beq cr6,0x827524a4
	if (ctx.cr6.eq) goto loc_827524A4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,17684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17684);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// b 0x827524b8
	goto loc_827524B8;
loc_827524A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r11,-11456
	ctx.r10.s64 = ctx.r11.s64 + -11456;
	// lfs f0,-11456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,-13624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13624);
	ctx.f0.f64 = double(temp.f32);
loc_827524B8:
	// divw r8,r31,r24
	ctx.r8.s32 = ctx.r31.s32 / ctx.r24.s32;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// divw r7,r29,r23
	ctx.r7.s32 = ctx.r29.s32 / ctx.r23.s32;
	// fmuls f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// li r11,42
	ctx.r11.s64 = 42;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// fdivs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r9,r31,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,2324(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 2324);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// andc r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 & ~ctx.r9.u64;
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// andc r6,r23,r5
	ctx.r6.u64 = ctx.r23.u64 & ~ctx.r5.u64;
	// twllei r24,0
	// twllei r23,0
	// twlgei r9,-1
	// twlgei r6,-1
	// rlwinm r28,r8,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r7,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8275255c
	if (ctx.cr6.eq) goto loc_8275255C;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,92
	ctx.r3.s64 = 92;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82752554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// b 0x82752560
	goto loc_82752560;
loc_8275255C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_82752560:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8275273c
	if (ctx.cr6.eq) goto loc_8275273C;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r26,180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// clrlwi r8,r9,18
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFF;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r22,r8,1
	ctx.r22.s64 = ctx.r8.s64 + 1;
	// beq cr6,0x827525ac
	if (ctx.cr6.eq) goto loc_827525AC;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// ori r9,r9,310
	ctx.r9.u64 = ctx.r9.u64 | 310;
	// subf r9,r15,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r15.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_827525AC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r8,20585
	ctx.r8.s64 = 1349058560;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r8,30806
	ctx.r10.u64 = ctx.r8.u64 | 30806;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r21.u32);
	// lwz r10,21540(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21540);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r27.u32);
	// stfs f30,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f29,32(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// beq cr6,0x827525fc
	if (ctx.cr6.eq) goto loc_827525FC;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827525FC;
	sub_82A4EA80(ctx, base);
loc_827525FC:
	// addi r4,r25,4096
	ctx.r4.s64 = ctx.r25.s64 + 4096;
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// blt cr6,0x82752614
	if (ctx.cr6.lt) goto loc_82752614;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_82752614:
	// extsw r11,r19
	ctx.r11.s64 = ctx.r19.s32;
	// extsw r10,r24
	ctx.r10.s64 = ctx.r24.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// extsw r11,r20
	ctx.r11.s64 = ctx.r20.s32;
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lis r9,21
	ctx.r9.s64 = 1376256;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r31.s32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// ori r10,r9,6144
	ctx.r10.u64 = ctx.r9.u64 | 6144;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x827526c0
	if (!ctx.cr6.gt) goto loc_827526C0;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x827526d8
	goto loc_827526D8;
loc_827526C0:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r10,r10,59648
	ctx.r10.u64 = ctx.r10.u64 | 59648;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x827526d8
	if (ctx.cr6.gt) goto loc_827526D8;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_827526D8:
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// lwz r9,21540(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21540);
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-54
	ctx.r11.s64 = ctx.r11.s64 + -54;
	// addi r31,r8,20180
	ctx.r31.s64 = ctx.r8.s64 + 20180;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82751370
	ctx.lr = 0x8275273C;
	sub_82751370(ctx, base);
loc_8275273C:
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
}

