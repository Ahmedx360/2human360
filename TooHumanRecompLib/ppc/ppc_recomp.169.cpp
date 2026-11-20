#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A49C20"))) PPC_WEAK_FUNC(sub_82A49C20);
PPC_FUNC_IMPL(__imp__sub_82A49C20) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a49c70
	if (ctx.cr0.eq) goto loc_82A49C70;
	// bl 0x8312e7ac
	ctx.lr = 0x82A49C4C;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a49c70
	if (ctx.cr6.eq) goto loc_82A49C70;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5140
	ctx.r6.s64 = 5140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A49C70;
	sub_8312E79C(ctx, base);
loc_82A49C70:
	// lbz r11,-11(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a49c84
	if (!ctx.cr0.eq) goto loc_82A49C84;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a49cb0
	goto loc_82A49CB0;
loc_82A49C84:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a49ca0
	if (ctx.cr0.eq) goto loc_82A49CA0;
	// lhz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x82a49cb0
	goto loc_82A49CB0;
loc_82A49CA0:
	// lhz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -10);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82A49CB0:
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

__attribute__((alias("__imp__sub_82A49CC8"))) PPC_WEAK_FUNC(sub_82A49CC8);
PPC_FUNC_IMPL(__imp__sub_82A49CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82A49CD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r10,r29,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r29.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r31,87
	ctx.r11.s64 = ctx.r31.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x82a49d14
	if (!ctx.cr6.eq) goto loc_82A49D14;
	// lhz r22,0(r28)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// b 0x82a49d18
	goto loc_82A49D18;
loc_82A49D14:
	// li r22,0
	ctx.r22.s64 = 0;
loc_82A49D18:
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x82a49d80
	if (ctx.cr6.lt) goto loc_82A49D80;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82a49d40
	if (ctx.cr6.lt) goto loc_82A49D40;
loc_82A49D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a49e28
	goto loc_82A49E28;
loc_82A49D40:
	// subf r11,r8,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r8.s64;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8312e77c
	ctx.lr = 0x82A49D68;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a49d38
	if (ctx.cr0.lt) goto loc_82A49D38;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_82A49D80:
	// subf r11,r8,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x82a49de8
	if (ctx.cr0.eq) goto loc_82A49DE8;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a48d80
	ctx.lr = 0x82A49DE4;
	sub_82A48D80(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_82A49DE8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r30.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x82a49558
	ctx.lr = 0x82A49E24;
	sub_82A49558(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A49E28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A49E30"))) PPC_WEAK_FUNC(sub_82A49E30);
PPC_FUNC_IMPL(__imp__sub_82A49E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82A49E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// li r27,64
	ctx.r27.s64 = 64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82A49E64:
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82a49ee8
	if (ctx.cr6.eq) goto loc_82A49EE8;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a49ef8
	if (ctx.cr6.gt) goto loc_82A49EF8;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a49ef8
	if (ctx.cr6.gt) goto loc_82A49EF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a48ea0
	ctx.lr = 0x82A49EA8;
	sub_82A48EA0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a49ef8
	if (ctx.cr0.eq) goto loc_82A49EF8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82a49130
	ctx.lr = 0x82A49ECC;
	sub_82A49130(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A49EE0;
	sub_82A49558(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a4a064
	goto loc_82A4A064;
loc_82A49EE8:
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82a49ef8
	if (!ctx.cr6.eq) goto loc_82A49EF8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82A49EF8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// blt cr6,0x82a49e64
	if (ctx.cr6.lt) goto loc_82A49E64;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x82a4a060
	if (ctx.cr6.eq) goto loc_82A4A060;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4a060
	if (ctx.cr0.eq) goto loc_82A4A060;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82a49f44
	if (ctx.cr6.gt) goto loc_82A49F44;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82A49F44:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A49F60;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a49fb4
	if (!ctx.cr0.lt) goto loc_82A49FB4;
loc_82A49F68:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a49fac
	if (ctx.cr6.eq) goto loc_82A49FAC;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a49f88
	if (!ctx.cr6.lt) goto loc_82A49F88;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82A49F88:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A49FA4;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a49f68
	if (ctx.cr0.lt) goto loc_82A49F68;
loc_82A49FAC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a4a060
	if (ctx.cr6.lt) goto loc_82A4A060;
loc_82A49FB4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x82a49fd8
	if (ctx.cr6.gt) goto loc_82A49FD8;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_82A49FD8:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A49FF4;
	sub_8312E77C(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a4a048
	if (ctx.cr0.lt) goto loc_82A4A048;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82a49cc8
	ctx.lr = 0x82A4A024;
	sub_82A49CC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4a034
	if (!ctx.cr0.eq) goto loc_82A4A034;
	// lis r30,-16384
	ctx.r30.s64 = -1073741824;
	// ori r30,r30,23
	ctx.r30.u64 = ctx.r30.u64 | 23;
loc_82A4A034:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a4a048
	if (ctx.cr6.lt) goto loc_82A4A048;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82a4a064
	goto loc_82A4A064;
loc_82A4A048:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4A060;
	sub_8312E7BC(ctx, base);
loc_82A4A060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4A064:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A070"))) PPC_WEAK_FUNC(sub_82A4A070);
PPC_FUNC_IMPL(__imp__sub_82A4A070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82A4A078;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,1412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a3b8
	if (!ctx.cr6.eq) goto loc_82A4A3B8;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r31.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 1, ctx.xer);
	// bne cr6,0x82a4a0e4
	if (!ctx.cr6.eq) goto loc_82A4A0E4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	ctx.r26.s64 = 4097;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82a4a100
	goto loc_82A4A100;
loc_82A4A0E4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4a100
	if (ctx.cr0.eq) goto loc_82A4A100;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a4a100
	if (!ctx.cr6.eq) goto loc_82A4A100;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	ctx.r23.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82A4A100:
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	ctx.r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82a4a134
	if (!ctx.cr6.eq) goto loc_82A4A134;
	// li r27,4097
	ctx.r27.s64 = 4097;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// b 0x82a4a14c
	goto loc_82A4A14C;
loc_82A4A134:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a4a14c
	if (!ctx.cr6.eq) goto loc_82A4A14C;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a4a14c
	if (!ctx.cr0.eq) goto loc_82A4A14C;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
loc_82A4A14C:
	// rlwinm r22,r27,4,12,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r21,r27,16
	ctx.r21.u64 = ctx.r27.u32 & 0xFFFF;
	// subf r29,r22,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r22.s64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bgt cr6,0x82a4a168
	if (ctx.cr6.gt) goto loc_82A4A168;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82A4A168:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a3b8
	if (ctx.cr6.eq) goto loc_82A4A3B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a48bc0
	ctx.lr = 0x82A4A17C;
	sub_82A48BC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a4a3b8
	if (ctx.cr0.eq) goto loc_82A4A3B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4A198;
	sub_8312E7BC(ctx, base);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r30,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r19.u32);
	// blt 0x82a4a3b8
	if (ctx.cr0.lt) goto loc_82A4A3B8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a48d80
	ctx.lr = 0x82A4A1CC;
	sub_82A48D80(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// clrlwi. r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
	// beq 0x82a4a2a0
	if (ctx.cr0.eq) goto loc_82A4A2A0;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r26.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x82a4a25c
	if (!ctx.cr6.lt) goto loc_82A4A25C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4a284
	if (!ctx.cr6.eq) goto loc_82A4A284;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82a4a284
	goto loc_82A4A284;
loc_82A4A25C:
	// lwz r10,384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r9,r28,384
	ctx.r9.s64 = ctx.r28.s64 + 384;
	// b 0x82a4a278
	goto loc_82A4A278;
loc_82A4A268:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82a4a280
	if (!ctx.cr6.gt) goto loc_82A4A280;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82A4A278:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a4a268
	if (!ctx.cr6.eq) goto loc_82A4A268;
loc_82A4A280:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A4A284:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82a4a2e4
	goto loc_82A4A2E4;
loc_82A4A2A0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a4a2bc
	if (ctx.cr6.eq) goto loc_82A4A2BC;
	// lbz r11,5(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(ctx.r23.u32 + 5, ctx.r11.u8);
	// stw r23,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r23.u32);
	// b 0x82a4a2e4
	goto loc_82A4A2E4;
loc_82A4A2BC:
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a4a2e4
	if (ctx.cr6.lt) goto loc_82A4A2E4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a4a2e4
	if (!ctx.cr6.lt) goto loc_82A4A2E4;
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
loc_82A4A2E4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a4a3a8
	if (ctx.cr6.eq) goto loc_82A4A3A8;
	// add r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 + ctx.r29.u64;
	// sth r19,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 4);
	// cmplwi cr6,r21,128
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 128, ctx.xer);
	// stb r19,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r19.u8);
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// sth r27,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r27.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r27.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4a35c
	if (!ctx.cr6.lt) goto loc_82A4A35C;
	// addi r11,r21,48
	ctx.r11.s64 = ctx.r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4a380
	if (!ctx.cr6.eq) goto loc_82A4A380;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82a4a380
	goto loc_82A4A380;
loc_82A4A35C:
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// b 0x82a4a378
	goto loc_82A4A378;
loc_82A4A368:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a4a380
	if (!ctx.cr6.gt) goto loc_82A4A380;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82A4A378:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4a368
	if (!ctx.cr6.eq) goto loc_82A4A368;
loc_82A4A380:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82a4a3c8
	goto loc_82A4A3C8;
loc_82A4A3A8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82a4a3c8
	if (ctx.cr6.eq) goto loc_82A4A3C8;
	// sth r19,2(r20)
	PPC_STORE_U16(ctx.r20.u32 + 2, ctx.r19.u16);
	// b 0x82a4a3c8
	goto loc_82A4A3C8;
loc_82A4A3B8:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4A3C8;
	sub_82A49558(ctx, base);
loc_82A4A3C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A3D0"))) PPC_WEAK_FUNC(sub_82A4A3D0);
PPC_FUNC_IMPL(__imp__sub_82A4A3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15256(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15256);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82A4A3E0;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A4A424:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a4a424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4A424;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a4a49c
	if (ctx.cr6.eq) {
		// ERROR 82A4A49C
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82a4a460
	if (!ctx.cr6.eq) goto loc_82A4A460;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82a4f820
	ctx.lr = 0x82A4A45C;
	sub_82A4F820(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
loc_82A4A460:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4a488
	// ERROR 82A4A488
	return;
}

__attribute__((alias("__imp__sub_82A4A3D8"))) PPC_WEAK_FUNC(sub_82A4A3D8);
PPC_FUNC_IMPL(__imp__sub_82A4A3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82A4A3E0;
	__savegprlr_21(ctx, base);
	// addi r31,r1,-272
	ctx.r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r24.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r29.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = ctx.r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r11,6
	ctx.r11.s64 = 6;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A4A424:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82a4a424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4A424;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a4a49c
	if (ctx.cr6.eq) goto loc_82A4A49C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82a4a460
	if (!ctx.cr6.eq) goto loc_82A4A460;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x82a4f820
	ctx.lr = 0x82A4A45C;
	sub_82A4F820(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
loc_82A4A460:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4a488
	goto loc_82A4A488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r24,292(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
loc_82A4A488:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82a4a498
	if (!ctx.cr6.lt) goto loc_82A4A498;
loc_82A4A490:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4a964
	goto loc_82A4A964;
loc_82A4A498:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
loc_82A4A49C:
	// lis r23,-31943
	ctx.r23.s64 = -2093416448;
	// lwz r11,-16484(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16484);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4a4b0
	if (ctx.cr0.eq) goto loc_82A4A4B0;
	// ori r24,r24,128
	ctx.r24.u64 = ctx.r24.u64 | 128;
loc_82A4A4B0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4c8
	if (!ctx.cr6.eq) goto loc_82A4A4C8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2080);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82A4A4C8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4e0
	if (!ctx.cr6.eq) goto loc_82A4A4E0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2076);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A4A4E0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4f8
	if (!ctx.cr6.eq) goto loc_82A4A4F8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2068);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82A4A4F8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a510
	if (!ctx.cr6.eq) goto loc_82A4A510;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2072);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82A4A510:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a528
	if (!ctx.cr6.eq) goto loc_82A4A528;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82A4A528:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a540
	if (ctx.cr6.eq) goto loc_82A4A540;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a4a548
	if (!ctx.cr6.gt) goto loc_82A4A548;
loc_82A4A540:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82A4A548:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x82a4a5a0
	if (!ctx.cr6.eq) goto loc_82A4A5A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bne cr6,0x82a4a570
	if (!ctx.cr6.eq) goto loc_82A4A570;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82a4a580
	goto loc_82A4A580;
loc_82A4A570:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82A4A578:
	// add r11,r5,r27
	ctx.r11.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_82A4A580:
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,1424
	ctx.r25.s64 = 1424;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82a4a5d8
	if (!ctx.cr0.eq) goto loc_82A4A5D8;
	// beq cr6,0x82a4a5cc
	if (ctx.cr6.eq) goto loc_82A4A5CC;
	// oris r24,r24,32768
	ctx.r24.u64 = ctx.r24.u64 | 2147483648;
	// b 0x82a4a5dc
	goto loc_82A4A5DC;
loc_82A4A5A0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bne cr6,0x82a4a578
	if (!ctx.cr6.eq) goto loc_82A4A578;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82a4a580
	goto loc_82A4A580;
loc_82A4A5CC:
	// li r25,1452
	ctx.r25.s64 = 1452;
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x82a4a5dc
	goto loc_82A4A5DC;
loc_82A4A5D8:
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
loc_82A4A5DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x82a4a6e4
	if (ctx.cr6.eq) goto loc_82A4A6E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a638
	if (ctx.cr6.eq) goto loc_82A4A638;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4a490
	if (ctx.cr6.gt) goto loc_82A4A490;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a4a490
	if (!ctx.cr0.eq) goto loc_82A4A490;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4A634;
	sub_82A4EFB0(ctx, base);
	// b 0x82a4a6d4
	goto loc_82A4A6D4;
loc_82A4A638:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312e7ec
	ctx.lr = 0x82A4A648;
	sub_8312E7EC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4a490
	if (ctx.cr0.lt) goto loc_82A4A490;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82a4a6cc
	if (!ctx.cr6.eq) goto loc_82A4A6CC;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4A680;
	sub_82A4EFB0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312e7ec
	ctx.lr = 0x82A4A6A0;
	sub_8312E7EC(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// blt 0x82a4a6d4
	if (ctx.cr0.lt) goto loc_82A4A6D4;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x82a4a6d4
	if (!ctx.cr6.eq) goto loc_82A4A6D4;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// b 0x82a4a6d4
	goto loc_82A4A6D4;
loc_82A4A6CC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82A4A6D4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82a4a730
	goto loc_82A4A730;
loc_82A4A6E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312e77c
	ctx.lr = 0x82A4A708;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4a490
	if (ctx.cr0.lt) goto loc_82A4A490;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a724
	if (!ctx.cr6.eq) goto loc_82A4A724;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82A4A724:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82A4A730:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82a4a790
	if (!ctx.cr6.eq) goto loc_82A4A790;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A4A758;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a4a784
	if (!ctx.cr0.lt) goto loc_82A4A784;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4A780;
	sub_8312E7BC(ctx, base);
	// b 0x82a4a490
	goto loc_82A4A490;
loc_82A4A784:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82A4A790:
	// addi r11,r10,1431
	ctx.r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = ctx.r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82A4A7A4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82a4a7a4
	if (!ctx.cr0.eq) goto loc_82A4A7A4;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,-16484(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16484);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4a7ec
	if (ctx.cr0.eq) goto loc_82A4A7EC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r11,1548
	ctx.r29.s64 = ctx.r11.s64 + 1548;
loc_82A4A7EC:
	// addi r11,r9,15
	ctx.r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(ctx.r11.u32 + 368, ctx.r27.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// bl 0x8312e7ac
	ctx.lr = 0x82A4A858;
	sub_8312E7AC(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_82A4A86C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82a4a86c
	if (!ctx.cr0.eq) goto loc_82A4A86C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x82a4a8a4
	if (!ctx.cr6.eq) goto loc_82A4A8A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// bl 0x8312e7dc
	ctx.lr = 0x82A4A8A4;
	sub_8312E7DC(ctx, base);
loc_82A4A8A4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x82a49cc8
	ctx.lr = 0x82A4A8D0;
	sub_82A49CC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4a490
	if (ctx.cr0.eq) goto loc_82A4A490;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r22,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r22.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A4A964:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A470"))) PPC_WEAK_FUNC(sub_82A4A470);
PPC_FUNC_IMPL(__imp__sub_82A4A470) {
	PPC_FUNC_PROLOGUE();
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r29,300(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// lwz r24,292(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82a4a498
	if (!ctx.cr6.lt) goto loc_82A4A498;
loc_82A4A490:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4a964
	goto loc_82A4A964;
loc_82A4A498:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lis r23,-31943
	ctx.r23.s64 = -2093416448;
	// lwz r11,-16484(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16484);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4a4b0
	if (ctx.cr0.eq) goto loc_82A4A4B0;
	// ori r24,r24,128
	ctx.r24.u64 = ctx.r24.u64 | 128;
loc_82A4A4B0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4c8
	if (!ctx.cr6.eq) goto loc_82A4A4C8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2080);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82A4A4C8:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4e0
	if (!ctx.cr6.eq) goto loc_82A4A4E0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2076);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A4A4E0:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a4f8
	if (!ctx.cr6.eq) goto loc_82A4A4F8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2068);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82A4A4F8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a510
	if (!ctx.cr6.eq) goto loc_82A4A510;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r11,-2072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2072);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82A4A510:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a528
	if (!ctx.cr6.eq) goto loc_82A4A528;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82A4A528:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a540
	if (ctx.cr6.eq) goto loc_82A4A540;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a4a548
	if (!ctx.cr6.gt) goto loc_82A4A548;
loc_82A4A540:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82A4A548:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	ctx.r30.s64 = 65536;
	// bne cr6,0x82a4a5a0
	if (!ctx.cr6.eq) goto loc_82A4A5A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
	// bne cr6,0x82a4a570
	if (!ctx.cr6.eq) goto loc_82A4A570;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82a4a580
	goto loc_82A4A580;
loc_82A4A570:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
loc_82A4A578:
	// add r11,r5,r27
	ctx.r11.u64 = ctx.r5.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_82A4A580:
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,1424
	ctx.r25.s64 = 1424;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne 0x82a4a5d8
	if (!ctx.cr0.eq) goto loc_82A4A5D8;
	// beq cr6,0x82a4a5cc
	if (ctx.cr6.eq) goto loc_82A4A5CC;
	// oris r24,r24,32768
	ctx.r24.u64 = ctx.r24.u64 | 2147483648;
	// b 0x82a4a5dc
	goto loc_82A4A5DC;
loc_82A4A5A0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r27
	ctx.r11.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// bne cr6,0x82a4a578
	if (!ctx.cr6.eq) goto loc_82A4A578;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82a4a580
	goto loc_82A4A580;
loc_82A4A5CC:
	// li r25,1452
	ctx.r25.s64 = 1452;
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x82a4a5dc
	goto loc_82A4A5DC;
loc_82A4A5D8:
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
loc_82A4A5DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// beq cr6,0x82a4a6e4
	if (ctx.cr6.eq) goto loc_82A4A6E4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a638
	if (ctx.cr6.eq) goto loc_82A4A638;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4a490
	if (ctx.cr6.gt) goto loc_82A4A490;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a4a490
	if (!ctx.cr0.eq) goto loc_82A4A490;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r29
	ctx.r28.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4A634;
	sub_82A4EFB0(ctx, base);
	// b 0x82a4a6d4
	goto loc_82A4A6D4;
loc_82A4A638:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8312e7ec
	ctx.lr = 0x82A4A648;
	sub_8312E7EC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4a490
	if (ctx.cr0.lt) goto loc_82A4A490;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a4a490
	if (ctx.cr6.eq) goto loc_82A4A490;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x82a4a6cc
	if (!ctx.cr6.eq) goto loc_82A4A6CC;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4A680;
	sub_82A4EFB0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8312e7ec
	ctx.lr = 0x82A4A6A0;
	sub_8312E7EC(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// blt 0x82a4a6d4
	if (ctx.cr0.lt) goto loc_82A4A6D4;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x82a4a6d4
	if (!ctx.cr6.eq) goto loc_82A4A6D4;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// b 0x82a4a6d4
	goto loc_82A4A6D4;
loc_82A4A6CC:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82A4A6D4:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82a4a730
	goto loc_82A4A730;
loc_82A4A6E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312e77c
	ctx.lr = 0x82A4A708;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4a490
	if (ctx.cr0.lt) goto loc_82A4A490;
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4a724
	if (!ctx.cr6.eq) goto loc_82A4A724;
	// stw r30,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82A4A724:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_82A4A730:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82a4a790
	if (!ctx.cr6.eq) goto loc_82A4A790;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = ctx.r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A4A758;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a4a784
	if (!ctx.cr0.lt) goto loc_82A4A784;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a4a490
	if (!ctx.cr6.eq) goto loc_82A4A490;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4A780;
	sub_8312E7BC(ctx, base);
	// b 0x82a4a490
	goto loc_82A4A490;
loc_82A4A784:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
loc_82A4A790:
	// addi r11,r10,1431
	ctx.r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = ctx.r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82A4A7A4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82a4a7a4
	if (!ctx.cr0.eq) goto loc_82A4A7A4;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r22.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r10,-16484(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -16484);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4a7ec
	if (ctx.cr0.eq) goto loc_82A4A7EC;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r11,1548
	ctx.r29.s64 = ctx.r11.s64 + 1548;
loc_82A4A7EC:
	// addi r11,r9,15
	ctx.r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = ctx.r24.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(ctx.r11.u32 + 368, ctx.r27.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r22.u32);
	// bl 0x8312e7ac
	ctx.lr = 0x82A4A858;
	sub_8312E7AC(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(ctx.r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_82A4A86C:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82a4a86c
	if (!ctx.cr0.eq) goto loc_82A4A86C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x82a4a8a4
	if (!ctx.cr6.eq) goto loc_82A4A8A4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// bl 0x8312e7dc
	ctx.lr = 0x82A4A8A4;
	sub_8312E7DC(ctx, base);
loc_82A4A8A4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = ctx.r30.u64 + ctx.r3.u64;
	// bl 0x82a49cc8
	ctx.lr = 0x82A4A8D0;
	sub_82A49CC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4a490
	if (ctx.cr0.eq) goto loc_82A4A490;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r22,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r22.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r10,1412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A4A964:
	// addi r1,r31,272
	ctx.r1.s64 = ctx.r31.s64 + 272;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A96C"))) PPC_WEAK_FUNC(sub_82A4A96C);
PPC_FUNC_IMPL(__imp__sub_82A4A96C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4A978"))) PPC_WEAK_FUNC(sub_82A4A978);
PPC_FUNC_IMPL(__imp__sub_82A4A978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15232(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15232);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82A4A988;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// beq 0x82a4a9e8
	if (ctx.cr0.eq) goto loc_82A4A9E8;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4A9C4;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4a9e8
	if (ctx.cr6.eq) goto loc_82A4A9E8;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4A9E8;
	sub_8312E79C(ctx, base);
loc_82A4A9E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82a4aa04
	if (!ctx.cr6.eq) goto loc_82A4AA04;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A4AA04:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4aa34
	if (!ctx.cr0.eq) goto loc_82A4AA34;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4AA28;
	sub_8312E74C(ctx, base);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4AA34:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// bge cr6,0x82a4ac3c
	if (!ctx.cr6.lt) goto loc_82A4AC3C;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4aaf8
	if (ctx.cr6.eq) goto loc_82A4AAF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r4,r6,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82a4aac8
	if (!ctx.cr6.eq) goto loc_82A4AAC8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82a4aac8
	if (!ctx.cr6.eq) goto loc_82A4AAC8;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82A4AAC8:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwimi r8,r27,0,28,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r8.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r24.u8);
	// b 0x82a4b0a0
	goto loc_82A4B0A0;
loc_82A4AAF8:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// blt cr6,0x82a4ab48
	if (ctx.cr6.lt) goto loc_82A4AB48;
	// beq cr6,0x82a4ab68
	if (ctx.cr6.eq) goto loc_82A4AB68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a4ab88
	if (ctx.cr6.lt) goto loc_82A4AB88;
	// beq cr6,0x82a4aba8
	if (ctx.cr6.eq) goto loc_82A4ABA8;
	// b 0x82a4ac48
	goto loc_82A4AC48;
loc_82A4AB48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab58
	if (ctx.cr6.eq) goto loc_82A4AB58;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82A4AB68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab78
	if (ctx.cr6.eq) goto loc_82A4AB78;
	// addi r10,r30,640
	ctx.r10.s64 = ctx.r30.s64 + 640;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB78:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82A4AB88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab98
	if (ctx.cr6.eq) goto loc_82A4AB98;
	// addi r10,r30,896
	ctx.r10.s64 = ctx.r30.s64 + 896;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82A4ABA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ac48
	if (ctx.cr6.eq) goto loc_82A4AC48;
	// addi r10,r30,1152
	ctx.r10.s64 = ctx.r30.s64 + 1152;
loc_82A4ABB4:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4acf0
	if (!ctx.cr6.eq) goto loc_82A4ACF0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4acf0
	if (!ctx.cr6.eq) goto loc_82A4ACF0;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82a4acf0
	goto loc_82A4ACF0;
loc_82A4AC3C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4b0dc
	if (ctx.cr6.gt) goto loc_82A4B0DC;
loc_82A4AC48:
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82a4aca4
	if (ctx.cr6.eq) goto loc_82A4ACA4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4aca4
	if (ctx.cr6.lt) goto loc_82A4ACA4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82A4AC78:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4aca4
	if (ctx.cr6.eq) goto loc_82A4ACA4;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82a4acb8
	if (!ctx.cr6.lt) goto loc_82A4ACB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4ac78
	goto loc_82A4AC78;
loc_82A4ACA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a49e30
	ctx.lr = 0x82A4ACAC;
	sub_82A49E30(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4b1a8
	if (ctx.cr0.eq) goto loc_82A4B1A8;
loc_82A4ACB8:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4acec
	if (!ctx.cr6.eq) goto loc_82A4ACEC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82A4ACEC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82A4ACF0:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r24.u8);
	// beq 0x82a4b08c
	if (ctx.cr0.eq) goto loc_82A4B08C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82a4ad5c
	if (!ctx.cr6.eq) goto loc_82A4AD5C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x82a4b08c
	goto loc_82A4B08C;
loc_82A4AD5C:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// beq 0x82a4ae1c
	if (ctx.cr0.eq) goto loc_82A4AE1C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82a4add8
	if (!ctx.cr6.lt) goto loc_82A4ADD8;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4ae88
	if (!ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a4ae84
	goto loc_82A4AE84;
loc_82A4ADD8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82A4ADF0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4ae88
	if (ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4ae88
	if (!ctx.cr6.gt) goto loc_82A4AE88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4adf0
	goto loc_82A4ADF0;
loc_82A4AE1C:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a4aeec
	if (ctx.cr0.eq) goto loc_82A4AEEC;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82a4aeac
	if (!ctx.cr6.lt) goto loc_82A4AEAC;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4ae88
	if (!ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82A4AE84:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82A4AE88:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x82a4b050
	goto loc_82A4B050;
loc_82A4AEAC:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82A4AEC0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4ae88
	if (ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a4ae88
	if (!ctx.cr6.gt) goto loc_82A4AE88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4aec0
	goto loc_82A4AEC0;
loc_82A4AEEC:
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r5,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82a4af58
	if (!ctx.cr6.eq) goto loc_82A4AF58;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4af58
	if (!ctx.cr6.eq) goto loc_82A4AF58;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82a4af58
	if (!ctx.cr6.lt) goto loc_82A4AF58;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82A4AF58:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4b058
	if (ctx.cr6.gt) goto loc_82A4B058;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4af98
	if (!ctx.cr0.eq) goto loc_82A4AF98;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82A4AF98:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82a4aff0
	if (!ctx.cr6.lt) goto loc_82A4AFF0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b030
	if (!ctx.cr6.eq) goto loc_82A4B030;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82a4b030
	goto loc_82A4B030;
loc_82A4AFF0:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A4B004:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b030
	if (ctx.cr6.eq) goto loc_82A4B030;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b030
	if (!ctx.cr6.gt) goto loc_82A4B030;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b004
	goto loc_82A4B004;
loc_82A4B030:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82A4B050:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82a4b064
	goto loc_82A4B064;
loc_82A4B058:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B064;
	sub_82A49558(ctx, base);
loc_82A4B064:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b08c
	if (ctx.cr0.eq) goto loc_82A4B08C;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82A4B08C:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b0a0
	if (ctx.cr0.eq) goto loc_82A4B0A0;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
loc_82A4B0A0:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x82a4b0c0
	if (ctx.cr6.eq) goto loc_82A4B0C0;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B0B8;
	sub_8312E73C(ctx, base);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
loc_82A4B0C0:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1dc
	if (ctx.cr0.eq) goto loc_82A4B1DC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B0D8;
	sub_82A4EFB0(ctx, base);
	// b 0x82a4b1dc
	goto loc_82A4B1DC;
loc_82A4B0DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1ac
	if (ctx.cr0.eq) goto loc_82A4B1AC;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82a4b104
	if (!ctx.cr0.eq) goto loc_82A4B104;
	// lis r11,128
	ctx.r11.s64 = 8388608;
loc_82A4B104:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A4B120;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4b1a8
	if (ctx.cr0.lt) goto loc_82A4B1A8;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B138;
	sub_82A4EFB0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x82a4b1dc
	goto loc_82A4B1DC;
loc_82A4B1A8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4B1AC:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1d8
	if (ctx.cr0.eq) goto loc_82A4B1D8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// bl 0x8312e7fc
	ctx.lr = 0x82A4B1D8;
	sub_8312E7FC(ctx, base);
loc_82A4B1D8:
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
loc_82A4B1DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82a4b21c
	ctx.lr = 0x82A4B1E8;
	sub_82A4B21C(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4A980"))) PPC_WEAK_FUNC(sub_82A4A980);
PPC_FUNC_IMPL(__imp__sub_82A4A980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82A4A988;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// beq 0x82a4a9e8
	if (ctx.cr0.eq) goto loc_82A4A9E8;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4A9C4;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4a9e8
	if (ctx.cr6.eq) goto loc_82A4A9E8;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1459
	ctx.r6.s64 = 1459;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4A9E8;
	sub_8312E79C(ctx, base);
loc_82A4A9E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	ctx.r23.u64 = ctx.r11.u64 | ctx.r29.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82a4aa04
	if (!ctx.cr6.eq) goto loc_82A4AA04;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A4AA04:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4aa34
	if (!ctx.cr0.eq) goto loc_82A4AA34;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4AA28;
	sub_8312E74C(ctx, base);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4AA34:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 128, ctx.xer);
	// bge cr6,0x82a4ac3c
	if (!ctx.cr6.lt) goto loc_82A4AC3C;
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4aaf8
	if (ctx.cr6.eq) goto loc_82A4AAF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r8,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r8.u8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r4,r6,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r7,r5,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82a4aac8
	if (!ctx.cr6.eq) goto loc_82A4AAC8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82a4aac8
	if (!ctx.cr6.eq) goto loc_82A4AAC8;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// xor r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82A4AAC8:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// rlwimi r8,r27,0,28,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r8.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r8,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r24.u8);
	// b 0x82a4b0a0
	goto loc_82A4B0A0;
loc_82A4AAF8:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// andc r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// blt cr6,0x82a4ab48
	if (ctx.cr6.lt) goto loc_82A4AB48;
	// beq cr6,0x82a4ab68
	if (ctx.cr6.eq) goto loc_82A4AB68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a4ab88
	if (ctx.cr6.lt) goto loc_82A4AB88;
	// beq cr6,0x82a4aba8
	if (ctx.cr6.eq) goto loc_82A4ABA8;
	// b 0x82a4ac48
	goto loc_82A4AC48;
loc_82A4AB48:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab58
	if (ctx.cr6.eq) goto loc_82A4AB58;
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82A4AB68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab78
	if (ctx.cr6.eq) goto loc_82A4AB78;
	// addi r10,r30,640
	ctx.r10.s64 = ctx.r30.s64 + 640;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB78:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82A4AB88:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ab98
	if (ctx.cr6.eq) goto loc_82A4AB98;
	// addi r10,r30,896
	ctx.r10.s64 = ctx.r30.s64 + 896;
	// b 0x82a4abb4
	goto loc_82A4ABB4;
loc_82A4AB98:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82A4ABA8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a4ac48
	if (ctx.cr6.eq) goto loc_82A4AC48;
	// addi r10,r30,1152
	ctx.r10.s64 = ctx.r30.s64 + 1152;
loc_82A4ABB4:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4acf0
	if (!ctx.cr6.eq) goto loc_82A4ACF0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4acf0
	if (!ctx.cr6.eq) goto loc_82A4ACF0;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82a4acf0
	goto loc_82A4ACF0;
loc_82A4AC3C:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4b0dc
	if (ctx.cr6.gt) goto loc_82A4B0DC;
loc_82A4AC48:
	// lwz r11,388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82a4aca4
	if (ctx.cr6.eq) goto loc_82A4ACA4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4aca4
	if (ctx.cr6.lt) goto loc_82A4ACA4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82A4AC78:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4aca4
	if (ctx.cr6.eq) goto loc_82A4ACA4;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82a4acb8
	if (!ctx.cr6.lt) goto loc_82A4ACB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4ac78
	goto loc_82A4AC78;
loc_82A4ACA4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a49e30
	ctx.lr = 0x82A4ACAC;
	sub_82A49E30(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4b1a8
	if (ctx.cr0.eq) goto loc_82A4B1A8;
loc_82A4ACB8:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldicr r6,r8,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldimi r9,r7,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4acec
	if (!ctx.cr6.eq) goto loc_82A4ACEC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82A4ACEC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82A4ACF0:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r9.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r26.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r24.u8);
	// beq 0x82a4b08c
	if (ctx.cr0.eq) goto loc_82A4B08C;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82a4ad5c
	if (!ctx.cr6.eq) goto loc_82A4AD5C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x82a4b08c
	goto loc_82A4B08C;
loc_82A4AD5C:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	ctx.r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// beq 0x82a4ae1c
	if (ctx.cr0.eq) goto loc_82A4AE1C;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x82a4add8
	if (!ctx.cr6.lt) goto loc_82A4ADD8;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4ae88
	if (!ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82a4ae84
	goto loc_82A4AE84;
loc_82A4ADD8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_82A4ADF0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4ae88
	if (ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4ae88
	if (!ctx.cr6.gt) goto loc_82A4AE88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4adf0
	goto loc_82A4ADF0;
loc_82A4AE1C:
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a4aeec
	if (ctx.cr0.eq) goto loc_82A4AEEC;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82a4aeac
	if (!ctx.cr6.lt) goto loc_82A4AEAC;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4ae88
	if (!ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82A4AE84:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82A4AE88:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// b 0x82a4b050
	goto loc_82A4B050;
loc_82A4AEAC:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82A4AEC0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4ae88
	if (ctx.cr6.eq) goto loc_82A4AE88;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r6,r11,-8
	ctx.r6.s64 = ctx.r11.s64 + -8;
	// stw r6,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r6.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a4ae88
	if (!ctx.cr6.gt) goto loc_82A4AE88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4aec0
	goto loc_82A4AEC0;
loc_82A4AEEC:
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// rldicr r6,r5,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82a4af58
	if (!ctx.cr6.eq) goto loc_82A4AF58;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4af58
	if (!ctx.cr6.eq) goto loc_82A4AF58;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x82a4af58
	if (!ctx.cr6.lt) goto loc_82A4AF58;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
loc_82A4AF58:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4b058
	if (ctx.cr6.gt) goto loc_82A4B058;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4af98
	if (!ctx.cr0.eq) goto loc_82A4AF98;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_82A4AF98:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// bge cr6,0x82a4aff0
	if (!ctx.cr6.lt) goto loc_82A4AFF0;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b030
	if (!ctx.cr6.eq) goto loc_82A4B030;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r9.u32);
	// b 0x82a4b030
	goto loc_82A4B030;
loc_82A4AFF0:
	// addi r10,r28,384
	ctx.r10.s64 = ctx.r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A4B004:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b030
	if (ctx.cr6.eq) goto loc_82A4B030;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b030
	if (!ctx.cr6.gt) goto loc_82A4B030;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b004
	goto loc_82A4B004;
loc_82A4B030:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82A4B050:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
	// b 0x82a4b064
	goto loc_82A4B064;
loc_82A4B058:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B064;
	sub_82A49558(ctx, base);
loc_82A4B064:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b08c
	if (ctx.cr0.eq) goto loc_82A4B08C;
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r30.u32);
loc_82A4B08C:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b0a0
	if (ctx.cr0.eq) goto loc_82A4B0A0;
	// lbz r11,5(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(ctx.r26.u32 + 5, ctx.r11.u8);
loc_82A4B0A0:
	// addi r30,r26,16
	ctx.r30.s64 = ctx.r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// beq cr6,0x82a4b0c0
	if (ctx.cr6.eq) goto loc_82A4B0C0;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B0B8;
	sub_8312E73C(ctx, base);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r22.u32);
loc_82A4B0C0:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1dc
	if (ctx.cr0.eq) goto loc_82A4B1DC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B0D8;
	sub_82A4EFB0(ctx, base);
	// b 0x82a4b1dc
	goto loc_82A4B1DC;
loc_82A4B0DC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1ac
	if (ctx.cr0.eq) goto loc_82A4B1AC;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82a4b104
	if (!ctx.cr0.eq) goto loc_82A4B104;
	// lis r11,128
	ctx.r11.s64 = 8388608;
loc_82A4B104:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8312e77c
	ctx.lr = 0x82A4B120;
	sub_8312E77C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4b1a8
	if (ctx.cr0.lt) goto loc_82A4B1A8;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B138;
	sub_82A4EFB0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// b 0x82a4b1dc
	goto loc_82A4B1DC;
loc_82A4B1A8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4B1AC:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b1d8
	if (ctx.cr0.eq) goto loc_82A4B1D8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r4.u32);
	// bl 0x8312e7fc
	ctx.lr = 0x82A4B1D8;
	sub_8312E7FC(ctx, base);
loc_82A4B1D8:
	// stw r24,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r24.u32);
loc_82A4B1DC:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82a4b21c
	ctx.lr = 0x82A4B1E8;
	sub_82A4B21C(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4B1F4"))) PPC_WEAK_FUNC(sub_82A4B1F4);
PPC_FUNC_IMPL(__imp__sub_82A4B1F4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x82a4b238
	goto loc_82A4B238;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A4B238:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a4b248
	if (ctx.cr6.eq) goto loc_82A4B248;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B248;
	sub_8312E73C(ctx, base);
loc_82A4B248:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4B21C"))) PPC_WEAK_FUNC(sub_82A4B21C);
PPC_FUNC_IMPL(__imp__sub_82A4B21C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a4b248
	if (ctx.cr6.eq) goto loc_82A4B248;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B248;
	sub_8312E73C(ctx, base);
loc_82A4B248:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4B268"))) PPC_WEAK_FUNC(sub_82A4B268);
PPC_FUNC_IMPL(__imp__sub_82A4B268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15208(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15208);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82A4B278;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// beq 0x82a4b2d8
	if (ctx.cr0.eq) goto loc_82A4B2D8;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4B2B4;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4b2d8
	if (ctx.cr6.eq) goto loc_82A4B2D8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4B2D8;
	sub_8312E79C(ctx, base);
loc_82A4B2D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a4b2e8
	if (!ctx.cr6.eq) goto loc_82A4B2E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a4b4e0
	goto loc_82A4B4E0;
loc_82A4B2E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b310
	if (!ctx.cr0.eq) goto loc_82A4B310;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4B308;
	sub_8312E74C(ctx, base);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82A4B310:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b478
	if (!ctx.cr0.eq) goto loc_82A4B478;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82a49130
	ctx.lr = 0x82A4B338;
	sub_82A49130(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x82a4b3c0
	if (!ctx.cr6.lt) goto loc_82A4B3C0;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b398
	if (!ctx.cr6.eq) goto loc_82A4B398;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82A4B398:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a4b464
	goto loc_82A4B464;
loc_82A4B3C0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a4b3ec
	if (ctx.cr6.lt) goto loc_82A4B3EC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a4b3ec
	if (ctx.cr6.lt) goto loc_82A4B3EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4a070
	ctx.lr = 0x82A4B3E8;
	sub_82A4A070(ctx, base);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B3EC:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4b46c
	if (ctx.cr6.gt) goto loc_82A4B46C;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82A4B40C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b440
	if (ctx.cr6.eq) goto loc_82A4B440;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82a4b440
	if (!ctx.cr6.gt) goto loc_82A4B440;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b40c
	goto loc_82A4B40C;
loc_82A4B440:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A4B464:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B46C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B474;
	sub_82A49558(ctx, base);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B478:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82a4b4a8
	if (ctx.cr6.eq) goto loc_82A4B4A8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B4A0;
	sub_8312E73C(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82A4B4A8:
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4B4C4;
	sub_8312E7BC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a4b4d0
	if (!ctx.cr0.lt) goto loc_82A4B4D0;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82A4B4D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4b510
	ctx.lr = 0x82A4B4DC;
	sub_82A4B510(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4B4E0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4B270"))) PPC_WEAK_FUNC(sub_82A4B270);
PPC_FUNC_IMPL(__imp__sub_82A4B270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82A4B278;
	__savegprlr_25(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
	// beq 0x82a4b2d8
	if (ctx.cr0.eq) goto loc_82A4B2D8;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4B2B4;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4b2d8
	if (ctx.cr6.eq) goto loc_82A4B2D8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4390
	ctx.r6.s64 = 4390;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4B2D8;
	sub_8312E79C(ctx, base);
loc_82A4B2D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a4b2e8
	if (!ctx.cr6.eq) goto loc_82A4B2E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a4b4e0
	goto loc_82A4B4E0;
loc_82A4B2E8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r29,r29,-16
	ctx.r29.s64 = ctx.r29.s64 + -16;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b310
	if (!ctx.cr0.eq) goto loc_82A4B310;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4B308;
	sub_8312E74C(ctx, base);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82A4B310:
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b478
	if (!ctx.cr0.eq) goto loc_82A4B478;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82a49130
	ctx.lr = 0x82A4B338;
	sub_82A49130(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// bge cr6,0x82a4b3c0
	if (!ctx.cr6.lt) goto loc_82A4B3C0;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b398
	if (!ctx.cr6.eq) goto loc_82A4B398;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u32);
loc_82A4B398:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82a4b464
	goto loc_82A4B464;
loc_82A4B3C0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a4b3ec
	if (ctx.cr6.lt) goto loc_82A4B3EC;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a4b3ec
	if (ctx.cr6.lt) goto loc_82A4B3EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4a070
	ctx.lr = 0x82A4B3E8;
	sub_82A4A070(ctx, base);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B3EC:
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4b46c
	if (ctx.cr6.gt) goto loc_82A4B46C;
	// lbz r11,5(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = ctx.r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
loc_82A4B40C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b440
	if (ctx.cr6.eq) goto loc_82A4B440;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82a4b440
	if (!ctx.cr6.gt) goto loc_82A4B440;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b40c
	goto loc_82A4B40C;
loc_82A4B440:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A4B464:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B46C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4B474;
	sub_82A49558(ctx, base);
	// b 0x82a4b4d0
	goto loc_82A4B4D0;
loc_82A4B478:
	// addi r11,r29,-32
	ctx.r11.s64 = ctx.r29.s64 + -32;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82a4b4a8
	if (ctx.cr6.eq) goto loc_82A4B4A8;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B4A0;
	sub_8312E73C(ctx, base);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r25.u32);
loc_82A4B4A8:
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4B4C4;
	sub_8312E7BC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a4b4d0
	if (!ctx.cr0.lt) goto loc_82A4B4D0;
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
loc_82A4B4D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4b510
	ctx.lr = 0x82A4B4DC;
	sub_82A4B510(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A4B4E0:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4B4E8"))) PPC_WEAK_FUNC(sub_82A4B4E8);
PPC_FUNC_IMPL(__imp__sub_82A4B4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r25,84(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82a4b52c
	goto loc_82A4B52C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A4B52C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a4b53c
	if (ctx.cr6.eq) goto loc_82A4B53C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B53C;
	sub_8312E73C(ctx, base);
loc_82A4B53C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4B510"))) PPC_WEAK_FUNC(sub_82A4B510);
PPC_FUNC_IMPL(__imp__sub_82A4B510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r25.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a4b53c
	if (ctx.cr6.eq) goto loc_82A4B53C;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4B53C;
	sub_8312E73C(ctx, base);
loc_82A4B53C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4B558"))) PPC_WEAK_FUNC(sub_82A4B558);
PPC_FUNC_IMPL(__imp__sub_82A4B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15184(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15184);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82A4B568;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// beq 0x82a4b5d0
	if (ctx.cr0.eq) goto loc_82A4B5D0;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4B5AC;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4b5d0
	if (ctx.cr6.eq) goto loc_82A4B5D0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4B5D0;
	sub_8312E79C(ctx, base);
loc_82A4B5D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a4b5e0
	if (!ctx.cr6.eq) goto loc_82A4B5E0;
loc_82A4B5D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4bda8
	// ERROR 82A4BDA8
	return;
loc_82A4B5E0:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4b5d8
	if (ctx.cr6.gt) goto loc_82A4B5D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82a4b60c
	if (!ctx.cr6.eq) goto loc_82A4B60C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A4B60C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x82a4b644
	if (!ctx.cr0.eq) goto loc_82A4B644;
	// lwz r11,380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4b644
	if (!ctx.cr6.eq) goto loc_82A4B644;
	// lbz r11,-11(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b64c
	if (ctx.cr0.eq) goto loc_82A4B64C;
loc_82A4B644:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82A4B64C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b670
	if (!ctx.cr0.eq) goto loc_82A4B670;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4B664;
	sub_8312E74C(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4B670:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd7c
	if (ctx.cr0.eq) {
		// ERROR 82A4BD7C
		return;
	}
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x82a4b6d8
	if (ctx.cr0.eq) goto loc_82A4B6D8;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x82a4b6e8
	goto loc_82A4B6E8;
loc_82A4B6D8:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82A4B6E8:
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82a4bb4c
	if (ctx.cr6.gt) goto loc_82A4BB4C;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a4b718
	if (!ctx.cr6.eq) goto loc_82A4B718;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82A4B718:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a4b734
	if (ctx.cr6.eq) goto loc_82A4B734;
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82a4b774
	goto loc_82A4B774;
loc_82A4B734:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b76c
	if (ctx.cr0.eq) goto loc_82A4B76C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x82a4b774
	goto loc_82A4B774;
loc_82A4B76C:
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_82A4B774:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a4b794
	if (!ctx.cr6.gt) goto loc_82A4B794;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b794
	if (ctx.cr0.eq) goto loc_82A4B794;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B794;
	sub_82A4EFB0(ctx, base);
loc_82A4B794:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a4bd48
	if (ctx.cr6.eq) {
		// ERROR 82A4BD48
		return;
	}
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b7f8
	if (ctx.cr0.eq) goto loc_82A4B7F8;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4B7DC;
	sub_8312E7BC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4bd48
	if (ctx.cr0.lt) {
		// ERROR 82A4BD48
		return;
	}
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82a4bd48
	// ERROR 82A4BD48
	return;
loc_82A4B7F8:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x82a4b8ac
	if (ctx.cr0.eq) goto loc_82A4B8AC;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4b874
	if (!ctx.cr6.lt) goto loc_82A4B874;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x82a4b8e8
	goto loc_82A4B8E8;
loc_82A4B874:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82A4B880:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b920
	if (ctx.cr6.eq) goto loc_82A4B920;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b920
	if (!ctx.cr6.gt) goto loc_82A4B920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b880
	goto loc_82A4B880;
loc_82A4B8AC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b97c
	if (ctx.cr0.eq) goto loc_82A4B97C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4b944
	if (!ctx.cr6.lt) goto loc_82A4B944;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_82A4B8E8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b920
	if (!ctx.cr6.eq) goto loc_82A4B920;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82A4B920:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82a4bb34
	goto loc_82A4BB34;
loc_82A4B944:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82A4B950:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b920
	if (ctx.cr6.eq) goto loc_82A4B920;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b920
	if (!ctx.cr6.gt) goto loc_82A4B920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b950
	goto loc_82A4B950;
loc_82A4B97C:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4b9e8
	if (!ctx.cr6.eq) goto loc_82A4B9E8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4b9e8
	if (!ctx.cr6.eq) goto loc_82A4B9E8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82a4b9e8
	if (!ctx.cr6.lt) goto loc_82A4B9E8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_82A4B9E8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4ba2c
	if (ctx.cr0.eq) goto loc_82A4BA2C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82a4ba1c
	if (ctx.cr0.eq) goto loc_82A4BA1C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82a4ba1c
	if (!ctx.cr6.gt) goto loc_82A4BA1C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82A4BA1C:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8312e7cc
	ctx.lr = 0x82A4BA2C;
	sub_8312E7CC(ctx, base);
loc_82A4BA2C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4bb3c
	if (ctx.cr6.gt) goto loc_82A4BB3C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4ba70
	if (!ctx.cr0.eq) goto loc_82A4BA70;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82a4ba84
	goto loc_82A4BA84;
loc_82A4BA70:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_82A4BA84:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4badc
	if (!ctx.cr6.lt) goto loc_82A4BADC;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4bb14
	if (!ctx.cr6.eq) goto loc_82A4BB14;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82a4bb14
	goto loc_82A4BB14;
loc_82A4BADC:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82A4BAE8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4bb14
	if (ctx.cr6.eq) goto loc_82A4BB14;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4bb14
	if (!ctx.cr6.gt) goto loc_82A4BB14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bae8
	goto loc_82A4BAE8;
loc_82A4BB14:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82A4BB34:
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82a4bd48
	// ERROR 82A4BD48
	return;
loc_82A4BB3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4BB48;
	sub_82A49558(ctx, base);
	// b 0x82a4bd48
	// ERROR 82A4BD48
	return;
loc_82A4BB4C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a4bb74
	if (!ctx.cr6.eq) goto loc_82A4BB74;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a49690
	ctx.lr = 0x82A4BB6C;
	sub_82A49690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4bd48
	if (!ctx.cr0.eq) {
		// ERROR 82A4BD48
		return;
	}
loc_82A4BB74:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bb84
	if (ctx.cr0.eq) goto loc_82A4BB84;
	// stw r19,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x82a4bd50
	// ERROR 82A4BD50
	return;
loc_82A4BB84:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bc4c
	if (ctx.cr0.eq) {
		sub_82A4BC4C(ctx, base);
		return;
	}
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x82a4bbc8
	if (ctx.cr0.eq) goto loc_82A4BBC8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bbd8
	goto loc_82A4BBD8;
loc_82A4BBC8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82A4BBD8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4bc04
	if (ctx.cr0.eq) goto loc_82A4BC04;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4bc04
	if (!ctx.cr0.eq) goto loc_82A4BC04;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4BC04:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bc64
	// ERROR 82A4BC64
	return;
}

__attribute__((alias("__imp__sub_82A4B560"))) PPC_WEAK_FUNC(sub_82A4B560);
PPC_FUNC_IMPL(__imp__sub_82A4B560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82A4B568;
	__savegprlr_19(ctx, base);
	// addi r31,r1,-320
	ctx.r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r27.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r19.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r21.u32);
	// beq 0x82a4b5d0
	if (ctx.cr0.eq) goto loc_82A4B5D0;
	// bl 0x8312e7ac
	ctx.lr = 0x82A4B5AC;
	sub_8312E7AC(ctx, base);
	// lbz r11,379(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82a4b5d0
	if (ctx.cr6.eq) goto loc_82A4B5D0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r6,3144
	ctx.r6.s64 = 3144;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8312e79c
	ctx.lr = 0x82A4B5D0;
	sub_8312E79C(ctx, base);
loc_82A4B5D0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a4b5e0
	if (!ctx.cr6.eq) goto loc_82A4B5E0;
loc_82A4B5D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4bda8
	goto loc_82A4BDA8;
loc_82A4B5E0:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// or r23,r10,r30
	ctx.r23.u64 = ctx.r10.u64 | ctx.r30.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4b5d8
	if (ctx.cr6.gt) goto loc_82A4B5D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x82a4b60c
	if (!ctx.cr6.eq) goto loc_82A4B60C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A4B60C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r24,r11,r8
	ctx.r24.u64 = ctx.r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// bne 0x82a4b644
	if (!ctx.cr0.eq) goto loc_82A4B644;
	// lwz r11,380(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4b644
	if (!ctx.cr6.eq) goto loc_82A4B644;
	// lbz r11,-11(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b64c
	if (ctx.cr0.eq) goto loc_82A4B64C;
loc_82A4B644:
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82A4B64C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4b670
	if (!ctx.cr0.eq) goto loc_82A4B670;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1408);
	// bl 0x8312e74c
	ctx.lr = 0x82A4B664;
	sub_8312E74C(ctx, base);
	// xori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4B670:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	ctx.r30.s64 = ctx.r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd7c
	if (ctx.cr0.eq) goto loc_82A4BD7C;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// beq 0x82a4b6d8
	if (ctx.cr0.eq) goto loc_82A4B6D8;
	// addi r9,r24,32
	ctx.r9.s64 = ctx.r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	ctx.r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
	// b 0x82a4b6e8
	goto loc_82A4B6E8;
loc_82A4B6D8:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r25,r10,r9
	ctx.r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82A4B6E8:
	// stw r25,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r25.u32);
	// rlwinm r28,r24,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82a4bb4c
	if (ctx.cr6.gt) goto loc_82A4BB4C;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a4b718
	if (!ctx.cr6.eq) goto loc_82A4B718;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r24.u32);
loc_82A4B718:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a4b734
	if (ctx.cr6.eq) goto loc_82A4B734;
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// b 0x82a4b774
	goto loc_82A4B774;
loc_82A4B734:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b76c
	if (ctx.cr0.eq) goto loc_82A4B76C;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r26.s64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r9.u8);
	// b 0x82a4b774
	goto loc_82A4B774;
loc_82A4B76C:
	// subf r11,r26,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_82A4B774:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a4b794
	if (!ctx.cr6.gt) goto loc_82A4B794;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4b794
	if (ctx.cr0.eq) goto loc_82A4B794;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = ctx.r25.u64 + ctx.r20.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4B794;
	sub_82A4EFB0(ctx, base);
loc_82A4B794:
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a4bd48
	if (ctx.cr6.eq) goto loc_82A4BD48;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b7f8
	if (ctx.cr0.eq) goto loc_82A4B7F8;
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = ctx.r30.u64 + ctx.r24.u64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x8312e7bc
	ctx.lr = 0x82A4B7DC;
	sub_8312E7BC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4bd48
	if (ctx.cr0.lt) goto loc_82A4BD48;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82a4bd48
	goto loc_82A4BD48;
loc_82A4B7F8:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// add r29,r10,r30
	ctx.r29.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf r28,r28,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// beq 0x82a4b8ac
	if (ctx.cr0.eq) goto loc_82A4B8AC;
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4b874
	if (!ctx.cr6.lt) goto loc_82A4B874;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// b 0x82a4b8e8
	goto loc_82A4B8E8;
loc_82A4B874:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82A4B880:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b920
	if (ctx.cr6.eq) goto loc_82A4B920;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b920
	if (!ctx.cr6.gt) goto loc_82A4B920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b880
	goto loc_82A4B880;
loc_82A4B8AC:
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4b97c
	if (ctx.cr0.eq) goto loc_82A4B97C;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// lbz r11,5(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4b944
	if (!ctx.cr6.lt) goto loc_82A4B944;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_82A4B8E8:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4b920
	if (!ctx.cr6.eq) goto loc_82A4B920;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
loc_82A4B920:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82a4bb34
	goto loc_82A4BB34;
loc_82A4B944:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = ctx.r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_82A4B950:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4b920
	if (ctx.cr6.eq) goto loc_82A4B920;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4b920
	if (!ctx.cr6.gt) goto loc_82A4B920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4b950
	goto loc_82A4B950;
loc_82A4B97C:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmpld cr6,r8,r9
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r9.u64, ctx.xer);
	// bne cr6,0x82a4b9e8
	if (!ctx.cr6.eq) goto loc_82A4B9E8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82a4b9e8
	if (!ctx.cr6.eq) goto loc_82A4B9E8;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82a4b9e8
	if (!ctx.cr6.lt) goto loc_82A4B9E8;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u32);
loc_82A4B9E8:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4ba2c
	if (ctx.cr0.eq) goto loc_82A4BA2C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
	// beq 0x82a4ba1c
	if (ctx.cr0.eq) goto loc_82A4BA1C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// ble cr6,0x82a4ba1c
	if (!ctx.cr6.gt) goto loc_82A4BA1C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r4.u32);
loc_82A4BA1C:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x8312e7cc
	ctx.lr = 0x82A4BA2C;
	sub_8312E7CC(ctx, base);
loc_82A4BA2C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x82a4bb3c
	if (ctx.cr6.gt) goto loc_82A4BB3C;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4ba70
	if (!ctx.cr0.eq) goto loc_82A4BA70;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
	// b 0x82a4ba84
	goto loc_82A4BA84;
loc_82A4BA70:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r29.u32);
loc_82A4BA84:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// stb r11,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r11.u8);
	// bge cr6,0x82a4badc
	if (!ctx.cr6.lt) goto loc_82A4BADC;
	// addi r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a4bb14
	if (!ctx.cr6.eq) goto loc_82A4BB14;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u32);
	// b 0x82a4bb14
	goto loc_82A4BB14;
loc_82A4BADC:
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = ctx.r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82A4BAE8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4bb14
	if (ctx.cr6.eq) goto loc_82A4BB14;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a4bb14
	if (!ctx.cr6.gt) goto loc_82A4BB14;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bae8
	goto loc_82A4BAE8;
loc_82A4BB14:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82A4BB34:
	// stw r11,48(r21)
	PPC_STORE_U32(ctx.r21.u32 + 48, ctx.r11.u32);
	// b 0x82a4bd48
	goto loc_82A4BD48;
loc_82A4BB3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a49558
	ctx.lr = 0x82A4BB48;
	sub_82A49558(ctx, base);
	// b 0x82a4bd48
	goto loc_82A4BD48;
loc_82A4BB4C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a4bb74
	if (!ctx.cr6.eq) goto loc_82A4BB74;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a49690
	ctx.lr = 0x82A4BB6C;
	sub_82A49690(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4bd48
	if (!ctx.cr0.eq) goto loc_82A4BD48;
loc_82A4BB74:
	// rlwinm. r11,r23,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bb84
	if (ctx.cr0.eq) goto loc_82A4BB84;
	// stw r19,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r19.u32);
	// b 0x82a4bd50
	goto loc_82A4BD50;
loc_82A4BB84:
	// rlwinm r23,r23,0,14,1
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bc4c
	if (ctx.cr0.eq) goto loc_82A4BC4C;
	// rlwinm r11,r23,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// beq 0x82a4bbc8
	if (ctx.cr0.eq) goto loc_82A4BBC8;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bbd8
	goto loc_82A4BBD8;
loc_82A4BBC8:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82A4BBD8:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4bc04
	if (ctx.cr0.eq) goto loc_82A4BC04;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4bc04
	if (!ctx.cr0.eq) goto loc_82A4BC04;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4BC04:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bc64
	goto loc_82A4BC64;
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r20,356(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r23,348(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x82a4bc64
	goto loc_82A4BC64;
loc_82A4BC4C:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4bc64
	if (ctx.cr0.eq) goto loc_82A4BC64;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4BC64:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4a980
	ctx.lr = 0x82A4BC74;
	sub_82A4A980(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a4bd40
	if (ctx.cr0.eq) goto loc_82A4BD40;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a4bcf4
	if (ctx.cr0.eq) goto loc_82A4BCF4;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4bca0
	if (ctx.cr0.eq) goto loc_82A4BCA0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bcb0
	goto loc_82A4BCB0;
loc_82A4BCA0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_82A4BCB0:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a4bcec
	if (ctx.cr0.eq) goto loc_82A4BCEC;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bcd0
	if (ctx.cr0.eq) goto loc_82A4BCD0;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bce0
	goto loc_82A4BCE0;
loc_82A4BCD0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82A4BCE0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82a4bcf4
	goto loc_82A4BCF4;
loc_82A4BCEC:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_82A4BCF4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x82a4bd04
	if (ctx.cr6.lt) goto loc_82A4BD04;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82A4BD04:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4f820
	ctx.lr = 0x82A4BD10;
	sub_82A4F820(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a4bd30
	if (!ctx.cr6.gt) goto loc_82A4BD30;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd30
	if (ctx.cr0.eq) goto loc_82A4BD30;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4BD30;
	sub_82A4EFB0(ctx, base);
loc_82A4BD30:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4b270
	ctx.lr = 0x82A4BD40;
	sub_82A4B270(ctx, base);
loc_82A4BD40:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
loc_82A4BD48:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a4bd7c
	if (!ctx.cr6.eq) goto loc_82A4BD7C;
loc_82A4BD50:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd7c
	if (ctx.cr0.eq) goto loc_82A4BD7C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x8312e7fc
	ctx.lr = 0x82A4BD7C;
	sub_8312E7FC(ctx, base);
loc_82A4BD7C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bd98
	goto loc_82A4BD98;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82A4BD98:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82a4bdd0
	ctx.lr = 0x82A4BDA4;
	sub_82A4BDD0(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
loc_82A4BDA8:
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BC14"))) PPC_WEAK_FUNC(sub_82A4BC14);
PPC_FUNC_IMPL(__imp__sub_82A4BC14) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r26,364(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r20,356(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r23,348(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r27,340(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r25,92(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x82a4bc64
	// ERROR 82A4BC64
	return;
}

__attribute__((alias("__imp__sub_82A4BC4C"))) PPC_WEAK_FUNC(sub_82A4BC4C);
PPC_FUNC_IMPL(__imp__sub_82A4BC4C) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4bc64
	if (ctx.cr0.eq) goto loc_82A4BC64;
	// rlwinm r11,r11,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 | ctx.r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_82A4BC64:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4a980
	ctx.lr = 0x82A4BC74;
	sub_82A4A980(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a4bd40
	if (ctx.cr0.eq) goto loc_82A4BD40;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + -11);
	// addi r11,r29,-16
	ctx.r11.s64 = ctx.r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a4bcf4
	if (ctx.cr0.eq) goto loc_82A4BCF4;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4bca0
	if (ctx.cr0.eq) goto loc_82A4BCA0;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bcb0
	goto loc_82A4BCB0;
loc_82A4BCA0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
loc_82A4BCB0:
	// lbz r11,5(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a4bcec
	if (ctx.cr0.eq) goto loc_82A4BCEC;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bcd0
	if (ctx.cr0.eq) goto loc_82A4BCD0;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82a4bce0
	goto loc_82A4BCE0;
loc_82A4BCD0:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82A4BCE0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82a4bcf4
	goto loc_82A4BCF4;
loc_82A4BCEC:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r19.u64);
loc_82A4BCF4:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// blt cr6,0x82a4bd04
	if (ctx.cr6.lt) goto loc_82A4BD04;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82A4BD04:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4f820
	ctx.lr = 0x82A4BD10;
	sub_82A4F820(ctx, base);
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x82a4bd30
	if (!ctx.cr6.gt) goto loc_82A4BD30;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd30
	if (ctx.cr0.eq) goto loc_82A4BD30;
	// subf r5,r25,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4BD30;
	sub_82A4EFB0(ctx, base);
loc_82A4BD30:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4b270
	ctx.lr = 0x82A4BD40;
	sub_82A4B270(ctx, base);
loc_82A4BD40:
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r20.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82a4bd7c
	if (!ctx.cr6.eq) goto loc_82A4BD7C;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bd7c
	if (ctx.cr0.eq) goto loc_82A4BD7C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r24.u32);
	// bl 0x8312e7fc
	ctx.lr = 0x82A4BD7C;
	sub_8312E7FC(ctx, base);
loc_82A4BD7C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4bd98
	// ERROR 82A4BD98
	return;
}

__attribute__((alias("__imp__sub_82A4BD8C"))) PPC_WEAK_FUNC(sub_82A4BD8C);
PPC_FUNC_IMPL(__imp__sub_82A4BD8C) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x82a4bdd0
	ctx.lr = 0x82A4BDA4;
	sub_82A4BDD0(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BDB0"))) PPC_WEAK_FUNC(sub_82A4BDB0);
PPC_FUNC_IMPL(__imp__sub_82A4BDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82a4bde8
	goto loc_82A4BDE8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A4BDE8:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4bdfc
	if (ctx.cr6.eq) goto loc_82A4BDFC;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4BDFC;
	sub_8312E73C(ctx, base);
loc_82A4BDFC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BDD0"))) PPC_WEAK_FUNC(sub_82A4BDD0);
PPC_FUNC_IMPL(__imp__sub_82A4BDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4bdfc
	if (ctx.cr6.eq) goto loc_82A4BDFC;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x8312e73c
	ctx.lr = 0x82A4BDFC;
	sub_8312E73C(ctx, base);
loc_82A4BDFC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BE14"))) PPC_WEAK_FUNC(sub_82A4BE14);
PPC_FUNC_IMPL(__imp__sub_82A4BE14) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BE3C"))) PPC_WEAK_FUNC(sub_82A4BE3C);
PPC_FUNC_IMPL(__imp__sub_82A4BE3C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BE48"))) PPC_WEAK_FUNC(sub_82A4BE48);
PPC_FUNC_IMPL(__imp__sub_82A4BE48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// lwz r3,-16476(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16476);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BE58"))) PPC_WEAK_FUNC(sub_82A4BE58);
PPC_FUNC_IMPL(__imp__sub_82A4BE58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a48470
	sub_82A48470(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BE60"))) PPC_WEAK_FUNC(sub_82A4BE60);
PPC_FUNC_IMPL(__imp__sub_82A4BE60) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a4be68
	sub_82A4BE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BE68"))) PPC_WEAK_FUNC(sub_82A4BE68);
PPC_FUNC_IMPL(__imp__sub_82A4BE68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4BE70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82a4bed0
	ctx.lr = 0x82A4BE84;
	sub_82A4BED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	ctx.r29.u64 = ctx.r28.u32 & 0xFF;
loc_82A4BE8C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e86c
	ctx.lr = 0x82A4BEA0;
	sub_8312E86C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4bebc
	if (ctx.cr0.lt) goto loc_82A4BEBC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a4bec4
	if (ctx.cr6.eq) goto loc_82A4BEC4;
	// cmpwi cr6,r3,257
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 257, ctx.xer);
	// beq cr6,0x82a4be8c
	if (ctx.cr6.eq) goto loc_82A4BE8C;
	// b 0x82a4bec4
	goto loc_82A4BEC4;
loc_82A4BEBC:
	// bl 0x82a48438
	ctx.lr = 0x82A4BEC0;
	sub_82A48438(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A4BEC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BED0"))) PPC_WEAK_FUNC(sub_82A4BED0);
PPC_FUNC_IMPL(__imp__sub_82A4BED0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82a4bee0
	if (!ctx.cr6.eq) goto loc_82A4BEE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A4BEE0:
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BEF0"))) PPC_WEAK_FUNC(sub_82A4BEF0);
PPC_FUNC_IMPL(__imp__sub_82A4BEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,5356
	ctx.r11.s64 = ctx.r11.s64 + 5356;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82a4fc60
	sub_82A4FC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4BF10"))) PPC_WEAK_FUNC(sub_82A4BF10);
PPC_FUNC_IMPL(__imp__sub_82A4BF10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BF18"))) PPC_WEAK_FUNC(sub_82A4BF18);
PPC_FUNC_IMPL(__imp__sub_82A4BF18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,5364
	ctx.r3.s64 = ctx.r11.s64 + 5364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4BF30"))) PPC_WEAK_FUNC(sub_82A4BF30);
PPC_FUNC_IMPL(__imp__sub_82A4BF30) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,5356
	ctx.r11.s64 = ctx.r11.s64 + 5356;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a4bf6c
	if (ctx.cr6.eq) goto loc_82A4BF6C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a4fc60
	ctx.lr = 0x82A4BF6C;
	sub_82A4FC60(ctx, base);
loc_82A4BF6C:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4bf7c
	if (ctx.cr0.eq) goto loc_82A4BF7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823397b8
	ctx.lr = 0x82A4BF7C;
	sub_823397B8(ctx, base);
loc_82A4BF7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A4BF98"))) PPC_WEAK_FUNC(sub_82A4BF98);
PPC_FUNC_IMPL(__imp__sub_82A4BF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4BFA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,5356
	ctx.r11.s64 = ctx.r11.s64 + 5356;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82a4c024
	if (ctx.cr6.eq) goto loc_82A4C024;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4c01c
	if (ctx.cr6.eq) goto loc_82A4C01C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A4BFD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a4bfd8
	if (!ctx.cr6.eq) goto loc_82A4BFD8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4fb98
	ctx.lr = 0x82A4C000;
	sub_82A4FB98(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4c02c
	if (ctx.cr0.eq) goto loc_82A4C02C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82a4fab8
	ctx.lr = 0x82A4C018;
	sub_82A4FAB8(ctx, base);
	// b 0x82a4c02c
	goto loc_82A4C02C;
loc_82A4C01C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a4c028
	goto loc_82A4C028;
loc_82A4C024:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82A4C028:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A4C02C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C038"))) PPC_WEAK_FUNC(sub_82A4C038);
PPC_FUNC_IMPL(__imp__sub_82A4C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r21,-216(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -216);
	// lwz r16,5408(0)
	ctx.r16.u64 = PPC_LOAD_U32(5408);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5384
	ctx.r4.s64 = ctx.r11.s64 + 5384;
	// bl 0x8276fba8
	ctx.lr = 0x82A4C064;
	sub_8276FBA8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x827700d0
	ctx.lr = 0x82A4C070;
	sub_827700D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// addi r4,r10,-13200
	ctx.r4.s64 = ctx.r10.s64 + -13200;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4fcc0
	ctx.lr = 0x82A4C08C;
	sub_82A4FCC0(ctx, base);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82eefa00
	ctx.lr = 0x82A4C0A4;
	sub_82EEFA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C040"))) PPC_WEAK_FUNC(sub_82A4C040);
PPC_FUNC_IMPL(__imp__sub_82A4C040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5384
	ctx.r4.s64 = ctx.r11.s64 + 5384;
	// bl 0x8276fba8
	ctx.lr = 0x82A4C064;
	sub_8276FBA8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x827700d0
	ctx.lr = 0x82A4C070;
	sub_827700D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// addi r4,r10,-13200
	ctx.r4.s64 = ctx.r10.s64 + -13200;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4fcc0
	ctx.lr = 0x82A4C08C;
	sub_82A4FCC0(ctx, base);
}

__attribute__((alias("__imp__sub_82A4C08C"))) PPC_WEAK_FUNC(sub_82A4C08C);
PPC_FUNC_IMPL(__imp__sub_82A4C08C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82eefa00
	ctx.lr = 0x82A4C0A4;
	sub_82EEFA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C0B8"))) PPC_WEAK_FUNC(sub_82A4C0B8);
PPC_FUNC_IMPL(__imp__sub_82A4C0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r21,-216(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -216);
	// lwz r16,5464(0)
	ctx.r16.u64 = PPC_LOAD_U32(5464);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4C0C8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82a4bf98
	ctx.lr = 0x82A4C0E0;
	sub_82A4BF98(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,21144
	ctx.r11.s64 = ctx.r11.s64 + 21144;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82770120
	ctx.lr = 0x82A4C0F8;
	sub_82770120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C0C0"))) PPC_WEAK_FUNC(sub_82A4C0C0);
PPC_FUNC_IMPL(__imp__sub_82A4C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4C0C8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// bl 0x82a4bf98
	ctx.lr = 0x82A4C0E0;
	sub_82A4BF98(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// addi r11,r11,21144
	ctx.r11.s64 = ctx.r11.s64 + 21144;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82770120
	ctx.lr = 0x82A4C0F8;
	sub_82770120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C104"))) PPC_WEAK_FUNC(sub_82A4C104);
PPC_FUNC_IMPL(__imp__sub_82A4C104) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82a4bef0
	ctx.lr = 0x82A4C11C;
	sub_82A4BEF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C130"))) PPC_WEAK_FUNC(sub_82A4C130);
PPC_FUNC_IMPL(__imp__sub_82A4C130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r21,-216(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -216);
	// lwz r16,5544(0)
	ctx.r16.u64 = PPC_LOAD_U32(5544);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5512
	ctx.r4.s64 = ctx.r11.s64 + 5512;
	// bl 0x8276fba8
	ctx.lr = 0x82A4C15C;
	sub_8276FBA8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x827700d0
	ctx.lr = 0x82A4C168;
	sub_827700D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// addi r4,r10,-13112
	ctx.r4.s64 = ctx.r10.s64 + -13112;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4fcc0
	ctx.lr = 0x82A4C184;
	sub_82A4FCC0(ctx, base);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82eefa00
	ctx.lr = 0x82A4C19C;
	sub_82EEFA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C138"))) PPC_WEAK_FUNC(sub_82A4C138);
PPC_FUNC_IMPL(__imp__sub_82A4C138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,5512
	ctx.r4.s64 = ctx.r11.s64 + 5512;
	// bl 0x8276fba8
	ctx.lr = 0x82A4C15C;
	sub_8276FBA8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x827700d0
	ctx.lr = 0x82A4C168;
	sub_827700D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// addi r4,r10,-13112
	ctx.r4.s64 = ctx.r10.s64 + -13112;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4fcc0
	ctx.lr = 0x82A4C184;
	sub_82A4FCC0(ctx, base);
}

__attribute__((alias("__imp__sub_82A4C184"))) PPC_WEAK_FUNC(sub_82A4C184);
PPC_FUNC_IMPL(__imp__sub_82A4C184) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x82eefa00
	ctx.lr = 0x82A4C19C;
	sub_82EEFA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C1B0"))) PPC_WEAK_FUNC(sub_82A4C1B0);
PPC_FUNC_IMPL(__imp__sub_82A4C1B0) {
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
	// bl 0x82a4c0c0
	ctx.lr = 0x82A4C1C8;
	sub_82A4C0C0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A4C1F0"))) PPC_WEAK_FUNC(sub_82A4C1F0);
PPC_FUNC_IMPL(__imp__sub_82A4C1F0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// li r3,250
	ctx.r3.s64 = 250;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8312e44c
	ctx.lr = 0x82A4C218;
	sub_8312E44C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4c240
	if (ctx.cr0.lt) goto loc_82A4C240;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a4c230
	if (!ctx.cr6.eq) goto loc_82A4C230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x82A4C230;
	sub_82A6ED60(ctx, base);
loc_82A4C230:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a4c240
	if (ctx.cr6.lt) goto loc_82A4C240;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4c258
	goto loc_82A4C258;
loc_82A4C240:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a4c258
	if (ctx.cr6.eq) goto loc_82A4C258;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82A4C258:
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

__attribute__((alias("__imp__sub_82A4C270"))) PPC_WEAK_FUNC(sub_82A4C270);
PPC_FUNC_IMPL(__imp__sub_82A4C270) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82a4c1f0
	sub_82A4C1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C288"))) PPC_WEAK_FUNC(sub_82A4C288);
PPC_FUNC_IMPL(__imp__sub_82A4C288) {
	PPC_FUNC_PROLOGUE();
	// lis r4,7
	ctx.r4.s64 = 458752;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82a4c1f0
	sub_82A4C1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C2A0"))) PPC_WEAK_FUNC(sub_82A4C2A0);
PPC_FUNC_IMPL(__imp__sub_82A4C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bne cr6,0x82a4c2e0
	if (!ctx.cr6.eq) goto loc_82A4C2E0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x82a4c2e4
	goto loc_82A4C2E4;
loc_82A4C2E0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A4C2E4:
	// lis r4,7
	ctx.r4.s64 = 458752;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8312eafc
	ctx.lr = 0x82A4C300;
	sub_8312EAFC(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4c320
	if (ctx.cr0.lt) goto loc_82A4C320;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x82A4C310;
	sub_82A6ED60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4c320
	if (ctx.cr0.lt) goto loc_82A4C320;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4c338
	goto loc_82A4C338;
loc_82A4C320:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a4c338
	if (ctx.cr6.eq) goto loc_82A4C338;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82A4C338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C348"))) PPC_WEAK_FUNC(sub_82A4C348);
PPC_FUNC_IMPL(__imp__sub_82A4C348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,27
	ctx.r4.u64 = ctx.r4.u64 | 27;
	// li r3,250
	ctx.r3.s64 = 250;
	// bl 0x8312eb0c
	ctx.lr = 0x82A4C378;
	sub_8312EB0C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a4c388
	if (ctx.cr0.lt) goto loc_82A4C388;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4c3a0
	goto loc_82A4C3A0;
loc_82A4C388:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a4c3a0
	if (ctx.cr6.eq) goto loc_82A4C3A0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82A4C3A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C3B0"))) PPC_WEAK_FUNC(sub_82A4C3B0);
PPC_FUNC_IMPL(__imp__sub_82A4C3B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,5592
	ctx.r11.s64 = ctx.r11.s64 + 5592;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82a4c3dc
	if (ctx.cr0.eq) goto loc_82A4C3DC;
	// bl 0x823397b8
	ctx.lr = 0x82A4C3DC;
	sub_823397B8(ctx, base);
loc_82A4C3DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A4C3F8"))) PPC_WEAK_FUNC(sub_82A4C3F8);
PPC_FUNC_IMPL(__imp__sub_82A4C3F8) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a4c348
	ctx.lr = 0x82A4C41C;
	sub_82A4C348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4c448
	if (!ctx.cr0.eq) goto loc_82A4C448;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a4c440
	if (!ctx.cr6.eq) goto loc_82A4C440;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82a4c444
	if (ctx.cr6.eq) goto loc_82A4C444;
loc_82A4C440:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4C444:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A4C448:
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

__attribute__((alias("__imp__sub_82A4C460"))) PPC_WEAK_FUNC(sub_82A4C460);
PPC_FUNC_IMPL(__imp__sub_82A4C460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4C468;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8312e49c
	ctx.lr = 0x82A4C470;
	sub_8312E49C(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a4c518
	if (!ctx.cr6.lt) goto loc_82A4C518;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r28,r11,-1888
	ctx.r28.s64 = ctx.r11.s64 + -1888;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82A4C494;
	sub_8312E74C(ctx, base);
	// lis r29,-31961
	ctx.r29.s64 = -2094596096;
	// lwz r11,-24404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24404);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a4c4ac
	if (!ctx.cr6.eq) goto loc_82A4C4AC;
	// li r30,1627
	ctx.r30.s64 = 1627;
	// b 0x82a4c50c
	goto loc_82A4C50C;
loc_82A4C4AC:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a4c348
	ctx.lr = 0x82A4C4BC;
	sub_82A4C348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lis r31,-31961
	ctx.r31.s64 = -2094596096;
	// bne 0x82a4c4fc
	if (!ctx.cr0.eq) goto loc_82A4C4FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,-24400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24400, ctx.r11.u32);
	// bl 0x82a4c2a0
	ctx.lr = 0x82A4C4EC;
	sub_82A4C2A0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a4c4fc
	if (!ctx.cr0.eq) goto loc_82A4C4FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a4c508
	goto loc_82A4C508;
loc_82A4C4FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,-24400(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24400, ctx.r10.u32);
loc_82A4C508:
	// stw r11,-24404(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24404, ctx.r11.u32);
loc_82A4C50C:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82A4C514;
	sub_8312E73C(ctx, base);
	// b 0x82a4c52c
	goto loc_82A4C52C;
loc_82A4C518:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a4c2a0
	ctx.lr = 0x82A4C528;
	sub_82A4C2A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A4C52C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C538"))) PPC_WEAK_FUNC(sub_82A4C538);
PPC_FUNC_IMPL(__imp__sub_82A4C538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4C540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8312e49c
	ctx.lr = 0x82A4C548;
	sub_8312E49C(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r3,0,8,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r11,r11,41216
	ctx.r11.u64 = ctx.r11.u64 | 41216;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a4c5c8
	if (!ctx.cr6.lt) goto loc_82A4C5C8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r28,r11,-1888
	ctx.r28.s64 = ctx.r11.s64 + -1888;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82A4C56C;
	sub_8312E74C(ctx, base);
	// lis r31,-31961
	ctx.r31.s64 = -2094596096;
	// lwz r11,-24404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a4c584
	if (!ctx.cr6.eq) goto loc_82A4C584;
	// li r29,1627
	ctx.r29.s64 = 1627;
	// b 0x82a4c5bc
	goto loc_82A4C5BC;
loc_82A4C584:
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-24400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24400);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a4c5a4
	if (ctx.cr6.eq) goto loc_82A4C5A4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82A4C5A4:
	// bl 0x82a4c2a0
	ctx.lr = 0x82A4C5A8;
	sub_82A4C2A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,-24400(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24400, ctx.r11.u32);
	// stw r10,-24404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24404, ctx.r10.u32);
loc_82A4C5BC:
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82A4C5C4;
	sub_8312E73C(ctx, base);
	// b 0x82a4c5dc
	goto loc_82A4C5DC;
loc_82A4C5C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a4c2a0
	ctx.lr = 0x82A4C5D8;
	sub_82A4C2A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A4C5DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C5F0"))) PPC_WEAK_FUNC(sub_82A4C5F0);
PPC_FUNC_IMPL(__imp__sub_82A4C5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82a57ee0
	ctx.lr = 0x82A4C608;
	sub_82A57EE0(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// stw r11,1548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1548, ctx.r11.u32);
	// bne 0x82a4c628
	if (!ctx.cr0.eq) goto loc_82A4C628;
	// li r3,24
	ctx.r3.s64 = 24;
	// b 0x82a4c634
	goto loc_82A4C634;
loc_82A4C628:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A4C634:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C648"))) PPC_WEAK_FUNC(sub_82A4C648);
PPC_FUNC_IMPL(__imp__sub_82A4C648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15128(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82A4C658;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82a4f140
	ctx.lr = 0x82A4C668;
	sub_82A4F140(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31943
	ctx.r24.s64 = -2093416448;
	// lis r25,-31943
	ctx.r25.s64 = -2093416448;
	// lwz r30,1548(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1548);
	// lwz r28,1552(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1552);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a57d98
	ctx.lr = 0x82A4C69C;
	sub_82A57D98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82a4c700
	if (!ctx.cr6.lt) goto loc_82A4C700;
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a4c6b8
	if (ctx.cr6.lt) goto loc_82A4C6B8;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82A4C6B8:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4c6d4
	if (ctx.cr6.lt) goto loc_82A4C6D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a56b88
	ctx.lr = 0x82A4C6CC;
	sub_82A56B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4c6f0
	if (!ctx.cr0.eq) goto loc_82A4C6F0;
loc_82A4C6D4:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a56b88
	ctx.lr = 0x82A4C6E8;
	sub_82A56B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4c714
	if (ctx.cr0.eq) goto loc_82A4C714;
loc_82A4C6F0:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,1552(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1552, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A4C700:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,1548(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1548, ctx.r11.u32);
	// b 0x82a4c71c
	goto loc_82A4C71C;
loc_82A4C714:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82A4C71C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4c734
	ctx.lr = 0x82A4C728;
	sub_82A4C734(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C650"))) PPC_WEAK_FUNC(sub_82A4C650);
PPC_FUNC_IMPL(__imp__sub_82A4C650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82A4C658;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82a4f140
	ctx.lr = 0x82A4C668;
	sub_82A4F140(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r24,-31943
	ctx.r24.s64 = -2093416448;
	// lis r25,-31943
	ctx.r25.s64 = -2093416448;
	// lwz r30,1548(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1548);
	// lwz r28,1552(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1552);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// subf r26,r28,r30
	ctx.r26.s64 = ctx.r30.s64 - ctx.r28.s64;
	// addi r27,r26,4
	ctx.r27.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a57d98
	ctx.lr = 0x82A4C69C;
	sub_82A57D98(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82a4c700
	if (!ctx.cr6.lt) goto loc_82A4C700;
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// blt cr6,0x82a4c6b8
	if (ctx.cr6.lt) goto loc_82A4C6B8;
	// li r11,2048
	ctx.r11.s64 = 2048;
loc_82A4C6B8:
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4c6d4
	if (ctx.cr6.lt) goto loc_82A4C6D4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a56b88
	ctx.lr = 0x82A4C6CC;
	sub_82A56B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4c6f0
	if (!ctx.cr0.eq) goto loc_82A4C6F0;
loc_82A4C6D4:
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4c714
	if (ctx.cr6.lt) goto loc_82A4C714;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a56b88
	ctx.lr = 0x82A4C6E8;
	sub_82A56B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4c714
	if (ctx.cr0.eq) goto loc_82A4C714;
loc_82A4C6F0:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// stw r3,1552(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1552, ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82A4C700:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r11,1548(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1548, ctx.r11.u32);
	// b 0x82a4c71c
	goto loc_82A4C71C;
loc_82A4C714:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_82A4C71C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4c734
	ctx.lr = 0x82A4C728;
	sub_82A4C734(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C734"))) PPC_WEAK_FUNC(sub_82A4C734);
PPC_FUNC_IMPL(__imp__sub_82A4C734) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4f148
	ctx.lr = 0x82A4C744;
	sub_82A4F148(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C758"))) PPC_WEAK_FUNC(sub_82A4C758);
PPC_FUNC_IMPL(__imp__sub_82A4C758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4c650
	ctx.lr = 0x82A4C768;
	sub_82A4C650(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C788"))) PPC_WEAK_FUNC(sub_82A4C788);
PPC_FUNC_IMPL(__imp__sub_82A4C788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-24264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24264);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a4c7ac
	if (ctx.cr0.eq) goto loc_82A4C7AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4C7AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A4C7AC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x82a58018
	ctx.lr = 0x82A4C7B4;
	sub_82A58018(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a57ff8
	ctx.lr = 0x82A4C7C0;
	sub_82A57FF8(ctx, base);
	// bl 0x82a57f48
	ctx.lr = 0x82A4C7C4;
	sub_82A57F48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C7D8"))) PPC_WEAK_FUNC(sub_82A4C7D8);
PPC_FUNC_IMPL(__imp__sub_82A4C7D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a4c918
	sub_82A4C918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C7E0"))) PPC_WEAK_FUNC(sub_82A4C7E0);
PPC_FUNC_IMPL(__imp__sub_82A4C7E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,5596
	ctx.r11.s64 = ctx.r11.s64 + 5596;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a4c840
	ctx.lr = 0x82A4C80C;
	sub_82A4C840(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4c81c
	if (ctx.cr0.eq) goto loc_82A4C81C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823397b8
	ctx.lr = 0x82A4C81C;
	sub_823397B8(ctx, base);
loc_82A4C81C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A4C838"))) PPC_WEAK_FUNC(sub_82A4C838);
PPC_FUNC_IMPL(__imp__sub_82A4C838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15104(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15104);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a583d0
	ctx.lr = 0x82A4C864;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4c8c4
	if (ctx.cr6.eq) goto loc_82A4C8C4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r9,r11,-24392
	ctx.r9.s64 = ctx.r11.s64 + -24392;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82A4C884:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4c8b4
	if (ctx.cr6.eq) goto loc_82A4C8B4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a4c8a8
	if (ctx.cr6.eq) goto loc_82A4C8A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4c884
	goto loc_82A4C884;
loc_82A4C8A8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82a4fc60
	ctx.lr = 0x82A4C8B4;
	sub_82A4FC60(ctx, base);
loc_82A4C8B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a4fc60
	ctx.lr = 0x82A4C8BC;
	sub_82A4FC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A4C8C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4c8e8
	ctx.lr = 0x82A4C8D0;
	sub_82A4C8E8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82A4C840"))) PPC_WEAK_FUNC(sub_82A4C840);
PPC_FUNC_IMPL(__imp__sub_82A4C840) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a583d0
	ctx.lr = 0x82A4C864;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4c8c4
	if (ctx.cr6.eq) goto loc_82A4C8C4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r9,r11,-24392
	ctx.r9.s64 = ctx.r11.s64 + -24392;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82A4C884:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4c8b4
	if (ctx.cr6.eq) goto loc_82A4C8B4;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a4c8a8
	if (ctx.cr6.eq) goto loc_82A4C8A8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4c884
	goto loc_82A4C884;
loc_82A4C8A8:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82a4fc60
	ctx.lr = 0x82A4C8B4;
	sub_82A4FC60(ctx, base);
loc_82A4C8B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a4fc60
	ctx.lr = 0x82A4C8BC;
	sub_82A4FC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A4C8C4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82a4c8e8
	ctx.lr = 0x82A4C8D0;
	sub_82A4C8E8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82A4C8E8"))) PPC_WEAK_FUNC(sub_82A4C8E8);
PPC_FUNC_IMPL(__imp__sub_82A4C8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a58270
	ctx.lr = 0x82A4C8FC;
	sub_82A58270(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4C910"))) PPC_WEAK_FUNC(sub_82A4C910);
PPC_FUNC_IMPL(__imp__sub_82A4C910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15080(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15080);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A4C920;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4ca5c
	if (!ctx.cr6.eq) goto loc_82A4CA5C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r8,10240
	ctx.r8.s64 = 10240;
	// addi r7,r11,-928
	ctx.r7.s64 = ctx.r11.s64 + -928;
	// addi r6,r10,-1128
	ctx.r6.s64 = ctx.r10.s64 + -1128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,9
	ctx.r4.s64 = ctx.r27.s64 + 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5e850
	ctx.lr = 0x82A4C964;
	sub_82A5E850(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a4c974
	if (!ctx.cr0.eq) goto loc_82A4C974;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4ca60
	goto loc_82A4CA60;
loc_82A4C974:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A4C978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4c978
	if (!ctx.cr6.eq) goto loc_82A4C978;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a4c9b8
	if (ctx.cr0.eq) goto loc_82A4C9B8;
loc_82A4C998:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82a4c9bc
	if (!ctx.cr6.eq) goto loc_82A4C9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// bne cr6,0x82a4c998
	if (!ctx.cr6.eq) goto loc_82A4C998;
loc_82A4C9B8:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82A4C9BC:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a583d0
	ctx.lr = 0x82A4C9C4;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4ca48
	if (!ctx.cr6.eq) goto loc_82A4CA48;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a4fb98
	ctx.lr = 0x82A4C9DC;
	sub_82A4FB98(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a4ca48
	if (ctx.cr0.eq) goto loc_82A4CA48;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4fb98
	ctx.lr = 0x82A4C9F0;
	sub_82A4FB98(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4ca40
	if (ctx.cr0.eq) goto loc_82A4CA40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4fab8
	ctx.lr = 0x82A4CA08;
	sub_82A4FAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4ca28
	if (ctx.cr0.eq) goto loc_82A4CA28;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580f8
	ctx.lr = 0x82A4CA28;
	sub_82A580F8(ctx, base);
loc_82A4CA28:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// b 0x82a4ca48
	goto loc_82A4CA48;
loc_82A4CA40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4CA48;
	sub_82A4FC60(ctx, base);
loc_82A4CA48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4CA50;
	sub_82A4FC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82a4ca68
	ctx.lr = 0x82A4CA5C;
	sub_82A4CA68(ctx, base);
loc_82A4CA5C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82A4CA60:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4C918"))) PPC_WEAK_FUNC(sub_82A4C918);
PPC_FUNC_IMPL(__imp__sub_82A4C918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A4C920;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r27.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4ca5c
	if (!ctx.cr6.eq) goto loc_82A4CA5C;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r8,10240
	ctx.r8.s64 = 10240;
	// addi r7,r11,-928
	ctx.r7.s64 = ctx.r11.s64 + -928;
	// addi r6,r10,-1128
	ctx.r6.s64 = ctx.r10.s64 + -1128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r27,9
	ctx.r4.s64 = ctx.r27.s64 + 9;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5e850
	ctx.lr = 0x82A4C964;
	sub_82A5E850(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a4c974
	if (!ctx.cr0.eq) goto loc_82A4C974;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4ca60
	goto loc_82A4CA60;
loc_82A4C974:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A4C978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4c978
	if (!ctx.cr6.eq) goto loc_82A4C978;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a4c9b8
	if (ctx.cr0.eq) goto loc_82A4C9B8;
loc_82A4C998:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82a4c9bc
	if (!ctx.cr6.eq) goto loc_82A4C9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
	// bne cr6,0x82a4c998
	if (!ctx.cr6.eq) goto loc_82A4C998;
loc_82A4C9B8:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82A4C9BC:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a583d0
	ctx.lr = 0x82A4C9C4;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4ca48
	if (!ctx.cr6.eq) goto loc_82A4CA48;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a4fb98
	ctx.lr = 0x82A4C9DC;
	sub_82A4FB98(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a4ca48
	if (ctx.cr0.eq) goto loc_82A4CA48;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4fb98
	ctx.lr = 0x82A4C9F0;
	sub_82A4FB98(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4ca40
	if (ctx.cr0.eq) goto loc_82A4CA40;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4fab8
	ctx.lr = 0x82A4CA08;
	sub_82A4FAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4ca28
	if (ctx.cr0.eq) goto loc_82A4CA28;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580f8
	ctx.lr = 0x82A4CA28;
	sub_82A580F8(ctx, base);
loc_82A4CA28:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
	// b 0x82a4ca48
	goto loc_82A4CA48;
loc_82A4CA40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4CA48;
	sub_82A4FC60(ctx, base);
loc_82A4CA48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4CA50;
	sub_82A4FC60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82a4ca68
	ctx.lr = 0x82A4CA5C;
	sub_82A4CA68(ctx, base);
loc_82A4CA5C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_82A4CA60:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4CA68"))) PPC_WEAK_FUNC(sub_82A4CA68);
PPC_FUNC_IMPL(__imp__sub_82A4CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82a58270
	ctx.lr = 0x82A4CA7C;
	sub_82A58270(ctx, base);
	// lwz r27,164(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CA90"))) PPC_WEAK_FUNC(sub_82A4CA90);
PPC_FUNC_IMPL(__imp__sub_82A4CA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82a4cab4
	if (ctx.cr0.eq) goto loc_82A4CAB4;
loc_82A4CA9C:
	// cmpwi cr1,r6,0
	ctx.cr1.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// beq cr1,0x82a4cac4
	if (ctx.cr1.eq) goto loc_82A4CAC4;
	// beq 0x82a4cac8
	if (ctx.cr0.eq) goto loc_82A4CAC8;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82a4ca9c
	goto loc_82A4CA9C;
loc_82A4CAB4:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82a4cac8
	if (ctx.cr0.eq) goto loc_82A4CAC8;
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// b 0x82a4cab4
	goto loc_82A4CAB4;
loc_82A4CAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4CAC8:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CAD0"))) PPC_WEAK_FUNC(sub_82A4CAD0);
PPC_FUNC_IMPL(__imp__sub_82A4CAD0) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a57430
	sub_82A57430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4CAE0"))) PPC_WEAK_FUNC(sub_82A4CAE0);
PPC_FUNC_IMPL(__imp__sub_82A4CAE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a4cb30
	if (!ctx.cr6.eq) goto loc_82A4CB30;
	// bl 0x82a52350
	ctx.lr = 0x82A4CB04;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4CB24;
	sub_82A580B0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// b 0x82a4cb80
	goto loc_82A4CB80;
loc_82A4CB30:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r30,r11,696
	ctx.r30.s64 = ctx.r11.s64 + 696;
	// b 0x82a4cb40
	goto loc_82A4CB40;
loc_82A4CB3C:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_82A4CB40:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a5f178
	ctx.lr = 0x82A4CB50;
	sub_82A5F178(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a4cb3c
	if (!ctx.cr0.eq) goto loc_82A4CB3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4cbe0
	ctx.lr = 0x82A4CB60;
	sub_82A4CBE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82a5f0c0
	ctx.lr = 0x82A4CB7C;
	sub_82A5F0C0(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82A4CB80:
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

__attribute__((alias("__imp__sub_82A4CB98"))) PPC_WEAK_FUNC(sub_82A4CB98);
PPC_FUNC_IMPL(__imp__sub_82A4CB98) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4cae0
	sub_82A4CAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4CBA0"))) PPC_WEAK_FUNC(sub_82A4CBA0);
PPC_FUNC_IMPL(__imp__sub_82A4CBA0) {
	PPC_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,16368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// lfd f0,5600(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5600);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 - ctx.f1.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CBE0"))) PPC_WEAK_FUNC(sub_82A4CBE0);
PPC_FUNC_IMPL(__imp__sub_82A4CBE0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4CBE4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a4cbe4
	if (!ctx.cr0.eq) goto loc_82A4CBE4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CC08"))) PPC_WEAK_FUNC(sub_82A4CC08);
PPC_FUNC_IMPL(__imp__sub_82A4CC08) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a4cc78
	if (ctx.cr0.eq) goto loc_82A4CC78;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82A4CC24:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4cc58
	if (ctx.cr6.eq) goto loc_82A4CC58;
loc_82A4CC30:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a4cc58
	if (ctx.cr0.eq) goto loc_82A4CC58;
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4cc58
	if (!ctx.cr0.eq) goto loc_82A4CC58;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a4cc30
	if (!ctx.cr0.eq) goto loc_82A4CC30;
loc_82A4CC58:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a4cc24
	if (!ctx.cr0.eq) goto loc_82A4CC24;
loc_82A4CC78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CC80"))) PPC_WEAK_FUNC(sub_82A4CC80);
PPC_FUNC_IMPL(__imp__sub_82A4CC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a4ccc4
	if (!ctx.cr6.eq) goto loc_82A4CCC4;
loc_82A4CC94:
	// bl 0x82a52350
	ctx.lr = 0x82A4CC98;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4CCB8;
	sub_82A580B0(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a4cd34
	goto loc_82A4CD34;
loc_82A4CCC4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a4cc94
	if (ctx.cr6.eq) goto loc_82A4CC94;
loc_82A4CCCC:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82a4cce4
	if (ctx.cr6.lt) goto loc_82A4CCE4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x82a4cce8
	if (!ctx.cr6.gt) goto loc_82A4CCE8;
loc_82A4CCE4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A4CCE8:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82a4cd04
	if (ctx.cr6.lt) goto loc_82A4CD04;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x82a4cd08
	if (!ctx.cr6.gt) goto loc_82A4CD08;
loc_82A4CD04:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A4CD08:
	// clrlwi. r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x82a4cd28
	if (ctx.cr0.eq) goto loc_82A4CD28;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a4cccc
	if (ctx.cr6.eq) goto loc_82A4CCCC;
loc_82A4CD28:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82A4CD34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CD48"))) PPC_WEAK_FUNC(sub_82A4CD48);
PPC_FUNC_IMPL(__imp__sub_82A4CD48) {
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
	// bl 0x82a4f568
	ctx.lr = 0x82A4CD60;
	sub_82A4F568(ctx, base);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A4CD78"))) PPC_WEAK_FUNC(sub_82A4CD78);
PPC_FUNC_IMPL(__imp__sub_82A4CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4f568
	ctx.lr = 0x82A4CD88;
	sub_82A4F568(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CDB8"))) PPC_WEAK_FUNC(sub_82A4CDB8);
PPC_FUNC_IMPL(__imp__sub_82A4CDB8) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82a4cdcc
	goto loc_82A4CDCC;
loc_82A4CDC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_82A4CDCC:
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a4cdc4
	if (!ctx.cr0.eq) goto loc_82A4CDC4;
loc_82A4CDD4:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82a4cdd4
	if (!ctx.cr0.eq) goto loc_82A4CDD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CDF0"))) PPC_WEAK_FUNC(sub_82A4CDF0);
PPC_FUNC_IMPL(__imp__sub_82A4CDF0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4CDF4:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82a4cdf4
	if (!ctx.cr0.eq) goto loc_82A4CDF4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CE10"))) PPC_WEAK_FUNC(sub_82A4CE10);
PPC_FUNC_IMPL(__imp__sub_82A4CE10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a4ce58
	if (!ctx.cr6.eq) goto loc_82A4CE58;
loc_82A4CE2C:
	// bl 0x82a52350
	ctx.lr = 0x82A4CE30;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4CE50;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a4ceec
	goto loc_82A4CEEC;
loc_82A4CE58:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4ce2c
	if (ctx.cr6.eq) goto loc_82A4CE2C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82a5fd80
	ctx.lr = 0x82A4CE84;
	sub_82A5FD80(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82a4ceb4
	if (ctx.cr0.lt) goto loc_82A4CEB4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82a4cec0
	goto loc_82A4CEC0;
loc_82A4CEB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A4CEC0;
	sub_82A5FB48(ctx, base);
loc_82A4CEC0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82a4cedc
	if (ctx.cr0.lt) goto loc_82A4CEDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// b 0x82a4cee8
	goto loc_82A4CEE8;
loc_82A4CEDC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A4CEE8;
	sub_82A5FB48(ctx, base);
loc_82A4CEE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A4CEEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A4CF08"))) PPC_WEAK_FUNC(sub_82A4CF08);
PPC_FUNC_IMPL(__imp__sub_82A4CF08) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a4ce10
	sub_82A4CE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4CF18"))) PPC_WEAK_FUNC(sub_82A4CF18);
PPC_FUNC_IMPL(__imp__sub_82A4CF18) {
	PPC_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,16368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// lfd f0,5600(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 5600);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f1,f12
	ctx.f10.f64 = ctx.f1.f64 - ctx.f12.f64;
	// fsub f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 - ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4CF58"))) PPC_WEAK_FUNC(sub_82A4CF58);
PPC_FUNC_IMPL(__imp__sub_82A4CF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a4cfb4
	if (!ctx.cr6.eq) goto loc_82A4CFB4;
loc_82A4CF88:
	// bl 0x82a52350
	ctx.lr = 0x82A4CF8C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4CFAC;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a4d028
	goto loc_82A4D028;
loc_82A4CFB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4cf88
	if (ctx.cr6.eq) goto loc_82A4CF88;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a608d0
	ctx.lr = 0x82A4CFF4;
	sub_82A608D0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82a4d018
	if (ctx.cr0.lt) goto loc_82A4D018;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82a4d024
	goto loc_82A4D024;
loc_82A4D018:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A4D024;
	sub_82A5FB48(ctx, base);
loc_82A4D024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A4D028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D040"))) PPC_WEAK_FUNC(sub_82A4D040);
PPC_FUNC_IMPL(__imp__sub_82A4D040) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4d0b4
	if (ctx.cr0.eq) goto loc_82A4D0B4;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82A4D05C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a4d094
	if (ctx.cr6.eq) goto loc_82A4D094;
loc_82A4D068:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4d094
	if (ctx.cr0.eq) goto loc_82A4D094;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4d094
	if (!ctx.cr0.eq) goto loc_82A4D094;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4d068
	if (!ctx.cr6.eq) goto loc_82A4D068;
loc_82A4D094:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4d05c
	if (!ctx.cr0.eq) goto loc_82A4D05C;
loc_82A4D0B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D0C0"))) PPC_WEAK_FUNC(sub_82A4D0C0);
PPC_FUNC_IMPL(__imp__sub_82A4D0C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a4f568
	ctx.lr = 0x82A4D0E0;
	sub_82A4F568(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A4D0F0:
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a4d0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4D0F0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82A4D100:
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// slw r8,r9,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// bne 0x82a4d100
	if (!ctx.cr0.eq) goto loc_82A4D100;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x82a4d14c
	if (!ctx.cr6.eq) goto loc_82A4D14C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x82a4d14c
	goto loc_82A4D14C;
loc_82A4D140:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4d16c
	if (ctx.cr6.eq) goto loc_82A4D16C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A4D14C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r10,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r10,29
	ctx.r6.u64 = ctx.r10.u32 & 0x7;
	// slw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a4d140
	if (!ctx.cr0.eq) goto loc_82A4D140;
loc_82A4D16C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82a4d1a0
	goto loc_82A4D1A0;
loc_82A4D178:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r8,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a4d1ac
	if (!ctx.cr0.eq) goto loc_82A4D1AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82A4D1A0:
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x82a4d178
	if (!ctx.cr0.eq) goto loc_82A4D178;
	// b 0x82a4d1b8
	goto loc_82A4D1B8;
loc_82A4D1AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A4D1B8:
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a4d1cc
	if (ctx.cr6.eq) goto loc_82A4D1CC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A4D1CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A4D1E8"))) PPC_WEAK_FUNC(sub_82A4D1E8);
PPC_FUNC_IMPL(__imp__sub_82A4D1E8) {
	PPC_FUNC_PROLOGUE();
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a56658
	sub_82A56658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D1F8"))) PPC_WEAK_FUNC(sub_82A4D1F8);
PPC_FUNC_IMPL(__imp__sub_82A4D1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4D200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a4d220
	if (!ctx.cr6.eq) goto loc_82A4D220;
loc_82A4D218:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4d250
	goto loc_82A4D250;
loc_82A4D220:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a4d258
	if (!ctx.cr6.eq) goto loc_82A4D258;
	// bl 0x82a52350
	ctx.lr = 0x82A4D22C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4D24C;
	sub_82A580B0(ctx, base);
loc_82A4D24C:
	// li r3,22
	ctx.r3.s64 = 22;
loc_82A4D250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
loc_82A4D258:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a4d278
	if (ctx.cr6.eq) goto loc_82A4D278;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82a4d278
	if (ctx.cr6.lt) goto loc_82A4D278;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82A4D274;
	sub_82A4EA80(ctx, base);
	// b 0x82a4d218
	goto loc_82A4D218;
loc_82A4D278:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82A4D284;
	sub_82A4EFB0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a4d2b8
	if (!ctx.cr6.eq) goto loc_82A4D2B8;
	// bl 0x82a52350
	ctx.lr = 0x82A4D290;
	sub_82A52350(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82A4D294:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4D2B0;
	sub_82A580B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a4d250
	goto loc_82A4D250;
loc_82A4D2B8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82a4d24c
	if (!ctx.cr6.lt) goto loc_82A4D24C;
	// bl 0x82a52350
	ctx.lr = 0x82A4D2C4;
	sub_82A52350(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82a4d294
	goto loc_82A4D294;
}

__attribute__((alias("__imp__sub_82A4D2D0"))) PPC_WEAK_FUNC(sub_82A4D2D0);
PPC_FUNC_IMPL(__imp__sub_82A4D2D0) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a4d374
	if (ctx.cr6.eq) goto loc_82A4D374;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a4d320
	if (!ctx.cr6.eq) goto loc_82A4D320;
	// bl 0x82a52350
	ctx.lr = 0x82A4D2F8;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4D318;
	sub_82A580B0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82a4d378
	goto loc_82A4D378;
loc_82A4D320:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4d354
	if (!ctx.cr6.eq) goto loc_82A4D354;
	// bl 0x82a52350
	ctx.lr = 0x82A4D32C;
	sub_82A52350(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82A4D330:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4D34C;
	sub_82A580B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a4d378
	goto loc_82A4D378;
loc_82A4D354:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82a4d368
	if (!ctx.cr6.lt) goto loc_82A4D368;
	// bl 0x82a52350
	ctx.lr = 0x82A4D360;
	sub_82A52350(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82a4d330
	goto loc_82A4D330;
loc_82A4D368:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82a4f820
	ctx.lr = 0x82A4D374;
	sub_82A4F820(ctx, base);
loc_82A4D374:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4D378:
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

__attribute__((alias("__imp__sub_82A4D390"))) PPC_WEAK_FUNC(sub_82A4D390);
PPC_FUNC_IMPL(__imp__sub_82A4D390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-1840
	ctx.r11.s64 = ctx.r11.s64 + -1840;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a4d3cc
	if (!ctx.cr6.gt) goto loc_82A4D3CC;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r10,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r4.s64;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82a4d3e8
	goto loc_82A4D3E8;
loc_82A4D3CC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fmul f0,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82a4d3e8
	if (!ctx.cr6.eq) goto loc_82A4D3E8;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A4D3E8:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmadd f0,f12,f0,f6
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// bne cr6,0x82a4d468
	if (!ctx.cr6.eq) goto loc_82A4D468;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfdx f13,r10,r11
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
loc_82A4D468:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// lfdx f12,r10,r11
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fadd f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fsel f1,f1,f13,f0
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D488"))) PPC_WEAK_FUNC(sub_82A4D488);
PPC_FUNC_IMPL(__imp__sub_82A4D488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r11,r11,-1840
	ctx.r11.s64 = ctx.r11.s64 + -1840;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a4d4c4
	if (!ctx.cr6.gt) goto loc_82A4D4C4;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fsub f12,f12,f13
	ctx.f12.f64 = ctx.f12.f64 - ctx.f13.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmul f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fsqrt f12,f0
	ctx.f12.f64 = sqrt(ctx.f0.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// b 0x82a4d4d8
	goto loc_82A4D4D8;
loc_82A4D4C4:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmul f0,f13,f13
	ctx.f0.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A4D4D8:
	// lfd f12,80(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,72(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// fmadd f5,f12,f0,f11
	ctx.f5.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64;
	// lfd f12,120(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// lfd f11,64(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// fadd f4,f12,f0
	ctx.f4.f64 = ctx.f12.f64 + ctx.f0.f64;
	// lfd f12,112(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,56(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,48(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// lfdx f3,r10,r9
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fmadd f11,f5,f0,f11
	ctx.f11.f64 = ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fmadd f12,f4,f0,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmadd f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fmadd f12,f12,f0,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmadd f11,f11,f0,f8
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64;
	// fmadd f12,f12,f0,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f7.f64;
	// fmul f11,f11,f0
	ctx.f11.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fmadd f0,f12,f0,f6
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64;
	// fmul f12,f11,f13
	ctx.f12.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fdiv f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fadd f0,f0,f3
	ctx.f0.f64 = ctx.f0.f64 + ctx.f3.f64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D550"))) PPC_WEAK_FUNC(sub_82A4D550);
PPC_FUNC_IMPL(__imp__sub_82A4D550) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a4d390
	sub_82A4D390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4D558"))) PPC_WEAK_FUNC(sub_82A4D558);
PPC_FUNC_IMPL(__imp__sub_82A4D558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82A4D560;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a4d5a8
	if (!ctx.cr6.eq) goto loc_82A4D5A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a4d5a8
	if (ctx.cr6.eq) goto loc_82A4D5A8;
loc_82A4D57C:
	// bl 0x82a52350
	ctx.lr = 0x82A4D580;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4D5A0;
	sub_82A580B0(ctx, base);
loc_82A4D5A0:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
loc_82A4D5A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a4d57c
	if (ctx.cr6.eq) goto loc_82A4D57C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a4d57c
	if (ctx.cr6.eq) goto loc_82A4D57C;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82a4d5a0
	if (ctx.cr6.lt) goto loc_82A4D5A0;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r23,r1,80
	ctx.r23.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,208
	ctx.r24.s64 = ctx.r1.s64 + 208;
loc_82A4D5DC:
	// subf r11,r26,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r26.s64;
	// twllei r27,0
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82a4d694
	if (ctx.cr6.gt) goto loc_82A4D694;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82a4d678
	if (!ctx.cr6.gt) goto loc_82A4D678;
	// add r28,r26,r27
	ctx.r28.u64 = ctx.r26.u64 + ctx.r27.u64;
loc_82A4D604:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82a4d63c
	if (ctx.cr6.gt) goto loc_82A4D63C;
loc_82A4D614:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d630
	if (!ctx.cr6.gt) goto loc_82A4D630;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82A4D630:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82a4d614
	if (!ctx.cr6.gt) goto loc_82A4D614;
loc_82A4D63C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a4d66c
	if (ctx.cr6.eq) goto loc_82A4D66C;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_82A4D650:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82a4d650
	if (!ctx.cr0.eq) goto loc_82A4D650;
loc_82A4D66C:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82a4d604
	if (ctx.cr6.gt) goto loc_82A4D604;
loc_82A4D678:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// addi r23,r23,-4
	ctx.r23.s64 = ctx.r23.s64 + -4;
	// blt 0x82a4d5a0
	if (ctx.cr0.lt) goto loc_82A4D5A0;
	// lwz r26,0(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// b 0x82a4d5dc
	goto loc_82A4D5DC;
loc_82A4D694:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d6e8
	if (!ctx.cr6.gt) goto loc_82A4D6E8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a4d6e8
	if (ctx.cr6.eq) goto loc_82A4D6E8;
	// subf r9,r29,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r29.s64;
loc_82A4D6CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82a4d6cc
	if (!ctx.cr0.eq) goto loc_82A4D6CC;
loc_82A4D6E8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d730
	if (!ctx.cr6.gt) goto loc_82A4D730;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a4d730
	if (ctx.cr6.eq) goto loc_82A4D730;
	// subf r9,r28,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r28.s64;
loc_82A4D714:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82a4d714
	if (!ctx.cr0.eq) goto loc_82A4D714;
loc_82A4D730:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d778
	if (!ctx.cr6.gt) goto loc_82A4D778;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a4d778
	if (ctx.cr6.eq) goto loc_82A4D778;
	// subf r9,r28,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r28.s64;
loc_82A4D75C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82a4d75c
	if (!ctx.cr0.eq) goto loc_82A4D75C;
loc_82A4D778:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82A4D780:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82a4d7b4
	if (!ctx.cr6.gt) goto loc_82A4D7B4;
loc_82A4D788:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82a4d7b4
	if (!ctx.cr6.lt) goto loc_82A4D7B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d788
	if (!ctx.cr6.gt) goto loc_82A4D788;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82a4d7d8
	if (ctx.cr6.gt) goto loc_82A4D7D8;
loc_82A4D7B4:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82a4d7d8
	if (ctx.cr6.gt) goto loc_82A4D7D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a4d7b4
	if (!ctx.cr6.gt) goto loc_82A4D7B4;
loc_82A4D7D8:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82a4d7fc
	if (!ctx.cr6.gt) goto loc_82A4D7FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a4d7d8
	if (ctx.cr6.gt) goto loc_82A4D7D8;
loc_82A4D7FC:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82a4d840
	if (ctx.cr6.gt) goto loc_82A4D840;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82a4d830
	if (ctx.cr6.eq) goto loc_82A4D830;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82A4D814:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82a4d814
	if (!ctx.cr0.eq) goto loc_82A4D814;
loc_82A4D830:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a4d780
	if (!ctx.cr6.eq) goto loc_82A4D780;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82a4d780
	goto loc_82A4D780;
loc_82A4D840:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a4d878
	if (!ctx.cr6.lt) goto loc_82A4D878;
loc_82A4D84C:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82a4d878
	if (!ctx.cr6.gt) goto loc_82A4D878;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a4d84c
	if (ctx.cr6.eq) goto loc_82A4D84C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a4d89c
	if (ctx.cr6.lt) goto loc_82A4D89C;
loc_82A4D878:
	// subf r30,r27,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r27.s64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82a4d89c
	if (!ctx.cr6.gt) goto loc_82A4D89C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82A4D894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a4d878
	if (ctx.cr6.eq) goto loc_82A4D878;
loc_82A4D89C:
	// subf r11,r31,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r10,r26,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r26.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a4d8d8
	if (ctx.cr6.lt) goto loc_82A4D8D8;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a4d8c8
	if (!ctx.cr6.lt) goto loc_82A4D8C8;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
loc_82A4D8C8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82a4d678
	if (!ctx.cr6.lt) goto loc_82A4D678;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// b 0x82a4d5dc
	goto loc_82A4D5DC;
loc_82A4D8D8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82a4d8f4
	if (!ctx.cr6.lt) goto loc_82A4D8F4;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
loc_82A4D8F4:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a4d678
	if (!ctx.cr6.lt) goto loc_82A4D678;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// b 0x82a4d5dc
	goto loc_82A4D5DC;
}

__attribute__((alias("__imp__sub_82A4D908"))) PPC_WEAK_FUNC(sub_82A4D908);
PPC_FUNC_IMPL(__imp__sub_82A4D908) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4d930
	if (!ctx.cr0.eq) goto loc_82A4D930;
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4d96c
	if (!ctx.cr0.eq) goto loc_82A4D96C;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4d96c
	if (!ctx.cr6.eq) goto loc_82A4D96C;
loc_82A4D930:
	// fctid f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82a4d96c
	if (!ctx.cr6.eq) goto loc_82A4D96C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16672(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16672);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctid f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82a4d964
	if (!ctx.cr6.eq) goto loc_82A4D964;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82A4D964:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A4D96C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4D978"))) PPC_WEAK_FUNC(sub_82A4D978);
PPC_FUNC_IMPL(__imp__sub_82A4D978) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,32752
	ctx.r9.s64 = 2146435072;
	// stfd f31,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f31.u64);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lis r10,-16
	ctx.r10.s64 = -1048576;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a4da00
	if (!ctx.cr6.eq) goto loc_82A4DA00;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4da3c
	if (!ctx.cr6.eq) goto loc_82A4DA3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f13,16368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4d9e4
	if (!ctx.cr6.gt) goto loc_82A4D9E4;
loc_82A4D9D8:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f0,704(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4D9E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a4d9f8
	if (!ctx.cr6.lt) goto loc_82A4D9F8;
loc_82A4D9EC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4D9F8:
	// stfd f13,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f13.u64);
	// b 0x82a4dae0
	goto loc_82A4DAE0;
loc_82A4DA00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a4da3c
	if (!ctx.cr6.eq) goto loc_82A4DA3C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4da3c
	if (!ctx.cr6.eq) goto loc_82A4DA3C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f13,16368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a4d9ec
	if (ctx.cr6.gt) goto loc_82A4D9EC;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a4d9d8
	if (ctx.cr6.lt) goto loc_82A4D9D8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfd f0,712(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 712);
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4DA3C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a4da74
	if (!ctx.cr6.eq) goto loc_82A4DA74;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4dae0
	if (!ctx.cr6.eq) goto loc_82A4DAE0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x82a4d9d8
	if (ctx.cr6.gt) goto loc_82A4D9D8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f13,16368(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fsel f0,f31,f13,f0
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4DA74:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a4dae0
	if (!ctx.cr6.eq) goto loc_82A4DAE0;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4dae0
	if (!ctx.cr6.eq) goto loc_82A4DAE0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a4d908
	ctx.lr = 0x82A4DA90;
	sub_82A4D908(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a4dab8
	if (!ctx.cr6.gt) goto loc_82A4DAB8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f0,704(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
	// bne cr6,0x82a4dadc
	if (!ctx.cr6.eq) goto loc_82A4DADC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4DAB8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82a4dad4
	if (!ctx.cr6.lt) goto loc_82A4DAD4;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a4dadc
	if (!ctx.cr6.eq) goto loc_82A4DADC;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f0,736(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 736);
	// b 0x82a4dadc
	goto loc_82A4DADC;
loc_82A4DAD4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16368(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
loc_82A4DADC:
	// stfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
loc_82A4DAE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DB00"))) PPC_WEAK_FUNC(sub_82A4DB00);
PPC_FUNC_IMPL(__imp__sub_82A4DB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a6173c
	ctx.lr = 0x82A4DB14;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// stfd f28,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f28.u64);
	// stfd f29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f29.u64);
	// lfd f27,16376(r11)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bne cr6,0x82a4db44
	if (!ctx.cr6.eq) goto loc_82A4DB44;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16368(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DB44:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x82a4db98
	if (!ctx.cr6.eq) goto loc_82A4DB98;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4d908
	ctx.lr = 0x82A4DB54;
	sub_82A4D908(ctx, base);
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x82a4db78
	if (!ctx.cr6.lt) goto loc_82A4DB78;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfd f1,704(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
	// bne cr6,0x82a4dfd0
	if (!ctx.cr6.eq) goto loc_82A4DFD0;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82a4e1f8
	ctx.lr = 0x82A4DB74;
	sub_82A4E1F8(ctx, base);
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DB78:
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x82a4db98
	if (!ctx.cr6.gt) goto loc_82A4DB98;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a4db90
	if (!ctx.cr6.eq) goto loc_82A4DB90;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DB90:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DB98:
	// lhz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 192);
	// lhz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82a4df5c
	if (ctx.cr6.eq) goto loc_82A4DF5C;
	// rlwinm r10,r9,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// beq cr6,0x82a4df5c
	if (ctx.cr6.eq) goto loc_82A4DF5C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// lfd f26,16368(r11)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fmr f25,f26
	ctx.f25.f64 = ctx.f26.f64;
	// bge cr6,0x82a4dbfc
	if (!ctx.cr6.lt) goto loc_82A4DBFC;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4d908
	ctx.lr = 0x82A4DBD4;
	sub_82A4D908(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a4dbf0
	if (ctx.cr6.eq) goto loc_82A4DBF0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a4dbf8
	if (ctx.cr6.eq) goto loc_82A4DBF8;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f1,712(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 712);
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DBF0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f25,16864(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16864);
loc_82A4DBF8:
	// fneg f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = ctx.f28.u64 ^ 0x8000000000000000;
loc_82A4DBFC:
	// fabs f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f0,-1712(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -1712);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a4dc4c
	if (!ctx.cr6.gt) goto loc_82A4DC4C;
	// fcmpu cr6,f29,f27
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// bge cr6,0x82a4dc1c
	if (!ctx.cr6.lt) goto loc_82A4DC1C;
	// fdiv f28,f26,f28
	ctx.f28.f64 = ctx.f26.f64 / ctx.f28.f64;
loc_82A4DC1C:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// ble cr6,0x82a4dc34
	if (!ctx.cr6.gt) goto loc_82A4DC34;
loc_82A4DC24:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f0,704(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
loc_82A4DC2C:
	// fmul f1,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64 * ctx.f25.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DC34:
	// fcmpu cr6,f28,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bge cr6,0x82a4dc44
	if (!ctx.cr6.lt) goto loc_82A4DC44;
loc_82A4DC3C:
	// fmul f1,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64 * ctx.f27.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DC44:
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DC4C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a61610
	ctx.lr = 0x82A4DC58;
	sub_82A61610(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfd f0,5944(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 5944);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x82a4dd04
	if (ctx.cr6.gt) goto loc_82A4DD04;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a4d908
	ctx.lr = 0x82A4DC74;
	sub_82A4D908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4dd04
	if (ctx.cr0.eq) goto loc_82A4DD04;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4d908
	ctx.lr = 0x82A4DC84;
	sub_82A4D908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4dd04
	if (ctx.cr0.eq) goto loc_82A4DD04;
	// fcmpu cr6,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f27.f64);
	// ble cr6,0x82a4dd04
	if (!ctx.cr6.gt) goto loc_82A4DD04;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f29
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x82a4dccc
	if (ctx.cr6.eq) goto loc_82A4DCCC;
loc_82A4DCB4:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4dcc0
	if (ctx.cr0.eq) goto loc_82A4DCC0;
	// fmul f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 * ctx.f30.f64;
loc_82A4DCC0:
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmul f30,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f30.f64 * ctx.f30.f64;
	// bne 0x82a4dcb4
	if (!ctx.cr0.eq) goto loc_82A4DCB4;
loc_82A4DCCC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a61538
	ctx.lr = 0x82A4DCD4;
	sub_82A61538(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x82a4dcf0
	if (!ctx.cr6.gt) goto loc_82A4DCF0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lfd f0,704(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82a4dc2c
	goto loc_82A4DC2C;
loc_82A4DCF0:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x82a4df3c
	if (!ctx.cr6.lt) goto loc_82A4DF3C;
	// fmul f0,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f27
	ctx.f1.f64 = ctx.f0.f64 * ctx.f27.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DD04:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,5608
	ctx.r31.s64 = ctx.r10.s64 + 5608;
	// lfd f0,72(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 72);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82a4dd20
	if (ctx.cr6.gt) goto loc_82A4DD20;
	// li r11,9
	ctx.r11.s64 = 9;
loc_82A4DD20:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82a4dd38
	if (ctx.cr6.gt) goto loc_82A4DD38;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82A4DD38:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lfdx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x82a4dd50
	if (ctx.cr6.gt) goto loc_82A4DD50;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82A4DD50:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blt 0x82a4dd68
	if (ctx.cr0.lt) goto loc_82A4DD68;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82A4DD68:
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f31,20552(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 20552);
	// bne cr6,0x82a4dd90
	if (!ctx.cr6.eq) goto loc_82A4DD90;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a55c68
	ctx.lr = 0x82A4DD80;
	sub_82A55C68(ctx, base);
	// lfd f0,216(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// b 0x82a4de20
	goto loc_82A4DE20;
loc_82A4DD90:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfd f11,256(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 256);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// lfd f10,248(r31)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfd f9,240(r31)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 240);
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// lfd f8,232(r31)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lfd f12,224(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfd f7,216(r31)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 216);
	// lfdx f0,r10,r8
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r8.u32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fsub f6,f30,f0
	ctx.f6.f64 = ctx.f30.f64 - ctx.f0.f64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fadd f5,f0,f30
	ctx.f5.f64 = ctx.f0.f64 + ctx.f30.f64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,16728(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16728);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfdx f4,r11,r7
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r7.u32);
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fsub f6,f6,f4
	ctx.f6.f64 = ctx.f6.f64 - ctx.f4.f64;
	// fdiv f6,f6,f5
	ctx.f6.f64 = ctx.f6.f64 / ctx.f5.f64;
	// fmul f13,f6,f13
	ctx.f13.f64 = ctx.f6.f64 * ctx.f13.f64;
	// fmul f6,f13,f13
	ctx.f6.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fmul f12,f13,f12
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fmadd f11,f6,f11,f10
	ctx.f11.f64 = ctx.f6.f64 * ctx.f11.f64 + ctx.f10.f64;
	// fmadd f11,f11,f6,f9
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmadd f11,f11,f6,f8
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fmul f11,f11,f6
	ctx.f11.f64 = ctx.f11.f64 * ctx.f6.f64;
	// fmul f11,f11,f13
	ctx.f11.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f12,f11,f7,f12
	ctx.f12.f64 = ctx.f11.f64 * ctx.f7.f64 + ctx.f12.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
loc_82A4DE20:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmul f11,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f13.f64 * ctx.f29.f64;
	// lfd f12,320(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 320);
	// lfd f13,16504(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16504);
	// fmul f10,f29,f13
	ctx.f10.f64 = ctx.f29.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f9,f29,f10
	ctx.f9.f64 = ctx.f29.f64 - ctx.f10.f64;
	// fmadd f11,f9,f0,f11
	ctx.f11.f64 = ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fmul f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fctid f9,f9
	ctx.f9.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// fmul f9,f9,f31
	ctx.f9.f64 = ctx.f9.f64 * ctx.f31.f64;
	// fmadd f0,f10,f0,f9
	ctx.f0.f64 = ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fsub f11,f11,f9
	ctx.f11.f64 = ctx.f11.f64 - ctx.f9.f64;
	// fmul f10,f0,f13
	ctx.f10.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fmul f10,f10,f31
	ctx.f10.f64 = ctx.f10.f64 * ctx.f31.f64;
	// fsub f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 - ctx.f10.f64;
	// fadd f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 + ctx.f11.f64;
	// fmul f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fctid f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fmul f11,f11,f31
	ctx.f11.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fadd f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 + ctx.f11.f64;
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fmul f13,f10,f13
	ctx.f13.f64 = ctx.f10.f64 * ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82a4dc24
	if (ctx.cr6.gt) goto loc_82A4DC24;
	// lfd f12,328(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 328);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82a4dc3c
	if (ctx.cr6.lt) goto loc_82A4DC3C;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ble cr6,0x82a4dec4
	if (!ctx.cr6.gt) goto loc_82A4DEC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsub f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 - ctx.f31.f64;
loc_82A4DEC4:
	// lfd f13,312(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 312);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfd f12,304(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 304);
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// fmadd f8,f0,f13,f12
	ctx.f8.f64 = ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64;
	// lfd f13,296(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 296);
	// lfd f12,288(r31)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfd f11,280(r31)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// lfd f10,272(r31)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 272);
	// rlwinm r9,r8,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfd f9,264(r31)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 264);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// fmadd f13,f8,f0,f13
	ctx.f13.f64 = ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f8,r11,r8
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// fmadd f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// fmadd f13,f13,f0,f11
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64;
	// fmadd f13,f13,f0,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64;
	// fmadd f13,f13,f0,f9
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64;
	// fmadd f0,f13,f0,f26
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f26.f64;
	// fmul f31,f0,f8
	ctx.f31.f64 = ctx.f0.f64 * ctx.f8.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a61538
	ctx.lr = 0x82A4DF38;
	sub_82A61538(ctx, base);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_82A4DF3C:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// bgt cr6,0x82a4dc24
	if (ctx.cr6.gt) goto loc_82A4DC24;
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// blt cr6,0x82a4dc3c
	if (ctx.cr6.lt) goto loc_82A4DC3C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a61510
	ctx.lr = 0x82A4DF54;
	sub_82A61510(ctx, base);
	// fmul f1,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f1.f64 * ctx.f25.f64;
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DF5C:
	// rlwinm r10,r11,0,17,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82a4df80
	if (!ctx.cr6.eq) goto loc_82A4DF80;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a4dfcc
	if (!ctx.cr0.eq) goto loc_82A4DFCC;
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4dfcc
	if (!ctx.cr6.eq) goto loc_82A4DFCC;
loc_82A4DF80:
	// rlwinm r11,r9,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82a4dfa4
	if (!ctx.cr6.eq) goto loc_82A4DFA4;
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi. r9,r9,13
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a4dfcc
	if (!ctx.cr0.eq) goto loc_82A4DFCC;
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a4dfcc
	if (!ctx.cr6.eq) goto loc_82A4DFCC;
loc_82A4DFA4:
	// cmplwi cr6,r10,32760
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32760, ctx.xer);
	// beq cr6,0x82a4dfcc
	if (ctx.cr6.eq) goto loc_82A4DFCC;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// beq cr6,0x82a4dfcc
	if (ctx.cr6.eq) goto loc_82A4DFCC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82a4d978
	ctx.lr = 0x82A4DFC4;
	sub_82A4D978(ctx, base);
	// lfd f1,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82a4dfd0
	goto loc_82A4DFD0;
loc_82A4DFCC:
	// fadd f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64 + ctx.f29.f64;
loc_82A4DFD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82a61788
	ctx.lr = 0x82A4DFDC;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4DFF0"))) PPC_WEAK_FUNC(sub_82A4DFF0);
PPC_FUNC_IMPL(__imp__sub_82A4DFF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a4e004
	goto loc_82A4E004;
loc_82A4DFF4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4e014
	if (ctx.cr6.eq) goto loc_82A4E014;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
loc_82A4E004:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4dff4
	if (ctx.cr0.eq) goto loc_82A4DFF4;
loc_82A4E014:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82a4e024
	if (!ctx.cr6.lt) goto loc_82A4E024;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82a4e02c
	goto loc_82A4E02C;
loc_82A4E024:
	// ble cr6,0x82a4e02c
	if (!ctx.cr6.gt) goto loc_82A4E02C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A4E02C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E038"))) PPC_WEAK_FUNC(sub_82A4E038);
PPC_FUNC_IMPL(__imp__sub_82A4E038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f0,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// addi r11,r11,-1704
	ctx.r11.s64 = ctx.r11.s64 + -1704;
	// lfd f30,16368(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// lfd f11,8(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// fmul f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f9,48(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f31,56(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// fctid f11,f13
	ctx.f11.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f1,f13,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fnmsub f11,f10,f13,f0
	ctx.f11.f64 = -(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64);
	// fctidz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f10.u64);
	// ld r9,-32(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f9,f9,f13,f11
	ctx.f9.f64 = -(ctx.f9.f64 * ctx.f13.f64 - ctx.f11.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64;
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64;
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f5.f64;
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = ctx.f8.f64 * ctx.f13.f64 + ctx.f4.f64;
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64;
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = ctx.f6.f64 * ctx.f13.f64 + ctx.f2.f64;
	// fmadd f4,f5,f13,f31
	ctx.f4.f64 = ctx.f5.f64 * ctx.f13.f64 + ctx.f31.f64;
	// fmadd f3,f4,f13,f30
	ctx.f3.f64 = ctx.f4.f64 * ctx.f13.f64 + ctx.f30.f64;
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x82a4e0e8
	if (ctx.cr6.eq) goto loc_82A4E0E8;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82A4E0E8:
	// ld r10,-24(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fmul f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x82a4e10c
	if (ctx.cr6.eq) goto loc_82A4E10C;
	// lfd f13,16(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f0,712(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 712);
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_82A4E10C:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E118"))) PPC_WEAK_FUNC(sub_82A4E118);
PPC_FUNC_IMPL(__imp__sub_82A4E118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r11,r11,-1704
	ctx.r11.s64 = ctx.r11.s64 + -1704;
	// lfd f31,16368(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16368);
	// lfd f13,0(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f9,48(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f1,56(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fctid f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fsub f11,f13,f11
	ctx.f11.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// ld r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f10,f10,f11,f0
	ctx.f10.f64 = -(ctx.f10.f64 * ctx.f11.f64 - ctx.f0.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fnmsub f9,f9,f11,f10
	ctx.f9.f64 = -(ctx.f9.f64 * ctx.f11.f64 - ctx.f10.f64);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64;
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64;
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f5.f64;
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = ctx.f8.f64 * ctx.f13.f64 + ctx.f4.f64;
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = ctx.f7.f64 * ctx.f13.f64 + ctx.f3.f64;
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = ctx.f6.f64 * ctx.f13.f64 + ctx.f2.f64;
	// fmadd f4,f5,f13,f1
	ctx.f4.f64 = ctx.f5.f64 * ctx.f13.f64 + ctx.f1.f64;
	// fmadd f3,f4,f13,f31
	ctx.f3.f64 = ctx.f4.f64 * ctx.f13.f64 + ctx.f31.f64;
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x82a4e1c4
	if (ctx.cr6.eq) goto loc_82A4E1C4;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_82A4E1C4:
	// lfs f11,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x82a4e1dc
	if (!ctx.cr6.eq) goto loc_82A4E1DC;
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4E1DC:
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
	// lfd f0,712(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 712);
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E1F8"))) PPC_WEAK_FUNC(sub_82A4E1F8);
PPC_FUNC_IMPL(__imp__sub_82A4E1F8) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,16376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E230"))) PPC_WEAK_FUNC(sub_82A4E230);
PPC_FUNC_IMPL(__imp__sub_82A4E230) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,16376(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// rlwimi r8,r11,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E260"))) PPC_WEAK_FUNC(sub_82A4E260);
PPC_FUNC_IMPL(__imp__sub_82A4E260) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E280"))) PPC_WEAK_FUNC(sub_82A4E280);
PPC_FUNC_IMPL(__imp__sub_82A4E280) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82a4e2ac
	if (!ctx.cr6.eq) goto loc_82A4E2AC;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4e2b4
	if (!ctx.cr0.eq) goto loc_82A4E2B4;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4e2b4
	if (!ctx.cr6.eq) goto loc_82A4E2B4;
loc_82A4E2AC:
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x82a4e2bc
	if (!ctx.cr6.eq) goto loc_82A4E2BC;
loc_82A4E2B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A4E2BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E2C8"))) PPC_WEAK_FUNC(sub_82A4E2C8);
PPC_FUNC_IMPL(__imp__sub_82A4E2C8) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82a4e320
	if (!ctx.cr6.eq) goto loc_82A4E320;
	// bl 0x82a61588
	ctx.lr = 0x82A4E2EC;
	sub_82A61588(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a4e318
	if (ctx.cr6.eq) goto loc_82A4E318;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a4e310
	if (ctx.cr6.eq) goto loc_82A4E310;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82a4e38c
	goto loc_82A4E38C;
loc_82A4E310:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82a4e38c
	goto loc_82A4E38C;
loc_82A4E318:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82a4e38c
	goto loc_82A4E38C;
loc_82A4E320:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4e35c
	if (!ctx.cr6.eq) goto loc_82A4E35C;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a4e344
	if (!ctx.cr0.eq) goto loc_82A4E344;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4e35c
	if (ctx.cr6.eq) goto loc_82A4E35C;
loc_82A4E344:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x82a4e38c
	goto loc_82A4E38C;
loc_82A4E35C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfd f0,16376(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82a4e380
	if (!ctx.cr6.eq) goto loc_82A4E380;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x82a4e38c
	goto loc_82A4E38C;
loc_82A4E380:
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
loc_82A4E38C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E3A0"))) PPC_WEAK_FUNC(sub_82A4E3A0);
PPC_FUNC_IMPL(__imp__sub_82A4E3A0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a4e3e4
	if (!ctx.cr6.eq) goto loc_82A4E3E4;
	// bl 0x82a52350
	ctx.lr = 0x82A4E3BC;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4E3DC;
	sub_82A580B0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82a4e4fc
	goto loc_82A4E4FC;
loc_82A4E3E4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a4e418
	if (!ctx.cr6.eq) goto loc_82A4E418;
loc_82A4E3EC:
	// bl 0x82a52350
	ctx.lr = 0x82A4E3F0;
	sub_82A52350(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82A4E3F4:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4E410;
	sub_82A580B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a4e4fc
	goto loc_82A4E4FC;
loc_82A4E418:
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4e444
	if (ctx.cr6.gt) goto loc_82A4E444;
loc_82A4E438:
	// bl 0x82a52350
	ctx.lr = 0x82A4E43C;
	sub_82A52350(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82a4e3f4
	goto loc_82A4E3F4;
loc_82A4E444:
	// addi r11,r6,-2
	ctx.r11.s64 = ctx.r6.s64 + -2;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// bgt cr6,0x82a4e3ec
	if (ctx.cr6.gt) goto loc_82A4E3EC;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a4e474
	if (ctx.cr6.eq) goto loc_82A4E474;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82A4E474:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A4E478:
	// divwu r10,r3,r6
	ctx.r10.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r6
	ctx.r3.u32 = ctx.r3.u32 / ctx.r6.u32;
	// twllei r6,0
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82a4e4a0
	if (!ctx.cr6.gt) goto loc_82A4E4A0;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// b 0x82a4e4a4
	goto loc_82A4E4A4;
loc_82A4E4A0:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82A4E4A4:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4e4c0
	if (ctx.cr6.eq) goto loc_82A4E4C0;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a4e478
	if (ctx.cr6.lt) goto loc_82A4E478;
loc_82A4E4C0:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a4e4d0
	if (ctx.cr6.lt) goto loc_82A4E4D0;
	// sth r31,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r31.u16);
	// b 0x82a4e438
	goto loc_82A4E438;
loc_82A4E4D0:
	// sth r31,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r31.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82A4E4D8:
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a4e4d8
	if (ctx.cr6.lt) goto loc_82A4E4D8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4E4FC:
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

__attribute__((alias("__imp__sub_82A4E510"))) PPC_WEAK_FUNC(sub_82A4E510);
PPC_FUNC_IMPL(__imp__sub_82A4E510) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// bne cr6,0x82a4e528
	if (!ctx.cr6.eq) goto loc_82A4E528;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a4e528
	if (!ctx.cr6.lt) goto loc_82A4E528;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82a4e3a0
	sub_82A4E3A0(ctx, base);
	return;
loc_82A4E528:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82a4e3a0
	sub_82A4E3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4E530"))) PPC_WEAK_FUNC(sub_82A4E530);
PPC_FUNC_IMPL(__imp__sub_82A4E530) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82A4E53C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82a4e55c
	if (ctx.cr0.eq) goto loc_82A4E55C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82a4e53c
	if (!ctx.cr0.eq) goto loc_82A4E53C;
loc_82A4E55C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A4E57C:
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a4e57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4E57C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E590"))) PPC_WEAK_FUNC(sub_82A4E590);
PPC_FUNC_IMPL(__imp__sub_82A4E590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// addi r11,r11,-1584
	ctx.r11.s64 = ctx.r11.s64 + -1584;
	// lfs f13,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4e5cc
	if (!ctx.cr6.gt) goto loc_82A4E5CC;
	// lfd f12,48(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a4e5c0
	if (!ctx.cr6.gt) goto loc_82A4E5C0;
	// lfd f0,8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82a4e65c
	goto loc_82A4E65C;
loc_82A4E5C0:
	// li r10,2
	ctx.r10.s64 = 2;
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
	// b 0x82a4e5d0
	goto loc_82A4E5D0;
loc_82A4E5CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A4E5D0:
	// lfd f12,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a4e5f0
	if (!ctx.cr6.gt) goto loc_82A4E5F0;
	// lfd f12,40(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fadd f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 + ctx.f0.f64;
	// fmsub f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64;
	// fdiv f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 / ctx.f11.f64;
loc_82A4E5F0:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f10.f64;
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64;
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64;
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64;
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// ble cr6,0x82a4e64c
	if (!ctx.cr6.gt) goto loc_82A4E64C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A4E64C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// lfdx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_82A4E65C:
	// ld r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f1,f0,f13
	ctx.f1.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E678"))) PPC_WEAK_FUNC(sub_82A4E678);
PPC_FUNC_IMPL(__imp__sub_82A4E678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// addi r11,r11,-1584
	ctx.r11.s64 = ctx.r11.s64 + -1584;
	// lfs f0,168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x82a4e6d0
	if (!ctx.cr6.eq) goto loc_82A4E6D0;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82a4e6c8
	if (!ctx.cr6.eq) goto loc_82A4E6C8;
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a4e6c0
	if (ctx.cr0.eq) goto loc_82A4E6C0;
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// blr 
	return;
loc_82A4E6C0:
	// lfd f1,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// blr 
	return;
loc_82A4E6C8:
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82a4e788
	goto loc_82A4E788;
loc_82A4E6D0:
	// fabs f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4e6f4
	if (!ctx.cr6.gt) goto loc_82A4E6F4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// li r10,2
	ctx.r10.s64 = 2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A4E6F4:
	// fdiv f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// lfd f13,24(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a4e71c
	if (!ctx.cr6.gt) goto loc_82A4E71C;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f12,176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fadd f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fmsub f0,f13,f0,f12
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64;
	// fdiv f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 / ctx.f11.f64;
loc_82A4E71C:
	// fmul f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lfd f12,72(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f13,80(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfd f11,112(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f9,104(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f8,56(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// lfd f7,96(r11)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f6,88(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// fmadd f13,f13,f5,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f12.f64;
	// fadd f12,f11,f5
	ctx.f12.f64 = ctx.f11.f64 + ctx.f5.f64;
	// fmadd f13,f13,f5,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f10.f64;
	// fmadd f12,f12,f5,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f9.f64;
	// fmadd f13,f13,f5,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64 + ctx.f8.f64;
	// fmadd f12,f12,f5,f7
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64;
	// fmul f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 * ctx.f5.f64;
	// fmadd f12,f12,f5,f6
	ctx.f12.f64 = ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// ble cr6,0x82a4e778
	if (!ctx.cr6.gt) goto loc_82A4E778;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82A4E778:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfdx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
loc_82A4E788:
	// lfd f13,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsel f1,f2,f0,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E7A8"))) PPC_WEAK_FUNC(sub_82A4E7A8);
PPC_FUNC_IMPL(__imp__sub_82A4E7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,259
	ctx.r3.u64 = ctx.r11.u64 & 259;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E7C8"))) PPC_WEAK_FUNC(sub_82A4E7C8);
PPC_FUNC_IMPL(__imp__sub_82A4E7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E7E8"))) PPC_WEAK_FUNC(sub_82A4E7E8);
PPC_FUNC_IMPL(__imp__sub_82A4E7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E808"))) PPC_WEAK_FUNC(sub_82A4E808);
PPC_FUNC_IMPL(__imp__sub_82A4E808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E828"))) PPC_WEAK_FUNC(sub_82A4E828);
PPC_FUNC_IMPL(__imp__sub_82A4E828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E848"))) PPC_WEAK_FUNC(sub_82A4E848);
PPC_FUNC_IMPL(__imp__sub_82A4E848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E868"))) PPC_WEAK_FUNC(sub_82A4E868);
PPC_FUNC_IMPL(__imp__sub_82A4E868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,27,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E888"))) PPC_WEAK_FUNC(sub_82A4E888);
PPC_FUNC_IMPL(__imp__sub_82A4E888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,263
	ctx.r3.u64 = ctx.r11.u64 & 263;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E8A8"))) PPC_WEAK_FUNC(sub_82A4E8A8);
PPC_FUNC_IMPL(__imp__sub_82A4E8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// andi. r3,r11,343
	ctx.r3.u64 = ctx.r11.u64 & 343;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E8C8"))) PPC_WEAK_FUNC(sub_82A4E8C8);
PPC_FUNC_IMPL(__imp__sub_82A4E8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,472
	ctx.r11.s64 = ctx.r11.s64 + 472;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E8E8"))) PPC_WEAK_FUNC(sub_82A4E8E8);
PPC_FUNC_IMPL(__imp__sub_82A4E8E8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4E8EC:
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82a4e8ec
	if (!ctx.cr0.eq) goto loc_82A4E8EC;
loc_82A4E8FC:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4e918
	if (ctx.cr6.eq) goto loc_82A4E918;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a4e8fc
	if (!ctx.cr6.eq) goto loc_82A4E8FC;
loc_82A4E918:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E930"))) PPC_WEAK_FUNC(sub_82A4E930);
PPC_FUNC_IMPL(__imp__sub_82A4E930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr. r0,r5
	ctx.r0.u64 = ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// ble 0x82a4e974
	if (!ctx.cr0.gt) goto loc_82A4E974;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x82a4e958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_82A4E958;
	// blr 
	return;
loc_82A4E958:
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x82a4e958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_82A4E958;
	// blr 
	return;
loc_82A4E974:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4E980"))) PPC_WEAK_FUNC(sub_82A4E980);
PPC_FUNC_IMPL(__imp__sub_82A4E980) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4E984:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a4e984
	if (!ctx.cr6.eq) goto loc_82A4E984;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a4e9b8
	goto loc_82A4E9B8;
loc_82A4E99C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beqlr 
	if (ctx.cr0.eq) return;
loc_82A4E9B8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a4e99c
	if (!ctx.cr6.eq) goto loc_82A4E99C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_14"))) PPC_WEAK_FUNC(__savegprlr_14);
PPC_FUNC_IMPL(__imp____savegprlr_14) {
	PPC_FUNC_PROLOGUE();
	// std r14,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r14.u64);
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_15"))) PPC_WEAK_FUNC(__savegprlr_15);
PPC_FUNC_IMPL(__imp____savegprlr_15) {
	PPC_FUNC_PROLOGUE();
	// std r15,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r15.u64);
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_16"))) PPC_WEAK_FUNC(__savegprlr_16);
PPC_FUNC_IMPL(__imp____savegprlr_16) {
	PPC_FUNC_PROLOGUE();
	// std r16,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r16.u64);
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_17"))) PPC_WEAK_FUNC(__savegprlr_17);
PPC_FUNC_IMPL(__imp____savegprlr_17) {
	PPC_FUNC_PROLOGUE();
	// std r17,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r17.u64);
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_18"))) PPC_WEAK_FUNC(__savegprlr_18);
PPC_FUNC_IMPL(__imp____savegprlr_18) {
	PPC_FUNC_PROLOGUE();
	// std r18,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r18.u64);
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_19"))) PPC_WEAK_FUNC(__savegprlr_19);
PPC_FUNC_IMPL(__imp____savegprlr_19) {
	PPC_FUNC_PROLOGUE();
	// std r19,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r19.u64);
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_20"))) PPC_WEAK_FUNC(__savegprlr_20);
PPC_FUNC_IMPL(__imp____savegprlr_20) {
	PPC_FUNC_PROLOGUE();
	// std r20,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.r20.u64);
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_21"))) PPC_WEAK_FUNC(__savegprlr_21);
PPC_FUNC_IMPL(__imp____savegprlr_21) {
	PPC_FUNC_PROLOGUE();
	// std r21,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r21.u64);
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_22"))) PPC_WEAK_FUNC(__savegprlr_22);
PPC_FUNC_IMPL(__imp____savegprlr_22) {
	PPC_FUNC_PROLOGUE();
	// std r22,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r22.u64);
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_23"))) PPC_WEAK_FUNC(__savegprlr_23);
PPC_FUNC_IMPL(__imp____savegprlr_23) {
	PPC_FUNC_PROLOGUE();
	// std r23,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r23.u64);
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_24"))) PPC_WEAK_FUNC(__savegprlr_24);
PPC_FUNC_IMPL(__imp____savegprlr_24) {
	PPC_FUNC_PROLOGUE();
	// std r24,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_25"))) PPC_WEAK_FUNC(__savegprlr_25);
PPC_FUNC_IMPL(__imp____savegprlr_25) {
	PPC_FUNC_PROLOGUE();
	// std r25,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_26"))) PPC_WEAK_FUNC(__savegprlr_26);
PPC_FUNC_IMPL(__imp____savegprlr_26) {
	PPC_FUNC_PROLOGUE();
	// std r26,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_27"))) PPC_WEAK_FUNC(__savegprlr_27);
PPC_FUNC_IMPL(__imp____savegprlr_27) {
	PPC_FUNC_PROLOGUE();
	// std r27,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_28"))) PPC_WEAK_FUNC(__savegprlr_28);
PPC_FUNC_IMPL(__imp____savegprlr_28) {
	PPC_FUNC_PROLOGUE();
	// std r28,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_29"))) PPC_WEAK_FUNC(__savegprlr_29);
PPC_FUNC_IMPL(__imp____savegprlr_29) {
	PPC_FUNC_PROLOGUE();
	// std r29,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_30"))) PPC_WEAK_FUNC(__savegprlr_30);
PPC_FUNC_IMPL(__imp____savegprlr_30) {
	PPC_FUNC_PROLOGUE();
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____savegprlr_31"))) PPC_WEAK_FUNC(__savegprlr_31);
PPC_FUNC_IMPL(__imp____savegprlr_31) {
	PPC_FUNC_PROLOGUE();
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_14"))) PPC_WEAK_FUNC(__restgprlr_14);
PPC_FUNC_IMPL(__imp____restgprlr_14) {
	PPC_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_15"))) PPC_WEAK_FUNC(__restgprlr_15);
PPC_FUNC_IMPL(__imp____restgprlr_15) {
	PPC_FUNC_PROLOGUE();
	// ld r15,-144(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_16"))) PPC_WEAK_FUNC(__restgprlr_16);
PPC_FUNC_IMPL(__imp____restgprlr_16) {
	PPC_FUNC_PROLOGUE();
	// ld r16,-136(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_17"))) PPC_WEAK_FUNC(__restgprlr_17);
PPC_FUNC_IMPL(__imp____restgprlr_17) {
	PPC_FUNC_PROLOGUE();
	// ld r17,-128(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_18"))) PPC_WEAK_FUNC(__restgprlr_18);
PPC_FUNC_IMPL(__imp____restgprlr_18) {
	PPC_FUNC_PROLOGUE();
	// ld r18,-120(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_19"))) PPC_WEAK_FUNC(__restgprlr_19);
PPC_FUNC_IMPL(__imp____restgprlr_19) {
	PPC_FUNC_PROLOGUE();
	// ld r19,-112(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_20"))) PPC_WEAK_FUNC(__restgprlr_20);
PPC_FUNC_IMPL(__imp____restgprlr_20) {
	PPC_FUNC_PROLOGUE();
	// ld r20,-104(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_21"))) PPC_WEAK_FUNC(__restgprlr_21);
PPC_FUNC_IMPL(__imp____restgprlr_21) {
	PPC_FUNC_PROLOGUE();
	// ld r21,-96(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_22"))) PPC_WEAK_FUNC(__restgprlr_22);
PPC_FUNC_IMPL(__imp____restgprlr_22) {
	PPC_FUNC_PROLOGUE();
	// ld r22,-88(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_23"))) PPC_WEAK_FUNC(__restgprlr_23);
PPC_FUNC_IMPL(__imp____restgprlr_23) {
	PPC_FUNC_PROLOGUE();
	// ld r23,-80(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_24"))) PPC_WEAK_FUNC(__restgprlr_24);
PPC_FUNC_IMPL(__imp____restgprlr_24) {
	PPC_FUNC_PROLOGUE();
	// ld r24,-72(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_25"))) PPC_WEAK_FUNC(__restgprlr_25);
PPC_FUNC_IMPL(__imp____restgprlr_25) {
	PPC_FUNC_PROLOGUE();
	// ld r25,-64(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_26"))) PPC_WEAK_FUNC(__restgprlr_26);
PPC_FUNC_IMPL(__imp____restgprlr_26) {
	PPC_FUNC_PROLOGUE();
	// ld r26,-56(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_27"))) PPC_WEAK_FUNC(__restgprlr_27);
PPC_FUNC_IMPL(__imp____restgprlr_27) {
	PPC_FUNC_PROLOGUE();
	// ld r27,-48(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_28"))) PPC_WEAK_FUNC(__restgprlr_28);
PPC_FUNC_IMPL(__imp____restgprlr_28) {
	PPC_FUNC_PROLOGUE();
	// ld r28,-40(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_29"))) PPC_WEAK_FUNC(__restgprlr_29);
PPC_FUNC_IMPL(__imp____restgprlr_29) {
	PPC_FUNC_PROLOGUE();
	// ld r29,-32(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_30"))) PPC_WEAK_FUNC(__restgprlr_30);
PPC_FUNC_IMPL(__imp____restgprlr_30) {
	PPC_FUNC_PROLOGUE();
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp____restgprlr_31"))) PPC_WEAK_FUNC(__restgprlr_31);
PPC_FUNC_IMPL(__imp____restgprlr_31) {
	PPC_FUNC_PROLOGUE();
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4EA74"))) PPC_WEAK_FUNC(sub_82A4EA74);
PPC_FUNC_IMPL(__imp__sub_82A4EA74) {
	PPC_FUNC_PROLOGUE();
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// mr r12,r5
	ctx.r12.u64 = ctx.r5.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A4EA80"))) PPC_WEAK_FUNC(sub_82A4EA80);
PPC_FUNC_IMPL(__imp__sub_82A4EA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// clrlwi r6,r3,29
	ctx.r6.u64 = ctx.r3.u32 & 0x7;
	// dcbt r0,r4
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,8
	ctx.xer.ca = ctx.r6.u32 <= 8;
	ctx.r6.s64 = 8 - ctx.r6.s64;
	// beq 0x82a4eae4
	if (ctx.cr0.eq) goto loc_82A4EAE4;
	// cmplw r5,r6
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble 0x82a4eb00
	if (!ctx.cr0.gt) goto loc_82A4EB00;
	// cmplwi r6,4
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq 0x82a4ead0
	if (ctx.cr0.eq) goto loc_82A4EAD0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4EAB8:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4eab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EAB8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82a4eae4
	goto loc_82A4EAE4;
loc_82A4EAD0:
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_82A4EAE4:
	// clrlwi r6,r4,29
	ctx.r6.u64 = ctx.r4.u32 & 0x7;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// cmplwi cr1,r6,0
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// cmplwi cr7,r5,128
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// beq cr6,0x82a4ecc8
	if (ctx.cr6.eq) goto loc_82A4ECC8;
	// bne cr1,0x82a4edf8
	if (!ctx.cr1.eq) goto loc_82A4EDF8;
	// bge cr7,0x82a4eb9c
	if (!ctx.cr7.lt) goto loc_82A4EB9C;
loc_82A4EB00:
	// dcbtst r0,r3
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_82A4EB0C:
	// rlwinm r7,r5,29,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0xF;
	// clrlwi r6,r5,29
	ctx.r6.u64 = ctx.r5.u32 & 0x7;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x82a4eb30
	if (ctx.cr1.eq) goto loc_82A4EB30;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82A4EB24:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4eb24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EB24;
loc_82A4EB30:
	// cmplwi cr1,r6,4
	ctx.cr1.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x82a4eb54
	if (ctx.cr6.eq) goto loc_82A4EB54;
	// beq cr1,0x82a4eb5c
	if (ctx.cr1.eq) goto loc_82A4EB5C;
	// addi r3,r3,7
	ctx.r3.s64 = ctx.r3.s64 + 7;
	// addi r4,r4,7
	ctx.r4.s64 = ctx.r4.s64 + 7;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4EB48:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4eb48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EB48;
loc_82A4EB54:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4EB5C:
	// clrlwi r6,r3,30
	ctx.r6.u64 = ctx.r3.u32 & 0x3;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x82a4eb78
	if (!ctx.cr0.eq) goto loc_82A4EB78;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4EB78:
	// lbz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r7,9(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// lbz r6,10(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// stb r6,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r6.u8);
	// stb r5,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r5.u8);
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4EB9C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// addi r4,r4,-8
	ctx.r4.s64 = ctx.r4.s64 + -8;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82a4ebcc
	if (ctx.cr0.eq) goto loc_82A4EBCC;
	// rlwinm r7,r6,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82A4EBC0:
	// ldu r7,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// stdu r7,8(r3)
	ea = 8 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ebc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EBC0;
loc_82A4EBCC:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82a4eb0c
	if (ctx.cr0.eq) goto loc_82A4EB0C;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A4EBFC:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82a4ebfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EBFC;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4EC1C:
	// ld r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// ld r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 24);
	// std r6,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r6.u64);
	// ld r6,32(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// std r7,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r7.u64);
	// ld r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// ld r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 48);
	// std r6,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r6.u64);
	// ld r6,56(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 56);
	// std r7,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, ctx.r7.u64);
	// ld r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,48(r3)
	PPC_STORE_U64(ctx.r3.u32 + 48, ctx.r8.u64);
	// ld r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 72);
	// std r6,56(r3)
	PPC_STORE_U64(ctx.r3.u32 + 56, ctx.r6.u64);
	// ld r6,80(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 80);
	// std r7,64(r3)
	PPC_STORE_U64(ctx.r3.u32 + 64, ctx.r7.u64);
	// ld r7,88(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 88);
	// std r8,72(r3)
	PPC_STORE_U64(ctx.r3.u32 + 72, ctx.r8.u64);
	// ld r8,96(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 96);
	// std r6,80(r3)
	PPC_STORE_U64(ctx.r3.u32 + 80, ctx.r6.u64);
	// ld r6,104(r4)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r4.u32 + 104);
	// std r7,88(r3)
	PPC_STORE_U64(ctx.r3.u32 + 88, ctx.r7.u64);
	// ld r7,112(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 112);
	// std r8,96(r3)
	PPC_STORE_U64(ctx.r3.u32 + 96, ctx.r8.u64);
	// ld r8,120(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 120);
	// std r6,104(r3)
	PPC_STORE_U64(ctx.r3.u32 + 104, ctx.r6.u64);
	// ldu r6,128(r4)
	ea = 128 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// std r7,112(r3)
	PPC_STORE_U64(ctx.r3.u32 + 112, ctx.r7.u64);
	// std r8,120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 120, ctx.r8.u64);
	// stdu r6,128(r3)
	ea = 128 + ctx.r3.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r3.u32 = ea;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82a4ecb0
	if (!ctx.cr0.lt) goto loc_82A4ECB0;
	// dcbt r9,r4
	// bdnz 0x82a4ec1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EC1C;
	// b 0x82a4eb0c
	goto loc_82A4EB0C;
loc_82A4ECB0:
	// beq cr1,0x82a4ecc0
	if (ctx.cr1.eq) goto loc_82A4ECC0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82A4ECC0:
	// bdnz 0x82a4ec1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EC1C;
	// b 0x82a4eb0c
	goto loc_82A4EB0C;
loc_82A4ECC8:
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// bge cr7,0x82a4ed20
	if (!ctx.cr7.lt) goto loc_82A4ED20;
	// dcbtst r0,r3
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_82A4ECD8:
	// rlwinm r7,r5,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1F;
	// clrlwi r6,r5,30
	ctx.r6.u64 = ctx.r5.u32 & 0x3;
	// cmplwi cr1,r7,0
	ctx.cr1.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr1,0x82a4ecfc
	if (ctx.cr1.eq) goto loc_82A4ECFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82A4ECF0:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ecf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ECF0;
loc_82A4ECFC:
	// beq cr6,0x82a4ed18
	if (ctx.cr6.eq) goto loc_82A4ED18;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4ED0C:
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r7,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ed0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ED0C;
loc_82A4ED18:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4ED20:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82a4ed4c
	if (ctx.cr0.eq) goto loc_82A4ED4C;
	// rlwinm r7,r6,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82A4ED40:
	// lwzu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ed40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ED40;
loc_82A4ED4C:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82a4ecd8
	if (ctx.cr0.eq) goto loc_82A4ECD8;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A4ED7C:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82a4ed7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ED7C;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4ED9C:
	// li r6,8
	ctx.r6.s64 = 8;
loc_82A4EDA0:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// lwz r0,4(r4)
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r0,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r0.u32);
	// lwzu r0,16(r4)
	ea = 16 + ctx.r4.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stwu r0,16(r3)
	ea = 16 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r0.u32);
	ctx.r3.u32 = ea;
	// bne 0x82a4eda0
	if (!ctx.cr0.eq) goto loc_82A4EDA0;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82a4ede0
	if (!ctx.cr0.lt) goto loc_82A4EDE0;
	// dcbt r9,r4
	// bdnz 0x82a4ed9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ED9C;
	// b 0x82a4ecd8
	goto loc_82A4ECD8;
loc_82A4EDE0:
	// beq cr1,0x82a4edf0
	if (ctx.cr1.eq) goto loc_82A4EDF0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82A4EDF0:
	// bdnz 0x82a4ed9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4ED9C;
	// b 0x82a4ecd8
	goto loc_82A4ECD8;
loc_82A4EDF8:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bge cr7,0x82a4ee2c
	if (!ctx.cr7.lt) goto loc_82A4EE2C;
	// dcbtst r0,r3
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82A4EE08:
	// clrlwi r6,r5,25
	ctx.r6.u64 = ctx.r5.u32 & 0x7F;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// beq 0x82a4ee24
	if (ctx.cr0.eq) goto loc_82A4EE24;
loc_82A4EE18:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ee18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EE18;
loc_82A4EE24:
	// ld r3,-8(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82A4EE2C:
	// clrlwi r6,r3,25
	ctx.r6.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// subfic r6,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r6.s64 = 128 - ctx.r6.s64;
	// beq 0x82a4ee54
	if (ctx.cr0.eq) goto loc_82A4EE54;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4EE48:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// stbu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x82a4ee48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EE48;
loc_82A4EE54:
	// rlwinm r6,r5,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82a4ee08
	if (ctx.cr0.eq) goto loc_82A4EE08;
	// addi r10,r5,127
	ctx.r10.s64 = ctx.r5.s64 + 127;
	// clrlwi r8,r5,25
	ctx.r8.u64 = ctx.r5.u32 & 0x7F;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A4EE84:
	// dcbt r9,r4
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// bdnz 0x82a4ee84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EE84;
	// add r12,r4,r5
	ctx.r12.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r11,r9,r12
	ctx.r11.s64 = ctx.r12.s64 - ctx.r9.s64;
	// add r12,r3,r5
	ctx.r12.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A4EEA4:
	// li r6,32
	ctx.r6.s64 = 32;
loc_82A4EEA8:
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r7,1(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1, ctx.r7.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82a4eea8
	if (!ctx.cr0.eq) goto loc_82A4EEA8;
	// cmplw r4,r11
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge 0x82a4eef0
	if (!ctx.cr0.lt) goto loc_82A4EEF0;
	// dcbt r9,r4
	// bdnz 0x82a4eea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EEA4;
	// b 0x82a4ee08
	goto loc_82A4EE08;
loc_82A4EEF0:
	// beq cr1,0x82a4ef00
	if (ctx.cr1.eq) goto loc_82A4EF00;
	// li r8,-1
	ctx.r8.s64 = -1;
	// dcbtst r8,r12
	// cmplwi cr1,r8,0
	ctx.cr1.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
loc_82A4EF00:
	// bdnz 0x82a4eea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EEA4;
	// b 0x82a4ee08
	goto loc_82A4EE08;
}

__attribute__((alias("__imp__sub_82A4EF08"))) PPC_WEAK_FUNC(sub_82A4EF08);
PPC_FUNC_IMPL(__imp__sub_82A4EF08) {
	PPC_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x82a4ef2c
	goto loc_82A4EF2C;
loc_82A4EF18:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,0(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A4EF2C:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82a4ef18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82A4EF18;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82a4ef5c
	if (ctx.cr0.eq) goto loc_82A4EF5C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x82a4ef80
	if (!ctx.cr0.eq) goto loc_82A4EF80;
loc_82A4EF48:
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz+ 0x82a4ef48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EF48;
loc_82A4EF5C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_82A4EF68:
	// lbz r0,0(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r0,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r0.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bdnz+ 0x82a4ef68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EF68;
	// blr 
	return;
loc_82A4EF80:
	// lbz r7,3(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,1(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82a4ef80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EF80;
	// b 0x82a4ef5c
	goto loc_82A4EF5C;
}

__attribute__((alias("__imp__sub_82A4EFB0"))) PPC_WEAK_FUNC(sub_82A4EFB0);
PPC_FUNC_IMPL(__imp__sub_82A4EFB0) {
	PPC_FUNC_PROLOGUE();
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// ori r6,r3,0
	ctx.r6.u64 = ctx.r3.u64 | 0;
	// b 0x82a4efcc
	goto loc_82A4EFCC;
loc_82A4EFC0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A4EFCC:
	// andi. r0,r6,3
	ctx.r0.u64 = ctx.r6.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82a4efc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82A4EFC0;
	// rlwimi r4,r4,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm. r0,r5,28,4,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// rlwimi r4,r4,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// beq+ 0x82a4f000
	if (ctx.cr0.eq) goto loc_82A4F000;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82A4EFE8:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r4,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r4.u32);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// stw r4,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz+ 0x82a4efe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4EFE8;
loc_82A4F000:
	// rlwinm. r0,r5,30,30,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82a4f02c
	if (ctx.cr0.eq) goto loc_82A4F02C;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82a4f02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A4F02C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdz- 0x82a4f02c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A4F02C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_82A4F02C:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
	// stb r4,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_82A4F040"))) PPC_WEAK_FUNC(sub_82A4F040);
PPC_FUNC_IMPL(__imp__sub_82A4F040) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r4.u8);
	// bdzlr- 
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) return;
}

__attribute__((alias("__imp__sub_82A4F048"))) PPC_WEAK_FUNC(sub_82A4F048);
PPC_FUNC_IMPL(__imp__sub_82A4F048) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4F050"))) PPC_WEAK_FUNC(sub_82A4F050);
PPC_FUNC_IMPL(__imp__sub_82A4F050) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-31973
	ctx.r8.s64 = -2095382528;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r30,r8,992
	ctx.r30.s64 = ctx.r8.s64 + 992;
	// addi r11,r11,12640
	ctx.r11.s64 = ctx.r11.s64 + 12640;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// lis r9,-32090
	ctx.r9.s64 = -2103050240;
	// stw r11,992(r8)
	PPC_STORE_U32(ctx.r8.u32 + 992, ctx.r11.u32);
	// lis r31,-32090
	ctx.r31.s64 = -2103050240;
	// addi r10,r10,9520
	ctx.r10.s64 = ctx.r10.s64 + 9520;
	// addi r9,r9,9504
	ctx.r9.s64 = ctx.r9.s64 + 9504;
	// addi r11,r31,9512
	ctx.r11.s64 = ctx.r31.s64 + 9512;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-32090
	ctx.r3.s64 = -2103050240;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32090
	ctx.r4.s64 = -2103050240;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-32090
	ctx.r5.s64 = -2103050240;
	// addi r10,r3,9376
	ctx.r10.s64 = ctx.r3.s64 + 9376;
	// addi r9,r4,12640
	ctx.r9.s64 = ctx.r4.s64 + 12640;
	// addi r11,r5,12560
	ctx.r11.s64 = ctx.r5.s64 + 12560;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-32090
	ctx.r6.s64 = -2103050240;
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32090
	ctx.r7.s64 = -2103050240;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-32090
	ctx.r8.s64 = -2103050240;
	// addi r10,r6,9408
	ctx.r10.s64 = ctx.r6.s64 + 9408;
	// addi r9,r7,9192
	ctx.r9.s64 = ctx.r7.s64 + 9192;
	// addi r11,r8,9032
	ctx.r11.s64 = ctx.r8.s64 + 9032;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4F0E8"))) PPC_WEAK_FUNC(sub_82A4F0E8);
PPC_FUNC_IMPL(__imp__sub_82A4F0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a4f050
	sub_82A4F050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F0F0"))) PPC_WEAK_FUNC(sub_82A4F0F0);
PPC_FUNC_IMPL(__imp__sub_82A4F0F0) {
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
	// bl 0x82a58060
	ctx.lr = 0x82A4F108;
	sub_82A58060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a58018
	ctx.lr = 0x82A4F110;
	sub_82A58018(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r3,255
	ctx.r3.s64 = 255;
	// lwz r11,-1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82A4F138"))) PPC_WEAK_FUNC(sub_82A4F138);
PPC_FUNC_IMPL(__imp__sub_82A4F138) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8312e91c
	sub_8312E91C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F140"))) PPC_WEAK_FUNC(sub_82A4F140);
PPC_FUNC_IMPL(__imp__sub_82A4F140) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82a583d0
	sub_82A583D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F148"))) PPC_WEAK_FUNC(sub_82A4F148);
PPC_FUNC_IMPL(__imp__sub_82A4F148) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x82a58270
	sub_82A58270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F150"))) PPC_WEAK_FUNC(sub_82A4F150);
PPC_FUNC_IMPL(__imp__sub_82A4F150) {
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
	// b 0x82a4f188
	goto loc_82A4F188;
loc_82A4F170:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4f184
	if (ctx.cr6.eq) goto loc_82A4F184;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A4F184:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82A4F188:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a4f170
	if (ctx.cr6.lt) goto loc_82A4F170;
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

__attribute__((alias("__imp__sub_82A4F1A8"))) PPC_WEAK_FUNC(sub_82A4F1A8);
PPC_FUNC_IMPL(__imp__sub_82A4F1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15056(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15056);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4F1B8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a583d0
	ctx.lr = 0x82A4F1D4;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-24368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a4f288
	if (ctx.cr6.eq) goto loc_82A4F288;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lwz r11,-24372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a4f200
	if (!ctx.cr6.eq) goto loc_82A4F200;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312e91c
	ctx.lr = 0x82A4F200;
	sub_8312E91C(ctx, base);
loc_82A4F200:
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-24372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24372, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r28,-24376(r8)
	PPC_STORE_U8(ctx.r8.u32 + -24376, ctx.r28.u8);
	// bne cr6,0x82a4f274
	if (!ctx.cr6.eq) goto loc_82A4F274;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r30,1548(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// lwz r29,1552(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x82a4f260
	if (ctx.cr0.eq) goto loc_82A4F260;
loc_82A4F234:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4f260
	if (ctx.cr6.lt) goto loc_82A4F260;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4f258
	if (ctx.cr6.eq) goto loc_82A4F258;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A4F258:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4f234
	goto loc_82A4F234;
loc_82A4F260:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// addi r3,r10,-2500
	ctx.r3.s64 = ctx.r10.s64 + -2500;
	// bl 0x82a4f150
	ctx.lr = 0x82A4F274;
	sub_82A4F150(ctx, base);
loc_82A4F274:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r4,r11,-2480
	ctx.r4.s64 = ctx.r11.s64 + -2480;
	// addi r3,r10,-2484
	ctx.r3.s64 = ctx.r10.s64 + -2484;
	// bl 0x82a4f150
	ctx.lr = 0x82A4F288;
	sub_82A4F150(ctx, base);
loc_82A4F288:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82a4f2d0
	ctx.lr = 0x82A4F294;
	sub_82A4F2D0(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a4f2a8
	if (!ctx.cr6.eq) goto loc_82A4F2A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312e91c
	ctx.lr = 0x82A4F2A8;
	sub_8312E91C(ctx, base);
loc_82A4F2A8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F1B0"))) PPC_WEAK_FUNC(sub_82A4F1B0);
PPC_FUNC_IMPL(__imp__sub_82A4F1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4F1B8;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r28,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r28.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a583d0
	ctx.lr = 0x82A4F1D4;
	sub_82A583D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-24368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24368);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a4f288
	if (ctx.cr6.eq) goto loc_82A4F288;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lwz r11,-24372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24372);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a4f200
	if (!ctx.cr6.eq) goto loc_82A4F200;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312e91c
	ctx.lr = 0x82A4F200;
	sub_8312E91C(ctx, base);
loc_82A4F200:
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-24372(r9)
	PPC_STORE_U32(ctx.r9.u32 + -24372, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r28,-24376(r8)
	PPC_STORE_U8(ctx.r8.u32 + -24376, ctx.r28.u8);
	// bne cr6,0x82a4f274
	if (!ctx.cr6.eq) goto loc_82A4F274;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lwz r30,1548(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// lwz r29,1552(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1552);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// beq 0x82a4f260
	if (ctx.cr0.eq) goto loc_82A4F260;
loc_82A4F234:
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a4f260
	if (ctx.cr6.lt) goto loc_82A4F260;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4f258
	if (ctx.cr6.eq) goto loc_82A4F258;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A4F258:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a4f234
	goto loc_82A4F234;
loc_82A4F260:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r4,r11,-2488
	ctx.r4.s64 = ctx.r11.s64 + -2488;
	// addi r3,r10,-2500
	ctx.r3.s64 = ctx.r10.s64 + -2500;
	// bl 0x82a4f150
	ctx.lr = 0x82A4F274;
	sub_82A4F150(ctx, base);
loc_82A4F274:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r4,r11,-2480
	ctx.r4.s64 = ctx.r11.s64 + -2480;
	// addi r3,r10,-2484
	ctx.r3.s64 = ctx.r10.s64 + -2484;
	// bl 0x82a4f150
	ctx.lr = 0x82A4F288;
	sub_82A4F150(ctx, base);
loc_82A4F288:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82a4f2d0
	ctx.lr = 0x82A4F294;
	sub_82A4F2D0(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a4f2a8
	if (!ctx.cr6.eq) goto loc_82A4F2A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8312e91c
	ctx.lr = 0x82A4F2A8;
	sub_8312E91C(ctx, base);
loc_82A4F2A8:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F2B0"))) PPC_WEAK_FUNC(sub_82A4F2B0);
PPC_FUNC_IMPL(__imp__sub_82A4F2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,164(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82a4f2e8
	goto loc_82A4F2E8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A4F2E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a4f2f8
	if (ctx.cr6.eq) goto loc_82A4F2F8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a58270
	ctx.lr = 0x82A4F2F8;
	sub_82A58270(ctx, base);
loc_82A4F2F8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4F2D0"))) PPC_WEAK_FUNC(sub_82A4F2D0);
PPC_FUNC_IMPL(__imp__sub_82A4F2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a4f2f8
	if (ctx.cr6.eq) goto loc_82A4F2F8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a58270
	ctx.lr = 0x82A4F2F8;
	sub_82A58270(ctx, base);
loc_82A4F2F8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4F310"))) PPC_WEAK_FUNC(sub_82A4F310);
PPC_FUNC_IMPL(__imp__sub_82A4F310) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a4f1b0
	sub_82A4F1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F320"))) PPC_WEAK_FUNC(sub_82A4F320);
PPC_FUNC_IMPL(__imp__sub_82A4F320) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82a4f1b0
	sub_82A4F1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F330"))) PPC_WEAK_FUNC(sub_82A4F330);
PPC_FUNC_IMPL(__imp__sub_82A4F330) {
	PPC_FUNC_PROLOGUE();
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a4f1b0
	sub_82A4F1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F340"))) PPC_WEAK_FUNC(sub_82A4F340);
PPC_FUNC_IMPL(__imp__sub_82A4F340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a63378
	ctx.lr = 0x82A4F354;
	sub_82A63378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a63288
	ctx.lr = 0x82A4F35C;
	sub_82A63288(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580a0
	ctx.lr = 0x82A4F364;
	sub_82A580A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a58090
	ctx.lr = 0x82A4F36C;
	sub_82A58090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825d6ef8
	ctx.lr = 0x82A4F374;
	sub_825D6EF8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a63270
	ctx.lr = 0x82A4F37C;
	sub_82A63270(ctx, base);
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// addi r11,r11,-3296
	ctx.r11.s64 = ctx.r11.s64 + -3296;
	// stw r11,-1384(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1384, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4F3A0"))) PPC_WEAK_FUNC(sub_82A4F3A0);
PPC_FUNC_IMPL(__imp__sub_82A4F3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8312ec2c
	sub_8312EC2C(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F3A8"))) PPC_WEAK_FUNC(sub_82A4F3A8);
PPC_FUNC_IMPL(__imp__sub_82A4F3A8) {
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
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// lwz r3,-1376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1376);
	// bl 0x8312ec1c
	ctx.lr = 0x82A4F3C8;
	sub_8312EC1C(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a4f3e4
	if (!ctx.cr0.eq) goto loc_82A4F3E4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,-1376(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1376);
	// lwz r4,-24348(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24348);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8312ec3c
	ctx.lr = 0x82A4F3E4;
	sub_8312EC3C(ctx, base);
loc_82A4F3E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A4F400"))) PPC_WEAK_FUNC(sub_82A4F400);
PPC_FUNC_IMPL(__imp__sub_82A4F400) {
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
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r3,-1380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1380);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a4f440
	if (ctx.cr6.eq) goto loc_82A4F440;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-24340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1380, ctx.r11.u32);
loc_82A4F440:
	// lis r31,-31973
	ctx.r31.s64 = -2095382528;
	// lwz r3,-1376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1376);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a4f45c
	if (ctx.cr6.eq) goto loc_82A4F45C;
	// bl 0x8312ec4c
	ctx.lr = 0x82A4F454;
	sub_8312EC4C(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1376, ctx.r11.u32);
loc_82A4F45C:
	// bl 0x82a58200
	ctx.lr = 0x82A4F460;
	sub_82A58200(ctx, base);
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

__attribute__((alias("__imp__sub_82A4F478"))) PPC_WEAK_FUNC(sub_82A4F478);
PPC_FUNC_IMPL(__imp__sub_82A4F478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4F480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4be58
	ctx.lr = 0x82A4F488;
	sub_82A4BE58(ctx, base);
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-1380(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// bl 0x82a4f3a8
	ctx.lr = 0x82A4F498;
	sub_82A4F3A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a4f544
	if (!ctx.cr0.eq) goto loc_82A4F544;
	// lis r29,-31961
	ctx.r29.s64 = -2094596096;
	// lwz r3,-1380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-24344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4f550
	if (ctx.cr0.eq) goto loc_82A4F550;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a57ee0
	ctx.lr = 0x82A4F4DC;
	sub_82A57EE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,-1380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// lwz r11,-24344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24344);
	// beq 0x82a4f534
	if (ctx.cr0.eq) goto loc_82A4F534;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4f528
	if (ctx.cr0.eq) goto loc_82A4F528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82a6e450
	ctx.lr = 0x82A4F518;
	sub_82A6E450(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82a4f550
	goto loc_82A4F550;
loc_82A4F528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F530;
	sub_82A4FC60(ctx, base);
	// b 0x82a4f54c
	goto loc_82A4F54C;
loc_82A4F534:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a4f550
	goto loc_82A4F550;
loc_82A4F544:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82a4f550
	if (!ctx.cr6.eq) goto loc_82A4F550;
loc_82A4F54C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A4F550:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a47e60
	ctx.lr = 0x82A4F558;
	sub_82A47E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F568"))) PPC_WEAK_FUNC(sub_82A4F568);
PPC_FUNC_IMPL(__imp__sub_82A4F568) {
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
	// bl 0x82a4f478
	ctx.lr = 0x82A4F57C;
	sub_82A4F478(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a4f58c
	if (!ctx.cr0.eq) goto loc_82A4F58C;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82a4f0f0
	ctx.lr = 0x82A4F58C;
	sub_82A4F0F0(ctx, base);
loc_82A4F58C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A4F5A8"))) PPC_WEAK_FUNC(sub_82A4F5A8);
PPC_FUNC_IMPL(__imp__sub_82A4F5A8) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a4f644
	if (ctx.cr6.eq) goto loc_82A4F644;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f5d4
	if (ctx.cr6.eq) goto loc_82A4F5D4;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F5D4;
	sub_82A4FC60(ctx, base);
loc_82A4F5D4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f5e4
	if (ctx.cr6.eq) goto loc_82A4F5E4;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F5E4;
	sub_82A4FC60(ctx, base);
loc_82A4F5E4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f5f4
	if (ctx.cr6.eq) goto loc_82A4F5F4;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F5F4;
	sub_82A4FC60(ctx, base);
loc_82A4F5F4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f604
	if (ctx.cr6.eq) goto loc_82A4F604;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F604;
	sub_82A4FC60(ctx, base);
loc_82A4F604:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f614
	if (ctx.cr6.eq) goto loc_82A4F614;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F614;
	sub_82A4FC60(ctx, base);
loc_82A4F614:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4f624
	if (ctx.cr6.eq) goto loc_82A4F624;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F624;
	sub_82A4FC60(ctx, base);
loc_82A4F624:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a4f63c
	if (ctx.cr6.eq) goto loc_82A4F63C;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F63C;
	sub_82A4FC60(ctx, base);
loc_82A4F63C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4fc60
	ctx.lr = 0x82A4F644;
	sub_82A4FC60(ctx, base);
loc_82A4F644:
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

__attribute__((alias("__imp__sub_82A4F658"))) PPC_WEAK_FUNC(sub_82A4F658);
PPC_FUNC_IMPL(__imp__sub_82A4F658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4F660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r29,-31973
	ctx.r29.s64 = -2095382528;
	// lwz r11,-1380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82a4f6d4
	if (ctx.cr6.eq) goto loc_82A4F6D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a4f6b4
	if (!ctx.cr6.eq) goto loc_82A4F6B4;
	// lwz r3,-1376(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1376);
	// bl 0x8312ec1c
	ctx.lr = 0x82A4F68C;
	sub_8312EC1C(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a4f6b4
	if (ctx.cr0.eq) goto loc_82A4F6B4;
	// lwz r3,-1376(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1376);
	// lwz r31,-1380(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// bl 0x8312ec1c
	ctx.lr = 0x82A4F6A0;
	sub_8312EC1C(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A4F6B4:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,-1380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-24344(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4f5a8
	ctx.lr = 0x82A4F6D4;
	sub_82A4F5A8(ctx, base);
loc_82A4F6D4:
	// lwz r3,-1376(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -1376);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a4f6e8
	if (ctx.cr6.eq) goto loc_82A4F6E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8312ec3c
	ctx.lr = 0x82A4F6E8;
	sub_8312EC3C(ctx, base);
loc_82A4F6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F6F0"))) PPC_WEAK_FUNC(sub_82A4F6F0);
PPC_FUNC_IMPL(__imp__sub_82A4F6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4F6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lis r8,-31981
	ctx.r8.s64 = -2095906816;
	// addi r11,r11,-3168
	ctx.r11.s64 = ctx.r11.s64 + -3168;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lis r31,-31961
	ctx.r31.s64 = -2094596096;
	// stw r11,-24352(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24352, ctx.r11.u32);
	// lis r29,-31961
	ctx.r29.s64 = -2094596096;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r10,r10,-5092
	ctx.r10.s64 = ctx.r10.s64 + -5092;
	// addi r9,r9,-5060
	ctx.r9.s64 = ctx.r9.s64 + -5060;
	// addi r11,r8,-5044
	ctx.r11.s64 = ctx.r8.s64 + -5044;
	// stw r10,-24348(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24348, ctx.r10.u32);
	// stw r9,-24344(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24344, ctx.r9.u32);
	// stw r11,-24340(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24340, ctx.r11.u32);
	// bl 0x8312ec2c
	ctx.lr = 0x82A4F740;
	sub_8312EC2C(ctx, base);
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,-1376(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1376, ctx.r3.u32);
	// beq cr6,0x82a4f814
	if (ctx.cr6.eq) goto loc_82A4F814;
	// lwz r4,-24348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24348);
	// bl 0x8312ec3c
	ctx.lr = 0x82A4F758;
	sub_8312EC3C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4f814
	if (ctx.cr0.eq) goto loc_82A4F814;
	// bl 0x82a4f340
	ctx.lr = 0x82A4F764;
	sub_82A4F340(ctx, base);
	// bl 0x82a58180
	ctx.lr = 0x82A4F768;
	sub_82A58180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4f810
	if (ctx.cr0.eq) goto loc_82A4F810;
	// lis r11,-32091
	ctx.r11.s64 = -2103115776;
	// lwz r10,-24352(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24352);
	// addi r3,r11,-2648
	ctx.r3.s64 = ctx.r11.s64 + -2648;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A4F784;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-31973
	ctx.r30.s64 = -2095382528;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,-1380(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1380, ctx.r3.u32);
	// beq cr6,0x82a4f810
	if (ctx.cr6.eq) goto loc_82A4F810;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a57ee0
	ctx.lr = 0x82A4F7A0;
	sub_82A57EE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a4f810
	if (ctx.cr0.eq) goto loc_82A4F810;
	// lwz r3,-1380(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -1380);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,-24344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A4F7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a4f810
	if (ctx.cr0.eq) goto loc_82A4F810;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1032
	ctx.r11.s64 = ctx.r11.s64 + 1032;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82a6e450
	ctx.lr = 0x82A4F7DC;
	sub_82A6E450(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,-24364
	ctx.r10.s64 = ctx.r10.s64 + -24364;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,13264
	ctx.r11.s64 = ctx.r11.s64 + 13264;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82a48a20
	ctx.lr = 0x82A4F808;
	sub_82A48A20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a4f818
	goto loc_82A4F818;
loc_82A4F810:
	// bl 0x82a4f400
	ctx.lr = 0x82A4F814;
	sub_82A4F400(ctx, base);
loc_82A4F814:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4F818:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4F820"))) PPC_WEAK_FUNC(sub_82A4F820);
PPC_FUNC_IMPL(__imp__sub_82A4F820) {
	PPC_FUNC_PROLOGUE();
	// cmpw r3,r4
	ctx.cr0.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// beqlr- 
	if (ctx.cr0.eq) return;
	// bge+ 0x82a4f830
	if (!ctx.cr0.lt) goto loc_82A4F830;
	// b 0x82a4ea80
	sub_82A4EA80(ctx, base);
	return;
loc_82A4F830:
	// addi r0,r5,1
	ctx.r0.s64 = ctx.r5.s64 + 1;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// b 0x82a4f858
	goto loc_82A4F858;
loc_82A4F844:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_82A4F858:
	// andi. r0,r3,3
	ctx.r0.u64 = ctx.r3.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bdnzf eq,0x82a4f844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82A4F844;
	// rlwinm. r0,r5,30,2,31
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// beq- 0x82a4f888
	if (ctx.cr0.eq) goto loc_82A4F888;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// andi. r0,r4,3
	ctx.r0.u64 = ctx.r4.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// bne- 0x82a4f8ac
	if (!ctx.cr0.eq) goto loc_82A4F8AC;
loc_82A4F874:
	// lwz r7,-4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, ctx.r7.u32);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// bdnz+ 0x82a4f874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4F874;
loc_82A4F888:
	// andi. r0,r5,3
	ctx.r0.u64 = ctx.r5.u64 & 3;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// beqlr+ 
	if (ctx.cr0.eq) return;
loc_82A4F894:
	// lbz r0,-1(r4)
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stb r0,-1(r3)
	PPC_STORE_U8(ctx.r3.u32 + -1, ctx.r0.u8);
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz+ 0x82a4f894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4F894;
	// blr 
	return;
loc_82A4F8AC:
	// lbz r7,-1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + -1);
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// lbz r8,-2(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + -2);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// lbz r9,-3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + -3);
	// rlwimi r7,r9,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// lbz r10,-4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + -4);
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// bdnz 0x82a4f8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A4F8AC;
	// b 0x82a4f888
	goto loc_82A4F888;
}

__attribute__((alias("__imp__sub_82A4F8E0"))) PPC_WEAK_FUNC(sub_82A4F8E0);
PPC_FUNC_IMPL(__imp__sub_82A4F8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4F8E8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfd f31,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f31.u64);
	// ori r29,r11,65279
	ctx.r29.u64 = ctx.r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a62270
	ctx.lr = 0x82A4F914;
	sub_82A62270(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82a4f9a0
	if (!ctx.cr6.eq) goto loc_82A4F9A0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a61588
	ctx.lr = 0x82A4F930;
	sub_82A61588(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82a4f96c
	if (!ctx.cr0.gt) goto loc_82A4F96C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82a4fa94
	if (!ctx.cr6.gt) goto loc_82A4FA94;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82a4f96c
	if (!ctx.cr6.eq) goto loc_82A4F96C;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r3,25
	ctx.r3.s64 = 25;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x82a62028
	ctx.lr = 0x82A4F968;
	sub_82A62028(ctx, base);
	// b 0x82a4faa4
	goto loc_82A4FAA4;
loc_82A4F96C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f0,16368(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16368);
	// fadd f3,f31,f0
	ctx.f3.f64 = ctx.f31.f64 + ctx.f0.f64;
loc_82A4F98C:
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82a62180
	ctx.lr = 0x82A4F99C;
	sub_82A62180(ctx, base);
	// b 0x82a4faa4
	goto loc_82A4FAA4;
loc_82A4F9A0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f30,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x82a4fa94
	if (ctx.cr6.eq) goto loc_82A4FA94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a61610
	ctx.lr = 0x82A4F9BC;
	sub_82A61610(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82a4f9dc
	if (!ctx.cr6.lt) goto loc_82A4F9DC;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a4fa50
	if (ctx.cr6.lt) goto loc_82A4FA50;
	// b 0x82a4f9f0
	goto loc_82A4F9F0;
loc_82A4F9DC:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82a4f9fc
	if (ctx.cr6.gt) goto loc_82A4F9FC;
loc_82A4F9F0:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x82a4fa28
	if (!ctx.cr6.gt) goto loc_82A4FA28;
loc_82A4F9FC:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,704(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 704);
	// bl 0x82a4e1f8
	ctx.lr = 0x82A4FA0C;
	sub_82A4E1F8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82A4FA18:
	// li r3,17
	ctx.r3.s64 = 17;
loc_82A4FA1C:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
loc_82A4FA20:
	// fcfid f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(ctx.f0.s64);
	// b 0x82a4f98c
	goto loc_82A4F98C;
loc_82A4FA28:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82a4fa48
	if (!ctx.cr6.gt) goto loc_82A4FA48;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x82a61510
	ctx.lr = 0x82A4FA38;
	sub_82A61510(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82a4fa18
	goto loc_82A4FA18;
loc_82A4FA48:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x82a4fa68
	if (!ctx.cr6.lt) goto loc_82A4FA68;
loc_82A4FA50:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * ctx.f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82a4fa20
	goto loc_82A4FA20;
loc_82A4FA68:
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// bge cr6,0x82a4fa8c
	if (!ctx.cr6.lt) goto loc_82A4FA8C;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x82a61510
	ctx.lr = 0x82A4FA78;
	sub_82A61510(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82a4fa1c
	goto loc_82A4FA1C;
loc_82A4FA8C:
	// bl 0x82a61510
	ctx.lr = 0x82A4FA90;
	sub_82A61510(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_82A4FA94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a62270
	ctx.lr = 0x82A4FAA0;
	sub_82A62270(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A4FAA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FAB8"))) PPC_WEAK_FUNC(sub_82A4FAB8);
PPC_FUNC_IMPL(__imp__sub_82A4FAB8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a4fad8
	if (ctx.cr6.eq) goto loc_82A4FAD8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a4fb04
	if (!ctx.cr6.eq) goto loc_82A4FB04;
loc_82A4FAD8:
	// bl 0x82a52350
	ctx.lr = 0x82A4FADC;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4FAFC;
	sub_82A580B0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82a4fb84
	goto loc_82A4FB84;
loc_82A4FB04:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a4fb40
	if (!ctx.cr6.eq) goto loc_82A4FB40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82a52350
	ctx.lr = 0x82A4FB18;
	sub_82A52350(ctx, base);
	// li r31,22
	ctx.r31.s64 = 22;
loc_82A4FB1C:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A4FB38;
	sub_82A580B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a4fb84
	goto loc_82A4FB84;
loc_82A4FB40:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A4FB44:
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beq 0x82a4fb64
	if (ctx.cr0.eq) goto loc_82A4FB64;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82a4fb44
	if (!ctx.cr0.eq) goto loc_82A4FB44;
loc_82A4FB64:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a4fb80
	if (!ctx.cr6.eq) goto loc_82A4FB80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// bl 0x82a52350
	ctx.lr = 0x82A4FB78;
	sub_82A52350(ctx, base);
	// li r31,34
	ctx.r31.s64 = 34;
	// b 0x82a4fb1c
	goto loc_82A4FB1C;
loc_82A4FB80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A4FB84:
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

__attribute__((alias("__imp__sub_82A4FB98"))) PPC_WEAK_FUNC(sub_82A4FB98);
PPC_FUNC_IMPL(__imp__sub_82A4FB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A4FBA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,-4096
	ctx.r11.s64 = -4096;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a4fc3c
	if (ctx.cr6.gt) goto loc_82A4FC3C;
	// lis r28,-31961
	ctx.r28.s64 = -2094596096;
loc_82A4FBB8:
	// bl 0x82a4be48
	ctx.lr = 0x82A4FBBC;
	sub_82A4BE48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a4fbd8
	if (!ctx.cr0.eq) goto loc_82A4FBD8;
	// bl 0x82a58060
	ctx.lr = 0x82A4FBC8;
	sub_82A58060(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82a58018
	ctx.lr = 0x82A4FBD0;
	sub_82A58018(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a4f138
	ctx.lr = 0x82A4FBD8;
	sub_82A4F138(ctx, base);
loc_82A4FBD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bne cr6,0x82a4fbe8
	if (!ctx.cr6.eq) goto loc_82A4FBE8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82A4FBE8:
	// bl 0x82a4be48
	ctx.lr = 0x82A4FBEC;
	sub_82A4BE48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a4a980
	ctx.lr = 0x82A4FBF8;
	sub_82A4A980(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a4fc34
	if (!ctx.cr0.eq) goto loc_82A4FC34;
	// lwz r11,-23708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -23708);
	// li r31,12
	ctx.r31.s64 = 12;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a4fc24
	if (ctx.cr6.eq) goto loc_82A4FC24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a63388
	ctx.lr = 0x82A4FC18;
	sub_82A63388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a4fbb8
	if (!ctx.cr0.eq) goto loc_82A4FBB8;
	// b 0x82a4fc2c
	goto loc_82A4FC2C;
loc_82A4FC24:
	// bl 0x82a52350
	ctx.lr = 0x82A4FC28;
	sub_82A52350(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82A4FC2C:
	// bl 0x82a52350
	ctx.lr = 0x82A4FC30;
	sub_82A52350(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82A4FC34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a4fc58
	goto loc_82A4FC58;
loc_82A4FC3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a63388
	ctx.lr = 0x82A4FC44;
	sub_82A63388(ctx, base);
	// bl 0x82a52350
	ctx.lr = 0x82A4FC48;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A4FC58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FC60"))) PPC_WEAK_FUNC(sub_82A4FC60);
PPC_FUNC_IMPL(__imp__sub_82A4FC60) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a4fca8
	if (ctx.cr6.eq) goto loc_82A4FCA8;
	// bl 0x82a4be48
	ctx.lr = 0x82A4FC80;
	sub_82A4BE48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a4b270
	ctx.lr = 0x82A4FC8C;
	sub_82A4B270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a4fca8
	if (!ctx.cr0.eq) goto loc_82A4FCA8;
	// bl 0x82a52350
	ctx.lr = 0x82A4FC98;
	sub_82A52350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a4be58
	ctx.lr = 0x82A4FCA0;
	sub_82A4BE58(ctx, base);
	// bl 0x82a522e8
	ctx.lr = 0x82A4FCA4;
	sub_82A522E8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82A4FCA8:
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

__attribute__((alias("__imp__sub_82A4FCC0"))) PPC_WEAK_FUNC(sub_82A4FCC0);
PPC_FUNC_IMPL(__imp__sub_82A4FCC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5964
	ctx.r4.s64 = ctx.r11.s64 + 5964;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x82A4FCF0;
	sub_82A4EA80(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a4fd18
	if (ctx.cr6.eq) goto loc_82A4FD18;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a4fd18
	if (ctx.cr0.eq) goto loc_82A4FD18;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// ori r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 16384;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82A4FD18:
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a6eef0
	ctx.lr = 0x82A4FD2C;
	sub_82A6EEF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A4FD48"))) PPC_WEAK_FUNC(sub_82A4FD48);
PPC_FUNC_IMPL(__imp__sub_82A4FD48) {
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
	// bl 0x82a4f568
	ctx.lr = 0x82A4FD60;
	sub_82A4F568(ctx, base);
	// stw r31,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A4FD78"))) PPC_WEAK_FUNC(sub_82A4FD78);
PPC_FUNC_IMPL(__imp__sub_82A4FD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a4f568
	ctx.lr = 0x82A4FD88;
	sub_82A4F568(ctx, base);
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4FDA0"))) PPC_WEAK_FUNC(sub_82A4FDA0);
PPC_FUNC_IMPL(__imp__sub_82A4FDA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A4FDC0"))) PPC_WEAK_FUNC(sub_82A4FDC0);
PPC_FUNC_IMPL(__imp__sub_82A4FDC0) {
	PPC_FUNC_PROLOGUE();
	// li r5,2624
	ctx.r5.s64 = 2624;
	// b 0x82a4f820
	sub_82A4F820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FDC8"))) PPC_WEAK_FUNC(sub_82A4FDC8);
PPC_FUNC_IMPL(__imp__sub_82A4FDC8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a63438
	ctx.lr = 0x82A4FDEC;
	sub_82A63438(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4fe30
	if (ctx.cr6.eq) goto loc_82A4FE30;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82A4FE08:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a4fe24
	if (!ctx.cr6.gt) goto loc_82A4FE24;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a4fe54
	if (!ctx.cr6.gt) goto loc_82A4FE54;
loc_82A4FE24:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82a4fe08
	if (!ctx.cr0.eq) goto loc_82A4FE08;
loc_82A4FE30:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FE34:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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
loc_82A4FE54:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82a4fe34
	goto loc_82A4FE34;
}

__attribute__((alias("__imp__sub_82A4FE60"))) PPC_WEAK_FUNC(sub_82A4FE60);
PPC_FUNC_IMPL(__imp__sub_82A4FE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4FE68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4fe94
	if (ctx.cr6.eq) goto loc_82A4FE94;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4fe94
	if (ctx.cr6.eq) goto loc_82A4FE94;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82a4fe98
	goto loc_82A4FE98;
loc_82A4FE94:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A4FE98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a63438
	ctx.lr = 0x82A4FEA4;
	sub_82A63438(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a4fee8
	if (ctx.cr6.eq) goto loc_82A4FEE8;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r10,20
	ctx.r11.s64 = ctx.r10.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82A4FEC0:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a4fedc
	if (!ctx.cr6.gt) goto loc_82A4FEDC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82a4fefc
	if (!ctx.cr6.gt) goto loc_82A4FEFC;
loc_82A4FEDC:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82a4fec0
	if (!ctx.cr0.eq) goto loc_82A4FEC0;
loc_82A4FEE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A4FEEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a4ff04
	if (!ctx.cr6.eq) goto loc_82A4FF04;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82a4ff0c
	goto loc_82A4FF0C;
loc_82A4FEFC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82a4feec
	goto loc_82A4FEEC;
loc_82A4FF04:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_82A4FF0C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a63688
	ctx.lr = 0x82A4FF1C;
	sub_82A63688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FF28"))) PPC_WEAK_FUNC(sub_82A4FF28);
PPC_FUNC_IMPL(__imp__sub_82A4FF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,12(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4ff50
	if (ctx.cr6.eq) goto loc_82A4FF50;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a4ff50
	if (ctx.cr6.eq) goto loc_82A4FF50;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82A4FF50:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82a64368
	sub_82A64368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FF60"))) PPC_WEAK_FUNC(sub_82A4FF60);
PPC_FUNC_IMPL(__imp__sub_82A4FF60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82A4FF68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82a4f568
	ctx.lr = 0x82A4FF8C;
	sub_82A4F568(ctx, base);
	// stw r30,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a64368
	ctx.lr = 0x82A4FFB4;
	sub_82A64368(ctx, base);
	// bl 0x82a4f568
	ctx.lr = 0x82A4FFB8;
	sub_82A4F568(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FFD8"))) PPC_WEAK_FUNC(sub_82A4FFD8);
PPC_FUNC_IMPL(__imp__sub_82A4FFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15032(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15032);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4FFE8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a4f568
	ctx.lr = 0x82A50024;
	sub_82A4F568(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A5003C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A4FFE0"))) PPC_WEAK_FUNC(sub_82A4FFE0);
PPC_FUNC_IMPL(__imp__sub_82A4FFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A4FFE8;
	__savegprlr_29(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stw r5,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r5.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r4.u32);
	// stw r6,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r6.u32);
	// stw r7,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r7.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a4f568
	ctx.lr = 0x82A50024;
	sub_82A4F568(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,88
	ctx.r4.s64 = ctx.r31.s64 + 88;
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A5003C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50058"))) PPC_WEAK_FUNC(sub_82A50058);
PPC_FUNC_IMPL(__imp__sub_82A50058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82a4ff60
	ctx.lr = 0x82A50088;
	sub_82A4FF60(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A500A0"))) PPC_WEAK_FUNC(sub_82A500A0);
PPC_FUNC_IMPL(__imp__sub_82A500A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82A500A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x82a63438
	ctx.lr = 0x82A500D4;
	sub_82A63438(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a500e4
	if (!ctx.cr6.eq) goto loc_82A500E4;
	// bl 0x82a63220
	ctx.lr = 0x82A500E4;
	sub_82A63220(ctx, base);
loc_82A500E4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82a50130
	if (ctx.cr6.eq) goto loc_82A50130;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
loc_82A5010C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82a50124
	if (!ctx.cr6.gt) goto loc_82A50124;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82a50130
	if (!ctx.cr6.gt) goto loc_82A50130;
loc_82A50124:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// bne 0x82a5010c
	if (!ctx.cr0.eq) goto loc_82A5010C;
loc_82A50130:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a50148
	if (ctx.cr6.eq) goto loc_82A50148;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 * 20;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r28,r11,-20
	ctx.r28.s64 = ctx.r11.s64 + -20;
loc_82A50148:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a501d4
	if (ctx.cr6.eq) goto loc_82A501D4;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82A50158:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x82a50188
	if (ctx.cr6.eq) goto loc_82A50188;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82a501b8
	if (!ctx.cr6.gt) goto loc_82A501B8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x82a501b8
	if (ctx.cr6.gt) goto loc_82A501B8;
loc_82A50188:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a501b8
	if (ctx.cr6.lt) goto loc_82A501B8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a501b8
	if (ctx.cr6.gt) goto loc_82A501B8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a501b0
	if (!ctx.cr6.eq) goto loc_82A501B0;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82A501B0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82A501B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a50158
	if (ctx.cr6.lt) goto loc_82A50158;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a501e4
	if (!ctx.cr6.eq) goto loc_82A501E4;
loc_82A501D4:
	// stw r24,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
	// b 0x82a501f0
	goto loc_82A501F0;
loc_82A501E4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A501F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A501F8"))) PPC_WEAK_FUNC(sub_82A501F8);
PPC_FUNC_IMPL(__imp__sub_82A501F8) {
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
	// lis r11,-8083
	ctx.r11.s64 = -529727488;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,29539
	ctx.r11.u64 = ctx.r11.u64 | 29539;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a50274
	if (!ctx.cr6.eq) goto loc_82A50274;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82a50274
	if (!ctx.cr6.eq) goto loc_82A50274;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a50260
	if (ctx.cr6.eq) goto loc_82A50260;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a50260
	if (ctx.cr6.eq) goto loc_82A50260;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a50274
	if (!ctx.cr6.eq) goto loc_82A50274;
loc_82A50260:
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82a5027c
	goto loc_82A5027C;
loc_82A50274:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A5027C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a4f568
	ctx.lr = 0x82A50284;
	sub_82A4F568(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a4f568
	ctx.lr = 0x82A50290;
	sub_82A4F568(ctx, base);
	// stw r31,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A502B0"))) PPC_WEAK_FUNC(sub_82A502B0);
PPC_FUNC_IMPL(__imp__sub_82A502B0) {
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
	// bl 0x82a4f568
	ctx.lr = 0x82A502C8;
	sub_82A4F568(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// b 0x82a502e0
	goto loc_82A502E0;
loc_82A502D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82a50300
	if (ctx.cr6.eq) goto loc_82A50300;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82A502E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a502d0
	if (!ctx.cr6.eq) goto loc_82A502D0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A502EC:
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
loc_82A50300:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a502ec
	goto loc_82A502EC;
}

__attribute__((alias("__imp__sub_82A50308"))) PPC_WEAK_FUNC(sub_82A50308);
PPC_FUNC_IMPL(__imp__sub_82A50308) {
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
	// bl 0x82a4f568
	ctx.lr = 0x82A50320;
	sub_82A4F568(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a50334
	if (ctx.cr6.eq) goto loc_82A50334;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a50338
	if (!ctx.cr6.eq) goto loc_82A50338;
loc_82A50334:
	// bl 0x82a63220
	ctx.lr = 0x82A50338;
	sub_82A63220(ctx, base);
loc_82A50338:
	// bl 0x82a4f568
	ctx.lr = 0x82A5033C;
	sub_82A4F568(ctx, base);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a50358
	if (!ctx.cr6.eq) goto loc_82A50358;
	// bl 0x82a4f568
	ctx.lr = 0x82A5034C;
	sub_82A4F568(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// b 0x82a50394
	goto loc_82A50394;
loc_82A50358:
	// bl 0x82a4f568
	ctx.lr = 0x82A5035C;
	sub_82A4F568(ctx, base);
	// lwz r9,148(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a50390
	if (ctx.cr6.eq) goto loc_82A50390;
loc_82A50370:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a503a8
	if (ctx.cr6.eq) goto loc_82A503A8;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a50370
	if (!ctx.cr6.eq) goto loc_82A50370;
loc_82A50390:
	// bl 0x82a63220
	ctx.lr = 0x82A50394;
	sub_82A63220(ctx, base);
loc_82A50394:
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
loc_82A503A8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// b 0x82a50394
	goto loc_82A50394;
}

__attribute__((alias("__imp__sub_82A503B8"))) PPC_WEAK_FUNC(sub_82A503B8);
PPC_FUNC_IMPL(__imp__sub_82A503B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82A503C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a50420
	if (!ctx.cr6.eq) goto loc_82A50420;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a50420
	if (ctx.cr6.eq) goto loc_82A50420;
loc_82A503F0:
	// bl 0x82a52350
	ctx.lr = 0x82A503F4;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50414;
	sub_82A580B0(ctx, base);
loc_82A50414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A50418:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_82A50420:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a503f0
	if (ctx.cr6.eq) goto loc_82A503F0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a503f0
	if (ctx.cr6.eq) goto loc_82A503F0;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82a50414
	if (ctx.cr6.gt) goto loc_82A50414;
loc_82A50438:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a504a8
	if (ctx.cr0.eq) goto loc_82A504A8;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82a50450
	if (!ctx.cr0.eq) goto loc_82A50450;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_82A50450:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82A50468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a504a0
	if (ctx.cr0.eq) goto loc_82A504A0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a5048c
	if (!ctx.cr6.lt) goto loc_82A5048C;
	// subf r24,r30,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a50490
	if (!ctx.cr6.eq) goto loc_82A50490;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x82a50494
	goto loc_82A50494;
loc_82A5048C:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82A50490:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82A50494:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82a50438
	if (!ctx.cr6.gt) goto loc_82A50438;
	// b 0x82a50414
	goto loc_82A50414;
loc_82A504A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a50418
	goto loc_82A50418;
loc_82A504A8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a50414
	if (ctx.cr6.eq) goto loc_82A50414;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82A504C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x82a50418
	if (!ctx.cr0.eq) goto loc_82A50418;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82a50418
	goto loc_82A50418;
}

__attribute__((alias("__imp__sub_82A504D8"))) PPC_WEAK_FUNC(sub_82A504D8);
PPC_FUNC_IMPL(__imp__sub_82A504D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9dc
	ctx.lr = 0x82A504E0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r18,292(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// beq cr6,0x82a505e0
	if (ctx.cr6.eq) goto loc_82A505E0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a5052c
	if (!ctx.cr6.eq) goto loc_82A5052C;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82a505e0
	if (!ctx.cr6.eq) goto loc_82A505E0;
	// b 0x82a50534
	goto loc_82A50534;
loc_82A5052C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a505e0
	if (ctx.cr6.eq) goto loc_82A505E0;
loc_82A50534:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a50548
	if (!ctx.cr6.eq) goto loc_82A50548;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a505e0
	if (!ctx.cr6.eq) goto loc_82A505E0;
	// b 0x82a50550
	goto loc_82A50550;
loc_82A50548:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a505e0
	if (ctx.cr6.eq) goto loc_82A505E0;
loc_82A50550:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82a50564
	if (!ctx.cr6.eq) goto loc_82A50564;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82a505e0
	if (!ctx.cr6.eq) goto loc_82A505E0;
	// b 0x82a5056c
	goto loc_82A5056C;
loc_82A50564:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a505e0
	if (ctx.cr6.eq) goto loc_82A505E0;
loc_82A5056C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82a505d8
	if (!ctx.cr6.eq) goto loc_82A505D8;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82a505e0
	if (!ctx.cr6.eq) goto loc_82A505E0;
loc_82A5057C:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82A50584:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a5059c
	if (ctx.cr6.eq) goto loc_82A5059C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82a50584
	if (!ctx.cr0.eq) goto loc_82A50584;
loc_82A5059C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82a505e8
	if (!ctx.cr6.eq) goto loc_82A505E8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a505d0
	if (ctx.cr6.eq) goto loc_82A505D0;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x82a50714
	if (ctx.cr6.lt) goto loc_82A50714;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a64580
	ctx.lr = 0x82A505D0;
	sub_82A64580(ctx, base);
loc_82A505D0:
	// addi r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 1;
	// b 0x82a505f4
	goto loc_82A505F4;
loc_82A505D8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82a5057c
	if (!ctx.cr6.eq) goto loc_82A5057C;
loc_82A505E0:
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x82a50714
	goto loc_82A50714;
loc_82A505E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a505f4
	if (ctx.cr6.eq) goto loc_82A505F4;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82A505F4:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a50698
	if (ctx.cr6.eq) goto loc_82A50698;
loc_82A5060C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x828b5948
	ctx.lr = 0x82A50618;
	sub_828B5948(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a50628
	if (ctx.cr0.eq) goto loc_82A50628;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82a50654
	goto loc_82A50654;
loc_82A50628:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82a50650
	if (ctx.cr6.eq) goto loc_82A50650;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82a50650
	if (ctx.cr6.eq) goto loc_82A50650;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82a50654
	if (!ctx.cr6.eq) goto loc_82A50654;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82a50654
	goto loc_82A50654;
loc_82A50650:
	// addi r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 1;
loc_82A50654:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a5060c
	if (!ctx.cr6.eq) goto loc_82A5060C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a50698
	if (ctx.cr6.eq) goto loc_82A50698;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a50690
	if (ctx.cr6.eq) goto loc_82A50690;
	// subf r6,r30,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a50714
	if (!ctx.cr6.gt) goto loc_82A50714;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a64580
	ctx.lr = 0x82A50690;
	sub_82A64580(ctx, base);
loc_82A50690:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82a506a4
	goto loc_82A506A4;
loc_82A50698:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a506a4
	if (ctx.cr6.eq) goto loc_82A506A4;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82A506A4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a50700
	if (ctx.cr6.eq) goto loc_82A50700;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82a50700
	if (ctx.cr6.lt) goto loc_82A50700;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a506d8
	if (ctx.cr6.eq) goto loc_82A506D8;
	// subf r6,r30,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r30.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a50714
	if (!ctx.cr6.gt) goto loc_82A50714;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a64580
	ctx.lr = 0x82A506D8;
	sub_82A64580(ctx, base);
loc_82A506D8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a507d4
	if (ctx.cr6.eq) goto loc_82A507D4;
	// subf r6,r28,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r28.s64;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a50714
	if (!ctx.cr6.gt) goto loc_82A50714;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82a64580
	ctx.lr = 0x82A506FC;
	sub_82A64580(ctx, base);
	// b 0x82a507d4
	goto loc_82A507D4;
loc_82A50700:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a507c8
	if (ctx.cr6.eq) goto loc_82A507C8;
	// subf r6,r30,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r30.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82a507b8
	if (ctx.cr6.gt) goto loc_82A507B8;
loc_82A50714:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a50728
	if (ctx.cr6.eq) goto loc_82A50728;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82a50728
	if (ctx.cr6.eq) goto loc_82A50728;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82A50728:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a5073c
	if (ctx.cr6.eq) goto loc_82A5073C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a5073c
	if (ctx.cr6.eq) goto loc_82A5073C;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82A5073C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a50750
	if (ctx.cr6.eq) goto loc_82A50750;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a50750
	if (ctx.cr6.eq) goto loc_82A50750;
	// stb r20,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r20.u8);
loc_82A50750:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a50764
	if (ctx.cr6.eq) goto loc_82A50764;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82a50764
	if (ctx.cr6.eq) goto loc_82A50764;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82A50764:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a50798
	if (!ctx.cr6.eq) goto loc_82A50798;
loc_82A5076C:
	// bl 0x82a52350
	ctx.lr = 0x82A50770;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50790;
	sub_82A580B0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82a507d8
	goto loc_82A507D8;
loc_82A50798:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82a5076c
	if (!ctx.cr6.eq) goto loc_82A5076C;
	// bl 0x82a52350
	ctx.lr = 0x82A507A4;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82a507d8
	goto loc_82A507D8;
loc_82A507B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a64580
	ctx.lr = 0x82A507C8;
	sub_82A64580(ctx, base);
loc_82A507C8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a507d4
	if (ctx.cr6.eq) goto loc_82A507D4;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82A507D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A507D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea2c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A507E0"))) PPC_WEAK_FUNC(sub_82A507E0);
PPC_FUNC_IMPL(__imp__sub_82A507E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r6.s64;
	// rlwinm r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r7,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r4.s64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// subfe r31,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r7,r11,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// clrlwi r5,r31,30
	ctx.r5.u64 = ctx.r31.u32 & 0x3;
	// bl 0x82a504d8
	ctx.lr = 0x82A50834;
	sub_82A504D8(ctx, base);
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

__attribute__((alias("__imp__sub_82A50848"))) PPC_WEAK_FUNC(sub_82A50848);
PPC_FUNC_IMPL(__imp__sub_82A50848) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82a64588
	sub_82A64588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50860"))) PPC_WEAK_FUNC(sub_82A50860);
PPC_FUNC_IMPL(__imp__sub_82A50860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-15008(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15008);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A50870;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a508cc
	if (!ctx.cr6.eq) goto loc_82A508CC;
loc_82A508A0:
	// bl 0x82a52350
	ctx.lr = 0x82A508A4;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A508C4;
	sub_82A580B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a50994
	goto loc_82A50994;
loc_82A508CC:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a508a0
	if (ctx.cr6.eq) goto loc_82A508A0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a508a0
	if (ctx.cr6.eq) goto loc_82A508A0;
	// bl 0x82a649c8
	ctx.lr = 0x82A50900;
	sub_82A649C8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x82a50924
	if (!ctx.cr0.eq) goto loc_82A50924;
	// bl 0x82a52350
	ctx.lr = 0x82A50910;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82a50994
	goto loc_82A50994;
loc_82A50924:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a50964
	if (!ctx.cr6.eq) goto loc_82A50964;
	// bl 0x82a52350
	ctx.lr = 0x82A5093C;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,2448
	ctx.r4.s64 = ctx.r10.s64 + 2448;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x82a64b80
	ctx.lr = 0x82A5095C;
	sub_82A64B80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a50990
	goto loc_82A50990;
loc_82A50964:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64768
	ctx.lr = 0x82A50978;
	sub_82A64768(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82a509bc
	ctx.lr = 0x82A50988;
	sub_82A509BC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82a50994
	goto loc_82A50994;
loc_82A50990:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A50994:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50868"))) PPC_WEAK_FUNC(sub_82A50868);
PPC_FUNC_IMPL(__imp__sub_82A50868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A50870;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a508cc
	if (!ctx.cr6.eq) goto loc_82A508CC;
loc_82A508A0:
	// bl 0x82a52350
	ctx.lr = 0x82A508A4;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A508C4;
	sub_82A580B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a50994
	goto loc_82A50994;
loc_82A508CC:
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a508a0
	if (ctx.cr6.eq) goto loc_82A508A0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a508a0
	if (ctx.cr6.eq) goto loc_82A508A0;
	// bl 0x82a649c8
	ctx.lr = 0x82A50900;
	sub_82A649C8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// bne 0x82a50924
	if (!ctx.cr0.eq) goto loc_82A50924;
	// bl 0x82a52350
	ctx.lr = 0x82A50910;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82a50994
	goto loc_82A50994;
loc_82A50924:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a50964
	if (!ctx.cr6.eq) goto loc_82A50964;
	// bl 0x82a52350
	ctx.lr = 0x82A5093C;
	sub_82A52350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32091
	ctx.r10.s64 = -2103115776;
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// addi r4,r10,2448
	ctx.r4.s64 = ctx.r10.s64 + 2448;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bl 0x82a64b80
	ctx.lr = 0x82A5095C;
	sub_82A64B80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a50990
	goto loc_82A50990;
loc_82A50964:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64768
	ctx.lr = 0x82A50978;
	sub_82A64768(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82a509bc
	ctx.lr = 0x82A50988;
	sub_82A509BC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82a50994
	goto loc_82A50994;
loc_82A50990:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82A50994:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5099C"))) PPC_WEAK_FUNC(sub_82A5099C);
PPC_FUNC_IMPL(__imp__sub_82A5099C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82a509d4
	goto loc_82A509D4;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A509D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A509DC;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A509BC"))) PPC_WEAK_FUNC(sub_82A509BC);
PPC_FUNC_IMPL(__imp__sub_82A509BC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A509DC;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A509F8"))) PPC_WEAK_FUNC(sub_82A509F8);
PPC_FUNC_IMPL(__imp__sub_82A509F8) {
	PPC_FUNC_PROLOGUE();
	// li r5,64
	ctx.r5.s64 = 64;
	// b 0x82a50868
	sub_82A50868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50A00"))) PPC_WEAK_FUNC(sub_82A50A00);
PPC_FUNC_IMPL(__imp__sub_82A50A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-14984(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14984);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82A50A10;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a50a6c
	if (!ctx.cr6.eq) goto loc_82A50A6C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a50a6c
	if (ctx.cr6.eq) goto loc_82A50A6C;
loc_82A50A40:
	// bl 0x82a52350
	ctx.lr = 0x82A50A44;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50A64;
	sub_82A580B0(ctx, base);
loc_82A50A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a50c48
	goto loc_82A50C48;
loc_82A50A6C:
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a50a40
	if (ctx.cr6.eq) goto loc_82A50A40;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a50a40
	if (ctx.cr6.eq) goto loc_82A50A40;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a50a64
	if (ctx.cr6.eq) goto loc_82A50A64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// bl 0x82a521c0
	ctx.lr = 0x82A50AB0;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a50bb4
	if (!ctx.cr0.eq) goto loc_82A50BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AC8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a50b18
	if (ctx.cr6.eq) goto loc_82A50B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AD8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a50b18
	if (ctx.cr6.eq) goto loc_82A50B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AE8;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B00;
	sub_82A57AC0(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,1192
	ctx.r28.s64 = ctx.r9.s64 + 1192;
	// b 0x82a50b2c
	goto loc_82A50B2C;
loc_82A50B18:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r28,r11,1192
	ctx.r28.s64 = ctx.r11.s64 + 1192;
	// addi r29,r10,1280
	ctx.r29.s64 = ctx.r10.s64 + 1280;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A50B2C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a50b88
	if (!ctx.cr0.eq) goto loc_82A50B88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B40;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a50b7c
	if (ctx.cr6.eq) goto loc_82A50B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B50;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a50b7c
	if (ctx.cr6.eq) goto loc_82A50B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B60;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B70;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A50B7C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a50bb4
	if (ctx.cr0.eq) goto loc_82A50BB4;
loc_82A50B88:
	// bl 0x82a52350
	ctx.lr = 0x82A50B8C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50BAC;
	sub_82A580B0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82A50BB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a50c38
	if (ctx.cr6.eq) goto loc_82A50C38;
loc_82A50BBC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// beq 0x82a50c30
	if (ctx.cr0.eq) goto loc_82A50C30;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// blt 0x82a50bec
	if (ctx.cr0.lt) goto loc_82A50BEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82a50bf4
	goto loc_82A50BF4;
loc_82A50BEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a64ba8
	ctx.lr = 0x82A50BF4;
	sub_82A64BA8(ctx, base);
loc_82A50BF4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a50c10
	if (!ctx.cr6.eq) goto loc_82A50C10;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a50c30
	if (!ctx.cr6.eq) goto loc_82A50C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82a50c38
	goto loc_82A50C38;
loc_82A50C10:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// beq cr6,0x82a50c30
	if (ctx.cr6.eq) goto loc_82A50C30;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a50bbc
	goto loc_82A50BBC;
loc_82A50C30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
loc_82A50C38:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a50c70
	ctx.lr = 0x82A50C44;
	sub_82A50C70(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A50C48:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50A08"))) PPC_WEAK_FUNC(sub_82A50A08);
PPC_FUNC_IMPL(__imp__sub_82A50A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82A50A10;
	__savegprlr_23(ctx, base);
	// addi r31,r1,-176
	ctx.r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a50a6c
	if (!ctx.cr6.eq) goto loc_82A50A6C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a50a6c
	if (ctx.cr6.eq) goto loc_82A50A6C;
loc_82A50A40:
	// bl 0x82a52350
	ctx.lr = 0x82A50A44;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50A64;
	sub_82A580B0(ctx, base);
loc_82A50A64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a50c48
	goto loc_82A50C48;
loc_82A50A6C:
	// cntlzw r11,r23
	ctx.r11.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a50a40
	if (ctx.cr6.eq) goto loc_82A50A40;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a50a40
	if (ctx.cr6.eq) goto loc_82A50A40;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a50a64
	if (ctx.cr6.eq) goto loc_82A50A64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// bl 0x82a521c0
	ctx.lr = 0x82A50AB0;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a50bb4
	if (!ctx.cr0.eq) goto loc_82A50BB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AC8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a50b18
	if (ctx.cr6.eq) goto loc_82A50B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AD8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a50b18
	if (ctx.cr6.eq) goto loc_82A50B18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50AE8;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B00;
	sub_82A57AC0(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,1192
	ctx.r28.s64 = ctx.r9.s64 + 1192;
	// b 0x82a50b2c
	goto loc_82A50B2C;
loc_82A50B18:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// addi r28,r11,1192
	ctx.r28.s64 = ctx.r11.s64 + 1192;
	// addi r29,r10,1280
	ctx.r29.s64 = ctx.r10.s64 + 1280;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A50B2C:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a50b88
	if (!ctx.cr0.eq) goto loc_82A50B88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B40;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a50b7c
	if (ctx.cr6.eq) goto loc_82A50B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B50;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a50b7c
	if (ctx.cr6.eq) goto loc_82A50B7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B60;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50B70;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A50B7C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a50bb4
	if (ctx.cr0.eq) goto loc_82A50BB4;
loc_82A50B88:
	// bl 0x82a52350
	ctx.lr = 0x82A50B8C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50BAC;
	sub_82A580B0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_82A50BB4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a50c38
	if (ctx.cr6.eq) goto loc_82A50C38;
loc_82A50BBC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r23.u32);
	// beq 0x82a50c30
	if (ctx.cr0.eq) goto loc_82A50C30;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// blt 0x82a50bec
	if (ctx.cr0.lt) goto loc_82A50BEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// b 0x82a50bf4
	goto loc_82A50BF4;
loc_82A50BEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a64ba8
	ctx.lr = 0x82A50BF4;
	sub_82A64BA8(ctx, base);
loc_82A50BF4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a50c10
	if (!ctx.cr6.eq) goto loc_82A50C10;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82a50c30
	if (!ctx.cr6.eq) goto loc_82A50C30;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82a50c38
	goto loc_82A50C38;
loc_82A50C10:
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
	// beq cr6,0x82a50c30
	if (ctx.cr6.eq) goto loc_82A50C30;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a50bbc
	goto loc_82A50BBC;
loc_82A50C30:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r11.u8);
loc_82A50C38:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	ctx.r12.s64 = ctx.r31.s64 + 176;
	// bl 0x82a50c70
	ctx.lr = 0x82A50C44;
	sub_82A50C70(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A50C48:
	// addi r1,r31,176
	ctx.r1.s64 = ctx.r31.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50C50"))) PPC_WEAK_FUNC(sub_82A50C50);
PPC_FUNC_IMPL(__imp__sub_82A50C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,84(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82a50c88
	goto loc_82A50C88;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A50C88:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A50C90;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50C70"))) PPC_WEAK_FUNC(sub_82A50C70);
PPC_FUNC_IMPL(__imp__sub_82A50C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r27,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r27.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A50C90;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r27,-16(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50CA8"))) PPC_WEAK_FUNC(sub_82A50CA8);
PPC_FUNC_IMPL(__imp__sub_82A50CA8) {
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
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a50d10
	if (!ctx.cr6.eq) goto loc_82A50D10;
loc_82A50CE4:
	// bl 0x82a52350
	ctx.lr = 0x82A50CE8;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50D08;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a50da0
	goto loc_82A50DA0;
loc_82A50D10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a50d20
	if (ctx.cr6.eq) goto loc_82A50D20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a50ce4
	if (ctx.cr6.eq) goto loc_82A50CE4;
loc_82A50D20:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// addi r8,r1,200
	ctx.r8.s64 = ctx.r1.s64 + 200;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bgt cr6,0x82a50d44
	if (ctx.cr6.gt) goto loc_82A50D44;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82A50D44:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a608d0
	ctx.lr = 0x82A50D64;
	sub_82A608D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a50d9c
	if (ctx.cr6.eq) goto loc_82A50D9C;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82a50d90
	if (ctx.cr0.lt) goto loc_82A50D90;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82a50d9c
	goto loc_82A50D9C;
loc_82A50D90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A50D9C;
	sub_82A5FB48(ctx, base);
loc_82A50D9C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A50DA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82A50DB8"))) PPC_WEAK_FUNC(sub_82A50DB8);
PPC_FUNC_IMPL(__imp__sub_82A50DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A50DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a50e00
	if (!ctx.cr6.eq) goto loc_82A50E00;
	// bl 0x82a52350
	ctx.lr = 0x82A50DD8;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50DF8;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a50e60
	goto loc_82A50E60;
loc_82A50E00:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a50e58
	if (ctx.cr0.eq) goto loc_82A50E58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a54880
	ctx.lr = 0x82A50E1C;
	sub_82A54880(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a650e0
	ctx.lr = 0x82A50E28;
	sub_82A650E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A50E30;
	sub_82A57AC0(ctx, base);
	// bl 0x82a64f70
	ctx.lr = 0x82A50E34;
	sub_82A64F70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a50e44
	if (!ctx.cr0.lt) goto loc_82A50E44;
	// li r30,-1
	ctx.r30.s64 = -1;
	// b 0x82a50e58
	goto loc_82A50E58;
loc_82A50E44:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a50e58
	if (ctx.cr6.eq) goto loc_82A50E58;
	// bl 0x82a4fc60
	ctx.lr = 0x82A50E54;
	sub_82A4FC60(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_82A50E58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_82A50E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A50E68"))) PPC_WEAK_FUNC(sub_82A50E68);
PPC_FUNC_IMPL(__imp__sub_82A50E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-14960(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14960);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a50ed8
	if (!ctx.cr6.eq) goto loc_82A50ED8;
	// bl 0x82a52350
	ctx.lr = 0x82A50EB0;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50ED0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a50f18
	goto loc_82A50F18;
loc_82A50ED8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a50ef0
	if (ctx.cr0.eq) goto loc_82A50EF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82a50f14
	goto loc_82A50F14;
loc_82A50EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a521c0
	ctx.lr = 0x82A50EF8;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a50db8
	ctx.lr = 0x82A50F04;
	sub_82A50DB8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82a50f50
	ctx.lr = 0x82A50F14;
	sub_82A50F50(ctx, base);
loc_82A50F14:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A50F18:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82A50E70"))) PPC_WEAK_FUNC(sub_82A50E70);
PPC_FUNC_IMPL(__imp__sub_82A50E70) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a50ed8
	if (!ctx.cr6.eq) goto loc_82A50ED8;
	// bl 0x82a52350
	ctx.lr = 0x82A50EB0;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50ED0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a50f18
	goto loc_82A50F18;
loc_82A50ED8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a50ef0
	if (ctx.cr0.eq) goto loc_82A50EF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// b 0x82a50f14
	goto loc_82A50F14;
loc_82A50EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a521c0
	ctx.lr = 0x82A50EF8;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a50db8
	ctx.lr = 0x82A50F04;
	sub_82A50DB8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x82a50f50
	ctx.lr = 0x82A50F14;
	sub_82A50F50(ctx, base);
loc_82A50F14:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A50F18:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82A50F30"))) PPC_WEAK_FUNC(sub_82A50F30);
PPC_FUNC_IMPL(__imp__sub_82A50F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82a50f68
	goto loc_82A50F68;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A50F68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A50F70;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50F50"))) PPC_WEAK_FUNC(sub_82A50F50);
PPC_FUNC_IMPL(__imp__sub_82A50F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A50F70;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50F88"))) PPC_WEAK_FUNC(sub_82A50F88);
PPC_FUNC_IMPL(__imp__sub_82A50F88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-65
	ctx.r11.s64 = ctx.r3.s64 + -65;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A50FA0"))) PPC_WEAK_FUNC(sub_82A50FA0);
PPC_FUNC_IMPL(__imp__sub_82A50FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82A50FA8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a50fc8
	if (ctx.cr6.eq) goto loc_82A50FC8;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_82A50FC8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a51000
	if (!ctx.cr6.eq) goto loc_82A51000;
	// bl 0x82a52350
	ctx.lr = 0x82A50FD4;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A50FF4;
	sub_82A580B0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// b 0x82a5112c
	goto loc_82A5112C;
loc_82A51000:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r30,r11,696
	ctx.r30.s64 = ctx.r11.s64 + 696;
	// lwz r11,696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
loc_82A5100C:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82a51030
	if (!ctx.cr6.gt) goto loc_82A51030;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a62318
	ctx.lr = 0x82A51028;
	sub_82A62318(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82a51044
	goto loc_82A51044;
loc_82A51030:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_82A51044:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a51054
	if (ctx.cr6.eq) goto loc_82A51054;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82a5100c
	goto loc_82A5100C;
loc_82A51054:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A51058:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a51058
	if (!ctx.cr6.eq) goto loc_82A51058;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a65150
	ctx.lr = 0x82A5108C;
	sub_82A65150(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a510a0
	if (ctx.cr6.eq) goto loc_82A510A0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82A510A0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// andi. r10,r11,576
	ctx.r10.u64 = ctx.r11.u64 & 576;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a510c8
	if (ctx.cr0.eq) goto loc_82A510C8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfd f31,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// beq cr6,0x82a51128
	if (ctx.cr6.eq) goto loc_82A51128;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// b 0x82a51128
	goto loc_82A51128;
loc_82A510C8:
	// andi. r10,r11,129
	ctx.r10.u64 = ctx.r11.u64 & 129;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82a510f8
	if (ctx.cr0.eq) goto loc_82A510F8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// bne cr6,0x82a510f0
	if (!ctx.cr6.eq) goto loc_82A510F0;
	// lfd f0,11392(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11392);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82a51114
	goto loc_82A51114;
loc_82A510F0:
	// lfd f31,11392(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11392);
	// b 0x82a51114
	goto loc_82A51114;
loc_82A510F8:
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a51124
	if (ctx.cr0.eq) goto loc_82A51124;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f0,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lfd f31,16376(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a51124
	if (!ctx.cr6.eq) goto loc_82A51124;
loc_82A51114:
	// bl 0x82a52350
	ctx.lr = 0x82A51118;
	sub_82A52350(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82a51128
	goto loc_82A51128;
loc_82A51124:
	// lfd f31,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82A51128:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A5112C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51138"))) PPC_WEAK_FUNC(sub_82A51138);
PPC_FUNC_IMPL(__imp__sub_82A51138) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82a50fa0
	sub_82A50FA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51140"))) PPC_WEAK_FUNC(sub_82A51140);
PPC_FUNC_IMPL(__imp__sub_82A51140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-14936(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14936);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A51150;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a511b8
	if (!ctx.cr6.eq) goto loc_82A511B8;
	// bl 0x82a52350
	ctx.lr = 0x82A51190;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A511B0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51224
	goto loc_82A51224;
loc_82A511B8:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a52050
	ctx.lr = 0x82A511C8;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a52230
	ctx.lr = 0x82A511D4;
	sub_82A52230(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a52050
	ctx.lr = 0x82A511DC;
	sub_82A52050(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82a65208
	ctx.lr = 0x82A511E4;
	sub_82A65208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a52050
	ctx.lr = 0x82A511EC;
	sub_82A52050(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a608d0
	ctx.lr = 0x82A51200;
	sub_82A608D0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82a52050
	ctx.lr = 0x82A51208;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a652e0
	ctx.lr = 0x82A51214;
	sub_82A652E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82a5122c
	ctx.lr = 0x82A51220;
	sub_82A5122C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82A51224:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51148"))) PPC_WEAK_FUNC(sub_82A51148);
PPC_FUNC_IMPL(__imp__sub_82A51148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A51150;
	__savegprlr_29(ctx, base);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a511b8
	if (!ctx.cr6.eq) goto loc_82A511B8;
	// bl 0x82a52350
	ctx.lr = 0x82A51190;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A511B0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51224
	goto loc_82A51224;
loc_82A511B8:
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a52050
	ctx.lr = 0x82A511C8;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a52230
	ctx.lr = 0x82A511D4;
	sub_82A52230(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a52050
	ctx.lr = 0x82A511DC;
	sub_82A52050(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82a65208
	ctx.lr = 0x82A511E4;
	sub_82A65208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a52050
	ctx.lr = 0x82A511EC;
	sub_82A52050(ctx, base);
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a608d0
	ctx.lr = 0x82A51200;
	sub_82A608D0(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// bl 0x82a52050
	ctx.lr = 0x82A51208;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a652e0
	ctx.lr = 0x82A51214;
	sub_82A652E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82a5122c
	ctx.lr = 0x82A51220;
	sub_82A5122C(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_82A51224:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A5122C"))) PPC_WEAK_FUNC(sub_82A5122C);
PPC_FUNC_IMPL(__imp__sub_82A5122C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a52050
	ctx.lr = 0x82A5123C;
	sub_82A52050(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a522c0
	ctx.lr = 0x82A51248;
	sub_82A522C0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51258"))) PPC_WEAK_FUNC(sub_82A51258);
PPC_FUNC_IMPL(__imp__sub_82A51258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r11,1264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1264);
	// lwz r10,-24336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24336);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51280"))) PPC_WEAK_FUNC(sub_82A51280);
PPC_FUNC_IMPL(__imp__sub_82A51280) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a512d4
	if (!ctx.cr6.eq) goto loc_82A512D4;
loc_82A512A8:
	// bl 0x82a52350
	ctx.lr = 0x82A512AC;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A512CC;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51358
	goto loc_82A51358;
loc_82A512D4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a512e4
	if (ctx.cr6.eq) goto loc_82A512E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a512a8
	if (ctx.cr6.eq) goto loc_82A512A8;
loc_82A512E4:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82a512fc
	if (ctx.cr6.gt) goto loc_82A512FC;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_82A512FC:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a608d0
	ctx.lr = 0x82A5131C;
	sub_82A608D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a51354
	if (ctx.cr6.eq) goto loc_82A51354;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82a51348
	if (ctx.cr0.lt) goto loc_82A51348;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82a51354
	goto loc_82A51354;
loc_82A51348:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A51354;
	sub_82A5FB48(ctx, base);
loc_82A51354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A51358:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_82A51370"))) PPC_WEAK_FUNC(sub_82A51370);
PPC_FUNC_IMPL(__imp__sub_82A51370) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82a51280
	sub_82A51280(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51380"))) PPC_WEAK_FUNC(sub_82A51380);
PPC_FUNC_IMPL(__imp__sub_82A51380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r21,-216(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -216);
	// lwz r16,6052(0)
	ctx.r16.u64 = PPC_LOAD_U32(6052);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82333900
	ctx.lr = 0x82A513A8;
	sub_82333900(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a513b4
	// ERROR 82A513B4
	return;
}

__attribute__((alias("__imp__sub_82A51388"))) PPC_WEAK_FUNC(sub_82A51388);
PPC_FUNC_IMPL(__imp__sub_82A51388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82333900
	ctx.lr = 0x82A513A8;
	sub_82333900(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82a513b4
	goto loc_82A513B4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A513B4:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A513B0"))) PPC_WEAK_FUNC(sub_82A513B0);
PPC_FUNC_IMPL(__imp__sub_82A513B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A513C8"))) PPC_WEAK_FUNC(sub_82A513C8);
PPC_FUNC_IMPL(__imp__sub_82A513C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r21,-216(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + -216);
	// lwz r16,6052(0)
	ctx.r16.u64 = PPC_LOAD_U32(6052);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32091
	ctx.r3.s64 = -2103115776;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,5040
	ctx.r3.s64 = ctx.r3.s64 + 5040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A513D0"))) PPC_WEAK_FUNC(sub_82A513D0);
PPC_FUNC_IMPL(__imp__sub_82A513D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32091
	ctx.r3.s64 = -2103115776;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,5040
	ctx.r3.s64 = ctx.r3.s64 + 5040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A513F0"))) PPC_WEAK_FUNC(sub_82A513F0);
PPC_FUNC_IMPL(__imp__sub_82A513F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82A513F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a51440
	if (!ctx.cr6.eq) goto loc_82A51440;
loc_82A51414:
	// bl 0x82a52350
	ctx.lr = 0x82A51418;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51438;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51500
	goto loc_82A51500;
loc_82A51440:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a51450
	if (ctx.cr6.eq) goto loc_82A51450;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a51414
	if (ctx.cr6.eq) goto loc_82A51414;
loc_82A51450:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82a51468
	if (ctx.cr6.gt) goto loc_82A51468;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82A51468:
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A5148C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a514a0
	if (!ctx.cr6.eq) goto loc_82A514A0;
loc_82A51498:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a51500
	goto loc_82A51500;
loc_82A514A0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a514dc
	if (ctx.cr6.lt) goto loc_82A514DC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82a514c8
	if (ctx.cr0.lt) goto loc_82A514C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82a51498
	goto loc_82A51498;
loc_82A514C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a5fb48
	ctx.lr = 0x82A514D4;
	sub_82A5FB48(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a51498
	if (!ctx.cr6.eq) goto loc_82A51498;
loc_82A514DC:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stb r9,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
loc_82A51500:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51508"))) PPC_WEAK_FUNC(sub_82A51508);
PPC_FUNC_IMPL(__imp__sub_82A51508) {
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
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a51534
	if (!ctx.cr6.eq) goto loc_82A51534;
loc_82A51528:
	// bl 0x82a52350
	ctx.lr = 0x82A5152C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82a51580
	goto loc_82A51580;
loc_82A51534:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a51528
	if (ctx.cr6.eq) goto loc_82A51528;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a51528
	if (ctx.cr6.eq) goto loc_82A51528;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,21624
	ctx.r3.s64 = ctx.r11.s64 + 21624;
	// bl 0x82a513f0
	ctx.lr = 0x82A51560;
	sub_82A513F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a51570
	if (!ctx.cr0.lt) goto loc_82A51570;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82A51570:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a515a0
	if (!ctx.cr6.eq) goto loc_82A515A0;
	// bl 0x82a52350
	ctx.lr = 0x82A5157C;
	sub_82A52350(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
loc_82A51580:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A5159C;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82A515A0:
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

__attribute__((alias("__imp__sub_82A515B8"))) PPC_WEAK_FUNC(sub_82A515B8);
PPC_FUNC_IMPL(__imp__sub_82A515B8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82a51508
	sub_82A51508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A515C8"))) PPC_WEAK_FUNC(sub_82A515C8);
PPC_FUNC_IMPL(__imp__sub_82A515C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-14912(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14912);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A515D8;
	__savegprlr_26(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a51648
	if (!ctx.cr6.eq) goto loc_82A51648;
loc_82A5161C:
	// bl 0x82a52350
	ctx.lr = 0x82A51620;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51640;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a517c0
	goto loc_82A517C0;
loc_82A51648:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a5161c
	if (ctx.cr6.eq) goto loc_82A5161C;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a521c0
	ctx.lr = 0x82A51674;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51778
	if (!ctx.cr0.eq) goto loc_82A51778;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A5168C;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a516dc
	if (ctx.cr6.eq) goto loc_82A516DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A5169C;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a516dc
	if (ctx.cr6.eq) goto loc_82A516DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A516AC;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A516C4;
	sub_82A57AC0(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,1192
	ctx.r28.s64 = ctx.r9.s64 + 1192;
	// b 0x82a516f0
	goto loc_82A516F0;
loc_82A516DC:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// addi r28,r10,1192
	ctx.r28.s64 = ctx.r10.s64 + 1192;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A516F0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a5174c
	if (!ctx.cr0.eq) goto loc_82A5174C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51704;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51740
	if (ctx.cr6.eq) goto loc_82A51740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51714;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51740
	if (ctx.cr6.eq) goto loc_82A51740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51724;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51734;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A51740:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a51778
	if (ctx.cr0.eq) goto loc_82A51778;
loc_82A5174C:
	// bl 0x82a52350
	ctx.lr = 0x82A51750;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51770;
	sub_82A580B0(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82A51778:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a517b0
	if (!ctx.cr6.eq) goto loc_82A517B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a65208
	ctx.lr = 0x82A51788;
	sub_82A65208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a608d0
	ctx.lr = 0x82A517A0;
	sub_82A608D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a652e0
	ctx.lr = 0x82A517B0;
	sub_82A652E0(ctx, base);
loc_82A517B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82a517c8
	ctx.lr = 0x82A517BC;
	sub_82A517C8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A517C0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A515D0"))) PPC_WEAK_FUNC(sub_82A515D0);
PPC_FUNC_IMPL(__imp__sub_82A515D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82A515D8;
	__savegprlr_26(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a51648
	if (!ctx.cr6.eq) goto loc_82A51648;
loc_82A5161C:
	// bl 0x82a52350
	ctx.lr = 0x82A51620;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51640;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a517c0
	goto loc_82A517C0;
loc_82A51648:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a5161c
	if (ctx.cr6.eq) goto loc_82A5161C;
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// addi r10,r31,192
	ctx.r10.s64 = ctx.r31.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82a521c0
	ctx.lr = 0x82A51674;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51778
	if (!ctx.cr0.eq) goto loc_82A51778;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A5168C;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a516dc
	if (ctx.cr6.eq) goto loc_82A516DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A5169C;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a516dc
	if (ctx.cr6.eq) goto loc_82A516DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A516AC;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A516C4;
	sub_82A57AC0(ctx, base);
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r10,r3,6,21,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r9,-31973
	ctx.r9.s64 = -2095382528;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r9,1192
	ctx.r28.s64 = ctx.r9.s64 + 1192;
	// b 0x82a516f0
	goto loc_82A516F0;
loc_82A516DC:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// addi r28,r10,1192
	ctx.r28.s64 = ctx.r10.s64 + 1192;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A516F0:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a5174c
	if (!ctx.cr0.eq) goto loc_82A5174C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51704;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51740
	if (ctx.cr6.eq) goto loc_82A51740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51714;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51740
	if (ctx.cr6.eq) goto loc_82A51740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51724;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51734;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A51740:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a51778
	if (ctx.cr0.eq) goto loc_82A51778;
loc_82A5174C:
	// bl 0x82a52350
	ctx.lr = 0x82A51750;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51770;
	sub_82A580B0(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82A51778:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a517b0
	if (!ctx.cr6.eq) goto loc_82A517B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a65208
	ctx.lr = 0x82A51788;
	sub_82A65208(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a608d0
	ctx.lr = 0x82A517A0;
	sub_82A608D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a652e0
	ctx.lr = 0x82A517B0;
	sub_82A652E0(ctx, base);
loc_82A517B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82a517c8
	ctx.lr = 0x82A517BC;
	sub_82A517C8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A517C0:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A517C8"))) PPC_WEAK_FUNC(sub_82A517C8);
PPC_FUNC_IMPL(__imp__sub_82A517C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x82a52280
	ctx.lr = 0x82A517E4;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A517F8"))) PPC_WEAK_FUNC(sub_82A517F8);
PPC_FUNC_IMPL(__imp__sub_82A517F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A51818:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a51818
	if (!ctx.cr6.eq) goto loc_82A51818;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bne cr6,0x82a51868
	if (!ctx.cr6.eq) goto loc_82A51868;
loc_82A5183C:
	// bl 0x82a52350
	ctx.lr = 0x82A51840;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51860;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a518a8
	goto loc_82A518A8;
loc_82A51868:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a5183c
	if (ctx.cr6.eq) goto loc_82A5183C;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,73
	ctx.r6.s64 = 73;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82a51898
	if (ctx.cr6.gt) goto loc_82A51898;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_82A51898:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A518A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A518A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A518B8"))) PPC_WEAK_FUNC(sub_82A518B8);
PPC_FUNC_IMPL(__imp__sub_82A518B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32090
	ctx.r10.s64 = -2103050240;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,24744
	ctx.r3.s64 = ctx.r10.s64 + 24744;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a517f8
	ctx.lr = 0x82A51904;
	sub_82A517F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51918"))) PPC_WEAK_FUNC(sub_82A51918);
PPC_FUNC_IMPL(__imp__sub_82A51918) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a51968
	if (!ctx.cr6.eq) goto loc_82A51968;
	// bl 0x82a52350
	ctx.lr = 0x82A5193C;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A5195C;
	sub_82A580B0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
	// b 0x82a519f8
	goto loc_82A519F8;
loc_82A51968:
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r30,r11,696
	ctx.r30.s64 = ctx.r11.s64 + 696;
	// lwz r11,696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 696);
loc_82A51974:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82a51998
	if (!ctx.cr6.gt) goto loc_82A51998;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82a62318
	ctx.lr = 0x82A51990;
	sub_82A62318(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82a519ac
	goto loc_82A519AC;
loc_82A51998:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r3,r10,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
loc_82A519AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a519bc
	if (ctx.cr6.eq) goto loc_82A519BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82a51974
	goto loc_82A51974;
loc_82A519BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82A519C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a519c0
	if (!ctx.cr6.eq) goto loc_82A519C0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a65150
	ctx.lr = 0x82A519F4;
	sub_82A65150(ctx, base);
	// lfd f1,16(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
loc_82A519F8:
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

__attribute__((alias("__imp__sub_82A51A10"))) PPC_WEAK_FUNC(sub_82A51A10);
PPC_FUNC_IMPL(__imp__sub_82A51A10) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a51918
	sub_82A51918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51A20"))) PPC_WEAK_FUNC(sub_82A51A20);
PPC_FUNC_IMPL(__imp__sub_82A51A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmpwi cr7,r5,0
	ctx.cr7.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmpwi cr1,r5,1
	ctx.cr1.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr7,0x82a51a54
	if (ctx.cr7.eq) goto loc_82A51A54;
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beq cr6,0x82a51a58
	if (ctx.cr6.eq) goto loc_82A51A58;
	// beq cr1,0x82a51a54
	if (ctx.cr1.eq) goto loc_82A51A54;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82A51A44:
	// lbzu r6,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmpw r6,r4
	ctx.cr0.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// bdnzf eq,0x82a51a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr0.eq) goto loc_82A51A44;
	// beq 0x82a51a58
	if (ctx.cr0.eq) goto loc_82A51A58;
loc_82A51A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A51A58:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51A60"))) PPC_WEAK_FUNC(sub_82A51A60);
PPC_FUNC_IMPL(__imp__sub_82A51A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-6564(r18)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r18.u32 + -6564);
	// lwz r17,-14888(r9)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14888);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82A51A70;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a51ac8
	if (!ctx.cr6.eq) goto loc_82A51AC8;
	// bl 0x82a52350
	ctx.lr = 0x82A51AA0;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51AC0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51c1c
	goto loc_82A51C1C;
loc_82A51AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a521c0
	ctx.lr = 0x82A51AD0;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51bd4
	if (!ctx.cr0.eq) goto loc_82A51BD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51AE8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51b38
	if (ctx.cr6.eq) goto loc_82A51B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51AF8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51b38
	if (ctx.cr6.eq) goto loc_82A51B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B08;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B20;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r9,r3,6,21,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r28,r11,1192
	ctx.r28.s64 = ctx.r11.s64 + 1192;
	// b 0x82a51b4c
	goto loc_82A51B4C;
loc_82A51B38:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// addi r28,r10,1192
	ctx.r28.s64 = ctx.r10.s64 + 1192;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A51B4C:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51ba8
	if (!ctx.cr0.eq) goto loc_82A51BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B60;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51b9c
	if (ctx.cr6.eq) goto loc_82A51B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B70;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51b9c
	if (ctx.cr6.eq) goto loc_82A51B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B80;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B90;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A51B9C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a51bd4
	if (ctx.cr0.eq) goto loc_82A51BD4;
loc_82A51BA8:
	// bl 0x82a52350
	ctx.lr = 0x82A51BAC;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51BCC;
	sub_82A580B0(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82A51BD4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a51c0c
	if (!ctx.cr6.eq) goto loc_82A51C0C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// blt 0x82a51c00
	if (ctx.cr0.lt) goto loc_82A51C00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82a51c08
	goto loc_82A51C08;
loc_82A51C00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64ba8
	ctx.lr = 0x82A51C08;
	sub_82A64BA8(ctx, base);
loc_82A51C08:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_82A51C0C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82a51c44
	ctx.lr = 0x82A51C18;
	sub_82A51C44(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A51C1C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51A68"))) PPC_WEAK_FUNC(sub_82A51A68);
PPC_FUNC_IMPL(__imp__sub_82A51A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82A51A70;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a51ac8
	if (!ctx.cr6.eq) goto loc_82A51AC8;
	// bl 0x82a52350
	ctx.lr = 0x82A51AA0;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51AC0;
	sub_82A580B0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82a51c1c
	goto loc_82A51C1C;
loc_82A51AC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a521c0
	ctx.lr = 0x82A51AD0;
	sub_82A521C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51bd4
	if (!ctx.cr0.eq) goto loc_82A51BD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51AE8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51b38
	if (ctx.cr6.eq) goto loc_82A51B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51AF8;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51b38
	if (ctx.cr6.eq) goto loc_82A51B38;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B08;
	sub_82A57AC0(ctx, base);
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B20;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r9,r3,6,21,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r28,r11,1192
	ctx.r28.s64 = ctx.r11.s64 + 1192;
	// b 0x82a51b4c
	goto loc_82A51B4C;
loc_82A51B38:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// addi r28,r10,1192
	ctx.r28.s64 = ctx.r10.s64 + 1192;
	// addi r29,r11,1280
	ctx.r29.s64 = ctx.r11.s64 + 1280;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A51B4C:
	// lbz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a51ba8
	if (!ctx.cr0.eq) goto loc_82A51BA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B60;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a51b9c
	if (ctx.cr6.eq) goto loc_82A51B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B70;
	sub_82A57AC0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82a51b9c
	if (ctx.cr6.eq) goto loc_82A51B9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B80;
	sub_82A57AC0(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a57ac0
	ctx.lr = 0x82A51B90;
	sub_82A57AC0(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// rlwinm r11,r3,6,21,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x7C0;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A51B9C:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a51bd4
	if (ctx.cr0.eq) goto loc_82A51BD4;
loc_82A51BA8:
	// bl 0x82a52350
	ctx.lr = 0x82A51BAC;
	sub_82A52350(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a580b0
	ctx.lr = 0x82A51BCC;
	sub_82A580B0(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
loc_82A51BD4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a51c0c
	if (!ctx.cr6.eq) goto loc_82A51C0C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// blt 0x82a51c00
	if (ctx.cr0.lt) goto loc_82A51C00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82a51c08
	goto loc_82A51C08;
loc_82A51C00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a64ba8
	ctx.lr = 0x82A51C08;
	sub_82A64BA8(ctx, base);
loc_82A51C08:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_82A51C0C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82a51c44
	ctx.lr = 0x82A51C18;
	sub_82A51C44(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82A51C1C:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A51C24"))) PPC_WEAK_FUNC(sub_82A51C24);
PPC_FUNC_IMPL(__imp__sub_82A51C24) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,164(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// b 0x82a51c5c
	goto loc_82A51C5C;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82A51C5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A51C64;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A51C44"))) PPC_WEAK_FUNC(sub_82A51C44);
PPC_FUNC_IMPL(__imp__sub_82A51C44) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-144
	ctx.r31.s64 = ctx.r12.s64 + -144;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a52280
	ctx.lr = 0x82A51C64;
	sub_82A52280(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

