#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_831816AC"))) PPC_WEAK_FUNC(sub_831816AC);
PPC_FUNC_IMPL(__imp__sub_831816AC) {
	PPC_FUNC_PROLOGUE();
	// mullw r5,r8,r10
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r3,r8,r7
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// addi r8,r8,255
	ctx.r8.s64 = ctx.r8.s64 + 255;
	// addi r6,r7,255
	ctx.r6.s64 = ctx.r7.s64 + 255;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// srawi r5,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 9;
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// srawi r4,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 9;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83181728
	// ERROR 83181728
	return;
}

__attribute__((alias("__imp__sub_831816F4"))) PPC_WEAK_FUNC(sub_831816F4);
PPC_FUNC_IMPL(__imp__sub_831816F4) {
	PPC_FUNC_PROLOGUE();
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// addi r7,r6,128
	ctx.r7.s64 = ctx.r6.s64 + 128;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addi r4,r8,128
	ctx.r4.s64 = ctx.r8.s64 + 128;
	// srawi r3,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 8;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r10,r16
	ctx.r9.u64 = ctx.r10.u64 + ctx.r16.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// add r8,r17,r18
	ctx.r8.u64 = ctx.r17.u64 + ctx.r18.u64;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r4.u16);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + ctx.r16.u64;
	// lwz r6,1836(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sth r4,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r4.u16);
	// lwz r7,1836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// lwz r7,1836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// lwz r7,1836(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// lwz r4,1836(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lhzx r6,r10,r4
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// extsh r14,r6
	ctx.r14.s64 = ctx.r6.s16;
	// sth r3,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
	// lwz r7,1840(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// add r4,r7,r11
	ctx.r4.u64 = ctx.r7.u64 + ctx.r11.u64;
	// sth r3,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r3.u16);
	// lwz r7,1840(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r3,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// lwz r7,1840(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lhzx r4,r11,r7
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// sth r4,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r4.u16);
	// lwz r7,1840(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lhz r3,2(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r3,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r3.u16);
	// lwz r7,1840(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lhzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r10.u32);
	// extsh r15,r4
	ctx.r15.s64 = ctx.r4.s16;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r9,1844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r30,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r30.u16);
	// lwz r9,1844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// lwz r9,1844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// sth r6,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r6.u16);
	// lwz r9,1844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r4,2(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r4,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// lwz r3,1844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// lwz r9,1848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r5,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r5.u16);
	// lwz r9,1848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,2(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// lwz r9,1848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// stw r7,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r7.u32);
	// sth r4,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r4.u16);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lwz r11,1848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// lhzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r9.u32);
	// lwz r10,600(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// clrlwi r9,r15,31
	ctx.r9.u64 = ctx.r15.u32 & 0x1;
	// slw r11,r14,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r10.u8 & 0x3F));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x831818d4
	if (ctx.cr6.eq) {
		sub_831818D4(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831818AC"))) PPC_WEAK_FUNC(sub_831818AC);
PPC_FUNC_IMPL(__imp__sub_831818AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// slw r8,r15,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r5,r7,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwimi r6,r29,3,31,28
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r29.u32, 3) & 0xFFFFFFFFFFFFFFF9) | (ctx.r6.u64 & 0x6);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// b 0x831818ec
	// ERROR 831818EC
	return;
}

__attribute__((alias("__imp__sub_831818D4"))) PPC_WEAK_FUNC(sub_831818D4);
PPC_FUNC_IMPL(__imp__sub_831818D4) {
	PPC_FUNC_PROLOGUE();
	// slw r10,r15,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// li r29,0
	ctx.r29.s64 = 0;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r17,0
	ctx.r17.s64 = 0;
	// rlwinm r10,r23,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 17) & 0xFFFE0000;
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r7,r11,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// or r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 | ctx.r28.u64;
	// rlwinm r19,r8,6,0,25
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// subf r10,r7,r19
	ctx.r10.s64 = ctx.r19.s64 - ctx.r7.s64;
	// subf r6,r19,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r19.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// addis r3,r5,128
	ctx.r3.s64 = ctx.r5.s64 + 8388608;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83181a24
	if (ctx.cr6.eq) {
		// ERROR 83181A24
		return;
	}
}

__attribute__((alias("__imp__sub_8318193C"))) PPC_WEAK_FUNC(sub_8318193C);
PPC_FUNC_IMPL(__imp__sub_8318193C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r28,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r23,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// rlwinm r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// bne cr6,0x8318197c
	if (!ctx.cr6.eq) {
		sub_8318197C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181960"))) PPC_WEAK_FUNC(sub_83181960);
PPC_FUNC_IMPL(__imp__sub_83181960) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x83181998
	if (ctx.cr6.eq) {
		sub_83181998(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181970"))) PPC_WEAK_FUNC(sub_83181970);
PPC_FUNC_IMPL(__imp__sub_83181970) {
	PPC_FUNC_PROLOGUE();
	// li r7,-35
	ctx.r7.s64 = -35;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// b 0x831819a0
	// ERROR 831819A0
	return;
}

__attribute__((alias("__imp__sub_8318197C"))) PPC_WEAK_FUNC(sub_8318197C);
PPC_FUNC_IMPL(__imp__sub_8318197C) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x83181998
	if (ctx.cr6.eq) {
		sub_83181998(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318198C"))) PPC_WEAK_FUNC(sub_8318198C);
PPC_FUNC_IMPL(__imp__sub_8318198C) {
	PPC_FUNC_PROLOGUE();
	// li r7,-37
	ctx.r7.s64 = -37;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// b 0x831819a0
	// ERROR 831819A0
	return;
}

__attribute__((alias("__imp__sub_83181998"))) PPC_WEAK_FUNC(sub_83181998);
PPC_FUNC_IMPL(__imp__sub_83181998) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// li r7,-36
	ctx.r7.s64 = -36;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,-17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -17, ctx.xer);
	// bge cr6,0x831819c0
	if (!ctx.cr6.lt) {
		sub_831819C0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831819B8"))) PPC_WEAK_FUNC(sub_831819B8);
PPC_FUNC_IMPL(__imp__sub_831819B8) {
	PPC_FUNC_PROLOGUE();
	// li r10,-17
	ctx.r10.s64 = -17;
	// b 0x831819d4
	// ERROR 831819D4
	return;
}

__attribute__((alias("__imp__sub_831819C0"))) PPC_WEAK_FUNC(sub_831819C0);
PPC_FUNC_IMPL(__imp__sub_831819C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x831819d8
	if (!ctx.cr6.gt) {
		// ERROR 831819D8
		return;
	}
}

__attribute__((alias("__imp__sub_831819D0"))) PPC_WEAK_FUNC(sub_831819D0);
PPC_FUNC_IMPL(__imp__sub_831819D0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x831819e8
	if (!ctx.cr6.lt) {
		sub_831819E8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831819E0"))) PPC_WEAK_FUNC(sub_831819E0);
PPC_FUNC_IMPL(__imp__sub_831819E0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x83181a00
	sub_83181A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831819E8"))) PPC_WEAK_FUNC(sub_831819E8);
PPC_FUNC_IMPL(__imp__sub_831819E8) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x831819f8
	if (!ctx.cr6.gt) {
		sub_831819F8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831819F0"))) PPC_WEAK_FUNC(sub_831819F0);
PPC_FUNC_IMPL(__imp__sub_831819F0) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x83181a00
	sub_83181A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831819F8"))) PPC_WEAK_FUNC(sub_831819F8);
PPC_FUNC_IMPL(__imp__sub_831819F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x83181a20
	if (ctx.cr6.eq) {
		// ERROR 83181A20
		return;
	}
}

__attribute__((alias("__imp__sub_83181A00"))) PPC_WEAK_FUNC(sub_83181A00);
PPC_FUNC_IMPL(__imp__sub_83181A00) {
	PPC_FUNC_PROLOGUE();
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r15,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r15.s64 = ctx.r11.s32 >> 16;
	// extsh r14,r11
	ctx.r14.s64 = ctx.r11.s16;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// clrlwi r20,r15,30
	ctx.r20.u64 = ctx.r15.u32 & 0x3;
	// beq cr6,0x83181a6c
	if (ctx.cr6.eq) {
		sub_83181A6C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181A40"))) PPC_WEAK_FUNC(sub_83181A40);
PPC_FUNC_IMPL(__imp__sub_83181A40) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r15
	ctx.r11.u64 = ctx.r11.u64 + ctx.r15.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r5,r6,r20
	ctx.r5.u64 = ctx.r6.u64 | ctx.r20.u64;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x83181a78
	// ERROR 83181A78
	return;
}

__attribute__((alias("__imp__sub_83181A6C"))) PPC_WEAK_FUNC(sub_83181A6C);
PPC_FUNC_IMPL(__imp__sub_83181A6C) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r15,3
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r20
	ctx.r11.u64 = ctx.r10.u64 | ctx.r20.u64;
	// clrlwi r21,r14,30
	ctx.r21.u64 = ctx.r14.u32 & 0x3;
	// lbz r9,31(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// addi r8,r21,1
	ctx.r8.s64 = ctx.r21.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// srawi r10,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r6,r10,r14
	ctx.r6.u64 = ctx.r10.u64 + ctx.r14.u64;
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// beq cr6,0x83181aec
	if (ctx.cr6.eq) {
		// ERROR 83181AEC
		return;
	}
}

__attribute__((alias("__imp__sub_83181AAC"))) PPC_WEAK_FUNC(sub_83181AAC);
PPC_FUNC_IMPL(__imp__sub_83181AAC) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83181acc
	if (ctx.cr6.eq) {
		// ERROR 83181ACC
		return;
	}
}

__attribute__((alias("__imp__sub_83181AB8"))) PPC_WEAK_FUNC(sub_83181AB8);
PPC_FUNC_IMPL(__imp__sub_83181AB8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83181ac8
	if (!ctx.cr6.gt) {
		sub_83181AC8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181AC0"))) PPC_WEAK_FUNC(sub_83181AC0);
PPC_FUNC_IMPL(__imp__sub_83181AC0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x83181acc
	// ERROR 83181ACC
	return;
}

__attribute__((alias("__imp__sub_83181AC8"))) PPC_WEAK_FUNC(sub_83181AC8);
PPC_FUNC_IMPL(__imp__sub_83181AC8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83181aec
	if (ctx.cr6.eq) {
		// ERROR 83181AEC
		return;
	}
}

__attribute__((alias("__imp__sub_83181AD8"))) PPC_WEAK_FUNC(sub_83181AD8);
PPC_FUNC_IMPL(__imp__sub_83181AD8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83181ae8
	if (!ctx.cr6.gt) {
		sub_83181AE8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181AE0"))) PPC_WEAK_FUNC(sub_83181AE0);
PPC_FUNC_IMPL(__imp__sub_83181AE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83181aec
	// ERROR 83181AEC
	return;
}

__attribute__((alias("__imp__sub_83181AE8"))) PPC_WEAK_FUNC(sub_83181AE8);
PPC_FUNC_IMPL(__imp__sub_83181AE8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83181b04
	if (ctx.cr6.eq) {
		// ERROR 83181B04
		return;
	}
}

__attribute__((alias("__imp__sub_83181AF4"))) PPC_WEAK_FUNC(sub_83181AF4);
PPC_FUNC_IMPL(__imp__sub_83181AF4) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,516(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r7,352(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,15,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF0000;
	// rlwinm r4,r11,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 | ctx.r8.u64;
	// rlwinm r6,r23,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF0000;
	// stwx r8,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r8.u32);
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// or r10,r6,r28
	ctx.r10.u64 = ctx.r6.u64 | ctx.r28.u64;
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// rlwinm r22,r10,5,0,26
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r16,r7,20
	ctx.r16.u64 = ctx.r7.u64 | 20;
	// add r5,r10,r22
	ctx.r5.u64 = ctx.r10.u64 + ctx.r22.u64;
	// add r3,r5,r16
	ctx.r3.u64 = ctx.r5.u64 + ctx.r16.u64;
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// subf r4,r11,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r10,r22,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r22.s64;
	// or r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r8,r9,0,0,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r8,r8,0,16,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83181c04
	if (ctx.cr6.eq) {
		// ERROR 83181C04
		return;
	}
}

__attribute__((alias("__imp__sub_83181B74"))) PPC_WEAK_FUNC(sub_83181B74);
PPC_FUNC_IMPL(__imp__sub_83181B74) {
	PPC_FUNC_PROLOGUE();
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r5,50(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r23,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x83181bc0
	if (!ctx.cr6.lt) {
		sub_83181BC0(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181BB0"))) PPC_WEAK_FUNC(sub_83181BB0);
PPC_FUNC_IMPL(__imp__sub_83181BB0) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x83181bd4
	// ERROR 83181BD4
	return;
}

__attribute__((alias("__imp__sub_83181BC0"))) PPC_WEAK_FUNC(sub_83181BC0);
PPC_FUNC_IMPL(__imp__sub_83181BC0) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x83181bd4
	if (!ctx.cr6.gt) {
		// ERROR 83181BD4
		return;
	}
}

__attribute__((alias("__imp__sub_83181BC8"))) PPC_WEAK_FUNC(sub_83181BC8);
PPC_FUNC_IMPL(__imp__sub_83181BC8) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,-9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -9, ctx.xer);
	// bge cr6,0x83181bec
	if (!ctx.cr6.lt) {
		sub_83181BEC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181BDC"))) PPC_WEAK_FUNC(sub_83181BDC);
PPC_FUNC_IMPL(__imp__sub_83181BDC) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r8,9
	ctx.r10.s64 = ctx.r8.s64 + 9;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// b 0x83181c00
	// ERROR 83181C00
	return;
}

__attribute__((alias("__imp__sub_83181BEC"))) PPC_WEAK_FUNC(sub_83181BEC);
PPC_FUNC_IMPL(__imp__sub_83181BEC) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x83181c00
	if (!ctx.cr6.gt) {
		// ERROR 83181C00
		return;
	}
}

__attribute__((alias("__imp__sub_83181BF4"))) PPC_WEAK_FUNC(sub_83181BF4);
PPC_FUNC_IMPL(__imp__sub_83181BF4) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r24,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 16;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// extsh r25,r10
	ctx.r25.s64 = ctx.r10.s16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x831845dc
	if (ctx.cr6.gt) {
		// ERROR 831845DC
		return;
	}
}

__attribute__((alias("__imp__sub_83181C1C"))) PPC_WEAK_FUNC(sub_83181C1C);
PPC_FUNC_IMPL(__imp__sub_83181C1C) {
	PPC_FUNC_PROLOGUE();
	// lis r12,-31976
	ctx.r12.s64 = -2095579136;
	// addi r12,r12,7220
	ctx.r12.s64 = ctx.r12.s64 + 7220;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x83182064
		return;
	case 1:
		// ERROR: 0x83182064
		return;
	case 2:
		// ERROR: 0x83181EFC
		return;
	case 3:
		// ERROR: 0x83181C44
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_83181C34"))) PPC_WEAK_FUNC(sub_83181C34);
PPC_FUNC_IMPL(__imp__sub_83181C34) {
	PPC_FUNC_PROLOGUE();
	// lwz r24,8292(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8292);
	// lwz r24,8292(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8292);
	// lwz r24,7932(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7932);
	// lwz r24,7236(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 7236);
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r9,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 2;
	// lwz r10,1060(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// srawi r8,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r14.s32 >> 2;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// srawi r3,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 2;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r9,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 2;
	// bne cr6,0x83181c8c
	if (!ctx.cr6.eq) {
		sub_83181C8C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181C7C"))) PPC_WEAK_FUNC(sub_83181C7C);
PPC_FUNC_IMPL(__imp__sub_83181C7C) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,504(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r5,508(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r4,488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// b 0x83181c98
	// ERROR 83181C98
	return;
}

__attribute__((alias("__imp__sub_83181C8C"))) PPC_WEAK_FUNC(sub_83181C8C);
PPC_FUNC_IMPL(__imp__sub_83181C8C) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,480(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r5,484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r4,464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lhz r28,90(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r9,r3,r30
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r6,r9
	ctx.r29.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lwz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// li r6,128
	ctx.r6.s64 = 128;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r22,r7,r11
	ctx.r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// dcbt r6,r27
	// addi r5,r28,128
	ctx.r5.s64 = ctx.r28.s64 + 128;
	// dcbt r5,r27
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r3,r27
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r27
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r9,r27
	// rotlwi r11,r28,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r27
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r27
	// rotlwi r5,r28,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r27
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x83181dac
	if (!ctx.cr6.eq) {
		sub_83181DAC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83181D64"))) PPC_WEAK_FUNC(sub_83181D64);
PPC_FUNC_IMPL(__imp__sub_83181D64) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r21,52
	ctx.r11.s64 = ctx.r21.s64 + 52;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83181D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83181dc8
	if (ctx.cr6.eq) {
		// ERROR 83181DC8
		return;
	}
}

__attribute__((alias("__imp__sub_83181D88"))) PPC_WEAK_FUNC(sub_83181D88);
PPC_FUNC_IMPL(__imp__sub_83181D88) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d081a8
	ctx.lr = 0x83181DA8;
	sub_82D081A8(ctx, base);
	// b 0x83181dc8
	// ERROR 83181DC8
	return;
}

__attribute__((alias("__imp__sub_83181DAC"))) PPC_WEAK_FUNC(sub_83181DAC);
PPC_FUNC_IMPL(__imp__sub_83181DAC) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r21,56
	ctx.r11.s64 = ctx.r21.s64 + 56;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83181DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r10,r4,128
	ctx.r10.s64 = ctx.r4.s64 + 128;
	// dcbt r10,r30
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r30
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r30
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r30
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r30
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r30
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r30
	// clrlwi r11,r25,30
	ctx.r11.u64 = ctx.r25.u32 & 0x3;
	// clrlwi r10,r24,30
	ctx.r10.u64 = ctx.r24.u32 & 0x3;
	// addi r6,r11,56
	ctx.r6.s64 = ctx.r11.s64 + 56;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83181E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r29
	// addi r9,r4,128
	ctx.r9.s64 = ctx.r4.s64 + 128;
	// dcbt r9,r29
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r29
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r3,r29
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// rotlwi r8,r4,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83181EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x831845dc
	// ERROR 831845DC
	return;
}

__attribute__((alias("__imp__sub_83181EFC"))) PPC_WEAK_FUNC(sub_83181EFC);
PPC_FUNC_IMPL(__imp__sub_83181EFC) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r9,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r15.s32 >> 2;
	// lwz r10,1060(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// srawi r8,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r14.s32 >> 2;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lhz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// srawi r3,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 2;
	// mullw r7,r7,r9
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r9,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 2;
	// bne cr6,0x83181f44
	if (!ctx.cr6.eq) goto loc_83181F44;
	// lwz r6,552(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r5,556(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r4,536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// b 0x83181f50
	goto loc_83181F50;
loc_83181F44:
	// lwz r6,528(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lwz r5,532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r4,512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
loc_83181F50:
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lhz r28,90(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// add r6,r5,r9
	ctx.r6.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r9,r3,r30
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r29,r6,r9
	ctx.r29.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// add r27,r8,r10
	ctx.r27.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// lwz r7,580(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// li r6,128
	ctx.r6.s64 = 128;
	// add r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r22,r7,r11
	ctx.r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// dcbt r6,r27
	// addi r5,r28,128
	ctx.r5.s64 = ctx.r28.s64 + 128;
	// dcbt r5,r27
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r3,r27
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r27
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r9,r27
	// rotlwi r11,r28,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r27
	// rotlwi r11,r28,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 1);
	// add r7,r28,r11
	ctx.r7.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r27
	// rotlwi r5,r28,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r28.u32, 3);
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r27
	// lbz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x83181dac
	if (!ctx.cr6.eq) {
		sub_83181DAC(ctx, base);
		return;
	}
	// addi r11,r21,52
	ctx.r11.s64 = ctx.r21.s64 + 52;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x83182038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83181dc8
	if (ctx.cr6.eq) {
		// ERROR 83181DC8
		return;
	}
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d081a8
	ctx.lr = 0x83182060;
	sub_82D081A8(ctx, base);
	// b 0x83181dc8
	// ERROR 83181DC8
	return;
}

__attribute__((alias("__imp__sub_83182064"))) PPC_WEAK_FUNC(sub_83182064);
PPC_FUNC_IMPL(__imp__sub_83182064) {
	PPC_FUNC_PROLOGUE();
	// lhz r30,74(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r11,r15,2
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r15.s32 >> 2;
	// lwz r18,1060(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// srawi r9,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r14.s32 >> 2;
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lhz r29,76(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r4,8(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// srawi r3,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r24.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r11,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 2;
	// bne cr6,0x831820ac
	if (!ctx.cr6.eq) {
		sub_831820AC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318209C"))) PPC_WEAK_FUNC(sub_8318209C);
PPC_FUNC_IMPL(__imp__sub_8318209C) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,504(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// lwz r6,508(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// lwz r5,488(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// b 0x831820b8
	// ERROR 831820B8
	return;
}

__attribute__((alias("__imp__sub_831820AC"))) PPC_WEAK_FUNC(sub_831820AC);
PPC_FUNC_IMPL(__imp__sub_831820AC) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,480(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r6,484(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r5,464(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r27,616(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r26,r9,r4
	ctx.r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r26
	// addi r10,r30,128
	ctx.r10.s64 = ctx.r30.s64 + 128;
	// dcbt r10,r26
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r26
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r26
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r26
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r26
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r26
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r26
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bne cr6,0x831821cc
	if (!ctx.cr6.eq) {
		sub_831821CC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83182170"))) PPC_WEAK_FUNC(sub_83182170);
PPC_FUNC_IMPL(__imp__sub_83182170) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x83182290
	if (ctx.cr6.eq) {
		// ERROR 83182290
		return;
	}
}

__attribute__((alias("__imp__sub_831821A0"))) PPC_WEAK_FUNC(sub_831821A0);
PPC_FUNC_IMPL(__imp__sub_831821A0) {
	PPC_FUNC_PROLOGUE();
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d07f40
	ctx.lr = 0x831821C8;
	sub_82D07F40(ctx, base);
	// b 0x83182290
	// ERROR 83182290
	return;
}

__attribute__((alias("__imp__sub_831821CC"))) PPC_WEAK_FUNC(sub_831821CC);
PPC_FUNC_IMPL(__imp__sub_831821CC) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831821F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r27,128
	ctx.r5.s64 = ctx.r27.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318225C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r27,136
	ctx.r5.s64 = ctx.r27.s64 + 136;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r26,8
	ctx.r3.s64 = ctx.r26.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318228C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r23,128(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r4,128
	ctx.r10.s64 = ctx.r4.s64 + 128;
	// dcbt r10,r29
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// clrlwi r30,r24,30
	ctx.r30.u64 = ctx.r24.u32 & 0x3;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// rlwinm r11,r25,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// clrlwi r26,r25,30
	ctx.r26.u64 = ctx.r25.u32 & 0x3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,257
	ctx.r7.s64 = ctx.r11.s64 + 257;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r27,256
	ctx.r5.s64 = ctx.r27.s64 + 256;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r28
	// addi r9,r4,128
	ctx.r9.s64 = ctx.r4.s64 + 128;
	// dcbt r9,r28
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r28
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r28
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r3,r28
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r28
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r28
	// rotlwi r8,r4,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r28
	// rlwinm r11,r25,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r11,257
	ctx.r6.s64 = ctx.r11.s64 + 257;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r27,320
	ctx.r5.s64 = ctx.r27.s64 + 320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831823F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r8,608(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// lwz r9,600(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x83182434
	if (ctx.cr6.eq) {
		sub_83182434(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318240C"))) PPC_WEAK_FUNC(sub_8318240C);
PPC_FUNC_IMPL(__imp__sub_8318240C) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,468(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// slw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r4,r6,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwimi r5,r29,3,31,28
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r29.u32, 3) & 0xFFFFFFFFFFFFFFF9) | (ctx.r5.u64 & 0x6);
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// b 0x8318244c
	// ERROR 8318244C
	return;
}

__attribute__((alias("__imp__sub_83182434"))) PPC_WEAK_FUNC(sub_83182434);
PPC_FUNC_IMPL(__imp__sub_83182434) {
	PPC_FUNC_PROLOGUE();
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// clrlwi r7,r9,30
	ctx.r7.u64 = ctx.r9.u32 & 0x3;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subf r7,r19,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r19.s64;
	// add r6,r10,r19
	ctx.r6.u64 = ctx.r10.u64 + ctx.r19.u64;
	// addis r5,r6,128
	ctx.r5.s64 = ctx.r6.s64 + 8388608;
	// addi r5,r5,56
	ctx.r5.s64 = ctx.r5.s64 + 56;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r3,r3,0,16,0
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83182570
	if (ctx.cr6.eq) {
		// ERROR 83182570
		return;
	}
}

__attribute__((alias("__imp__sub_83182484"))) PPC_WEAK_FUNC(sub_83182484);
PPC_FUNC_IMPL(__imp__sub_83182484) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r23,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// rlwinm r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// bne cr6,0x831824c8
	if (!ctx.cr6.eq) {
		sub_831824C8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831824AC"))) PPC_WEAK_FUNC(sub_831824AC);
PPC_FUNC_IMPL(__imp__sub_831824AC) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x831824e4
	if (ctx.cr6.eq) {
		sub_831824E4(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831824BC"))) PPC_WEAK_FUNC(sub_831824BC);
PPC_FUNC_IMPL(__imp__sub_831824BC) {
	PPC_FUNC_PROLOGUE();
	// li r7,-35
	ctx.r7.s64 = -35;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// b 0x831824ec
	// ERROR 831824EC
	return;
}

__attribute__((alias("__imp__sub_831824C8"))) PPC_WEAK_FUNC(sub_831824C8);
PPC_FUNC_IMPL(__imp__sub_831824C8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x831824e4
	if (ctx.cr6.eq) {
		sub_831824E4(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831824D8"))) PPC_WEAK_FUNC(sub_831824D8);
PPC_FUNC_IMPL(__imp__sub_831824D8) {
	PPC_FUNC_PROLOGUE();
	// li r7,-37
	ctx.r7.s64 = -37;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// b 0x831824ec
	// ERROR 831824EC
	return;
}

__attribute__((alias("__imp__sub_831824E4"))) PPC_WEAK_FUNC(sub_831824E4);
PPC_FUNC_IMPL(__imp__sub_831824E4) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// li r7,-36
	ctx.r7.s64 = -36;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,-17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -17, ctx.xer);
	// bge cr6,0x8318250c
	if (!ctx.cr6.lt) {
		sub_8318250C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83182504"))) PPC_WEAK_FUNC(sub_83182504);
PPC_FUNC_IMPL(__imp__sub_83182504) {
	PPC_FUNC_PROLOGUE();
	// li r10,-17
	ctx.r10.s64 = -17;
	// b 0x83182520
	// ERROR 83182520
	return;
}

__attribute__((alias("__imp__sub_8318250C"))) PPC_WEAK_FUNC(sub_8318250C);
PPC_FUNC_IMPL(__imp__sub_8318250C) {
	PPC_FUNC_PROLOGUE();
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x83182524
	if (!ctx.cr6.gt) {
		// ERROR 83182524
		return;
	}
}

__attribute__((alias("__imp__sub_8318251C"))) PPC_WEAK_FUNC(sub_8318251C);
PPC_FUNC_IMPL(__imp__sub_8318251C) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x83182534
	if (!ctx.cr6.lt) {
		sub_83182534(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318252C"))) PPC_WEAK_FUNC(sub_8318252C);
PPC_FUNC_IMPL(__imp__sub_8318252C) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x8318254c
	sub_8318254C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182534"))) PPC_WEAK_FUNC(sub_83182534);
PPC_FUNC_IMPL(__imp__sub_83182534) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x83182544
	if (!ctx.cr6.gt) {
		sub_83182544(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318253C"))) PPC_WEAK_FUNC(sub_8318253C);
PPC_FUNC_IMPL(__imp__sub_8318253C) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x8318254c
	sub_8318254C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182544"))) PPC_WEAK_FUNC(sub_83182544);
PPC_FUNC_IMPL(__imp__sub_83182544) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8318256c
	if (ctx.cr6.eq) {
		// ERROR 8318256C
		return;
	}
}

__attribute__((alias("__imp__sub_8318254C"))) PPC_WEAK_FUNC(sub_8318254C);
PPC_FUNC_IMPL(__imp__sub_8318254C) {
	PPC_FUNC_PROLOGUE();
	// subf r8,r4,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r4,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 16;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// stw r4,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r4.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r3.u32);
	// clrlwi r20,r4,30
	ctx.r20.u64 = ctx.r4.u32 & 0x3;
	// beq cr6,0x831825b8
	if (ctx.cr6.eq) {
		sub_831825B8(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318258C"))) PPC_WEAK_FUNC(sub_8318258C);
PPC_FUNC_IMPL(__imp__sub_8318258C) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// or r5,r6,r20
	ctx.r5.u64 = ctx.r6.u64 | ctx.r20.u64;
	// subf r11,r9,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r9.s64;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// b 0x831825c4
	// ERROR 831825C4
	return;
}

__attribute__((alias("__imp__sub_831825B8"))) PPC_WEAK_FUNC(sub_831825B8);
PPC_FUNC_IMPL(__imp__sub_831825B8) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 | ctx.r20.u64;
	// clrlwi r21,r3,30
	ctx.r21.u64 = ctx.r3.u32 & 0x3;
	// lbz r9,31(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// addi r8,r21,1
	ctx.r8.s64 = ctx.r21.s64 + 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r6,r11,r3
	ctx.r6.u64 = ctx.r11.u64 + ctx.r3.u64;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// beq cr6,0x83182638
	if (ctx.cr6.eq) {
		// ERROR 83182638
		return;
	}
}

__attribute__((alias("__imp__sub_831825F8"))) PPC_WEAK_FUNC(sub_831825F8);
PPC_FUNC_IMPL(__imp__sub_831825F8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83182618
	if (ctx.cr6.eq) {
		// ERROR 83182618
		return;
	}
}

__attribute__((alias("__imp__sub_83182604"))) PPC_WEAK_FUNC(sub_83182604);
PPC_FUNC_IMPL(__imp__sub_83182604) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x83182614
	if (!ctx.cr6.gt) {
		sub_83182614(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318260C"))) PPC_WEAK_FUNC(sub_8318260C);
PPC_FUNC_IMPL(__imp__sub_8318260C) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x83182618
	// ERROR 83182618
	return;
}

__attribute__((alias("__imp__sub_83182614"))) PPC_WEAK_FUNC(sub_83182614);
PPC_FUNC_IMPL(__imp__sub_83182614) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x83182638
	if (ctx.cr6.eq) {
		// ERROR 83182638
		return;
	}
}

__attribute__((alias("__imp__sub_83182624"))) PPC_WEAK_FUNC(sub_83182624);
PPC_FUNC_IMPL(__imp__sub_83182624) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x83182634
	if (!ctx.cr6.gt) {
		sub_83182634(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318262C"))) PPC_WEAK_FUNC(sub_8318262C);
PPC_FUNC_IMPL(__imp__sub_8318262C) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x83182638
	// ERROR 83182638
	return;
}

__attribute__((alias("__imp__sub_83182634"))) PPC_WEAK_FUNC(sub_83182634);
PPC_FUNC_IMPL(__imp__sub_83182634) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x83182650
	if (ctx.cr6.eq) {
		// ERROR 83182650
		return;
	}
}

__attribute__((alias("__imp__sub_83182640"))) PPC_WEAK_FUNC(sub_83182640);
PPC_FUNC_IMPL(__imp__sub_83182640) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,1368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,316(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r7,r22,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r22.s64;
	// rlwimi r11,r8,15,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 15) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r11,1,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r6,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r6.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r10,r16
	ctx.r9.u64 = ctx.r10.u64 + ctx.r16.u64;
	// or r8,r9,r5
	ctx.r8.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83182720
	if (ctx.cr6.eq) {
		// ERROR 83182720
		return;
	}
}

__attribute__((alias("__imp__sub_8318268C"))) PPC_WEAK_FUNC(sub_8318268C);
PPC_FUNC_IMPL(__imp__sub_8318268C) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lhz r5,50(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// rlwinm r8,r23,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmpwi cr6,r10,-8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -8, ctx.xer);
	// bge cr6,0x831826dc
	if (!ctx.cr6.lt) {
		sub_831826DC(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831826CC"))) PPC_WEAK_FUNC(sub_831826CC);
PPC_FUNC_IMPL(__imp__sub_831826CC) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// b 0x831826f0
	// ERROR 831826F0
	return;
}

__attribute__((alias("__imp__sub_831826DC"))) PPC_WEAK_FUNC(sub_831826DC);
PPC_FUNC_IMPL(__imp__sub_831826DC) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x831826f0
	if (!ctx.cr6.gt) {
		// ERROR 831826F0
		return;
	}
}

__attribute__((alias("__imp__sub_831826E4"))) PPC_WEAK_FUNC(sub_831826E4);
PPC_FUNC_IMPL(__imp__sub_831826E4) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,-9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -9, ctx.xer);
	// bge cr6,0x83182708
	if (!ctx.cr6.lt) {
		sub_83182708(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_831826F8"))) PPC_WEAK_FUNC(sub_831826F8);
PPC_FUNC_IMPL(__imp__sub_831826F8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r8,9
	ctx.r10.s64 = ctx.r8.s64 + 9;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// b 0x8318271c
	// ERROR 8318271C
	return;
}

__attribute__((alias("__imp__sub_83182708"))) PPC_WEAK_FUNC(sub_83182708);
PPC_FUNC_IMPL(__imp__sub_83182708) {
	PPC_FUNC_PROLOGUE();
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8318271c
	if (!ctx.cr6.gt) {
		// ERROR 8318271C
		return;
	}
}

__attribute__((alias("__imp__sub_83182710"))) PPC_WEAK_FUNC(sub_83182710);
PPC_FUNC_IMPL(__imp__sub_83182710) {
	PPC_FUNC_PROLOGUE();
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r26,74(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// srawi r23,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r23.s64 = ctx.r11.s32 >> 16;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// lhz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// rlwinm r8,r26,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r4,8(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// srawi r3,r23,2
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r23.s32 >> 2;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r11,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 2;
	// bne cr6,0x8318276c
	if (!ctx.cr6.eq) {
		sub_8318276C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_8318275C"))) PPC_WEAK_FUNC(sub_8318275C);
PPC_FUNC_IMPL(__imp__sub_8318275C) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,552(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r6,556(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// b 0x83182778
	// ERROR 83182778
	return;
}

__attribute__((alias("__imp__sub_8318276C"))) PPC_WEAK_FUNC(sub_8318276C);
PPC_FUNC_IMPL(__imp__sub_8318276C) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,528(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lwz r6,532(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r5,512(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mullw r10,r3,r30
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// lwz r30,428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r29,r8,r10
	ctx.r29.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r24,r9,r4
	ctx.r24.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r24
	// addi r10,r26,128
	ctx.r10.s64 = ctx.r26.s64 + 128;
	// dcbt r10,r24
	// addi r9,r26,64
	ctx.r9.s64 = ctx.r26.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r24
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r24
	// addi r6,r26,32
	ctx.r6.s64 = ctx.r26.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r24
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// dcbt r4,r24
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r26,r11
	ctx.r3.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r24
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r26,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r26.s64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r24
	// lbz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// bne cr6,0x8318288c
	if (!ctx.cr6.eq) {
		sub_8318288C(ctx, base);
		return;
	}
}

__attribute__((alias("__imp__sub_83182830"))) PPC_WEAK_FUNC(sub_83182830);
PPC_FUNC_IMPL(__imp__sub_83182830) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,241
	ctx.r11.s64 = ctx.r11.s64 + 241;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8318294c
	if (ctx.cr6.eq) {
		// ERROR 8318294C
		return;
	}
}

__attribute__((alias("__imp__sub_83182860"))) PPC_WEAK_FUNC(sub_83182860);
PPC_FUNC_IMPL(__imp__sub_83182860) {
	PPC_FUNC_PROLOGUE();
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d07f40
	ctx.lr = 0x83182888;
	sub_82D07F40(ctx, base);
	// b 0x8318294c
	// ERROR 8318294C
	return;
}

__attribute__((alias("__imp__sub_8318288C"))) PPC_WEAK_FUNC(sub_8318288C);
PPC_FUNC_IMPL(__imp__sub_8318288C) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r11,257
	ctx.r11.s64 = ctx.r11.s64 + 257;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831828B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831828E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r30,128
	ctx.r5.s64 = ctx.r30.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318291C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// lwzx r11,r22,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 + 136;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,8
	ctx.r3.s64 = ctx.r24.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318294C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r29
	// addi r10,r4,128
	ctx.r10.s64 = ctx.r4.s64 + 128;
	// dcbt r10,r29
	// addi r9,r4,64
	ctx.r9.s64 = ctx.r4.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// dcbt r10,r29
	// rotlwi r9,r4,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// dcbt r8,r29
	// clrlwi r26,r23,30
	ctx.r26.u64 = ctx.r23.u32 & 0x3;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// rlwinm r11,r25,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// clrlwi r24,r25,30
	ctx.r24.u64 = ctx.r25.u32 & 0x3;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r11,257
	ctx.r7.s64 = ctx.r11.s64 + 257;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r30,256
	ctx.r5.s64 = ctx.r30.s64 + 256;
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r28
	// addi r9,r4,128
	ctx.r9.s64 = ctx.r4.s64 + 128;
	// dcbt r9,r28
	// addi r8,r4,64
	ctx.r8.s64 = ctx.r4.s64 + 64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r7,r28
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r28
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r3,r28
	// rotlwi r11,r4,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r28
	// rotlwi r11,r4,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r28
	// rotlwi r8,r4,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r28
	// rlwinm r11,r25,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xC;
	// lbz r9,35(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r6,r11,257
	ctx.r6.s64 = ctx.r11.s64 + 257;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r30,320
	ctx.r5.s64 = ctx.r30.s64 + 320;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83182AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,16
	ctx.r24.s64 = 16;
	// li r23,32
	ctx.r23.s64 = 32;
	// lhz r7,74(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// li r22,48
	ctx.r22.s64 = 48;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// li r21,64
	ctx.r21.s64 = 64;
	// li r20,80
	ctx.r20.s64 = 80;
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r19,96
	ctx.r19.s64 = 96;
	// lvx128 v12,r30,r24
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v10,r27,r24
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r5,r7,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lvx128 v9,r30,r23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r27,r23
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lvx128 v6,r30,r22
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v8,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvx128 v4,r27,r22
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lvx128 v3,r30,r21
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v5,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// lvx128 v1,r27,r21
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v2,v4,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v31,r30,r20
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,580(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lvx128 v29,r27,r20
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lvx128 v28,r30,r19
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v30,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v26,r27,r19
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r27,128
	ctx.r9.s64 = ctx.r27.s64 + 128;
	// add r28,r6,r5
	ctx.r28.u64 = ctx.r6.u64 + ctx.r5.u64;
	// vavgub v27,v29,v31
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// vavgub v24,v26,v28
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// addi r8,r30,128
	ctx.r8.s64 = ctx.r30.s64 + 128;
	// lwz r26,12(r18)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r18,112
	ctx.r18.s64 = 112;
	// lwz r25,576(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	// addi r17,r1,768
	ctx.r17.s64 = ctx.r1.s64 + 768;
	// lhz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 76);
	// addi r16,r1,736
	ctx.r16.s64 = ctx.r1.s64 + 736;
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lvx128 v25,r30,r18
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r30,r25,r26
	ctx.r30.u64 = ctx.r25.u64 + ctx.r26.u64;
	// lvx128 v23,r27,r18
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r4,r6
	ctx.r27.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stvx128 v11,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v22,v23,v25
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// stvx128 v8,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r26,r7,3
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r7.u32, 3);
	// stvx128 v5,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v2,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r6,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r29,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r28,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r27,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r8,r23
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r8,r24
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r9,r23
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r9,r24
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v11,v20,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v18.u8)));
	// vavgub v12,v17,v19
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v19.u8)));
	// lvx128 v21,r9,r21
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r8,r20
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r8,r22
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r9,r22
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r21
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r17
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r17.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r16
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r16.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// vavgub v8,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// lvx128 v7,r9,r20
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v0,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v15.u8)));
	// lvx128 v6,r8,r19
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r19
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v13,v21,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvx128 v4,r8,r18
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v10,v7,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v16.u8)));
	// lvx128 v3,r9,r18
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v9,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// stvx128 v8,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v8,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// stvx128 v12,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// stvx128 v11,r5,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// stvx128 v0,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,832
	ctx.r26.s64 = ctx.r1.s64 + 832;
	// stvx128 v13,r6,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,800
	ctx.r7.s64 = ctx.r1.s64 + 800;
	// stvx128 v10,r29,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,832
	ctx.r6.s64 = ctx.r1.s64 + 832;
	// stvx128 v9,r28,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// stvx128 v8,r27,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// stvx128 v0,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,848
	ctx.r27.s64 = ctx.r1.s64 + 848;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,752
	ctx.r29.s64 = ctx.r1.s64 + 752;
	// addi r26,r1,752
	ctx.r26.s64 = ctx.r1.s64 + 752;
	// addi r28,r1,784
	ctx.r28.s64 = ctx.r1.s64 + 784;
	// addi r7,r1,816
	ctx.r7.s64 = ctx.r1.s64 + 816;
	// addi r25,r1,816
	ctx.r25.s64 = ctx.r1.s64 + 816;
	// stvx128 v10,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,784
	ctx.r29.s64 = ctx.r1.s64 + 784;
	// stvx128 v9,r0,r28
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r21
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r8,r21
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v14,v21,v27
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v27.u8)));
	// lvx128 v28,r8,r24
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r8,r22
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r9,r22
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v25,r8,r20
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v1,r9,r24
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r9,r23
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r8,r23
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v18,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v29.u8)));
	// vavgub v22,v23,v2
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// stvx128 v18,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v16,v1,v28
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v28.u8)));
	// stvx128 v14,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v0,v26,v31
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v31.u8)));
	// lvx128 v24,r9,r20
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vavgub v13,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v25.u8)));
	// lvx128 v20,r8,r19
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,768(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// stvx128 v16,r0,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r9,r19
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v17,r8,r18
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r9,r18
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r27,772(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r6,800(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// lwz r26,776(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 776);
	// lwz r24,780(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// lwz r5,844(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 844);
	// lwz r9,736(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// lwz r8,740(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r7,744(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 744);
	// lwz r28,748(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r23,848(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// lwz r22,852(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// vavgub v12,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v20.u8)));
	// lwz r21,860(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// vavgub v11,v15,v17
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_avg_epu8(simde_mm_load_si128((simde__m128i*)ctx.v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v17.u8)));
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// lwz r20,832(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// stvx128 v12,r0,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,856(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stvx128 v11,r0,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r21,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r25,804(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// lwz r23,752(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r30,836(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,840(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 840);
	// lwz r9,812(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r8,808(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// lwz r22,756(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,760(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 760);
	// lwz r28,764(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r21,784(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// lwz r19,788(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// lwz r4,792(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r27,796(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r18,816(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// lwz r17,820(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lwz r26,824(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// lwz r24,828(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r20.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stwx r8,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r22,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r22.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r19.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r18.u32);
	// stw r17,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r17.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// b 0x831845dc
	// ERROR 831845DC
	return;
}

__attribute__((alias("__imp__sub_83182E34"))) PPC_WEAK_FUNC(sub_83182E34);
PPC_FUNC_IMPL(__imp__sub_83182E34) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,444(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// li r11,0
	ctx.r11.s64 = 0;
	// lhz r9,50(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r9.u32);
	// rlwinm r11,r8,27,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x83182e78
	if (!ctx.cr6.eq) goto loc_83182E78;
	// lwz r14,1836(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,1840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	// lwz r9,1844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// lwz r8,1848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// b 0x83182e8c
	goto loc_83182E8C;
loc_83182E78:
	// lwz r14,1844(r31)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1844);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,1848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1848);
	// lwz r9,1836(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	// lwz r8,1840(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
loc_83182E8C:
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r15,r31,560
	ctx.r15.s64 = ctx.r31.s64 + 560;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r14,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r14.u32);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r16,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r16.u32);
	// stw r18,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r18.u32);
	// stw r17,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r17.u32);
	// stw r7,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r7.u32);
	// stw r6,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r6.u32);
	// stw r17,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r17.u32);
loc_83182EE4:
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// srawi r8,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r16.s32 >> 1;
	// lwz r9,1060(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// clrlwi r11,r16,31
	ctx.r11.u64 = ctx.r16.u32 & 0x1;
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r7,r5,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r26,r8,r7
	ctx.r26.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lhz r28,50(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// add r23,r10,r9
	ctx.r23.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r3,r26,31
	ctx.r3.u64 = ctx.r26.u32 & 0x1;
	// rlwinm r27,r23,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r23.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r21,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r28.s32 >> 1;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwzx r20,r6,r27
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// stw r20,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r20.u32);
	// bne cr6,0x83182f6c
	if (!ctx.cr6.eq) goto loc_83182F6C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x83182f60
	if (ctx.cr6.eq) goto loc_83182F60;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// lwz r10,1304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83182f6c
	if (ctx.cr6.eq) goto loc_83182F6C;
loc_83182F60:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x83182f74
	goto loc_83182F74;
loc_83182F6C:
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_83182F74:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r19,r20,16
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0xFFFF) != 0);
	ctx.r19.s64 = ctx.r20.s32 >> 16;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// stw r19,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r19.u32);
	// stw r7,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r7.u32);
	// bne cr6,0x83182fcc
	if (!ctx.cr6.eq) goto loc_83182FCC;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17768
	ctx.r9.s64 = ctx.r11.s64 + 17768;
	// addi r8,r10,18048
	ctx.r8.s64 = ctx.r10.s64 + 18048;
	// b 0x83182ffc
	goto loc_83182FFC;
loc_83182FCC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83182fec
	if (!ctx.cr6.eq) goto loc_83182FEC;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17080
	ctx.r9.s64 = ctx.r11.s64 + 17080;
	// addi r8,r10,17488
	ctx.r8.s64 = ctx.r10.s64 + 17488;
	// b 0x83182ffc
	goto loc_83182FFC;
loc_83182FEC:
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17208
	ctx.r9.s64 = ctx.r11.s64 + 17208;
	// addi r8,r10,17144
	ctx.r8.s64 = ctx.r10.s64 + 17144;
loc_83182FFC:
	// stw r9,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r9.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r8,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r8.u32);
	// beq cr6,0x83183084
	if (ctx.cr6.eq) goto loc_83183084;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r14,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r14.u32 + ctx.r9.u32);
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// sth r8,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r8.u16);
	// sth r7,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r7.u16);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x83183084
	if (ctx.cr6.eq) goto loc_83183084;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183064
	if (ctx.cr6.eq) goto loc_83183064;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83183058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x83183080
	goto loc_83183080;
loc_83183064:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83183078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r3.u32);
	// li r25,1
	ctx.r25.s64 = 1;
loc_83183080:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83183084:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x831831f4
	if (!ctx.cr6.eq) goto loc_831831F4;
	// subf r29,r28,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r28.s64;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r14,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r14.u32 + ctx.r10.u32);
	// lhzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r9,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r9.u16);
	// sth r8,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r8.u16);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r7,16384
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16384, ctx.xer);
	// beq cr6,0x83183128
	if (ctx.cr6.eq) goto loc_83183128;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x831830f4
	if (ctx.cr6.eq) goto loc_831830F4;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x831830E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8318311c
	goto loc_8318311C;
loc_831830F4:
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lwz r10,1748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x83183110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r8,r1,400
	ctx.r8.s64 = ctx.r1.s64 + 400;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8318311C:
	// lwz r14,448(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r3,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
loc_83183128:
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// ble cr6,0x831831f4
	if (!ctx.cr6.gt) goto loc_831831F4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x83183170
	if (ctx.cr6.eq) goto loc_83183170;
	// xor r11,r26,r22
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r22.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83183158
	if (ctx.cr6.eq) goto loc_83183158;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x8318315c
	if (ctx.cr6.lt) goto loc_8318315C;
loc_83183158:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8318315C:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r11,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r11.s64;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x83183174
	goto loc_83183174;
loc_83183170:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
loc_83183174:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r14,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r14.u32 + ctx.r9.u32);
	// lhzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// sth r8,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r8.u16);
	// sth r7,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r7.u16);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// beq cr6,0x831831f4
	if (ctx.cr6.eq) goto loc_831831F4;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831831d0
	if (ctx.cr6.eq) goto loc_831831D0;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831831C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x831831f0
	goto loc_831831F0;
loc_831831D0:
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831831E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_831831F0:
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
loc_831831F4:
	// add r11,r24,r25
	ctx.r11.u64 = ctx.r24.u64 + ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x83183380
	if (!ctx.cr6.gt) goto loc_83183380;
	// lhz r11,378(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 378);
	// lhz r10,374(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 374);
	// lhz r9,370(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 370);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lhz r8,376(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 376);
	// extsh r28,r9
	ctx.r28.s64 = ctx.r9.s16;
	// lhz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 372);
	// lhz r6,368(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 368);
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// lhz r5,410(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 410);
	// extsh r23,r7
	ctx.r23.s64 = ctx.r7.s16;
	// extsh r22,r6
	ctx.r22.s64 = ctx.r6.s16;
	// lhz r4,406(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 406);
	// subf r10,r28,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lhz r11,402(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 402);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lhz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 404);
	// extsh r18,r5
	ctx.r18.s64 = ctx.r5.s16;
	// lhz r8,408(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 408);
	// subf r7,r28,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r28.s64;
	// lhz r21,400(r1)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r1.u32 + 400);
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// extsh r17,r4
	ctx.r17.s64 = ctx.r4.s16;
	// subf r20,r22,r23
	ctx.r20.s64 = ctx.r23.s64 - ctx.r22.s64;
	// subf r19,r26,r23
	ctx.r19.s64 = ctx.r23.s64 - ctx.r26.s64;
	// extsh r16,r11
	ctx.r16.s64 = ctx.r11.s16;
	// subf r4,r22,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r22.s64;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// extsh r14,r6
	ctx.r14.s64 = ctx.r6.s16;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r9,r19,r20
	ctx.r9.u64 = ctx.r19.u64 ^ ctx.r20.u64;
	// xor r5,r4,r20
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r20.u64;
	// extsh r15,r8
	ctx.r15.s64 = ctx.r8.s16;
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// subf r7,r16,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r16.s64;
	// subf r6,r18,r17
	ctx.r6.s64 = ctx.r17.s64 - ctx.r18.s64;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// subf r4,r16,r18
	ctx.r4.s64 = ctx.r18.s64 - ctx.r16.s64;
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r20,r21,r14
	ctx.r20.s64 = ctx.r14.s64 - ctx.r21.s64;
	// subf r19,r15,r14
	ctx.r19.s64 = ctx.r14.s64 - ctx.r15.s64;
	// subf r5,r21,r15
	ctx.r5.s64 = ctx.r15.s64 - ctx.r21.s64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// srawi r7,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// xor r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r20.u64;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// xor r20,r5,r20
	ctx.r20.u64 = ctx.r5.u64 ^ ctx.r20.u64;
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// srawi r5,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r19.s32 >> 31;
	// srawi r4,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 31;
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & ctx.r28.u64;
	// and r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 & ctx.r22.u64;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// or r22,r5,r4
	ctx.r22.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 & ctx.r23.u64;
	// and r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 & ctx.r21.u64;
	// andc r29,r15,r22
	ctx.r29.u64 = ctx.r15.u64 & ~ctx.r22.u64;
	// lwz r20,184(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// andc r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r20.u64;
	// andc r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 & ~ctx.r28.u64;
	// or r26,r7,r6
	ctx.r26.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// or r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 | ctx.r8.u64;
	// and r6,r6,r16
	ctx.r6.u64 = ctx.r6.u64 & ctx.r16.u64;
	// andc r30,r18,r26
	ctx.r30.u64 = ctx.r18.u64 & ~ctx.r26.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r8,r7,r17
	ctx.r8.u64 = ctx.r7.u64 & ctx.r17.u64;
	// and r6,r5,r14
	ctx.r6.u64 = ctx.r5.u64 & ctx.r14.u64;
	// or r7,r29,r4
	ctx.r7.u64 = ctx.r29.u64 | ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r19,708(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r18,516(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r17,632(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r20,704(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// lwz r23,612(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r16,480(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r14,448(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// sth r5,462(r1)
	PPC_STORE_U16(ctx.r1.u32 + 462, ctx.r5.u16);
	// sth r4,460(r1)
	PPC_STORE_U16(ctx.r1.u32 + 460, ctx.r4.u16);
	// sth r11,454(r1)
	PPC_STORE_U16(ctx.r1.u32 + 454, ctx.r11.u16);
	// sth r10,452(r1)
	PPC_STORE_U16(ctx.r1.u32 + 452, ctx.r10.u16);
	// b 0x831833b0
	goto loc_831833B0;
loc_83183380:
	// bne cr6,0x83183398
	if (!ctx.cr6.eq) goto loc_83183398;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r10,400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// stw r11,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// b 0x831833b0
	goto loc_831833B0;
loc_83183398:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r3,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r3.u32);
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r8.u32);
loc_831833B0:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831833c8
	if (ctx.cr6.eq) goto loc_831833C8;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x831833d4
	if (!ctx.cr6.gt) goto loc_831833D4;
	// b 0x831833d8
	goto loc_831833D8;
loc_831833C8:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831833d8
	if (ctx.cr6.eq) goto loc_831833D8;
loc_831833D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_831833D8:
	// clrlwi r11,r19,31
	ctx.r11.u64 = ctx.r19.u32 & 0x1;
	// xor r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bne cr6,0x831833f0
	if (!ctx.cr6.eq) goto loc_831833F0;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
loc_831833F0:
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lhz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// lhz r8,66(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// rlwinm r7,r23,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lhz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 124);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r8,r11,r20
	ctx.r8.u64 = ctx.r11.u64 + ctx.r20.u64;
	// and r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 & ctx.r4.u64;
	// subf r4,r3,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r3.s64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sthx r3,r14,r7
	PPC_STORE_U16(ctx.r14.u32 + ctx.r7.u32, ctx.r3.u16);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lhz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lhz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// add r3,r10,r19
	ctx.r3.u64 = ctx.r10.u64 + ctx.r19.u64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// subf r6,r10,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// lhz r3,2(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sthx r4,r5,r7
	PPC_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u16);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// sthx r4,r10,r27
	PPC_STORE_U16(ctx.r10.u32 + ctx.r27.u32, ctx.r4.u16);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lhzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r27.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x83183548
	if (ctx.cr6.eq) goto loc_83183548;
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,720(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// subf r5,r9,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r4,1368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwimi r10,r8,3,31,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFFFFFFFFFFFFFF9) | (ctx.r10.u64 & 0x6);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r29,r8,3,31,28
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFFFFFFFFFFFFFF9) | (ctx.r29.u64 & 0x6);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r8,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 1;
	// addi r5,r9,-4
	ctx.r5.s64 = ctx.r9.s64 + -4;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 3;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// rlwinm r3,r3,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// stwx r11,r17,r5
	PPC_STORE_U32(ctx.r17.u32 + ctx.r5.u32, ctx.r11.u32);
	// or r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stwx r7,r17,r6
	PPC_STORE_U32(ctx.r17.u32 + ctx.r6.u32, ctx.r7.u32);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// stw r17,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r17.u32);
	// bne cr6,0x83183540
	if (!ctx.cr6.eq) goto loc_83183540;
	// addi r29,r31,488
	ctx.r29.s64 = ctx.r31.s64 + 488;
	// b 0x8318359c
	goto loc_8318359C;
loc_83183540:
	// addi r29,r31,536
	ctx.r29.s64 = ctx.r31.s64 + 536;
	// b 0x8318359c
	goto loc_8318359C;
loc_83183548:
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// lwz r9,624(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r7,r10,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// clrlwi r5,r8,30
	ctx.r5.u64 = ctx.r8.u32 & 0x3;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// or r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 | ctx.r7.u64;
	// addi r8,r1,672
	ctx.r8.s64 = ctx.r1.s64 + 672;
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwimi r7,r10,0,30,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// addi r5,r9,4
	ctx.r5.s64 = ctx.r9.s64 + 4;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// stw r5,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r5.u32);
	// addi r29,r31,464
	ctx.r29.s64 = ctx.r31.s64 + 464;
	// beq cr6,0x8318359c
	if (ctx.cr6.eq) goto loc_8318359C;
	// addi r29,r31,512
	ctx.r29.s64 = ctx.r31.s64 + 512;
loc_8318359C:
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r10,604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r9,300(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// rlwinm r7,r11,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r5,128
	ctx.r4.s64 = ctx.r5.s64 + 8388608;
	// addi r4,r4,56
	ctx.r4.s64 = ctx.r4.s64 + 56;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rlwinm r10,r3,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,0,16,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x831836c8
	if (ctx.cr6.eq) goto loc_831836C8;
	// lwz r10,1368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r7,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r10,r6,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// bne cr6,0x83183620
	if (!ctx.cr6.eq) goto loc_83183620;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x8318363c
	if (ctx.cr6.eq) goto loc_8318363C;
	// li r7,-35
	ctx.r7.s64 = -35;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// b 0x83183644
	goto loc_83183644;
loc_83183620:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// beq cr6,0x8318363c
	if (ctx.cr6.eq) goto loc_8318363C;
	// li r7,-37
	ctx.r7.s64 = -37;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// b 0x83183644
	goto loc_83183644;
loc_8318363C:
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// li r7,-36
	ctx.r7.s64 = -36;
loc_83183644:
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,-17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -17, ctx.xer);
	// bge cr6,0x83183664
	if (!ctx.cr6.lt) goto loc_83183664;
	// li r10,-17
	ctx.r10.s64 = -17;
	// b 0x83183678
	goto loc_83183678;
loc_83183664:
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// rotlwi r8,r8,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8318367c
	if (!ctx.cr6.gt) goto loc_8318367C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83183678:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8318367C:
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8318368c
	if (!ctx.cr6.lt) goto loc_8318368C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// b 0x831836a4
	goto loc_831836A4;
loc_8318368C:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8318369c
	if (!ctx.cr6.gt) goto loc_8318369C;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// b 0x831836a4
	goto loc_831836A4;
loc_8318369C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x831836c4
	if (ctx.cr6.eq) goto loc_831836C4;
loc_831836A4:
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// clrlwi r9,r6,30
	ctx.r9.u64 = ctx.r6.u32 & 0x3;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_831836C4:
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_831836C8:
	// lhz r30,90(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// lwzx r8,r29,r18
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r18.u32);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// lwz r6,1060(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// rlwinm r5,r30,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,0(r15)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// li r3,128
	ctx.r3.s64 = 128;
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// dcbt r3,r29
	// addi r11,r30,128
	ctx.r11.s64 = ctx.r30.s64 + 128;
	// dcbt r11,r29
	// addi r9,r30,64
	ctx.r9.s64 = ctx.r30.s64 + 64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r8,r29
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r5,r29
	// rotlwi r11,r30,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 2);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// dcbt r3,r29
	// rotlwi r11,r30,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// dcbt r9,r29
	// rotlwi r8,r30,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 3);
	// subf r11,r30,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// dcbt r7,r29
	// lbz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// clrlwi r27,r4,30
	ctx.r27.u64 = ctx.r4.u32 & 0x3;
	// clrlwi r26,r10,30
	ctx.r26.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x831837e0
	if (!ctx.cr6.eq) goto loc_831837E0;
	// addi r11,r27,52
	ctx.r11.s64 = ctx.r27.s64 + 52;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x831837B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x831837fc
	if (ctx.cr6.eq) goto loc_831837FC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r8,35(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d081a8
	ctx.lr = 0x831837DC;
	sub_82D081A8(ctx, base);
	// b 0x831837fc
	goto loc_831837FC;
loc_831837E0:
	// addi r11,r27,56
	ctx.r11.s64 = ctx.r27.s64 + 56;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x831837FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_831837FC:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r18,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r18.u32);
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// stw r16,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r16.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// cmpwi cr6,r18,16
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 16, ctx.xer);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// blt cr6,0x83182ee4
	if (ctx.cr6.lt) goto loc_83182EE4;
	// lwz r17,1060(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lhz r26,50(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r18,116(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r24,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r26.s32 >> 1;
	// lwz r23,0(r17)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r25,r18,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x83183880
	if (!ctx.cr6.eq) goto loc_83183880;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183874
	if (ctx.cr6.eq) goto loc_83183874;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r10,1304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x83183880
	if (ctx.cr6.eq) goto loc_83183880;
loc_83183874:
	// li r29,1
	ctx.r29.s64 = 1;
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x83183888
	goto loc_83183888;
loc_83183880:
	// li r16,0
	ctx.r16.s64 = 0;
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
loc_83183888:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// lis r20,1
	ctx.r20.s64 = 65536;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// rlwinm r9,r11,17,0,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// stw r16,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r16.u32);
	// stw r16,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r16.u32);
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// subf r8,r9,r20
	ctx.r8.s64 = ctx.r20.s64 - ctx.r9.s64;
	// stw r16,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r16.u32);
	// stw r16,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r16.u32);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// stw r16,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r16.u32);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r8,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r8.u32);
	// bne cr6,0x831838dc
	if (!ctx.cr6.eq) goto loc_831838DC;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17768
	ctx.r9.s64 = ctx.r11.s64 + 17768;
	// addi r8,r10,18048
	ctx.r8.s64 = ctx.r10.s64 + 18048;
	// b 0x8318390c
	goto loc_8318390C;
loc_831838DC:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x831838fc
	if (!ctx.cr6.eq) goto loc_831838FC;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17080
	ctx.r9.s64 = ctx.r11.s64 + 17080;
	// addi r8,r10,17488
	ctx.r8.s64 = ctx.r10.s64 + 17488;
	// b 0x8318390c
	goto loc_8318390C;
loc_831838FC:
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// addi r9,r11,17208
	ctx.r9.s64 = ctx.r11.s64 + 17208;
	// addi r8,r10,17144
	ctx.r8.s64 = ctx.r10.s64 + 17144;
loc_8318390C:
	// lwz r22,160(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r21,164(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,1744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1744, ctx.r9.u32);
	// stw r8,1748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1748, ctx.r8.u32);
	// beq cr6,0x83183998
	if (ctx.cr6.eq) goto loc_83183998;
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// sth r9,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r9.u16);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// beq cr6,0x83183998
	if (ctx.cr6.eq) goto loc_83183998;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183978
	if (ctx.cr6.eq) goto loc_83183978;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318396C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x83183994
	goto loc_83183994;
loc_83183978:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8318398C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r3.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_83183994:
	// li r30,1
	ctx.r30.s64 = 1;
loc_83183998:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x83183abc
	if (!ctx.cr6.eq) goto loc_83183ABC;
	// subf r29,r26,r23
	ctx.r29.s64 = ctx.r23.s64 - ctx.r26.s64;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// lhzx r9,r11,r22
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// sth r10,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r10.u16);
	// sth r9,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r9.u16);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// beq cr6,0x83183a24
	if (ctx.cr6.eq) goto loc_83183A24;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// rlwinm r15,r30,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x831839fc
	if (ctx.cr6.eq) goto loc_831839FC;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r15,r10
	PPC_STORE_U32(ctx.r15.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x831839F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x83183a1c
	goto loc_83183A1C;
loc_831839FC:
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r15,r10
	PPC_STORE_U32(ctx.r15.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83183A14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83183A1C:
	// stwx r3,r15,r9
	PPC_STORE_U32(ctx.r15.u32 + ctx.r9.u32, ctx.r3.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_83183A24:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// ble cr6,0x83183abc
	if (!ctx.cr6.gt) goto loc_83183ABC;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// bne cr6,0x83183a40
	if (!ctx.cr6.eq) goto loc_83183A40;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
loc_83183A40:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// lhzx r9,r11,r21
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// sth r9,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r9.u16);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// beq cr6,0x83183abc
	if (ctx.cr6.eq) goto loc_83183ABC;
	// rlwinm r11,r4,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183a98
	if (ctx.cr6.eq) goto loc_83183A98;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83183A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x83183ab8
	goto loc_83183AB8;
loc_83183A98:
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r4,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x83183AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_83183AB8:
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
loc_83183ABC:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x83183c40
	if (!ctx.cr6.gt) goto loc_83183C40;
	// lhz r11,442(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 442);
	// lhz r10,438(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 438);
	// lhz r9,434(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 434);
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// lhz r8,440(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 440);
	// extsh r26,r9
	ctx.r26.s64 = ctx.r9.s16;
	// lhz r7,436(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 436);
	// lhz r6,432(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 432);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
	// lhz r5,426(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 426);
	// extsh r24,r7
	ctx.r24.s64 = ctx.r7.s16;
	// extsh r22,r6
	ctx.r22.s64 = ctx.r6.s16;
	// lhz r4,422(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 422);
	// subf r10,r26,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r26.s64;
	// lhz r11,418(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 418);
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
	// lhz r6,420(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 420);
	// extsh r18,r5
	ctx.r18.s64 = ctx.r5.s16;
	// lhz r8,424(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 424);
	// subf r7,r26,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r26.s64;
	// lhz r21,416(r1)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r1.u32 + 416);
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// extsh r17,r4
	ctx.r17.s64 = ctx.r4.s16;
	// subf r20,r22,r24
	ctx.r20.s64 = ctx.r24.s64 - ctx.r22.s64;
	// subf r19,r25,r24
	ctx.r19.s64 = ctx.r24.s64 - ctx.r25.s64;
	// extsh r16,r11
	ctx.r16.s64 = ctx.r11.s16;
	// subf r4,r22,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r22.s64;
	// xor r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 ^ ctx.r10.u64;
	// extsh r14,r6
	ctx.r14.s64 = ctx.r6.s16;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r9,r19,r20
	ctx.r9.u64 = ctx.r19.u64 ^ ctx.r20.u64;
	// xor r5,r4,r20
	ctx.r5.u64 = ctx.r4.u64 ^ ctx.r20.u64;
	// extsh r15,r8
	ctx.r15.s64 = ctx.r8.s16;
	// extsh r21,r21
	ctx.r21.s64 = ctx.r21.s16;
	// subf r7,r16,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r16.s64;
	// subf r6,r18,r17
	ctx.r6.s64 = ctx.r17.s64 - ctx.r18.s64;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// srawi r9,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 31;
	// subf r4,r16,r18
	ctx.r4.s64 = ctx.r18.s64 - ctx.r16.s64;
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// xor r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r20,r21,r14
	ctx.r20.s64 = ctx.r14.s64 - ctx.r21.s64;
	// subf r19,r15,r14
	ctx.r19.s64 = ctx.r14.s64 - ctx.r15.s64;
	// subf r5,r21,r15
	ctx.r5.s64 = ctx.r15.s64 - ctx.r21.s64;
	// xor r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r7.u64;
	// srawi r7,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 31;
	// xor r19,r19,r20
	ctx.r19.u64 = ctx.r19.u64 ^ ctx.r20.u64;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// xor r20,r5,r20
	ctx.r20.u64 = ctx.r5.u64 ^ ctx.r20.u64;
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r6,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r6.u32);
	// srawi r6,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 31;
	// stw r5,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r5.u32);
	// srawi r5,r19,31
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r19.s32 >> 31;
	// srawi r4,r20,31
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 31;
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ctx.r26.u64;
	// and r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 & ctx.r24.u64;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// or r24,r5,r4
	ctx.r24.u64 = ctx.r5.u64 | ctx.r4.u64;
	// and r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 & ctx.r22.u64;
	// and r4,r4,r21
	ctx.r4.u64 = ctx.r4.u64 & ctx.r21.u64;
	// andc r29,r15,r24
	ctx.r29.u64 = ctx.r15.u64 & ~ctx.r24.u64;
	// lwz r20,604(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r26,612(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// andc r30,r30,r20
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r20.u64;
	// andc r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 & ~ctx.r26.u64;
	// or r25,r7,r6
	ctx.r25.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 | ctx.r10.u64;
	// or r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 | ctx.r9.u64;
	// and r6,r6,r16
	ctx.r6.u64 = ctx.r6.u64 & ctx.r16.u64;
	// andc r30,r18,r25
	ctx.r30.u64 = ctx.r18.u64 & ~ctx.r25.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 | ctx.r6.u64;
	// and r8,r7,r17
	ctx.r8.u64 = ctx.r7.u64 & ctx.r17.u64;
	// and r6,r5,r14
	ctx.r6.u64 = ctx.r5.u64 & ctx.r14.u64;
	// or r7,r29,r4
	ctx.r7.u64 = ctx.r29.u64 | ctx.r4.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 | ctx.r6.u64;
	// lwz r21,164(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r22,160(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r18,116(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r17,1060(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// sth r5,502(r1)
	PPC_STORE_U16(ctx.r1.u32 + 502, ctx.r5.u16);
	// sth r4,500(r1)
	PPC_STORE_U16(ctx.r1.u32 + 500, ctx.r4.u16);
	// sth r11,494(r1)
	PPC_STORE_U16(ctx.r1.u32 + 494, ctx.r11.u16);
	// sth r10,492(r1)
	PPC_STORE_U16(ctx.r1.u32 + 492, ctx.r10.u16);
	// b 0x83183c6c
	goto loc_83183C6C;
loc_83183C40:
	// bne cr6,0x83183c58
	if (!ctx.cr6.eq) goto loc_83183C58;
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lwz r10,416(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// b 0x83183c6c
	goto loc_83183C6C;
loc_83183C58:
	// lwz r11,1368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1368);
	// stw r16,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r16.u32);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// subf r9,r10,r20
	ctx.r9.s64 = ctx.r20.s64 - ctx.r10.s64;
	// stw r9,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r9.u32);
loc_83183C6C:
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// lwz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,620(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183c90
	if (ctx.cr6.eq) goto loc_83183C90;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x83183c9c
	if (!ctx.cr6.gt) goto loc_83183C9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x83183ca0
	if (!ctx.cr6.eq) goto loc_83183CA0;
loc_83183C90:
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x83183ca0
	if (ctx.cr6.eq) goto loc_83183CA0;
loc_83183C9C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83183CA0:
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x83183cb0
	if (!ctx.cr6.eq) goto loc_83183CB0;
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
loc_83183CB0:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,728(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 728);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// add r7,r22,r10
	ctx.r7.u64 = ctx.r22.u64 + ctx.r10.u64;
	// .long 0x0
}

__attribute__((alias("__imp__sub_83184800"))) PPC_WEAK_FUNC(sub_83184800);
PPC_FUNC_IMPL(__imp__sub_83184800) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_831848C0"))) PPC_WEAK_FUNC(sub_831848C0);
PPC_FUNC_IMPL(__imp__sub_831848C0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_831849A0"))) PPC_WEAK_FUNC(sub_831849A0);
PPC_FUNC_IMPL(__imp__sub_831849A0) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_83185700"))) PPC_WEAK_FUNC(sub_83185700);
PPC_FUNC_IMPL(__imp__sub_83185700) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_83185C00"))) PPC_WEAK_FUNC(sub_83185C00);
PPC_FUNC_IMPL(__imp__sub_83185C00) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

__attribute__((alias("__imp__sub_83186000"))) PPC_WEAK_FUNC(sub_83186000);
PPC_FUNC_IMPL(__imp__sub_83186000) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
	// .long 0x0
}

