#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826FCAA8"))) PPC_WEAK_FUNC(sub_826FCAA8);
PPC_FUNC_IMPL(__imp__sub_826FCAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826FCAB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x826df000
	ctx.lr = 0x826FCAC8;
	sub_826DF000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826fcb50
	if (!ctx.cr0.eq) goto loc_826FCB50;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// bne cr6,0x826fcb50
	if (!ctx.cr6.eq) goto loc_826FCB50;
	// addic. r30,r29,3320
	ctx.xer.ca = ctx.r29.u32 > 4294963975;
	ctx.r30.s64 = ctx.r29.s64 + 3320;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// beq 0x826fcb50
	if (ctx.cr0.eq) goto loc_826FCB50;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fcb50
	if (!ctx.cr6.gt) goto loc_826FCB50;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-29048
	ctx.r27.s64 = ctx.r11.s64 + -29048;
loc_826FCB00:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x826FCB0C;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FCB3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826fcb00
	if (ctx.cr6.lt) goto loc_826FCB00;
loc_826FCB50:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FCB60"))) PPC_WEAK_FUNC(sub_826FCB60);
PPC_FUNC_IMPL(__imp__sub_826FCB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826FCB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r29,3660(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCB94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lwz r10,708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// subf. r4,r3,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x826fcbb0
	if (ctx.cr0.lt) goto loc_826FCBB0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824a8c88
	ctx.lr = 0x826FCBAC;
	sub_824A8C88(ctx, base);
	// b 0x826fcbb8
	goto loc_826FCBB8;
loc_826FCBB0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fcc30
	if (!ctx.cr6.eq) goto loc_826FCC30;
loc_826FCBB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq 0x826fcc30
	if (ctx.cr0.eq) goto loc_826FCC30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438070
	ctx.lr = 0x826FCBE0;
	sub_82438070(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826fcc30
	if (ctx.cr0.eq) goto loc_826FCC30;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826fcc0c
	if (ctx.cr6.eq) goto loc_826FCC0C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826FCC04;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826FCC08;
	sub_82409C40(ctx, base);
	// b 0x826fcc10
	goto loc_826FCC10;
loc_826FCC0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826FCC10:
	// bl 0x82438130
	ctx.lr = 0x826FCC14;
	sub_82438130(ctx, base);
	// lwz r3,1968(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCC30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FCC30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FCC40"))) PPC_WEAK_FUNC(sub_826FCC40);
PPC_FUNC_IMPL(__imp__sub_826FCC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// b 0x8245d518
	sub_8245D518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FCC50"))) PPC_WEAK_FUNC(sub_826FCC50);
PPC_FUNC_IMPL(__imp__sub_826FCC50) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// beq cr6,0x826fcc8c
	if (ctx.cr6.eq) goto loc_826FCC8C;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x826fcd00
	if (ctx.cr6.eq) goto loc_826FCD00;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x826fccb8
	if (ctx.cr6.eq) goto loc_826FCCB8;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x826fcca8
	if (!ctx.cr6.eq) goto loc_826FCCA8;
loc_826FCC8C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCCA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FCCA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_826FCCB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCCD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82418bc8
	ctx.lr = 0x826FCCD8;
	sub_82418BC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826fcca8
	if (ctx.cr0.eq) goto loc_826FCCA8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x824b99b0
	ctx.lr = 0x826FCCFC;
	sub_824B99B0(ctx, base);
	// b 0x826fcca8
	goto loc_826FCCA8;
loc_826FCD00:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,9
	ctx.r4.s64 = ctx.r10.s64 + 9;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826fcca8
	goto loc_826FCCA8;
}

__attribute__((alias("__imp__sub_826FCD28"))) PPC_WEAK_FUNC(sub_826FCD28);
PPC_FUNC_IMPL(__imp__sub_826FCD28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x826fcd64
	if (ctx.cr6.eq) goto loc_826FCD64;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// beq cr6,0x826fcd5c
	if (ctx.cr6.eq) goto loc_826FCD5C;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x826fcd54
	if (ctx.cr6.eq) goto loc_826FCD54;
	// addi r11,r4,-33
	ctx.r11.s64 = ctx.r4.s64 + -33;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
loc_826FCD54:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826FCD5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826FCD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FCD70"))) PPC_WEAK_FUNC(sub_826FCD70);
PPC_FUNC_IMPL(__imp__sub_826FCD70) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x826fcdfc
	if (ctx.cr6.eq) goto loc_826FCDFC;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x826fcdb0
	if (ctx.cr6.eq) goto loc_826FCDB0;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// beq cr6,0x826fcda8
	if (ctx.cr6.eq) goto loc_826FCDA8;
	// bl 0x826e2e78
	ctx.lr = 0x826FCDA4;
	sub_826E2E78(ctx, base);
	// b 0x826fce18
	goto loc_826FCE18;
loc_826FCDA8:
	// li r6,33
	ctx.r6.s64 = 33;
	// b 0x826fce00
	goto loc_826FCE00;
loc_826FCDB0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FCDC8;
	sub_82873B58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8239d768
	ctx.lr = 0x826FCDD4;
	sub_8239D768(ctx, base);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// ble cr6,0x826fcdec
	if (!ctx.cr6.gt) goto loc_826FCDEC;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x826fce18
	goto loc_826FCE18;
loc_826FCDEC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826fce18
	if (!ctx.cr6.lt) goto loc_826FCE18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826fce18
	goto loc_826FCE18;
loc_826FCDFC:
	// li r6,30
	ctx.r6.s64 = 30;
loc_826FCE00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FCE18:
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

__attribute__((alias("__imp__sub_826FCE30"))) PPC_WEAK_FUNC(sub_826FCE30);
PPC_FUNC_IMPL(__imp__sub_826FCE30) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19988
	ctx.r4.s64 = ctx.r11.s64 + 19988;
	// bl 0x8233a258
	ctx.lr = 0x826FCE54;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x82400b48
	ctx.lr = 0x826FCE60;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826FCE68;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// addi r4,r11,-14592
	ctx.r4.s64 = ctx.r11.s64 + -14592;
	// bl 0x82400b48
	ctx.lr = 0x826FCE78;
	sub_82400B48(ctx, base);
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

__attribute__((alias("__imp__sub_826FCE90"))) PPC_WEAK_FUNC(sub_826FCE90);
PPC_FUNC_IMPL(__imp__sub_826FCE90) {
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
	// cmpwi cr6,r8,30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 30, ctx.xer);
	// bge cr6,0x826fceac
	if (!ctx.cr6.lt) goto loc_826FCEAC;
	// bl 0x826e30e8
	ctx.lr = 0x826FCEA8;
	sub_826E30E8(ctx, base);
	// b 0x826fcf00
	goto loc_826FCF00;
loc_826FCEAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r8,30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 30, ctx.xer);
	// bne cr6,0x826fcec0
	if (!ctx.cr6.eq) goto loc_826FCEC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x826fcecc
	goto loc_826FCECC;
loc_826FCEC0:
	// cmpwi cr6,r8,33
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 33, ctx.xer);
	// bne cr6,0x826fcedc
	if (!ctx.cr6.eq) goto loc_826FCEDC;
	// li r5,1
	ctx.r5.s64 = 1;
loc_826FCECC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// bl 0x8245f4a0
	ctx.lr = 0x826FCEDC;
	sub_8245F4A0(ctx, base);
loc_826FCEDC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x826fcef4
	if (ctx.cr6.gt) goto loc_826FCEF4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r6,r11,10
	ctx.xer.ca = ctx.r11.u32 <= 10;
	ctx.r6.s64 = 10 - ctx.r11.s64;
	// b 0x826fcef8
	goto loc_826FCEF8;
loc_826FCEF4:
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_826FCEF8:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_826FCF00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FCF10"))) PPC_WEAK_FUNC(sub_826FCF10);
PPC_FUNC_IMPL(__imp__sub_826FCF10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x826FCF18;
	__savegprlr_18(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826db5d8
	ctx.lr = 0x826FCF24;
	sub_826DB5D8(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r11,203
	ctx.r11.s64 = 203;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,3660(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826fcf6c
	if (!ctx.cr6.eq) goto loc_826FCF6C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCF64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// stw r29,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r29.u32);
loc_826FCF6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-5244
	ctx.r4.s64 = ctx.r10.s64 + -5244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r3,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-5208
	ctx.r4.s64 = ctx.r10.s64 + -5208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r3,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-5172
	ctx.r4.s64 = ctx.r10.s64 + -5172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FCFD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3596, ctx.r3.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,472
	ctx.r11.s64 = ctx.r1.s64 + 472;
	// li r24,2
	ctx.r24.s64 = 2;
loc_826FCFE4:
	// stw r24,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r24.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x826fcfe4
	if (!ctx.cr0.lt) goto loc_826FCFE4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5140
	ctx.r4.s64 = ctx.r11.s64 + -5140;
	// bl 0x8233a258
	ctx.lr = 0x826FD018;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82400b48
	ctx.lr = 0x826FD024;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD02C;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5128
	ctx.r4.s64 = ctx.r11.s64 + -5128;
	// bl 0x8233a258
	ctx.lr = 0x826FD03C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82400b48
	ctx.lr = 0x826FD048;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD050;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5116
	ctx.r4.s64 = ctx.r11.s64 + -5116;
	// bl 0x8233a258
	ctx.lr = 0x826FD060;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82400b48
	ctx.lr = 0x826FD06C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD074;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5104
	ctx.r4.s64 = ctx.r11.s64 + -5104;
	// bl 0x8233a258
	ctx.lr = 0x826FD084;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82400b48
	ctx.lr = 0x826FD090;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD098;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x8233a258
	ctx.lr = 0x826FD0A8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826FD0B4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD0BC;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// bl 0x8233a258
	ctx.lr = 0x826FD0CC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x826FD0D8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD0E0;
	sub_82333960(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// addi r28,r31,3344
	ctx.r28.s64 = ctx.r31.s64 + 3344;
	// addi r27,r31,3248
	ctx.r27.s64 = ctx.r31.s64 + 3248;
	// addi r30,r1,464
	ctx.r30.s64 = ctx.r1.s64 + 464;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r20,r11,7896
	ctx.r20.s64 = ctx.r11.s64 + 7896;
	// addi r21,r10,-19444
	ctx.r21.s64 = ctx.r10.s64 + -19444;
	// addi r23,r9,-19468
	ctx.r23.s64 = ctx.r9.s64 + -19468;
	// addi r25,r8,-19492
	ctx.r25.s64 = ctx.r8.s64 + -19492;
	// addi r22,r7,-19500
	ctx.r22.s64 = ctx.r7.s64 + -19500;
loc_826FD118:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FD124;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fd138
	if (ctx.cr6.eq) goto loc_826FD138;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826fd13c
	goto loc_826FD13C;
loc_826FD138:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD13C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82419348
	ctx.lr = 0x826FD148;
	sub_82419348(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD150;
	sub_82333960(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FD15C;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fd170
	if (ctx.cr6.eq) goto loc_826FD170;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826fd174
	goto loc_826FD174;
loc_826FD170:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD174:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419348
	ctx.lr = 0x826FD180;
	sub_82419348(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD188;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD198;
	sub_823339B8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FD1A8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD1C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD1D4;
	sub_82410060(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD1E4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD20C;
	sub_82410060(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r19,0(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD21C;
	sub_823339B8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FD22C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD248;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826fd260
	if (ctx.cr6.eq) goto loc_826FD260;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3368
	ctx.r3.s64 = ctx.r31.s64 + 3368;
	// bl 0x82410060
	ctx.lr = 0x826FD260;
	sub_82410060(ctx, base);
loc_826FD260:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FD268;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FD270;
	sub_82333960(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x826fd118
	if (!ctx.cr0.eq) goto loc_826FD118;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,328
	ctx.r11.s64 = ctx.r1.s64 + 328;
loc_826FD284:
	// stw r24,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r24.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r29,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r29.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x826fd284
	if (!ctx.cr0.lt) goto loc_826FD284;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5064
	ctx.r4.s64 = ctx.r11.s64 + -5064;
	// bl 0x8233a258
	ctx.lr = 0x826FD2B8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82400b48
	ctx.lr = 0x826FD2C4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD2CC;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5048
	ctx.r4.s64 = ctx.r11.s64 + -5048;
	// bl 0x8233a258
	ctx.lr = 0x826FD2DC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82400b48
	ctx.lr = 0x826FD2E8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD2F0;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5032
	ctx.r4.s64 = ctx.r11.s64 + -5032;
	// bl 0x8233a258
	ctx.lr = 0x826FD300;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400b48
	ctx.lr = 0x826FD30C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD314;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x8233a258
	ctx.lr = 0x826FD324;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82400b48
	ctx.lr = 0x826FD330;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD338;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5000
	ctx.r4.s64 = ctx.r11.s64 + -5000;
	// bl 0x8233a258
	ctx.lr = 0x826FD348;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82400b48
	ctx.lr = 0x826FD354;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD35C;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4984
	ctx.r4.s64 = ctx.r11.s64 + -4984;
	// bl 0x8233a258
	ctx.lr = 0x826FD36C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82400b48
	ctx.lr = 0x826FD378;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD380;
	sub_82333960(ctx, base);
	// addi r29,r31,3392
	ctx.r29.s64 = ctx.r31.s64 + 3392;
	// addi r28,r31,3296
	ctx.r28.s64 = ctx.r31.s64 + 3296;
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// li r27,6
	ctx.r27.s64 = 6;
loc_826FD390:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FD39C;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fd3b0
	if (ctx.cr6.eq) goto loc_826FD3B0;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826fd3b4
	goto loc_826FD3B4;
loc_826FD3B0:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD3B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82419348
	ctx.lr = 0x826FD3C0;
	sub_82419348(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD3C8;
	sub_82333960(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FD3D4;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fd3e8
	if (ctx.cr6.eq) goto loc_826FD3E8;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x826fd3ec
	goto loc_826FD3EC;
loc_826FD3E8:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD3EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419348
	ctx.lr = 0x826FD3F8;
	sub_82419348(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD400;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD410;
	sub_823339B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FD420;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD44C;
	sub_82410060(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD45C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD484;
	sub_82410060(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD494;
	sub_823339B8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FD4A4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826fd4d8
	if (ctx.cr6.eq) goto loc_826FD4D8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3416
	ctx.r3.s64 = ctx.r31.s64 + 3416;
	// bl 0x82410060
	ctx.lr = 0x826FD4D8;
	sub_82410060(ctx, base);
loc_826FD4D8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FD4E0;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FD4E8;
	sub_82333960(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x826fd390
	if (!ctx.cr0.eq) goto loc_826FD390;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8233a258
	ctx.lr = 0x826FD500;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,3488
	ctx.r29.s64 = ctx.r31.s64 + 3488;
	// addi r28,r31,3320
	ctx.r28.s64 = ctx.r31.s64 + 3320;
	// addi r27,r11,-4968
	ctx.r27.s64 = ctx.r11.s64 + -4968;
loc_826FD514:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FD520;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x828168f0
	ctx.lr = 0x826FD52C;
	sub_828168F0(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fd540
	if (!ctx.cr6.eq) goto loc_826FD540;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD540:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x826FD54C;
	sub_82419348(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FD558;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x826FD560;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD570;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8233a258
	ctx.lr = 0x826FD580;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD5AC;
	sub_82410060(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fd5c0
	if (!ctx.cr6.eq) goto loc_826FD5C0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD5C0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FD5CC;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD5DC;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FD604;
	sub_82410060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD60C;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FD614;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FD61C;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x826fd514
	if (!ctx.cr6.gt) goto loc_826FD514;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,-4952
	ctx.r29.s64 = ctx.r11.s64 + -4952;
loc_826FD634:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FD640;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x828168f0
	ctx.lr = 0x826FD64C;
	sub_828168F0(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fd660
	if (!ctx.cr6.eq) goto loc_826FD660;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_826FD660:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FD66C;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FD678;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FD680;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FD690;
	sub_823339B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8233a258
	ctx.lr = 0x826FD6A0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FD6BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826fd6d4
	if (ctx.cr6.eq) goto loc_826FD6D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3512
	ctx.r3.s64 = ctx.r31.s64 + 3512;
	// bl 0x82410060
	ctx.lr = 0x826FD6D4;
	sub_82410060(ctx, base);
loc_826FD6D4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FD6DC;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FD6E4;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x826fd634
	if (!ctx.cr6.gt) goto loc_826FD634;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FD6F8;
	sub_82333960(ctx, base);
	// addi r31,r1,464
	ctx.r31.s64 = ctx.r1.s64 + 464;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FD700:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FD70C;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826fd700
	if (!ctx.cr0.lt) goto loc_826FD700;
	// addi r31,r1,608
	ctx.r31.s64 = ctx.r1.s64 + 608;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FD71C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FD728;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826fd71c
	if (!ctx.cr0.lt) goto loc_826FD71C;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FD738"))) PPC_WEAK_FUNC(sub_826FD738);
PPC_FUNC_IMPL(__imp__sub_826FD738) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826dc610
	ctx.lr = 0x826FD754;
	sub_826DC610(ctx, base);
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FD760;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3344
	ctx.r4.s64 = ctx.r31.s64 + 3344;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FD770;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,30
	ctx.r8.s64 = 30;
	// bl 0x826dcd90
	ctx.lr = 0x826FD78C;
	sub_826DCD90(ctx, base);
	// addi r4,r31,3416
	ctx.r4.s64 = ctx.r31.s64 + 3416;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FD798;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3392
	ctx.r4.s64 = ctx.r31.s64 + 3392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FD7A8;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,33
	ctx.r8.s64 = 33;
	// bl 0x826dcd90
	ctx.lr = 0x826FD7C4;
	sub_826DCD90(ctx, base);
	// addi r4,r31,3512
	ctx.r4.s64 = ctx.r31.s64 + 3512;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FD7D0;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3488
	ctx.r4.s64 = ctx.r31.s64 + 3488;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FD7E0;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826fd808
	ctx.lr = 0x826FD7F0;
	sub_826FD808(ctx, base);
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

__attribute__((alias("__imp__sub_826FD808"))) PPC_WEAK_FUNC(sub_826FD808);
PPC_FUNC_IMPL(__imp__sub_826FD808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826FD810;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,10548(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10548);
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FD840;
	sub_82873B58(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FD854;
	sub_8239D768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fd9ac
	if (!ctx.cr6.gt) goto loc_826FD9AC;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r11,-18988
	ctx.r27.s64 = ctx.r11.s64 + -18988;
	// lfs f31,17684(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17684);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r10,-19008
	ctx.r29.s64 = ctx.r10.s64 + -19008;
loc_826FD898:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826fd914
	if (!ctx.cr6.gt) goto loc_826FD914;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bgt cr6,0x826fd8c4
	if (ctx.cr6.gt) goto loc_826FD8C4;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826fd8c8
	goto loc_826FD8C8;
loc_826FD8C4:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826FD8C8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8277b880
	ctx.lr = 0x826FD8D4;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FD904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x826fd998
	goto loc_826FD998;
loc_826FD914:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277b880
	ctx.lr = 0x826FD924;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FD954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x826FD964;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FD994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_826FD998:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826fd898
	if (ctx.cr6.lt) goto loc_826FD898;
loc_826FD9AC:
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r11,10548(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10548);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,-12104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FD9CC;
	sub_82873B58(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FD9DC;
	sub_8239D768(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fdad8
	if (!ctx.cr6.gt) goto loc_826FDAD8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,-18968
	ctx.r29.s64 = ctx.r10.s64 + -18968;
loc_826FD9FC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826fda7c
	if (!ctx.cr6.gt) goto loc_826FDA7C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x826fda28
	if (ctx.cr6.gt) goto loc_826FDA28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826fda2c
	goto loc_826FDA2C;
loc_826FDA28:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826FDA2C:
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x826FDA40;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FDA70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// b 0x826fdac0
	goto loc_826FDAC0;
loc_826FDA7C:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277b880
	ctx.lr = 0x826FDA8C;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FDABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826FDAC0:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826fd9fc
	if (ctx.cr6.lt) goto loc_826FD9FC;
loc_826FDAD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FDAE0;
	sub_8239D768(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FDAE8;
	sub_8239D768(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FDAF8"))) PPC_WEAK_FUNC(sub_826FDAF8);
PPC_FUNC_IMPL(__imp__sub_826FDAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826FDB00;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// bge cr6,0x826fdb1c
	if (!ctx.cr6.lt) goto loc_826FDB1C;
	// bl 0x826df0b8
	ctx.lr = 0x826FDB18;
	sub_826DF0B8(ctx, base);
	// b 0x826fdc90
	goto loc_826FDC90;
loc_826FDB1C:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x826fdc8c
	if (ctx.cr6.lt) goto loc_826FDC8C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x826fdc8c
	if (ctx.cr6.lt) goto loc_826FDC8C;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x826fdc6c
	if (ctx.cr6.eq) goto loc_826FDC6C;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// bne cr6,0x826fdbec
	if (!ctx.cr6.eq) goto loc_826FDBEC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,9
	ctx.r5.s64 = ctx.r31.s64 + 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,3660(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// bl 0x82460808
	ctx.lr = 0x826FDB5C;
	sub_82460808(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333858
	ctx.lr = 0x826FDB70;
	sub_82333858(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826fdb8c
	if (ctx.cr6.eq) goto loc_826FDB8C;
loc_826FDB84:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x826fdbc8
	goto loc_826FDBC8;
loc_826FDB8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826fdbc4
	if (!ctx.cr6.gt) goto loc_826FDBC4;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
loc_826FDBA4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826fdb84
	if (!ctx.cr6.eq) goto loc_826FDB84;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826fdba4
	if (ctx.cr6.lt) goto loc_826FDBA4;
loc_826FDBC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826FDBC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x826FDBD0;
	sub_8239D768(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826fdbe0
	if (ctx.cr6.eq) goto loc_826FDBE0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_826FDBE0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826FDBE8;
	sub_8239D768(ctx, base);
	// b 0x826fdc8c
	goto loc_826FDC8C;
loc_826FDBEC:
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x826fdc64
	if (!ctx.cr6.eq) goto loc_826FDC64;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FDC0C;
	sub_82873B58(ctx, base);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826fdc28
	if (ctx.cr6.lt) goto loc_826FDC28;
	// li r29,0
	ctx.r29.s64 = 0;
loc_826FDC28:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826FDC30;
	sub_8239D768(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826fdc8c
	if (ctx.cr0.eq) goto loc_826FDC8C;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,3660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FDC4C;
	sub_82873B58(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FDC60;
	sub_8239D768(ctx, base);
	// b 0x826fdc8c
	goto loc_826FDC8C;
loc_826FDC64:
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x826fdc8c
	if (!ctx.cr6.eq) goto loc_826FDC8C;
loc_826FDC6C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FDC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_826FDC8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826FDC90:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FDC98"))) PPC_WEAK_FUNC(sub_826FDC98);
PPC_FUNC_IMPL(__imp__sub_826FDC98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826FDCA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// bge cr6,0x826fdcc0
	if (!ctx.cr6.lt) goto loc_826FDCC0;
	// bl 0x826df408
	ctx.lr = 0x826FDCBC;
	sub_826DF408(ctx, base);
	// b 0x826fde34
	goto loc_826FDE34;
loc_826FDCC0:
	// addi r11,r4,-33
	ctx.r11.s64 = ctx.r4.s64 + -33;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x826fdcdc
	if (ctx.cr6.eq) goto loc_826FDCDC;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x826fde30
	if (!ctx.cr6.eq) goto loc_826FDE30;
loc_826FDCDC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,1328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1328);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FDCF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r31,3660(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245f4a0
	ctx.lr = 0x826FDD10;
	sub_8245F4A0(ctx, base);
	// addi r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8245f4a0
	ctx.lr = 0x826FDD24;
	sub_8245F4A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8245f4a0
	ctx.lr = 0x826FDD34;
	sub_8245F4A0(ctx, base);
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x826fdd54
	if (!ctx.cr6.lt) goto loc_826FDD54;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_826FDD54:
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x826fdd80
	if (ctx.cr6.lt) goto loc_826FDD80;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826fdd70
	if (!ctx.cr6.lt) goto loc_826FDD70;
	// subf r27,r3,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r3.s64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// b 0x826fdd80
	goto loc_826FDD80;
loc_826FDD70:
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826fde30
	if (!ctx.cr6.lt) goto loc_826FDE30;
	// subf r27,r11,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_826FDD80:
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x826fde30
	if (ctx.cr6.eq) goto loc_826FDE30;
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// bge cr6,0x826fde30
	if (!ctx.cr6.lt) goto loc_826FDE30;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82460808
	ctx.lr = 0x826FDDA4;
	sub_82460808(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333858
	ctx.lr = 0x826FDDB8;
	sub_82333858(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826fddd4
	if (ctx.cr6.eq) goto loc_826FDDD4;
loc_826FDDCC:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x826fde10
	goto loc_826FDE10;
loc_826FDDD4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826fde0c
	if (!ctx.cr6.gt) goto loc_826FDE0C;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
loc_826FDDEC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826fddcc
	if (!ctx.cr6.eq) goto loc_826FDDCC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826fddec
	if (ctx.cr6.lt) goto loc_826FDDEC;
loc_826FDE0C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826FDE10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x826FDE18;
	sub_8239D768(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826fde28
	if (ctx.cr6.eq) goto loc_826FDE28;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
loc_826FDE28:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826FDE30;
	sub_8239D768(ctx, base);
loc_826FDE30:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_826FDE34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FDE40"))) PPC_WEAK_FUNC(sub_826FDE40);
PPC_FUNC_IMPL(__imp__sub_826FDE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826FDE48;
	__savegprlr_28(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// beq cr6,0x826fdf28
	if (ctx.cr6.eq) goto loc_826FDF28;
	// cmpwi cr6,r4,31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 31, ctx.xer);
	// beq cr6,0x826fdeec
	if (ctx.cr6.eq) goto loc_826FDEEC;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// beq cr6,0x826fdeb4
	if (ctx.cr6.eq) goto loc_826FDEB4;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// beq cr6,0x826fde7c
	if (ctx.cr6.eq) goto loc_826FDE7C;
	// bl 0x826e2c48
	ctx.lr = 0x826FDE78;
	sub_826E2C48(ctx, base);
	// b 0x826fdf78
	goto loc_826FDF78;
loc_826FDE7C:
	// addi r4,r31,3416
	ctx.r4.s64 = ctx.r31.s64 + 3416;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82873b58
	ctx.lr = 0x826FDE88;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3392
	ctx.r4.s64 = ctx.r31.s64 + 3392;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82873b58
	ctx.lr = 0x826FDE98;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3296
	ctx.r4.s64 = ctx.r31.s64 + 3296;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82873b58
	ctx.lr = 0x826FDEA8;
	sub_82873B58(ctx, base);
	// lwz r4,3588(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3588);
	// li r9,33
	ctx.r9.s64 = 33;
	// b 0x826fdf5c
	goto loc_826FDF5C;
loc_826FDEB4:
	// addi r4,r31,3512
	ctx.r4.s64 = ctx.r31.s64 + 3512;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82873b58
	ctx.lr = 0x826FDEC0;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3488
	ctx.r4.s64 = ctx.r31.s64 + 3488;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82873b58
	ctx.lr = 0x826FDED0;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3320
	ctx.r4.s64 = ctx.r31.s64 + 3320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FDEE0;
	sub_82873B58(ctx, base);
	// lwz r4,3596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3596);
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x826fdf5c
	goto loc_826FDF5C;
loc_826FDEEC:
	// addi r4,r31,3464
	ctx.r4.s64 = ctx.r31.s64 + 3464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FDEF8;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3440
	ctx.r4.s64 = ctx.r31.s64 + 3440;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82873b58
	ctx.lr = 0x826FDF08;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3272
	ctx.r4.s64 = ctx.r31.s64 + 3272;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82873b58
	ctx.lr = 0x826FDF18;
	sub_82873B58(ctx, base);
	// lwz r4,3592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// li r8,9
	ctx.r8.s64 = 9;
	// li r9,31
	ctx.r9.s64 = 31;
	// b 0x826fdf60
	goto loc_826FDF60;
loc_826FDF28:
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82873b58
	ctx.lr = 0x826FDF34;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3344
	ctx.r4.s64 = ctx.r31.s64 + 3344;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82873b58
	ctx.lr = 0x826FDF44;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3248
	ctx.r4.s64 = ctx.r31.s64 + 3248;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82873b58
	ctx.lr = 0x826FDF54;
	sub_82873B58(ctx, base);
	// lwz r4,3584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	// li r9,30
	ctx.r9.s64 = 30;
loc_826FDF5C:
	// li r8,0
	ctx.r8.s64 = 0;
loc_826FDF60:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e29d8
	ctx.lr = 0x826FDF78;
	sub_826E29D8(ctx, base);
loc_826FDF78:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FDF80"))) PPC_WEAK_FUNC(sub_826FDF80);
PPC_FUNC_IMPL(__imp__sub_826FDF80) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x826fdf8c
	if (ctx.cr6.lt) goto loc_826FDF8C;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_826FDF8C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FDF98"))) PPC_WEAK_FUNC(sub_826FDF98);
PPC_FUNC_IMPL(__imp__sub_826FDF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826FDFA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826e6098
	ctx.lr = 0x826FDFAC;
	sub_826E6098(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17976
	ctx.r4.s64 = ctx.r11.s64 + -17976;
	// bl 0x8233a258
	ctx.lr = 0x826FDFBC;
	sub_8233A258(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-25608
	ctx.r4.s64 = ctx.r11.s64 + -25608;
	// bl 0x8233a258
	ctx.lr = 0x826FDFCC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-5140
	ctx.r4.s64 = ctx.r11.s64 + -5140;
	// bl 0x8233a258
	ctx.lr = 0x826FDFDC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,-5128
	ctx.r4.s64 = ctx.r11.s64 + -5128;
	// bl 0x8233a258
	ctx.lr = 0x826FDFEC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-5116
	ctx.r4.s64 = ctx.r11.s64 + -5116;
	// bl 0x8233a258
	ctx.lr = 0x826FDFFC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,-4936
	ctx.r4.s64 = ctx.r11.s64 + -4936;
	// bl 0x8233a258
	ctx.lr = 0x826FE00C;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-5088
	ctx.r4.s64 = ctx.r11.s64 + -5088;
	// bl 0x8233a258
	ctx.lr = 0x826FE01C;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,-5076
	ctx.r4.s64 = ctx.r11.s64 + -5076;
	// bl 0x8233a258
	ctx.lr = 0x826FE02C;
	sub_8233A258(ctx, base);
	// lwz r11,3556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3556);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r30,3536
	ctx.r25.s64 = ctx.r30.s64 + 3536;
	// stw r31,3552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3552, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fe058
	if (ctx.cr6.eq) goto loc_826FE058;
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x826FE058;
	sub_82332C38(ctx, base);
loc_826FE058:
	// lwz r11,3580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3580);
	// addi r27,r30,3560
	ctx.r27.s64 = ctx.r30.s64 + 3560;
	// stw r31,3576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3576, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fe080
	if (ctx.cr6.eq) goto loc_826FE080;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x826FE080;
	sub_82332C38(ctx, base);
loc_826FE080:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r29,r1,300
	ctx.r29.s64 = ctx.r1.s64 + 300;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
loc_826FE090:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826fe0a4
	if (ctx.cr6.eq) goto loc_826FE0A4;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826fe0a8
	goto loc_826FE0A8;
loc_826FE0A4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FE0A8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FE0B4;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FE0C4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE0DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x826fe10c
	if (ctx.cr6.eq) goto loc_826FE10C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x826FE0F0;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826fe10c
	if (ctx.cr0.eq) goto loc_826FE10C;
	// bl 0x826d1ed0
	ctx.lr = 0x826FE0FC;
	sub_826D1ED0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x826FE10C;
	sub_82410060(ctx, base);
loc_826FE10C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fe120
	if (!ctx.cr6.eq) goto loc_826FE120;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FE120:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FE12C;
	sub_82419348(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826fe13c
	if (ctx.cr6.eq) goto loc_826FE13C;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826fe140
	goto loc_826FE140;
loc_826FE13C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FE140:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x826FE14C;
	sub_82419348(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826FE158;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x826FE160;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FE168;
	sub_82333960(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FE178;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x826fe1c0
	if (ctx.cr6.eq) goto loc_826FE1C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x826FE1A4;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826fe1c0
	if (ctx.cr0.eq) goto loc_826FE1C0;
	// bl 0x826d1ed0
	ctx.lr = 0x826FE1B0;
	sub_826D1ED0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826FE1C0;
	sub_82410060(ctx, base);
loc_826FE1C0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FE1C8;
	sub_82333960(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x826fe090
	if (!ctx.cr0.eq) goto loc_826FE090;
	// addi r31,r1,432
	ctx.r31.s64 = ctx.r1.s64 + 432;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FE1DC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FE1E8;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826fe1dc
	if (!ctx.cr0.lt) goto loc_826FE1DC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FE1F8;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FE200;
	sub_82333960(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FE208"))) PPC_WEAK_FUNC(sub_826FE208);
PPC_FUNC_IMPL(__imp__sub_826FE208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x826FE210;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826e3f68
	ctx.lr = 0x826FE224;
	sub_826E3F68(ctx, base);
	// mr. r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne 0x826fe530
	if (!ctx.cr0.eq) goto loc_826FE530;
	// lwz r11,3584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r15,-1
	ctx.r15.s64 = -1;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// stb r16,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826fe264
	if (!ctx.cr6.eq) goto loc_826FE264;
	// addi r28,r31,3344
	ctx.r28.s64 = ctx.r31.s64 + 3344;
	// li r22,30
	ctx.r22.s64 = 30;
	// addi r23,r31,3536
	ctx.r23.s64 = ctx.r31.s64 + 3536;
	// b 0x826fe2b0
	goto loc_826FE2B0;
loc_826FE264:
	// lwz r11,3592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826fe280
	if (!ctx.cr6.eq) goto loc_826FE280;
	// addi r28,r31,3440
	ctx.r28.s64 = ctx.r31.s64 + 3440;
	// li r22,31
	ctx.r22.s64 = 31;
	// li r25,9
	ctx.r25.s64 = 9;
	// b 0x826fe2b4
	goto loc_826FE2B4;
loc_826FE280:
	// lwz r11,3596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3596);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826fe298
	if (!ctx.cr6.eq) goto loc_826FE298;
	// addi r28,r31,3488
	ctx.r28.s64 = ctx.r31.s64 + 3488;
	// li r22,32
	ctx.r22.s64 = 32;
	// b 0x826fe2b0
	goto loc_826FE2B0;
loc_826FE298:
	// lwz r11,3588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3588);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826fe530
	if (!ctx.cr6.eq) goto loc_826FE530;
	// addi r28,r31,3392
	ctx.r28.s64 = ctx.r31.s64 + 3392;
	// li r22,33
	ctx.r22.s64 = 33;
	// addi r23,r31,3560
	ctx.r23.s64 = ctx.r31.s64 + 3560;
loc_826FE2B0:
	// li r25,6
	ctx.r25.s64 = 6;
loc_826FE2B4:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x826fe464
	if (!ctx.cr6.gt) goto loc_826FE464;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// lis r21,-32244
	ctx.r21.s64 = -2113142784;
	// addi r24,r11,-18124
	ctx.r24.s64 = ctx.r11.s64 + -18124;
loc_826FE2E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826fe398
	if (!ctx.cr0.eq) goto loc_826FE398;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x826fe314
	if (!ctx.cr6.eq) goto loc_826FE314;
	// li r18,1
	ctx.r18.s64 = 1;
loc_826FE314:
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e3d20
	ctx.lr = 0x826FE330;
	sub_826E3D20(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x826e3e08
	ctx.lr = 0x826FE34C;
	sub_826E3E08(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826fe370
	if (ctx.cr6.eq) goto loc_826FE370;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826fe370
	if (!ctx.cr6.lt) goto loc_826FE370;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lfs f1,24724(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e65b0
	ctx.lr = 0x826FE370;
	sub_826E65B0(ctx, base);
loc_826FE370:
	// lwz r11,1976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826fe44c
	if (ctx.cr6.eq) goto loc_826FE44C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x826fe44c
	if (!ctx.cr6.eq) goto loc_826FE44C;
	// addi r20,r29,-1
	ctx.r20.s64 = ctx.r29.s64 + -1;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bge cr6,0x826fe444
	if (!ctx.cr6.lt) goto loc_826FE444;
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x826fe444
	goto loc_826FE444;
loc_826FE398:
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// bl 0x826e3d20
	ctx.lr = 0x826FE3B8;
	sub_826E3D20(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x826e3e08
	ctx.lr = 0x826FE3D4;
	sub_826E3E08(ctx, base);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x826fe3e0
	if (!ctx.cr6.eq) goto loc_826FE3E0;
	// mr r20,r29
	ctx.r20.u64 = ctx.r29.u64;
loc_826FE3E0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x826fe404
	if (ctx.cr6.eq) goto loc_826FE404;
	// lwz r11,16(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826fe404
	if (!ctx.cr6.lt) goto loc_826FE404;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e65b0
	ctx.lr = 0x826FE404;
	sub_826E65B0(ctx, base);
loc_826FE404:
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 32, ctx.xer);
	// bne cr6,0x826fe42c
	if (!ctx.cr6.eq) goto loc_826FE42C;
	// addi r9,r31,3320
	ctx.r9.s64 = ctx.r31.s64 + 3320;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e4de8
	ctx.lr = 0x826FE42C;
	sub_826E4DE8(ctx, base);
loc_826FE42C:
	// lwz r11,1976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826fe44c
	if (ctx.cr6.eq) goto loc_826FE44C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x826fe44c
	if (!ctx.cr6.eq) goto loc_826FE44C;
	// addi r20,r11,1
	ctx.r20.s64 = ctx.r11.s64 + 1;
loc_826FE444:
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r15,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r15.u32);
loc_826FE44C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x826fe2e0
	if (ctx.cr6.lt) goto loc_826FE2E0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x826fe478
	if (ctx.cr6.eq) goto loc_826FE478;
loc_826FE464:
	// stw r16,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r16.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dfa18
	ctx.lr = 0x826FE478;
	sub_826DFA18(ctx, base);
loc_826FE478:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x826fe48c
	if (!ctx.cr6.eq) goto loc_826FE48C;
	// lwz r11,2284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826fe530
	if (ctx.cr6.eq) goto loc_826FE530;
loc_826FE48C:
	// lwz r11,2284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826fe540
	if (ctx.cr6.eq) goto loc_826FE540;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r15,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r15.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_826FE4AC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29048
	ctx.r4.s64 = ctx.r11.s64 + -29048;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8277b880
	ctx.lr = 0x826FE4C8;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FE4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FE4F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18104
	ctx.r4.s64 = ctx.r11.s64 + -18104;
	// bl 0x8277b880
	ctx.lr = 0x826FE504;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FE530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FE530:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
loc_826FE540:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// beq cr6,0x826fe558
	if (ctx.cr6.eq) goto loc_826FE558;
	// extsw r11,r20
	ctx.r11.s64 = ctx.r20.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x826fe4ac
	goto loc_826FE4AC;
loc_826FE558:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r15,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r15.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r15,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r15.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,1268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826fe4f4
	if (ctx.cr6.eq) goto loc_826FE4F4;
	// lwz r4,2096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x82707a18
	ctx.lr = 0x826FE598;
	sub_82707A18(ctx, base);
	// b 0x826fe4f4
	goto loc_826FE4F4;
}

__attribute__((alias("__imp__sub_826FE5A0"))) PPC_WEAK_FUNC(sub_826FE5A0);
PPC_FUNC_IMPL(__imp__sub_826FE5A0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x826fe5ac
	if (ctx.cr6.lt) goto loc_826FE5AC;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_826FE5AC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FE5B8"))) PPC_WEAK_FUNC(sub_826FE5B8);
PPC_FUNC_IMPL(__imp__sub_826FE5B8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// beq cr6,0x826fe5e0
	if (ctx.cr6.eq) goto loc_826FE5E0;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x826fe5d8
	if (ctx.cr6.eq) goto loc_826FE5D8;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// beq cr6,0x826fe5e0
	if (ctx.cr6.eq) goto loc_826FE5E0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_826FE5D8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_826FE5E0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FE5E8"))) PPC_WEAK_FUNC(sub_826FE5E8);
PPC_FUNC_IMPL(__imp__sub_826FE5E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826FE5F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// beq cr6,0x826fe68c
	if (ctx.cr6.eq) goto loc_826FE68C;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x826fe654
	if (ctx.cr6.eq) goto loc_826FE654;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// beq cr6,0x826fe61c
	if (ctx.cr6.eq) goto loc_826FE61C;
	// bl 0x826e2c48
	ctx.lr = 0x826FE618;
	sub_826E2C48(ctx, base);
	// b 0x826fe6dc
	goto loc_826FE6DC;
loc_826FE61C:
	// addi r4,r31,3392
	ctx.r4.s64 = ctx.r31.s64 + 3392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FE628;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82873b58
	ctx.lr = 0x826FE638;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3272
	ctx.r4.s64 = ctx.r31.s64 + 3272;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82873b58
	ctx.lr = 0x826FE648;
	sub_82873B58(ctx, base);
	// lwz r4,3520(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	// li r9,42
	ctx.r9.s64 = 42;
	// b 0x826fe6c0
	goto loc_826FE6C0;
loc_826FE654:
	// addi r4,r31,3440
	ctx.r4.s64 = ctx.r31.s64 + 3440;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82873b58
	ctx.lr = 0x826FE660;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3416
	ctx.r4.s64 = ctx.r31.s64 + 3416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FE670;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3296
	ctx.r4.s64 = ctx.r31.s64 + 3296;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82873b58
	ctx.lr = 0x826FE680;
	sub_82873B58(ctx, base);
	// lwz r4,3516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// li r9,41
	ctx.r9.s64 = 41;
	// b 0x826fe6c0
	goto loc_826FE6C0;
loc_826FE68C:
	// addi r4,r31,3344
	ctx.r4.s64 = ctx.r31.s64 + 3344;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82873b58
	ctx.lr = 0x826FE698;
	sub_82873B58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,3320
	ctx.r4.s64 = ctx.r31.s64 + 3320;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82873b58
	ctx.lr = 0x826FE6A8;
	sub_82873B58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,3248
	ctx.r4.s64 = ctx.r31.s64 + 3248;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82873b58
	ctx.lr = 0x826FE6B8;
	sub_82873B58(ctx, base);
	// lwz r4,3512(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3512);
	// li r9,40
	ctx.r9.s64 = 40;
loc_826FE6C0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e29d8
	ctx.lr = 0x826FE6DC;
	sub_826E29D8(ctx, base);
loc_826FE6DC:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FE6E8"))) PPC_WEAK_FUNC(sub_826FE6E8);
PPC_FUNC_IMPL(__imp__sub_826FE6E8) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19968
	ctx.r4.s64 = ctx.r11.s64 + 19968;
	// bl 0x8233a258
	ctx.lr = 0x826FE70C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x82400b48
	ctx.lr = 0x826FE718;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x826FE720;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// addi r4,r11,-14592
	ctx.r4.s64 = ctx.r11.s64 + -14592;
	// bl 0x82400b48
	ctx.lr = 0x826FE730;
	sub_82400B48(ctx, base);
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

__attribute__((alias("__imp__sub_826FE748"))) PPC_WEAK_FUNC(sub_826FE748);
PPC_FUNC_IMPL(__imp__sub_826FE748) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826dc610
	ctx.lr = 0x826FE764;
	sub_826DC610(ctx, base);
	// addi r4,r31,3392
	ctx.r4.s64 = ctx.r31.s64 + 3392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FE770;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FE780;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x826ff510
	ctx.lr = 0x826FE79C;
	sub_826FF510(ctx, base);
	// addi r4,r31,3344
	ctx.r4.s64 = ctx.r31.s64 + 3344;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FE7A8;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3320
	ctx.r4.s64 = ctx.r31.s64 + 3320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FE7B8;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826ff510
	ctx.lr = 0x826FE7D4;
	sub_826FF510(ctx, base);
	// addi r4,r31,3440
	ctx.r4.s64 = ctx.r31.s64 + 3440;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82873b58
	ctx.lr = 0x826FE7E0;
	sub_82873B58(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r31,3416
	ctx.r4.s64 = ctx.r31.s64 + 3416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x826FE7F0;
	sub_82873B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x826ff740
	ctx.lr = 0x826FE800;
	sub_826FF740(ctx, base);
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

__attribute__((alias("__imp__sub_826FE818"))) PPC_WEAK_FUNC(sub_826FE818);
PPC_FUNC_IMPL(__imp__sub_826FE818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826FE820;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826fc2a0
	ctx.lr = 0x826FE82C;
	sub_826FC2A0(ctx, base);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-5696
	ctx.r4.s64 = ctx.r11.s64 + -5696;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x829c80b8
	ctx.lr = 0x826FE84C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826fe8d4
	if (!ctx.cr0.eq) goto loc_826FE8D4;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823f7a88
	ctx.lr = 0x826FE85C;
	sub_823F7A88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826FE87C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826fe8c0
	if (ctx.cr0.eq) goto loc_826FE8C0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// b 0x826fe8c4
	goto loc_826FE8C4;
loc_826FE8C0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_826FE8C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826FE8D0;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826FE8D4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r30,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FE908"))) PPC_WEAK_FUNC(sub_826FE908);
PPC_FUNC_IMPL(__imp__sub_826FE908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826FE910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x826dad70
	ctx.lr = 0x826FE918;
	sub_826DAD70(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82833108
	ctx.lr = 0x826FE920;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// beq 0x826fe984
	if (ctx.cr0.eq) goto loc_826FE984;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826fe944
	if (ctx.cr0.eq) goto loc_826FE944;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826fe948
	goto loc_826FE948;
loc_826FE944:
	// li r30,0
	ctx.r30.s64 = 0;
loc_826FE948:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826fe958
	if (ctx.cr0.eq) goto loc_826FE958;
	// lwz r31,80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x826fe95c
	goto loc_826FE95C;
loc_826FE958:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826FE95C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-4924
	ctx.r3.s64 = ctx.r11.s64 + -4924;
	// bl 0x82816528
	ctx.lr = 0x826FE968;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x826453a8
	ctx.lr = 0x826FE97C;
	sub_826453A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x826fe988
	goto loc_826FE988;
loc_826FE984:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826FE988:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// bl 0x82816528
	ctx.lr = 0x826FE994;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82410060
	ctx.lr = 0x826FE9A4;
	sub_82410060(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826FE9B4;
	sub_82833A30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FE9C0"))) PPC_WEAK_FUNC(sub_826FE9C0);
PPC_FUNC_IMPL(__imp__sub_826FE9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826FE9C8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r24,r11,24692
	ctx.r24.s64 = ctx.r11.s64 + 24692;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82816528
	ctx.lr = 0x826FE9E0;
	sub_82816528(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82975348
	ctx.lr = 0x826FE9F0;
	sub_82975348(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826feb28
	if (ctx.cr0.eq) goto loc_826FEB28;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r30,r11,-21636
	ctx.r30.s64 = ctx.r11.s64 + -21636;
	// addi r29,r10,-21568
	ctx.r29.s64 = ctx.r10.s64 + -21568;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-4836
	ctx.r5.s64 = ctx.r11.s64 + -4836;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828db5e0
	ctx.lr = 0x826FEA28;
	sub_828DB5E0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r22,r11,7896
	ctx.r22.s64 = ctx.r11.s64 + 7896;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fea44
	if (!ctx.cr6.eq) goto loc_826FEA44;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_826FEA44:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-4924
	ctx.r3.s64 = ctx.r11.s64 + -4924;
	// bl 0x82816528
	ctx.lr = 0x826FEA50;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,10548(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// bl 0x8242f7e8
	ctx.lr = 0x826FEA98;
	sub_8242F7E8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-4788
	ctx.r5.s64 = ctx.r11.s64 + -4788;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x826FEAB8;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x826FEAC4;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x826FEACC;
	sub_82333960(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826feae0
	if (!ctx.cr6.eq) goto loc_826FEAE0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_826FEAE0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-4880
	ctx.r3.s64 = ctx.r11.s64 + -4880;
	// bl 0x82816528
	ctx.lr = 0x826FEAEC;
	sub_82816528(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// bl 0x8242f7e8
	ctx.lr = 0x826FEB20;
	sub_8242F7E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x826FEB28;
	sub_82333960(ctx, base);
loc_826FEB28:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FEB38"))) PPC_WEAK_FUNC(sub_826FEB38);
PPC_FUNC_IMPL(__imp__sub_826FEB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x826FEB40;
	__savegprlr_19(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,203
	ctx.r11.s64 = 203;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// bl 0x826db5d8
	ctx.lr = 0x826FEB58;
	sub_826DB5D8(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,3664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// lwz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826feb94
	if (!ctx.cr6.eq) goto loc_826FEB94;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// stw r26,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r26.u32);
loc_826FEB94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-4740
	ctx.r4.s64 = ctx.r10.s64 + -4740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r3,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-4708
	ctx.r4.s64 = ctx.r10.s64 + -4708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEBD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r3,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-4672
	ctx.r4.s64 = ctx.r10.s64 + -4672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEBFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r3.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,472
	ctx.r11.s64 = ctx.r1.s64 + 472;
	// li r25,2
	ctx.r25.s64 = 2;
loc_826FEC0C:
	// stw r25,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r25.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r26,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r26.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x826fec0c
	if (!ctx.cr0.lt) goto loc_826FEC0C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4636
	ctx.r4.s64 = ctx.r11.s64 + -4636;
	// bl 0x8233a258
	ctx.lr = 0x826FEC40;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82400b48
	ctx.lr = 0x826FEC4C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEC54;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4620
	ctx.r4.s64 = ctx.r11.s64 + -4620;
	// bl 0x8233a258
	ctx.lr = 0x826FEC64;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82400b48
	ctx.lr = 0x826FEC70;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEC78;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4600
	ctx.r4.s64 = ctx.r11.s64 + -4600;
	// bl 0x8233a258
	ctx.lr = 0x826FEC88;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82400b48
	ctx.lr = 0x826FEC94;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEC9C;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4584
	ctx.r4.s64 = ctx.r11.s64 + -4584;
	// bl 0x8233a258
	ctx.lr = 0x826FECAC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,536
	ctx.r3.s64 = ctx.r1.s64 + 536;
	// bl 0x82400b48
	ctx.lr = 0x826FECB8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FECC0;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4564
	ctx.r4.s64 = ctx.r11.s64 + -4564;
	// bl 0x8233a258
	ctx.lr = 0x826FECD0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82400b48
	ctx.lr = 0x826FECDC;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FECE4;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4544
	ctx.r4.s64 = ctx.r11.s64 + -4544;
	// bl 0x8233a258
	ctx.lr = 0x826FECF4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x82400b48
	ctx.lr = 0x826FED00;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FED08;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-19492
	ctx.r4.s64 = ctx.r11.s64 + -19492;
	// bl 0x8233a258
	ctx.lr = 0x826FED18;
	sub_8233A258(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r28,r31,3320
	ctx.r28.s64 = ctx.r31.s64 + 3320;
	// addi r27,r31,3248
	ctx.r27.s64 = ctx.r31.s64 + 3248;
	// addi r30,r1,464
	ctx.r30.s64 = ctx.r1.s64 + 464;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r21,r11,7896
	ctx.r21.s64 = ctx.r11.s64 + 7896;
	// addi r24,r10,-19468
	ctx.r24.s64 = ctx.r10.s64 + -19468;
	// lwz r22,272(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r20,268(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
loc_826FED40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823339b8
	ctx.lr = 0x826FED50;
	sub_823339B8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8233a258
	ctx.lr = 0x826FED60;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FED7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FED8C;
	sub_82410060(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne cr6,0x826fed9c
	if (!ctx.cr6.eq) goto loc_826FED9C;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FED9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419348
	ctx.lr = 0x826FEDA8;
	sub_82419348(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r23,0(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FEDB8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826FEDE0;
	sub_82410060(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FEDE8;
	sub_82333960(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x826fed40
	if (!ctx.cr0.eq) goto loc_826FED40;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r23,r11,-19444
	ctx.r23.s64 = ctx.r11.s64 + -19444;
	// addi r30,r10,-4528
	ctx.r30.s64 = ctx.r10.s64 + -4528;
loc_826FEE08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FEE14;
	sub_8233A258(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828168f0
	ctx.lr = 0x826FEE20;
	sub_828168F0(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fee34
	if (!ctx.cr6.eq) goto loc_826FEE34;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FEE34:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FEE40;
	sub_82419348(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FEE4C;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FEE54;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FEE64;
	sub_823339B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FEE74;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FEE90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826feea8
	if (ctx.cr6.eq) goto loc_826FEEA8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3344
	ctx.r3.s64 = ctx.r31.s64 + 3344;
	// bl 0x82410060
	ctx.lr = 0x826FEEA8;
	sub_82410060(ctx, base);
loc_826FEEA8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FEEB0;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FEEB8;
	sub_82333960(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// ble cr6,0x826fee08
	if (!ctx.cr6.gt) goto loc_826FEE08;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,328
	ctx.r11.s64 = ctx.r1.s64 + 328;
loc_826FEECC:
	// stw r25,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r25.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r26,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r26,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r26.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x826feecc
	if (!ctx.cr0.lt) goto loc_826FEECC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4512
	ctx.r4.s64 = ctx.r11.s64 + -4512;
	// bl 0x8233a258
	ctx.lr = 0x826FEF00;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82400b48
	ctx.lr = 0x826FEF0C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEF14;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4492
	ctx.r4.s64 = ctx.r11.s64 + -4492;
	// bl 0x8233a258
	ctx.lr = 0x826FEF24;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// bl 0x82400b48
	ctx.lr = 0x826FEF30;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEF38;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4468
	ctx.r4.s64 = ctx.r11.s64 + -4468;
	// bl 0x8233a258
	ctx.lr = 0x826FEF48;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82400b48
	ctx.lr = 0x826FEF54;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEF5C;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4448
	ctx.r4.s64 = ctx.r11.s64 + -4448;
	// bl 0x8233a258
	ctx.lr = 0x826FEF6C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,392
	ctx.r3.s64 = ctx.r1.s64 + 392;
	// bl 0x82400b48
	ctx.lr = 0x826FEF78;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEF80;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4424
	ctx.r4.s64 = ctx.r11.s64 + -4424;
	// bl 0x8233a258
	ctx.lr = 0x826FEF90;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82400b48
	ctx.lr = 0x826FEF9C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEFA4;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4400
	ctx.r4.s64 = ctx.r11.s64 + -4400;
	// bl 0x8233a258
	ctx.lr = 0x826FEFB4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82400b48
	ctx.lr = 0x826FEFC0;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FEFC8;
	sub_82333960(ctx, base);
	// addi r28,r31,3368
	ctx.r28.s64 = ctx.r31.s64 + 3368;
	// addi r27,r31,3272
	ctx.r27.s64 = ctx.r31.s64 + 3272;
	// addi r30,r1,320
	ctx.r30.s64 = ctx.r1.s64 + 320;
	// li r29,6
	ctx.r29.s64 = 6;
loc_826FEFD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823339b8
	ctx.lr = 0x826FEFE8;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FEFF8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FF024;
	sub_82410060(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne cr6,0x826ff034
	if (!ctx.cr6.eq) goto loc_826FF034;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FF034:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FF040;
	sub_82419348(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FF050;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826FF078;
	sub_82410060(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FF080;
	sub_82333960(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x826fefd8
	if (!ctx.cr0.eq) goto loc_826FEFD8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,-4380
	ctx.r29.s64 = ctx.r11.s64 + -4380;
loc_826FF098:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FF0A4;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828168f0
	ctx.lr = 0x826FF0B0;
	sub_828168F0(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff0c4
	if (!ctx.cr6.eq) goto loc_826FF0C4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FF0C4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FF0D0;
	sub_82419348(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FF0DC;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FF0E4;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FF0F4;
	sub_823339B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x826FF104;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826ff138
	if (ctx.cr6.eq) goto loc_826FF138;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3392
	ctx.r3.s64 = ctx.r31.s64 + 3392;
	// bl 0x82410060
	ctx.lr = 0x826FF138;
	sub_82410060(ctx, base);
loc_826FF138:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FF140;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FF148;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x826ff098
	if (!ctx.cr6.gt) goto loc_826FF098;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r31,3416
	ctx.r29.s64 = ctx.r31.s64 + 3416;
	// addi r28,r31,3296
	ctx.r28.s64 = ctx.r31.s64 + 3296;
	// addi r27,r11,-4968
	ctx.r27.s64 = ctx.r11.s64 + -4968;
loc_826FF168:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FF174;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828168f0
	ctx.lr = 0x826FF180;
	sub_828168F0(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff194
	if (!ctx.cr6.eq) goto loc_826FF194;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FF194:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FF1A0;
	sub_82419348(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FF1AC;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FF1B4;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FF1C4;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8233a258
	ctx.lr = 0x826FF1D4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x826FF200;
	sub_82410060(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// bne cr6,0x826ff210
	if (!ctx.cr6.eq) goto loc_826FF210;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FF210:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FF21C;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FF22C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1052);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82410060
	ctx.lr = 0x826FF254;
	sub_82410060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FF25C;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FF264;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FF26C;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x826ff168
	if (!ctx.cr6.gt) goto loc_826FF168;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,-4952
	ctx.r29.s64 = ctx.r11.s64 + -4952;
loc_826FF284:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8233a258
	ctx.lr = 0x826FF290;
	sub_8233A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x828168f0
	ctx.lr = 0x826FF29C;
	sub_828168F0(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ff2b0
	if (!ctx.cr6.eq) goto loc_826FF2B0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_826FF2B0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FF2BC;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x826FF2C8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FF2D0;
	sub_82333960(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FF2E0;
	sub_823339B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8233a258
	ctx.lr = 0x826FF2F0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1056);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FF30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826ff324
	if (ctx.cr6.eq) goto loc_826FF324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3440
	ctx.r3.s64 = ctx.r31.s64 + 3440;
	// bl 0x82410060
	ctx.lr = 0x826FF324;
	sub_82410060(ctx, base);
loc_826FF324:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FF32C;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FF334;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x826ff284
	if (!ctx.cr6.gt) goto loc_826FF284;
	// addi r31,r1,464
	ctx.r31.s64 = ctx.r1.s64 + 464;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FF348:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FF354;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826ff348
	if (!ctx.cr0.lt) goto loc_826FF348;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x826FF364;
	sub_82333960(ctx, base);
	// addi r31,r1,608
	ctx.r31.s64 = ctx.r1.s64 + 608;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FF36C:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FF378;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826ff36c
	if (!ctx.cr0.lt) goto loc_826FF36C;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FF388"))) PPC_WEAK_FUNC(sub_826FF388);
PPC_FUNC_IMPL(__imp__sub_826FF388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826FF390;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// bge cr6,0x826ff3b0
	if (!ctx.cr6.lt) goto loc_826FF3B0;
	// bl 0x826df0b8
	ctx.lr = 0x826FF3AC;
	sub_826DF0B8(ctx, base);
	// b 0x826ff508
	goto loc_826FF508;
loc_826FF3B0:
	// addi r11,r4,-42
	ctx.r11.s64 = ctx.r4.s64 + -42;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blt cr6,0x826ff504
	if (ctx.cr6.lt) goto loc_826FF504;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x826ff504
	if (ctx.cr6.lt) goto loc_826FF504;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// beq cr6,0x826ff454
	if (ctx.cr6.eq) goto loc_826FF454;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// beq cr6,0x826ff454
	if (ctx.cr6.eq) goto loc_826FF454;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// bne cr6,0x826ff504
	if (!ctx.cr6.eq) goto loc_826FF504;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FF3FC;
	sub_82873B58(ctx, base);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ff418
	if (ctx.cr6.lt) goto loc_826FF418;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_826FF418:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826FF420;
	sub_8239D768(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ff504
	if (ctx.cr0.eq) goto loc_826FF504;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FF43C;
	sub_82873B58(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FF450;
	sub_8239D768(ctx, base);
	// b 0x826ff504
	goto loc_826FF504;
loc_826FF454:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,3664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// bl 0x82461880
	ctx.lr = 0x826FF46C;
	sub_82461880(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333858
	ctx.lr = 0x826FF480;
	sub_82333858(ctx, base);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826ff4d0
	if (!ctx.cr6.eq) goto loc_826FF4D0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x826ff4dc
	if (!ctx.cr6.gt) goto loc_826FF4DC;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
loc_826FF4AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x826ff4d0
	if (!ctx.cr6.eq) goto loc_826FF4D0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ff4ac
	if (ctx.cr6.lt) goto loc_826FF4AC;
	// b 0x826ff4dc
	goto loc_826FF4DC;
loc_826FF4D0:
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x826ff4e0
	if (ctx.cr6.lt) goto loc_826FF4E0;
loc_826FF4DC:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_826FF4E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8239d768
	ctx.lr = 0x826FF4EC;
	sub_8239D768(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x826ff4fc
	if (ctx.cr0.eq) goto loc_826FF4FC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_826FF4FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x826FF504;
	sub_8239D768(ctx, base);
loc_826FF504:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_826FF508:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FF510"))) PPC_WEAK_FUNC(sub_826FF510);
PPC_FUNC_IMPL(__imp__sub_826FF510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x826FF518;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ff664
	if (!ctx.cr6.gt) goto loc_826FF664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r11,-18988
	ctx.r25.s64 = ctx.r11.s64 + -18988;
	// lfs f31,17684(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17684);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r10,-19008
	ctx.r27.s64 = ctx.r10.s64 + -19008;
loc_826FF56C:
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,10548(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10548);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,3664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// bl 0x82461880
	ctx.lr = 0x826FF588;
	sub_82461880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8239d768
	ctx.lr = 0x826FF598;
	sub_8239D768(ctx, base);
	// addic. r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x826ff5c4
	if (ctx.cr0.lt) goto loc_826FF5C4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x826ff5c8
	if (ctx.cr6.gt) goto loc_826FF5C8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x826ff5c8
	goto loc_826FF5C8;
loc_826FF5C4:
	// stfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_826FF5C8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8277b880
	ctx.lr = 0x826FF5D4;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwzx r6,r28,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x826ff650
	if (!ctx.cr6.eq) goto loc_826FF650;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8277b880
	ctx.lr = 0x826FF620;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwzx r6,r28,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FF650:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ff56c
	if (ctx.cr6.lt) goto loc_826FF56C;
loc_826FF664:
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ff720
	if (!ctx.cr6.gt) goto loc_826FF720;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-18968
	ctx.r28.s64 = ctx.r11.s64 + -18968;
loc_826FF680:
	// lwz r11,10548(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10548);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,3664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// bl 0x82461880
	ctx.lr = 0x826FF698;
	sub_82461880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FF6AC;
	sub_8239D768(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x826ff6bc
	if (!ctx.cr6.gt) goto loc_826FF6BC;
	// li r11,10
	ctx.r11.s64 = 10;
loc_826FF6BC:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8277b880
	ctx.lr = 0x826FF6DC;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ff680
	if (ctx.cr6.lt) goto loc_826FF680;
loc_826FF720:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FF728;
	sub_8239D768(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FF730;
	sub_8239D768(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FF740"))) PPC_WEAK_FUNC(sub_826FF740);
PPC_FUNC_IMPL(__imp__sub_826FF740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826FF748;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,10548(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10548);
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FF778;
	sub_82873B58(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FF78C;
	sub_8239D768(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ff8e4
	if (!ctx.cr6.gt) goto loc_826FF8E4;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r11,-18988
	ctx.r27.s64 = ctx.r11.s64 + -18988;
	// lfs f31,17684(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17684);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r10,-19008
	ctx.r29.s64 = ctx.r10.s64 + -19008;
loc_826FF7D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826ff84c
	if (!ctx.cr6.gt) goto loc_826FF84C;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bgt cr6,0x826ff7fc
	if (ctx.cr6.gt) goto loc_826FF7FC;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826ff800
	goto loc_826FF800;
loc_826FF7FC:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826FF800:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8277b880
	ctx.lr = 0x826FF80C;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-10
	ctx.r9.s64 = ctx.r11.s64 + -10;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x826ff8d0
	goto loc_826FF8D0;
loc_826FF84C:
	// stfs f30,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277b880
	ctx.lr = 0x826FF85C;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF88C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x826FF89C;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF8CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_826FF8D0:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ff7d0
	if (ctx.cr6.lt) goto loc_826FF7D0;
loc_826FF8E4:
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r11,10548(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10548);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,-12104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FF904;
	sub_82873B58(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x826FF914;
	sub_8239D768(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ffa10
	if (!ctx.cr6.gt) goto loc_826FFA10;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,-18968
	ctx.r29.s64 = ctx.r10.s64 + -18968;
loc_826FF934:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ff9b4
	if (!ctx.cr6.gt) goto loc_826FF9B4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x826ff960
	if (ctx.cr6.gt) goto loc_826FF960;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x826ff964
	goto loc_826FF964;
loc_826FF960:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826FF964:
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x8277b880
	ctx.lr = 0x826FF978;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// b 0x826ff9f8
	goto loc_826FF9F8;
loc_826FF9B4:
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8277b880
	ctx.lr = 0x826FF9C4;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FF9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_826FF9F8:
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826ff934
	if (ctx.cr6.lt) goto loc_826FF934;
loc_826FFA10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FFA18;
	sub_8239D768(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239d768
	ctx.lr = 0x826FFA20;
	sub_8239D768(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FFA30"))) PPC_WEAK_FUNC(sub_826FFA30);
PPC_FUNC_IMPL(__imp__sub_826FFA30) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// beq cr6,0x826ffab0
	if (ctx.cr6.eq) goto loc_826FFAB0;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x826ffa68
	if (ctx.cr6.eq) goto loc_826FFA68;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x826ffad0
	if (!ctx.cr6.eq) goto loc_826FFAD0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x826ffab4
	goto loc_826FFAB4;
loc_826FFA68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82418bc8
	ctx.lr = 0x826FFA88;
	sub_82418BC8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ffad0
	if (ctx.cr0.eq) goto loc_826FFAD0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x824b99b0
	ctx.lr = 0x826FFAAC;
	sub_824B99B0(ctx, base);
	// b 0x826ffad0
	goto loc_826FFAD0;
loc_826FFAB0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826FFAB4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFAD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FFAD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826FFAE0"))) PPC_WEAK_FUNC(sub_826FFAE0);
PPC_FUNC_IMPL(__imp__sub_826FFAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,3664(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// b 0x8245d518
	sub_8245D518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FFAF0"))) PPC_WEAK_FUNC(sub_826FFAF0);
PPC_FUNC_IMPL(__imp__sub_826FFAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826FFAF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r29,3664(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFB24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lwz r10,708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// subf. r4,r3,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x826ffb40
	if (ctx.cr0.lt) goto loc_826FFB40;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824a8c88
	ctx.lr = 0x826FFB3C;
	sub_824A8C88(ctx, base);
	// b 0x826ffb48
	goto loc_826FFB48;
loc_826FFB40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826ffbbc
	if (!ctx.cr6.eq) goto loc_826FFBBC;
loc_826FFB48:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r11,r11,0,5,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// rlwinm. r9,r11,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// beq 0x826ffbbc
	if (ctx.cr0.eq) goto loc_826FFBBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438010
	ctx.lr = 0x826FFB70;
	sub_82438010(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826ffbbc
	if (ctx.cr0.eq) goto loc_826FFBBC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826ffb9c
	if (ctx.cr6.eq) goto loc_826FFB9C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x826FFB94;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x826FFB98;
	sub_82409C40(ctx, base);
	// b 0x826ffba0
	goto loc_826FFBA0;
loc_826FFB9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826FFBA0:
	// bl 0x82438130
	ctx.lr = 0x826FFBA4;
	sub_82438130(ctx, base);
	// lwz r3,1968(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826FFBBC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FFBC8"))) PPC_WEAK_FUNC(sub_826FFBC8);
PPC_FUNC_IMPL(__imp__sub_826FFBC8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,40
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 40, ctx.xer);
	// beq cr6,0x826ffc74
	if (ctx.cr6.eq) goto loc_826FFC74;
	// cmpwi cr6,r4,41
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 41, ctx.xer);
	// beq cr6,0x826ffc24
	if (ctx.cr6.eq) goto loc_826FFC24;
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// beq cr6,0x826ffc00
	if (ctx.cr6.eq) goto loc_826FFC00;
	// bl 0x826e2e78
	ctx.lr = 0x826FFBFC;
	sub_826E2E78(ctx, base);
	// b 0x826ffca4
	goto loc_826FFCA4;
loc_826FFC00:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,3664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// bl 0x82461880
	ctx.lr = 0x826FFC18;
	sub_82461880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x826ffc98
	goto loc_826FFC98;
loc_826FFC24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,3664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// addi r4,r11,36
	ctx.r4.s64 = ctx.r11.s64 + 36;
	// bl 0x82873b58
	ctx.lr = 0x826FFC3C;
	sub_82873B58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8239d768
	ctx.lr = 0x826FFC48;
	sub_8239D768(ctx, base);
	// mulli r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 * 10;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x826ffc60
	if (!ctx.cr6.gt) goto loc_826FFC60;
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x826ffca4
	goto loc_826FFCA4;
loc_826FFC60:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x826ffca4
	if (!ctx.cr6.lt) goto loc_826FFCA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826ffca4
	goto loc_826FFCA4;
loc_826FFC74:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r4,3664(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3664);
	// bl 0x82461880
	ctx.lr = 0x826FFC90;
	sub_82461880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
loc_826FFC98:
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8239d768
	ctx.lr = 0x826FFCA0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826FFCA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_826FFCC0"))) PPC_WEAK_FUNC(sub_826FFCC0);
PPC_FUNC_IMPL(__imp__sub_826FFCC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x826FFCC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x826df000
	ctx.lr = 0x826FFCE0;
	sub_826DF000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826ffd68
	if (!ctx.cr0.eq) goto loc_826FFD68;
	// cmpwi cr6,r31,41
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 41, ctx.xer);
	// bne cr6,0x826ffd68
	if (!ctx.cr6.eq) goto loc_826FFD68;
	// addic. r30,r29,3296
	ctx.xer.ca = ctx.r29.u32 > 4294963999;
	ctx.r30.s64 = ctx.r29.s64 + 3296;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r26,1
	ctx.r26.s64 = 1;
	// beq 0x826ffd68
	if (ctx.cr0.eq) goto loc_826FFD68;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826ffd68
	if (!ctx.cr6.gt) goto loc_826FFD68;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r11,-29048
	ctx.r27.s64 = ctx.r11.s64 + -29048;
loc_826FFD18:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8277b880
	ctx.lr = 0x826FFD24;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826FFD54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826ffd18
	if (ctx.cr6.lt) goto loc_826FFD18;
loc_826FFD68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FFD78"))) PPC_WEAK_FUNC(sub_826FFD78);
PPC_FUNC_IMPL(__imp__sub_826FFD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x826FFD80;
	__savegprlr_24(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826e6098
	ctx.lr = 0x826FFD8C;
	sub_826E6098(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17976
	ctx.r4.s64 = ctx.r11.s64 + -17976;
	// bl 0x8233a258
	ctx.lr = 0x826FFD9C;
	sub_8233A258(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-25608
	ctx.r4.s64 = ctx.r11.s64 + -25608;
	// bl 0x8233a258
	ctx.lr = 0x826FFDAC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-4364
	ctx.r4.s64 = ctx.r11.s64 + -4364;
	// bl 0x8233a258
	ctx.lr = 0x826FFDBC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r4,r11,-4352
	ctx.r4.s64 = ctx.r11.s64 + -4352;
	// bl 0x8233a258
	ctx.lr = 0x826FFDCC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-4336
	ctx.r4.s64 = ctx.r11.s64 + -4336;
	// bl 0x8233a258
	ctx.lr = 0x826FFDDC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,-4324
	ctx.r4.s64 = ctx.r11.s64 + -4324;
	// bl 0x8233a258
	ctx.lr = 0x826FFDEC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,-4308
	ctx.r4.s64 = ctx.r11.s64 + -4308;
	// bl 0x8233a258
	ctx.lr = 0x826FFDFC;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// addi r4,r11,-4292
	ctx.r4.s64 = ctx.r11.s64 + -4292;
	// bl 0x8233a258
	ctx.lr = 0x826FFE0C;
	sub_8233A258(ctx, base);
	// lwz r11,3484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3484);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r25,r30,3464
	ctx.r25.s64 = ctx.r30.s64 + 3464;
	// stw r31,3480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3480, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffe38
	if (ctx.cr6.eq) goto loc_826FFE38;
	// stw r31,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c38
	ctx.lr = 0x826FFE38;
	sub_82332C38(ctx, base);
loc_826FFE38:
	// lwz r11,3508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3508);
	// addi r27,r30,3488
	ctx.r27.s64 = ctx.r30.s64 + 3488;
	// stw r31,3504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3504, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ffe60
	if (ctx.cr6.eq) goto loc_826FFE60;
	// stw r31,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x826FFE60;
	sub_82332C38(ctx, base);
loc_826FFE60:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r29,r1,300
	ctx.r29.s64 = ctx.r1.s64 + 300;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
loc_826FFE70:
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826ffe84
	if (ctx.cr6.eq) goto loc_826FFE84;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826ffe88
	goto loc_826FFE88;
loc_826FFE84:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FFE88:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82419348
	ctx.lr = 0x826FFE94;
	sub_82419348(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r24,0(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FFEA4;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x826ffeec
	if (ctx.cr6.eq) goto loc_826FFEEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x826FFED0;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826ffeec
	if (ctx.cr0.eq) goto loc_826FFEEC;
	// bl 0x826d1ed0
	ctx.lr = 0x826FFEDC;
	sub_826D1ED0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x826FFEEC;
	sub_82410060(ctx, base);
loc_826FFEEC:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826fff00
	if (!ctx.cr6.eq) goto loc_826FFF00;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FFF00:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x826FFF0C;
	sub_82419348(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x826fff1c
	if (ctx.cr6.eq) goto loc_826FFF1C;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x826fff20
	goto loc_826FFF20;
loc_826FFF1C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_826FFF20:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x826FFF2C;
	sub_82419348(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x826FFF38;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x826FFF40;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x826FFF48;
	sub_82333960(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x826FFF58;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FFF70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x826fffa0
	if (ctx.cr6.eq) goto loc_826FFFA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x826FFF84;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826fffa0
	if (ctx.cr0.eq) goto loc_826FFFA0;
	// bl 0x826d1ed0
	ctx.lr = 0x826FFF90;
	sub_826D1ED0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x826FFFA0;
	sub_82410060(ctx, base);
loc_826FFFA0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826FFFA8;
	sub_82333960(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x826ffe70
	if (!ctx.cr0.eq) goto loc_826FFE70;
	// addi r31,r1,432
	ctx.r31.s64 = ctx.r1.s64 + 432;
	// li r30,5
	ctx.r30.s64 = 5;
loc_826FFFBC:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333960
	ctx.lr = 0x826FFFC8;
	sub_82333960(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x826fffbc
	if (!ctx.cr0.lt) goto loc_826FFFBC;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x826FFFD8;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x826FFFE0;
	sub_82333960(ctx, base);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826FFFE8"))) PPC_WEAK_FUNC(sub_826FFFE8);
PPC_FUNC_IMPL(__imp__sub_826FFFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d4
	ctx.lr = 0x826FFFF0;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x826e3f68
	ctx.lr = 0x82700004;
	sub_826E3F68(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne 0x827002f0
	if (!ctx.cr0.eq) goto loc_827002F0;
	// lwz r11,3512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3512);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r19,r16
	ctx.r19.u64 = ctx.r16.u64;
	// stb r16,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82700044
	if (!ctx.cr6.eq) goto loc_82700044;
	// addi r27,r31,3320
	ctx.r27.s64 = ctx.r31.s64 + 3320;
	// li r22,40
	ctx.r22.s64 = 40;
	// addi r25,r31,3464
	ctx.r25.s64 = ctx.r31.s64 + 3464;
	// b 0x82700074
	goto loc_82700074;
loc_82700044:
	// lwz r11,3516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3516);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8270005c
	if (!ctx.cr6.eq) goto loc_8270005C;
	// addi r27,r31,3416
	ctx.r27.s64 = ctx.r31.s64 + 3416;
	// li r22,41
	ctx.r22.s64 = 41;
	// b 0x82700074
	goto loc_82700074;
loc_8270005C:
	// lwz r11,3520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3520);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x827002f0
	if (!ctx.cr6.eq) goto loc_827002F0;
	// addi r27,r31,3368
	ctx.r27.s64 = ctx.r31.s64 + 3368;
	// li r22,42
	ctx.r22.s64 = 42;
	// addi r25,r31,3488
	ctx.r25.s64 = ctx.r31.s64 + 3488;
loc_82700074:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r15,1
	ctx.r15.s64 = 1;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// lis r20,-32244
	ctx.r20.s64 = -2113142784;
	// addi r24,r11,-18124
	ctx.r24.s64 = ctx.r11.s64 + -18124;
loc_82700098:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827000B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82700158
	if (!ctx.cr0.eq) goto loc_82700158;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x827000cc
	if (!ctx.cr6.eq) goto loc_827000CC;
	// li r19,1
	ctx.r19.s64 = 1;
loc_827000CC:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e3d20
	ctx.lr = 0x827000E8;
	sub_826E3D20(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x826e3e08
	ctx.lr = 0x82700104;
	sub_826E3E08(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82700128
	if (ctx.cr6.eq) goto loc_82700128;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82700128
	if (!ctx.cr6.lt) goto loc_82700128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f1,24724(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e65b0
	ctx.lr = 0x82700128;
	sub_826E65B0(ctx, base);
loc_82700128:
	// cmpwi cr6,r22,41
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 41, ctx.xer);
	// bne cr6,0x8270020c
	if (!ctx.cr6.eq) goto loc_8270020C;
	// lwz r11,1976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8270020c
	if (ctx.cr6.eq) goto loc_8270020C;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8270020c
	if (!ctx.cr6.eq) goto loc_8270020C;
	// addi r21,r28,-1
	ctx.r21.s64 = ctx.r28.s64 + -1;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bge cr6,0x82700204
	if (!ctx.cr6.lt) goto loc_82700204;
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82700204
	goto loc_82700204;
loc_82700158:
	// addi r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// bl 0x826e3d20
	ctx.lr = 0x82700178;
	sub_826E3D20(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r26,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x826e3e08
	ctx.lr = 0x82700194;
	sub_826E3E08(ctx, base);
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// bne cr6,0x827001a0
	if (!ctx.cr6.eq) goto loc_827001A0;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
loc_827001A0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827001c4
	if (ctx.cr6.eq) goto loc_827001C4;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827001c4
	if (!ctx.cr6.lt) goto loc_827001C4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826e65b0
	ctx.lr = 0x827001C4;
	sub_826E65B0(ctx, base);
loc_827001C4:
	// cmpwi cr6,r22,41
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 41, ctx.xer);
	// bne cr6,0x8270020c
	if (!ctx.cr6.eq) goto loc_8270020C;
	// addi r9,r31,3296
	ctx.r9.s64 = ctx.r31.s64 + 3296;
	// lwz r29,1976(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1976);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,100
	ctx.r7.s64 = 100;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e4de8
	ctx.lr = 0x827001F0;
	sub_826E4DE8(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8270020c
	if (ctx.cr6.eq) goto loc_8270020C;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8270020c
	if (!ctx.cr6.eq) goto loc_8270020C;
	// addi r21,r29,1
	ctx.r21.s64 = ctx.r29.s64 + 1;
loc_82700204:
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r17,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r17.u32);
loc_8270020C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r26,24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 24, ctx.xer);
	// blt cr6,0x82700098
	if (ctx.cr6.lt) goto loc_82700098;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82700238
	if (ctx.cr6.eq) goto loc_82700238;
	// stw r16,1936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1936, ctx.r16.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dfa18
	ctx.lr = 0x82700238;
	sub_826DFA18(ctx, base);
loc_82700238:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x8270024c
	if (!ctx.cr6.eq) goto loc_8270024C;
	// lwz r11,2284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827002f0
	if (ctx.cr6.eq) goto loc_827002F0;
loc_8270024C:
	// lwz r11,2284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82700300
	if (ctx.cr6.eq) goto loc_82700300;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r17,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r17.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8270026C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29048
	ctx.r4.s64 = ctx.r11.s64 + -29048;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8277b880
	ctx.lr = 0x82700288;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1080(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827002B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827002B4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18104
	ctx.r4.s64 = ctx.r11.s64 + -18104;
	// bl 0x8277b880
	ctx.lr = 0x827002C4;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1060);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827002F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827002F0:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82a4ea24
	__restgprlr_15(ctx, base);
	return;
loc_82700300:
	// cmpwi cr6,r21,-1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, -1, ctx.xer);
	// beq cr6,0x82700318
	if (ctx.cr6.eq) goto loc_82700318;
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x8270026c
	goto loc_8270026C;
loc_82700318:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r17,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r17.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r17,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r17.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,1268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827002b4
	if (ctx.cr6.eq) goto loc_827002B4;
	// lwz r4,2096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x82707a18
	ctx.lr = 0x82700358;
	sub_82707A18(ctx, base);
	// b 0x827002b4
	goto loc_827002B4;
}

__attribute__((alias("__imp__sub_82700360"))) PPC_WEAK_FUNC(sub_82700360);
PPC_FUNC_IMPL(__imp__sub_82700360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82700368;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x826ee958
	ctx.lr = 0x82700398;
	sub_826EE958(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e4ed0
	ctx.lr = 0x827003AC;
	sub_826E4ED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827004a8
	if (!ctx.cr0.eq) goto loc_827004A8;
	// cmpwi cr6,r30,63
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 63, ctx.xer);
	// bne cr6,0x827003ec
	if (!ctx.cr6.eq) goto loc_827003EC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82700488
	if (!ctx.cr6.eq) goto loc_82700488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826fc580
	ctx.lr = 0x827003CC;
	sub_826FC580(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827003dc
	if (!ctx.cr0.eq) goto loc_827003DC;
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x827004b8
	goto loc_827004B8;
loc_827003DC:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82700484
	if (!ctx.cr6.eq) goto loc_82700484;
	// li r4,72
	ctx.r4.s64 = 72;
	// b 0x827004b8
	goto loc_827004B8;
loc_827003EC:
	// cmpwi cr6,r30,66
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 66, ctx.xer);
	// bne cr6,0x8270049c
	if (!ctx.cr6.eq) goto loc_8270049C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82700488
	if (!ctx.cr6.eq) goto loc_82700488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,2272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// lwz r5,2268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// lwz r4,2264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82438190
	ctx.lr = 0x82700420;
	sub_82438190(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x827004b4
	if (ctx.cr0.eq) goto loc_827004B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270043C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827004b4
	if (ctx.cr0.eq) goto loc_827004B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r4,2264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700460;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82700470;
	sub_8233A258(ctx, base);
	// lis r4,15695
	ctx.r4.s64 = 1028587520;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,50595
	ctx.r4.u64 = ctx.r4.u64 | 50595;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82700484;
	sub_829C3740(ctx, base);
loc_82700484:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82700488:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e0dd0
	ctx.lr = 0x82700494;
	sub_826E0DD0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x827004a8
	if (ctx.cr6.eq) goto loc_827004A8;
loc_8270049C:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
loc_827004A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
loc_827004B4:
	// li r4,80
	ctx.r4.s64 = 80;
loc_827004B8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// bl 0x826eea28
	ctx.lr = 0x827004C4;
	sub_826EEA28(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x82700484
	goto loc_82700484;
}

__attribute__((alias("__imp__sub_827004D0"))) PPC_WEAK_FUNC(sub_827004D0);
PPC_FUNC_IMPL(__imp__sub_827004D0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827004F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x827004F8;
	sub_82833108(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82700520
	if (ctx.cr0.eq) goto loc_82700520;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82439d58
	ctx.lr = 0x8270051C;
	sub_82439D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82700520:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8270052C;
	sub_82833A30(ctx, base);
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

__attribute__((alias("__imp__sub_82700540"))) PPC_WEAK_FUNC(sub_82700540);
PPC_FUNC_IMPL(__imp__sub_82700540) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x82700568;
	sub_82833108(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82700590
	if (ctx.cr0.eq) goto loc_82700590;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,14
	ctx.r5.s64 = 14;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82439d58
	ctx.lr = 0x8270058C;
	sub_82439D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82700590:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8270059C;
	sub_82833A30(ctx, base);
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

__attribute__((alias("__imp__sub_827005B0"))) PPC_WEAK_FUNC(sub_827005B0);
PPC_FUNC_IMPL(__imp__sub_827005B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827005B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x826da9a8
	ctx.lr = 0x827005C4;
	sub_826DA9A8(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r7,r9,-936
	ctx.r7.s64 = ctx.r9.s64 + -936;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r11,r11,-2352
	ctx.r11.s64 = ctx.r11.s64 + -2352;
	// stw r7,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r7.u32);
	// addi r10,r10,-988
	ctx.r10.s64 = ctx.r10.s64 + -988;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r7,r8,10804
	ctx.r7.s64 = ctx.r8.s64 + 10804;
	// stw r31,3280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3280, ctx.r31.u32);
	// stw r9,3276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3276, ctx.r9.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,3284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3284, ctx.r31.u32);
	// addi r27,r30,3452
	ctx.r27.s64 = ctx.r30.s64 + 3452;
	// stw r31,3288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3288, ctx.r31.u32);
	// addi r3,r30,3296
	ctx.r3.s64 = ctx.r30.s64 + 3296;
	// stw r31,3292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3292, ctx.r31.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r31,3272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3272, ctx.r31.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r7,3296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3296, ctx.r7.u32);
	// stw r9,3304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3304, ctx.r9.u32);
	// stw r31,3308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3308, ctx.r31.u32);
	// stw r31,3312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3312, ctx.r31.u32);
	// stw r31,3316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3316, ctx.r31.u32);
	// stw r31,3320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3320, ctx.r31.u32);
	// stw r31,3300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3300, ctx.r31.u32);
	// stw r10,3332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3332, ctx.r10.u32);
	// stw r31,3336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3336, ctx.r31.u32);
	// stw r31,3340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3340, ctx.r31.u32);
	// stw r31,3344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3344, ctx.r31.u32);
	// stw r31,3348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3348, ctx.r31.u32);
	// stw r31,3328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3328, ctx.r31.u32);
	// stw r10,3356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3356, ctx.r10.u32);
	// stw r31,3360(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3360, ctx.r31.u32);
	// stw r31,3364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3364, ctx.r31.u32);
	// stw r31,3368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3368, ctx.r31.u32);
	// stw r31,3372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3372, ctx.r31.u32);
	// stw r31,3352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3352, ctx.r31.u32);
loc_82700670:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stw r31,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bge 0x82700670
	if (!ctx.cr0.lt) goto loc_82700670;
	// stw r10,3600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3600, ctx.r10.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,3604(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3604, ctx.r31.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r31,3608(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3608, ctx.r31.u32);
	// addi r29,r30,3596
	ctx.r29.s64 = ctx.r30.s64 + 3596;
	// stw r31,3612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3612, ctx.r31.u32);
	// addi r28,r30,3620
	ctx.r28.s64 = ctx.r30.s64 + 3620;
	// stw r31,3616(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3616, ctx.r31.u32);
	// stw r31,3596(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3596, ctx.r31.u32);
	// stw r10,3624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3624, ctx.r10.u32);
	// stw r31,3628(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3628, ctx.r31.u32);
	// stw r31,3632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3632, ctx.r31.u32);
	// stw r31,3636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3636, ctx.r31.u32);
	// stw r31,3640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3640, ctx.r31.u32);
	// stw r31,3620(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3620, ctx.r31.u32);
	// stw r9,3656(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3656, ctx.r9.u32);
	// stw r31,3660(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3660, ctx.r31.u32);
	// stw r31,3664(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3664, ctx.r31.u32);
	// stw r31,3668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3668, ctx.r31.u32);
	// stw r31,3672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3672, ctx.r31.u32);
	// stw r31,3652(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3652, ctx.r31.u32);
	// stw r9,3680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3680, ctx.r9.u32);
	// stw r31,3684(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3684, ctx.r31.u32);
	// stw r31,3688(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3688, ctx.r31.u32);
	// stw r31,3692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3692, ctx.r31.u32);
	// stw r31,3696(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3696, ctx.r31.u32);
	// stw r31,3676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3676, ctx.r31.u32);
	// stw r11,3244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3244, ctx.r11.u32);
	// stw r31,3236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3236, ctx.r31.u32);
	// stw r31,3240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3240, ctx.r31.u32);
	// stw r31,1528(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1528, ctx.r31.u32);
	// stw r31,3376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3376, ctx.r31.u32);
	// stw r31,3380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3380, ctx.r31.u32);
	// bl 0x823f8a50
	ctx.lr = 0x82700720;
	sub_823F8A50(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r31,3248(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3248, ctx.r31.u32);
	// li r26,6
	ctx.r26.s64 = 6;
	// stw r31,3252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3252, ctx.r31.u32);
	// addi r25,r11,-21936
	ctx.r25.s64 = ctx.r11.s64 + -21936;
loc_82700734:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824099b8
	ctx.lr = 0x82700740;
	sub_824099B8(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// bne 0x82700734
	if (!ctx.cr0.eq) goto loc_82700734;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-3200
	ctx.r4.s64 = ctx.r11.s64 + -3200;
	// bl 0x824099b8
	ctx.lr = 0x8270075C;
	sub_824099B8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-3180
	ctx.r4.s64 = ctx.r11.s64 + -3180;
	// bl 0x824099b8
	ctx.lr = 0x8270076C;
	sub_824099B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,3648(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3648, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82700780"))) PPC_WEAK_FUNC(sub_82700780);
PPC_FUNC_IMPL(__imp__sub_82700780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82700788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r10,r10,-2352
	ctx.r10.s64 = ctx.r10.s64 + -2352;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// addi r9,r9,-988
	ctx.r9.s64 = ctx.r9.s64 + -988;
	// addi r8,r8,-936
	ctx.r8.s64 = ctx.r8.s64 + -936;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// beq cr6,0x827007c8
	if (ctx.cr6.eq) goto loc_827007C8;
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// stw r10,5640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5640, ctx.r10.u32);
loc_827007C8:
	// addi r3,r31,3676
	ctx.r3.s64 = ctx.r31.s64 + 3676;
	// bl 0x8239d768
	ctx.lr = 0x827007D0;
	sub_8239D768(ctx, base);
	// addi r3,r31,3652
	ctx.r3.s64 = ctx.r31.s64 + 3652;
	// bl 0x8239d768
	ctx.lr = 0x827007D8;
	sub_8239D768(ctx, base);
	// addi r3,r31,3620
	ctx.r3.s64 = ctx.r31.s64 + 3620;
	// bl 0x82333960
	ctx.lr = 0x827007E0;
	sub_82333960(ctx, base);
	// addi r3,r31,3596
	ctx.r3.s64 = ctx.r31.s64 + 3596;
	// bl 0x82333960
	ctx.lr = 0x827007E8;
	sub_82333960(ctx, base);
	// addi r30,r31,3596
	ctx.r30.s64 = ctx.r31.s64 + 3596;
	// li r29,5
	ctx.r29.s64 = 5;
loc_827007F0:
	// addi r30,r30,-24
	ctx.r30.s64 = ctx.r30.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x827007FC;
	sub_82333960(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x827007f0
	if (!ctx.cr0.lt) goto loc_827007F0;
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x82333960
	ctx.lr = 0x8270080C;
	sub_82333960(ctx, base);
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x82333960
	ctx.lr = 0x82700814;
	sub_82333960(ctx, base);
	// addi r11,r31,3296
	ctx.r11.s64 = ctx.r31.s64 + 3296;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8239d768
	ctx.lr = 0x82700820;
	sub_8239D768(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// addi r11,r11,10980
	ctx.r11.s64 = ctx.r11.s64 + 10980;
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x82700834;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dac50
	ctx.lr = 0x8270083C;
	sub_826DAC50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82700848"))) PPC_WEAK_FUNC(sub_82700848);
PPC_FUNC_IMPL(__imp__sub_82700848) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-22252
	ctx.r4.s64 = ctx.r11.s64 + -22252;
	// bl 0x8233a258
	ctx.lr = 0x8270086C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x82400b48
	ctx.lr = 0x82700878;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82700880;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r3,r31,1724
	ctx.r3.s64 = ctx.r31.s64 + 1724;
	// addi r4,r11,-14592
	ctx.r4.s64 = ctx.r11.s64 + -14592;
	// bl 0x82400b48
	ctx.lr = 0x82700890;
	sub_82400B48(ctx, base);
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

__attribute__((alias("__imp__sub_827008A8"))) PPC_WEAK_FUNC(sub_827008A8);
PPC_FUNC_IMPL(__imp__sub_827008A8) {
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
	// bl 0x826dad70
	ctx.lr = 0x827008B8;
	sub_826DAD70(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282a2b0
	ctx.lr = 0x827008C8;
	sub_8282A2B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827008D8"))) PPC_WEAK_FUNC(sub_827008D8);
PPC_FUNC_IMPL(__imp__sub_827008D8) {
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
	// bl 0x826da8f0
	ctx.lr = 0x827008F4;
	sub_826DA8F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82700988
	if (ctx.cr0.eq) goto loc_82700988;
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82700988
	if (ctx.cr6.eq) goto loc_82700988;
	// lwz r11,1528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1528);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82700980
	if (!ctx.cr6.eq) goto loc_82700980;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13076);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82700980
	if (ctx.cr6.eq) goto loc_82700980;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r10,r10,-997
	ctx.r10.s64 = ctx.r10.s64 + -997;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82700980
	if (ctx.cr6.eq) goto loc_82700980;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82414568
	ctx.lr = 0x82700964;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82701d78
	ctx.lr = 0x82700970;
	sub_82701D78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e8128
	ctx.lr = 0x82700978;
	sub_828E8128(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
loc_82700980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827024c0
	ctx.lr = 0x82700988;
	sub_827024C0(ctx, base);
loc_82700988:
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

__attribute__((alias("__imp__sub_827009A0"))) PPC_WEAK_FUNC(sub_827009A0);
PPC_FUNC_IMPL(__imp__sub_827009A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827009A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x826db2a8
	ctx.lr = 0x827009B4;
	sub_826DB2A8(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x827009C4;
	sub_82409BE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// beq 0x82700a0c
	if (ctx.cr0.eq) goto loc_82700A0C;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700a0c
	if (ctx.cr6.eq) goto loc_82700A0C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// stw r26,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,93
	ctx.r4.s64 = 93;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82700A0C:
	// stw r26,3648(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3648, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824a8bc0
	ctx.lr = 0x82700A1C;
	sub_824A8BC0(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,300
	ctx.r11.s64 = 300;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// bl 0x82702a38
	ctx.lr = 0x82700A30;
	sub_82702A38(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// stw r26,3384(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3384, ctx.r26.u32);
	// lwz r11,-16524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16524);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82700a64
	if (!ctx.cr0.eq) goto loc_82700A64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,-16524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16524, ctx.r11.u32);
	// addi r3,r9,-17336
	ctx.r3.s64 = ctx.r9.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x82700A5C;
	sub_82816528(ctx, base);
	// stw r3,-16528(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16528, ctx.r3.u32);
	// b 0x82700a68
	goto loc_82700A68;
loc_82700A64:
	// lwz r3,-16528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16528);
loc_82700A68:
	// bl 0x828e0d10
	ctx.lr = 0x82700A6C;
	sub_828E0D10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82700be4
	if (ctx.cr0.eq) goto loc_82700BE4;
	// bl 0x82438370
	ctx.lr = 0x82700A78;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82700be4
	if (ctx.cr0.eq) goto loc_82700BE4;
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r6,2860(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2860);
	// lwz r29,2864(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// lwz r9,1740(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82700ac4
	if (!ctx.cr6.gt) goto loc_82700AC4;
	// lwz r7,1736(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82700AA4:
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,996(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 996);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82700e10
	if (ctx.cr6.eq) goto loc_82700E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82700aa4
	if (ctx.cr6.lt) goto loc_82700AA4;
loc_82700AC4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82700AC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82700b3c
	if (ctx.cr6.eq) goto loc_82700B3C;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// ld r8,8472(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8472);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82700b14
	if (!ctx.cr6.gt) goto loc_82700B14;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82700AF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82700b04
	if (ctx.cr6.eq) goto loc_82700B04;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82700e1c
	if (ctx.cr6.eq) goto loc_82700E1C;
loc_82700B04:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82700af0
	if (ctx.cr6.lt) goto loc_82700AF0;
loc_82700B14:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82700B18:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82414568
	ctx.lr = 0x82700B20;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,3596
	ctx.r3.s64 = ctx.r28.s64 + 3596;
	// bl 0x82400b48
	ctx.lr = 0x82700B2C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82700B34;
	sub_82333960(ctx, base);
	// lwz r11,10548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// stw r31,3648(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3648, ctx.r31.u32);
loc_82700B3C:
	// lwz r9,1740(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82700b74
	if (!ctx.cr6.gt) goto loc_82700B74;
	// lwz r8,1736(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82700B54:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,996(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 996);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82700e24
	if (ctx.cr6.eq) goto loc_82700E24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82700b54
	if (ctx.cr6.lt) goto loc_82700B54;
loc_82700B74:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82700B78:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82700be4
	if (ctx.cr6.eq) goto loc_82700BE4;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// ld r8,8472(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8472);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82700bc4
	if (!ctx.cr6.gt) goto loc_82700BC4;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82700BA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82700bb4
	if (ctx.cr6.eq) goto loc_82700BB4;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82700e30
	if (ctx.cr6.eq) goto loc_82700E30;
loc_82700BB4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82700ba0
	if (ctx.cr6.lt) goto loc_82700BA0;
loc_82700BC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82700BC8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82414568
	ctx.lr = 0x82700BD0;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r28,3620
	ctx.r3.s64 = ctx.r28.s64 + 3620;
	// bl 0x82400b48
	ctx.lr = 0x82700BDC;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82700BE4;
	sub_82333960(ctx, base);
loc_82700BE4:
	// lwz r11,3612(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3612);
	// addi r31,r28,3596
	ctx.r31.s64 = ctx.r28.s64 + 3596;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82700bfc
	if (!ctx.cr6.eq) goto loc_82700BFC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82700BFC:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x82700c28
	if (!ctx.cr6.gt) goto loc_82700C28;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243b338
	ctx.lr = 0x82700C14;
	sub_8243B338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82700C20;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82700C28;
	sub_82333960(ctx, base);
loc_82700C28:
	// lwz r11,3636(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3636);
	// addi r31,r28,3620
	ctx.r31.s64 = ctx.r28.s64 + 3620;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82700c40
	if (!ctx.cr6.eq) goto loc_82700C40;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82700C40:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// ble cr6,0x82700c6c
	if (!ctx.cr6.gt) goto loc_82700C6C;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8243b338
	ctx.lr = 0x82700C58;
	sub_8243B338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82700C64;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82700C6C;
	sub_82333960(ctx, base);
loc_82700C6C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x827010f0
	ctx.lr = 0x82700C74;
	sub_827010F0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r4,r11,-3160
	ctx.r4.s64 = ctx.r11.s64 + -3160;
	// stw r27,1536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1536, ctx.r27.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3260(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3260, ctx.r3.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-2472
	ctx.r4.s64 = ctx.r11.s64 + -2472;
	// bl 0x8233a258
	ctx.lr = 0x82700CB0;
	sub_8233A258(ctx, base);
	// lwz r11,3292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3292);
	// addi r31,r28,3272
	ctx.r31.s64 = ctx.r28.s64 + 3272;
	// stw r26,3288(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3288, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82700cd8
	if (ctx.cr6.eq) goto loc_82700CD8;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82700CD8;
	sub_82332C38(ctx, base);
loc_82700CD8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
loc_82700CE4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828168f0
	ctx.lr = 0x82700CF0;
	sub_828168F0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82700d04
	if (!ctx.cr6.eq) goto loc_82700D04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82700D04:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419348
	ctx.lr = 0x82700D10;
	sub_82419348(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700D2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82700d5c
	if (ctx.cr6.eq) goto loc_82700D5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828b5100
	ctx.lr = 0x82700D40;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82700d5c
	if (ctx.cr0.eq) goto loc_82700D5C;
	// bl 0x826d1ed0
	ctx.lr = 0x82700D4C;
	sub_826D1ED0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82700D5C;
	sub_82410060(ctx, base);
loc_82700D5C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82700D64;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82700ce4
	if (ctx.cr6.lt) goto loc_82700CE4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82700D78;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-3128
	ctx.r4.s64 = ctx.r11.s64 + -3128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r3,3264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3264, ctx.r3.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-3092
	ctx.r4.s64 = ctx.r10.s64 + -3092;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r3,3268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3268, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82700DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82700DF0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82700e60
	if (ctx.cr0.eq) goto loc_82700E60;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82700e38
	if (ctx.cr0.eq) goto loc_82700E38;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82700e3c
	goto loc_82700E3C;
loc_82700E10:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// b 0x82700ac8
	goto loc_82700AC8;
loc_82700E1C:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x82700b18
	goto loc_82700B18;
loc_82700E24:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x82700b78
	goto loc_82700B78;
loc_82700E30:
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x82700bc8
	goto loc_82700BC8;
loc_82700E38:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_82700E3C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82700e4c
	if (ctx.cr0.eq) goto loc_82700E4C;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82700e50
	goto loc_82700E50;
loc_82700E4C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82700E50:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82409ca0
	ctx.lr = 0x82700E58;
	sub_82409CA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82700e64
	goto loc_82700E64;
loc_82700E60:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82700E64:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82700E70;
	sub_82833A30(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82700E80;
	sub_8233A258(ctx, base);
	// lis r4,3000
	ctx.r4.s64 = 196608000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,24693
	ctx.r4.u64 = ctx.r4.u64 | 24693;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829c3740
	ctx.lr = 0x82700E94;
	sub_829C3740(ctx, base);
	// stw r27,2120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2120, ctx.r27.u32);
	// lis r11,-32144
	ctx.r11.s64 = -2106589184;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,10808
	ctx.r11.s64 = ctx.r11.s64 + 10808;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r30,80(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82833108
	ctx.lr = 0x82700EB4;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82700ef8
	if (ctx.cr0.eq) goto loc_82700EF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82700EC4;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r10,r10,-2456
	ctx.r10.s64 = ctx.r10.s64 + -2456;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x82700efc
	goto loc_82700EFC;
loc_82700EF8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82700EFC:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82700F08;
	sub_82833A30(ctx, base);
	// stw r27,1496(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1496, ctx.r27.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82700F18"))) PPC_WEAK_FUNC(sub_82700F18);
PPC_FUNC_IMPL(__imp__sub_82700F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82700F20;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-25544
	ctx.r27.s64 = ctx.r11.s64 + -25544;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82816528
	ctx.lr = 0x82700F44;
	sub_82816528(ctx, base);
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,3436
	ctx.r11.s64 = ctx.r28.s64 + 3436;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r28,3652
	ctx.r30.s64 = ctx.r28.s64 + 3652;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// stwx r31,r29,r24
	PPC_STORE_U32(ctx.r29.u32 + ctx.r24.u32, ctx.r31.u32);
	// bne cr6,0x82700f64
	if (!ctx.cr6.eq) goto loc_82700F64;
	// addi r30,r28,3676
	ctx.r30.s64 = ctx.r28.s64 + 3676;
loc_82700F64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82701038
	if (ctx.cr6.eq) goto loc_82701038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82437f50
	ctx.lr = 0x82700F74;
	sub_82437F50(ctx, base);
	// lwz r27,12(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x827010e4
	if (ctx.cr6.eq) goto loc_827010E4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827010e4
	if (!ctx.cr6.lt) goto loc_827010E4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,-3060
	ctx.r3.s64 = ctx.r11.s64 + -3060;
	// bl 0x82816528
	ctx.lr = 0x82700FA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x82700FB4;
	sub_829832C0(ctx, base);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r10,5980
	ctx.r3.s64 = ctx.r10.s64 + 5980;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r28,12(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// bl 0x82816528
	ctx.lr = 0x82700FF0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x82701004;
	sub_829831F8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270101c
	if (!ctx.cr0.eq) goto loc_8270101C;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2456
	ctx.r3.s64 = ctx.r11.s64 + 2456;
	// b 0x8270102c
	goto loc_8270102C;
loc_8270101C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827010c0
	if (ctx.cr6.eq) goto loc_827010C0;
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// addi r3,r11,2504
	ctx.r3.s64 = ctx.r11.s64 + 2504;
loc_8270102C:
	// bl 0x82816528
	ctx.lr = 0x82701030;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x827010c0
	goto loc_827010C0;
loc_82701038:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x827010e4
	if (!ctx.cr6.lt) goto loc_827010E4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82816528
	ctx.lr = 0x82701050;
	sub_82816528(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-3060
	ctx.r3.s64 = ctx.r11.s64 + -3060;
	// bl 0x82816528
	ctx.lr = 0x82701060;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829832c0
	ctx.lr = 0x82701074;
	sub_829832C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82817340
	ctx.lr = 0x82701098;
	sub_82817340(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,5980
	ctx.r3.s64 = ctx.r11.s64 + 5980;
	// bl 0x82816528
	ctx.lr = 0x827010AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829831f8
	ctx.lr = 0x827010C0;
	sub_829831F8(ctx, base);
loc_827010C0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r3,r11,2548
	ctx.r3.s64 = ctx.r11.s64 + 2548;
	// bl 0x82816528
	ctx.lr = 0x827010D0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x829832c0
	ctx.lr = 0x827010E4;
	sub_829832C0(ctx, base);
loc_827010E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827010F0"))) PPC_WEAK_FUNC(sub_827010F0);
PPC_FUNC_IMPL(__imp__sub_827010F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827010F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,3652
	ctx.r29.s64 = ctx.r30.s64 + 3652;
	// lwz r11,3672(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3672);
	// stw r28,3668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3668, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270112c
	if (ctx.cr6.eq) goto loc_8270112C;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8270112C;
	sub_82332C38(ctx, base);
loc_8270112C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
	// addi r27,r10,-3040
	ctx.r27.s64 = ctx.r10.s64 + -3040;
loc_82701140:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82701150;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701164
	if (!ctx.cr6.eq) goto loc_82701164;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82701164:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82414568
	ctx.lr = 0x82701170;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x827011b8
	if (ctx.cr6.eq) goto loc_827011B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x8270119C;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827011b8
	if (ctx.cr0.eq) goto loc_827011B8;
	// bl 0x826d1ed0
	ctx.lr = 0x827011A8;
	sub_826D1ED0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x827011B8;
	sub_82410060(ctx, base);
loc_827011B8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827011C0;
	sub_82333960(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82701140
	if (ctx.cr6.lt) goto loc_82701140;
	// lwz r11,3696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3696);
	// addi r29,r30,3676
	ctx.r29.s64 = ctx.r30.s64 + 3676;
	// stw r28,3692(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3692, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827011f4
	if (ctx.cr6.eq) goto loc_827011F4;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x827011F4;
	sub_82332C38(ctx, base);
loc_827011F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r27,r11,-3012
	ctx.r27.s64 = ctx.r11.s64 + -3012;
loc_827011FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x8270120C;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701220
	if (!ctx.cr6.eq) goto loc_82701220;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82701220:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82414568
	ctx.lr = 0x8270122C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82701274
	if (ctx.cr6.eq) goto loc_82701274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x82701258;
	sub_828B5100(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701274
	if (ctx.cr0.eq) goto loc_82701274;
	// bl 0x826d1ed0
	ctx.lr = 0x82701264;
	sub_826D1ED0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82701274;
	sub_82410060(ctx, base);
loc_82701274:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8270127C;
	sub_82333960(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x827011fc
	if (ctx.cr6.lt) goto loc_827011FC;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701290"))) PPC_WEAK_FUNC(sub_82701290);
PPC_FUNC_IMPL(__imp__sub_82701290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82701298;
	__savegprlr_26(ctx, base);
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
	// lwz r11,2280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827014a8
	if (!ctx.cr6.eq) goto loc_827014A8;
	// lwz r4,2264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8270139c
	if (ctx.cr6.eq) goto loc_8270139C;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// lwz r10,2244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8270130c
	if (!ctx.cr6.lt) goto loc_8270130C;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,2240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r9.s64;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// b 0x82701310
	goto loc_82701310;
loc_8270130C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82701310:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701344
	if (ctx.cr6.eq) goto loc_82701344;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r29,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r28.u32);
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827014a8
	goto loc_827014A8;
loc_82701344:
	// cmpw cr6,r4,r30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x8270139c
	if (ctx.cr6.eq) goto loc_8270139C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701380;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826dcb00
	ctx.lr = 0x82701390;
	sub_826DCB00(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82701c28
	ctx.lr = 0x8270139C;
	sub_82701C28(ctx, base);
loc_8270139C:
	// stw r30,2264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2264, ctx.r30.u32);
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// stw r28,2272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2272, ctx.r28.u32);
	// stw r29,2268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2268, ctx.r29.u32);
	// bne cr6,0x82701458
	if (!ctx.cr6.eq) goto loc_82701458;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// li r11,300
	ctx.r11.s64 = 300;
	// addi r4,r8,26556
	ctx.r4.s64 = ctx.r8.s64 + 26556;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r10,1036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1036);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16104(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16104, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827013DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x827013E8;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701458
	if (ctx.cr0.eq) goto loc_82701458;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701458
	if (!ctx.cr6.eq) goto loc_82701458;
	// bl 0x82659d40
	ctx.lr = 0x82701400;
	sub_82659D40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2976
	ctx.r4.s64 = ctx.r11.s64 + -2976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// stw r26,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r26.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r26.u32);
loc_82701430:
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8270144c
	if (!ctx.cr0.eq) goto loc_8270144C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82701430
	if (ctx.cr6.lt) goto loc_82701430;
	// b 0x82701458
	goto loc_82701458;
loc_8270144C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82701458
	if (!ctx.cr6.gt) goto loc_82701458;
	// stw r27,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r27.u32);
loc_82701458:
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x827014a0
	if (!ctx.cr6.eq) goto loc_827014A0;
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82701484
	if (ctx.cr6.lt) goto loc_82701484;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82701484
	if (!ctx.cr6.lt) goto loc_82701484;
	// addi r11,r11,855
	ctx.r11.s64 = ctx.r11.s64 + 855;
	// b 0x82701498
	goto loc_82701498;
loc_82701484:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x827014a0
	if (ctx.cr6.lt) goto loc_827014A0;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x827014a0
	if (!ctx.cr6.lt) goto loc_827014A0;
	// addi r11,r11,853
	ctx.r11.s64 = ctx.r11.s64 + 853;
loc_82701498:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_827014A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82703a40
	ctx.lr = 0x827014A8;
	sub_82703A40(ctx, base);
loc_827014A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827014B0"))) PPC_WEAK_FUNC(sub_827014B0);
PPC_FUNC_IMPL(__imp__sub_827014B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827014B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// ble cr6,0x82701540
	if (!ctx.cr6.gt) goto loc_82701540;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82701524
	if (ctx.cr6.lt) goto loc_82701524;
	// beq cr6,0x82701538
	if (ctx.cr6.eq) goto loc_82701538;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82701500
	if (ctx.cr6.lt) goto loc_82701500;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82701524
	if (ctx.cr6.eq) goto loc_82701524;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82701538
	if (ctx.cr6.eq) goto loc_82701538;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82701540
	if (!ctx.cr6.eq) goto loc_82701540;
loc_82701500:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82701540
	if (ctx.cr6.lt) goto loc_82701540;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82701540
	if (!ctx.cr6.lt) goto loc_82701540;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,2096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// bl 0x824b4c48
	ctx.lr = 0x8270151C;
	sub_824B4C48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82701540
	goto loc_82701540;
loc_82701524:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bge cr6,0x82701538
	if (!ctx.cr6.lt) goto loc_82701538;
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// lwz r31,7668(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7668);
	// b 0x82701540
	goto loc_82701540;
loc_82701538:
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// lwz r31,7672(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7672);
loc_82701540:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82701560
	if (ctx.cr6.eq) goto loc_82701560;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82701560:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701570"))) PPC_WEAK_FUNC(sub_82701570);
PPC_FUNC_IMPL(__imp__sub_82701570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82701578;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r30,855
	ctx.r11.s64 = ctx.r30.s64 + 855;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r30.u32);
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82701638
	if (ctx.cr6.eq) goto loc_82701638;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x827015A8;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701638
	if (ctx.cr0.eq) goto loc_82701638;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701638
	if (!ctx.cr6.eq) goto loc_82701638;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826598f8
	ctx.lr = 0x827015C4;
	sub_826598F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,3420
	ctx.r4.s64 = ctx.r31.s64 + 3420;
	// lwz r6,3244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x827015D8;
	sub_82700F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702670
	ctx.lr = 0x827015E4;
	sub_82702670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,3256(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// bne cr6,0x82701638
	if (!ctx.cr6.eq) goto loc_82701638;
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82701638
	if (ctx.cr6.eq) goto loc_82701638;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824b8b20
	ctx.lr = 0x82701638;
	sub_824B8B20(ctx, base);
loc_82701638:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701640"))) PPC_WEAK_FUNC(sub_82701640);
PPC_FUNC_IMPL(__imp__sub_82701640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82701648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x82824308
	ctx.lr = 0x82701664;
	sub_82824308(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,2272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// lwz r5,2268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// lwz r4,2264(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// lwz r11,1308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82461c08
	ctx.lr = 0x8270168C;
	sub_82461C08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82701864
	if (ctx.cr6.eq) goto loc_82701864;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm. r10,r11,4,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82701814
	if (!ctx.cr0.eq) goto loc_82701814;
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x827016b4
	if (!ctx.cr6.eq) goto loc_827016B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827016B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82701814
	if (!ctx.cr6.gt) goto loc_82701814;
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x827016d0
	if (ctx.cr6.lt) goto loc_827016D0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82701864
	if (!ctx.cr6.eq) goto loc_82701864;
loc_827016D0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,3244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82701f90
	ctx.lr = 0x827016E0;
	sub_82701F90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82701864
	if (ctx.cr0.eq) goto loc_82701864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r5,2156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r10,-18636
	ctx.r29.s64 = ctx.r10.s64 + -18636;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270170C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,2148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2148);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,2152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2152);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,3420
	ctx.r4.s64 = ctx.r31.s64 + 3420;
	// lwz r6,3244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x82701758;
	sub_82700F18(ctx, base);
	// lwz r8,2264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// lwz r10,2244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// li r30,1
	ctx.r30.s64 = 1;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82701794
	if (!ctx.cr6.lt) goto loc_82701794;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
loc_82701794:
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x827017a8
	if (ctx.cr6.eq) goto loc_827017A8;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x827017e0
	if (!ctx.cr6.eq) goto loc_827017E0;
loc_827017A8:
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827017c4
	if (!ctx.cr6.gt) goto loc_827017C4;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827017C4:
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827017e0
	if (!ctx.cr6.gt) goto loc_827017E0;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_827017E0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b5200
	ctx.lr = 0x827017EC;
	sub_828B5200(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,300
	ctx.r11.s64 = 300;
	// stw r30,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r30.u32);
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
	// lwz r11,3244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3244);
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// b 0x82701864
	goto loc_82701864;
loc_82701814:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82701830
	if (ctx.cr6.eq) goto loc_82701830;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82701864
	if (ctx.cr6.eq) goto loc_82701864;
	// li r4,88
	ctx.r4.s64 = 88;
	// b 0x8270185c
	goto loc_8270185C;
loc_82701830:
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82701844
	if (!ctx.cr6.eq) goto loc_82701844;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82701844:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701864
	if (!ctx.cr6.eq) goto loc_82701864;
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82701864
	if (ctx.cr6.eq) goto loc_82701864;
	// li r4,92
	ctx.r4.s64 = 92;
loc_8270185C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x826eea28
	ctx.lr = 0x82701864;
	sub_826EEA28(ctx, base);
loc_82701864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701870"))) PPC_WEAK_FUNC(sub_82701870);
PPC_FUNC_IMPL(__imp__sub_82701870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82701878;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8270196c
	if (ctx.cr6.lt) goto loc_8270196C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82701970
	if (!ctx.cr6.lt) goto loc_82701970;
	// addi r11,r11,855
	ctx.r11.s64 = ctx.r11.s64 + 855;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82438190
	ctx.lr = 0x827018AC;
	sub_82438190(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x827019d8
	if (ctx.cr0.eq) goto loc_827019D8;
	// lwz r3,10548(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// lwz r30,2268(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// bl 0x82435048
	ctx.lr = 0x827018C0;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827019d8
	if (ctx.cr0.eq) goto loc_827019D8;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827019d8
	if (!ctx.cr6.eq) goto loc_827019D8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826598f8
	ctx.lr = 0x827018DC;
	sub_826598F8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,3420
	ctx.r4.s64 = ctx.r31.s64 + 3420;
	// lwz r6,2268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x827018F0;
	sub_82700F18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702670
	ctx.lr = 0x827018FC;
	sub_82702670(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270191C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// slw r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// bne cr6,0x8270194c
	if (!ctx.cr6.eq) goto loc_8270194C;
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270194c
	if (ctx.cr6.eq) goto loc_8270194C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x824b8b20
	ctx.lr = 0x8270194C;
	sub_824B8B20(ctx, base);
loc_8270194C:
	// addi r4,r31,3272
	ctx.r4.s64 = ctx.r31.s64 + 3272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x82701958;
	sub_82873B58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2a58
	ctx.lr = 0x82701968;
	sub_826E2A58(ctx, base);
	// b 0x827019bc
	goto loc_827019BC;
loc_8270196C:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
loc_82701970:
	// bne cr6,0x827019d8
	if (!ctx.cr6.eq) goto loc_827019D8;
	// lwz r3,10548(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x8270197C;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827019d8
	if (ctx.cr0.eq) goto loc_827019D8;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827019d8
	if (!ctx.cr6.eq) goto loc_827019D8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82659430
	ctx.lr = 0x82701998;
	sub_82659430(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25088
	ctx.r4.s64 = ctx.r11.s64 + -25088;
	// bl 0x8233a258
	ctx.lr = 0x827019A8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82701d78
	ctx.lr = 0x827019B4;
	sub_82701D78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702ac0
	ctx.lr = 0x827019BC;
	sub_82702AC0(ctx, base);
loc_827019BC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cef18
	ctx.lr = 0x827019D8;
	sub_828CEF18(ctx, base);
loc_827019D8:
	// lwz r3,10548(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x827019E0;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701a50
	if (ctx.cr0.eq) goto loc_82701A50;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701a50
	if (!ctx.cr6.eq) goto loc_82701A50;
	// bl 0x82659d40
	ctx.lr = 0x827019F8;
	sub_82659D40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2976
	ctx.r4.s64 = ctx.r11.s64 + -2976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
loc_82701A28:
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82701a44
	if (!ctx.cr0.eq) goto loc_82701A44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82701a28
	if (ctx.cr6.lt) goto loc_82701A28;
	// b 0x82701a50
	goto loc_82701A50;
loc_82701A44:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82701a50
	if (!ctx.cr6.gt) goto loc_82701A50;
	// stw r27,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r27.u32);
loc_82701A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701A78"))) PPC_WEAK_FUNC(sub_82701A78);
PPC_FUNC_IMPL(__imp__sub_82701A78) {
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
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82701bf4
	if (!ctx.cr6.eq) goto loc_82701BF4;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82701bf4
	if (ctx.cr6.eq) goto loc_82701BF4;
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82701bf4
	if (ctx.cr6.eq) goto loc_82701BF4;
	// lwz r11,3240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82701b50
	if (!ctx.cr6.eq) goto loc_82701B50;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,10548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82701ACC;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701b34
	if (ctx.cr0.eq) goto loc_82701B34;
	// bl 0x82659b78
	ctx.lr = 0x82701AD8;
	sub_82659B78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82701b34
	if (ctx.cr0.eq) goto loc_82701B34;
	// lwz r3,10548(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82701AE8;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701bd0
	if (ctx.cr0.eq) goto loc_82701BD0;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701bd0
	if (!ctx.cr6.eq) goto loc_82701BD0;
	// bl 0x82659c40
	ctx.lr = 0x82701B00;
	sub_82659C40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2956
	ctx.r4.s64 = ctx.r11.s64 + -2956;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701B20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// stw r10,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r10.u32);
	// b 0x82701bd0
	goto loc_82701BD0;
loc_82701B34:
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82701bd0
	if (ctx.cr6.eq) goto loc_82701BD0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x826eea28
	ctx.lr = 0x82701B4C;
	sub_826EEA28(ctx, base);
	// b 0x82701bd0
	goto loc_82701BD0;
loc_82701B50:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82701B5C;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701bd0
	if (ctx.cr0.eq) goto loc_82701BD0;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701bd0
	if (!ctx.cr6.eq) goto loc_82701BD0;
	// bl 0x82659d40
	ctx.lr = 0x82701B74;
	sub_82659D40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,-2976
	ctx.r4.s64 = ctx.r11.s64 + -2976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// stw r11,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r11.u32);
loc_82701BA8:
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82701bc4
	if (!ctx.cr0.eq) goto loc_82701BC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82701ba8
	if (ctx.cr6.lt) goto loc_82701BA8;
	// b 0x82701bd0
	goto loc_82701BD0;
loc_82701BC4:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82701bd0
	if (!ctx.cr6.gt) goto loc_82701BD0;
	// stw r9,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r9.u32);
loc_82701BD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82701c0c
	goto loc_82701C0C;
loc_82701BF4:
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82701c0c
	if (ctx.cr6.eq) goto loc_82701C0C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// bl 0x826eea28
	ctx.lr = 0x82701C0C;
	sub_826EEA28(ctx, base);
loc_82701C0C:
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

__attribute__((alias("__imp__sub_82701C28"))) PPC_WEAK_FUNC(sub_82701C28);
PPC_FUNC_IMPL(__imp__sub_82701C28) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,3240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701c70
	if (ctx.cr6.eq) goto loc_82701C70;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2976
	ctx.r4.s64 = ctx.r10.s64 + -2976;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r30.u32);
loc_82701C70:
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701ca0
	if (ctx.cr6.eq) goto loc_82701CA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2940
	ctx.r4.s64 = ctx.r10.s64 + -2940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701C9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r30.u32);
loc_82701CA0:
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

__attribute__((alias("__imp__sub_82701CB8"))) PPC_WEAK_FUNC(sub_82701CB8);
PPC_FUNC_IMPL(__imp__sub_82701CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82701CC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2976
	ctx.r4.s64 = ctx.r10.s64 + -2976;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r29,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r29.u32);
loc_82701CFC:
	// slw r9,r30,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// and. r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82701d18
	if (!ctx.cr0.eq) goto loc_82701D18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82701cfc
	if (ctx.cr6.lt) goto loc_82701CFC;
	// b 0x82701d24
	goto loc_82701D24;
loc_82701D18:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82701d24
	if (!ctx.cr6.gt) goto loc_82701D24;
	// stw r30,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r30.u32);
loc_82701D24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2940
	ctx.r4.s64 = ctx.r10.s64 + -2940;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701D44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r29,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r29.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// stw r30,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701D6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701D78"))) PPC_WEAK_FUNC(sub_82701D78);
PPC_FUNC_IMPL(__imp__sub_82701D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82701D80;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-25088
	ctx.r4.s64 = ctx.r11.s64 + -25088;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8233a258
	ctx.lr = 0x82701DA4;
	sub_8233A258(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824192e0
	ctx.lr = 0x82701DB0;
	sub_824192E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82701DBC;
	sub_82333960(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82701de8
	if (ctx.cr6.eq) goto loc_82701DE8;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82701dd8
	if (ctx.cr6.eq) goto loc_82701DD8;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82701de0
	goto loc_82701DE0;
loc_82701DD8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,7896
	ctx.r3.s64 = ctx.r11.s64 + 7896;
loc_82701DE0:
	// bl 0x82a4cad0
	ctx.lr = 0x82701DE4;
	sub_82A4CAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82701DE8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,3324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82701e10
	if (!ctx.cr6.gt) goto loc_82701E10;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,2096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// bl 0x824a8bc0
	ctx.lr = 0x82701E10;
	sub_824A8BC0(ctx, base);
loc_82701E10:
	// lwz r11,2096(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// lwz r11,708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82701e24
	if (ctx.cr6.lt) goto loc_82701E24;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82701E24:
	// lis r10,30517
	ctx.r10.s64 = 1999962112;
	// ori r10,r10,37888
	ctx.r10.u64 = ctx.r10.u64 | 37888;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82701e38
	if (ctx.cr6.lt) goto loc_82701E38;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82701E38:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82701ee4
	if (ctx.cr6.gt) goto loc_82701EE4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82701E4C;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82701f0c
	if (ctx.cr0.eq) goto loc_82701F0C;
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82701f0c
	if (!ctx.cr6.eq) goto loc_82701F0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82659430
	ctx.lr = 0x82701E68;
	sub_82659430(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cef18
	ctx.lr = 0x82701E84;
	sub_828CEF18(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82701E98;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,3328
	ctx.r3.s64 = ctx.r30.s64 + 3328;
	// bl 0x82400b48
	ctx.lr = 0x82701EA4;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82701EAC;
	sub_82333960(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lwz r3,2096(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2096);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,3324(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
	// lwz r11,708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// subf. r4,r31,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82701ed8
	if (ctx.cr0.lt) goto loc_82701ED8;
	// bl 0x824a8c88
	ctx.lr = 0x82701ED8;
	sub_824A8C88(ctx, base);
loc_82701ED8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3644(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3644, ctx.r11.u32);
	// b 0x82701f0c
	goto loc_82701F0C;
loc_82701EE4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24000
	ctx.r4.s64 = ctx.r11.s64 + -24000;
	// bl 0x8233a258
	ctx.lr = 0x82701EF4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,3328
	ctx.r3.s64 = ctx.r30.s64 + 3328;
	// bl 0x82400b48
	ctx.lr = 0x82701F00;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82701F08;
	sub_82333960(ctx, base);
	// stfs f31,3324(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3324, temp.u32);
loc_82701F0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82701c28
	ctx.lr = 0x82701F18;
	sub_82701C28(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,3384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3384, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,3256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,3256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3256, ctx.r10.u32);
loc_82701F34:
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and. r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82701f50
	if (!ctx.cr0.eq) goto loc_82701F50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82701f34
	if (ctx.cr6.lt) goto loc_82701F34;
	// b 0x82701f5c
	goto loc_82701F5C;
loc_82701F50:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// ble cr6,0x82701f5c
	if (!ctx.cr6.gt) goto loc_82701F5C;
	// stw r9,3384(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3384, ctx.r9.u32);
loc_82701F5C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82701F7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333960
	ctx.lr = 0x82701F84;
	sub_82333960(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82701F90"))) PPC_WEAK_FUNC(sub_82701F90);
PPC_FUNC_IMPL(__imp__sub_82701F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82701F98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82701FB8;
	sub_82435048(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827020dc
	if (ctx.cr0.eq) goto loc_827020DC;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827020dc
	if (!ctx.cr6.eq) goto loc_827020DC;
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r11,r31,1412
	ctx.r11.s64 = ctx.r31.s64 + 1412;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82701fe4
	if (ctx.cr6.eq) goto loc_82701FE4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x82701ff8
	goto loc_82701FF8;
loc_82701FE4:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82701ff8
	if (!ctx.cr6.eq) goto loc_82701FF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82701FF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827020dc
	if (ctx.cr6.eq) goto loc_827020DC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827020dc
	if (ctx.cr0.eq) goto loc_827020DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82438190
	ctx.lr = 0x8270201C;
	sub_82438190(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82659670
	ctx.lr = 0x82702030;
	sub_82659670(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cef18
	ctx.lr = 0x8270204C;
	sub_828CEF18(ctx, base);
	// lwz r11,2264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2264);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x827020c8
	if (!ctx.cr6.eq) goto loc_827020C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,2096(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2096);
	// bl 0x824baf10
	ctx.lr = 0x82702064;
	sub_824BAF10(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x827020c8
	if (ctx.cr0.eq) goto loc_827020C8;
	// addi r29,r31,6472
	ctx.r29.s64 = ctx.r31.s64 + 6472;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827020c8
	if (!ctx.cr6.gt) goto loc_827020C8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82702084:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x827020b4
	if (!ctx.cr6.eq) goto loc_827020B4;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827020AC;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_827020B4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82702084
	if (ctx.cr6.lt) goto loc_82702084;
loc_827020C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2096(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2096);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824a8e90
	ctx.lr = 0x827020D8;
	sub_824A8E90(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_827020DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827020E8"))) PPC_WEAK_FUNC(sub_827020E8);
PPC_FUNC_IMPL(__imp__sub_827020E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827020F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bge cr6,0x82702304
	if (!ctx.cr6.lt) goto loc_82702304;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702304
	if (ctx.cr6.eq) goto loc_82702304;
	// lwz r11,3648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702304
	if (ctx.cr6.eq) goto loc_82702304;
	// addi r30,r31,3404
	ctx.r30.s64 = ctx.r31.s64 + 3404;
	// li r28,4
	ctx.r28.s64 = 4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82702134:
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8270215c
	if (ctx.cr6.eq) goto loc_8270215C;
	// lwz r5,3648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824aba48
	ctx.lr = 0x82702150;
	sub_824ABA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270215c
	if (ctx.cr0.eq) goto loc_8270215C;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_8270215C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82702134
	if (!ctx.cr0.eq) goto loc_82702134;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827021bc
	if (ctx.cr6.eq) goto loc_827021BC;
	// lwz r11,3648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827021bc
	if (ctx.cr6.eq) goto loc_827021BC;
	// addi r29,r31,3388
	ctx.r29.s64 = ctx.r31.s64 + 3388;
	// li r28,4
	ctx.r28.s64 = 4;
loc_82702188:
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827021b0
	if (ctx.cr6.eq) goto loc_827021B0;
	// lwz r5,3648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824aba48
	ctx.lr = 0x827021A4;
	sub_824ABA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827021b0
	if (ctx.cr0.eq) goto loc_827021B0;
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
loc_827021B0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82702188
	if (!ctx.cr0.eq) goto loc_82702188;
loc_827021BC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,3648(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3648);
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824aba48
	ctx.lr = 0x827021CC;
	sub_824ABA48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82702264
	if (ctx.cr0.eq) goto loc_82702264;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r31,3436
	ctx.r4.s64 = ctx.r31.s64 + 3436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x827021E8;
	sub_82700F18(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824b36a0
	ctx.lr = 0x827021F4;
	sub_824B36A0(ctx, base);
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8270222c
	if (!ctx.cr6.eq) goto loc_8270222C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82701c28
	ctx.lr = 0x8270220C;
	sub_82701C28(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270222C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270222C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82438190
	ctx.lr = 0x82702234;
	sub_82438190(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,7264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82702280
	if (ctx.cr6.eq) goto loc_82702280;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82702280
	if (ctx.cr6.eq) goto loc_82702280;
	// lwz r11,520(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82702280
	if (!ctx.cr6.gt) goto loc_82702280;
	// bl 0x824180d0
	ctx.lr = 0x82702260;
	sub_824180D0(ctx, base);
	// b 0x82702280
	goto loc_82702280;
loc_82702264:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82702270;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702280
	if (ctx.cr0.eq) goto loc_82702280;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82659a38
	ctx.lr = 0x82702280;
	sub_82659A38(ctx, base);
loc_82702280:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827022c0
	if (ctx.cr6.eq) goto loc_827022C0;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82702290:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827022b4
	if (ctx.cr6.eq) goto loc_827022B4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827022b4
	if (ctx.cr6.eq) goto loc_827022B4;
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824b36a0
	ctx.lr = 0x827022B0;
	sub_824B36A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_827022B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82702290
	if (!ctx.cr0.eq) goto loc_82702290;
loc_827022C0:
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702304
	if (ctx.cr6.eq) goto loc_82702304;
	// addi r30,r31,3388
	ctx.r30.s64 = ctx.r31.s64 + 3388;
	// li r29,4
	ctx.r29.s64 = 4;
loc_827022D4:
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827022f8
	if (ctx.cr6.eq) goto loc_827022F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827022f8
	if (ctx.cr6.eq) goto loc_827022F8;
	// lwz r3,2096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// bl 0x824b36a0
	ctx.lr = 0x827022F4;
	sub_824B36A0(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_827022F8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x827022d4
	if (!ctx.cr0.eq) goto loc_827022D4;
loc_82702304:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82702310"))) PPC_WEAK_FUNC(sub_82702310);
PPC_FUNC_IMPL(__imp__sub_82702310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82702318;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r31,3436
	ctx.r4.s64 = ctx.r31.s64 + 3436;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82702330:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82702350
	if (ctx.cr6.eq) goto loc_82702350;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82702330
	if (ctx.cr6.lt) goto loc_82702330;
	// b 0x827023c0
	goto loc_827023C0;
loc_82702350:
	// lwz r11,2268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,-6
	ctx.r29.s64 = ctx.r11.s64 + -6;
	// bl 0x82700f18
	ctx.lr = 0x82702368;
	sub_82700F18(ctx, base);
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8270238c
	if (!ctx.cr6.eq) goto loc_8270238C;
	// addi r4,r31,3272
	ctx.r4.s64 = ctx.r31.s64 + 3272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82873b58
	ctx.lr = 0x8270237C;
	sub_82873B58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2a58
	ctx.lr = 0x8270238C;
	sub_826E2A58(ctx, base);
loc_8270238C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82438190
	ctx.lr = 0x82702394;
	sub_82438190(ctx, base);
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,7264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827023c0
	if (ctx.cr6.eq) goto loc_827023C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x827023c0
	if (ctx.cr6.eq) goto loc_827023C0;
	// lwz r11,520(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827023c0
	if (!ctx.cr6.gt) goto loc_827023C0;
	// bl 0x82418228
	ctx.lr = 0x827023C0;
	sub_82418228(ctx, base);
loc_827023C0:
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x827023ec
	if (!ctx.cr6.eq) goto loc_827023EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827023EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827023EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827023F8"))) PPC_WEAK_FUNC(sub_827023F8);
PPC_FUNC_IMPL(__imp__sub_827023F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82702400;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827024b4
	if (ctx.cr6.eq) goto loc_827024B4;
	// lfs f0,3324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3324);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r9,30517
	ctx.r9.s64 = 1999962112;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r30,r9,37888
	ctx.r30.u64 = ctx.r9.u64 | 37888;
	// add r11,r29,r5
	ctx.r11.u64 = ctx.r29.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82702464
	if (!ctx.cr6.gt) goto loc_82702464;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82702450;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827024b4
	if (ctx.cr0.eq) goto loc_827024B4;
	// subf r4,r29,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bl 0x82659550
	ctx.lr = 0x82702460;
	sub_82659550(ctx, base);
	// b 0x827024b4
	goto loc_827024B4;
loc_82702464:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,20576
	ctx.r4.s64 = ctx.r11.s64 + 20576;
	// bl 0x82816c30
	ctx.lr = 0x82702474;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x82400b48
	ctx.lr = 0x82702480;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82702488;
	sub_82333960(ctx, base);
	// lwz r11,2264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x827024b4
	if (!ctx.cr6.eq) goto loc_827024B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,26556
	ctx.r4.s64 = ctx.r10.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827024B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827024B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827024C0"))) PPC_WEAK_FUNC(sub_827024C0);
PPC_FUNC_IMPL(__imp__sub_827024C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827024C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x827024DC;
	sub_82435048(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82702664
	if (ctx.cr0.eq) goto loc_82702664;
	// lwz r10,1416(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82702540
	if (!ctx.cr6.eq) goto loc_82702540;
	// lwz r9,1456(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// addi r11,r30,1412
	ctx.r11.s64 = ctx.r30.s64 + 1412;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82702508
	if (ctx.cr6.eq) goto loc_82702508;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8270251c
	goto loc_8270251C;
loc_82702508:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8270251c
	if (!ctx.cr6.eq) goto loc_8270251C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8270251C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702540
	if (ctx.cr6.eq) goto loc_82702540;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82702540
	if (ctx.cr0.eq) goto loc_82702540;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82702598
	goto loc_82702598;
loc_82702540:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x827025a0
	if (!ctx.cr6.eq) goto loc_827025A0;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82702664
	if (!ctx.cr6.eq) goto loc_82702664;
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8270258c
	if (ctx.cr6.eq) goto loc_8270258C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r10,-2916
	ctx.r4.s64 = ctx.r10.s64 + -2916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// stw r11,1792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1792, ctx.r11.u32);
loc_8270258C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82659e10
	ctx.lr = 0x82702594;
	sub_82659E10(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
loc_82702598:
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// b 0x82702664
	goto loc_82702664;
loc_827025A0:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8270262c
	if (!ctx.cr6.eq) goto loc_8270262C;
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82702664
	if (!ctx.cr6.eq) goto loc_82702664;
	// lwz r3,10548(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x827025BC;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702618
	if (ctx.cr0.eq) goto loc_82702618;
	// bl 0x8265a0a8
	ctx.lr = 0x827025C8;
	sub_8265A0A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x827025D4;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x827025D8;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x827025DC;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827025f0
	if (ctx.cr0.eq) goto loc_827025F0;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2868, ctx.r11.u32);
	// bl 0x826d1600
	ctx.lr = 0x827025F0;
	sub_826D1600(ctx, base);
loc_827025F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702a38
	ctx.lr = 0x827025F8;
	sub_82702A38(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82702618:
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r10,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r10.u32);
	// addi r4,r9,-2896
	ctx.r4.s64 = ctx.r9.s64 + -2896;
	// b 0x8270264c
	goto loc_8270264C;
loc_8270262C:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82702664
	if (!ctx.cr6.eq) goto loc_82702664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702b58
	ctx.lr = 0x8270263C;
	sub_82702B58(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r11.u32);
	// addi r4,r10,-2880
	ctx.r4.s64 = ctx.r10.s64 + -2880;
loc_8270264C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82702664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82702670"))) PPC_WEAK_FUNC(sub_82702670);
PPC_FUNC_IMPL(__imp__sub_82702670) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270281c
	if (!ctx.cr0.eq) goto loc_8270281C;
	// bl 0x823fe0c8
	ctx.lr = 0x8270269C;
	sub_823FE0C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827026B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827027f0
	if (ctx.cr0.eq) goto loc_827027F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438070
	ctx.lr = 0x827026C4;
	sub_82438070(ctx, base);
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82702774
	if (ctx.cr6.gt) goto loc_82702774;
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,30869
	ctx.r10.s64 = 2023030784;
	// ori r10,r10,22201
	ctx.r10.u64 = ctx.r10.u64 | 22201;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82702738
	if (ctx.cr6.gt) goto loc_82702738;
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,10264
	ctx.r10.s64 = 672661504;
	// ori r10,r10,58711
	ctx.r10.u64 = ctx.r10.u64 | 58711;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,13574
	ctx.r10.s64 = 889585664;
	// ori r10,r10,56103
	ctx.r10.u64 = ctx.r10.u64 | 56103;
loc_82702728:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82702a18
	if (!ctx.cr6.eq) goto loc_82702A18;
loc_82702730:
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82702a18
	goto loc_82702A18;
loc_82702738:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-30770
	ctx.r10.s64 = -2016542720;
	// ori r10,r10,19939
	ctx.r10.u64 = ctx.r10.u64 | 19939;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-21927
	ctx.r10.s64 = -1437007872;
	// ori r10,r10,51721
	ctx.r10.u64 = ctx.r10.u64 | 51721;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-20312
	ctx.r10.s64 = -1331167232;
	// ori r10,r10,12433
	ctx.r10.u64 = ctx.r10.u64 | 12433;
	// b 0x82702728
	goto loc_82702728;
loc_82702774:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827027c4
	if (ctx.cr6.gt) goto loc_827027C4;
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-15069
	ctx.r10.s64 = -987561984;
	// ori r10,r10,10327
	ctx.r10.u64 = ctx.r10.u64 | 10327;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-8461
	ctx.r10.s64 = -554500096;
	// ori r10,r10,4130
	ctx.r10.u64 = ctx.r10.u64 | 4130;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-7801
	ctx.r10.s64 = -511246336;
	// ori r10,r10,39498
	ctx.r10.u64 = ctx.r10.u64 | 39498;
	// b 0x82702728
	goto loc_82702728;
loc_827027C4:
	// lis r10,-1250
	ctx.r10.s64 = -81920000;
	// ori r10,r10,47279
	ctx.r10.u64 = ctx.r10.u64 | 47279;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82702730
	if (ctx.cr6.eq) goto loc_82702730;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// b 0x82702728
	goto loc_82702728;
loc_827027F0:
	// bl 0x8243ae98
	ctx.lr = 0x827027F4;
	sub_8243AE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270280C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827029a0
	if (ctx.cr0.eq) goto loc_827029A0;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82702a18
	goto loc_82702A18;
loc_8270281C:
	// bl 0x823fe0c8
	ctx.lr = 0x82702820;
	sub_823FE0C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82702974
	if (ctx.cr0.eq) goto loc_82702974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82438070
	ctx.lr = 0x82702848;
	sub_82438070(ctx, base);
	// lis r10,-15907
	ctx.r10.s64 = -1042481152;
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// ori r10,r10,20748
	ctx.r10.u64 = ctx.r10.u64 | 20748;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827028f8
	if (ctx.cr6.gt) goto loc_827028F8;
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,30869
	ctx.r10.s64 = 2023030784;
	// ori r10,r10,22201
	ctx.r10.u64 = ctx.r10.u64 | 22201;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x827028bc
	if (ctx.cr6.gt) goto loc_827028BC;
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,6888
	ctx.r10.s64 = 451411968;
	// ori r10,r10,42758
	ctx.r10.u64 = ctx.r10.u64 | 42758;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,7861
	ctx.r10.s64 = 515178496;
	// ori r10,r10,20314
	ctx.r10.u64 = ctx.r10.u64 | 20314;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,10264
	ctx.r10.s64 = 672661504;
	// ori r10,r10,58711
	ctx.r10.u64 = ctx.r10.u64 | 58711;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,13574
	ctx.r10.s64 = 889585664;
	// ori r10,r10,56103
	ctx.r10.u64 = ctx.r10.u64 | 56103;
loc_827028AC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82702a18
	if (!ctx.cr6.eq) goto loc_82702A18;
loc_827028B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82702a18
	goto loc_82702A18;
loc_827028BC:
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// ori r10,r10,48948
	ctx.r10.u64 = ctx.r10.u64 | 48948;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-30770
	ctx.r10.s64 = -2016542720;
	// ori r10,r10,19939
	ctx.r10.u64 = ctx.r10.u64 | 19939;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-21927
	ctx.r10.s64 = -1437007872;
	// ori r10,r10,51721
	ctx.r10.u64 = ctx.r10.u64 | 51721;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-20312
	ctx.r10.s64 = -1331167232;
	// ori r10,r10,12433
	ctx.r10.u64 = ctx.r10.u64 | 12433;
	// b 0x827028ac
	goto loc_827028AC;
loc_827028F8:
	// lis r10,-2529
	ctx.r10.s64 = -165740544;
	// ori r10,r10,23970
	ctx.r10.u64 = ctx.r10.u64 | 23970;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82702948
	if (ctx.cr6.gt) goto loc_82702948;
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-15069
	ctx.r10.s64 = -987561984;
	// ori r10,r10,10327
	ctx.r10.u64 = ctx.r10.u64 | 10327;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-9000
	ctx.r10.s64 = -589824000;
	// ori r10,r10,41966
	ctx.r10.u64 = ctx.r10.u64 | 41966;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-8461
	ctx.r10.s64 = -554500096;
	// ori r10,r10,4130
	ctx.r10.u64 = ctx.r10.u64 | 4130;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-7801
	ctx.r10.s64 = -511246336;
	// ori r10,r10,39498
	ctx.r10.u64 = ctx.r10.u64 | 39498;
	// b 0x827028ac
	goto loc_827028AC;
loc_82702948:
	// lis r10,-1250
	ctx.r10.s64 = -81920000;
	// ori r10,r10,47279
	ctx.r10.u64 = ctx.r10.u64 | 47279;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-764
	ctx.r10.s64 = -50069504;
	// ori r10,r10,46735
	ctx.r10.u64 = ctx.r10.u64 | 46735;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827028b4
	if (ctx.cr6.eq) goto loc_827028B4;
	// lis r10,-271
	ctx.r10.s64 = -17760256;
	// ori r10,r10,43299
	ctx.r10.u64 = ctx.r10.u64 | 43299;
	// b 0x827028ac
	goto loc_827028AC;
loc_82702974:
	// bl 0x8243ae98
	ctx.lr = 0x82702978;
	sub_8243AE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827029a0
	if (ctx.cr0.eq) goto loc_827029A0;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82702a18
	goto loc_82702A18;
loc_827029A0:
	// bl 0x824392c0
	ctx.lr = 0x827029A4;
	sub_824392C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827029BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82702a14
	if (!ctx.cr0.eq) goto loc_82702A14;
	// bl 0x82439178
	ctx.lr = 0x827029C8;
	sub_82439178(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827029E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82702a14
	if (!ctx.cr0.eq) goto loc_82702A14;
	// bl 0x82418c28
	ctx.lr = 0x827029EC;
	sub_82418C28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82702a18
	if (ctx.cr0.eq) goto loc_82702A18;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82702a18
	goto loc_82702A18;
loc_82702A14:
	// li r30,11
	ctx.r30.s64 = 11;
loc_82702A18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82702A38"))) PPC_WEAK_FUNC(sub_82702A38);
PPC_FUNC_IMPL(__imp__sub_82702A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82702A40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,3420
	ctx.r28.s64 = ctx.r31.s64 + 3420;
	// addi r27,r31,3436
	ctx.r27.s64 = ctx.r31.s64 + 3436;
	// addi r29,r31,3388
	ctx.r29.s64 = ctx.r31.s64 + 3388;
loc_82702A58:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x82702A6C;
	sub_82700F18(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82700f18
	ctx.lr = 0x82702A80;
	sub_82700F18(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// slw r11,r10,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// blt cr6,0x82702a58
	if (ctx.cr6.lt) goto loc_82702A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702ac0
	ctx.lr = 0x82702AB4;
	sub_82702AC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82702AC0"))) PPC_WEAK_FUNC(sub_82702AC0);
PPC_FUNC_IMPL(__imp__sub_82702AC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7868
	ctx.r30.s64 = ctx.r11.s64 + -7868;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82816c30
	ctx.lr = 0x82702AEC;
	sub_82816C30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x82400b48
	ctx.lr = 0x82702AF8;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82702B00;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82816c30
	ctx.lr = 0x82702B0C;
	sub_82816C30(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x82400b48
	ctx.lr = 0x82702B18;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82702B20;
	sub_82333960(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r10.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// lwz r11,3256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82702B58"))) PPC_WEAK_FUNC(sub_82702B58);
PPC_FUNC_IMPL(__imp__sub_82702B58) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82435048
	ctx.lr = 0x82702B78;
	sub_82435048(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702bd4
	if (ctx.cr0.eq) goto loc_82702BD4;
	// bl 0x8265a0a8
	ctx.lr = 0x82702B84;
	sub_8265A0A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,-17336
	ctx.r3.s64 = ctx.r11.s64 + -17336;
	// bl 0x82816528
	ctx.lr = 0x82702B90;
	sub_82816528(ctx, base);
	// bl 0x828e0d10
	ctx.lr = 0x82702B94;
	sub_828E0D10(ctx, base);
	// bl 0x82438370
	ctx.lr = 0x82702B98;
	sub_82438370(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702bac
	if (ctx.cr0.eq) goto loc_82702BAC;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2868, ctx.r11.u32);
	// bl 0x826d1600
	ctx.lr = 0x82702BAC;
	sub_826D1600(ctx, base);
loc_82702BAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82702a38
	ctx.lr = 0x82702BB4;
	sub_82702A38(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82702BD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82702BD4:
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

__attribute__((alias("__imp__sub_82702BE8"))) PPC_WEAK_FUNC(sub_82702BE8);
PPC_FUNC_IMPL(__imp__sub_82702BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82702BF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1796(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1796);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x826ee958
	ctx.lr = 0x82702C1C;
	sub_826EE958(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826e4ed0
	ctx.lr = 0x82702C30;
	sub_826E4ED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82702c68
	if (!ctx.cr0.eq) goto loc_82702C68;
	// cmpwi cr6,r31,88
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 88, ctx.xer);
	// beq cr6,0x82702c50
	if (ctx.cr6.eq) goto loc_82702C50;
	// cmpwi cr6,r31,89
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 89, ctx.xer);
	// beq cr6,0x82702c50
	if (ctx.cr6.eq) goto loc_82702C50;
	// cmpwi cr6,r31,92
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 92, ctx.xer);
	// bne cr6,0x82702c5c
	if (!ctx.cr6.eq) goto loc_82702C5C;
loc_82702C50:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82702c5c
	if (!ctx.cr6.eq) goto loc_82702C5C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82702C5C:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,203
	ctx.r11.s64 = 203;
	// stw r11,16104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16104, ctx.r11.u32);
loc_82702C68:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82702C78"))) PPC_WEAK_FUNC(sub_82702C78);
PPC_FUNC_IMPL(__imp__sub_82702C78) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x826e9578
	ctx.lr = 0x82702C98;
	sub_826E9578(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82702cac
	if (!ctx.cr6.eq) goto loc_82702CAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82702CAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82702cb8
	if (!ctx.cr6.gt) goto loc_82702CB8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82702CB8:
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

__attribute__((alias("__imp__sub_82702CD8"))) PPC_WEAK_FUNC(sub_82702CD8);
PPC_FUNC_IMPL(__imp__sub_82702CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82702CE0;
	__savegprlr_20(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// bl 0x8233a258
	ctx.lr = 0x82702D04;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-2868
	ctx.r4.s64 = ctx.r11.s64 + -2868;
	// bl 0x82816c30
	ctx.lr = 0x82702D14;
	sub_82816C30(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-2800
	ctx.r4.s64 = ctx.r11.s64 + -2800;
	// bl 0x82816c30
	ctx.lr = 0x82702D24;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,-22236
	ctx.r4.s64 = ctx.r11.s64 + -22236;
	// bl 0x82816c30
	ctx.lr = 0x82702D34;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,-22168
	ctx.r4.s64 = ctx.r11.s64 + -22168;
	// bl 0x82816c30
	ctx.lr = 0x82702D44;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-22096
	ctx.r4.s64 = ctx.r11.s64 + -22096;
	// bl 0x82816c30
	ctx.lr = 0x82702D54;
	sub_82816C30(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-22024
	ctx.r4.s64 = ctx.r11.s64 + -22024;
	// bl 0x82816c30
	ctx.lr = 0x82702D64;
	sub_82816C30(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-2732
	ctx.r4.s64 = ctx.r11.s64 + -2732;
	// bl 0x82816c30
	ctx.lr = 0x82702D74;
	sub_82816C30(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-2664
	ctx.r4.s64 = ctx.r11.s64 + -2664;
	// bl 0x82816c30
	ctx.lr = 0x82702D84;
	sub_82816C30(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702D90;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702DA4;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702DB8;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702DCC;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702DE0;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702DF4;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702E08;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82702E1C;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703188
	if (!ctx.cr0.eq) goto loc_82703188;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-2572
	ctx.r4.s64 = ctx.r11.s64 + -2572;
	// bl 0x82a4d040
	ctx.lr = 0x82702E34;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702f04
	if (ctx.cr0.eq) goto loc_82702F04;
	// lwz r11,2096(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82702f04
	if (ctx.cr6.eq) goto loc_82702F04;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x8233a328
	ctx.lr = 0x82702E54;
	sub_8233A328(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-16612
	ctx.r4.s64 = ctx.r10.s64 + -16612;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x828db5e0
	ctx.lr = 0x82702E78;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82702E84;
	sub_82400B48(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82333960
	ctx.lr = 0x82702E8C;
	sub_82333960(ctx, base);
	// lwz r3,1152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82702ea8
	if (ctx.cr6.eq) goto loc_82702EA8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82702ea8
	if (ctx.cr6.eq) goto loc_82702EA8;
	// bl 0x82332db8
	ctx.lr = 0x82702EA8;
	sub_82332DB8(ctx, base);
loc_82702EA8:
	// lwz r11,2096(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2096);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r10,-2548
	ctx.r4.s64 = ctx.r10.s64 + -2548;
	// lwz r5,708(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 708);
	// bl 0x82816c30
	ctx.lr = 0x82702EC0;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82702ed4
	if (ctx.cr6.eq) goto loc_82702ED4;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82702edc
	goto loc_82702EDC;
loc_82702ED4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_82702EDC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x82702EE8;
	sub_82419348(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82702EF4;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82702EFC;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82702f38
	goto loc_82702F38;
loc_82702F04:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-2540
	ctx.r4.s64 = ctx.r11.s64 + -2540;
	// bl 0x82a4d040
	ctx.lr = 0x82702F14;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702f40
	if (ctx.cr0.eq) goto loc_82702F40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82703c68
	ctx.lr = 0x82702F28;
	sub_82703C68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82702F34;
	sub_82400B48(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
loc_82702F38:
	// bl 0x82333960
	ctx.lr = 0x82702F3C;
	sub_82333960(ctx, base);
	// b 0x827039ec
	goto loc_827039EC;
loc_82702F40:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r31,r11,-2508
	ctx.r31.s64 = ctx.r11.s64 + -2508;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a4d040
	ctx.lr = 0x82702F54;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702fc4
	if (ctx.cr0.eq) goto loc_82702FC4;
	// lwz r30,3384(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3384);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82704008
	ctx.lr = 0x82702F70;
	sub_82704008(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82702F7C;
	sub_82400B48(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82333960
	ctx.lr = 0x82702F84;
	sub_82333960(ctx, base);
	// li r11,255
	ctx.r11.s64 = 255;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x82702fb0
	if (!ctx.cr6.eq) goto loc_82702FB0;
	// stb r26,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r26.u8);
	// stb r26,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r26.u8);
	// b 0x82702fb8
	goto loc_82702FB8;
loc_82702FB0:
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r11,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r11.u8);
loc_82702FB8:
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826e9d88
	ctx.lr = 0x82702FC0;
	sub_826E9D88(ctx, base);
	// b 0x827039ec
	goto loc_827039EC;
loc_82702FC4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-21932
	ctx.r4.s64 = ctx.r11.s64 + -21932;
	// bl 0x82a4d040
	ctx.lr = 0x82702FD4;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82702fe4
	if (ctx.cr0.eq) goto loc_82702FE4;
	// addi r4,r24,3596
	ctx.r4.s64 = ctx.r24.s64 + 3596;
	// b 0x82703000
	goto loc_82703000;
loc_82702FE4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-21904
	ctx.r4.s64 = ctx.r11.s64 + -21904;
	// bl 0x82a4d040
	ctx.lr = 0x82702FF4;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270300c
	if (ctx.cr0.eq) goto loc_8270300C;
	// addi r4,r24,3620
	ctx.r4.s64 = ctx.r24.s64 + 3620;
loc_82703000:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703008;
	sub_82400B48(ctx, base);
	// b 0x82703064
	goto loc_82703064;
loc_8270300C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-21872
	ctx.r4.s64 = ctx.r11.s64 + -21872;
	// bl 0x82a4d040
	ctx.lr = 0x8270301C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270302c
	if (ctx.cr0.eq) goto loc_8270302C;
	// addi r4,r24,3328
	ctx.r4.s64 = ctx.r24.s64 + 3328;
	// b 0x82703048
	goto loc_82703048;
loc_8270302C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,-21844
	ctx.r4.s64 = ctx.r11.s64 + -21844;
	// bl 0x82a4d040
	ctx.lr = 0x8270303C;
	sub_82A4D040(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270306c
	if (ctx.cr0.eq) goto loc_8270306C;
	// addi r4,r24,3352
	ctx.r4.s64 = ctx.r24.s64 + 3352;
loc_82703048:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823339b8
	ctx.lr = 0x82703050;
	sub_823339B8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x8270305C;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82703064;
	sub_82333960(ctx, base);
loc_82703064:
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x827039ec
	goto loc_827039EC;
loc_8270306C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// addi r5,r10,-21812
	ctx.r5.s64 = ctx.r10.s64 + -21812;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816e00
	ctx.lr = 0x827030A0;
	sub_82816E00(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x827039e4
	if (!ctx.cr6.gt) goto loc_827039E4;
	// lwz r11,2264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2264);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8270315c
	if (!ctx.cr6.eq) goto loc_8270315C;
	// lwz r11,2268(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x827030d4
	if (ctx.cr6.lt) goto loc_827030D4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x827030d4
	if (!ctx.cr6.lt) goto loc_827030D4;
	// addi r11,r11,855
	ctx.r11.s64 = ctx.r11.s64 + 855;
	// b 0x827030e8
	goto loc_827030E8;
loc_827030D4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8270315c
	if (ctx.cr6.lt) goto loc_8270315C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bge cr6,0x8270315c
	if (!ctx.cr6.lt) goto loc_8270315C;
	// addi r11,r11,853
	ctx.r11.s64 = ctx.r11.s64 + 853;
loc_827030E8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r24
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270315c
	if (ctx.cr6.eq) goto loc_8270315C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82702670
	ctx.lr = 0x82703104;
	sub_82702670(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r10,-2484
	ctx.r4.s64 = ctx.r10.s64 + -2484;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x827039e4
	goto loc_827039E4;
loc_8270315C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// bl 0x82816c30
	ctx.lr = 0x8270316C;
	sub_82816C30(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703178;
	sub_82400B48(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82703180;
	sub_82333960(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// b 0x827039e4
	goto loc_827039E4;
loc_82703188:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// li r29,24
	ctx.r29.s64 = 24;
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r26,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r26.u32);
	// stw r26,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r26.u32);
	// stw r26,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r26.u32);
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// bl 0x8243b2d8
	ctx.lr = 0x827031CC;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827031f4
	if (!ctx.cr0.eq) goto loc_827031F4;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x827031E0;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827031f4
	if (!ctx.cr0.eq) goto loc_827031F4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r5,r11,-21948
	ctx.r5.s64 = ctx.r11.s64 + -21948;
	// b 0x827031fc
	goto loc_827031FC;
loc_827031F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r5,r11,-2596
	ctx.r5.s64 = ctx.r11.s64 + -2596;
loc_827031FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82816e00
	ctx.lr = 0x8270320C;
	sub_82816E00(ctx, base);
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82400b48
	ctx.lr = 0x8270321C;
	sub_82400B48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r23,r11,7896
	ctx.r23.s64 = ctx.r11.s64 + 7896;
	// lwz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703238
	if (!ctx.cr6.eq) goto loc_82703238;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82703238:
	// bl 0x82a4cad0
	ctx.lr = 0x8270323C;
	sub_82A4CAD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x8270324C;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703294
	if (!ctx.cr0.eq) goto loc_82703294;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82703260;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703294
	if (!ctx.cr0.eq) goto loc_82703294;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82703274;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703294
	if (!ctx.cr0.eq) goto loc_82703294;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8243b2d8
	ctx.lr = 0x82703288;
	sub_8243B2D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r31,855
	ctx.r11.s64 = ctx.r31.s64 + 855;
	// beq 0x82703298
	if (ctx.cr0.eq) goto loc_82703298;
loc_82703294:
	// addi r11,r31,859
	ctx.r11.s64 = ctx.r31.s64 + 859;
loc_82703298:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r11,r24
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x827039b4
	if (ctx.cr6.eq) goto loc_827039B4;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r30,r11,20576
	ctx.r30.s64 = ctx.r11.s64 + 20576;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82816c30
	ctx.lr = 0x827032C0;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827032d4
	if (!ctx.cr6.eq) goto loc_827032D4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_827032D4:
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x827032E0;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827032E8;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x827032F8;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270330c
	if (!ctx.cr6.eq) goto loc_8270330C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8270330C:
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82419348
	ctx.lr = 0x82703318;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703320;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82703330;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703344
	if (!ctx.cr6.eq) goto loc_82703344;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82703344:
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82419348
	ctx.lr = 0x82703350;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703358;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82703368;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270337c
	if (!ctx.cr6.eq) goto loc_8270337C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8270337C:
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82419348
	ctx.lr = 0x82703388;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703390;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x827033A0;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827033b4
	if (!ctx.cr6.eq) goto loc_827033B4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_827033B4:
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82419348
	ctx.lr = 0x827033C0;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827033C8;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x827033D8;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827033ec
	if (!ctx.cr6.eq) goto loc_827033EC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_827033EC:
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82419348
	ctx.lr = 0x827033F8;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703400;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82703410;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703424
	if (!ctx.cr6.eq) goto loc_82703424;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82703424:
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82419348
	ctx.lr = 0x82703430;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703438;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x82703448;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270345c
	if (!ctx.cr6.eq) goto loc_8270345C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8270345C:
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82419348
	ctx.lr = 0x82703468;
	sub_82419348(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703470;
	sub_82333960(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x8270347C;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827038e8
	if (!ctx.cr0.eq) goto loc_827038E8;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x82703490;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827038e8
	if (!ctx.cr0.eq) goto loc_827038E8;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x827034A4;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827037d0
	if (!ctx.cr0.eq) goto loc_827037D0;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x827034B8;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827037d0
	if (!ctx.cr0.eq) goto loc_827037D0;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x827034CC;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703584
	if (!ctx.cr0.eq) goto loc_82703584;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x827034E0;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703584
	if (!ctx.cr0.eq) goto loc_82703584;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x827034F4;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82703510
	if (!ctx.cr0.eq) goto loc_82703510;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x82703508;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82703970
	if (ctx.cr0.eq) goto loc_82703970;
loc_82703510:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r10,-2580
	ctx.r4.s64 = ctx.r10.s64 + -2580;
	// lwz r31,-20340(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20340);
	// bl 0x8233a328
	ctx.lr = 0x82703528;
	sub_8233A328(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-16612
	ctx.r4.s64 = ctx.r10.s64 + -16612;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x828db5e0
	ctx.lr = 0x8270354C;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703558;
	sub_82400B48(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x82703560;
	sub_82333960(ctx, base);
	// lwz r3,1152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8270357c
	if (ctx.cr6.eq) goto loc_8270357C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270357c
	if (ctx.cr6.eq) goto loc_8270357C;
	// bl 0x82332db8
	ctx.lr = 0x8270357C;
	sub_82332DB8(ctx, base);
loc_8270357C:
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// b 0x82703924
	goto loc_82703924;
loc_82703584:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827035A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x827035AC;
	sub_82400B48(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x827035B4;
	sub_82333960(ctx, base);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x827035cc
	if (!ctx.cr6.eq) goto loc_827035CC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_827035CC:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// blt cr6,0x82703750
	if (ctx.cr6.lt) goto loc_82703750;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x827035E4;
	sub_8233A258(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-2584
	ctx.r4.s64 = ctx.r11.s64 + -2584;
	// bl 0x8233a258
	ctx.lr = 0x827035F4;
	sub_8233A258(ctx, base);
	// stw r26,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r26.u32);
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r26,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r26,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r26.u32);
	// addi r5,r11,-21936
	ctx.r5.s64 = ctx.r11.s64 + -21936;
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82816e00
	ctx.lr = 0x82703624;
	sub_82816E00(ctx, base);
	// lwz r29,336(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x82703738
	if (!ctx.cr6.gt) goto loc_82703738;
	// lwz r27,272(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82703708
	if (!ctx.cr6.gt) goto loc_82703708;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r28,r11,-25088
	ctx.r28.s64 = ctx.r11.s64 + -25088;
loc_82703650:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82703664
	if (!ctx.cr6.eq) goto loc_82703664;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82703664:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82703678
	if (!ctx.cr6.eq) goto loc_82703678;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82703678:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// bne cr6,0x82703688
	if (!ctx.cr6.eq) goto loc_82703688;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82703688:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bgt cr6,0x82703708
	if (ctx.cr6.gt) goto loc_82703708;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8233a258
	ctx.lr = 0x827036A8;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827036bc
	if (ctx.cr6.eq) goto loc_827036BC;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x827036c0
	goto loc_827036C0;
loc_827036BC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_827036C0:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82419348
	ctx.lr = 0x827036CC;
	sub_82419348(ctx, base);
	// lwz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r4,396(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827036e0
	if (!ctx.cr6.eq) goto loc_827036E0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_827036E0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824193a8
	ctx.lr = 0x827036E8;
	sub_824193A8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82333960
	ctx.lr = 0x827036F0;
	sub_82333960(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82333960
	ctx.lr = 0x827036F8;
	sub_82333960(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82703650
	if (ctx.cr6.lt) goto loc_82703650;
loc_82703708:
	// lwz r5,268(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82703718
	if (!ctx.cr6.eq) goto loc_82703718;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82703718:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82419348
	ctx.lr = 0x82703724;
	sub_82419348(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703730;
	sub_82400B48(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82333960
	ctx.lr = 0x82703738;
	sub_82333960(ctx, base);
loc_82703738:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82400988
	ctx.lr = 0x82703740;
	sub_82400988(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x82703748;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82703750;
	sub_82333960(ctx, base);
loc_82703750:
	// bl 0x8245c960
	ctx.lr = 0x82703754;
	sub_8245C960(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270376C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82703780
	if (ctx.cr0.eq) goto loc_82703780;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r5,-20340(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20340);
	// b 0x827037bc
	goto loc_827037BC;
loc_82703780:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r7,28(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// addi r6,r25,16
	ctx.r6.s64 = ctx.r25.s64 + 16;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x826ecb40
	ctx.lr = 0x827037B4;
	sub_826ECB40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_827037BC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x826e9d88
	ctx.lr = 0x827037CC;
	sub_826E9D88(ctx, base);
	// b 0x82703970
	goto loc_82703970;
loc_827037D0:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// bl 0x82816c30
	ctx.lr = 0x827037E0;
	sub_82816C30(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x827037EC;
	sub_82400B48(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x827037F4;
	sub_82333960(ctx, base);
	// bl 0x8243ae98
	ctx.lr = 0x827037F8;
	sub_8243AE98(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8270383c
	if (!ctx.cr0.eq) goto loc_8270383C;
	// bl 0x823fe0c8
	ctx.lr = 0x8270381C;
	sub_823FE0C8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270396c
	if (ctx.cr0.eq) goto loc_8270396C;
loc_8270383C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17384
	ctx.r4.s64 = ctx.r11.s64 + -17384;
	// bl 0x8233a258
	ctx.lr = 0x8270384C;
	sub_8233A258(ctx, base);
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x82703864
	if (ctx.cr6.lt) goto loc_82703864;
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r5,r11,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82703864:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82816c30
	ctx.lr = 0x82703870;
	sub_82816C30(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703884
	if (!ctx.cr6.eq) goto loc_82703884;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82703884:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824193a8
	ctx.lr = 0x8270388C;
	sub_824193A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x82703894;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827038a8
	if (!ctx.cr6.eq) goto loc_827038A8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_827038A8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-21568
	ctx.r4.s64 = ctx.r10.s64 + -21568;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x828db5e0
	ctx.lr = 0x827038C8;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x827038D4;
	sub_82400B48(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82333960
	ctx.lr = 0x827038DC;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827038E4;
	sub_82333960(ctx, base);
	// b 0x8270396c
	goto loc_8270396C;
loc_827038E8:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r31,-20340(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20340);
	// lwz r10,92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8270390C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703918;
	sub_82400B48(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82333960
	ctx.lr = 0x82703920;
	sub_82333960(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82703924:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419458
	ctx.lr = 0x8270392C;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82703958
	if (ctx.cr0.eq) goto loc_82703958;
	// lwz r11,3648(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82703958
	if (ctx.cr6.eq) goto loc_82703958;
	// lwz r11,2184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2184);
	// lwz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82703958
	if (!ctx.cr6.gt) goto loc_82703958;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r31,-20344(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -20344);
loc_82703958:
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826e9d88
	ctx.lr = 0x8270396C;
	sub_826E9D88(ctx, base);
loc_8270396C:
	// li r20,1
	ctx.r20.s64 = 1;
loc_82703970:
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82333960
	ctx.lr = 0x82703978;
	sub_82333960(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82333960
	ctx.lr = 0x82703980;
	sub_82333960(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82333960
	ctx.lr = 0x82703988;
	sub_82333960(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82333960
	ctx.lr = 0x82703990;
	sub_82333960(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82333960
	ctx.lr = 0x82703998;
	sub_82333960(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82333960
	ctx.lr = 0x827039A0;
	sub_82333960(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82333960
	ctx.lr = 0x827039A8;
	sub_82333960(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x827039B0;
	sub_82333960(ctx, base);
	// b 0x827039dc
	goto loc_827039DC;
loc_827039B4:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// bl 0x82816c30
	ctx.lr = 0x827039C4;
	sub_82816C30(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x827039D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82333960
	ctx.lr = 0x827039D8;
	sub_82333960(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
loc_827039DC:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82333960
	ctx.lr = 0x827039E4;
	sub_82333960(ctx, base);
loc_827039E4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82400988
	ctx.lr = 0x827039EC;
	sub_82400988(ctx, base);
loc_827039EC:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82333960
	ctx.lr = 0x827039F4;
	sub_82333960(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82333960
	ctx.lr = 0x827039FC;
	sub_82333960(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82333960
	ctx.lr = 0x82703A04;
	sub_82333960(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82333960
	ctx.lr = 0x82703A0C;
	sub_82333960(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82333960
	ctx.lr = 0x82703A14;
	sub_82333960(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82333960
	ctx.lr = 0x82703A1C;
	sub_82333960(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82333960
	ctx.lr = 0x82703A24;
	sub_82333960(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82333960
	ctx.lr = 0x82703A2C;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82703A34;
	sub_82333960(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82703A40"))) PPC_WEAK_FUNC(sub_82703A40);
PPC_FUNC_IMPL(__imp__sub_82703A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82703A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r31,3272
	ctx.r4.s64 = ctx.r31.s64 + 3272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82873b58
	ctx.lr = 0x82703A64;
	sub_82873B58(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826e2a58
	ctx.lr = 0x82703A74;
	sub_826E2A58(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82703ba0
	if (ctx.cr6.eq) goto loc_82703BA0;
	// lwz r11,2096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82703ba0
	if (ctx.cr6.eq) goto loc_82703BA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82438190
	ctx.lr = 0x82703A90;
	sub_82438190(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82703aa0
	if (ctx.cr6.eq) goto loc_82703AA0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82703AA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82703b08
	if (ctx.cr6.eq) goto loc_82703B08;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82703b08
	if (!ctx.cr6.gt) goto loc_82703B08;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-3128
	ctx.r30.s64 = ctx.r11.s64 + -3128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x82703AC8;
	sub_8233A258(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,3264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82703AF4;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82703B00;
	sub_8233A258(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82703b78
	goto loc_82703B78;
loc_82703B08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lwz r5,3264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-18844
	ctx.r4.s64 = ctx.r10.s64 + -18844;
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-3128
	ctx.r30.s64 = ctx.r11.s64 + -3128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8233a258
	ctx.lr = 0x82703B3C;
	sub_8233A258(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,3264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82703B68;
	sub_82333960(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233a258
	ctx.lr = 0x82703B74;
	sub_8233A258(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82703B78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,3264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3264);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82703BA0;
	sub_82333960(ctx, base);
loc_82703BA0:
	// lwz r4,3260(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3260);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82703bc4
	if (ctx.cr6.eq) goto loc_82703BC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82703BC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82703BC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82703BD0"))) PPC_WEAK_FUNC(sub_82703BD0);
PPC_FUNC_IMPL(__imp__sub_82703BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82703BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,3252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3252);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82703c00
	if (!ctx.cr6.lt) goto loc_82703C00;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r11.u32);
	// stw r10,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r10.u32);
	// b 0x82703c30
	goto loc_82703C30;
loc_82703C00:
	// addi r3,r31,3452
	ctx.r3.s64 = ctx.r31.s64 + 3452;
	// li r30,5
	ctx.r30.s64 = 5;
loc_82703C08:
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703C14;
	sub_82400B48(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82703c08
	if (!ctx.cr0.eq) goto loc_82703C08;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r11,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r11.u32);
	// stw r10,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r10.u32);
loc_82703C30:
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82703c58
	if (ctx.cr6.lt) goto loc_82703C58;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82703c58
	if (!ctx.cr6.lt) goto loc_82703C58;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,3452
	ctx.r3.s64 = ctx.r11.s64 + 3452;
	// bl 0x82400b48
	ctx.lr = 0x82703C58;
	sub_82400B48(ctx, base);
loc_82703C58:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x82703C60;
	sub_82333960(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82703C68"))) PPC_WEAK_FUNC(sub_82703C68);
PPC_FUNC_IMPL(__imp__sub_82703C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82703C70;
	__savegprlr_18(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r19,r11,7896
	ctx.r19.s64 = ctx.r11.s64 + 7896;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// bl 0x82414568
	ctx.lr = 0x82703C94;
	sub_82414568(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r18,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r18.u32);
	// addi r29,r31,3452
	ctx.r29.s64 = ctx.r31.s64 + 3452;
	// stw r18,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r18.u32);
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r28,r11,-21936
	ctx.r28.s64 = ctx.r11.s64 + -21936;
loc_82703CAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824099b8
	ctx.lr = 0x82703CB8;
	sub_824099B8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82703cac
	if (!ctx.cr0.eq) goto loc_82703CAC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r24,r18
	ctx.r24.u64 = ctx.r18.u64;
	// addi r23,r11,32616
	ctx.r23.s64 = ctx.r11.s64 + 32616;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r22,r11,-2548
	ctx.r22.s64 = ctx.r11.s64 + -2548;
loc_82703CDC:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,3256(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3256);
	// slw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r24.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82703dc0
	if (ctx.cr0.eq) goto loc_82703DC0;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// bge cr6,0x82703dc0
	if (!ctx.cr6.lt) goto loc_82703DC0;
	// addi r4,r31,3596
	ctx.r4.s64 = ctx.r31.s64 + 3596;
	// lwz r29,3644(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3644);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x82703D0C;
	sub_823339B8(ctx, base);
	// stw r30,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r30.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82703ec8
	ctx.lr = 0x82703D24;
	sub_82703EC8(ctx, base);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r27,156(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// beq cr6,0x82703d78
	if (ctx.cr6.eq) goto loc_82703D78;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// bne cr6,0x82703d78
	if (!ctx.cr6.eq) goto loc_82703D78;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82703dac
	if (!ctx.cr6.gt) goto loc_82703DAC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82816c30
	ctx.lr = 0x82703D54;
	sub_82816C30(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703d68
	if (!ctx.cr6.eq) goto loc_82703D68;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82703D68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824193a8
	ctx.lr = 0x82703D70;
	sub_824193A8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82703D78;
	sub_82333960(ctx, base);
loc_82703D78:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82703dac
	if (!ctx.cr6.gt) goto loc_82703DAC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82703D88:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823339b8
	ctx.lr = 0x82703D94;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82703bd0
	ctx.lr = 0x82703DA0;
	sub_82703BD0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bne 0x82703d88
	if (!ctx.cr0.eq) goto loc_82703D88;
loc_82703DAC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82400988
	ctx.lr = 0x82703DB4;
	sub_82400988(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82333960
	ctx.lr = 0x82703DBC;
	sub_82333960(ctx, base);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82703DC0:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r11,r23,32
	ctx.r11.s64 = ctx.r23.s64 + 32;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82703cdc
	if (ctx.cr6.lt) goto loc_82703CDC;
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82703e78
	if (ctx.cr6.lt) goto loc_82703E78;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r31,3464
	ctx.r30.s64 = ctx.r31.s64 + 3464;
	// addi r28,r11,-2476
	ctx.r28.s64 = ctx.r11.s64 + -2476;
loc_82703DF0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x82703DFC;
	sub_82816C30(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82703e10
	if (ctx.cr6.eq) goto loc_82703E10;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82703e14
	goto loc_82703E14;
loc_82703E10:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82703E14:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82419348
	ctx.lr = 0x82703E20;
	sub_82419348(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82703e34
	if (!ctx.cr6.eq) goto loc_82703E34;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82703E34:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82419348
	ctx.lr = 0x82703E40;
	sub_82419348(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703E4C;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82703E54;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82703E5C;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82703E64;
	sub_82333960(ctx, base);
	// lwz r11,3248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3248);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82703df0
	if (!ctx.cr6.gt) goto loc_82703DF0;
loc_82703E78:
	// lwz r11,16(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 16);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne 0x82703e8c
	if (!ctx.cr0.eq) goto loc_82703E8C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82703E8C:
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// ble cr6,0x82703eb8
	if (!ctx.cr6.gt) goto loc_82703EB8;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8243b240
	ctx.lr = 0x82703EA4;
	sub_8243B240(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82400b48
	ctx.lr = 0x82703EB0;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82703EB8;
	sub_82333960(ctx, base);
loc_82703EB8:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82703EC8"))) PPC_WEAK_FUNC(sub_82703EC8);
PPC_FUNC_IMPL(__imp__sub_82703EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82703ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,24
	ctx.r29.s64 = 24;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ble cr6,0x82703fa4
	if (!ctx.cr6.gt) goto loc_82703FA4;
	// cmpwi cr6,r5,18
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 18, ctx.xer);
	// bge cr6,0x82703fa4
	if (!ctx.cr6.lt) goto loc_82703FA4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mulli r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 * 24;
	// addi r11,r11,912
	ctx.r11.s64 = ctx.r11.s64 + 912;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82703F3C;
	sub_823339B8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82703f50
	if (ctx.cr6.eq) goto loc_82703F50;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82703f58
	goto loc_82703F58;
loc_82703F50:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r11,7896
	ctx.r5.s64 = ctx.r11.s64 + 7896;
loc_82703F58:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r6,r11,-21636
	ctx.r6.s64 = ctx.r11.s64 + -21636;
	// addi r4,r10,-16612
	ctx.r4.s64 = ctx.r10.s64 + -16612;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x82703F78;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400b48
	ctx.lr = 0x82703F84;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82703F8C;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82703F94;
	sub_82333960(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82703fa8
	if (!ctx.cr6.eq) goto loc_82703FA8;
loc_82703FA4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82703FA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82703ff4
	if (!ctx.cr6.gt) goto loc_82703FF4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r5,r11,-2476
	ctx.r5.s64 = ctx.r11.s64 + -2476;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// bl 0x82816e00
	ctx.lr = 0x82703FE0;
	sub_82816E00(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824bc0c0
	ctx.lr = 0x82703FEC;
	sub_824BC0C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400988
	ctx.lr = 0x82703FF4;
	sub_82400988(ctx, base);
loc_82703FF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82703FFC;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704008"))) PPC_WEAK_FUNC(sub_82704008);
PPC_FUNC_IMPL(__imp__sub_82704008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82704010;
	__savegprlr_28(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bge cr6,0x827041a4
	if (!ctx.cr6.lt) goto loc_827041A4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mulli r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 * 24;
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823339b8
	ctx.lr = 0x82704070;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270408c
	if (!ctx.cr6.eq) goto loc_8270408C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8270408C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r29,r11,-21636
	ctx.r29.s64 = ctx.r11.s64 + -21636;
	// addi r28,r10,-16612
	ctx.r28.s64 = ctx.r10.s64 + -16612;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x827040B4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x827040C0;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x827040C8;
	sub_82333960(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-2508
	ctx.r4.s64 = ctx.r11.s64 + -2508;
	// bl 0x8233a328
	ctx.lr = 0x827040D8;
	sub_8233A328(ctx, base);
	// lwz r5,256(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828db5e0
	ctx.lr = 0x827040F4;
	sub_828DB5E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82400b48
	ctx.lr = 0x82704100;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82704108;
	sub_82333960(ctx, base);
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82704124
	if (ctx.cr6.eq) goto loc_82704124;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82704124
	if (ctx.cr6.eq) goto loc_82704124;
	// bl 0x82332db8
	ctx.lr = 0x82704124;
	sub_82332DB8(ctx, base);
loc_82704124:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-21936
	ctx.r4.s64 = ctx.r11.s64 + -21936;
	// bl 0x82816c30
	ctx.lr = 0x82704134;
	sub_82816C30(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82704148
	if (!ctx.cr6.eq) goto loc_82704148;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82704148:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82419348
	ctx.lr = 0x82704154;
	sub_82419348(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82704168
	if (ctx.cr6.eq) goto loc_82704168;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8270416c
	goto loc_8270416C;
loc_82704168:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_8270416C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82419348
	ctx.lr = 0x82704178;
	sub_82419348(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82400b48
	ctx.lr = 0x82704184;
	sub_82400B48(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x8270418C;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82704194;
	sub_82333960(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x8270419C;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x827041A4;
	sub_82333960(ctx, base);
loc_827041A4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x827041AC;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827041B8"))) PPC_WEAK_FUNC(sub_827041B8);
PPC_FUNC_IMPL(__imp__sub_827041B8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,1796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82704208
	if (ctx.cr6.eq) goto loc_82704208;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,88
	ctx.r31.s64 = 88;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
loc_827041EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,1796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1796);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x826ee958
	ctx.lr = 0x827041FC;
	sub_826EE958(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,92
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 92, ctx.xer);
	// ble cr6,0x827041ec
	if (!ctx.cr6.gt) goto loc_827041EC;
loc_82704208:
	// lwz r11,3376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8270421c
	if (ctx.cr6.eq) goto loc_8270421C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8270422c
	if (!ctx.cr6.eq) goto loc_8270422C;
loc_8270421C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82702b58
	ctx.lr = 0x82704224;
	sub_82702B58(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,3376(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3376, ctx.r11.u32);
loc_8270422C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x82704234;
	sub_82833108(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8270425c
	if (ctx.cr0.eq) goto loc_8270425C;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x82439d58
	ctx.lr = 0x82704258;
	sub_82439D58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8270425C:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82704268;
	sub_82833A30(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82704278;
	sub_8233A258(ctx, base);
	// lis r4,6406
	ctx.r4.s64 = 419823616;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,48036
	ctx.r4.u64 = ctx.r4.u64 | 48036;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c3740
	ctx.lr = 0x8270428C;
	sub_829C3740(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_827042A8"))) PPC_WEAK_FUNC(sub_827042A8);
PPC_FUNC_IMPL(__imp__sub_827042A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,5640(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5640);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2304, ctx.r10.u32);
	// stw r9,3232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3232, ctx.r9.u32);
	// stw r10,5640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5640, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827042D0"))) PPC_WEAK_FUNC(sub_827042D0);
PPC_FUNC_IMPL(__imp__sub_827042D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// stw r11,2296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2296, ctx.r11.u32);
	// stw r11,2292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2292, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,2308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2308, ctx.r10.u32);
	// addi r4,r8,26556
	ctx.r4.s64 = ctx.r8.s64 + 26556;
	// lwz r11,1036(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1036);
	// stw r10,2304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2304, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82704310"))) PPC_WEAK_FUNC(sub_82704310);
PPC_FUNC_IMPL(__imp__sub_82704310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82704318"))) PPC_WEAK_FUNC(sub_82704318);
PPC_FUNC_IMPL(__imp__sub_82704318) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82704350
	if (ctx.cr6.eq) goto loc_82704350;
	// bl 0x82704610
	ctx.lr = 0x82704340;
	sub_82704610(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704350
	if (!ctx.cr6.eq) goto loc_82704350;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270435c
	goto loc_8270435C;
loc_82704350:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8270435C;
	sub_82333C70(ctx, base);
loc_8270435C:
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

__attribute__((alias("__imp__sub_82704378"))) PPC_WEAK_FUNC(sub_82704378);
PPC_FUNC_IMPL(__imp__sub_82704378) {
	PPC_FUNC_PROLOGUE();
	// b 0x82704610
	sub_82704610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704380"))) PPC_WEAK_FUNC(sub_82704380);
PPC_FUNC_IMPL(__imp__sub_82704380) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8270439C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82704404
	if (ctx.cr0.eq) goto loc_82704404;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,14296
	ctx.r10.s64 = ctx.r10.s64 + 14296;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,-2456
	ctx.r9.s64 = ctx.r9.s64 + -2456;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x82704408
	goto loc_82704408;
loc_82704404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82704408:
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

__attribute__((alias("__imp__sub_82704420"))) PPC_WEAK_FUNC(sub_82704420);
PPC_FUNC_IMPL(__imp__sub_82704420) {
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
	// bl 0x82704610
	ctx.lr = 0x82704440;
	sub_82704610(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82704454
	if (ctx.cr6.eq) goto loc_82704454;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82704454;
	sub_82333B08(ctx, base);
loc_82704454:
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

__attribute__((alias("__imp__sub_82704470"))) PPC_WEAK_FUNC(sub_82704470);
PPC_FUNC_IMPL(__imp__sub_82704470) {
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
	// bl 0x823f9c18
	ctx.lr = 0x82704490;
	sub_823F9C18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827044A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827044b4
	if (!ctx.cr0.eq) goto loc_827044B4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827044B4:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827044C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_827044E0"))) PPC_WEAK_FUNC(sub_827044E0);
PPC_FUNC_IMPL(__imp__sub_827044E0) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x827044F8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270454c
	if (ctx.cr0.eq) goto loc_8270454C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82704508;
	sub_82833180(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,-2456
	ctx.r9.s64 = ctx.r9.s64 + -2456;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r8,r8,47806
	ctx.r8.u64 = ctx.r8.u64 | 47806;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// std r7,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r7.u64);
	// b 0x82704550
	goto loc_82704550;
loc_8270454C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82704550:
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

__attribute__((alias("__imp__sub_82704568"))) PPC_WEAK_FUNC(sub_82704568);
PPC_FUNC_IMPL(__imp__sub_82704568) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r11,23608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827045a8
	if (!ctx.cr0.eq) goto loc_827045A8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,23608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23608, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x827045A0;
	sub_82816528(ctx, base);
	// stw r3,23604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23604, ctx.r3.u32);
	// b 0x827045ac
	goto loc_827045AC;
loc_827045A8:
	// lwz r3,23604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23604);
loc_827045AC:
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

__attribute__((alias("__imp__sub_827045C0"))) PPC_WEAK_FUNC(sub_827045C0);
PPC_FUNC_IMPL(__imp__sub_827045C0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82704610
	ctx.lr = 0x827045E0;
	sub_82704610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827045F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82704610"))) PPC_WEAK_FUNC(sub_82704610);
PPC_FUNC_IMPL(__imp__sub_82704610) {
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
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,23612
	ctx.r31.s64 = ctx.r11.s64 + 23612;
	// lwz r11,23616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82704658
	if (!ctx.cr0.eq) goto loc_82704658;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-2376
	ctx.r9.s64 = ctx.r9.s64 + -2376;
	// stw r11,23616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23616, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,29576
	ctx.r3.s64 = ctx.r11.s64 + 29576;
	// bl 0x82a4c758
	ctx.lr = 0x82704658;
	sub_82A4C758(ctx, base);
loc_82704658:
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

__attribute__((alias("__imp__sub_82704670"))) PPC_WEAK_FUNC(sub_82704670);
PPC_FUNC_IMPL(__imp__sub_82704670) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82704678
	sub_82704678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704678"))) PPC_WEAK_FUNC(sub_82704678);
PPC_FUNC_IMPL(__imp__sub_82704678) {
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
	// bl 0x82700780
	ctx.lr = 0x82704698;
	sub_82700780(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827046a8
	if (ctx.cr0.eq) goto loc_827046A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827046A8;
	sub_82332DB8(ctx, base);
loc_827046A8:
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

__attribute__((alias("__imp__sub_827046C8"))) PPC_WEAK_FUNC(sub_827046C8);
PPC_FUNC_IMPL(__imp__sub_827046C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704678
	sub_82704678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827046D0"))) PPC_WEAK_FUNC(sub_827046D0);
PPC_FUNC_IMPL(__imp__sub_827046D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827046d8
	sub_827046D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827046D8"))) PPC_WEAK_FUNC(sub_827046D8);
PPC_FUNC_IMPL(__imp__sub_827046D8) {
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
	// bl 0x823f9c18
	ctx.lr = 0x827046F8;
	sub_823F9C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270470c
	if (ctx.cr6.eq) goto loc_8270470C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823f7e50
	ctx.lr = 0x8270470C;
	sub_823F7E50(ctx, base);
loc_8270470C:
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

__attribute__((alias("__imp__sub_82704728"))) PPC_WEAK_FUNC(sub_82704728);
PPC_FUNC_IMPL(__imp__sub_82704728) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82704760
	if (ctx.cr6.eq) goto loc_82704760;
	// bl 0x823f9c18
	ctx.lr = 0x82704750;
	sub_823F9C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704760
	if (!ctx.cr6.eq) goto loc_82704760;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270476c
	goto loc_8270476C;
loc_82704760:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f8f28
	ctx.lr = 0x8270476C;
	sub_823F8F28(ctx, base);
loc_8270476C:
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

__attribute__((alias("__imp__sub_82704788"))) PPC_WEAK_FUNC(sub_82704788);
PPC_FUNC_IMPL(__imp__sub_82704788) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f9c18
	sub_823F9C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704790"))) PPC_WEAK_FUNC(sub_82704790);
PPC_FUNC_IMPL(__imp__sub_82704790) {
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
	// li r3,3712
	ctx.r3.s64 = 3712;
	// bl 0x82833108
	ctx.lr = 0x827047AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827047c0
	if (ctx.cr0.eq) goto loc_827047C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827047d8
	ctx.lr = 0x827047BC;
	sub_827047D8(ctx, base);
	// b 0x827047c4
	goto loc_827047C4;
loc_827047C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827047C4:
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

__attribute__((alias("__imp__sub_827047D8"))) PPC_WEAK_FUNC(sub_827047D8);
PPC_FUNC_IMPL(__imp__sub_827047D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827047E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823f8fd8
	ctx.lr = 0x827047F0;
	sub_823F8FD8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-2352
	ctx.r11.s64 = ctx.r11.s64 + -2352;
	// addi r10,r10,-988
	ctx.r10.s64 = ctx.r10.s64 + -988;
	// addi r9,r9,-936
	ctx.r9.s64 = ctx.r9.s64 + -936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,3272
	ctx.r4.s64 = ctx.r30.s64 + 3272;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,3272
	ctx.r3.s64 = ctx.r31.s64 + 3272;
	// lwz r11,3232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// stw r11,3232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3232, ctx.r11.u32);
	// lwz r11,3236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// stw r11,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r11.u32);
	// lwz r11,3240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3240);
	// stw r11,3240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3240, ctx.r11.u32);
	// lwz r11,3244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3244);
	// stw r11,3244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3244, ctx.r11.u32);
	// lwz r11,3248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3248);
	// stw r11,3248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3248, ctx.r11.u32);
	// lwz r11,3252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3252);
	// stw r11,3252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3252, ctx.r11.u32);
	// lwz r11,3256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	// stw r11,3256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3256, ctx.r11.u32);
	// lwz r11,3260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3260);
	// stw r11,3260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3260, ctx.r11.u32);
	// lwz r11,3264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3264);
	// stw r11,3264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3264, ctx.r11.u32);
	// lwz r11,3268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3268);
	// stw r11,3268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3268, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82704870;
	sub_82873B58(ctx, base);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r31,3296
	ctx.r11.s64 = ctx.r31.s64 + 3296;
	// addi r10,r10,10804
	ctx.r10.s64 = ctx.r10.s64 + 10804;
	// addi r4,r30,3300
	ctx.r4.s64 = ctx.r30.s64 + 3300;
	// stw r10,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r10.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82873b58
	ctx.lr = 0x8270488C;
	sub_82873B58(ctx, base);
	// lfs f0,3324(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3324(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3324, temp.u32);
	// addi r4,r30,3328
	ctx.r4.s64 = ctx.r30.s64 + 3328;
	// addi r3,r31,3328
	ctx.r3.s64 = ctx.r31.s64 + 3328;
	// bl 0x823339b8
	ctx.lr = 0x827048A0;
	sub_823339B8(ctx, base);
	// addi r4,r30,3352
	ctx.r4.s64 = ctx.r30.s64 + 3352;
	// addi r3,r31,3352
	ctx.r3.s64 = ctx.r31.s64 + 3352;
	// bl 0x823339b8
	ctx.lr = 0x827048AC;
	sub_823339B8(ctx, base);
	// addi r10,r31,3420
	ctx.r10.s64 = ctx.r31.s64 + 3420;
	// addi r11,r31,3388
	ctx.r11.s64 = ctx.r31.s64 + 3388;
	// addi r11,r31,3404
	ctx.r11.s64 = ctx.r31.s64 + 3404;
	// addi r11,r30,3452
	ctx.r11.s64 = ctx.r30.s64 + 3452;
	// addi r9,r31,3436
	ctx.r9.s64 = ctx.r31.s64 + 3436;
	// addi r8,r31,3452
	ctx.r8.s64 = ctx.r31.s64 + 3452;
	// lwz r10,3376(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3376);
	// stw r10,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r10.u32);
	// lwz r10,3380(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3380);
	// stw r10,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r10.u32);
	// lwz r10,3384(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3384);
	// stw r10,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r10.u32);
	// lwz r10,3388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3388);
	// stw r10,3388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3388, ctx.r10.u32);
	// lwz r10,3392(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3392);
	// stw r10,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r10.u32);
	// lwz r10,3396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3396);
	// stw r10,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r10.u32);
	// lwz r10,3400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3400);
	// stw r10,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r10.u32);
	// lwz r10,3404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3404);
	// stw r10,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r10.u32);
	// lwz r10,3408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3408);
	// stw r10,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r10.u32);
	// lwz r10,3412(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3412);
	// stw r10,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r10.u32);
	// lwz r10,3416(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3416);
	// stw r10,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r10.u32);
	// lwz r10,3420(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3420);
	// stw r10,3420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3420, ctx.r10.u32);
	// lwz r10,3424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// stw r10,3424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3424, ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// subf r27,r11,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r11,3428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3428);
	// stw r11,3428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3428, ctx.r11.u32);
	// li r28,5
	ctx.r28.s64 = 5;
	// lwz r11,3432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3432);
	// stw r11,3432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3432, ctx.r11.u32);
	// lwz r11,3436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3436);
	// stw r11,3436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3436, ctx.r11.u32);
	// lwz r11,3440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3440);
	// stw r11,3440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3440, ctx.r11.u32);
	// lwz r11,3444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3444);
	// stw r11,3444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3444, ctx.r11.u32);
	// lwz r11,3448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3448);
	// stw r11,3448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3448, ctx.r11.u32);
loc_82704968:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r27,r29
	ctx.r3.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bl 0x823339b8
	ctx.lr = 0x82704974;
	sub_823339B8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// bge 0x82704968
	if (!ctx.cr0.lt) goto loc_82704968;
	// addi r4,r30,3596
	ctx.r4.s64 = ctx.r30.s64 + 3596;
	// addi r3,r31,3596
	ctx.r3.s64 = ctx.r31.s64 + 3596;
	// bl 0x823339b8
	ctx.lr = 0x8270498C;
	sub_823339B8(ctx, base);
	// addi r4,r30,3620
	ctx.r4.s64 = ctx.r30.s64 + 3620;
	// addi r3,r31,3620
	ctx.r3.s64 = ctx.r31.s64 + 3620;
	// bl 0x823339b8
	ctx.lr = 0x82704998;
	sub_823339B8(ctx, base);
	// lwz r11,3644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3644);
	// addi r4,r30,3652
	ctx.r4.s64 = ctx.r30.s64 + 3652;
	// addi r3,r31,3652
	ctx.r3.s64 = ctx.r31.s64 + 3652;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// lwz r11,3648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3648);
	// stw r11,3648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3648, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x827049B4;
	sub_82873B58(ctx, base);
	// addi r4,r30,3676
	ctx.r4.s64 = ctx.r30.s64 + 3676;
	// addi r3,r31,3676
	ctx.r3.s64 = ctx.r31.s64 + 3676;
	// bl 0x82873b58
	ctx.lr = 0x827049C0;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827049D0"))) PPC_WEAK_FUNC(sub_827049D0);
PPC_FUNC_IMPL(__imp__sub_827049D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,10580
	ctx.r3.s64 = ctx.r11.s64 + 10580;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827049E0"))) PPC_WEAK_FUNC(sub_827049E0);
PPC_FUNC_IMPL(__imp__sub_827049E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827049F0"))) PPC_WEAK_FUNC(sub_827049F0);
PPC_FUNC_IMPL(__imp__sub_827049F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82704a28
	if (ctx.cr6.eq) goto loc_82704A28;
	// bl 0x823c7c60
	ctx.lr = 0x82704A18;
	sub_823C7C60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704a28
	if (!ctx.cr6.eq) goto loc_82704A28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82704a34
	goto loc_82704A34;
loc_82704A28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824040a0
	ctx.lr = 0x82704A34;
	sub_824040A0(ctx, base);
loc_82704A34:
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

__attribute__((alias("__imp__sub_82704A50"))) PPC_WEAK_FUNC(sub_82704A50);
PPC_FUNC_IMPL(__imp__sub_82704A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c7c60
	sub_823C7C60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704A58"))) PPC_WEAK_FUNC(sub_82704A58);
PPC_FUNC_IMPL(__imp__sub_82704A58) {
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
	// li r3,6144
	ctx.r3.s64 = 6144;
	// bl 0x82833108
	ctx.lr = 0x82704A74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82704a88
	if (ctx.cr0.eq) goto loc_82704A88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82704af0
	ctx.lr = 0x82704A84;
	sub_82704AF0(ctx, base);
	// b 0x82704a8c
	goto loc_82704A8C;
loc_82704A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82704A8C:
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

__attribute__((alias("__imp__sub_82704AA0"))) PPC_WEAK_FUNC(sub_82704AA0);
PPC_FUNC_IMPL(__imp__sub_82704AA0) {
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
	// bl 0x823c7c60
	ctx.lr = 0x82704AC0;
	sub_823C7C60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82704ad4
	if (ctx.cr6.eq) goto loc_82704AD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x82704AD4;
	sub_82404040(ctx, base);
loc_82704AD4:
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

__attribute__((alias("__imp__sub_82704AF0"))) PPC_WEAK_FUNC(sub_82704AF0);
PPC_FUNC_IMPL(__imp__sub_82704AF0) {
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
	// bl 0x82400f98
	ctx.lr = 0x82704B10;
	sub_82400F98(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// addi r10,r10,6868
	ctx.r10.s64 = ctx.r10.s64 + 6868;
	// addi r9,r9,6920
	ctx.r9.s64 = ctx.r9.s64 + 6920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r4,r30,6096
	ctx.r4.s64 = ctx.r30.s64 + 6096;
	// bl 0x82873b58
	ctx.lr = 0x82704B40;
	sub_82873B58(ctx, base);
	// addi r3,r31,6120
	ctx.r3.s64 = ctx.r31.s64 + 6120;
	// addi r4,r30,6120
	ctx.r4.s64 = ctx.r30.s64 + 6120;
	// bl 0x82873b58
	ctx.lr = 0x82704B4C;
	sub_82873B58(ctx, base);
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

__attribute__((alias("__imp__sub_82704B68"))) PPC_WEAK_FUNC(sub_82704B68);
PPC_FUNC_IMPL(__imp__sub_82704B68) {
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
	// bl 0x827056d8
	ctx.lr = 0x82704B88;
	sub_827056D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82704b98
	if (ctx.cr0.eq) goto loc_82704B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82704B98;
	sub_82332DB8(ctx, base);
loc_82704B98:
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

__attribute__((alias("__imp__sub_82704BB8"))) PPC_WEAK_FUNC(sub_82704BB8);
PPC_FUNC_IMPL(__imp__sub_82704BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4812
	ctx.r3.s64 = ctx.r11.s64 + -4812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82704BC8"))) PPC_WEAK_FUNC(sub_82704BC8);
PPC_FUNC_IMPL(__imp__sub_82704BC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82704c00
	if (ctx.cr6.eq) goto loc_82704C00;
	// bl 0x823c7da8
	ctx.lr = 0x82704BF0;
	sub_823C7DA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704c00
	if (!ctx.cr6.eq) goto loc_82704C00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82704c0c
	goto loc_82704C0C;
loc_82704C00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827049f0
	ctx.lr = 0x82704C0C;
	sub_827049F0(ctx, base);
loc_82704C0C:
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

__attribute__((alias("__imp__sub_82704C28"))) PPC_WEAK_FUNC(sub_82704C28);
PPC_FUNC_IMPL(__imp__sub_82704C28) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c7da8
	sub_823C7DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704C30"))) PPC_WEAK_FUNC(sub_82704C30);
PPC_FUNC_IMPL(__imp__sub_82704C30) {
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
	// li r3,6256
	ctx.r3.s64 = 6256;
	// bl 0x82833108
	ctx.lr = 0x82704C4C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82704c60
	if (ctx.cr0.eq) goto loc_82704C60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82704cd8
	ctx.lr = 0x82704C5C;
	sub_82704CD8(ctx, base);
	// b 0x82704c64
	goto loc_82704C64;
loc_82704C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82704C64:
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

__attribute__((alias("__imp__sub_82704C78"))) PPC_WEAK_FUNC(sub_82704C78);
PPC_FUNC_IMPL(__imp__sub_82704C78) {
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
	// bl 0x823c7da8
	ctx.lr = 0x82704C98;
	sub_823C7DA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704ca8
	if (!ctx.cr6.eq) goto loc_82704CA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82704cc0
	goto loc_82704CC0;
loc_82704CA8:
	// bl 0x823c7c60
	ctx.lr = 0x82704CAC;
	sub_823C7C60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82704cc0
	if (ctx.cr6.eq) goto loc_82704CC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x82704CC0;
	sub_82404040(ctx, base);
loc_82704CC0:
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

__attribute__((alias("__imp__sub_82704CD8"))) PPC_WEAK_FUNC(sub_82704CD8);
PPC_FUNC_IMPL(__imp__sub_82704CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82704CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82704af0
	ctx.lr = 0x82704CF0;
	sub_82704AF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// addi r10,r10,2004
	ctx.r10.s64 = ctx.r10.s64 + 2004;
	// addi r9,r9,2056
	ctx.r9.s64 = ctx.r9.s64 + 2056;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,6144
	ctx.r4.s64 = ctx.r30.s64 + 6144;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,6144
	ctx.r3.s64 = ctx.r31.s64 + 6144;
	// bl 0x82873b58
	ctx.lr = 0x82704D20;
	sub_82873B58(ctx, base);
	// lwz r9,6168(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6168);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,6196
	ctx.r29.s64 = ctx.r31.s64 + 6196;
	// addi r28,r30,6196
	ctx.r28.s64 = ctx.r30.s64 + 6196;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r9.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// lwz r9,6172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6172);
	// stw r9,6172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6172, ctx.r9.u32);
	// lwz r9,6176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6176);
	// stw r9,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r9.u32);
	// lwz r9,6180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6180);
	// stw r9,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r9.u32);
	// lwz r9,6184(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6184);
	// stw r9,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r9.u32);
	// lwz r9,6188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6188);
	// stw r9,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r9.u32);
	// lwz r9,6192(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6192);
	// stw r9,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r9.u32);
	// stw r10,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r10.u32);
	// stw r11,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r11.u32);
	// stw r11,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r11.u32);
	// stw r11,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r11.u32);
	// stw r11,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r11.u32);
	// stw r11,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r11.u32);
	// beq cr6,0x82704dd0
	if (ctx.cr6.eq) goto loc_82704DD0;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82704dd0
	if (!ctx.cr6.gt) goto loc_82704DD0;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82704db4
	if (ctx.cr0.eq) goto loc_82704DB4;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82704DB4;
	sub_82332C38(ctx, base);
loc_82704DB4:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x82704DC8;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_82704DD0:
	// addi r3,r31,6220
	ctx.r3.s64 = ctx.r31.s64 + 6220;
	// addi r4,r30,6220
	ctx.r4.s64 = ctx.r30.s64 + 6220;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x82704DE0;
	sub_82A4EA80(ctx, base);
	// lwz r11,6244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6244);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r11.u32);
	// lwz r11,6248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6248);
	// stw r11,6248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6248, ctx.r11.u32);
	// lfs f0,6252(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704E08"))) PPC_WEAK_FUNC(sub_82704E08);
PPC_FUNC_IMPL(__imp__sub_82704E08) {
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
	// bl 0x82705e38
	ctx.lr = 0x82704E28;
	sub_82705E38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82704e38
	if (ctx.cr0.eq) goto loc_82704E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82704E38;
	sub_82332DB8(ctx, base);
loc_82704E38:
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

__attribute__((alias("__imp__sub_82704E58"))) PPC_WEAK_FUNC(sub_82704E58);
PPC_FUNC_IMPL(__imp__sub_82704E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-4788
	ctx.r3.s64 = ctx.r11.s64 + -4788;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82704E68"))) PPC_WEAK_FUNC(sub_82704E68);
PPC_FUNC_IMPL(__imp__sub_82704E68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82704ea0
	if (ctx.cr6.eq) goto loc_82704EA0;
	// bl 0x823c7ef0
	ctx.lr = 0x82704E90;
	sub_823C7EF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704ea0
	if (!ctx.cr6.eq) goto loc_82704EA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82704eac
	goto loc_82704EAC;
loc_82704EA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827049f0
	ctx.lr = 0x82704EAC;
	sub_827049F0(ctx, base);
loc_82704EAC:
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

__attribute__((alias("__imp__sub_82704EC8"))) PPC_WEAK_FUNC(sub_82704EC8);
PPC_FUNC_IMPL(__imp__sub_82704EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c7ef0
	sub_823C7EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82704ED0"))) PPC_WEAK_FUNC(sub_82704ED0);
PPC_FUNC_IMPL(__imp__sub_82704ED0) {
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
	// li r3,6192
	ctx.r3.s64 = 6192;
	// bl 0x82833108
	ctx.lr = 0x82704EEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82704f00
	if (ctx.cr0.eq) goto loc_82704F00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82704f78
	ctx.lr = 0x82704EFC;
	sub_82704F78(ctx, base);
	// b 0x82704f04
	goto loc_82704F04;
loc_82704F00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82704F04:
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

__attribute__((alias("__imp__sub_82704F18"))) PPC_WEAK_FUNC(sub_82704F18);
PPC_FUNC_IMPL(__imp__sub_82704F18) {
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
	// bl 0x823c7ef0
	ctx.lr = 0x82704F38;
	sub_823C7EF0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82704f48
	if (!ctx.cr6.eq) goto loc_82704F48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82704f60
	goto loc_82704F60;
loc_82704F48:
	// bl 0x823c7c60
	ctx.lr = 0x82704F4C;
	sub_823C7C60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82704f60
	if (ctx.cr6.eq) goto loc_82704F60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82404040
	ctx.lr = 0x82704F60;
	sub_82404040(ctx, base);
loc_82704F60:
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

__attribute__((alias("__imp__sub_82704F78"))) PPC_WEAK_FUNC(sub_82704F78);
PPC_FUNC_IMPL(__imp__sub_82704F78) {
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
	// bl 0x82704af0
	ctx.lr = 0x82704F98;
	sub_82704AF0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,2080
	ctx.r11.s64 = ctx.r11.s64 + 2080;
	// addi r10,r10,4436
	ctx.r10.s64 = ctx.r10.s64 + 4436;
	// addi r9,r9,4488
	ctx.r9.s64 = ctx.r9.s64 + 4488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6144);
	// stw r11,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// lwz r11,6148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6148);
	// stw r11,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r11.u32);
	// lwz r11,6152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6152);
	// stw r11,6152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6152, ctx.r11.u32);
	// lwz r11,6156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6156);
	// stw r11,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r11.u32);
	// lwz r11,6160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6160);
	// stw r11,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r11.u32);
	// lwz r11,6164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6164);
	// stw r11,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r11.u32);
	// lwz r11,6168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6168);
	// stw r11,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r11.u32);
	// lwz r11,6172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6172);
	// stw r11,6172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6172, ctx.r11.u32);
	// ld r11,6176(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6176);
	// std r11,6176(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6176, ctx.r11.u64);
	// lwz r11,6184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6184);
	// stw r11,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r11.u32);
	// lwz r11,6188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6188);
	// stw r11,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82705030"))) PPC_WEAK_FUNC(sub_82705030);
PPC_FUNC_IMPL(__imp__sub_82705030) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,2080
	ctx.r11.s64 = ctx.r11.s64 + 2080;
	// addi r10,r10,4436
	ctx.r10.s64 = ctx.r10.s64 + 4436;
	// addi r9,r9,4488
	ctx.r9.s64 = ctx.r9.s64 + 4488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x827056d8
	ctx.lr = 0x82705074;
	sub_827056D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82705084
	if (ctx.cr0.eq) goto loc_82705084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82705084;
	sub_82332DB8(ctx, base);
loc_82705084:
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

__attribute__((alias("__imp__sub_827050A0"))) PPC_WEAK_FUNC(sub_827050A0);
PPC_FUNC_IMPL(__imp__sub_827050A0) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20336
	ctx.r11.s64 = ctx.r11.s64 + -20336;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8270510c
	if (!ctx.cr6.gt) goto loc_8270510C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827050DC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827050fc
	if (ctx.cr6.eq) goto loc_827050FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827050dc
	if (ctx.cr6.lt) goto loc_827050DC;
	// b 0x8270510c
	goto loc_8270510C;
loc_827050FC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8270510C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82705134
	if (ctx.cr6.eq) goto loc_82705134;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8270512C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82705138
	goto loc_82705138;
loc_82705134:
	// bl 0x824daf88
	ctx.lr = 0x82705138;
	sub_824DAF88(ctx, base);
loc_82705138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82705148"))) PPC_WEAK_FUNC(sub_82705148);
PPC_FUNC_IMPL(__imp__sub_82705148) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20336
	ctx.r11.s64 = ctx.r11.s64 + -20336;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827051a8
	if (!ctx.cr6.gt) goto loc_827051A8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82705174:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82705194
	if (ctx.cr6.eq) goto loc_82705194;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82705174
	if (ctx.cr6.lt) goto loc_82705174;
	// b 0x827051a8
	goto loc_827051A8;
loc_82705194:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827051b0
	if (!ctx.cr6.eq) goto loc_827051B0;
loc_827051A8:
	// bl 0x824db030
	ctx.lr = 0x827051AC;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_827051B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827051C8"))) PPC_WEAK_FUNC(sub_827051C8);
PPC_FUNC_IMPL(__imp__sub_827051C8) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20336
	ctx.r11.s64 = ctx.r11.s64 + -20336;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82705248
	if (!ctx.cr6.gt) goto loc_82705248;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82705204:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82705224
	if (ctx.cr6.eq) goto loc_82705224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82705204
	if (ctx.cr6.lt) goto loc_82705204;
	// b 0x82705248
	goto loc_82705248;
loc_82705224:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82705254
	if (!ctx.cr0.eq) goto loc_82705254;
loc_82705248:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x82705254;
	sub_824DB0B0(ctx, base);
loc_82705254:
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

__attribute__((alias("__imp__sub_82705270"))) PPC_WEAK_FUNC(sub_82705270);
PPC_FUNC_IMPL(__imp__sub_82705270) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20312
	ctx.r11.s64 = ctx.r11.s64 + -20312;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827052dc
	if (!ctx.cr6.gt) goto loc_827052DC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827052AC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x827052cc
	if (ctx.cr6.eq) goto loc_827052CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827052ac
	if (ctx.cr6.lt) goto loc_827052AC;
	// b 0x827052dc
	goto loc_827052DC;
loc_827052CC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_827052DC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82705304
	if (ctx.cr6.eq) goto loc_82705304;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827052FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82705308
	goto loc_82705308;
loc_82705304:
	// bl 0x827050a0
	ctx.lr = 0x82705308;
	sub_827050A0(ctx, base);
loc_82705308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82705318"))) PPC_WEAK_FUNC(sub_82705318);
PPC_FUNC_IMPL(__imp__sub_82705318) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20312
	ctx.r11.s64 = ctx.r11.s64 + -20312;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82705378
	if (!ctx.cr6.gt) goto loc_82705378;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82705344:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82705364
	if (ctx.cr6.eq) goto loc_82705364;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82705344
	if (ctx.cr6.lt) goto loc_82705344;
	// b 0x82705378
	goto loc_82705378;
loc_82705364:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82705380
	if (!ctx.cr6.eq) goto loc_82705380;
loc_82705378:
	// bl 0x82705148
	ctx.lr = 0x8270537C;
	sub_82705148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82705380:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82705398"))) PPC_WEAK_FUNC(sub_82705398);
PPC_FUNC_IMPL(__imp__sub_82705398) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20312
	ctx.r11.s64 = ctx.r11.s64 + -20312;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82705418
	if (!ctx.cr6.gt) goto loc_82705418;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827053D4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827053f4
	if (ctx.cr6.eq) goto loc_827053F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827053d4
	if (ctx.cr6.lt) goto loc_827053D4;
	// b 0x82705418
	goto loc_82705418;
loc_827053F4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82705424
	if (!ctx.cr0.eq) goto loc_82705424;
loc_82705418:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827051c8
	ctx.lr = 0x82705424;
	sub_827051C8(ctx, base);
loc_82705424:
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

__attribute__((alias("__imp__sub_82705440"))) PPC_WEAK_FUNC(sub_82705440);
PPC_FUNC_IMPL(__imp__sub_82705440) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827054ac
	if (!ctx.cr6.gt) goto loc_827054AC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8270547C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8270549c
	if (ctx.cr6.eq) goto loc_8270549C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8270547c
	if (ctx.cr6.lt) goto loc_8270547C;
	// b 0x827054ac
	goto loc_827054AC;
loc_8270549C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_827054AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827054d4
	if (ctx.cr6.eq) goto loc_827054D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827054CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827054d8
	goto loc_827054D8;
loc_827054D4:
	// bl 0x827050a0
	ctx.lr = 0x827054D8;
	sub_827050A0(ctx, base);
loc_827054D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827054E8"))) PPC_WEAK_FUNC(sub_827054E8);
PPC_FUNC_IMPL(__imp__sub_827054E8) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82705548
	if (!ctx.cr6.gt) goto loc_82705548;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82705514:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82705534
	if (ctx.cr6.eq) goto loc_82705534;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82705514
	if (ctx.cr6.lt) goto loc_82705514;
	// b 0x82705548
	goto loc_82705548;
loc_82705534:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82705550
	if (!ctx.cr6.eq) goto loc_82705550;
loc_82705548:
	// bl 0x82705148
	ctx.lr = 0x8270554C;
	sub_82705148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82705550:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82705568"))) PPC_WEAK_FUNC(sub_82705568);
PPC_FUNC_IMPL(__imp__sub_82705568) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20288
	ctx.r11.s64 = ctx.r11.s64 + -20288;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827055e8
	if (!ctx.cr6.gt) goto loc_827055E8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_827055A4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x827055c4
	if (ctx.cr6.eq) goto loc_827055C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827055a4
	if (ctx.cr6.lt) goto loc_827055A4;
	// b 0x827055e8
	goto loc_827055E8;
loc_827055C4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827055E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x827055f4
	if (!ctx.cr0.eq) goto loc_827055F4;
loc_827055E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827051c8
	ctx.lr = 0x827055F4;
	sub_827051C8(ctx, base);
loc_827055F4:
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

__attribute__((alias("__imp__sub_82705610"))) PPC_WEAK_FUNC(sub_82705610);
PPC_FUNC_IMPL(__imp__sub_82705610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82705624
	if (!ctx.cr6.eq) goto loc_82705624;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6192, ctx.r11.u32);
loc_82705624:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82705638"))) PPC_WEAK_FUNC(sub_82705638);
PPC_FUNC_IMPL(__imp__sub_82705638) {
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
	// bl 0x824db158
	ctx.lr = 0x82705650;
	sub_824DB158(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// addi r10,r10,6868
	ctx.r10.s64 = ctx.r10.s64 + 6868;
	// addi r9,r9,6920
	ctx.r9.s64 = ctx.r9.s64 + 6920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,6104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6104, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,6100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6100, ctx.r10.u32);
	// stw r11,6108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6112, ctx.r11.u32);
	// stw r11,6116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6116, ctx.r11.u32);
	// stw r11,6096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6096, ctx.r11.u32);
	// stw r10,6124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6124, ctx.r10.u32);
	// stw r11,6128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6128, ctx.r11.u32);
	// stw r11,6132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6132, ctx.r11.u32);
	// stw r11,6136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6136, ctx.r11.u32);
	// stw r11,6140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6140, ctx.r11.u32);
	// stw r11,6120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6120, ctx.r11.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r8,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r8.u32);
	// stw r11,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827056D8"))) PPC_WEAK_FUNC(sub_827056D8);
PPC_FUNC_IMPL(__imp__sub_827056D8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,4512
	ctx.r11.s64 = ctx.r11.s64 + 4512;
	// addi r10,r10,6868
	ctx.r10.s64 = ctx.r10.s64 + 6868;
	// addi r9,r9,6920
	ctx.r9.s64 = ctx.r9.s64 + 6920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r3,92
	ctx.r3.s64 = 92;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82833108
	ctx.lr = 0x82705718;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82705748
	if (ctx.cr0.eq) goto loc_82705748;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r7,r10,15834
	ctx.r7.s64 = ctx.r10.s64 + 15834;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r5,2236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// bl 0x82647558
	ctx.lr = 0x82705740;
	sub_82647558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8270574c
	goto loc_8270574C;
loc_82705748:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8270574C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8270575C;
	sub_82833A30(ctx, base);
	// addi r3,r31,6120
	ctx.r3.s64 = ctx.r31.s64 + 6120;
	// bl 0x8239d768
	ctx.lr = 0x82705764;
	sub_8239D768(ctx, base);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// bl 0x8239d768
	ctx.lr = 0x8270576C;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dbe08
	ctx.lr = 0x82705774;
	sub_824DBE08(ctx, base);
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

__attribute__((alias("__imp__sub_82705788"))) PPC_WEAK_FUNC(sub_82705788);
PPC_FUNC_IMPL(__imp__sub_82705788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82705790;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8289bbe8
	ctx.lr = 0x827057A4;
	sub_8289BBE8(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,14544
	ctx.r3.s64 = ctx.r11.s64 + 14544;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r11,4256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4256, ctx.r11.u32);
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// stw r11,4268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4268, ctx.r11.u32);
	// bl 0x828165a8
	ctx.lr = 0x827057C0;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82846e98
	ctx.lr = 0x827057D4;
	sub_82846E98(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,15556
	ctx.r4.s64 = ctx.r11.s64 + 15556;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8233a258
	ctx.lr = 0x827057E8;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,4296
	ctx.r3.s64 = ctx.r30.s64 + 4296;
	// bl 0x82400b48
	ctx.lr = 0x827057F4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x827057FC;
	sub_82333960(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15568
	ctx.r4.s64 = ctx.r11.s64 + 15568;
	// bl 0x8233a258
	ctx.lr = 0x8270580C;
	sub_8233A258(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,4320
	ctx.r3.s64 = ctx.r30.s64 + 4320;
	// bl 0x82400b48
	ctx.lr = 0x82705818;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82705820;
	sub_82333960(ctx, base);
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lwz r10,488(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// li r28,0
	ctx.r28.s64 = 0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82705888
	if (!ctx.cr6.gt) goto loc_82705888;
	// addi r26,r30,6096
	ctx.r26.s64 = ctx.r30.s64 + 6096;
	// addi r25,r30,6120
	ctx.r25.s64 = ctx.r30.s64 + 6120;
loc_82705848:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82410060
	ctx.lr = 0x82705864;
	sub_82410060(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82410060
	ctx.lr = 0x82705870;
	sub_82410060(ctx, base);
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82705848
	if (ctx.cr6.lt) goto loc_82705848;
loc_82705888:
	// lwz r11,2064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2064);
	// stw r11,1412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1412, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705898"))) PPC_WEAK_FUNC(sub_82705898);
PPC_FUNC_IMPL(__imp__sub_82705898) {
	PPC_FUNC_PROLOGUE();
	// b 0x824efd48
	sub_824EFD48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827058A0"))) PPC_WEAK_FUNC(sub_827058A0);
PPC_FUNC_IMPL(__imp__sub_827058A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827058A8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,3896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827058f8
	if (!ctx.cr6.eq) goto loc_827058F8;
	// lwz r11,3968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827058dc
	if (ctx.cr6.eq) goto loc_827058DC;
	// lfs f0,3976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827058f4
	goto loc_827058F4;
loc_827058DC:
	// lwz r11,5388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827058f0
	if (!ctx.cr6.eq) goto loc_827058F0;
	// lfs f0,3972(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3972);
	ctx.f0.f64 = double(temp.f32);
	// b 0x827058f4
	goto loc_827058F4;
loc_827058F0:
	// lfs f0,3980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3980);
	ctx.f0.f64 = double(temp.f32);
loc_827058F4:
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_827058F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284d4e0
	ctx.lr = 0x82705900;
	sub_8284D4E0(ctx, base);
	// lwz r11,6248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6248);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82705978
	if (ctx.cr6.eq) goto loc_82705978;
	// lwz r11,4384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4384);
	// addi r30,r31,4368
	ctx.r30.s64 = ctx.r31.s64 + 4368;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82705948
	if (!ctx.cr6.gt) goto loc_82705948;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82705928:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82333960
	ctx.lr = 0x82705934;
	sub_82333960(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82705928
	if (ctx.cr6.lt) goto loc_82705928;
loc_82705948:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270596c
	if (ctx.cr6.eq) goto loc_8270596C;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8270596C;
	sub_82332C38(ctx, base);
loc_8270596C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,6248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6248, ctx.r27.u32);
	// stw r11,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r11.u32);
loc_82705978:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,6192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6192);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82705a08
	if (ctx.cr6.eq) goto loc_82705A08;
	// lwz r11,6244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82705a08
	if (!ctx.cr6.eq) goto loc_82705A08;
	// lfs f0,6252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6252);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,6252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82705a0c
	if (ctx.cr6.gt) goto loc_82705A0C;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82705a0c
	if (ctx.cr6.eq) goto loc_82705A0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827059D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,30996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1076);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82705a0c
	goto loc_82705A0C;
loc_82705A08:
	// stfs f30,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
loc_82705A0C:
	// lwz r11,6244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82705a74
	if (ctx.cr6.eq) goto loc_82705A74;
	// lwz r11,6192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6192);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82705a74
	if (ctx.cr6.eq) goto loc_82705A74;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,6220
	ctx.r29.s64 = ctx.r31.s64 + 6220;
	// li r30,6
	ctx.r30.s64 = 6;
loc_82705A48:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705A60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82705a48
	if (!ctx.cr0.eq) goto loc_82705A48;
	// stfs f30,6252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6252, temp.u32);
	// stw r27,6244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6244, ctx.r27.u32);
loc_82705A74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705A88"))) PPC_WEAK_FUNC(sub_82705A88);
PPC_FUNC_IMPL(__imp__sub_82705A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82705A90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82705b88
	if (!ctx.cr6.gt) goto loc_82705B88;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
loc_82705AB4:
	// lwz r10,6108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6108);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r9,6132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6132);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r28,r9,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82411dc0
	ctx.lr = 0x82705ADC;
	sub_82411DC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82705b74
	if (ctx.cr0.eq) goto loc_82705B74;
	// bl 0x8248bf70
	ctx.lr = 0x82705AE8;
	sub_8248BF70(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82705b10
	if (!ctx.cr0.eq) goto loc_82705B10;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82705B10:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82705b74
	if (ctx.cr6.eq) goto loc_82705B74;
	// bl 0x82336ee0
	ctx.lr = 0x82705B1C;
	sub_82336EE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824f6738
	ctx.lr = 0x82705B30;
	sub_824F6738(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82335ef0
	ctx.lr = 0x82705B40;
	sub_82335EF0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f0098
	ctx.lr = 0x82705B58;
	sub_824F0098(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82705B74:
	// lwz r11,6112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82705ab4
	if (ctx.cr6.lt) goto loc_82705AB4;
loc_82705B88:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705B90"))) PPC_WEAK_FUNC(sub_82705B90);
PPC_FUNC_IMPL(__imp__sub_82705B90) {
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
	// bl 0x824dd5b0
	ctx.lr = 0x82705BA8;
	sub_824DD5B0(ctx, base);
	// addi r3,r31,4344
	ctx.r3.s64 = ctx.r31.s64 + 4344;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82332d50
	ctx.lr = 0x82705BBC;
	sub_82332D50(ctx, base);
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// li r5,192
	ctx.r5.s64 = 192;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82705BD4;
	sub_82A455D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82705a88
	ctx.lr = 0x82705BDC;
	sub_82705A88(ctx, base);
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

__attribute__((alias("__imp__sub_82705BF0"))) PPC_WEAK_FUNC(sub_82705BF0);
PPC_FUNC_IMPL(__imp__sub_82705BF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824dd1f8
	sub_824DD1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705BF8"))) PPC_WEAK_FUNC(sub_82705BF8);
PPC_FUNC_IMPL(__imp__sub_82705BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82705C10"))) PPC_WEAK_FUNC(sub_82705C10);
PPC_FUNC_IMPL(__imp__sub_82705C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82705C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82705638
	ctx.lr = 0x82705C24;
	sub_82705638(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,2004
	ctx.r10.s64 = ctx.r10.s64 + 2004;
	// addi r9,r9,2056
	ctx.r9.s64 = ctx.r9.s64 + 2056;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,6152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6152, ctx.r30.u32);
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// stw r11,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r11.u32);
	// stw r30,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r30.u32);
	// addi r3,r10,15716
	ctx.r3.s64 = ctx.r10.s64 + 15716;
	// stw r30,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r30.u32);
	// stw r30,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r30.u32);
	// stw r30,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r30.u32);
	// stw r11,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r11.u32);
	// stw r30,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r30.u32);
	// stw r30,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r30.u32);
	// stw r30,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r30.u32);
	// stw r30,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r30.u32);
	// stw r30,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x82705C8C;
	sub_82816528(ctx, base);
	// stw r3,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r3.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,15268
	ctx.r3.s64 = ctx.r11.s64 + 15268;
	// bl 0x82816528
	ctx.lr = 0x82705C9C;
	sub_82816528(ctx, base);
	// stw r3,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r3.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,15292
	ctx.r3.s64 = ctx.r11.s64 + 15292;
	// bl 0x82816528
	ctx.lr = 0x82705CAC;
	sub_82816528(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r3,1472
	ctx.r3.s64 = 1472;
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
	// stw r30,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r30.u32);
	// stw r30,6172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6172, ctx.r30.u32);
	// stw r30,6176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6176, ctx.r30.u32);
	// stw r30,6180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6180, ctx.r30.u32);
	// stw r30,6184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6184, ctx.r30.u32);
	// stw r30,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x82705CD8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82705ce8
	if (ctx.cr0.eq) goto loc_82705CE8;
	// bl 0x824c4128
	ctx.lr = 0x82705CE4;
	sub_824C4128(ctx, base);
	// b 0x82705cec
	goto loc_82705CEC;
loc_82705CE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82705CEC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,6168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6168, ctx.r3.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e02c0
	ctx.lr = 0x82705D50;
	sub_825E02C0(ctx, base);
	// li r11,45
	ctx.r11.s64 = 45;
	// addi r27,r31,6120
	ctx.r27.s64 = ctx.r31.s64 + 6120;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r29,6
	ctx.r29.s64 = 6;
loc_82705D60:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x82705D6C;
	sub_82410060(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82705d60
	if (!ctx.cr0.eq) goto loc_82705D60;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-880
	ctx.r3.s64 = ctx.r11.s64 + -880;
	// bl 0x82816528
	ctx.lr = 0x82705D80;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r29,r31,6096
	ctx.r29.s64 = ctx.r31.s64 + 6096;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82705D94;
	sub_82410060(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-844
	ctx.r3.s64 = ctx.r11.s64 + -844;
	// bl 0x82816528
	ctx.lr = 0x82705DA0;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82410060
	ctx.lr = 0x82705DB0;
	sub_82410060(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-804
	ctx.r3.s64 = ctx.r11.s64 + -804;
	// bl 0x82816528
	ctx.lr = 0x82705DBC;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82410060
	ctx.lr = 0x82705DCC;
	sub_82410060(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-768
	ctx.r3.s64 = ctx.r11.s64 + -768;
	// bl 0x82816528
	ctx.lr = 0x82705DD8;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82410060
	ctx.lr = 0x82705DE8;
	sub_82410060(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-728
	ctx.r3.s64 = ctx.r11.s64 + -728;
	// bl 0x82816528
	ctx.lr = 0x82705DF4;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82410060
	ctx.lr = 0x82705E04;
	sub_82410060(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-688
	ctx.r3.s64 = ctx.r11.s64 + -688;
	// bl 0x82816528
	ctx.lr = 0x82705E10;
	sub_82816528(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82705E20;
	sub_82410060(ctx, base);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r28,6192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6192, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,4392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4392, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705E38"))) PPC_WEAK_FUNC(sub_82705E38);
PPC_FUNC_IMPL(__imp__sub_82705E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82705E40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,6212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	// addi r11,r11,-352
	ctx.r11.s64 = ctx.r11.s64 + -352;
	// addi r9,r9,2004
	ctx.r9.s64 = ctx.r9.s64 + 2004;
	// addi r8,r8,2056
	ctx.r8.s64 = ctx.r8.s64 + 2056;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// stw r8,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82705ecc
	if (!ctx.cr6.gt) goto loc_82705ECC;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_82705E88:
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,6208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6208);
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r26,r11,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82705EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332db8
	ctx.lr = 0x82705EB8;
	sub_82332DB8(ctx, base);
	// lwz r11,6212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6212);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82705e88
	if (ctx.cr6.lt) goto loc_82705E88;
loc_82705ECC:
	// lwz r11,6216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6216);
	// addi r31,r30,6196
	ctx.r31.s64 = ctx.r30.s64 + 6196;
	// stw r27,6212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6212, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82705ef4
	if (ctx.cr6.eq) goto loc_82705EF4;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82705EF4;
	sub_82332C38(ctx, base);
loc_82705EF4:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82705F0C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82705f1c
	if (ctx.cr6.eq) goto loc_82705F1C;
	// bl 0x82332db8
	ctx.lr = 0x82705F1C;
	sub_82332DB8(ctx, base);
loc_82705F1C:
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// addi r3,r30,6144
	ctx.r3.s64 = ctx.r30.s64 + 6144;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// bl 0x8239d768
	ctx.lr = 0x82705F30;
	sub_8239D768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827056d8
	ctx.lr = 0x82705F38;
	sub_827056D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82705F40"))) PPC_WEAK_FUNC(sub_82705F40);
PPC_FUNC_IMPL(__imp__sub_82705F40) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x82705F5C;
	sub_824DD5B0(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-912
	ctx.r3.s64 = ctx.r11.s64 + -912;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82705F6C;
	sub_82816528(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r31,1784(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f2,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82705FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82705FC8"))) PPC_WEAK_FUNC(sub_82705FC8);
PPC_FUNC_IMPL(__imp__sub_82705FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82705FD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r31,524
	ctx.r4.s64 = ctx.r31.s64 + 524;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// lwz r9,4356(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4356);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82400b48
	ctx.lr = 0x82706018;
	sub_82400B48(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4356);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82706044
	if (ctx.cr6.eq) goto loc_82706044;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82706048
	goto loc_82706048;
loc_82706044:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82706048:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824193a8
	ctx.lr = 0x82706050;
	sub_824193A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r26,548(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// bl 0x823339b8
	ctx.lr = 0x82706060;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x824ef870
	ctx.lr = 0x8270607C;
	sub_824EF870(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82706090
	if (!ctx.cr6.eq) goto loc_82706090;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82706090:
	// addi r4,r29,4296
	ctx.r4.s64 = ctx.r29.s64 + 4296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82419348
	ctx.lr = 0x8270609C;
	sub_82419348(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827060b4
	if (!ctx.cr6.eq) goto loc_827060B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_827060B4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x827060BC;
	sub_82409058(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x827060C8;
	sub_828166E0(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827060e4
	if (ctx.cr6.eq) goto loc_827060E4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827060e4
	if (ctx.cr6.eq) goto loc_827060E4;
	// bl 0x82332db8
	ctx.lr = 0x827060E4;
	sub_82332DB8(ctx, base);
loc_827060E4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816528
	ctx.lr = 0x827060EC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x824f8078
	ctx.lr = 0x827060FC;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827061c0
	if (!ctx.cr0.eq) goto loc_827061C0;
	// lwz r7,6212(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6212);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82706158
	if (!ctx.cr6.gt) goto loc_82706158;
	// lwz r8,6208(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6208);
loc_82706114:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
loc_8270611C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82706140
	if (ctx.cr0.eq) goto loc_82706140;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8270611c
	if (ctx.cr6.eq) goto loc_8270611C;
loc_82706140:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x827061c0
	if (ctx.cr0.eq) goto loc_827061C0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82706114
	if (ctx.cr6.lt) goto loc_82706114;
loc_82706158:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82706170
	if (!ctx.cr6.eq) goto loc_82706170;
	// bl 0x828223f0
	ctx.lr = 0x8270616C;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_82706170:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82706188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a4e530
	ctx.lr = 0x82706198;
	sub_82A4E530(ctx, base);
	// addi r3,r29,6196
	ctx.r3.s64 = ctx.r29.s64 + 6196;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x827061AC;
	sub_82332D50(ctx, base);
	// lwz r10,6208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6208);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827061c0
	if (ctx.cr0.eq) goto loc_827061C0;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_827061C0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x827061C8;
	sub_82333960(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x827061D0;
	sub_82333960(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827061D8"))) PPC_WEAK_FUNC(sub_827061D8);
PPC_FUNC_IMPL(__imp__sub_827061D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827061E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829be6e8
	ctx.lr = 0x827061EC;
	sub_829BE6E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411cb0
	ctx.lr = 0x827061F4;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq 0x8270622c
	if (ctx.cr0.eq) goto loc_8270622C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-27316
	ctx.r3.s64 = ctx.r11.s64 + -27316;
	// bl 0x82816528
	ctx.lr = 0x8270620C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82981d78
	ctx.lr = 0x82706220;
	sub_82981D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_8270622C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d2080
	ctx.lr = 0x82706234;
	sub_826D2080(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82706240
	if (ctx.cr0.eq) goto loc_82706240;
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
loc_82706240:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706248"))) PPC_WEAK_FUNC(sub_82706248);
PPC_FUNC_IMPL(__imp__sub_82706248) {
	PPC_FUNC_PROLOGUE();
	// b 0x824dd8b8
	sub_824DD8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706250"))) PPC_WEAK_FUNC(sub_82706250);
PPC_FUNC_IMPL(__imp__sub_82706250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82706258;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82705638
	ctx.lr = 0x82706264;
	sub_82705638(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,2080
	ctx.r11.s64 = ctx.r11.s64 + 2080;
	// addi r10,r10,4436
	ctx.r10.s64 = ctx.r10.s64 + 4436;
	// addi r9,r9,4488
	ctx.r9.s64 = ctx.r9.s64 + 4488;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// stw r30,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r30.u32);
	// addi r3,r11,15268
	ctx.r3.s64 = ctx.r11.s64 + 15268;
	// bl 0x82816528
	ctx.lr = 0x8270629C;
	sub_82816528(ctx, base);
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,15716
	ctx.r3.s64 = ctx.r11.s64 + 15716;
	// bl 0x82816528
	ctx.lr = 0x827062AC;
	sub_82816528(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r3.u32);
	// li r3,1472
	ctx.r3.s64 = 1472;
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// stw r30,2736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2736, ctx.r30.u32);
	// stw r30,6148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6148, ctx.r30.u32);
	// stw r30,6152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6152, ctx.r30.u32);
	// stw r30,6156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6156, ctx.r30.u32);
	// stw r30,6160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6160, ctx.r30.u32);
	// stw r30,6164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6164, ctx.r30.u32);
	// stw r30,6188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6188, ctx.r30.u32);
	// bl 0x82833108
	ctx.lr = 0x827062DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827062ec
	if (ctx.cr0.eq) goto loc_827062EC;
	// bl 0x824c4128
	ctx.lr = 0x827062E8;
	sub_824C4128(ctx, base);
	// b 0x827062f0
	goto loc_827062F0;
loc_827062EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_827062F0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,6144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6144, ctx.r3.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270634C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825e02c0
	ctx.lr = 0x82706354;
	sub_825E02C0(ctx, base);
	// stw r30,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r30.u32);
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r30.u32);
	// stw r30,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706370"))) PPC_WEAK_FUNC(sub_82706370);
PPC_FUNC_IMPL(__imp__sub_82706370) {
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
	// bl 0x82707d88
	ctx.lr = 0x82706388;
	sub_82707D88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824dd1f8
	ctx.lr = 0x82706390;
	sub_824DD1F8(ctx, base);
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

__attribute__((alias("__imp__sub_827063A8"))) PPC_WEAK_FUNC(sub_827063A8);
PPC_FUNC_IMPL(__imp__sub_827063A8) {
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
	// bl 0x824dc238
	ctx.lr = 0x827063C0;
	sub_824DC238(ctx, base);
	// lwz r11,-396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827063D4;
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

__attribute__((alias("__imp__sub_827063E8"))) PPC_WEAK_FUNC(sub_827063E8);
PPC_FUNC_IMPL(__imp__sub_827063E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r11,15716
	ctx.r3.s64 = ctx.r11.s64 + 15716;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827063F8"))) PPC_WEAK_FUNC(sub_827063F8);
PPC_FUNC_IMPL(__imp__sub_827063F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82706400;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829be6e8
	ctx.lr = 0x8270640C;
	sub_829BE6E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82411cb0
	ctx.lr = 0x82706414;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq 0x8270644c
	if (ctx.cr0.eq) goto loc_8270644C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// bl 0x82816528
	ctx.lr = 0x8270642C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82981d78
	ctx.lr = 0x82706440;
	sub_82981D78(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r29.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_8270644C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826d2080
	ctx.lr = 0x82706454;
	sub_826D2080(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82706460
	if (ctx.cr0.eq) goto loc_82706460;
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
loc_82706460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706468"))) PPC_WEAK_FUNC(sub_82706468);
PPC_FUNC_IMPL(__imp__sub_82706468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82706470;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x8270647C;
	sub_824DD5B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82706738
	ctx.lr = 0x82706484;
	sub_82706738(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r11,-652
	ctx.r3.s64 = ctx.r11.s64 + -652;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82706494;
	sub_82816528(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,1784(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1784);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827064D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,808(r29)
	PPC_STORE_U32(ctx.r29.u32 + 808, ctx.r31.u32);
	// stw r31,840(r29)
	PPC_STORE_U32(ctx.r29.u32 + 840, ctx.r31.u32);
	// stw r31,844(r29)
	PPC_STORE_U32(ctx.r29.u32 + 844, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827064F0"))) PPC_WEAK_FUNC(sub_827064F0);
PPC_FUNC_IMPL(__imp__sub_827064F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706504
	if (ctx.cr6.eq) goto loc_82706504;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,6184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6184, ctx.r11.u32);
loc_82706504:
	// lwz r11,3896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3896);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82706540
	if (!ctx.cr6.eq) goto loc_82706540;
	// lwz r11,3968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706524
	if (ctx.cr6.eq) goto loc_82706524;
	// lfs f0,3976(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3976);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8270653c
	goto loc_8270653C;
loc_82706524:
	// lwz r11,5388(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82706538
	if (!ctx.cr6.eq) goto loc_82706538;
	// lfs f0,3972(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3972);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8270653c
	goto loc_8270653C;
loc_82706538:
	// lfs f0,3980(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3980);
	ctx.f0.f64 = double(temp.f32);
loc_8270653C:
	// fmuls f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82706540:
	// b 0x8284d4e0
	sub_8284D4E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706548"))) PPC_WEAK_FUNC(sub_82706548);
PPC_FUNC_IMPL(__imp__sub_82706548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82706550;
	__savegprlr_24(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r10,4384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4384);
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82706694
	if (!ctx.cr6.gt) goto loc_82706694;
	// lwz r9,4380(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4380);
	// lwz r8,548(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
loc_82706584:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x827065a4
	if (ctx.cr6.eq) goto loc_827065A4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82706584
	if (ctx.cr6.lt) goto loc_82706584;
	// b 0x82706694
	goto loc_82706694;
loc_827065A4:
	// mulli r30,r29,36
	ctx.r30.s64 = ctx.r29.s64 * 36;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827065c0
	if (ctx.cr6.eq) goto loc_827065C0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x827065c4
	goto loc_827065C4;
loc_827065C0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_827065C4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x827065CC;
	sub_82409058(ctx, base);
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x82a4ca90
	ctx.lr = 0x827065D8;
	sub_82A4CA90(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x827065fc
	if (ctx.cr6.eq) goto loc_827065FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827065fc
	if (ctx.cr6.eq) goto loc_827065FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x827065FC;
	sub_82332DB8(ctx, base);
loc_827065FC:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x828166e0
	ctx.lr = 0x82706608;
	sub_828166E0(ctx, base);
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x82833108
	ctx.lr = 0x82706610;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270663c
	if (ctx.cr0.eq) goto loc_8270663C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r5,2236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// bl 0x82647558
	ctx.lr = 0x82706634;
	sub_82647558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82706640
	goto loc_82706640;
loc_8270663C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82706640:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82706650;
	sub_82833A30(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r27,r28,4368
	ctx.r27.s64 = ctx.r28.s64 + 4368;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8270667c
	if (!ctx.cr6.lt) goto loc_8270667C;
	// subf r31,r29,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_82706664:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x82706670;
	sub_82333960(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x82706664
	if (!ctx.cr0.eq) goto loc_82706664;
loc_8270667C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,36
	ctx.r6.s64 = 36;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82706694;
	sub_82332CA8(ctx, base);
loc_82706694:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r4,r26,524
	ctx.r4.s64 = ctx.r26.s64 + 524;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lwz r11,548(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r10,4356(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4356);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82400b48
	ctx.lr = 0x827066CC;
	sub_82400B48(ctx, base);
	// lwz r10,548(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// lwz r11,4356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4356);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827066f0
	if (ctx.cr6.eq) goto loc_827066F0;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x827066f4
	goto loc_827066F4;
loc_827066F0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_827066F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824193a8
	ctx.lr = 0x827066FC;
	sub_824193A8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r30,548(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 548);
	// bl 0x823339b8
	ctx.lr = 0x8270670C;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x824ef870
	ctx.lr = 0x82706728;
	sub_824EF870(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82706730;
	sub_82333960(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706738"))) PPC_WEAK_FUNC(sub_82706738);
PPC_FUNC_IMPL(__imp__sub_82706738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82706740;
	__savegprlr_22(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82706770
	if (ctx.cr6.eq) goto loc_82706770;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82706768;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8270676C;
	sub_82409C40(ctx, base);
	// b 0x82706774
	goto loc_82706774;
loc_82706770:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82706774:
	// bl 0x82411c50
	ctx.lr = 0x82706778;
	sub_82411C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,1412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// bl 0x824090e0
	ctx.lr = 0x82706784;
	sub_824090E0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270679C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82706988
	if (ctx.cr6.eq) goto loc_82706988;
	// lwz r11,6140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6140);
	// addi r23,r28,6120
	ctx.r23.s64 = ctx.r28.s64 + 6120;
	// stw r30,6136(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6136, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827067d0
	if (ctx.cr6.eq) goto loc_827067D0;
	// stw r30,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332c38
	ctx.lr = 0x827067D0;
	sub_82332C38(ctx, base);
loc_827067D0:
	// lwz r11,6116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6116);
	// addi r24,r28,6096
	ctx.r24.s64 = ctx.r28.s64 + 6096;
	// stw r30,6112(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6112, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827067f8
	if (ctx.cr6.eq) goto loc_827067F8;
	// stw r30,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332c38
	ctx.lr = 0x827067F8;
	sub_82332C38(ctx, base);
loc_827067F8:
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15556
	ctx.r4.s64 = ctx.r11.s64 + 15556;
	// bl 0x8233a258
	ctx.lr = 0x82706808;
	sub_8233A258(ctx, base);
	// addi r26,r28,4296
	ctx.r26.s64 = ctx.r28.s64 + 4296;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82400b48
	ctx.lr = 0x82706818;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82706820;
	sub_82333960(ctx, base);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15568
	ctx.r4.s64 = ctx.r11.s64 + 15568;
	// bl 0x8233a258
	ctx.lr = 0x82706830;
	sub_8233A258(ctx, base);
	// addi r25,r28,4320
	ctx.r25.s64 = ctx.r28.s64 + 4320;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82400b48
	ctx.lr = 0x82706840;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82706848;
	sub_82333960(ctx, base);
	// addi r4,r31,4344
	ctx.r4.s64 = ctx.r31.s64 + 4344;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332f10
	ctx.lr = 0x82706854;
	sub_82332F10(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r11,28
	ctx.r29.s64 = ctx.r11.s64 + 28;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_82706864:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82706970
	if (!ctx.cr6.lt) goto loc_82706970;
	// lwz r11,-28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82706884;
	sub_823339B8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x824b4c48
	ctx.lr = 0x82706898;
	sub_824B4C48(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82706968
	if (ctx.cr0.eq) goto loc_82706968;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827068b4
	if (ctx.cr6.eq) goto loc_827068B4;
	// lwz r5,12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// b 0x827068b8
	goto loc_827068B8;
loc_827068B4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_827068B8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82419348
	ctx.lr = 0x827068C4;
	sub_82419348(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827068d8
	if (ctx.cr6.eq) goto loc_827068D8;
	// lwz r5,536(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// b 0x827068dc
	goto loc_827068DC;
loc_827068D8:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_827068DC:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82419348
	ctx.lr = 0x827068E8;
	sub_82419348(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827068fc
	if (!ctx.cr6.eq) goto loc_827068FC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_827068FC:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82419348
	ctx.lr = 0x82706908;
	sub_82419348(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82706910;
	sub_82333960(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82706918;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270692c
	if (!ctx.cr6.eq) goto loc_8270692C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8270692C:
	// bl 0x828165a8
	ctx.lr = 0x82706930;
	sub_828165A8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82410060
	ctx.lr = 0x82706940;
	sub_82410060(ctx, base);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82706954;
	sub_82410060(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82706548
	ctx.lr = 0x82706960;
	sub_82706548(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82706968;
	sub_82333960(ctx, base);
loc_82706968:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82333960
	ctx.lr = 0x82706970;
	sub_82333960(ctx, base);
loc_82706970:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82706864
	if (ctx.cr6.lt) goto loc_82706864;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332e90
	ctx.lr = 0x82706988;
	sub_82332E90(ctx, base);
loc_82706988:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706990"))) PPC_WEAK_FUNC(sub_82706990);
PPC_FUNC_IMPL(__imp__sub_82706990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82706998;
	__savegprlr_20(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x827069c4
	if (ctx.cr6.eq) goto loc_827069C4;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82706d68
	if (ctx.cr6.eq) goto loc_82706D68;
loc_827069C4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r27,6180(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6180, ctx.r27.u32);
	// addi r20,r26,6176
	ctx.r20.s64 = ctx.r26.s64 + 6176;
	// stw r27,6176(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6176, ctx.r27.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r1,592
	ctx.r30.s64 = ctx.r1.s64 + 592;
	// addi r28,r21,560
	ctx.r28.s64 = ctx.r21.s64 + 560;
	// addi r22,r11,7896
	ctx.r22.s64 = ctx.r11.s64 + 7896;
loc_827069E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x827069F0;
	sub_823339B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82706a04
	if (!ctx.cr6.eq) goto loc_82706A04;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82706A04:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bgt cr6,0x82706a14
	if (ctx.cr6.gt) goto loc_82706A14;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82706A14:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82706A1C;
	sub_82333960(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82706a88
	if (ctx.cr0.eq) goto loc_82706A88;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82682100
	ctx.lr = 0x82706A34;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706a48
	if (ctx.cr6.eq) goto loc_82706A48;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82706a4c
	goto loc_82706A4C;
loc_82706A48:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82706A4C:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82409058
	ctx.lr = 0x82706A54;
	sub_82409058(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82706A60;
	sub_828166E0(ctx, base);
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82706a7c
	if (ctx.cr6.eq) goto loc_82706A7C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82706a7c
	if (ctx.cr6.eq) goto loc_82706A7C;
	// bl 0x82332db8
	ctx.lr = 0x82706A7C;
	sub_82332DB8(ctx, base);
loc_82706A7C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82706A84;
	sub_82333960(ctx, base);
	// b 0x82706a8c
	goto loc_82706A8C;
loc_82706A88:
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
loc_82706A8C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x827069e4
	if (ctx.cr6.lt) goto loc_827069E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82707510
	ctx.lr = 0x82706AA8;
	sub_82707510(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82707610
	ctx.lr = 0x82706AB0;
	sub_82707610(ctx, base);
	// lwz r11,556(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 556);
	// stw r21,6164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6164, ctx.r21.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706ac8
	if (ctx.cr6.eq) goto loc_82706AC8;
	// stw r21,6156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6156, ctx.r21.u32);
	// b 0x82706acc
	goto loc_82706ACC;
loc_82706AC8:
	// stw r21,6160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6160, ctx.r21.u32);
loc_82706ACC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82707eb0
	ctx.lr = 0x82706AD4;
	sub_82707EB0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82706c6c
	if (ctx.cr6.eq) goto loc_82706C6C;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r28,6172(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6172);
	// lwz r25,6168(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6168);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r29,r24,560
	ctx.r29.s64 = ctx.r24.s64 + 560;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
loc_82706B08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82682100
	ctx.lr = 0x82706B18;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706b2c
	if (ctx.cr6.eq) goto loc_82706B2C;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82706b30
	goto loc_82706B30;
loc_82706B2C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82706B30:
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82409058
	ctx.lr = 0x82706B38;
	sub_82409058(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82706B44;
	sub_828166E0(ctx, base);
	// lwz r3,580(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r11,r1,452
	ctx.r11.s64 = ctx.r1.s64 + 452;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82706b60
	if (ctx.cr6.eq) goto loc_82706B60;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82706b60
	if (ctx.cr6.eq) goto loc_82706B60;
	// bl 0x82332db8
	ctx.lr = 0x82706B60;
	sub_82332DB8(ctx, base);
loc_82706B60:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82706B68;
	sub_82333960(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// bl 0x823339b8
	ctx.lr = 0x82706B78;
	sub_823339B8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82706b8c
	if (!ctx.cr6.eq) goto loc_82706B8C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82706B8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82706ba4
	if (!ctx.cr6.gt) goto loc_82706BA4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82816528
	ctx.lr = 0x82706B9C;
	sub_82816528(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82706ba8
	goto loc_82706BA8;
loc_82706BA4:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82706BA8:
	// clrlwi. r10,r23,31
	ctx.r10.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82706bc0
	if (ctx.cr0.eq) goto loc_82706BC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r23,r23,0,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82333960
	ctx.lr = 0x82706BC0;
	sub_82333960(ctx, base);
loc_82706BC0:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82706c38
	if (ctx.cr0.eq) goto loc_82706C38;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r8,r1,592
	ctx.r8.s64 = ctx.r1.s64 + 592;
loc_82706BD0:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706c10
	if (ctx.cr6.eq) goto loc_82706C10;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82706BE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82706c08
	if (ctx.cr0.eq) goto loc_82706C08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82706be4
	if (ctx.cr6.eq) goto loc_82706BE4;
loc_82706C08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82706c38
	if (ctx.cr0.eq) goto loc_82706C38;
loc_82706C10:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// blt cr6,0x82706bd0
	if (ctx.cr6.lt) goto loc_82706BD0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82706C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82706C38:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82706b08
	if (ctx.cr6.lt) goto loc_82706B08;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82706c58
	if (!ctx.cr6.eq) goto loc_82706C58;
	// stw r27,6172(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6172, ctx.r27.u32);
	// b 0x82706c64
	goto loc_82706C64;
loc_82706C58:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82706c64
	if (!ctx.cr6.eq) goto loc_82706C64;
	// stw r27,6168(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6168, ctx.r27.u32);
loc_82706C64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x82706C6C;
	sub_8239D768(ctx, base);
loc_82706C6C:
	// addi r31,r1,592
	ctx.r31.s64 = ctx.r1.s64 + 592;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
loc_82706C7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82816528
	ctx.lr = 0x82706C84;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f8078
	ctx.lr = 0x82706C94;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82706ccc
	if (!ctx.cr0.eq) goto loc_82706CCC;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706ccc
	if (ctx.cr6.eq) goto loc_82706CCC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82706CC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// b 0x82706d24
	goto loc_82706D24;
loc_82706CCC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82706CDC;
	sub_82816528(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x824f8078
	ctx.lr = 0x82706CEC;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82706d24
	if (ctx.cr0.eq) goto loc_82706D24;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1396);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82706D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,556(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706d20
	if (ctx.cr6.eq) goto loc_82706D20;
	// stw r27,6156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6156, ctx.r27.u32);
	// b 0x82706d24
	goto loc_82706D24;
loc_82706D20:
	// stw r27,6160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6160, ctx.r27.u32);
loc_82706D24:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bne 0x82706c7c
	if (!ctx.cr0.eq) goto loc_82706C7C;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82706D40:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bne 0x82706d40
	if (!ctx.cr0.eq) goto loc_82706D40;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82706d68
	if (ctx.cr6.eq) goto loc_82706D68;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82706fa8
	ctx.lr = 0x82706D68;
	sub_82706FA8(ctx, base);
loc_82706D68:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706D70"))) PPC_WEAK_FUNC(sub_82706D70);
PPC_FUNC_IMPL(__imp__sub_82706D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82706D78;
	__savegprlr_22(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r3,1000(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1000);
	// bl 0x828456a8
	ctx.lr = 0x82706DA0;
	sub_828456A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82706fa0
	if (!ctx.cr0.eq) goto loc_82706FA0;
	// lwz r11,6156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82706ef0
	if (ctx.cr6.eq) goto loc_82706EF0;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r29,6176
	ctx.r26.s64 = ctx.r29.s64 + 6176;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
loc_82706DD4:
	// lwz r11,6156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x823339b8
	ctx.lr = 0x82706DE8;
	sub_823339B8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82706dfc
	if (!ctx.cr6.eq) goto loc_82706DFC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82706DFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// bgt cr6,0x82706e0c
	if (ctx.cr6.gt) goto loc_82706E0C;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82706E0C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82706E14;
	sub_82333960(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82706e8c
	if (ctx.cr0.eq) goto loc_82706E8C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,6156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82682100
	ctx.lr = 0x82706E2C;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706e40
	if (ctx.cr6.eq) goto loc_82706E40;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82706e44
	goto loc_82706E44;
loc_82706E40:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_82706E44:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x82706E4C;
	sub_82409058(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82706E58;
	sub_828166E0(ctx, base);
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82706e74
	if (ctx.cr6.eq) goto loc_82706E74;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82706e74
	if (ctx.cr6.eq) goto loc_82706E74;
	// bl 0x82332db8
	ctx.lr = 0x82706E74;
	sub_82332DB8(ctx, base);
loc_82706E74:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82706E7C;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816528
	ctx.lr = 0x82706E84;
	sub_82816528(ctx, base);
	// cmplw cr6,r22,r3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82706e90
	if (!ctx.cr6.eq) goto loc_82706E90;
loc_82706E8C:
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_82706E90:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// blt cr6,0x82706dd4
	if (ctx.cr6.lt) goto loc_82706DD4;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82706EB0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// bne 0x82706eb0
	if (!ctx.cr0.eq) goto loc_82706EB0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82706fa0
	if (ctx.cr6.eq) goto loc_82706FA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82707eb0
	ctx.lr = 0x82706ED4;
	sub_82707EB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,6156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// bl 0x82706fa8
	ctx.lr = 0x82706EE0;
	sub_82706FA8(ctx, base);
	// stw r23,6156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6156, ctx.r23.u32);
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// stw r23,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r23.u32);
	// b 0x82706fa0
	goto loc_82706FA0;
loc_82706EF0:
	// lwz r4,6160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6160);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82706f8c
	if (ctx.cr6.eq) goto loc_82706F8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82682100
	ctx.lr = 0x82706F08;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706f1c
	if (ctx.cr6.eq) goto loc_82706F1C;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82706f24
	goto loc_82706F24;
loc_82706F1C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82706F24:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82409058
	ctx.lr = 0x82706F2C;
	sub_82409058(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82706F38;
	sub_828166E0(ctx, base);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// addi r11,r1,420
	ctx.r11.s64 = ctx.r1.s64 + 420;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82706f54
	if (ctx.cr6.eq) goto loc_82706F54;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82706f54
	if (ctx.cr6.eq) goto loc_82706F54;
	// bl 0x82332db8
	ctx.lr = 0x82706F54;
	sub_82332DB8(ctx, base);
loc_82706F54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82706F5C;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816528
	ctx.lr = 0x82706F64;
	sub_82816528(ctx, base);
	// cmplw cr6,r22,r3
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82706fa0
	if (!ctx.cr6.eq) goto loc_82706FA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82707eb0
	ctx.lr = 0x82706F74;
	sub_82707EB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,6160(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6160);
	// bl 0x82706fa8
	ctx.lr = 0x82706F80;
	sub_82706FA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6160, ctx.r11.u32);
	// b 0x82706fa0
	goto loc_82706FA0;
loc_82706F8C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824efd48
	ctx.lr = 0x82706FA0;
	sub_824EFD48(ctx, base);
loc_82706FA0:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82706FA8"))) PPC_WEAK_FUNC(sub_82706FA8);
PPC_FUNC_IMPL(__imp__sub_82706FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82706FB0;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// addi r20,r11,7896
	ctx.r20.s64 = ctx.r11.s64 + 7896;
	// beq cr6,0x827070f8
	if (ctx.cr6.eq) goto loc_827070F8;
	// lwz r11,524(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827070f8
	if (ctx.cr6.eq) goto loc_827070F8;
	// lwz r11,312(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82706ff8
	if (ctx.cr6.eq) goto loc_82706FF8;
	// lwz r4,308(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 308);
	// b 0x82706ffc
	goto loc_82706FFC;
loc_82706FF8:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82706FFC:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82409058
	ctx.lr = 0x82707004;
	sub_82409058(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82707010;
	sub_828166E0(ctx, base);
	// lwz r3,564(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// addi r11,r1,436
	ctx.r11.s64 = ctx.r1.s64 + 436;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8270702c
	if (ctx.cr6.eq) goto loc_8270702C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270702c
	if (ctx.cr6.eq) goto loc_8270702C;
	// bl 0x82332db8
	ctx.lr = 0x8270702C;
	sub_82332DB8(ctx, base);
loc_8270702C:
	// lwz r11,336(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707040
	if (ctx.cr6.eq) goto loc_82707040;
	// lwz r4,332(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 332);
	// b 0x82707044
	goto loc_82707044;
loc_82707040:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82707044:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82409058
	ctx.lr = 0x8270704C;
	sub_82409058(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82707058;
	sub_828166E0(ctx, base);
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82707074
	if (ctx.cr6.eq) goto loc_82707074;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82707074
	if (ctx.cr6.eq) goto loc_82707074;
	// bl 0x82332db8
	ctx.lr = 0x82707074;
	sub_82332DB8(ctx, base);
loc_82707074:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82682100
	ctx.lr = 0x82707084;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707098
	if (ctx.cr6.eq) goto loc_82707098;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8270709c
	goto loc_8270709C;
loc_82707098:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_8270709C:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82409058
	ctx.lr = 0x827070A4;
	sub_82409058(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x827070B0;
	sub_828166E0(ctx, base);
	// lwz r3,708(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// addi r11,r1,580
	ctx.r11.s64 = ctx.r1.s64 + 580;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827070cc
	if (ctx.cr6.eq) goto loc_827070CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827070cc
	if (ctx.cr6.eq) goto loc_827070CC;
	// bl 0x82332db8
	ctx.lr = 0x827070CC;
	sub_82332DB8(ctx, base);
loc_827070CC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827070D4;
	sub_82333960(ctx, base);
	// lwz r3,1748(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1748);
	// lwz r4,524(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827070f4
	if (ctx.cr6.eq) goto loc_827070F4;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82910368
	ctx.lr = 0x827070EC;
	sub_82910368(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x827070f8
	goto loc_827070F8;
loc_827070F4:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_827070F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,620
	ctx.r4.s64 = ctx.r24.s64 + 620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,956(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 956);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// lwz r11,1412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270712C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270715c
	if (ctx.cr0.eq) goto loc_8270715C;
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707148
	if (ctx.cr6.eq) goto loc_82707148;
	// lwz r10,956(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 956);
	// stw r10,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r10.u32);
loc_82707148:
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8270715c
	if (ctx.cr6.eq) goto loc_8270715C;
	// lwz r10,956(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 956);
	// stw r10,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r10.u32);
loc_8270715C:
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r4,80(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// beq cr6,0x827071ac
	if (ctx.cr6.eq) goto loc_827071AC;
	// stw r31,6148(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6148, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x82707180;
	sub_829BD3A8(ctx, base);
	// lwz r3,6148(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270719C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6148(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
	// lwz r3,6148(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// b 0x827071e0
	goto loc_827071E0;
loc_827071AC:
	// stw r31,6152(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6152, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x827071B8;
	sub_829BD3A8(ctx, base);
	// lwz r3,6152(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827071D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6152(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
	// lwz r3,6152(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
loc_827071E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827071F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82707218
	if (ctx.cr0.eq) goto loc_82707218;
	// lwz r11,3284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707208
	if (ctx.cr6.eq) goto loc_82707208;
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
loc_82707208:
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707218
	if (ctx.cr6.eq) goto loc_82707218;
	// stw r23,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r23.u32);
loc_82707218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2998
	ctx.lr = 0x82707220;
	sub_828A2998(ctx, base);
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707248
	if (ctx.cr6.eq) goto loc_82707248;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82707344
	if (ctx.cr0.eq) goto loc_82707344;
loc_82707248:
	// bl 0x823c47f0
	ctx.lr = 0x8270724C;
	sub_823C47F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82707274
	if (!ctx.cr0.eq) goto loc_82707274;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82707274:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82707344
	if (!ctx.cr6.eq) goto loc_82707344;
	// bl 0x823c4930
	ctx.lr = 0x82707280;
	sub_823C4930(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x827072a8
	if (!ctx.cr0.eq) goto loc_827072A8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_827072A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82707344
	if (!ctx.cr6.eq) goto loc_82707344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82614198
	ctx.lr = 0x827072B8;
	sub_82614198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82707344
	if (!ctx.cr0.eq) goto loc_82707344;
	// bl 0x823c3188
	ctx.lr = 0x827072C4;
	sub_823C3188(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827072DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x827072ec
	if (!ctx.cr0.eq) goto loc_827072EC;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_827072EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82707344
	if (!ctx.cr6.eq) goto loc_82707344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826141f8
	ctx.lr = 0x827072FC;
	sub_826141F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82707344
	if (!ctx.cr0.eq) goto loc_82707344;
	// bl 0x823c3830
	ctx.lr = 0x82707308;
	sub_823C3830(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82707330
	if (!ctx.cr0.eq) goto loc_82707330;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82707330:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82707344
	if (!ctx.cr6.eq) goto loc_82707344;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r3,r10,-17204
	ctx.r3.s64 = ctx.r10.s64 + -17204;
	// b 0x8270734c
	goto loc_8270734C;
loc_82707344:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r10,-13732
	ctx.r3.s64 = ctx.r10.s64 + -13732;
loc_8270734C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r11,r11,904
	ctx.r11.s64 = ctx.r11.s64 + 904;
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x828165a8
	ctx.lr = 0x82707374;
	sub_828165A8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,1436(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r23,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827073A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824fe208
	ctx.lr = 0x827073A8;
	sub_824FE208(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// beq 0x827074b4
	if (ctx.cr0.eq) goto loc_827074B4;
	// addi r26,r3,3284
	ctx.r26.s64 = ctx.r3.s64 + 3284;
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r27,r11,-18736
	ctx.r27.s64 = ctx.r11.s64 + -18736;
loc_827073C0:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8270742c
	if (ctx.cr6.eq) goto loc_8270742C;
	// stw r22,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x827073D8;
	sub_82816528(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_827073E4:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8270742c
	if (!ctx.cr6.lt) goto loc_8270742C;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82411cb0
	ctx.lr = 0x827073FC;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x82707400;
	sub_82411CB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82707420
	if (ctx.cr0.eq) goto loc_82707420;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82981d78
	ctx.lr = 0x82707418;
	sub_82981D78(ctx, base);
	// stw r22,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r22.u32);
	// stw r23,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r23.u32);
loc_82707420:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x827073e4
	goto loc_827073E4;
loc_8270742C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x827073c0
	if (!ctx.cr0.eq) goto loc_827073C0;
loc_82707438:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,524(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 524);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827076f8
	ctx.lr = 0x82707448;
	sub_827076F8(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270745c
	if (!ctx.cr6.eq) goto loc_8270745C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_8270745C:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x828165a8
	ctx.lr = 0x82707464;
	sub_828165A8(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1784(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827074A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x827074A8;
	sub_82333960(ctx, base);
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
loc_827074B4:
	// addi r3,r11,-18736
	ctx.r3.s64 = ctx.r11.s64 + -18736;
	// bl 0x82816528
	ctx.lr = 0x827074BC;
	sub_82816528(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_827074C8:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82707438
	if (!ctx.cr6.lt) goto loc_82707438;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82411cb0
	ctx.lr = 0x827074E0;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x827074E4;
	sub_82411CB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82707504
	if (ctx.cr0.eq) goto loc_82707504;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82981d78
	ctx.lr = 0x827074FC;
	sub_82981D78(ctx, base);
	// stw r22,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r22.u32);
	// stw r23,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r23.u32);
loc_82707504:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x827074c8
	goto loc_827074C8;
}

__attribute__((alias("__imp__sub_82707510"))) PPC_WEAK_FUNC(sub_82707510);
PPC_FUNC_IMPL(__imp__sub_82707510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82707518;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,6156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707604
	if (ctx.cr6.eq) goto loc_82707604;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_8270753C:
	// lwz r11,6156(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x823339b8
	ctx.lr = 0x82707550;
	sub_823339B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82707564
	if (!ctx.cr6.eq) goto loc_82707564;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82707564:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8270756C;
	sub_82333960(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x827075ec
	if (ctx.cr6.eq) goto loc_827075EC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,6156(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6156);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82682100
	ctx.lr = 0x82707584;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707598
	if (ctx.cr6.eq) goto loc_82707598;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8270759c
	goto loc_8270759C;
loc_82707598:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8270759C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x827075A4;
	sub_82409058(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x827075B0;
	sub_828166E0(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827075cc
	if (ctx.cr6.eq) goto loc_827075CC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827075cc
	if (ctx.cr6.eq) goto loc_827075CC;
	// bl 0x82332db8
	ctx.lr = 0x827075CC;
	sub_82332DB8(ctx, base);
loc_827075CC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x827075D4;
	sub_82333960(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827075EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827075EC:
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// blt cr6,0x8270753c
	if (ctx.cr6.lt) goto loc_8270753C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6156, ctx.r11.u32);
loc_82707604:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82707610"))) PPC_WEAK_FUNC(sub_82707610);
PPC_FUNC_IMPL(__imp__sub_82707610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82707618;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,6160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827076f0
	if (ctx.cr6.eq) goto loc_827076F0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
loc_82707638:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,6160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82682100
	ctx.lr = 0x82707648;
	sub_82682100(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x82333960
	ctx.lr = 0x8270765C;
	sub_82333960(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x827076dc
	if (ctx.cr0.eq) goto loc_827076DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,6160(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6160);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82682100
	ctx.lr = 0x82707674;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707688
	if (ctx.cr6.eq) goto loc_82707688;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8270768c
	goto loc_8270768C;
loc_82707688:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8270768C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82409058
	ctx.lr = 0x82707694;
	sub_82409058(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x827076A0;
	sub_828166E0(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827076bc
	if (ctx.cr6.eq) goto loc_827076BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827076bc
	if (ctx.cr6.eq) goto loc_827076BC;
	// bl 0x82332db8
	ctx.lr = 0x827076BC;
	sub_82332DB8(ctx, base);
loc_827076BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x827076C4;
	sub_82333960(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827076DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827076DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82707638
	if (ctx.cr6.lt) goto loc_82707638;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6160, ctx.r11.u32);
loc_827076F0:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827076F8"))) PPC_WEAK_FUNC(sub_827076F8);
PPC_FUNC_IMPL(__imp__sub_827076F8) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,26940
	ctx.r4.s64 = ctx.r11.s64 + 26940;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8233a258
	ctx.lr = 0x82707720;
	sub_8233A258(ctx, base);
	// lis r11,-2529
	ctx.r11.s64 = -165740544;
	// ori r11,r11,23970
	ctx.r11.u64 = ctx.r11.u64 | 23970;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827078a0
	if (ctx.cr6.gt) goto loc_827078A0;
	// beq cr6,0x827078f4
	if (ctx.cr6.eq) goto loc_827078F4;
	// lis r11,-15907
	ctx.r11.s64 = -1042481152;
	// ori r11,r11,20748
	ctx.r11.u64 = ctx.r11.u64 | 20748;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x827077d0
	if (ctx.cr6.gt) goto loc_827077D0;
	// beq cr6,0x827078f4
	if (ctx.cr6.eq) goto loc_827078F4;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// ori r11,r11,48948
	ctx.r11.u64 = ctx.r11.u64 | 48948;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82707858
	if (ctx.cr6.eq) goto loc_82707858;
	// lis r11,-30770
	ctx.r11.s64 = -2016542720;
	// ori r11,r11,19939
	ctx.r11.u64 = ctx.r11.u64 | 19939;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82707858
	if (ctx.cr6.eq) goto loc_82707858;
	// lis r11,-21927
	ctx.r11.s64 = -1437007872;
	// ori r11,r11,51721
	ctx.r11.u64 = ctx.r11.u64 | 51721;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827077ac
	if (ctx.cr6.eq) goto loc_827077AC;
	// lis r11,-20312
	ctx.r11.s64 = -1331167232;
	// ori r11,r11,12433
	ctx.r11.u64 = ctx.r11.u64 | 12433;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827079fc
	if (!ctx.cr6.eq) goto loc_827079FC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-612
	ctx.r4.s64 = ctx.r11.s64 + -612;
	// bl 0x8233a258
	ctx.lr = 0x82707798;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x827077A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// b 0x827079f8
	goto loc_827079F8;
loc_827077AC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-380
	ctx.r4.s64 = ctx.r11.s64 + -380;
	// bl 0x8233a258
	ctx.lr = 0x827077BC;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x827077C8;
	sub_82400B48(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x827079f8
	goto loc_827079F8;
loc_827077D0:
	// lis r11,-15069
	ctx.r11.s64 = -987561984;
	// ori r11,r11,10327
	ctx.r11.u64 = ctx.r11.u64 | 10327;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8270787c
	if (ctx.cr6.eq) goto loc_8270787C;
	// lis r11,-9000
	ctx.r11.s64 = -589824000;
	// ori r11,r11,41966
	ctx.r11.u64 = ctx.r11.u64 | 41966;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82707858
	if (ctx.cr6.eq) goto loc_82707858;
	// lis r11,-8461
	ctx.r11.s64 = -554500096;
	// ori r11,r11,4130
	ctx.r11.u64 = ctx.r11.u64 | 4130;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82707834
	if (ctx.cr6.eq) goto loc_82707834;
	// lis r11,-7801
	ctx.r11.s64 = -511246336;
	// ori r11,r11,39498
	ctx.r11.u64 = ctx.r11.u64 | 39498;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827079fc
	if (!ctx.cr6.eq) goto loc_827079FC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-504
	ctx.r4.s64 = ctx.r11.s64 + -504;
	// bl 0x8233a258
	ctx.lr = 0x82707820;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x8270782C;
	sub_82400B48(ctx, base);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// b 0x827079f8
	goto loc_827079F8;
loc_82707834:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-404
	ctx.r4.s64 = ctx.r11.s64 + -404;
	// bl 0x8233a258
	ctx.lr = 0x82707844;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707850;
	sub_82400B48(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// b 0x827079f8
	goto loc_827079F8;
loc_82707858:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-524
	ctx.r4.s64 = ctx.r11.s64 + -524;
	// bl 0x8233a258
	ctx.lr = 0x82707868;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707874;
	sub_82400B48(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// b 0x827079f8
	goto loc_827079F8;
loc_8270787C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-428
	ctx.r4.s64 = ctx.r11.s64 + -428;
	// bl 0x8233a258
	ctx.lr = 0x8270788C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707898;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x827079f8
	goto loc_827079F8;
loc_827078A0:
	// lis r11,7861
	ctx.r11.s64 = 515178496;
	// ori r11,r11,20314
	ctx.r11.u64 = ctx.r11.u64 | 20314;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82707960
	if (ctx.cr6.gt) goto loc_82707960;
	// beq cr6,0x8270793c
	if (ctx.cr6.eq) goto loc_8270793C;
	// lis r11,-1250
	ctx.r11.s64 = -81920000;
	// ori r11,r11,47279
	ctx.r11.u64 = ctx.r11.u64 | 47279;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82707918
	if (ctx.cr6.eq) goto loc_82707918;
	// lis r11,-764
	ctx.r11.s64 = -50069504;
	// ori r11,r11,46735
	ctx.r11.u64 = ctx.r11.u64 | 46735;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8270793c
	if (ctx.cr6.eq) goto loc_8270793C;
	// lis r11,-271
	ctx.r11.s64 = -17760256;
	// ori r11,r11,43299
	ctx.r11.u64 = ctx.r11.u64 | 43299;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8270793c
	if (ctx.cr6.eq) goto loc_8270793C;
	// lis r11,6888
	ctx.r11.s64 = 451411968;
	// ori r11,r11,42758
	ctx.r11.u64 = ctx.r11.u64 | 42758;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827079fc
	if (!ctx.cr6.eq) goto loc_827079FC;
loc_827078F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// bl 0x8233a258
	ctx.lr = 0x82707904;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707910;
	sub_82400B48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x827079f8
	goto loc_827079F8;
loc_82707918:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-456
	ctx.r4.s64 = ctx.r11.s64 + -456;
	// bl 0x8233a258
	ctx.lr = 0x82707928;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707934;
	sub_82400B48(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x827079f8
	goto loc_827079F8;
loc_8270793C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-560
	ctx.r4.s64 = ctx.r11.s64 + -560;
	// bl 0x8233a258
	ctx.lr = 0x8270794C;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x82707958;
	sub_82400B48(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// b 0x827079f8
	goto loc_827079F8;
loc_82707960:
	// lis r11,10264
	ctx.r11.s64 = 672661504;
	// ori r11,r11,58711
	ctx.r11.u64 = ctx.r11.u64 | 58711;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827079d8
	if (ctx.cr6.eq) goto loc_827079D8;
	// lis r11,13574
	ctx.r11.s64 = 889585664;
	// ori r11,r11,56103
	ctx.r11.u64 = ctx.r11.u64 | 56103;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x827079b4
	if (ctx.cr6.eq) goto loc_827079B4;
	// lis r11,30869
	ctx.r11.s64 = 2023030784;
	// ori r11,r11,22201
	ctx.r11.u64 = ctx.r11.u64 | 22201;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x827079fc
	if (!ctx.cr6.eq) goto loc_827079FC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-480
	ctx.r4.s64 = ctx.r11.s64 + -480;
	// bl 0x8233a258
	ctx.lr = 0x827079A0;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x827079AC;
	sub_82400B48(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x827079f8
	goto loc_827079F8;
loc_827079B4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-588
	ctx.r4.s64 = ctx.r11.s64 + -588;
	// bl 0x8233a258
	ctx.lr = 0x827079C4;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x827079D0;
	sub_82400B48(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// b 0x827079f8
	goto loc_827079F8;
loc_827079D8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-636
	ctx.r4.s64 = ctx.r11.s64 + -636;
	// bl 0x8233a258
	ctx.lr = 0x827079E8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82400b48
	ctx.lr = 0x827079F4;
	sub_82400B48(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
loc_827079F8:
	// bl 0x82333960
	ctx.lr = 0x827079FC;
	sub_82333960(ctx, base);
loc_827079FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

__attribute__((alias("__imp__sub_82707A18"))) PPC_WEAK_FUNC(sub_82707A18);
PPC_FUNC_IMPL(__imp__sub_82707A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82707A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,6172(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6172);
	// lwz r30,6168(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6168);
	// bl 0x82707510
	ctx.lr = 0x82707A34;
	sub_82707510(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82707610
	ctx.lr = 0x82707A3C;
	sub_82707610(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82707a50
	if (ctx.cr6.eq) goto loc_82707A50;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82707A50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82707a64
	if (ctx.cr6.eq) goto loc_82707A64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82707A64:
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
loc_82707A70:
	// lwz r30,6148(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6148);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x82707a80
	if (!ctx.cr6.eq) goto loc_82707A80;
	// lwz r30,6152(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6152);
loc_82707A80:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82707bd0
	if (ctx.cr6.eq) goto loc_82707BD0;
	// lwz r3,1748(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82707aa8
	if (ctx.cr6.eq) goto loc_82707AA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707AA8:
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r25,84(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r24,1164(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1164);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82707ae8
	if (!ctx.cr6.gt) goto loc_82707AE8;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// b 0x82707bbc
	goto loc_82707BBC;
loc_82707AE8:
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82707b88
	if (!ctx.cr6.eq) goto loc_82707B88;
	// lwz r26,1160(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1160);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707B0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 964);
	// addi r27,r25,948
	ctx.r27.s64 = ctx.r25.s64 + 948;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82707b68
	if (!ctx.cr6.gt) goto loc_82707B68;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82707B24:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82707b54
	if (!ctx.cr6.eq) goto loc_82707B54;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82707B4C;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_82707B54:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82707b24
	if (ctx.cr6.lt) goto loc_82707B24;
loc_82707B68:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707B88:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82707bbc
	if (!ctx.cr0.eq) goto loc_82707BBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707BA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82707bbc
	if (ctx.cr0.eq) goto loc_82707BBC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r25,924
	ctx.r3.s64 = ctx.r25.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82707BBC;
	sub_82410060(ctx, base);
loc_82707BBC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707BD0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// blt cr6,0x82707a70
	if (ctx.cr6.lt) goto loc_82707A70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82707d88
	ctx.lr = 0x82707BE4;
	sub_82707D88(ctx, base);
	// stw r23,6164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6164, ctx.r23.u32);
	// stw r23,6152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6152, ctx.r23.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r23,6148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6148, ctx.r23.u32);
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x82707BFC;
	sub_829BD428(ctx, base);
	// lwz r3,6152(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6152);
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x829bd428
	ctx.lr = 0x82707C08;
	sub_829BD428(ctx, base);
	// stw r23,6168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6168, ctx.r23.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r23,6172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6172, ctx.r23.u32);
	// addi r3,r11,-652
	ctx.r3.s64 = ctx.r11.s64 + -652;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82707C20;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r31,1784(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82707C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82707C68"))) PPC_WEAK_FUNC(sub_82707C68);
PPC_FUNC_IMPL(__imp__sub_82707C68) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x82707C8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82707cc8
	if (ctx.cr0.eq) goto loc_82707CC8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r5,2236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// beq cr6,0x82707cb0
	if (ctx.cr6.eq) goto loc_82707CB0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82707cb4
	goto loc_82707CB4;
loc_82707CB0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82707CB4:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82647558
	ctx.lr = 0x82707CC0;
	sub_82647558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82707ccc
	goto loc_82707CCC;
loc_82707CC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82707CCC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82707CDC;
	sub_82833A30(ctx, base);
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

__attribute__((alias("__imp__sub_82707CF8"))) PPC_WEAK_FUNC(sub_82707CF8);
PPC_FUNC_IMPL(__imp__sub_82707CF8) {
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
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82833108
	ctx.lr = 0x82707D1C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82707d58
	if (ctx.cr0.eq) goto loc_82707D58;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r5,2236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2236);
	// beq cr6,0x82707d40
	if (ctx.cr6.eq) goto loc_82707D40;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82707d44
	goto loc_82707D44;
loc_82707D40:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82707D44:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82647558
	ctx.lr = 0x82707D50;
	sub_82647558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82707d5c
	goto loc_82707D5C;
loc_82707D58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82707D5C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82707D6C;
	sub_82833A30(ctx, base);
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

__attribute__((alias("__imp__sub_82707D88"))) PPC_WEAK_FUNC(sub_82707D88);
PPC_FUNC_IMPL(__imp__sub_82707D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82707D90;
	__savegprlr_25(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
loc_82707DA4:
	// lwz r29,6168(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6168);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// lwz r11,6148(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6148);
	// bne cr6,0x82707dbc
	if (!ctx.cr6.eq) goto loc_82707DBC;
	// lwz r11,6152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6152);
	// lwz r29,6172(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6172);
loc_82707DBC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707e9c
	if (ctx.cr6.eq) goto loc_82707E9C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82707e9c
	if (ctx.cr6.eq) goto loc_82707E9C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r29,560
	ctx.r28.s64 = ctx.r29.s64 + 560;
loc_82707DD4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82682100
	ctx.lr = 0x82707DE4;
	sub_82682100(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82707df8
	if (ctx.cr6.eq) goto loc_82707DF8;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82707dfc
	goto loc_82707DFC;
loc_82707DF8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82707DFC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409058
	ctx.lr = 0x82707E04;
	sub_82409058(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x828166e0
	ctx.lr = 0x82707E10;
	sub_828166E0(ctx, base);
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82707e2c
	if (ctx.cr6.eq) goto loc_82707E2C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82707e2c
	if (ctx.cr6.eq) goto loc_82707E2C;
	// bl 0x82332db8
	ctx.lr = 0x82707E2C;
	sub_82332DB8(ctx, base);
loc_82707E2C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82707E34;
	sub_82333960(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82707E40;
	sub_823339B8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82707e54
	if (!ctx.cr6.eq) goto loc_82707E54;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82707E54:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bgt cr6,0x82707e64
	if (ctx.cr6.gt) goto loc_82707E64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82707E64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82707E6C;
	sub_82333960(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82707e8c
	if (ctx.cr0.eq) goto loc_82707E8C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,24
	ctx.r28.s64 = ctx.r28.s64 + 24;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82707dd4
	if (ctx.cr6.lt) goto loc_82707DD4;
loc_82707E9C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82707da4
	if (ctx.cr6.lt) goto loc_82707DA4;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82707EB0"))) PPC_WEAK_FUNC(sub_82707EB0);
PPC_FUNC_IMPL(__imp__sub_82707EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82707EB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lwz r4,6148(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8270802c
	if (ctx.cr6.eq) goto loc_8270802C;
	// lwz r3,1748(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82707ef0
	if (ctx.cr6.eq) goto loc_82707EF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707EF0:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r28,6148(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707F18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82707f34
	if (!ctx.cr6.gt) goto loc_82707F34;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x82708008
	goto loc_82708008;
loc_82707F34:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82707fd4
	if (!ctx.cr6.eq) goto loc_82707FD4;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82707fb4
	if (!ctx.cr6.gt) goto loc_82707FB4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82707F70:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82707fa0
	if (!ctx.cr6.eq) goto loc_82707FA0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82707F98;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82707FA0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82707f70
	if (ctx.cr6.lt) goto loc_82707F70;
loc_82707FB4:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707FD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82707FD4:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82708008
	if (!ctx.cr0.eq) goto loc_82708008;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82707FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82708008
	if (ctx.cr0.eq) goto loc_82708008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x82708008;
	sub_82410060(ctx, base);
loc_82708008:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270801C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// lwz r3,6148(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6148);
	// bl 0x829bd428
	ctx.lr = 0x82708028;
	sub_829BD428(ctx, base);
	// stw r22,6148(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6148, ctx.r22.u32);
loc_8270802C:
	// lwz r4,6152(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82708190
	if (ctx.cr6.eq) goto loc_82708190;
	// lwz r3,1748(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1748);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82708054
	if (ctx.cr6.eq) goto loc_82708054;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82708054:
	// lwz r11,13024(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r28,6152(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270807C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82708098
	if (!ctx.cr6.gt) goto loc_82708098;
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// b 0x8270816c
	goto loc_8270816C;
loc_82708098:
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82708138
	if (!ctx.cr6.eq) goto loc_82708138;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827080BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82708118
	if (!ctx.cr6.gt) goto loc_82708118;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_827080D4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82708104
	if (!ctx.cr6.eq) goto loc_82708104;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827080FC;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_82708104:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827080d4
	if (ctx.cr6.lt) goto loc_827080D4;
loc_82708118:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82708138:
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270816c
	if (!ctx.cr0.eq) goto loc_8270816C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270816c
	if (ctx.cr0.eq) goto loc_8270816C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8270816C;
	sub_82410060(ctx, base);
loc_8270816C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// lwz r3,6152(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 6152);
	// bl 0x829bd428
	ctx.lr = 0x8270818C;
	sub_829BD428(ctx, base);
	// stw r22,6152(r24)
	PPC_STORE_U32(ctx.r24.u32 + 6152, ctx.r22.u32);
loc_82708190:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708198"))) PPC_WEAK_FUNC(sub_82708198);
PPC_FUNC_IMPL(__imp__sub_82708198) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,6148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827081ac
	if (!ctx.cr6.eq) goto loc_827081AC;
	// stw r11,6148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6148, ctx.r11.u32);
loc_827081AC:
	// lwz r10,6152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6152);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,6152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6152, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827081C0"))) PPC_WEAK_FUNC(sub_827081C0);
PPC_FUNC_IMPL(__imp__sub_827081C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704e08
	sub_82704E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081C8"))) PPC_WEAK_FUNC(sub_827081C8);
PPC_FUNC_IMPL(__imp__sub_827081C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82704b68
	sub_82704B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081D0"))) PPC_WEAK_FUNC(sub_827081D0);
PPC_FUNC_IMPL(__imp__sub_827081D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82705030
	sub_82705030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081D8"))) PPC_WEAK_FUNC(sub_827081D8);
PPC_FUNC_IMPL(__imp__sub_827081D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704f18
	sub_82704F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081E0"))) PPC_WEAK_FUNC(sub_827081E0);
PPC_FUNC_IMPL(__imp__sub_827081E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704c78
	sub_82704C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081E8"))) PPC_WEAK_FUNC(sub_827081E8);
PPC_FUNC_IMPL(__imp__sub_827081E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704aa0
	sub_82704AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081F0"))) PPC_WEAK_FUNC(sub_827081F0);
PPC_FUNC_IMPL(__imp__sub_827081F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82704b68
	sub_82704B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827081F8"))) PPC_WEAK_FUNC(sub_827081F8);
PPC_FUNC_IMPL(__imp__sub_827081F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82704e08
	sub_82704E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708200"))) PPC_WEAK_FUNC(sub_82708200);
PPC_FUNC_IMPL(__imp__sub_82708200) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82705030
	sub_82705030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708208"))) PPC_WEAK_FUNC(sub_82708208);
PPC_FUNC_IMPL(__imp__sub_82708208) {
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
	// bl 0x828adc70
	ctx.lr = 0x82708220;
	sub_828ADC70(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82708268"))) PPC_WEAK_FUNC(sub_82708268);
PPC_FUNC_IMPL(__imp__sub_82708268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82708270;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// ori r27,r5,2
	ctx.r27.u64 = ctx.r5.u64 | 2;
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x827082b4
	if (ctx.cr6.lt) goto loc_827082B4;
	// beq cr6,0x827082ac
	if (ctx.cr6.eq) goto loc_827082AC;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x827082b8
	goto loc_827082B8;
loc_827082AC:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x827082b8
	goto loc_827082B8;
loc_827082B4:
	// li r30,1
	ctx.r30.s64 = 1;
loc_827082B8:
	// bl 0x824113a0
	ctx.lr = 0x827082BC;
	sub_824113A0(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r10,240(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c87d0
	ctx.lr = 0x827082F4;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82708334
	if (ctx.cr0.eq) goto loc_82708334;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// lwz r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r9,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r9.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r11.u32);
loc_82708334:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708340"))) PPC_WEAK_FUNC(sub_82708340);
PPC_FUNC_IMPL(__imp__sub_82708340) {
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
	// bl 0x828ae3f0
	ctx.lr = 0x82708358;
	sub_828AE3F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270836C;
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

__attribute__((alias("__imp__sub_82708380"))) PPC_WEAK_FUNC(sub_82708380);
PPC_FUNC_IMPL(__imp__sub_82708380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82708390"))) PPC_WEAK_FUNC(sub_82708390);
PPC_FUNC_IMPL(__imp__sub_82708390) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827083c8
	if (ctx.cr6.eq) goto loc_827083C8;
	// bl 0x823aca58
	ctx.lr = 0x827083B8;
	sub_823ACA58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827083c8
	if (!ctx.cr6.eq) goto loc_827083C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827083d4
	goto loc_827083D4;
loc_827083C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x827083D4;
	sub_824001E8(ctx, base);
loc_827083D4:
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

__attribute__((alias("__imp__sub_827083F0"))) PPC_WEAK_FUNC(sub_827083F0);
PPC_FUNC_IMPL(__imp__sub_827083F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823aca58
	sub_823ACA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827083F8"))) PPC_WEAK_FUNC(sub_827083F8);
PPC_FUNC_IMPL(__imp__sub_827083F8) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x82708414;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82708428
	if (ctx.cr0.eq) goto loc_82708428;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82708490
	ctx.lr = 0x82708424;
	sub_82708490(ctx, base);
	// b 0x8270842c
	goto loc_8270842C;
loc_82708428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270842C:
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

__attribute__((alias("__imp__sub_82708440"))) PPC_WEAK_FUNC(sub_82708440);
PPC_FUNC_IMPL(__imp__sub_82708440) {
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
	// bl 0x823aca58
	ctx.lr = 0x82708460;
	sub_823ACA58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82708474
	if (ctx.cr6.eq) goto loc_82708474;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x82708474;
	sub_82400188(ctx, base);
loc_82708474:
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

__attribute__((alias("__imp__sub_82708490"))) PPC_WEAK_FUNC(sub_82708490);
PPC_FUNC_IMPL(__imp__sub_82708490) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823fffc8
	ctx.lr = 0x827084B0;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,6992
	ctx.r11.s64 = ctx.r11.s64 + 6992;
	// addi r10,r10,8036
	ctx.r10.s64 = ctx.r10.s64 + 8036;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// lwz r11,1556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lfs f0,1588(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// lfs f0,1592(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// lfs f0,1596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
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

__attribute__((alias("__imp__sub_82708550"))) PPC_WEAK_FUNC(sub_82708550);
PPC_FUNC_IMPL(__imp__sub_82708550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82708558;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270b320
	ctx.lr = 0x82708568;
	sub_8270B320(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r7,6992
	ctx.r7.s64 = ctx.r7.s64 + 6992;
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r6,8036
	ctx.r9.s64 = ctx.r6.s64 + 8036;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r10,18524
	ctx.r10.s64 = ctx.r10.s64 + 18524;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f13,-24640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24640);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,1592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
	// stfs f0,1508(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stfs f0,1596(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1596, temp.u32);
	// stw r11,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r11.u32);
	// lwz r10,1420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stfs f13,1588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// lwz r9,1204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1204);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r5,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r5.u32);
	// stw r6,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r6.u32);
	// stw r29,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r29.u32);
	// stw r10,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r10.u32);
	// stw r4,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r4.u32);
	// stw r3,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r3.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// bne cr6,0x82708634
	if (!ctx.cr6.eq) goto loc_82708634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3628
	ctx.lr = 0x82708634;
	sub_829C3628(ctx, base);
loc_82708634:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82708644;
	sub_8233A258(ctx, base);
	// lis r4,4194
	ctx.r4.s64 = 274857984;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,62340
	ctx.r4.u64 = ctx.r4.u64 | 62340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82708658;
	sub_829C3740(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708668"))) PPC_WEAK_FUNC(sub_82708668);
PPC_FUNC_IMPL(__imp__sub_82708668) {
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
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827086bc
	if (ctx.cr6.eq) goto loc_827086BC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r5,r11,6944
	ctx.r5.s64 = ctx.r11.s64 + 6944;
	// addi r4,r10,9716
	ctx.r4.s64 = ctx.r10.s64 + 9716;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r31,1592
	ctx.r6.s64 = ctx.r31.s64 + 1592;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828c5740
	ctx.lr = 0x827086B8;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_827086BC:
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827086d8
	if (ctx.cr6.eq) goto loc_827086D8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x827086d8
	if (ctx.cr6.eq) goto loc_827086D8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x827086f0
	if (!ctx.cr6.eq) goto loc_827086F0;
loc_827086D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827086EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_827086F0:
	// lis r5,25019
	ctx.r5.s64 = 1639645184;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43296
	ctx.r5.u64 = ctx.r5.u64 | 43296;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270870C;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270ba30
	ctx.lr = 0x82708714;
	sub_8270BA30(ctx, base);
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

__attribute__((alias("__imp__sub_82708730"))) PPC_WEAK_FUNC(sub_82708730);
PPC_FUNC_IMPL(__imp__sub_82708730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1592(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,1508(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1508, temp.u32);
	// stfs f0,696(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 696, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82708750"))) PPC_WEAK_FUNC(sub_82708750);
PPC_FUNC_IMPL(__imp__sub_82708750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82708760"))) PPC_WEAK_FUNC(sub_82708760);
PPC_FUNC_IMPL(__imp__sub_82708760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82708768;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82708798
	if (ctx.cr6.eq) goto loc_82708798;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82708798
	if (ctx.cr6.eq) goto loc_82708798;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827088bc
	if (!ctx.cr6.eq) goto loc_827088BC;
loc_82708798:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// lwz r8,1564(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,1560(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,1568(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// lfs f13,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,6980
	ctx.r3.s64 = ctx.r7.s64 + 6980;
	// lfs f12,1568(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r11,r31,1560
	ctx.r11.s64 = ctx.r31.s64 + 1560;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x827087F4;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,128
	ctx.r5.s64 = 128;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x8270882C;
	sub_82708268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r3.u32);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82708860
	if (ctx.cr6.eq) goto loc_82708860;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82708864
	goto loc_82708864;
loc_82708860:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82708864:
	// lwz r30,1584(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r29,1572(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1572);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,1580(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,1556(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x827088B0;
	sub_82331120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1552(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// bl 0x8281d650
	ctx.lr = 0x827088BC;
	sub_8281D650(ctx, base);
loc_827088BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827088C8"))) PPC_WEAK_FUNC(sub_827088C8);
PPC_FUNC_IMPL(__imp__sub_827088C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827088D0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82708908;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82708928
	if (ctx.cr0.eq) goto loc_82708928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8270892c
	goto loc_8270892C;
loc_82708928:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8270892C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,696(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82708ab0
	if (!ctx.cr6.gt) goto loc_82708AB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82708ab0
	if (ctx.cr6.eq) goto loc_82708AB0;
	// lwz r11,2512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82708ab0
	if (!ctx.cr6.eq) goto loc_82708AB0;
	// lwz r11,4104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82708ab0
	if (!ctx.cr6.eq) goto loc_82708AB0;
	// lwz r11,924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82708ab0
	if (ctx.cr6.eq) goto loc_82708AB0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8270897C;
	sub_8233A258(ctx, base);
	// lis r4,4086
	ctx.r4.s64 = 267780096;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,23216
	ctx.r4.u64 = ctx.r4.u64 | 23216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82708990;
	sub_829C3740(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827089AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-466
	ctx.r8.s64 = -30539776;
	// lfs f13,24000(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// ori r8,r8,47604
	ctx.r8.u64 = ctx.r8.u64 | 47604;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f2,1596(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lwz r4,1556(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x824e4258
	ctx.lr = 0x82708A10;
	sub_824E4258(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17792
	ctx.r3.s64 = ctx.r11.s64 + -17792;
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r11,660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r31,664(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82708A30;
	sub_82816528(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldicr r10,r31,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82708A64;
	sub_8242F058(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82708a94
	if (ctx.cr0.eq) goto loc_82708A94;
	// bl 0x823aca58
	ctx.lr = 0x82708A70;
	sub_823ACA58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82708A88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82708a98
	if (!ctx.cr0.eq) goto loc_82708A98;
loc_82708A94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82708A98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82708ab0
	if (ctx.cr6.eq) goto loc_82708AB0;
	// lwz r10,1556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	// lfs f0,1596(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1596(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1596, temp.u32);
	// stw r10,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r10.u32);
loc_82708AB0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8270b910
	ctx.lr = 0x82708AC4;
	sub_8270B910(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708AD0"))) PPC_WEAK_FUNC(sub_82708AD0);
PPC_FUNC_IMPL(__imp__sub_82708AD0) {
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
	// bl 0x828ade00
	ctx.lr = 0x82708AE8;
	sub_828ADE00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c36c0
	ctx.lr = 0x82708AF0;
	sub_829C36C0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f390
	ctx.lr = 0x82708B00;
	sub_8242F390(ctx, base);
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

__attribute__((alias("__imp__sub_82708B18"))) PPC_WEAK_FUNC(sub_82708B18);
PPC_FUNC_IMPL(__imp__sub_82708B18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82708440
	sub_82708440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708B20"))) PPC_WEAK_FUNC(sub_82708B20);
PPC_FUNC_IMPL(__imp__sub_82708B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82708B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82708b84
	if (ctx.cr6.eq) goto loc_82708B84;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,13860
	ctx.r31.s64 = ctx.r11.s64 + 13860;
	// lwz r11,13856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82708b74
	if (!ctx.cr0.eq) goto loc_82708B74;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8288
	ctx.r9.s64 = ctx.r9.s64 + 8288;
	// stw r11,13856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// bl 0x82a4c758
	ctx.lr = 0x82708B74;
	sub_82A4C758(ctx, base);
loc_82708B74:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82708b84
	if (!ctx.cr6.eq) goto loc_82708B84;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82708b90
	goto loc_82708B90;
loc_82708B84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82708B90;
	sub_82339EE8(ctx, base);
loc_82708B90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708B98"))) PPC_WEAK_FUNC(sub_82708B98);
PPC_FUNC_IMPL(__imp__sub_82708B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82708BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13860
	ctx.r31.s64 = ctx.r11.s64 + 13860;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,13856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82708be4
	if (!ctx.cr0.eq) goto loc_82708BE4;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,8288
	ctx.r9.s64 = ctx.r9.s64 + 8288;
	// stw r11,13856(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13856, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,30048
	ctx.r3.s64 = ctx.r11.s64 + 30048;
	// bl 0x82a4c758
	ctx.lr = 0x82708BE4;
	sub_82A4C758(ctx, base);
loc_82708BE4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82708bf8
	if (ctx.cr6.eq) goto loc_82708BF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82708BF8;
	sub_82339D80(ctx, base);
loc_82708BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708C00"))) PPC_WEAK_FUNC(sub_82708C00);
PPC_FUNC_IMPL(__imp__sub_82708C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17264
	ctx.r3.s64 = ctx.r11.s64 + -17264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82708C10"))) PPC_WEAK_FUNC(sub_82708C10);
PPC_FUNC_IMPL(__imp__sub_82708C10) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82708c48
	if (ctx.cr6.eq) goto loc_82708C48;
	// bl 0x823ae308
	ctx.lr = 0x82708C38;
	sub_823AE308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82708c48
	if (!ctx.cr6.eq) goto loc_82708C48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82708c54
	goto loc_82708C54;
loc_82708C48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823fc648
	ctx.lr = 0x82708C54;
	sub_823FC648(ctx, base);
loc_82708C54:
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

__attribute__((alias("__imp__sub_82708C70"))) PPC_WEAK_FUNC(sub_82708C70);
PPC_FUNC_IMPL(__imp__sub_82708C70) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ae308
	sub_823AE308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708C78"))) PPC_WEAK_FUNC(sub_82708C78);
PPC_FUNC_IMPL(__imp__sub_82708C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f6300
	sub_823F6300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82708C80"))) PPC_WEAK_FUNC(sub_82708C80);
PPC_FUNC_IMPL(__imp__sub_82708C80) {
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
	// li r3,1504
	ctx.r3.s64 = 1504;
	// bl 0x82833108
	ctx.lr = 0x82708C9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82708cb0
	if (ctx.cr0.eq) goto loc_82708CB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82708d28
	ctx.lr = 0x82708CAC;
	sub_82708D28(ctx, base);
	// b 0x82708cb4
	goto loc_82708CB4;
loc_82708CB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82708CB4:
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

__attribute__((alias("__imp__sub_82708CC8"))) PPC_WEAK_FUNC(sub_82708CC8);
PPC_FUNC_IMPL(__imp__sub_82708CC8) {
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
	// bl 0x823ae308
	ctx.lr = 0x82708CE8;
	sub_823AE308(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82708cf8
	if (!ctx.cr6.eq) goto loc_82708CF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82708d10
	goto loc_82708D10;
loc_82708CF8:
	// bl 0x823f6300
	ctx.lr = 0x82708CFC;
	sub_823F6300(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82708d10
	if (ctx.cr6.eq) goto loc_82708D10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823fc2e8
	ctx.lr = 0x82708D10;
	sub_823FC2E8(ctx, base);
loc_82708D10:
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

__attribute__((alias("__imp__sub_82708D28"))) PPC_WEAK_FUNC(sub_82708D28);
PPC_FUNC_IMPL(__imp__sub_82708D28) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823fc168
	ctx.lr = 0x82708D48;
	sub_823FC168(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-23120
	ctx.r11.s64 = ctx.r11.s64 + -23120;
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// lwz r8,1424(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// addi r11,r11,8312
	ctx.r11.s64 = ctx.r11.s64 + 8312;
	// stw r8,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r8.u32);
	// addi r10,r10,9336
	ctx.r10.s64 = ctx.r10.s64 + 9336;
	// lwz r8,1428(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// addi r9,r9,9388
	ctx.r9.s64 = ctx.r9.s64 + 9388;
	// stw r8,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r8.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1476
	ctx.r4.s64 = ctx.r30.s64 + 1476;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,1440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// stw r11,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r11.u32);
	// lwz r11,1444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1444);
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// lwz r11,1448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// stw r11,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r11.u32);
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// stw r11,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r11.u32);
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// lwz r11,1460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// lwz r11,1464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// stw r11,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r11.u32);
	// lfs f0,1468(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
	// bl 0x82873b58
	ctx.lr = 0x82708DF4;
	sub_82873B58(ctx, base);
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

__attribute__((alias("__imp__sub_82708E10"))) PPC_WEAK_FUNC(sub_82708E10);
PPC_FUNC_IMPL(__imp__sub_82708E10) {
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
	// addi r3,r31,1476
	ctx.r3.s64 = ctx.r31.s64 + 1476;
	// bl 0x8239d768
	ctx.lr = 0x82708E34;
	sub_8239D768(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,11024
	ctx.r11.s64 = ctx.r11.s64 + 11024;
	// addi r10,r10,12036
	ctx.r10.s64 = ctx.r10.s64 + 12036;
	// addi r9,r9,12088
	ctx.r9.s64 = ctx.r9.s64 + 12088;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x82708E60;
	sub_829BC9E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82708e70
	if (ctx.cr0.eq) goto loc_82708E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82708E70;
	sub_82332DB8(ctx, base);
loc_82708E70:
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

__attribute__((alias("__imp__sub_82708E90"))) PPC_WEAK_FUNC(sub_82708E90);
PPC_FUNC_IMPL(__imp__sub_82708E90) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20264
	ctx.r11.s64 = ctx.r11.s64 + -20264;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82708efc
	if (!ctx.cr6.gt) goto loc_82708EFC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82708ECC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82708eec
	if (ctx.cr6.eq) goto loc_82708EEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82708ecc
	if (ctx.cr6.lt) goto loc_82708ECC;
	// b 0x82708efc
	goto loc_82708EFC;
loc_82708EEC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82708EFC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82708f24
	if (ctx.cr6.eq) goto loc_82708F24;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82708F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82708f28
	goto loc_82708F28;
loc_82708F24:
	// bl 0x828adaa0
	ctx.lr = 0x82708F28;
	sub_828ADAA0(ctx, base);
loc_82708F28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82708F38"))) PPC_WEAK_FUNC(sub_82708F38);
PPC_FUNC_IMPL(__imp__sub_82708F38) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20264
	ctx.r11.s64 = ctx.r11.s64 + -20264;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82708f98
	if (!ctx.cr6.gt) goto loc_82708F98;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82708F64:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82708f84
	if (ctx.cr6.eq) goto loc_82708F84;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82708f64
	if (ctx.cr6.lt) goto loc_82708F64;
	// b 0x82708f98
	goto loc_82708F98;
loc_82708F84:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82708fa0
	if (!ctx.cr6.eq) goto loc_82708FA0;
loc_82708F98:
	// bl 0x828adb48
	ctx.lr = 0x82708F9C;
	sub_828ADB48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82708FA0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82708FB8"))) PPC_WEAK_FUNC(sub_82708FB8);
PPC_FUNC_IMPL(__imp__sub_82708FB8) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-20264
	ctx.r11.s64 = ctx.r11.s64 + -20264;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82709038
	if (!ctx.cr6.gt) goto loc_82709038;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82708FF4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82709014
	if (ctx.cr6.eq) goto loc_82709014;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82708ff4
	if (ctx.cr6.lt) goto loc_82708FF4;
	// b 0x82709038
	goto loc_82709038;
loc_82709014:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82709044
	if (!ctx.cr0.eq) goto loc_82709044;
loc_82709038:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828adbc8
	ctx.lr = 0x82709044;
	sub_828ADBC8(ctx, base);
loc_82709044:
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

__attribute__((alias("__imp__sub_82709060"))) PPC_WEAK_FUNC(sub_82709060);
PPC_FUNC_IMPL(__imp__sub_82709060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82709068;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82708208
	ctx.lr = 0x82709078;
	sub_82708208(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lfs f0,18508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18508);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lfs f12,20040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20040);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lfs f13,-11424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11424);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f11,16800(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16800);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r7,8312
	ctx.r7.s64 = ctx.r7.s64 + 8312;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r10,9388
	ctx.r10.s64 = ctx.r10.s64 + 9388;
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lis r3,22125
	ctx.r3.s64 = 1449984000;
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// addi r27,r11,9336
	ctx.r27.s64 = ctx.r11.s64 + 9336;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// ori r7,r3,7356
	ctx.r7.u64 = ctx.r3.u64 | 7356;
	// stw r11,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r9.u32);
	// stw r11,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r11.u32);
	// lfs f13,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// stfs f13,1468(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1468, temp.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r6,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r6.u32);
	// stw r28,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r28.u32);
	// stw r4,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r4.u32);
	// stw r30,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r30.u32);
	// stw r5,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r5.u32);
	// stw r29,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709160"))) PPC_WEAK_FUNC(sub_82709160);
PPC_FUNC_IMPL(__imp__sub_82709160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82709168;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827092a8
	if (!ctx.cr6.eq) goto loc_827092A8;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827092a8
	if (!ctx.cr6.eq) goto loc_827092A8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// lwz r9,1460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lwz r7,1444(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1444);
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lwz r5,1448(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1448);
	// addi r3,r8,6980
	ctx.r3.s64 = ctx.r8.s64 + 6980;
	// lwz r30,1464(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1464);
	// ori r29,r6,128
	ctx.r29.u64 = ctx.r6.u64 | 128;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r28,1452(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// bl 0x82816528
	ctx.lr = 0x827091DC;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r8,r28,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x82709210;
	sub_82708268(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270924c
	if (ctx.cr6.eq) goto loc_8270924C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82709250
	goto loc_82709250;
loc_8270924C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82709250:
	// ld r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f4,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f4.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x8270929C;
	sub_82331120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// bl 0x8281d650
	ctx.lr = 0x827092A8;
	sub_8281D650(ctx, base);
loc_827092A8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827092B8"))) PPC_WEAK_FUNC(sub_827092B8);
PPC_FUNC_IMPL(__imp__sub_827092B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827092C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827092ec
	if (ctx.cr6.eq) goto loc_827092EC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827092ec
	if (ctx.cr6.eq) goto loc_827092EC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82709378
	if (!ctx.cr6.eq) goto loc_82709378;
loc_827092EC:
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8270930C;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270932c
	if (ctx.cr0.eq) goto loc_8270932C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82709330
	goto loc_82709330;
loc_8270932C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82709330:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82709388
	ctx.lr = 0x8270933C;
	sub_82709388(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82709354
	if (ctx.cr6.eq) goto loc_82709354;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82709378
	if (!ctx.cr6.eq) goto loc_82709378;
loc_82709354:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82709364
	if (ctx.cr6.eq) goto loc_82709364;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82709368
	goto loc_82709368;
loc_82709364:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82709368:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,1476
	ctx.r3.s64 = ctx.r29.s64 + 1476;
	// bl 0x82410060
	ctx.lr = 0x82709378;
	sub_82410060(ctx, base);
loc_82709378:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709388"))) PPC_WEAK_FUNC(sub_82709388);
PPC_FUNC_IMPL(__imp__sub_82709388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82709390;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f13,1468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x827094e0
	if (!ctx.cr6.gt) goto loc_827094E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x827094e0
	if (ctx.cr6.eq) goto loc_827094E0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,9988
	ctx.r3.s64 = ctx.r11.s64 + 9988;
	// bl 0x82816528
	ctx.lr = 0x827093CC;
	sub_82816528(ctx, base);
	// addic. r11,r28,300
	ctx.xer.ca = ctx.r28.u32 > 4294966995;
	ctx.r11.s64 = ctx.r28.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// beq 0x827093f0
	if (ctx.cr0.eq) goto loc_827093F0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827093f0
	if (ctx.cr6.eq) goto loc_827093F0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x827093f4
	goto loc_827093F4;
loc_827093F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_827093F4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x829e42d8
	ctx.lr = 0x82709404;
	sub_829E42D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827094e0
	if (!ctx.cr0.eq) goto loc_827094E0;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r4,r11,-25264
	ctx.r4.s64 = ctx.r11.s64 + -25264;
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r29,r11,-25264
	ctx.r29.s64 = ctx.r11.s64 + -25264;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8270944C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x824da988
	ctx.lr = 0x82709474;
	sub_824DA988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// fsubs f11,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,16356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fadds f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f0a08
	ctx.lr = 0x827094E0;
	sub_824F0A08(ctx, base);
loc_827094E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827094F0"))) PPC_WEAK_FUNC(sub_827094F0);
PPC_FUNC_IMPL(__imp__sub_827094F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827094F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,788(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8270951c
	if (ctx.cr6.eq) goto loc_8270951C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827095ec
	if (!ctx.cr6.eq) goto loc_827095EC;
loc_8270951C:
	// lwz r11,1492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827095ec
	if (!ctx.cr6.gt) goto loc_827095EC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,8256
	ctx.r11.s64 = ctx.r11.s64 + 8256;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// stw r31,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r31.u32);
loc_8270955C:
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// bge cr6,0x827095d0
	if (!ctx.cr6.lt) goto loc_827095D0;
	// lwz r11,1488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1488);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x829b9720
	ctx.lr = 0x82709574;
	sub_829B9720(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82709590
	if (ctx.cr0.eq) goto loc_82709590;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270958C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82709594
	goto loc_82709594;
loc_82709590:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82709594:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827095a8
	if (ctx.cr6.eq) goto loc_827095A8;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_827095A8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,1476
	ctx.r3.s64 = ctx.r28.s64 + 1476;
	// bl 0x82332ca8
	ctx.lr = 0x827095C0;
	sub_82332CA8(ctx, base);
	// lwz r11,1492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8270955c
	if (ctx.cr6.gt) goto loc_8270955C;
loc_827095D0:
	// lis r5,27743
	ctx.r5.s64 = 1818165248;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1002
	ctx.r5.u64 = ctx.r5.u64 | 1002;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8282c818
	ctx.lr = 0x827095EC;
	sub_8282C818(ctx, base);
loc_827095EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827095F8"))) PPC_WEAK_FUNC(sub_827095F8);
PPC_FUNC_IMPL(__imp__sub_827095F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82709600;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828ae3f0
	ctx.lr = 0x8270960C;
	sub_828AE3F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,8088
	ctx.r3.s64 = ctx.r11.s64 + 8088;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82709640;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x82709658;
	sub_823CF190(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// ld r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82709688;
	sub_8282B1E0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r3,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r3.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827096cc
	if (!ctx.cr6.eq) goto loc_827096CC;
	// lwz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827096cc
	if (!ctx.cr6.eq) goto loc_827096CC;
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,1468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82709c60
	ctx.lr = 0x827096CC;
	sub_82709C60(ctx, base);
loc_827096CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827096D8"))) PPC_WEAK_FUNC(sub_827096D8);
PPC_FUNC_IMPL(__imp__sub_827096D8) {
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
	// stfs f1,1468(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1468, temp.u32);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-25264
	ctx.r11.s64 = ctx.r11.s64 + -25264;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82709c60
	ctx.lr = 0x82709710;
	sub_82709C60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82709720"))) PPC_WEAK_FUNC(sub_82709720);
PPC_FUNC_IMPL(__imp__sub_82709720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82709728;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r11,8140
	ctx.r3.s64 = ctx.r11.s64 + 8140;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82709744;
	sub_82816528(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82709764;
	sub_823CF190(ctx, base);
	// lwz r11,664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,656(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 656);
	// ld r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82709794;
	sub_8282B1E0(ctx, base);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827097ac
	if (ctx.cr6.eq) goto loc_827097AC;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_827097AC:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827097D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827097ec
	if (!ctx.cr6.gt) goto loc_827097EC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x827098bc
	goto loc_827098BC;
loc_827097EC:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82709888
	if (!ctx.cr6.eq) goto loc_82709888;
	// lwz r27,1160(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82709868
	if (!ctx.cr6.gt) goto loc_82709868;
loc_82709824:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82709854
	if (!ctx.cr6.eq) goto loc_82709854;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8270984C;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82709854:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82709824
	if (ctx.cr6.lt) goto loc_82709824;
loc_82709868:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82709888:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x827098bc
	if (!ctx.cr0.eq) goto loc_827098BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827098A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827098bc
	if (ctx.cr0.eq) goto loc_827098BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x827098BC;
	sub_82410060(ctx, base);
loc_827098BC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827098D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827098D8"))) PPC_WEAK_FUNC(sub_827098D8);
PPC_FUNC_IMPL(__imp__sub_827098D8) {
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
	// bl 0x829bc7b8
	ctx.lr = 0x827098F0;
	sub_829BC7B8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r31,1072
	ctx.r4.s64 = ctx.r31.s64 + 1072;
	// addi r5,r11,8192
	ctx.r5.s64 = ctx.r11.s64 + 8192;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f5fd8
	ctx.lr = 0x8270990C;
	sub_824F5FD8(ctx, base);
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

__attribute__((alias("__imp__sub_82709920"))) PPC_WEAK_FUNC(sub_82709920);
PPC_FUNC_IMPL(__imp__sub_82709920) {
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
	// bl 0x829c4e48
	ctx.lr = 0x8270993C;
	sub_829C4E48(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8270996c
	if (!ctx.cr6.eq) goto loc_8270996C;
	// addi r11,r31,1468
	ctx.r11.s64 = ctx.r31.s64 + 1468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x82709960;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_8270996C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82709988"))) PPC_WEAK_FUNC(sub_82709988);
PPC_FUNC_IMPL(__imp__sub_82709988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82709990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x829c5148
	ctx.lr = 0x827099A0;
	sub_829C5148(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82709a24
	if (!ctx.cr6.eq) goto loc_82709A24;
	// addi r30,r31,1468
	ctx.r30.s64 = ctx.r31.s64 + 1468;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x827099C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r3.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827099EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r28
	ctx.r4.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82709a24
	if (!ctx.cr0.eq) goto loc_82709A24;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82709A18;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82709A24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709A30"))) PPC_WEAK_FUNC(sub_82709A30);
PPC_FUNC_IMPL(__imp__sub_82709A30) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829c63e8
	ctx.lr = 0x82709A50;
	sub_829C63E8(ctx, base);
	// lis r11,-25995
	ctx.r11.s64 = -1703608320;
	// ori r11,r11,48405
	ctx.r11.u64 = ctx.r11.u64 | 48405;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82709a9c
	if (!ctx.cr6.eq) goto loc_82709A9C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-25264
	ctx.r4.s64 = ctx.r11.s64 + -25264;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82709a9c
	if (!ctx.cr0.eq) goto loc_82709A9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,1468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1468);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709A9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82709A9C:
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

__attribute__((alias("__imp__sub_82709AB8"))) PPC_WEAK_FUNC(sub_82709AB8);
PPC_FUNC_IMPL(__imp__sub_82709AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82709AC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// li r31,5
	ctx.r31.s64 = 5;
loc_82709AD0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709AE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82709ad0
	if (!ctx.cr0.eq) goto loc_82709AD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709B00"))) PPC_WEAK_FUNC(sub_82709B00);
PPC_FUNC_IMPL(__imp__sub_82709B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82709B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// li r30,5
	ctx.r30.s64 = 5;
loc_82709B18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82709b44
	if (ctx.cr6.eq) goto loc_82709B44;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82709388
	ctx.lr = 0x82709B44;
	sub_82709388(ctx, base);
loc_82709B44:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82709b18
	if (!ctx.cr0.eq) goto loc_82709B18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709B58"))) PPC_WEAK_FUNC(sub_82709B58);
PPC_FUNC_IMPL(__imp__sub_82709B58) {
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
	// bl 0x828ade00
	ctx.lr = 0x82709B70;
	sub_828ADE00(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1472(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282b448
	ctx.lr = 0x82709B80;
	sub_8282B448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82709BA0"))) PPC_WEAK_FUNC(sub_82709BA0);
PPC_FUNC_IMPL(__imp__sub_82709BA0) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82333900
	ctx.lr = 0x82709BB4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82709bec
	if (ctx.cr0.eq) goto loc_82709BEC;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,8256
	ctx.r9.s64 = ctx.r10.s64 + 8256;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82709bf0
	goto loc_82709BF0;
loc_82709BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82709BF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82709C00"))) PPC_WEAK_FUNC(sub_82709C00);
PPC_FUNC_IMPL(__imp__sub_82709C00) {
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
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// lwz r3,13864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13864);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82709c48
	if (!ctx.cr6.eq) goto loc_82709C48;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26432
	ctx.r3.s64 = ctx.r10.s64 + -26432;
	// bl 0x82a4c7d8
	ctx.lr = 0x82709C34;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82709C3C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82709C44;
	sub_82816528(ctx, base);
	// stw r3,13864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13864, ctx.r3.u32);
loc_82709C48:
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

__attribute__((alias("__imp__sub_82709C60"))) PPC_WEAK_FUNC(sub_82709C60);
PPC_FUNC_IMPL(__imp__sub_82709C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82709C68;
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x82709C8C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82709d24
	if (!ctx.cr0.eq) goto loc_82709D24;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82709cac
	if (!ctx.cr6.eq) goto loc_82709CAC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82709CAC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823ae308
	ctx.lr = 0x82709CB4;
	sub_823AE308(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82709CD4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82709d10
	if (ctx.cr0.eq) goto loc_82709D10;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// b 0x82709d14
	goto loc_82709D14;
loc_82709D10:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82709D14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82709D20;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82709D24:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709D40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82709D50"))) PPC_WEAK_FUNC(sub_82709D50);
PPC_FUNC_IMPL(__imp__sub_82709D50) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1020(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1020);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82709D60"))) PPC_WEAK_FUNC(sub_82709D60);
PPC_FUNC_IMPL(__imp__sub_82709D60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82708e10
	sub_82708E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709D68"))) PPC_WEAK_FUNC(sub_82709D68);
PPC_FUNC_IMPL(__imp__sub_82709D68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82708cc8
	sub_82708CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709D70"))) PPC_WEAK_FUNC(sub_82709D70);
PPC_FUNC_IMPL(__imp__sub_82709D70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82708e10
	sub_82708E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709D78"))) PPC_WEAK_FUNC(sub_82709D78);
PPC_FUNC_IMPL(__imp__sub_82709D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82709D80;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r27,0
	ctx.r27.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	// stfs f2,1552(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// stw r6,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r6.u32);
	// stfs f3,1556(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r4.u32);
	// stfs f4,1560(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// stw r10,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r10.u32);
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// stfs f5,1564(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
	// stfs f6,1584(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82709DEC;
	sub_823CF190(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ae6e8
	ctx.lr = 0x82709E04;
	sub_828AE6E8(ctx, base);
	// lwa r11,308(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 308));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwa r10,300(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 300));
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,16912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16912);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x82709e78
	if (ctx.cr6.eq) goto loc_82709E78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82709e78
	if (ctx.cr0.eq) goto loc_82709E78;
	// lwz r30,656(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 656);
	// lwz r29,660(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 660);
	// lwz r28,664(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
loc_82709E78:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f13,f30
	ctx.f13.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// fsubs f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,472(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 472);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// fdivs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82709F0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r29.u32);
	// stw r28,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r28.u32);
	// lwz r11,320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82709F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r11,r11,-22504
	ctx.r11.s64 = ctx.r11.s64 + -22504;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8270a728
	ctx.lr = 0x82709F70;
	sub_8270A728(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82709F88"))) PPC_WEAK_FUNC(sub_82709F88);
PPC_FUNC_IMPL(__imp__sub_82709F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82709F90;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82709FA8;
	sub_824090E0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lfs f30,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// beq 0x8270a010
	if (ctx.cr0.eq) goto loc_8270A010;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,7004(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6708);
	ctx.f12.f64 = double(temp.f32);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f11,7596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7596);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// fadds f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f13.u64);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f13.u64);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8270A010:
	// lfs f13,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lfs f11,1564(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,1560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,1556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r3,r10,9412
	ctx.r3.s64 = ctx.r10.s64 + 9412;
	// lwz r29,1580(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270A078;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,16584
	ctx.r5.s64 = 16584;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82708268
	ctx.lr = 0x8270A0B4;
	sub_82708268(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a0e0
	if (ctx.cr6.eq) goto loc_8270A0E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A0D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270a0e4
	goto loc_8270A0E4;
loc_8270A0E0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270A0E4:
	// lwz r11,1484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1484);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r29,1472(r31)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1472);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,1480(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1480);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,1488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8270A12C;
	sub_82331120(ctx, base);
	// lwz r11,1440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lfs f1,1584(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8270a160
	if (!ctx.cr6.eq) goto loc_8270A160;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A15C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8270a188
	goto loc_8270A188;
loc_8270A160:
	// lis r11,-32143
	ctx.r11.s64 = -2106523648;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-22488
	ctx.r11.s64 = ctx.r11.s64 + -22488;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8270a728
	ctx.lr = 0x8270A188;
	sub_8270A728(ctx, base);
loc_8270A188:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270A198"))) PPC_WEAK_FUNC(sub_8270A198);
PPC_FUNC_IMPL(__imp__sub_8270A198) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1440);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270A1A8"))) PPC_WEAK_FUNC(sub_8270A1A8);
PPC_FUNC_IMPL(__imp__sub_8270A1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8270A1B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r31,1572(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1572);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270a2f4
	if (ctx.cr6.eq) goto loc_8270A2F4;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,1164(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1164);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A1F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270a20c
	if (!ctx.cr6.gt) goto loc_8270A20C;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x8270a2e0
	goto loc_8270A2E0;
loc_8270A20C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270a2ac
	if (!ctx.cr6.eq) goto loc_8270A2AC;
	// lwz r28,1160(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270a28c
	if (!ctx.cr6.gt) goto loc_8270A28C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8270A248:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8270a278
	if (!ctx.cr6.eq) goto loc_8270A278;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8270A270;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8270A278:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8270a248
	if (ctx.cr6.lt) goto loc_8270A248;
loc_8270A28C:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270A2AC:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270a2e0
	if (!ctx.cr0.eq) goto loc_8270A2E0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270a2e0
	if (ctx.cr0.eq) goto loc_8270A2E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8270A2E0;
	sub_82410060(ctx, base);
loc_8270A2E0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270A2F4:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// lwz r27,84(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r26,1164(r27)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1164);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A318;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270a334
	if (!ctx.cr6.gt) goto loc_8270A334;
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// b 0x8270a408
	goto loc_8270A408;
loc_8270A334:
	// lwz r11,68(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8270a3d4
	if (!ctx.cr6.eq) goto loc_8270A3D4;
	// lwz r28,1160(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1160);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 964);
	// addi r29,r27,948
	ctx.r29.s64 = ctx.r27.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270a3b4
	if (!ctx.cr6.gt) goto loc_8270A3B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8270A370:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8270a3a0
	if (!ctx.cr6.eq) goto loc_8270A3A0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8270A398;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8270A3A0:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8270a370
	if (ctx.cr6.lt) goto loc_8270A370;
loc_8270A3B4:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8270A3D4:
	// lwz r11,84(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8270a408
	if (!ctx.cr0.eq) goto loc_8270A408;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A3F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8270a408
	if (ctx.cr0.eq) goto loc_8270A408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,924
	ctx.r3.s64 = ctx.r27.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8270A408;
	sub_82410060(ctx, base);
loc_8270A408:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270A428"))) PPC_WEAK_FUNC(sub_8270A428);
PPC_FUNC_IMPL(__imp__sub_8270A428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8270A430;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828ae220
	ctx.lr = 0x8270A440;
	sub_828AE220(ctx, base);
	// addi r26,r31,656
	ctx.r26.s64 = ctx.r31.s64 + 656;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f31,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x8270A454;
	sub_82817BB8(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f31
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f13,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f10,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f10.f64 = double(temp.f32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f12,f10,f7
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r8,9348
	ctx.r8.s64 = 9348;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// bl 0x82825330
	ctx.lr = 0x8270A528;
	sub_82825330(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8270a6c0
	if (!ctx.cr0.eq) goto loc_8270A6C0;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r8,1576(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x8270a6d4
	if (ctx.cr6.eq) goto loc_8270A6D4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82817bb8
	ctx.lr = 0x8270A560;
	sub_82817BB8(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-24640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f11,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsubs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// beq cr6,0x8270a600
	if (ctx.cr6.eq) goto loc_8270A600;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x8270A5BC;
	sub_82978D98(ctx, base);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x8270A5E8;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8270a6d4
	goto loc_8270A6D4;
loc_8270A600:
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x8270A608;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270a61c
	if (ctx.cr0.eq) goto loc_8270A61C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x8270A618;
	sub_828ADC70(ctx, base);
	// b 0x8270a620
	goto loc_8270A620;
loc_8270A61C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8270A620:
	// stw r3,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r3.u32);
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82817280
	ctx.lr = 0x8270A634;
	sub_82817280(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r28,448(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8270A670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r5,1576(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8270A6A4;
	sub_823CF190(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x828ae6e8
	ctx.lr = 0x8270A6BC;
	sub_828AE6E8(ctx, base);
	// b 0x8270a6d4
	goto loc_8270A6D4;
loc_8270A6C0:
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270a6d4
	if (ctx.cr6.eq) goto loc_8270A6D4;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x8270A6D4;
	sub_82978ED0(ctx, base);
loc_8270A6D4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,1408(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// addi r3,r11,19164
	ctx.r3.s64 = ctx.r11.s64 + 19164;
	// bl 0x82816528
	ctx.lr = 0x8270A6E4;
	sub_82816528(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82979140
	ctx.lr = 0x8270A6FC;
	sub_82979140(ctx, base);
	// lwz r3,1440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270a71c
	if (ctx.cr6.eq) goto loc_8270A71C;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8281bb18
	ctx.lr = 0x8270A71C;
	sub_8281BB18(ctx, base);
loc_8270A71C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270A728"))) PPC_WEAK_FUNC(sub_8270A728);
PPC_FUNC_IMPL(__imp__sub_8270A728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270A730;
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
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r29.u64);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x8270A754;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8270a7ec
	if (!ctx.cr0.eq) goto loc_8270A7EC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8270a774
	if (!ctx.cr6.eq) goto loc_8270A774;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8270A774:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823ae898
	ctx.lr = 0x8270A77C;
	sub_823AE898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8270A79C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8270a7d8
	if (ctx.cr0.eq) goto loc_8270A7D8;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stfs f31,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r10,9436
	ctx.r10.s64 = ctx.r10.s64 + 9436;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// b 0x8270a7dc
	goto loc_8270A7DC;
loc_8270A7D8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8270A7DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8270A7E8;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8270A7EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270A808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8270A818"))) PPC_WEAK_FUNC(sub_8270A818);
PPC_FUNC_IMPL(__imp__sub_8270A818) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1044(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8270A828"))) PPC_WEAK_FUNC(sub_8270A828);
PPC_FUNC_IMPL(__imp__sub_8270A828) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1048(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8270A838"))) PPC_WEAK_FUNC(sub_8270A838);
PPC_FUNC_IMPL(__imp__sub_8270A838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17744
	ctx.r3.s64 = ctx.r11.s64 + -17744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270A848"))) PPC_WEAK_FUNC(sub_8270A848);
PPC_FUNC_IMPL(__imp__sub_8270A848) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270a880
	if (ctx.cr6.eq) goto loc_8270A880;
	// bl 0x823accd8
	ctx.lr = 0x8270A870;
	sub_823ACCD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270a880
	if (!ctx.cr6.eq) goto loc_8270A880;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270a88c
	goto loc_8270A88C;
loc_8270A880:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824001e8
	ctx.lr = 0x8270A88C;
	sub_824001E8(ctx, base);
loc_8270A88C:
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

__attribute__((alias("__imp__sub_8270A8A8"))) PPC_WEAK_FUNC(sub_8270A8A8);
PPC_FUNC_IMPL(__imp__sub_8270A8A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823accd8
	sub_823ACCD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270A8B0"))) PPC_WEAK_FUNC(sub_8270A8B0);
PPC_FUNC_IMPL(__imp__sub_8270A8B0) {
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
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8270A8CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8270a8e0
	if (ctx.cr0.eq) goto loc_8270A8E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8270a948
	ctx.lr = 0x8270A8DC;
	sub_8270A948(ctx, base);
	// b 0x8270a8e4
	goto loc_8270A8E4;
loc_8270A8E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270A8E4:
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

__attribute__((alias("__imp__sub_8270A8F8"))) PPC_WEAK_FUNC(sub_8270A8F8);
PPC_FUNC_IMPL(__imp__sub_8270A8F8) {
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
	// bl 0x823accd8
	ctx.lr = 0x8270A918;
	sub_823ACCD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270a92c
	if (ctx.cr6.eq) goto loc_8270A92C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270A92C;
	sub_82400188(ctx, base);
loc_8270A92C:
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

__attribute__((alias("__imp__sub_8270A948"))) PPC_WEAK_FUNC(sub_8270A948);
PPC_FUNC_IMPL(__imp__sub_8270A948) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823fffc8
	ctx.lr = 0x8270A968;
	sub_823FFFC8(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,9504
	ctx.r11.s64 = ctx.r11.s64 + 9504;
	// addi r10,r10,10544
	ctx.r10.s64 = ctx.r10.s64 + 10544;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1552(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lfs f0,1556(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1556(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1556, temp.u32);
	// lfs f0,1560(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// lwz r11,1564(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1564);
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// stw r11,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r11.u32);
	// lwz r11,1572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1572);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// stw r11,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r11.u32);
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1588);
	// stw r11,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// stw r11,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r11.u32);
	// lwz r11,1604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// lwz r11,1608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// lwz r11,1620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1620);
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// lwz r11,1624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1624);
	// stw r11,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r11.u32);
	// lwz r11,1628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1628);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// lwz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1632);
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// lwz r11,1636(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1636);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// lwz r11,1640(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1640);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r11,1644(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1644);
	// stw r11,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r11.u32);
	// lfs f0,1648(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1648, temp.u32);
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8270AA78"))) PPC_WEAK_FUNC(sub_8270AA78);
PPC_FUNC_IMPL(__imp__sub_8270AA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17296
	ctx.r3.s64 = ctx.r11.s64 + -17296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270AA88"))) PPC_WEAK_FUNC(sub_8270AA88);
PPC_FUNC_IMPL(__imp__sub_8270AA88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270aac0
	if (ctx.cr6.eq) goto loc_8270AAC0;
	// bl 0x823ae1c8
	ctx.lr = 0x8270AAB0;
	sub_823AE1C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270aac0
	if (!ctx.cr6.eq) goto loc_8270AAC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270aacc
	goto loc_8270AACC;
loc_8270AAC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8270a848
	ctx.lr = 0x8270AACC;
	sub_8270A848(ctx, base);
loc_8270AACC:
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

__attribute__((alias("__imp__sub_8270AAE8"))) PPC_WEAK_FUNC(sub_8270AAE8);
PPC_FUNC_IMPL(__imp__sub_8270AAE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ae1c8
	sub_823AE1C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270AAF0"))) PPC_WEAK_FUNC(sub_8270AAF0);
PPC_FUNC_IMPL(__imp__sub_8270AAF0) {
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
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8270AB10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270ab50
	if (ctx.cr0.eq) goto loc_8270AB50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8270a948
	ctx.lr = 0x8270AB24;
	sub_8270A948(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,10600
	ctx.r11.s64 = ctx.r11.s64 + 10600;
	// addi r10,r10,11640
	ctx.r10.s64 = ctx.r10.s64 + 11640;
	// addi r9,r9,18524
	ctx.r9.s64 = ctx.r9.s64 + 18524;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8270ab54
	goto loc_8270AB54;
loc_8270AB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270AB54:
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

__attribute__((alias("__imp__sub_8270AB70"))) PPC_WEAK_FUNC(sub_8270AB70);
PPC_FUNC_IMPL(__imp__sub_8270AB70) {
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
	// bl 0x823ae1c8
	ctx.lr = 0x8270AB90;
	sub_823AE1C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270aba0
	if (!ctx.cr6.eq) goto loc_8270ABA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270abb8
	goto loc_8270ABB8;
loc_8270ABA0:
	// bl 0x823accd8
	ctx.lr = 0x8270ABA4;
	sub_823ACCD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270abb8
	if (ctx.cr6.eq) goto loc_8270ABB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270ABB8;
	sub_82400188(ctx, base);
loc_8270ABB8:
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

__attribute__((alias("__imp__sub_8270ABD0"))) PPC_WEAK_FUNC(sub_8270ABD0);
PPC_FUNC_IMPL(__imp__sub_8270ABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8270ABD8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r3,r8,6980
	ctx.r3.s64 = ctx.r8.s64 + 6980;
	// lwz r10,1612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwz r9,1616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,1600(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r6,1604(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r30,1620(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r29,1608(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// bl 0x82816528
	ctx.lr = 0x8270AC30;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,152(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// rldicr r9,r29,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x82710cb8
	ctx.lr = 0x8270AC68;
	sub_82710CB8(ctx, base);
	// stw r3,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r3.u32);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270ac90
	if (ctx.cr6.eq) goto loc_8270AC90;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270AC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270ac94
	goto loc_8270AC94;
loc_8270AC90:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270AC94:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// ld r30,1632(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1632);
	// lwz r29,1644(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,1640(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1628(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lfs f30,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// ori r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 1024;
	// lwz r3,1568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1568);
	// lfs f3,1552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8270ACE8;
	sub_82331120(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r11,-25224
	ctx.r3.s64 = ctx.r11.s64 + -25224;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f30,180(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270AD18;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r29,152(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r7,-1
	ctx.r7.s64 = -1;
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82710cb8
	ctx.lr = 0x8270AD58;
	sub_82710CB8(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8270ad84
	if (ctx.cr6.eq) goto loc_8270AD84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270AD7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270ad88
	goto loc_8270AD88;
loc_8270AD84:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270AD88:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r30,1632(r31)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1632);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,1640(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f3,1552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	ctx.f3.f64 = double(temp.f32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// lfs f1,1648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82331120
	ctx.lr = 0x8270ADD4;
	sub_82331120(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270ADE8"))) PPC_WEAK_FUNC(sub_8270ADE8);
PPC_FUNC_IMPL(__imp__sub_8270ADE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270a8f8
	sub_8270A8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270ADF0"))) PPC_WEAK_FUNC(sub_8270ADF0);
PPC_FUNC_IMPL(__imp__sub_8270ADF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270ab70
	sub_8270AB70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270ADF8"))) PPC_WEAK_FUNC(sub_8270ADF8);
PPC_FUNC_IMPL(__imp__sub_8270ADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-17204
	ctx.r3.s64 = ctx.r11.s64 + -17204;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270AE08"))) PPC_WEAK_FUNC(sub_8270AE08);
PPC_FUNC_IMPL(__imp__sub_8270AE08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8270ae40
	if (ctx.cr6.eq) goto loc_8270AE40;
	// bl 0x823ae590
	ctx.lr = 0x8270AE30;
	sub_823AE590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270ae40
	if (!ctx.cr6.eq) goto loc_8270AE40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8270ae4c
	goto loc_8270AE4C;
loc_8270AE40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823608e8
	ctx.lr = 0x8270AE4C;
	sub_823608E8(ctx, base);
loc_8270AE4C:
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

__attribute__((alias("__imp__sub_8270AE68"))) PPC_WEAK_FUNC(sub_8270AE68);
PPC_FUNC_IMPL(__imp__sub_8270AE68) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ae590
	sub_823AE590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270AE70"))) PPC_WEAK_FUNC(sub_8270AE70);
PPC_FUNC_IMPL(__imp__sub_8270AE70) {
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
	// li r3,1584
	ctx.r3.s64 = 1584;
	// bl 0x82833108
	ctx.lr = 0x8270AE90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8270aed0
	if (ctx.cr0.eq) goto loc_8270AED0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82360a00
	ctx.lr = 0x8270AEA4;
	sub_82360A00(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,11752
	ctx.r11.s64 = ctx.r11.s64 + 11752;
	// addi r10,r10,12804
	ctx.r10.s64 = ctx.r10.s64 + 12804;
	// addi r9,r9,24120
	ctx.r9.s64 = ctx.r9.s64 + 24120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8270aed4
	goto loc_8270AED4;
loc_8270AED0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8270AED4:
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

__attribute__((alias("__imp__sub_8270AEF0"))) PPC_WEAK_FUNC(sub_8270AEF0);
PPC_FUNC_IMPL(__imp__sub_8270AEF0) {
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
	// bl 0x823ae590
	ctx.lr = 0x8270AF10;
	sub_823AE590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8270af20
	if (!ctx.cr6.eq) goto loc_8270AF20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8270af38
	goto loc_8270AF38;
loc_8270AF20:
	// bl 0x823ab588
	ctx.lr = 0x8270AF24;
	sub_823AB588(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8270af38
	if (ctx.cr6.eq) goto loc_8270AF38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82400188
	ctx.lr = 0x8270AF38;
	sub_82400188(ctx, base);
loc_8270AF38:
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

__attribute__((alias("__imp__sub_8270AF50"))) PPC_WEAK_FUNC(sub_8270AF50);
PPC_FUNC_IMPL(__imp__sub_8270AF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270AF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8270f370
	ctx.lr = 0x8270AF64;
	sub_8270F370(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r9,r11,32716
	ctx.r9.s64 = ctx.r11.s64 + 32716;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32220
	ctx.r7.s64 = -2111569920;
	// lis r6,-32220
	ctx.r6.s64 = -2111569920;
	// lfs f11,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r7,11752
	ctx.r10.s64 = ctx.r7.s64 + 11752;
	// lfs f13,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r6,12804
	ctx.r9.s64 = ctx.r6.s64 + 12804;
	// lfs f12,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,24120
	ctx.r11.s64 = ctx.r11.s64 + 24120;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r29,50
	ctx.r29.s64 = 50;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfs f11,1488(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r3,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r3.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r29,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// stw r8,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r8.u32);
	// addi r3,r9,11692
	ctx.r3.s64 = ctx.r9.s64 + 11692;
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// stw r4,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r4.u32);
	// stw r7,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r7.u32);
	// stw r6,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r6.u32);
	// stw r5,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r5.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8270B01C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,1444
	ctx.r4.s64 = ctx.r31.s64 + 1444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// bl 0x823cf190
	ctx.lr = 0x8270B034;
	sub_823CF190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B048"))) PPC_WEAK_FUNC(sub_8270B048);
PPC_FUNC_IMPL(__imp__sub_8270B048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8270B050;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r29,r11,668
	ctx.r29.s64 = ctx.r11.s64 + 668;
	// addi r31,r30,1452
	ctx.r31.s64 = ctx.r30.s64 + 1452;
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lfs f0,1452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1456(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// lfs f13,1456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lwz r28,1460(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270B0C0;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,16512
	ctx.r5.s64 = 16512;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,8
	ctx.r6.s64 = 8;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r10,r28,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bl 0x82708268
	ctx.lr = 0x8270B0F8;
	sub_82708268(ctx, base);
	// stw r3,1440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1440, ctx.r3.u32);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8270b120
	if (ctx.cr6.eq) goto loc_8270B120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270b124
	goto loc_8270B124;
loc_8270B120:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270B124:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r28,1484(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// ld r27,1472(r30)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1472);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r26,1480(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,1488(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,1448(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1448);
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1440);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// bl 0x82331120
	ctx.lr = 0x8270B174;
	sub_82331120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8270B1C0;
	sub_82816528(ctx, base);
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r29,168(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r5,16512
	ctx.r5.s64 = 16512;
	// ld r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// rldicr r10,r31,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82708268
	ctx.lr = 0x8270B1F8;
	sub_82708268(ctx, base);
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r3,1552(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1552, ctx.r3.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// beq cr6,0x8270b230
	if (ctx.cr6.eq) goto loc_8270B230;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8270b234
	goto loc_8270B234;
loc_8270B230:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8270B234:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1552(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8270B278;
	sub_82331120(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B288"))) PPC_WEAK_FUNC(sub_8270B288);
PPC_FUNC_IMPL(__imp__sub_8270B288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270B290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// bl 0x8270f5b0
	ctx.lr = 0x8270B2A4;
	sub_8270F5B0(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x824ba060
	ctx.lr = 0x8270B2AC;
	sub_824BA060(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8270b300
	if (ctx.cr0.eq) goto loc_8270B300;
	// lwz r11,6136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8270b300
	if (!ctx.cr6.gt) goto loc_8270B300;
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8270B2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271dab0
	ctx.lr = 0x8270B2EC;
	sub_8271DAB0(ctx, base);
	// stw r3,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r3.u32);
	// lwz r11,6132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8271db88
	ctx.lr = 0x8270B2FC;
	sub_8271DB88(ctx, base);
	// stfs f1,1564(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1564, temp.u32);
loc_8270B300:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1460, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B318"))) PPC_WEAK_FUNC(sub_8270B318);
PPC_FUNC_IMPL(__imp__sub_8270B318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8270aef0
	sub_8270AEF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270B320"))) PPC_WEAK_FUNC(sub_8270B320);
PPC_FUNC_IMPL(__imp__sub_8270B320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8270B328;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82708208
	ctx.lr = 0x8270B338;
	sub_82708208(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r7,r9,20396
	ctx.r7.s64 = ctx.r9.s64 + 20396;
	// lfs f0,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f13,16624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16624);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32220
	ctx.r3.s64 = -2111569920;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r30,r3,18524
	ctx.r30.s64 = ctx.r3.s64 + 18524;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r5,26312
	ctx.r5.s64 = ctx.r5.s64 + 26312;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r4,27352
	ctx.r4.s64 = ctx.r4.s64 + 27352;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// lfs f0,23700(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23700);
	ctx.f0.f64 = double(temp.f32);
	// li r8,25
	ctx.r8.s64 = 25;
	// lfs f13,17840(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17840);
	ctx.f13.f64 = double(temp.f32);
	// li r7,71
	ctx.r7.s64 = 71;
	// lfs f11,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// lfs f12,20396(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20396);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r7.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f0,1500(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1500, temp.u32);
	// lwz r6,1420(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stfs f13,1488(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1488, temp.u32);
	// stfs f12,1508(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1508, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// stfs f11,1512(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// stw r10,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r10.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// stw r11,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r11.u32);
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r10.u32);
	// stw r9,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r9.u32);
	// stw r10,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r10.u32);
	// stw r8,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r8.u32);
	// stw r6,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r6.u32);
	// stw r7,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r7.u32);
	// stw r5,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r5.u32);
	// stw r4,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r4.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// stw r29,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

