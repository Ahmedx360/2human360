#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8265D250"))) PPC_WEAK_FUNC(sub_8265D250);
PPC_FUNC_IMPL(__imp__sub_8265D250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265D258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829c63e8
	ctx.lr = 0x8265D268;
	sub_829C63E8(ctx, base);
	// lis r11,11857
	ctx.r11.s64 = 777060352;
	// ori r11,r11,20963
	ctx.r11.u64 = ctx.r11.u64 | 20963;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265d2e4
	if (!ctx.cr6.eq) goto loc_8265D2E4;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8265d28c
	if (ctx.cr6.eq) goto loc_8265D28C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265d480
	if (!ctx.cr6.eq) goto loc_8265D480;
loc_8265D28C:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d480
	if (ctx.cr6.eq) goto loc_8265D480;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265d2b8
	if (!ctx.cr6.eq) goto loc_8265D2B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D2B8:
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d480
	if (ctx.cr6.eq) goto loc_8265D480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r11.u32);
	// b 0x8265d480
	goto loc_8265D480;
loc_8265D2E4:
	// lis r11,-30715
	ctx.r11.s64 = -2012938240;
	// ori r11,r11,63268
	ctx.r11.u64 = ctx.r11.u64 | 63268;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265d3dc
	if (!ctx.cr6.eq) goto loc_8265D3DC;
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8265d32c
	if (ctx.cr6.gt) goto loc_8265D32C;
	// lwz r3,1952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265d314
	if (ctx.cr6.eq) goto loc_8265D314;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8265d31c
	goto loc_8265D31C;
loc_8265D314:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265D31C:
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265d480
	goto loc_8265D480;
loc_8265D32C:
	// lwz r10,2012(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8265d480
	if (!ctx.cr6.eq) goto loc_8265D480;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265d480
	if (ctx.cr6.eq) goto loc_8265D480;
	// bl 0x824090e0
	ctx.lr = 0x8265D348;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d480
	if (ctx.cr0.eq) goto loc_8265D480;
	// lwz r11,6148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d480
	if (ctx.cr6.eq) goto loc_8265D480;
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r10,-13640
	ctx.r11.s64 = ctx.r10.s64 + -13640;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x8265D380;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8265d3c4
	if (ctx.cr0.eq) goto loc_8265D3C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x8265D390;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r10,r10,30032
	ctx.r10.s64 = ctx.r10.s64 + 30032;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
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
	// b 0x8265d3c8
	goto loc_8265D3C8;
loc_8265D3C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8265D3C8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8265D3D8;
	sub_82833A30(ctx, base);
	// b 0x8265d480
	goto loc_8265D480;
loc_8265D3DC:
	// lis r11,-32284
	ctx.r11.s64 = -2115764224;
	// ori r11,r11,31620
	ctx.r11.u64 = ctx.r11.u64 | 31620;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265d3f8
	if (!ctx.cr6.eq) goto loc_8265D3F8;
	// lwz r11,2012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// b 0x8265d480
	goto loc_8265D480;
loc_8265D3F8:
	// lis r11,10789
	ctx.r11.s64 = 707067904;
	// ori r11,r11,42593
	ctx.r11.u64 = ctx.r11.u64 | 42593;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265d480
	if (!ctx.cr6.eq) goto loc_8265D480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d480
	if (ctx.cr0.eq) goto loc_8265D480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3084);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265d480
	if (ctx.cr6.eq) goto loc_8265D480;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r10,3084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3084);
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
loc_8265D480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265D488"))) PPC_WEAK_FUNC(sub_8265D488);
PPC_FUNC_IMPL(__imp__sub_8265D488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8265D490;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r26,r31,2456
	ctx.r26.s64 = ctx.r31.s64 + 2456;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,2396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// lwz r10,2388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2388);
	// addi r11,r11,635
	ctx.r11.s64 = ctx.r11.s64 + 635;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,2404(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2404);
	// lwz r5,2400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2400);
	// lwz r4,2392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2392);
	// lwz r11,2412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2412);
	// stw r11,2596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2596, ctx.r11.u32);
	// stw r10,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r10.u32);
	// bl 0x82681198
	ctx.lr = 0x8265D4D4;
	sub_82681198(ctx, base);
	// lwz r11,2408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2408);
	// lwz r10,2416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2416);
	// addi r27,r31,2600
	ctx.r27.s64 = ctx.r31.s64 + 2600;
	// lwz r9,2420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2420);
	// addi r4,r31,2424
	ctx.r4.s64 = ctx.r31.s64 + 2424;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,2972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2972, ctx.r11.u32);
	// stw r10,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r10.u32);
	// stw r9,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r9.u32);
	// bl 0x82400b48
	ctx.lr = 0x8265D4FC;
	sub_82400B48(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// beq 0x8265d610
	if (ctx.cr0.eq) goto loc_8265D610;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265d610
	if (ctx.cr0.eq) goto loc_8265D610;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d610
	if (ctx.cr0.eq) goto loc_8265D610;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D56C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,7668(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7668);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d5ac
	if (ctx.cr6.eq) goto loc_8265D5AC;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82419458
	ctx.lr = 0x8265D584;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265d5ac
	if (ctx.cr0.eq) goto loc_8265D5AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,2396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8265D5AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D5C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,7672(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265d608
	if (ctx.cr6.eq) goto loc_8265D608;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8265d62c
	if (!ctx.cr6.eq) goto loc_8265D62C;
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82419458
	ctx.lr = 0x8265D5E0;
	sub_82419458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265d610
	if (ctx.cr0.eq) goto loc_8265D610;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,2396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8265D608:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8265d62c
	if (!ctx.cr6.eq) goto loc_8265D62C;
loc_8265D610:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,2396(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2396);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D62C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265d690
	if (!ctx.cr6.eq) goto loc_8265D690;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D690:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265d6b4
	if (ctx.cr6.eq) goto loc_8265D6B4;
	// lwz r11,1780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1780);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265d6b4
	if (!ctx.cr6.eq) goto loc_8265D6B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825f6288
	ctx.lr = 0x8265D6B0;
	sub_825F6288(ctx, base);
	// b 0x8265d734
	goto loc_8265D734;
loc_8265D6B4:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x823328c8
	ctx.lr = 0x8265D6BC;
	sub_823328C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d720
	if (ctx.cr0.eq) goto loc_8265D720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2998
	ctx.lr = 0x8265D6CC;
	sub_828A2998(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r5,26549
	ctx.r5.s64 = 1739915264;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// ori r5,r5,52330
	ctx.r5.u64 = ctx.r5.u64 | 52330;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r25,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,1436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D71C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265d734
	goto loc_8265D734;
loc_8265D720:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D734:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265D740"))) PPC_WEAK_FUNC(sub_8265D740);
PPC_FUNC_IMPL(__imp__sub_8265D740) {
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
	// bl 0x829c4d58
	ctx.lr = 0x8265D760;
	sub_829C4D58(ctx, base);
	// lwz r11,1932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d840
	if (ctx.cr6.eq) goto loc_8265D840;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d7e4
	if (ctx.cr6.eq) goto loc_8265D7E4;
	// lwz r11,800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8265d7a8
	if (ctx.cr6.eq) goto loc_8265D7A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D7A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8265D7A8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8265d7c8
	if (!ctx.cr6.eq) goto loc_8265D7C8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823328c8
	ctx.lr = 0x8265D7B8;
	sub_823328C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265d7c8
	if (ctx.cr0.eq) goto loc_8265D7C8;
	// lwz r11,800(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8265D7C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D7E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265d808
	goto loc_8265D808;
loc_8265D7E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D7FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x829c24c0
	ctx.lr = 0x8265D808;
	sub_829C24C0(ctx, base);
loc_8265D808:
	// lwz r11,2376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2376);
	// addi r3,r30,2376
	ctx.r3.s64 = ctx.r30.s64 + 2376;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d840
	if (ctx.cr6.eq) goto loc_8265D840;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1664);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265D840:
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

__attribute__((alias("__imp__sub_8265D858"))) PPC_WEAK_FUNC(sub_8265D858);
PPC_FUNC_IMPL(__imp__sub_8265D858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265D860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265D870:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8265d8c0
	if (!ctx.cr6.lt) goto loc_8265D8C0;
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82411cb0
	ctx.lr = 0x8265D888;
	sub_82411CB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8265d8b4
	if (ctx.cr0.eq) goto loc_8265D8B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D8A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284daf8
	ctx.lr = 0x8265D8B4;
	sub_8284DAF8(ctx, base);
loc_8265D8B4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8265d870
	goto loc_8265D870;
loc_8265D8C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265D8C8"))) PPC_WEAK_FUNC(sub_8265D8C8);
PPC_FUNC_IMPL(__imp__sub_8265D8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,1884(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1884);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d908
	if (ctx.cr6.eq) goto loc_8265D908;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265d908
	if (ctx.cr6.eq) goto loc_8265D908;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265D904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265d91c
	goto loc_8265D91C;
loc_8265D908:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8265D91C:
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

__attribute__((alias("__imp__sub_8265D938"))) PPC_WEAK_FUNC(sub_8265D938);
PPC_FUNC_IMPL(__imp__sub_8265D938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8265D940;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lwz r31,2184(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 2184);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8265da8c
	if (ctx.cr6.eq) goto loc_8265DA8C;
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
	ctx.lr = 0x8265D980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265d99c
	if (!ctx.cr6.gt) goto loc_8265D99C;
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r11.u32);
	// b 0x8265da70
	goto loc_8265DA70;
loc_8265D99C:
	// lwz r11,68(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265da3c
	if (!ctx.cr6.eq) goto loc_8265DA3C;
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
	ctx.lr = 0x8265D9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r29,r26,948
	ctx.r29.s64 = ctx.r26.s64 + 948;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265da1c
	if (!ctx.cr6.gt) goto loc_8265DA1C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8265D9D8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8265da08
	if (!ctx.cr6.eq) goto loc_8265DA08;
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
	ctx.lr = 0x8265DA00;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8265DA08:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265d9d8
	if (ctx.cr6.lt) goto loc_8265D9D8;
loc_8265DA1C:
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
	ctx.lr = 0x8265DA3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265DA3C:
	// lwz r11,84(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265da70
	if (!ctx.cr0.eq) goto loc_8265DA70;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DA5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265da70
	if (ctx.cr0.eq) goto loc_8265DA70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x8265DA70;
	sub_82410060(ctx, base);
loc_8265DA70:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2184(r23)
	PPC_STORE_U32(ctx.r23.u32 + 2184, ctx.r11.u32);
loc_8265DA8C:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,384
	ctx.r29.s64 = ctx.r11.s64 + 384;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265daec
	if (!ctx.cr6.gt) goto loc_8265DAEC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8265DAA8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8265dad8
	if (!ctx.cr6.eq) goto loc_8265DAD8;
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
	ctx.lr = 0x8265DAD0;
	sub_82332CA8(ctx, base);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8265DAD8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265daa8
	if (ctx.cr6.lt) goto loc_8265DAA8;
loc_8265DAEC:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,1016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1016);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829bd978
	ctx.lr = 0x8265DB08;
	sub_829BD978(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265DB10"))) PPC_WEAK_FUNC(sub_8265DB10);
PPC_FUNC_IMPL(__imp__sub_8265DB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265DB18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,1408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1408);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8265db88
	if (!ctx.cr6.eq) goto loc_8265DB88;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8265db88
	if (ctx.cr6.eq) goto loc_8265DB88;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265db68
	if (ctx.cr6.eq) goto loc_8265DB68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265db6c
	goto loc_8265DB6C;
loc_8265DB68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265DB6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265db88
	if (ctx.cr6.eq) goto loc_8265DB88;
	// lwz r11,2864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2864);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8265db88
	if (!ctx.cr6.eq) goto loc_8265DB88;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2864, ctx.r11.u32);
loc_8265DB88:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a1ee0
	ctx.lr = 0x8265DB9C;
	sub_828A1EE0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_8265DBA8:
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8265dc3c
	if (!ctx.cr6.lt) goto loc_8265DC3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824112d0
	ctx.lr = 0x8265DBC0;
	sub_824112D0(ctx, base);
	// bl 0x82411558
	ctx.lr = 0x8265DBC4;
	sub_82411558(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8265dc34
	if (ctx.cr0.eq) goto loc_8265DC34;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DBE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8265dc34
	if (ctx.cr0.eq) goto loc_8265DC34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82978ed0
	ctx.lr = 0x8265DBF4;
	sub_82978ED0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x8265DC34;
	sub_829BB1F8(ctx, base);
loc_8265DC34:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x8265dba8
	goto loc_8265DBA8;
loc_8265DC3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265DC48"))) PPC_WEAK_FUNC(sub_8265DC48);
PPC_FUNC_IMPL(__imp__sub_8265DC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8265DC50;
	__savegprlr_22(ctx, base);
	// stwu r1,-1488(r1)
	ea = -1488 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82682100
	ctx.lr = 0x8265DC68;
	sub_82682100(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r23,r11,7896
	ctx.r23.s64 = ctx.r11.s64 + 7896;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265dc84
	if (ctx.cr6.eq) goto loc_8265DC84;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x8265dc88
	goto loc_8265DC88;
loc_8265DC84:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8265DC88:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82409058
	ctx.lr = 0x8265DC90;
	sub_82409058(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq cr6,0x8265dcbc
	if (ctx.cr6.eq) goto loc_8265DCBC;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828166e0
	ctx.lr = 0x8265DCB0;
	sub_828166E0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82816528
	ctx.lr = 0x8265DCB8;
	sub_82816528(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8265DCBC:
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// stw r10,112(r26)
	PPC_STORE_U32(ctx.r26.u32 + 112, ctx.r10.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8265dcdc
	if (ctx.cr6.eq) goto loc_8265DCDC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265dcdc
	if (ctx.cr6.eq) goto loc_8265DCDC;
	// bl 0x82332db8
	ctx.lr = 0x8265DCDC;
	sub_82332DB8(ctx, base);
loc_8265DCDC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8265DCE4;
	sub_82333960(ctx, base);
	// lwz r11,40(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// stw r11,1960(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1960, ctx.r11.u32);
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265dd04
	if (!ctx.cr6.gt) goto loc_8265DD04;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// stw r11,2092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2092, ctx.r11.u32);
	// b 0x8265dd08
	goto loc_8265DD08;
loc_8265DD04:
	// stw r27,2092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2092, ctx.r27.u32);
loc_8265DD08:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DD24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r25,21
	ctx.r11.s64 = ctx.r25.s64 + 21;
	// rlwinm r22,r11,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r22,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8265de7c
	if (ctx.cr6.eq) goto loc_8265DE7C;
	// lwz r3,2344(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 2344);
	// stw r11,2348(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2348, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265dd50
	if (ctx.cr6.eq) goto loc_8265DD50;
	// bl 0x823357d8
	ctx.lr = 0x8265DD4C;
	sub_823357D8(ctx, base);
	// stw r27,2344(r26)
	PPC_STORE_U32(ctx.r26.u32 + 2344, ctx.r27.u32);
loc_8265DD50:
	// mulli r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 * 24;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r28,r11,560
	ctx.r28.s64 = ctx.r11.s64 + 560;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823339b8
	ctx.lr = 0x8265DD68;
	sub_823339B8(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265dd7c
	if (!ctx.cr6.eq) goto loc_8265DD7C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_8265DD7C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r30,r22,r24
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// bl 0x82414568
	ctx.lr = 0x8265DD8C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1560);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8265DDB0;
	sub_82333960(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265de7c
	if (ctx.cr6.eq) goto loc_8265DE7C;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DDD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 508);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265de58
	if (!ctx.cr6.gt) goto loc_8265DE58;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8265DDE4:
	// lwz r11,504(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 504);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// beq 0x8265de44
	if (ctx.cr0.eq) goto loc_8265DE44;
	// lwz r10,504(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 504);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lfs f0,700(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lwz r10,504(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 504);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lfs f0,696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 696);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 244, temp.u32);
	// lwz r10,504(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 504);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lfs f0,692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 248, temp.u32);
	// bl 0x82410060
	ctx.lr = 0x8265DE44;
	sub_82410060(ctx, base);
loc_8265DE44:
	// lwz r11,508(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 508);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265dde4
	if (ctx.cr6.lt) goto loc_8265DDE4;
loc_8265DE58:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823339b8
	ctx.lr = 0x8265DE64;
	sub_823339B8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r26,2352
	ctx.r3.s64 = ctx.r26.s64 + 2352;
	// bl 0x82400b48
	ctx.lr = 0x8265DE70;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8265DE78;
	sub_82333960(ctx, base);
	// stw r24,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r24.u32);
loc_8265DE7C:
	// lwz r11,516(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 516);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,1964(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1964, ctx.r11.u32);
	// stw r11,1968(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1968, ctx.r11.u32);
	// bl 0x82662608
	ctx.lr = 0x8265DE94;
	sub_82662608(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DEA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265dec8
	if (!ctx.cr6.eq) goto loc_8265DEC8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265DEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265DEC8:
	// addi r30,r26,3132
	ctx.r30.s64 = ctx.r26.s64 + 3132;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,14
	ctx.r10.s64 = 14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8265DEDC:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8265dedc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265DEDC;
	// mulli r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 * 24;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r27,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// bl 0x823339b8
	ctx.lr = 0x8265DF18;
	sub_823339B8(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,28564
	ctx.r5.s64 = ctx.r11.s64 + 28564;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816cf8
	ctx.lr = 0x8265DF30;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82400b48
	ctx.lr = 0x8265DF3C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265DF44;
	sub_82333960(ctx, base);
	// lwz r11,1884(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265e1b4
	if (ctx.cr6.eq) goto loc_8265E1B4;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,28576
	ctx.r3.s64 = ctx.r11.s64 + 28576;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r31,r11,1268
	ctx.r31.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8265DF68;
	sub_82816528(ctx, base);
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r26,3184
	ctx.r4.s64 = ctx.r26.s64 + 3184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x823cf190
	ctx.lr = 0x8265DF84;
	sub_823CF190(ctx, base);
	// lwz r28,208(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r25,204(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bne cr6,0x8265dfa0
	if (!ctx.cr6.eq) goto loc_8265DFA0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265dfa8
	if (ctx.cr6.eq) goto loc_8265DFA8;
loc_8265DFA0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8265dfac
	goto loc_8265DFAC;
loc_8265DFA8:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265DFAC:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,28624
	ctx.r4.s64 = ctx.r11.s64 + 28624;
	// bl 0x82816c30
	ctx.lr = 0x8265DFC4;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265dfd8
	if (!ctx.cr6.eq) goto loc_8265DFD8;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265DFD8:
	// bl 0x828165a8
	ctx.lr = 0x8265DFDC;
	sub_828165A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265DFE8;
	sub_82333960(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E004;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bne cr6,0x8265e018
	if (!ctx.cr6.eq) goto loc_8265E018;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e020
	if (ctx.cr6.eq) goto loc_8265E020;
loc_8265E018:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8265e024
	goto loc_8265E024;
loc_8265E020:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E024:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,28720
	ctx.r4.s64 = ctx.r11.s64 + 28720;
	// bl 0x82816c30
	ctx.lr = 0x8265E03C;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e050
	if (!ctx.cr6.eq) goto loc_8265E050;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E050:
	// bl 0x828165a8
	ctx.lr = 0x8265E054;
	sub_828165A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E060;
	sub_82333960(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r26,3180
	ctx.r4.s64 = ctx.r26.s64 + 3180;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E07C;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x8265e08c
	if (!ctx.cr6.eq) goto loc_8265E08C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E08C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,28824
	ctx.r4.s64 = ctx.r11.s64 + 28824;
	// bl 0x82816c30
	ctx.lr = 0x8265E0A0;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e0b4
	if (!ctx.cr6.eq) goto loc_8265E0B4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E0B4:
	// bl 0x828165a8
	ctx.lr = 0x8265E0B8;
	sub_828165A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E0C4;
	sub_82333960(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x8265e0d4
	if (!ctx.cr6.eq) goto loc_8265E0D4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E0D4:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,28848
	ctx.r4.s64 = ctx.r11.s64 + 28848;
	// bl 0x82816c30
	ctx.lr = 0x8265E0E8;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e0fc
	if (!ctx.cr6.eq) goto loc_8265E0FC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E0FC:
	// bl 0x828165a8
	ctx.lr = 0x8265E100;
	sub_828165A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E10C;
	sub_82333960(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r26,2244
	ctx.r4.s64 = ctx.r26.s64 + 2244;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8265E128;
	sub_824091A0(ctx, base);
	// lwz r11,1940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1940);
	// lwz r10,1948(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1948);
	// lwz r9,1944(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1944);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bne cr6,0x8265e450
	if (!ctx.cr6.eq) goto loc_8265E450;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bne cr6,0x8265e158
	if (!ctx.cr6.eq) goto loc_8265E158;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e160
	if (ctx.cr6.eq) goto loc_8265E160;
loc_8265E158:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// b 0x8265e164
	goto loc_8265E164;
loc_8265E160:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E164:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,28912
	ctx.r4.s64 = ctx.r11.s64 + 28912;
	// bl 0x82816c30
	ctx.lr = 0x8265E17C;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E188;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E190;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e1a4
	if (!ctx.cr6.eq) goto loc_8265E1A4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E1A4:
	// bl 0x828165a8
	ctx.lr = 0x8265E1A8;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r4,r26,3176
	ctx.r4.s64 = ctx.r26.s64 + 3176;
	// b 0x8265e43c
	goto loc_8265E43C;
loc_8265E1B4:
	// lwz r11,1940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1940);
	// lwz r10,1944(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1944);
	// lwz r9,1948(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1948);
	// lwz r28,204(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bne cr6,0x8265e2cc
	if (!ctx.cr6.eq) goto loc_8265E2CC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8265e1ec
	if (!ctx.cr6.eq) goto loc_8265E1EC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e1f4
	if (ctx.cr6.eq) goto loc_8265E1F4;
loc_8265E1EC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8265e1f8
	goto loc_8265E1F8;
loc_8265E1F4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E1F8:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,29000
	ctx.r4.s64 = ctx.r11.s64 + 29000;
	// bl 0x82816c30
	ctx.lr = 0x8265E210;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E21C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E224;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e238
	if (!ctx.cr6.eq) goto loc_8265E238;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E238:
	// bl 0x828165a8
	ctx.lr = 0x8265E23C;
	sub_828165A8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r4,r26,3148
	ctx.r4.s64 = ctx.r26.s64 + 3148;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E260;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bne cr6,0x8265e274
	if (!ctx.cr6.eq) goto loc_8265E274;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e27c
	if (ctx.cr6.eq) goto loc_8265E27C;
loc_8265E274:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8265e280
	goto loc_8265E280;
loc_8265E27C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E280:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,29088
	ctx.r4.s64 = ctx.r11.s64 + 29088;
	// bl 0x82816c30
	ctx.lr = 0x8265E298;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E2A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E2AC;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e2c0
	if (!ctx.cr6.eq) goto loc_8265E2C0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E2C0:
	// bl 0x828165a8
	ctx.lr = 0x8265E2C4;
	sub_828165A8(ctx, base);
	// addi r4,r26,3152
	ctx.r4.s64 = ctx.r26.s64 + 3152;
	// b 0x8265e438
	goto loc_8265E438;
loc_8265E2CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8265e2dc
	if (!ctx.cr6.eq) goto loc_8265E2DC;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e2e4
	if (ctx.cr6.eq) goto loc_8265E2E4;
loc_8265E2DC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8265e2e8
	goto loc_8265E2E8;
loc_8265E2E4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E2E8:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,29192
	ctx.r4.s64 = ctx.r11.s64 + 29192;
	// bl 0x82816c30
	ctx.lr = 0x8265E300;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E30C;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E314;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e328
	if (!ctx.cr6.eq) goto loc_8265E328;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E328:
	// bl 0x828165a8
	ctx.lr = 0x8265E32C;
	sub_828165A8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// addi r4,r26,3136
	ctx.r4.s64 = ctx.r26.s64 + 3136;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E350;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bne cr6,0x8265e364
	if (!ctx.cr6.eq) goto loc_8265E364;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e36c
	if (ctx.cr6.eq) goto loc_8265E36C;
loc_8265E364:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8265e370
	goto loc_8265E370;
loc_8265E36C:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E370:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,29296
	ctx.r4.s64 = ctx.r11.s64 + 29296;
	// bl 0x82816c30
	ctx.lr = 0x8265E388;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E394;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E39C;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e3b0
	if (!ctx.cr6.eq) goto loc_8265E3B0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E3B0:
	// bl 0x828165a8
	ctx.lr = 0x8265E3B4;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r26,3144
	ctx.r4.s64 = ctx.r26.s64 + 3144;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E3D0;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bne cr6,0x8265e3e4
	if (!ctx.cr6.eq) goto loc_8265E3E4;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// beq cr6,0x8265e3ec
	if (ctx.cr6.eq) goto loc_8265E3EC;
loc_8265E3E4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x8265e3f0
	goto loc_8265E3F0;
loc_8265E3EC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8265E3F0:
	// lwzx r6,r22,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r24.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,29416
	ctx.r4.s64 = ctx.r11.s64 + 29416;
	// bl 0x82816c30
	ctx.lr = 0x8265E408;
	sub_82816C30(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x8265E414;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8265E41C;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e430
	if (!ctx.cr6.eq) goto loc_8265E430;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_8265E430:
	// bl 0x828165a8
	ctx.lr = 0x8265E434;
	sub_828165A8(ctx, base);
	// addi r4,r26,3140
	ctx.r4.s64 = ctx.r26.s64 + 3140;
loc_8265E438:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8265E43C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8265E450;
	sub_823CF190(ctx, base);
loc_8265E450:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8265E458;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x8265E460;
	sub_82333960(ctx, base);
	// addi r1,r1,1488
	ctx.r1.s64 = ctx.r1.s64 + 1488;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E468"))) PPC_WEAK_FUNC(sub_8265E468);
PPC_FUNC_IMPL(__imp__sub_8265E468) {
	PPC_FUNC_PROLOGUE();
	// addi r9,r5,21
	ctx.r9.s64 = ctx.r5.s64 + 21;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,960(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,2396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2396, ctx.r5.u32);
	// addi r4,r10,144
	ctx.r4.s64 = ctx.r10.s64 + 144;
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r8,2,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x1;
	// stw r8,2384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2384, ctx.r8.u32);
	// addi r3,r11,2424
	ctx.r3.s64 = ctx.r11.s64 + 2424;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r9,2388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2388, ctx.r9.u32);
	// lwz r9,524(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// stw r9,2392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2392, ctx.r9.u32);
	// lbz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stw r9,2400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2400, ctx.r9.u32);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,2404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2404, ctx.r9.u32);
	// lwz r9,516(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 516);
	// stw r9,2408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2408, ctx.r9.u32);
	// lwz r9,140(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r9,2412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2412, ctx.r9.u32);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r9,2416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2416, ctx.r9.u32);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// stw r10,2420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2420, ctx.r10.u32);
	// b 0x82400b48
	sub_82400B48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E4EC"))) PPC_WEAK_FUNC(sub_8265E4EC);
PPC_FUNC_IMPL(__imp__sub_8265E4EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E4F0"))) PPC_WEAK_FUNC(sub_8265E4F0);
PPC_FUNC_IMPL(__imp__sub_8265E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265E4F8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c1470
	ctx.lr = 0x8265E508;
	sub_829C1470(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8265e6b4
	if (ctx.cr6.eq) goto loc_8265E6B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265e6b4
	if (ctx.cr0.eq) goto loc_8265E6B4;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265e54c
	if (ctx.cr6.eq) goto loc_8265E54C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265e550
	goto loc_8265E550;
loc_8265E54C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265E550:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r4,r10,10564
	ctx.r4.s64 = ctx.r10.s64 + 10564;
	// lwz r11,1572(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1572);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stw r3,2088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2088, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e590
	if (ctx.cr6.eq) goto loc_8265E590;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E58C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265e594
	goto loc_8265E594;
loc_8265E590:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265E594:
	// lwz r11,3332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// beq cr6,0x8265e5bc
	if (ctx.cr6.eq) goto loc_8265E5BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265e5c0
	goto loc_8265E5C0;
loc_8265E5BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265E5C0:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lfs f31,4032(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4032);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e5e8
	if (ctx.cr6.eq) goto loc_8265E5E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,556(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E5E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265e5ec
	goto loc_8265E5EC;
loc_8265E5E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265E5EC:
	// lwz r11,1772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// lfs f0,4028(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4028);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265e63c
	if (!ctx.cr6.gt) goto loc_8265E63C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265E604:
	// lwz r9,1768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f13,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r9,1772(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265e604
	if (ctx.cr6.lt) goto loc_8265E604;
loc_8265E63C:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265e6a0
	if (!ctx.cr6.gt) goto loc_8265E6A0;
	// addi r28,r31,1264
	ctx.r28.s64 = ctx.r31.s64 + 1264;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8265E658:
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x824cac78
	ctx.lr = 0x8265E688;
	sub_824CAC78(ctx, base);
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r11,1280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265e658
	if (ctx.cr6.lt) goto loc_8265E658;
loc_8265E6A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265E6B4:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265e6e0
	if (!ctx.cr6.eq) goto loc_8265E6E0;
	// lwz r11,2064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265e6e0
	if (!ctx.cr6.eq) goto loc_8265E6E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1656(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1656);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E6E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265E6E0:
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r11.u32);
	// bne cr6,0x8265e70c
	if (!ctx.cr6.eq) goto loc_8265E70C;
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265e70c
	if (ctx.cr6.eq) goto loc_8265E70C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// b 0x8265e714
	goto loc_8265E714;
loc_8265E70C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
loc_8265E714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E730"))) PPC_WEAK_FUNC(sub_8265E730);
PPC_FUNC_IMPL(__imp__sub_8265E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265E738;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r30,2188
	ctx.r31.s64 = ctx.r30.s64 + 2188;
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,3140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3140);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x8265E768;
	sub_82332D50(ctx, base);
	// lwz r11,2200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2200);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265e780
	if (ctx.cr0.eq) goto loc_8265E780;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8265E780:
	// lwz r11,3168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e7c4
	if (ctx.cr6.eq) goto loc_8265E7C4;
	// lwz r11,3164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3164);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x8265E7AC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265e7c4
	if (ctx.cr0.eq) goto loc_8265E7C4;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8265E7C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E7D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E7E0"))) PPC_WEAK_FUNC(sub_8265E7E0);
PPC_FUNC_IMPL(__imp__sub_8265E7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265E7E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265e9bc
	if (!ctx.cr6.gt) goto loc_8265E9BC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2212
	ctx.r3.s64 = ctx.r31.s64 + 2212;
	// bl 0x823327e0
	ctx.lr = 0x8265E818;
	sub_823327E0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265e90c
	if (!ctx.cr6.gt) goto loc_8265E90C;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8265E83C:
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x8265E844;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265e858
	if (ctx.cr0.eq) goto loc_8265E858;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82708208
	ctx.lr = 0x8265E854;
	sub_82708208(ctx, base);
	// b 0x8265e85c
	goto loc_8265E85C;
loc_8265E858:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8265E85C:
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stwx r3,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E8BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E8D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r10,1420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// oris r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 402653184;
	// stw r10,1420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1420, ctx.r10.u32);
	// lwz r11,2224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r30,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r30.u32);
	// lwz r11,2228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265e83c
	if (ctx.cr6.lt) goto loc_8265E83C;
loc_8265E90C:
	// lwz r11,2180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265e9bc
	if (ctx.cr6.eq) goto loc_8265E9BC;
	// li r3,1440
	ctx.r3.s64 = 1440;
	// bl 0x82833108
	ctx.lr = 0x8265E920;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265e934
	if (ctx.cr0.eq) goto loc_8265E934;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82708208
	ctx.lr = 0x8265E930;
	sub_82708208(ctx, base);
	// b 0x8265e938
	goto loc_8265E938;
loc_8265E934:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8265E938:
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r3,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r3.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265E98C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,2180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// bl 0x828ae6e8
	ctx.lr = 0x8265E9A4;
	sub_828AE6E8(ctx, base);
	// lwz r11,2184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// lwz r10,1420(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	// oris r10,r10,6144
	ctx.r10.u64 = ctx.r10.u64 | 402653184;
	// stw r10,1420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1420, ctx.r10.u32);
	// lwz r11,2184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// stw r30,956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 956, ctx.r30.u32);
loc_8265E9BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E9C8"))) PPC_WEAK_FUNC(sub_8265E9C8);
PPC_FUNC_IMPL(__imp__sub_8265E9C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,800(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8265e9f4
	if (ctx.cr6.eq) goto loc_8265E9F4;
	// lwz r5,1936(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8265e9f4
	if (ctx.cr6.eq) goto loc_8265E9F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r11,1440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_8265E9F4:
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8265ea08
	if (ctx.cr6.eq) goto loc_8265EA08;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8265EA08:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2056, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EA18"))) PPC_WEAK_FUNC(sub_8265EA18);
PPC_FUNC_IMPL(__imp__sub_8265EA18) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8265eacc
	if (ctx.cr6.eq) goto loc_8265EACC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8265EA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265EACC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8265EB08"))) PPC_WEAK_FUNC(sub_8265EB08);
PPC_FUNC_IMPL(__imp__sub_8265EB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8265EB10;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265ebbc
	if (ctx.cr6.eq) goto loc_8265EBBC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265ebbc
	if (ctx.cr6.eq) goto loc_8265EBBC;
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265eb54
	if (ctx.cr6.eq) goto loc_8265EB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EB54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265EB54:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,280(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r11,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8265EBA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EBBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265EBBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265EBE8"))) PPC_WEAK_FUNC(sub_8265EBE8);
PPC_FUNC_IMPL(__imp__sub_8265EBE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265EBF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ec30
	if (ctx.cr6.eq) goto loc_8265EC30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265ec34
	goto loc_8265EC34;
loc_8265EC30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265EC34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ec74
	if (ctx.cr6.eq) goto loc_8265EC74;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldicr r7,r5,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824e0c98
	ctx.lr = 0x8265EC74;
	sub_824E0C98(ctx, base);
loc_8265EC74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265EC80"))) PPC_WEAK_FUNC(sub_8265EC80);
PPC_FUNC_IMPL(__imp__sub_8265EC80) {
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
	// lwz r3,800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 800);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ecb4
	if (ctx.cr6.eq) goto loc_8265ECB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265ECB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265ecb8
	goto loc_8265ECB8;
loc_8265ECB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265ECB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ecc8
	if (ctx.cr6.eq) goto loc_8265ECC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824e0da0
	ctx.lr = 0x8265ECC8;
	sub_824E0DA0(ctx, base);
loc_8265ECC8:
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

__attribute__((alias("__imp__sub_8265ECE0"))) PPC_WEAK_FUNC(sub_8265ECE0);
PPC_FUNC_IMPL(__imp__sub_8265ECE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2044, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265ECE8"))) PPC_WEAK_FUNC(sub_8265ECE8);
PPC_FUNC_IMPL(__imp__sub_8265ECE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265ECF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265edb4
	if (!ctx.cr6.eq) goto loc_8265EDB4;
	// lwz r11,2244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265edb4
	if (ctx.cr6.eq) goto loc_8265EDB4;
	// lwz r3,1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// bl 0x82411cb0
	ctx.lr = 0x8265ED18;
	sub_82411CB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8265edb4
	if (ctx.cr0.eq) goto loc_8265EDB4;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8265ED28;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265ed3c
	if (ctx.cr0.eq) goto loc_8265ED3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x8265ED38;
	sub_82712BA0(ctx, base);
	// b 0x8265ed40
	goto loc_8265ED40;
loc_8265ED3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265ED40:
	// stw r3,2240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2240, ctx.r3.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r29,2256(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2256);
	// lfs f13,2268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2268);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,2260(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2260);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r27,2264(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2264);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r7,2252(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2252);
	// lfs f0,30996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,2248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2248);
	// fmadds f1,f13,f0,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f0.f64));
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lwz r6,2244(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x82914788
	ctx.lr = 0x8265ED9C;
	sub_82914788(ctx, base);
	// lwz r3,2240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EDB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265EDB4:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ee80
	if (ctx.cr6.eq) goto loc_8265EE80;
	// lwz r10,2048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// lwz r3,2240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ee80
	if (ctx.cr6.eq) goto loc_8265EE80;
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265ee64
	if (ctx.cr6.eq) goto loc_8265EE64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r8,2060(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r9,2048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 592);
	// stfs f2,152(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// li r4,1928
	ctx.r4.s64 = 1928;
	// lwz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// ld r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lwz r8,800(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r6,2084(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// lwz r5,2100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82712c18
	ctx.lr = 0x8265EE64;
	sub_82712C18(ctx, base);
loc_8265EE64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265ee88
	ctx.lr = 0x8265EE6C;
	sub_8265EE88(ctx, base);
	// lwz r3,2240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EE80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265EE80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265EE88"))) PPC_WEAK_FUNC(sub_8265EE88);
PPC_FUNC_IMPL(__imp__sub_8265EE88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265ef20
	if (ctx.cr6.eq) goto loc_8265EF20;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ef20
	if (ctx.cr6.eq) goto loc_8265EF20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265eee4
	if (ctx.cr0.eq) goto loc_8265EEE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265EEE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 * 5;
loc_8265EEE4:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lwz r11,2240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2240);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r9,24724
	ctx.r10.s64 = ctx.r9.s64 + 24724;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r4,26026
	ctx.r4.s64 = 1705639936;
	// lfs f0,11524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11524);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,1392
	ctx.r3.s64 = ctx.r11.s64 + 1392;
	// lfs f13,24724(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24724);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r4,55534
	ctx.r4.u64 = ctx.r4.u64 | 55534;
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82980518
	ctx.lr = 0x8265EF20;
	sub_82980518(ctx, base);
loc_8265EF20:
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

__attribute__((alias("__imp__sub_8265EF38"))) PPC_WEAK_FUNC(sub_8265EF38);
PPC_FUNC_IMPL(__imp__sub_8265EF38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,2240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// stw r10,2048(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2048, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82978ed0
	sub_82978ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265EF54"))) PPC_WEAK_FUNC(sub_8265EF54);
PPC_FUNC_IMPL(__imp__sub_8265EF54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EF58"))) PPC_WEAK_FUNC(sub_8265EF58);
PPC_FUNC_IMPL(__imp__sub_8265EF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// stw r4,1976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1976, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EF70"))) PPC_WEAK_FUNC(sub_8265EF70);
PPC_FUNC_IMPL(__imp__sub_8265EF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// stw r10,1976(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1976, ctx.r10.u32);
	// lfs f13,620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,596(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,600(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 600);
	// lfs f0,616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,604(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// stfs f0,492(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r6,608(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// stfs f12,500(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// lwz r7,612(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 612);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// stw r9,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// stw r7,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r7.u32);
	// stw r6,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EFC8"))) PPC_WEAK_FUNC(sub_8265EFC8);
PPC_FUNC_IMPL(__imp__sub_8265EFC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EFE0"))) PPC_WEAK_FUNC(sub_8265EFE0);
PPC_FUNC_IMPL(__imp__sub_8265EFE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8265EFE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// std r28,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r28.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r7.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// std r27,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r27.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r9.u64);
	// beq cr6,0x8265f0b8
	if (ctx.cr6.eq) goto loc_8265F0B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,1556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265F034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f090
	if (ctx.cr6.eq) goto loc_8265F090;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8265f090
	if (ctx.cr6.eq) goto loc_8265F090;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8265F090:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F0B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
loc_8265F0B8:
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265f034
	if (ctx.cr6.eq) goto loc_8265F034;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265f034
	if (!ctx.cr6.eq) goto loc_8265F034;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f090
	if (ctx.cr6.eq) goto loc_8265F090;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lwz r9,256(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r10,r10,29628
	ctx.r10.s64 = ctx.r10.s64 + 29628;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// lwz r30,272(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,276(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r26,r7,14624
	ctx.r26.s64 = ctx.r7.s64 + 14624;
	// lwz r25,280(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lfs f1,20416(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82664258
	ctx.lr = 0x8265F154;
	sub_82664258(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-25276
	ctx.r11.s64 = ctx.r11.s64 + -25276;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x8265f090
	goto loc_8265F090;
}

__attribute__((alias("__imp__sub_8265F168"))) PPC_WEAK_FUNC(sub_8265F168);
PPC_FUNC_IMPL(__imp__sub_8265F168) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82335650
	ctx.lr = 0x8265F1A0;
	sub_82335650(ctx, base);
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

__attribute__((alias("__imp__sub_8265F1B8"))) PPC_WEAK_FUNC(sub_8265F1B8);
PPC_FUNC_IMPL(__imp__sub_8265F1B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265f1c8
	if (ctx.cr6.eq) goto loc_8265F1C8;
	// b 0x828a1810
	sub_828A1810(ctx, base);
	return;
loc_8265F1C8:
	// b 0x828a2698
	sub_828A2698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F1D0"))) PPC_WEAK_FUNC(sub_8265F1D0);
PPC_FUNC_IMPL(__imp__sub_8265F1D0) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,2068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265f31c
	if (ctx.cr6.eq) goto loc_8265F31C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,2080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2080);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r9,2112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// lwz r10,2124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// ori r5,r5,136
	ctx.r5.u64 = ctx.r5.u64 | 136;
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r6,2100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2100);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r4,2076(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2076);
	// ld r9,2116(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2116);
	// ld r7,2104(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2104);
	// bl 0x8265f390
	ctx.lr = 0x8265F254;
	sub_8265F390(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,3232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3232);
	// stw r3,2060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2060, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x8265f274
	if (ctx.cr6.gt) goto loc_8265F274;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x8265f27c
	goto loc_8265F27C;
loc_8265F274:
	// lwz r11,3228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3228);
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
loc_8265F27C:
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f2a4
	if (ctx.cr6.eq) goto loc_8265F2A4;
	// lwz r10,3232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3232);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8265f29c
	if (ctx.cr6.gt) goto loc_8265F29C;
	// fmr f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f0.f64;
	// b 0x8265f2a4
	goto loc_8265F2A4;
loc_8265F29C:
	// lwz r11,3228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3228);
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
loc_8265F2A4:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f2d4
	if (ctx.cr6.eq) goto loc_8265F2D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x8265f2d8
	goto loc_8265F2D8;
loc_8265F2D4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8265F2D8:
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r30,152(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,2060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8265F31C;
	sub_82331120(ctx, base);
loc_8265F31C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265F348"))) PPC_WEAK_FUNC(sub_8265F348);
PPC_FUNC_IMPL(__imp__sub_8265F348) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3260);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,2084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2084, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8265F360:
	// lwz r9,3256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3256);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r4,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r4.u32);
	// stw r8,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r8.u32);
	// lwz r9,3260(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3260);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8265f360
	if (ctx.cr6.lt) goto loc_8265F360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265F390"))) PPC_WEAK_FUNC(sub_8265F390);
PPC_FUNC_IMPL(__imp__sub_8265F390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265F398;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// std r9,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r9.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f3dc
	if (ctx.cr6.eq) goto loc_8265F3DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265f3e0
	goto loc_8265F3E0;
loc_8265F3DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265F3E0:
	// ori r29,r31,2
	ctx.r29.u64 = ctx.r31.u64 | 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f418
	if (ctx.cr6.eq) goto loc_8265F418;
	// lwz r11,1692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265f400
	if (!ctx.cr6.eq) goto loc_8265F400;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8265f41c
	goto loc_8265F41C;
loc_8265F400:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265f410
	if (!ctx.cr6.eq) goto loc_8265F410;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8265f41c
	goto loc_8265F41C;
loc_8265F410:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8265f4cc
	goto loc_8265F4CC;
loc_8265F418:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265F41C:
	// bl 0x824113a0
	ctx.lr = 0x8265F420;
	sub_824113A0(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c87d0
	ctx.lr = 0x8265F458;
	sub_829C87D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8265f4c8
	if (ctx.cr0.eq) goto loc_8265F4C8;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r9,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r9.u32);
	// stw r8,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r8.u32);
	// stw r7,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// stw r6,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r6.u32);
	// bl 0x82411708
	ctx.lr = 0x8265F498;
	sub_82411708(ctx, base);
	// addi r11,r30,3244
	ctx.r11.s64 = ctx.r30.s64 + 3244;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332d50
	ctx.lr = 0x8265F4B4;
	sub_82332D50(ctx, base);
	// lwz r10,3256(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3256);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265f4c8
	if (ctx.cr0.eq) goto loc_8265F4C8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8265F4C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8265F4CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F4D8"))) PPC_WEAK_FUNC(sub_8265F4D8);
PPC_FUNC_IMPL(__imp__sub_8265F4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265F4E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// std r8,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r8.u64);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f520
	if (ctx.cr6.eq) goto loc_8265F520;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265f524
	goto loc_8265F524;
loc_8265F520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265F524:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f558
	if (ctx.cr6.eq) goto loc_8265F558;
	// lwz r11,1692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1692);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8265f540
	if (!ctx.cr6.eq) goto loc_8265F540;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8265f55c
	goto loc_8265F55C;
loc_8265F540:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265f550
	if (!ctx.cr6.eq) goto loc_8265F550;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8265f55c
	goto loc_8265F55C;
loc_8265F550:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8265f5d4
	goto loc_8265F5D4;
loc_8265F558:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8265F55C:
	// bl 0x824113a0
	ctx.lr = 0x8265F560;
	sub_824113A0(ctx, base);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ori r7,r7,1535
	ctx.r7.u64 = ctx.r7.u64 | 1535;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829c87d0
	ctx.lr = 0x8265F59C;
	sub_829C87D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f5d4
	if (ctx.cr0.eq) goto loc_8265F5D4;
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
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r9,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r9.u32);
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r7,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r7.u32);
	// stw r6,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
loc_8265F5D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265F5E0"))) PPC_WEAK_FUNC(sub_8265F5E0);
PPC_FUNC_IMPL(__imp__sub_8265F5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8265F5E8;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8265F620;
	sub_8281D960(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f644
	if (ctx.cr0.eq) goto loc_8265F644;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// b 0x8265f648
	goto loc_8265F648;
loc_8265F644:
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
loc_8265F648:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265f66c
	if (ctx.cr6.eq) goto loc_8265F66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8265f670
	goto loc_8265F670;
loc_8265F66C:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_8265F670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,3088(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3088);
	// lwz r4,444(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// lwz r11,888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 888);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f7e0
	if (ctx.cr6.eq) goto loc_8265F7E0;
	// lwz r11,1924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1924);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265f7e0
	if (ctx.cr6.eq) goto loc_8265F7E0;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r22,12(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x8281d960
	ctx.lr = 0x8265F6DC;
	sub_8281D960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1812(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1812);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rldicr r7,r22,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F6FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8265f7b4
	if (!ctx.cr6.eq) goto loc_8265F7B4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8265f7e0
	if (ctx.cr6.eq) goto loc_8265F7E0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265f7e0
	if (!ctx.cr0.eq) goto loc_8265F7E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1840(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1840);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,1844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1844);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,1928(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// lwz r11,2624(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2624);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8265f7e0
	if (ctx.cr6.eq) goto loc_8265F7E0;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lis r4,12499
	ctx.r4.s64 = 819134464;
	// stw r5,2624(r24)
	PPC_STORE_U32(ctx.r24.u32 + 2624, ctx.r5.u32);
	// lwz r6,80(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// ori r4,r4,23802
	ctx.r4.u64 = ctx.r4.u64 | 23802;
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8265f7e0
	goto loc_8265F7E0;
loc_8265F7B4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8265f7e0
	if (!ctx.cr6.eq) goto loc_8265F7E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F7D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f7e0
	if (ctx.cr0.eq) goto loc_8265F7E0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10812, ctx.r11.u32);
loc_8265F7E0:
	// lwz r11,2272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265f830
	if (ctx.cr6.eq) goto loc_8265F830;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817280
	ctx.lr = 0x8265F7F8;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,2272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2272);
	// ld r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8265F82C;
	sub_8282B1E0(ctx, base);
	// b 0x8265fa7c
	goto loc_8265FA7C;
loc_8265F830:
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265f9ec
	if (ctx.cr6.eq) goto loc_8265F9EC;
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265fa7c
	if (ctx.cr6.eq) goto loc_8265FA7C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265f898
	if (ctx.cr6.eq) goto loc_8265F898;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8265F870;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f898
	if (ctx.cr0.eq) goto loc_8265F898;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lwz r9,32(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x8265F898;
	sub_8281D960(ctx, base);
loc_8265F898:
	// lfs f0,3200(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3200);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,3188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3188);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,3192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f0,3196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,3208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x8265F8F4;
	sub_82817280(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x8265F900;
	sub_82817280(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f934
	if (ctx.cr0.eq) goto loc_8265F934;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 * 5;
loc_8265F934:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8281b988
	ctx.lr = 0x8265F940;
	sub_8281B988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,3184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3184);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x8265F974;
	sub_8282B1E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265f9a8
	if (ctx.cr0.eq) goto loc_8265F9A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265F9A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r30,r3,5
	ctx.r30.s64 = ctx.r3.s64 * 5;
loc_8265F9A8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8281b988
	ctx.lr = 0x8265F9B4;
	sub_8281B988(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,3132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3132);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8265F9E8;
	sub_8282B1E0(ctx, base);
	// b 0x8265fa7c
	goto loc_8265FA7C;
loc_8265F9EC:
	// lwz r11,2292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265fa7c
	if (ctx.cr6.eq) goto loc_8265FA7C;
	// lwz r10,2300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2300);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bgt 0x8265fa18
	if (ctx.cr0.gt) goto loc_8265FA18;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8265FA18:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8265fa24
	if (!ctx.cr6.gt) goto loc_8265FA24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8265FA24:
	// lwz r11,2288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2288);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fa7c
	if (ctx.cr6.eq) goto loc_8265FA7C;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82817280
	ctx.lr = 0x8265FA48;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8265FA7C;
	sub_8282B1E0(ctx, base);
loc_8265FA7C:
	// lwz r11,2300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2300);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f1,2304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2304);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,9512
	ctx.r10.s64 = ctx.r10.s64 + 9512;
	// stw r11,2300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2300, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82664338
	ctx.lr = 0x8265FAB0;
	sub_82664338(ctx, base);
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fb4c
	if (ctx.cr6.eq) goto loc_8265FB4C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8265fbb8
	if (ctx.cr6.eq) goto loc_8265FBB8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,1852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1852);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265fbb8
	if (!ctx.cr0.eq) goto loc_8265FBB8;
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265fbb8
	if (!ctx.cr6.gt) goto loc_8265FBB8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_8265FB00:
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8265fb30
	if (ctx.cr6.eq) goto loc_8265FB30;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8271d1c8
	ctx.lr = 0x8265FB30;
	sub_8271D1C8(ctx, base);
loc_8265FB30:
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265fb00
	if (ctx.cr6.lt) goto loc_8265FB00;
	// b 0x8265fbb8
	goto loc_8265FBB8;
loc_8265FB4C:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x824ba060
	ctx.lr = 0x8265FB54;
	sub_824BA060(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8265fbb8
	if (ctx.cr0.eq) goto loc_8265FBB8;
	// lwz r11,6572(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8265fbb8
	if (ctx.cr6.eq) goto loc_8265FBB8;
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265fbb8
	if (!ctx.cr6.gt) goto loc_8265FBB8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_8265FB84:
	// lwz r11,6132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6132);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x8271d1c8
	ctx.lr = 0x8265FBA4;
	sub_8271D1C8(ctx, base);
	// lwz r11,6136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265fb84
	if (ctx.cr6.lt) goto loc_8265FB84;
loc_8265FBB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265FBC8"))) PPC_WEAK_FUNC(sub_8265FBC8);
PPC_FUNC_IMPL(__imp__sub_8265FBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8265FBD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265fbfc
	if (ctx.cr6.eq) goto loc_8265FBFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8265fc00
	goto loc_8265FC00;
loc_8265FBFC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8265FC00:
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265fd98
	if (ctx.cr6.eq) goto loc_8265FD98;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8265fd98
	if (ctx.cr6.eq) goto loc_8265FD98;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265fc78
	if (!ctx.cr6.gt) goto loc_8265FC78;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8265FC28:
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8271d640
	ctx.lr = 0x8265FC40;
	sub_8271D640(ctx, base);
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8265fc64
	if (!ctx.cr0.eq) goto loc_8265FC64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265fc28
	if (ctx.cr6.lt) goto loc_8265FC28;
	// b 0x8265fc78
	goto loc_8265FC78;
loc_8265FC64:
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
loc_8265FC78:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1860);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FC90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8265fd00
	if (!ctx.cr0.gt) goto loc_8265FD00;
loc_8265FC98:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8271d640
	ctx.lr = 0x8265FCBC;
	sub_8271D640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8265fce8
	if (!ctx.cr0.eq) goto loc_8265FCE8;
	// lwz r11,1860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1860);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265fc98
	if (ctx.cr6.lt) goto loc_8265FC98;
	// b 0x8265fd00
	goto loc_8265FD00;
loc_8265FCE8:
	// lwz r11,1856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FCF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
loc_8265FD00:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FD18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8265fd88
	if (!ctx.cr0.gt) goto loc_8265FD88;
loc_8265FD20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1864);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FD38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8271d640
	ctx.lr = 0x8265FD44;
	sub_8271D640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x8265fd70
	if (!ctx.cr0.eq) goto loc_8265FD70;
	// lwz r11,1868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1868);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FD64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8265fd20
	if (ctx.cr6.lt) goto loc_8265FD20;
	// b 0x8265fd88
	goto loc_8265FD88;
loc_8265FD70:
	// lwz r11,1864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1864);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
loc_8265FD88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8265ee88
	ctx.lr = 0x8265FD90;
	sub_8265EE88(ctx, base);
	// lwz r11,1968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1968);
	// stw r11,1964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1964, ctx.r11.u32);
loc_8265FD98:
	// lwz r11,2072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8265fee4
	if (!ctx.cr6.eq) goto loc_8265FEE4;
	// addi r27,r31,2248
	ctx.r27.s64 = ctx.r31.s64 + 2248;
	// addi r30,r31,1980
	ctx.r30.s64 = ctx.r31.s64 + 1980;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_8265FDB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fe14
	if (ctx.cr0.eq) goto loc_8265FE14;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8265FDE4;
	sub_82A4EA80(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_8265FE14:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8265fdb4
	if (!ctx.cr0.eq) goto loc_8265FDB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,2252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2252);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FE3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fe84
	if (ctx.cr0.eq) goto loc_8265FE84;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8265FE54;
	sub_82A4EA80(ctx, base);
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,3112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3112, ctx.r11.u32);
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,3108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3108, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,3116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3116, ctx.r10.u32);
loc_8265FE84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8265fee4
	if (ctx.cr0.eq) goto loc_8265FEE4;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8265FEB4;
	sub_82A4EA80(ctx, base);
	// lfs f12,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r9.u32);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
loc_8265FEE4:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,2072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2072, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265ff2c
	if (ctx.cr6.eq) goto loc_8265FF2C;
	// lwz r10,800(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8265ff14
	if (ctx.cr6.eq) goto loc_8265FF14;
	// lwz r10,592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// lwz r9,2084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// stw r10,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r10.u32);
	// stw r9,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r9.u32);
loc_8265FF14:
	// lwz r11,2060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,2048(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2048);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// lwz r3,2060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2060);
	// bl 0x8281d650
	ctx.lr = 0x8265FF2C;
	sub_8281D650(ctx, base);
loc_8265FF2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265FF38"))) PPC_WEAK_FUNC(sub_8265FF38);
PPC_FUNC_IMPL(__imp__sub_8265FF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8265FF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8265ff70
	if (ctx.cr6.eq) goto loc_8265FF70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265FF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8265ff74
	goto loc_8265FF74;
loc_8265FF70:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8265FF74:
	// lwz r11,2344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826601c4
	if (ctx.cr6.eq) goto loc_826601C4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826601c4
	if (ctx.cr6.eq) goto loc_826601C4;
	// bl 0x82a4cd78
	ctx.lr = 0x8265FF8C;
	sub_82A4CD78(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826601c4
	if (ctx.cr0.eq) goto loc_826601C4;
	// lwz r11,2344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2344);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8265fff0
	if (!ctx.cr6.gt) goto loc_8265FFF0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8265FFB8:
	// lwz r11,2344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2344);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8265ffd8
	if (ctx.cr6.eq) goto loc_8265FFD8;
	// stw r28,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r28.u32);
	// stw r28,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
loc_8265FFD8:
	// lwz r11,2344(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2344);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8265ffb8
	if (ctx.cr6.lt) goto loc_8265FFB8;
loc_8265FFF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1860);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8266005c
	if (!ctx.cr0.gt) goto loc_8266005C;
loc_82660010:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1856);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266003c
	if (ctx.cr6.eq) goto loc_8266003C;
	// stw r28,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r28.u32);
	// stw r28,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r28.u32);
loc_8266003C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1860(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1860);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82660010
	if (ctx.cr6.lt) goto loc_82660010;
loc_8266005C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x826600c8
	if (!ctx.cr0.gt) goto loc_826600C8;
loc_8266007C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1864);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826600a8
	if (ctx.cr6.eq) goto loc_826600A8;
	// stw r28,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r28.u32);
	// stw r28,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r28.u32);
loc_826600A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1868);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826600C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8266007c
	if (ctx.cr6.lt) goto loc_8266007C;
loc_826600C8:
	// lwz r31,2240(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2240);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826601c4
	if (ctx.cr6.eq) goto loc_826601C4;
	// lwz r11,1964(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1964);
	// lwz r10,1968(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1968);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x826601c4
	if (!ctx.cr6.eq) goto loc_826601C4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82333900
	ctx.lr = 0x826600EC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660110
	if (ctx.cr0.eq) goto loc_82660110;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r31,1392
	ctx.r10.s64 = ctx.r31.s64 + 1392;
	// addi r11,r11,-30420
	ctx.r11.s64 = ctx.r11.s64 + -30420;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82660114
	goto loc_82660114;
loc_82660110:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82660114:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x8266011C;
	sub_82833108(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660144
	if (ctx.cr0.eq) goto loc_82660144;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x8297b998
	ctx.lr = 0x8266013C;
	sub_8297B998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82660148
	goto loc_82660148;
loc_82660144:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82660148:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82660154;
	sub_82833A30(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r30,2240(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2240);
	// bl 0x82333900
	ctx.lr = 0x82660160;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660184
	if (ctx.cr0.eq) goto loc_82660184;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r10,r30,1392
	ctx.r10.s64 = ctx.r30.s64 + 1392;
	// addi r11,r11,-30408
	ctx.r11.s64 = ctx.r11.s64 + -30408;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82660188
	goto loc_82660188;
loc_82660184:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82660188:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82660190;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826601b4
	if (ctx.cr0.eq) goto loc_826601B4;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x8297b998
	ctx.lr = 0x826601AC;
	sub_8297B998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826601b8
	goto loc_826601B8;
loc_826601B4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_826601B8:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x826601C4;
	sub_82833A30(ctx, base);
loc_826601C4:
	// lwz r11,2060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2060);
	// stw r28,2072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 2072, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826601e0
	if (ctx.cr6.eq) goto loc_826601E0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_826601E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826601E8"))) PPC_WEAK_FUNC(sub_826601E8);
PPC_FUNC_IMPL(__imp__sub_826601E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// stfs f1,492(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// stfs f2,496(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// lwz r8,40(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// stfs f3,500(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stw r6,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r6.u32);
	// stw r10,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r10.u32);
	// stw r9,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r9.u32);
	// stw r8,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660228"))) PPC_WEAK_FUNC(sub_82660228);
PPC_FUNC_IMPL(__imp__sub_82660228) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1972(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1972);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826602d0
	if (ctx.cr0.eq) goto loc_826602D0;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x82660270;
	sub_82A4EA80(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// bl 0x82817e08
	ctx.lr = 0x826602AC;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x826602d4
	goto loc_826602D4;
loc_826602D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826602D4:
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

__attribute__((alias("__imp__sub_826602F0"))) PPC_WEAK_FUNC(sub_826602F0);
PPC_FUNC_IMPL(__imp__sub_826602F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826602F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x826603e4
	if (!ctx.cr6.eq) goto loc_826603E4;
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826603e4
	if (!ctx.cr6.eq) goto loc_826603E4;
	// lwz r11,1952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r5,800(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// lfs f0,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// lwz r11,800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,13024(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,1744(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1744);
	// bl 0x828250b0
	ctx.lr = 0x8266038C;
	sub_828250B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x826603bc
	if (ctx.cr0.eq) goto loc_826603BC;
	// bl 0x8265bc98
	ctx.lr = 0x82660398;
	sub_8265BC98(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826603B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x826603c0
	if (!ctx.cr0.eq) goto loc_826603C0;
loc_826603BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826603C0:
	// stw r3,1492(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1492, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826603e4
	if (ctx.cr6.eq) goto loc_826603E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,1952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1952);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// lwz r4,800(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 800);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826603E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826603E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826603FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,1936(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1936, ctx.r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660408"))) PPC_WEAK_FUNC(sub_82660408);
PPC_FUNC_IMPL(__imp__sub_82660408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lbz r11,1632(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// lwz r9,1724(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1724);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,1720(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660440"))) PPC_WEAK_FUNC(sub_82660440);
PPC_FUNC_IMPL(__imp__sub_82660440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82660448;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r10,1632(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// lwz r9,2156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826604ec
	if (ctx.cr0.eq) goto loc_826604EC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826604A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r4,1632(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// addi r11,r11,6336
	ctx.r11.s64 = ctx.r11.s64 + 6336;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826604D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82664430
	ctx.lr = 0x826604EC;
	sub_82664430(ctx, base);
loc_826604EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826604F8"))) PPC_WEAK_FUNC(sub_826604F8);
PPC_FUNC_IMPL(__imp__sub_826604F8) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828a4660
	ctx.lr = 0x82660528;
	sub_828A4660(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332928
	ctx.lr = 0x82660530;
	sub_82332928(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82660550"))) PPC_WEAK_FUNC(sub_82660550);
PPC_FUNC_IMPL(__imp__sub_82660550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82660558;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x828165a8
	ctx.lr = 0x82660574;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660588;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826605b0
	if (ctx.cr0.eq) goto loc_826605B0;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x826605A0;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82817e08
	ctx.lr = 0x826605AC;
	sub_82817E08(ctx, base);
	// b 0x826605c0
	goto loc_826605C0;
loc_826605B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_826605C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826605D0"))) PPC_WEAK_FUNC(sub_826605D0);
PPC_FUNC_IMPL(__imp__sub_826605D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826605D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828165a8
	ctx.lr = 0x826605F4;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660638
	if (ctx.cr0.eq) goto loc_82660638;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x82660620;
	sub_82A4EA80(ctx, base);
	// lfs f13,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x8266065c
	goto loc_8266065C;
loc_82660638:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829c62f0
	ctx.lr = 0x82660644;
	sub_829C62F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8266064C;
	sub_82333960(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8266065C:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660670"))) PPC_WEAK_FUNC(sub_82660670);
PPC_FUNC_IMPL(__imp__sub_82660670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82660678;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,29520
	ctx.r3.s64 = ctx.r11.s64 + 29520;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x828165a8
	ctx.lr = 0x82660694;
	sub_828165A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826606A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826606dc
	if (ctx.cr0.eq) goto loc_826606DC;
	// addi r4,r3,112
	ctx.r4.s64 = ctx.r3.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x826606C0;
	sub_82A4EA80(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82660738
	goto loc_82660738;
loc_826606DC:
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826606F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82660718
	if (ctx.cr0.eq) goto loc_82660718;
	// lwz r11,1868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1868);
	// lis r5,26669
	ctx.r5.s64 = 1747779584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,1860(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 1860);
	// ori r5,r5,58543
	ctx.r5.u64 = ctx.r5.u64 | 58543;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e93e0
	ctx.lr = 0x82660714;
	sub_824E93E0(ctx, base);
	// b 0x82660738
	goto loc_82660738;
loc_82660718:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r10,r11,13868
	ctx.r10.s64 = ctx.r11.s64 + 13868;
	// lwz r11,13868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13868);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82660738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660748"))) PPC_WEAK_FUNC(sub_82660748);
PPC_FUNC_IMPL(__imp__sub_82660748) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82660788
	if (ctx.cr0.eq) goto loc_82660788;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2af0
	ctx.lr = 0x82660788;
	sub_828A2AF0(ctx, base);
loc_82660788:
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

__attribute__((alias("__imp__sub_826607A0"))) PPC_WEAK_FUNC(sub_826607A0);
PPC_FUNC_IMPL(__imp__sub_826607A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828a2e38
	sub_828A2E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826607A8"))) PPC_WEAK_FUNC(sub_826607A8);
PPC_FUNC_IMPL(__imp__sub_826607A8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660860
	if (ctx.cr6.eq) goto loc_82660860;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8266081C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660860:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,756(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_826608A0"))) PPC_WEAK_FUNC(sub_826608A0);
PPC_FUNC_IMPL(__imp__sub_826608A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660958
	if (ctx.cr6.eq) goto loc_82660958;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266091c
	if (!ctx.cr0.eq) goto loc_8266091C;
	// lwz r5,3136(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// lwz r3,1576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,1580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1580, ctx.r5.u32);
	// beq cr6,0x826608f0
	if (ctx.cr6.eq) goto loc_826608F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x826608F0;
	sub_82978BC0(ctx, base);
loc_826608F0:
	// lwz r11,3144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3144);
	// stw r11,1584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1584, ctx.r11.u32);
loc_826608F8:
	// lwz r11,3092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660990
	if (ctx.cr6.eq) goto loc_82660990;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82660914;
	sub_8233A258(ctx, base);
	// lwz r4,3092(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3092);
	// b 0x82660984
	goto loc_82660984;
loc_8266091C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82660990
	if (!ctx.cr6.eq) goto loc_82660990;
	// lwz r5,3160(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lwz r3,1576(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,1580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1580, ctx.r5.u32);
	// beq cr6,0x82660944
	if (ctx.cr6.eq) goto loc_82660944;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82660944;
	sub_82978BC0(ctx, base);
loc_82660944:
	// lwz r11,3168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	// stw r11,1584(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1584, ctx.r11.u32);
	// lwz r11,3168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	// stw r11,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r11.u32);
	// b 0x82660964
	goto loc_82660964;
loc_82660958:
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826608f8
	if (ctx.cr0.eq) goto loc_826608F8;
loc_82660964:
	// lwz r11,3096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660990
	if (ctx.cr6.eq) goto loc_82660990;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82660980;
	sub_8233A258(ctx, base);
	// lwz r4,3096(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3096);
loc_82660984:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82660990;
	sub_829C3740(ctx, base);
loc_82660990:
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

__attribute__((alias("__imp__sub_826609A8"))) PPC_WEAK_FUNC(sub_826609A8);
PPC_FUNC_IMPL(__imp__sub_826609A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x826609B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r26,r27,2,22,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x3FC;
	// std r29,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r29.u64);
	// clrlwi r25,r27,24
	ctx.r25.u64 = ctx.r27.u32 & 0xFF;
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// std r7,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r7.u64);
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826609F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824ca610
	ctx.lr = 0x826609F4;
	sub_824CA610(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82660af8
	if (ctx.cr0.eq) goto loc_82660AF8;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r23,800(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x82817280
	ctx.lr = 0x82660A10;
	sub_82817280(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r28,448(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82660A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2048);
	// stw r11,1756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1756, ctx.r11.u32);
	// lwz r11,3232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3232);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82660ad8
	if (!ctx.cr6.gt) goto loc_82660AD8;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82660ad8
	if (!ctx.cr6.lt) goto loc_82660AD8;
	// lwz r10,3228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3228);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfsx f0,r10,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1844(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1844, temp.u32);
	// beq cr6,0x82660ad8
	if (ctx.cr6.eq) goto loc_82660AD8;
	// lwz r10,1832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1832);
	// lfs f13,1840(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1820(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// lfs f12,1836(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1836);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,1824(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// lwz r7,1828(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1828);
	// stfs f12,492(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 492, temp.u32);
	// stfs f13,496(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 496, temp.u32);
	// stfs f0,500(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 500, temp.u32);
	// stw r10,488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// stw r9,476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 476, ctx.r9.u32);
	// stw r8,480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 480, ctx.r8.u32);
	// stw r7,484(r11)
	PPC_STORE_U32(ctx.r11.u32 + 484, ctx.r7.u32);
loc_82660AD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r24,2048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2048, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660AF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82660B08"))) PPC_WEAK_FUNC(sub_82660B08);
PPC_FUNC_IMPL(__imp__sub_82660B08) {
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
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,1632(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660B50"))) PPC_WEAK_FUNC(sub_82660B50);
PPC_FUNC_IMPL(__imp__sub_82660B50) {
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
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660bac
	if (ctx.cr6.eq) goto loc_82660BAC;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660b88
	if (ctx.cr6.eq) goto loc_82660B88;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82660b90
	goto loc_82660B90;
loc_82660B88:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82660B90:
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82660bac
	if (!ctx.cr0.eq) goto loc_82660BAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a3198
	ctx.lr = 0x82660BAC;
	sub_828A3198(ctx, base);
loc_82660BAC:
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

__attribute__((alias("__imp__sub_82660BC0"))) PPC_WEAK_FUNC(sub_82660BC0);
PPC_FUNC_IMPL(__imp__sub_82660BC0) {
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
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660c90
	if (ctx.cr6.eq) goto loc_82660C90;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660BF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82660c90
	if (!ctx.cr0.eq) goto loc_82660C90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828a2998
	ctx.lr = 0x82660C08;
	sub_828A2998(ctx, base);
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// bl 0x82911390
	ctx.lr = 0x82660C10;
	sub_82911390(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82660c30
	if (ctx.cr0.eq) goto loc_82660C30;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82660c30
	if (ctx.cr6.eq) goto loc_82660C30;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82660c34
	goto loc_82660C34;
loc_82660C30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82660C34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82660c90
	if (ctx.cr6.eq) goto loc_82660C90;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82660c5c
	if (ctx.cr0.eq) goto loc_82660C5C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82660c5c
	if (ctx.cr6.eq) goto loc_82660C5C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82660c60
	goto loc_82660C60;
loc_82660C5C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82660C60:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29548
	ctx.r3.s64 = ctx.r10.s64 + 29548;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x828165a8
	ctx.lr = 0x82660C74;
	sub_828165A8(ctx, base);
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
	// bl 0x829e3fd0
	ctx.lr = 0x82660C90;
	sub_829E3FD0(ctx, base);
loc_82660C90:
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

__attribute__((alias("__imp__sub_82660CA8"))) PPC_WEAK_FUNC(sub_82660CA8);
PPC_FUNC_IMPL(__imp__sub_82660CA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82660e58
	if (ctx.cr6.eq) goto loc_82660E58;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82660cf0
	if (ctx.cr6.eq) goto loc_82660CF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82660dbc
	if (ctx.cr0.eq) goto loc_82660DBC;
loc_82660CF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660d34
	if (ctx.cr6.eq) goto loc_82660D34;
	// lwz r10,1956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1956);
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lfs f0,984(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x82660d30
	if (!ctx.cr0.eq) goto loc_82660D30;
	// stfs f0,3292(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3292, temp.u32);
	// b 0x82660d34
	goto loc_82660D34;
loc_82660D30:
	// stfs f0,3296(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 3296, temp.u32);
loc_82660D34:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82660dbc
	if (ctx.cr0.eq) goto loc_82660DBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82660d84
	if (ctx.cr0.eq) goto loc_82660D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660D84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82660D84:
	// lwz r11,10988(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82660dbc
	if (ctx.cr6.eq) goto loc_82660DBC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,10992(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 10996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,10992(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 10992, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82660dbc
	if (ctx.cr6.lt) goto loc_82660DBC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10992(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 10992, temp.u32);
loc_82660DBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82661268
	ctx.lr = 0x82660DF8;
	sub_82661268(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r5,r9,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82660e40
	if (ctx.cr6.eq) goto loc_82660E40;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82660e48
	goto loc_82660E48;
loc_82660E40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82660E48:
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82660E58:
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

__attribute__((alias("__imp__sub_82660E70"))) PPC_WEAK_FUNC(sub_82660E70);
PPC_FUNC_IMPL(__imp__sub_82660E70) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82661268
	ctx.lr = 0x82660EC4;
	sub_82661268(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82660ef4
	if (ctx.cr6.eq) goto loc_82660EF4;
	// bl 0x82664048
	ctx.lr = 0x82660ED0;
	sub_82664048(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82660ef8
	if (!ctx.cr0.eq) goto loc_82660EF8;
loc_82660EF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82660EF8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r5,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,1476(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1476);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82660F40"))) PPC_WEAK_FUNC(sub_82660F40);
PPC_FUNC_IMPL(__imp__sub_82660F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82660F48;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,800(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,1148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82660F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82660670
	ctx.lr = 0x82660F84;
	sub_82660670(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82660fd0
	if (!ctx.cr6.eq) goto loc_82660FD0;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82660fd0
	if (!ctx.cr6.eq) goto loc_82660FD0;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x826610bc
	if (ctx.cr6.eq) goto loc_826610BC;
loc_82660FD0:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a32b8
	ctx.lr = 0x82660FE8;
	sub_828A32B8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,1892(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1892);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x82660FF8;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f11.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a3340
	ctx.lr = 0x82661060;
	sub_828A3340(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// bl 0x82332e18
	ctx.lr = 0x826610B8;
	sub_82332E18(ctx, base);
	// b 0x826610f8
	goto loc_826610F8;
loc_826610BC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a32b8
	ctx.lr = 0x826610D4;
	sub_828A32B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817bb8
	ctx.lr = 0x826610E0;
	sub_82817BB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_826610F8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661108"))) PPC_WEAK_FUNC(sub_82661108);
PPC_FUNC_IMPL(__imp__sub_82661108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2044(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661134
	if (ctx.cr6.eq) goto loc_82661134;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82661134:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82661144"))) PPC_WEAK_FUNC(sub_82661144);
PPC_FUNC_IMPL(__imp__sub_82661144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661148"))) PPC_WEAK_FUNC(sub_82661148);
PPC_FUNC_IMPL(__imp__sub_82661148) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1236);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826611f4
	if (!ctx.cr0.eq) goto loc_826611F4;
	// lwz r11,2052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661238
	if (ctx.cr6.eq) goto loc_82661238;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266119C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826611dc
	if (ctx.cr0.eq) goto loc_826611DC;
	// lwz r3,3280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826611B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826611CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,3280(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x826611e8
	goto loc_826611E8;
loc_826611DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1496);
loc_826611E8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826611F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82661238
	goto loc_82661238;
loc_826611F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82661238
	if (!ctx.cr0.eq) goto loc_82661238;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266123c
	if (ctx.cr6.eq) goto loc_8266123C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1532);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8266123c
	if (ctx.cr0.eq) goto loc_8266123C;
loc_82661238:
	// li r30,1
	ctx.r30.s64 = 1;
loc_8266123C:
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

__attribute__((alias("__imp__sub_82661258"))) PPC_WEAK_FUNC(sub_82661258);
PPC_FUNC_IMPL(__imp__sub_82661258) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82661268"))) PPC_WEAK_FUNC(sub_82661268);
PPC_FUNC_IMPL(__imp__sub_82661268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82661270;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// lwz r10,2204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2204);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82661368
	if (!ctx.cr6.gt) goto loc_82661368;
	// lwz r10,2200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661368
	if (ctx.cr6.eq) goto loc_82661368;
	// lwz r11,2236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,2224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2224);
	// li r4,48
	ctx.r4.s64 = 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,1408(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1408);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82978bc0
	ctx.lr = 0x826612CC;
	sub_82978BC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82978d98
	ctx.lr = 0x826612D8;
	sub_82978D98(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829c6648
	ctx.lr = 0x826612E4;
	sub_829C6648(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-5704
	ctx.r3.s64 = ctx.r10.s64 + -5704;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82661314;
	sub_82816528(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829c65d8
	ctx.lr = 0x8266134C;
	sub_829C65D8(ctx, base);
	// lwz r11,2236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2236);
	// lwz r10,2228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82661368
	if (ctx.cr6.lt) goto loc_82661368;
	// stw r30,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r30.u32);
loc_82661368:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661370"))) PPC_WEAK_FUNC(sub_82661370);
PPC_FUNC_IMPL(__imp__sub_82661370) {
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
	// bl 0x829c6360
	ctx.lr = 0x8266138C;
	sub_829C6360(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82661428
	if (ctx.cr0.eq) goto loc_82661428;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x824090e0
	ctx.lr = 0x8266139C;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826613c0
	if (!ctx.cr0.eq) goto loc_826613C0;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826613f4
	if (ctx.cr6.eq) goto loc_826613F4;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x824090e0
	ctx.lr = 0x826613B8;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826613f4
	if (ctx.cr0.eq) goto loc_826613F4;
loc_826613C0:
	// lwz r11,8964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8964);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826613f4
	if (!ctx.cr6.eq) goto loc_826613F4;
	// lwz r3,8960(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8960);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826613f4
	if (ctx.cr6.eq) goto loc_826613F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826613E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826613f4
	if (!ctx.cr0.eq) goto loc_826613F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_826613F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82661428
	if (ctx.cr6.eq) goto loc_82661428;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661428
	if (ctx.cr6.eq) goto loc_82661428;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266141C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82661428
	if (!ctx.cr0.eq) goto loc_82661428;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82661428:
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

__attribute__((alias("__imp__sub_82661448"))) PPC_WEAK_FUNC(sub_82661448);
PPC_FUNC_IMPL(__imp__sub_82661448) {
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
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826614b8
	if (ctx.cr6.eq) goto loc_826614B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r31,3200
	ctx.r30.s64 = ctx.r31.s64 + 3200;
	// lwz r10,3200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3200);
	// lwz r9,3204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// lwz r8,3208(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3208);
	// lwz r4,2248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2248);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// stw r10,3188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3188, ctx.r10.u32);
	// stw r9,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r9.u32);
	// stw r8,3196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3196, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266149C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826614b8
	if (ctx.cr0.eq) goto loc_826614B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,2248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2248);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284da30
	ctx.lr = 0x826614B8;
	sub_8284DA30(ctx, base);
loc_826614B8:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x826614cc
	if (ctx.cr6.eq) goto loc_826614CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x826614f4
	if (!ctx.cr6.eq) goto loc_826614F4;
loc_826614CC:
	// lwz r11,2056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826614f4
	if (ctx.cr6.eq) goto loc_826614F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826614EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2056, ctx.r11.u32);
loc_826614F4:
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

__attribute__((alias("__imp__sub_82661510"))) PPC_WEAK_FUNC(sub_82661510);
PPC_FUNC_IMPL(__imp__sub_82661510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82661518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82661620
	if (!ctx.cr6.eq) goto loc_82661620;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266155C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x826615c0
	if (ctx.cr0.eq) goto loc_826615C0;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,2052(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2052);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826615c0
	if (ctx.cr6.eq) goto loc_826615C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,1956(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1956);
	// bl 0x829c1f08
	ctx.lr = 0x8266158C;
	sub_829C1F08(ctx, base);
	// bl 0x824f5d90
	ctx.lr = 0x82661590;
	sub_824F5D90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq 0x826615b0
	if (ctx.cr0.eq) goto loc_826615B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_826615A4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826615AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826615e0
	goto loc_826615E0;
loc_826615B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2320);
	// b 0x826615a4
	goto loc_826615A4;
loc_826615C0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826615E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826615E0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-15000
	ctx.r9.s64 = ctx.r9.s64 + -15000;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,20396(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20396);
	ctx.f1.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82664338
	ctx.lr = 0x82661620;
	sub_82664338(ctx, base);
loc_82661620:
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266164C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661670;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661678"))) PPC_WEAK_FUNC(sub_82661678);
PPC_FUNC_IMPL(__imp__sub_82661678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,1952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,-15000
	ctx.r4.s64 = ctx.r10.s64 + -15000;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826616B0"))) PPC_WEAK_FUNC(sub_826616B0);
PPC_FUNC_IMPL(__imp__sub_826616B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826616B8"))) PPC_WEAK_FUNC(sub_826616B8);
PPC_FUNC_IMPL(__imp__sub_826616B8) {
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
	// lwz r11,-84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -84);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -76);
	// lwz r10,1952(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82661714
	if (!ctx.cr6.eq) goto loc_82661714;
	// lwz r3,800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82661714
	if (ctx.cr6.eq) goto loc_82661714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826616FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82661714
	if (ctx.cr0.eq) goto loc_82661714;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1800);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661714;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661728"))) PPC_WEAK_FUNC(sub_82661728);
PPC_FUNC_IMPL(__imp__sub_82661728) {
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
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x82661754;
	sub_82816528(ctx, base);
	// lwz r11,-84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -48);
	// bl 0x829e3fd0
	ctx.lr = 0x8266177C;
	sub_829E3FD0(ctx, base);
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

__attribute__((alias("__imp__sub_82661798"))) PPC_WEAK_FUNC(sub_82661798);
PPC_FUNC_IMPL(__imp__sub_82661798) {
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
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826617e0
	if (!ctx.cr6.eq) goto loc_826617E0;
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826617E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826617E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826617F8"))) PPC_WEAK_FUNC(sub_826617F8);
PPC_FUNC_IMPL(__imp__sub_826617F8) {
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
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r4,r11,6336
	ctx.r4.s64 = ctx.r11.s64 + 6336;
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,1632(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1632);
	// lwz r11,1188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266185C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661884;
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

__attribute__((alias("__imp__sub_82661898"))) PPC_WEAK_FUNC(sub_82661898);
PPC_FUNC_IMPL(__imp__sub_82661898) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r4,r11,-15000
	ctx.r4.s64 = ctx.r11.s64 + -15000;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826618C8"))) PPC_WEAK_FUNC(sub_826618C8);
PPC_FUNC_IMPL(__imp__sub_826618C8) {
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
	// lwz r11,-84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -84);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -76);
	// lwz r3,800(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82661918
	if (ctx.cr6.eq) goto loc_82661918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82661918
	if (ctx.cr0.eq) goto loc_82661918;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1800);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82661918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661928"))) PPC_WEAK_FUNC(sub_82661928);
PPC_FUNC_IMPL(__imp__sub_82661928) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// addi r4,r11,28408
	ctx.r4.s64 = ctx.r11.s64 + 28408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826619b8
	if (!ctx.cr0.eq) goto loc_826619B8;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82661978;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3100);
	// bl 0x829c3740
	ctx.lr = 0x82661988;
	sub_829C3740(ctx, base);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,28408
	ctx.r10.s64 = ctx.r10.s64 + 28408;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,30996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30996);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82664338
	ctx.lr = 0x826619B8;
	sub_82664338(ctx, base);
loc_826619B8:
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

__attribute__((alias("__imp__sub_826619D0"))) PPC_WEAK_FUNC(sub_826619D0);
PPC_FUNC_IMPL(__imp__sub_826619D0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82661a24
	if (ctx.cr6.eq) goto loc_82661A24;
	// lwz r5,40(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82661a84
	if (ctx.cr6.eq) goto loc_82661A84;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x82661a1c
	if (ctx.cr6.eq) goto loc_82661A1C;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82661a4c
	goto loc_82661A4C;
loc_82661A1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82661a4c
	goto loc_82661A4C;
loc_82661A24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x82661a40
	if (ctx.cr6.eq) goto loc_82661A40;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82661a44
	goto loc_82661A44;
loc_82661A40:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82661A44:
	// lis r5,12421
	ctx.r5.s64 = 814022656;
	// ori r5,r5,40830
	ctx.r5.u64 = ctx.r5.u64 | 40830;
loc_82661A4C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,740
	ctx.r4.s64 = 48496640;
	// ori r4,r4,17019
	ctx.r4.u64 = ctx.r4.u64 | 17019;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82661A74;
	sub_8233A258(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82661A84;
	sub_829C3740(ctx, base);
loc_82661A84:
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

__attribute__((alias("__imp__sub_82661AA0"))) PPC_WEAK_FUNC(sub_82661AA0);
PPC_FUNC_IMPL(__imp__sub_82661AA0) {
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
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82661ad4
	if (ctx.cr0.eq) goto loc_82661AD4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82661ad4
	if (ctx.cr6.eq) goto loc_82661AD4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82661ad8
	goto loc_82661AD8;
loc_82661AD4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82661AD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661b50
	if (ctx.cr6.eq) goto loc_82661B50;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661b34
	if (ctx.cr6.eq) goto loc_82661B34;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82661b28
	if (ctx.cr6.eq) goto loc_82661B28;
	// bl 0x826641a0
	ctx.lr = 0x82661B0C;
	sub_826641A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661B24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82661b2c
	goto loc_82661B2C;
loc_82661B28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82661B2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82661b50
	if (!ctx.cr6.eq) goto loc_82661B50;
loc_82661B34:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,-6056(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82664528
	ctx.lr = 0x82661B50;
	sub_82664528(ctx, base);
loc_82661B50:
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

__attribute__((alias("__imp__sub_82661B68"))) PPC_WEAK_FUNC(sub_82661B68);
PPC_FUNC_IMPL(__imp__sub_82661B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82661B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addic. r11,r28,300
	ctx.xer.ca = ctx.r28.u32 > 4294966995;
	ctx.r11.s64 = ctx.r28.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82661b98
	if (ctx.cr0.eq) goto loc_82661B98;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82661b98
	if (ctx.cr6.eq) goto loc_82661B98;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82661b9c
	goto loc_82661B9C;
loc_82661B98:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82661B9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82661c98
	if (ctx.cr6.eq) goto loc_82661C98;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,28548
	ctx.r29.s64 = ctx.r11.s64 + 28548;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x82661BB4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e3f50
	ctx.lr = 0x82661BC0;
	sub_829E3F50(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-15060
	ctx.r3.s64 = ctx.r11.s64 + -15060;
	// bl 0x823928a0
	ctx.lr = 0x82661BD4;
	sub_823928A0(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661c38
	if (ctx.cr6.eq) goto loc_82661C38;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r30,68
	ctx.r31.s64 = ctx.r30.s64 + 68;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82661C0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82661c2c
	if (ctx.cr0.eq) goto loc_82661C2C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82661c30
	goto loc_82661C30;
loc_82661C2C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82661C30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82661c98
	if (!ctx.cr6.eq) goto loc_82661C98;
loc_82661C38:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829c1f08
	ctx.lr = 0x82661C40;
	sub_829C1F08(ctx, base);
	// bl 0x82664200
	ctx.lr = 0x82661C44;
	sub_82664200(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82661c58
	if (ctx.cr0.eq) goto loc_82661C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82661c64
	goto loc_82661C64;
loc_82661C58:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,1420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
loc_82661C64:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661C6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r31,-6056(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x82661C7C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x829e3fd0
	ctx.lr = 0x82661C98;
	sub_829E3FD0(ctx, base);
loc_82661C98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661CA0"))) PPC_WEAK_FUNC(sub_82661CA0);
PPC_FUNC_IMPL(__imp__sub_82661CA0) {
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
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82661ccc
	if (!ctx.cr6.eq) goto loc_82661CCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82661d38
	ctx.lr = 0x82661CCC;
	sub_82661D38(ctx, base);
loc_82661CCC:
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82661cec
	if (ctx.cr0.eq) goto loc_82661CEC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82661cec
	if (ctx.cr6.eq) goto loc_82661CEC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82661cf0
	goto loc_82661CF0;
loc_82661CEC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82661CF0:
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r3,r10,29568
	ctx.r3.s64 = ctx.r10.s64 + 29568;
	// lwz r30,-6056(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82816528
	ctx.lr = 0x82661D04;
	sub_82816528(ctx, base);
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
	// bl 0x829e3fd0
	ctx.lr = 0x82661D20;
	sub_829E3FD0(ctx, base);
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

__attribute__((alias("__imp__sub_82661D38"))) PPC_WEAK_FUNC(sub_82661D38);
PPC_FUNC_IMPL(__imp__sub_82661D38) {
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
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82661d8c
	if (!ctx.cr6.eq) goto loc_82661D8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82661d84
	if (ctx.cr0.eq) goto loc_82661D84;
	// lwz r11,4012(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661d84
	if (ctx.cr6.eq) goto loc_82661D84;
	// lwz r11,4008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4008);
	// b 0x82661d88
	goto loc_82661D88;
loc_82661D84:
	// lwz r11,2012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2012);
loc_82661D88:
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
loc_82661D8C:
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

__attribute__((alias("__imp__sub_82661DA0"))) PPC_WEAK_FUNC(sub_82661DA0);
PPC_FUNC_IMPL(__imp__sub_82661DA0) {
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
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82661e08
	if (ctx.cr6.eq) goto loc_82661E08;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82661e08
	if (ctx.cr0.eq) goto loc_82661E08;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661DF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82661E08:
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

__attribute__((alias("__imp__sub_82661E28"))) PPC_WEAK_FUNC(sub_82661E28);
PPC_FUNC_IMPL(__imp__sub_82661E28) {
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
	// addic. r11,r3,300
	ctx.xer.ca = ctx.r3.u32 > 4294966995;
	ctx.r11.s64 = ctx.r3.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82661e58
	if (ctx.cr0.eq) goto loc_82661E58;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82661e58
	if (ctx.cr6.eq) goto loc_82661E58;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82661e5c
	goto loc_82661E5C;
loc_82661E58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82661E5C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82661ec0
	if (ctx.cr6.eq) goto loc_82661EC0;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82661eac
	if (ctx.cr6.eq) goto loc_82661EAC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82661eac
	if (ctx.cr6.eq) goto loc_82661EAC;
	// bl 0x826641a0
	ctx.lr = 0x82661E90;
	sub_826641A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661EA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82661eb0
	goto loc_82661EB0;
loc_82661EAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82661EB0:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// b 0x82661ec4
	goto loc_82661EC4;
loc_82661EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82661EC4:
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

__attribute__((alias("__imp__sub_82661ED8"))) PPC_WEAK_FUNC(sub_82661ED8);
PPC_FUNC_IMPL(__imp__sub_82661ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82661EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82661f9c
	if (ctx.cr0.eq) goto loc_82661F9C;
	// lwz r11,1932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82661f28
	if (ctx.cr6.eq) goto loc_82661F28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82661f5c
	goto loc_82661F5C;
loc_82661F28:
	// lwz r10,1748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82661f54
	if (!ctx.cr6.gt) goto loc_82661F54;
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82661f5c
	if (ctx.cr6.gt) goto loc_82661F5C;
loc_82661F54:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16552(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16552);
loc_82661F5C:
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// lwz r10,2160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2160);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82661f7c
	if (!ctx.cr6.gt) goto loc_82661F7C;
	// lwz r10,2156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmul f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
loc_82661F7C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82661fa4
	goto loc_82661FA4;
loc_82661F9C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfd f1,16376(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16376);
loc_82661FA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661FB0"))) PPC_WEAK_FUNC(sub_82661FB0);
PPC_FUNC_IMPL(__imp__sub_82661FB0) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82661FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266205c
	if (ctx.cr0.eq) goto loc_8266205C;
	// lwz r11,4004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266205c
	if (!ctx.cr6.eq) goto loc_8266205C;
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662074
	if (ctx.cr6.eq) goto loc_82662074;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// rlwinm r10,r30,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,1228(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1228);
	// neg r4,r11
	ctx.r4.s64 = -ctx.r11.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82662020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82662074
	if (ctx.cr6.gt) goto loc_82662074;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662044
	if (ctx.cr6.eq) goto loc_82662044;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8266204c
	goto loc_8266204C;
loc_82662044:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8266204C:
	// lwz r11,1492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1492);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662058;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82662074
	goto loc_82662074;
loc_8266205C:
	// lwz r11,2004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82662074
	if (ctx.cr6.gt) goto loc_82662074;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82661d38
	ctx.lr = 0x82662074;
	sub_82661D38(ctx, base);
loc_82662074:
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

__attribute__((alias("__imp__sub_82662090"))) PPC_WEAK_FUNC(sub_82662090);
PPC_FUNC_IMPL(__imp__sub_82662090) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,2004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2004);
	// lwz r9,2012(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2012);
	// add. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x826620ac
	if (!ctx.cr0.lt) goto loc_826620AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826620b8
	goto loc_826620B8;
loc_826620AC:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826620b8
	if (ctx.cr6.lt) goto loc_826620B8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826620B8:
	// stw r11,2004(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2004, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826620C8"))) PPC_WEAK_FUNC(sub_826620C8);
PPC_FUNC_IMPL(__imp__sub_826620C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2008(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// lwz r10,2004(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826620dc
	if (ctx.cr6.lt) goto loc_826620DC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826620DC:
	// stw r11,2004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2004, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826620E8"))) PPC_WEAK_FUNC(sub_826620E8);
PPC_FUNC_IMPL(__imp__sub_826620E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r10,2012(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2012);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662108"))) PPC_WEAK_FUNC(sub_82662108);
PPC_FUNC_IMPL(__imp__sub_82662108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662128
	if (ctx.cr6.eq) goto loc_82662128;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1232);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82662128:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82662148
	if (!ctx.cr6.eq) goto loc_82662148;
	// lwz r11,2032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwz r9,2004(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// b 0x82662150
	goto loc_82662150;
loc_82662148:
	// lwz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
loc_82662150:
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662160"))) PPC_WEAK_FUNC(sub_82662160);
PPC_FUNC_IMPL(__imp__sub_82662160) {
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
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662190
	if (ctx.cr6.eq) goto loc_82662190;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266218C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826621c8
	goto loc_826621C8;
loc_82662190:
	// lwa r11,2012(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 2012));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r9,2004(r3)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 2004));
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_826621C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826621D8"))) PPC_WEAK_FUNC(sub_826621D8);
PPC_FUNC_IMPL(__imp__sub_826621D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826621f8
	if (ctx.cr6.eq) goto loc_826621F8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1548);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_826621F8:
	// lwz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// lwz r10,2008(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2008);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662218"))) PPC_WEAK_FUNC(sub_82662218);
PPC_FUNC_IMPL(__imp__sub_82662218) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82662248
	if (ctx.cr6.gt) goto loc_82662248;
	// lwz r11,2032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82662240
	if (!ctx.cr6.eq) goto loc_82662240;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662248
	if (ctx.cr6.eq) goto loc_82662248;
loc_82662240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82662248:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662250"))) PPC_WEAK_FUNC(sub_82662250);
PPC_FUNC_IMPL(__imp__sub_82662250) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// stw r4,2084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2084, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r4,452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 452, ctx.r4.u32);
	// stw r6,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662270"))) PPC_WEAK_FUNC(sub_82662270);
PPC_FUNC_IMPL(__imp__sub_82662270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82662278;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r11,7896
	ctx.r31.s64 = ctx.r11.s64 + 7896;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826622a8
	if (ctx.cr6.eq) goto loc_826622A8;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x826622ac
	goto loc_826622AC;
loc_826622A8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_826622AC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826622bc
	if (ctx.cr6.eq) goto loc_826622BC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x826622c0
	goto loc_826622C0;
loc_826622BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_826622C0:
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addi r4,r10,29576
	ctx.r4.s64 = ctx.r10.s64 + 29576;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82816c30
	ctx.lr = 0x826622D4;
	sub_82816C30(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826622ec
	if (!ctx.cr6.eq) goto loc_826622EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_826622EC:
	// bl 0x828165a8
	ctx.lr = 0x826622F0;
	sub_828165A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824f66b0
	ctx.lr = 0x82662300;
	sub_824F66B0(ctx, base);
	// lwz r31,128(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82662334
	if (ctx.cr6.eq) goto loc_82662334;
	// bl 0x82336ee0
	ctx.lr = 0x82662310;
	sub_82336EE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824f6738
	ctx.lr = 0x82662324;
	sub_824F6738(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82335ef0
	ctx.lr = 0x82662334;
	sub_82335EF0(ctx, base);
loc_82662334:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x8266233C;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333960
	ctx.lr = 0x82662344;
	sub_82333960(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662350"))) PPC_WEAK_FUNC(sub_82662350);
PPC_FUNC_IMPL(__imp__sub_82662350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82662358;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82662448
	if (ctx.cr6.eq) goto loc_82662448;
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826623a0
	if (ctx.cr6.eq) goto loc_826623A0;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,276
	ctx.r3.s64 = ctx.r31.s64 + 276;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824b99b0
	ctx.lr = 0x82662394;
	sub_824B99B0(ctx, base);
	// lwz r3,2344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// bl 0x823357d8
	ctx.lr = 0x8266239C;
	sub_823357D8(ctx, base);
	// stw r29,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r29.u32);
loc_826623A0:
	// stw r30,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r30.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662448
	if (ctx.cr6.eq) goto loc_82662448;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,140(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	// stw r4,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826623D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662400
	if (ctx.cr6.eq) goto loc_82662400;
	// lwz r3,1428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82662400
	if (!ctx.cr6.eq) goto loc_82662400;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82662400:
	// lwz r3,2344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662418
	if (ctx.cr6.eq) goto loc_82662418;
	// bl 0x82335918
	ctx.lr = 0x82662418;
	sub_82335918(ctx, base);
loc_82662418:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,2344(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,472(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// bl 0x82336a38
	ctx.lr = 0x82662448;
	sub_82336A38(ctx, base);
loc_82662448:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662450"))) PPC_WEAK_FUNC(sub_82662450);
PPC_FUNC_IMPL(__imp__sub_82662450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82662458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,1952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1952);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266249c
	if (ctx.cr6.eq) goto loc_8266249C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82662498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8266251c
	goto loc_8266251C;
loc_8266249C:
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r27,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828a41a8
	ctx.lr = 0x826624AC;
	sub_828A41A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826624bc
	if (ctx.cr0.eq) goto loc_826624BC;
loc_826624B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266251c
	goto loc_8266251C;
loc_826624BC:
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82662518
	if (ctx.cr6.eq) goto loc_82662518;
	// lwz r11,1840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662518
	if (ctx.cr6.eq) goto loc_82662518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r27,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826624F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82662518
	if (ctx.cr0.eq) goto loc_82662518;
	// lwz r11,800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// lwz r11,1780(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1780);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826624b4
	if (ctx.cr6.eq) goto loc_826624B4;
	// lwz r11,2172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826624b4
	if (ctx.cr6.eq) goto loc_826624B4;
loc_82662518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266251C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662528"))) PPC_WEAK_FUNC(sub_82662528);
PPC_FUNC_IMPL(__imp__sub_82662528) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2300, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662538"))) PPC_WEAK_FUNC(sub_82662538);
PPC_FUNC_IMPL(__imp__sub_82662538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82662540;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x826625fc
	if (ctx.cr6.eq) goto loc_826625FC;
	// lwz r10,3160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3160);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826625fc
	if (!ctx.cr6.eq) goto loc_826625FC;
	// lwz r10,2048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2048);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82662584
	if (ctx.cr6.eq) goto loc_82662584;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82662584
	if (ctx.cr6.eq) goto loc_82662584;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82662600
	goto loc_82662600;
loc_82662584:
	// lwz r10,1884(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826625c0
	if (ctx.cr6.eq) goto loc_826625C0;
	// lwz r4,2060(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2060);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826625d4
	if (ctx.cr6.eq) goto loc_826625D4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826625d4
	if (ctx.cr6.eq) goto loc_826625D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823306a0
	ctx.lr = 0x826625BC;
	sub_823306A0(ctx, base);
	// b 0x826625d0
	goto loc_826625D0;
loc_826625C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,2088(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2088);
	// lwz r4,2100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2100);
	// bl 0x82330f08
	ctx.lr = 0x826625D0;
	sub_82330F08(ctx, base);
loc_826625D0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_826625D4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826625EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r11,r31,r29
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bge cr6,0x82662600
	if (!ctx.cr6.lt) goto loc_82662600;
loc_826625FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82662600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662608"))) PPC_WEAK_FUNC(sub_82662608);
PPC_FUNC_IMPL(__imp__sub_82662608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82662610;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r4,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x82414568
	ctx.lr = 0x82662634;
	sub_82414568(ctx, base);
	// lwz r11,256(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662648
	if (ctx.cr6.eq) goto loc_82662648;
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x82662650
	goto loc_82662650;
loc_82662648:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82662650:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x82662658;
	sub_82409058(ctx, base);
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r10,r1,276
	ctx.r10.s64 = ctx.r1.s64 + 276;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x82662680
	if (ctx.cr6.eq) goto loc_82662680;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82662680
	if (ctx.cr6.eq) goto loc_82662680;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82662680;
	sub_82332DB8(ctx, base);
loc_82662680:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x826630b4
	if (ctx.cr6.eq) goto loc_826630B4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826630b4
	if (ctx.cr6.eq) goto loc_826630B4;
	// lwz r11,2344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x826630b4
	if (ctx.cr6.eq) goto loc_826630B4;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826630b4
	if (!ctx.cr6.gt) goto loc_826630B4;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r19,-32232
	ctx.r19.s64 = -2112356352;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r14,r4,-12132
	ctx.r14.s64 = ctx.r4.s64 + -12132;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r20,-32232
	ctx.r20.s64 = -2112356352;
	// addi r11,r4,-12608
	ctx.r11.s64 = ctx.r4.s64 + -12608;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r10,r20,-12480
	ctx.r10.s64 = ctx.r20.s64 + -12480;
	// addi r11,r4,-12636
	ctx.r11.s64 = ctx.r4.s64 + -12636;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// addi r11,r4,-12664
	ctx.r11.s64 = ctx.r4.s64 + -12664;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r31,-32232
	ctx.r31.s64 = -2112356352;
	// addi r11,r4,-12696
	ctx.r11.s64 = ctx.r4.s64 + -12696;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r10,r31,-12188
	ctx.r10.s64 = ctx.r31.s64 + -12188;
	// addi r11,r4,-12728
	ctx.r11.s64 = ctx.r4.s64 + -12728;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lis r30,-32232
	ctx.r30.s64 = -2112356352;
	// addi r11,r4,-12760
	ctx.r11.s64 = ctx.r4.s64 + -12760;
	// lis r29,-32232
	ctx.r29.s64 = -2112356352;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// addi r11,r19,-12504
	ctx.r11.s64 = ctx.r19.s64 + -12504;
	// lis r28,-32232
	ctx.r28.s64 = -2112356352;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// addi r11,r3,-12160
	ctx.r11.s64 = ctx.r3.s64 + -12160;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// addi r9,r30,-12216
	ctx.r9.s64 = ctx.r30.s64 + -12216;
	// addi r11,r29,-12240
	ctx.r11.s64 = ctx.r29.s64 + -12240;
	// addi r10,r28,-12268
	ctx.r10.s64 = ctx.r28.s64 + -12268;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lis r18,-32232
	ctx.r18.s64 = -2112356352;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// lis r16,-32232
	ctx.r16.s64 = -2112356352;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lis r15,-32232
	ctx.r15.s64 = -2112356352;
	// addi r19,r4,-12788
	ctx.r19.s64 = ctx.r4.s64 + -12788;
	// addi r9,r18,-12528
	ctx.r9.s64 = ctx.r18.s64 + -12528;
	// addi r11,r16,-12572
	ctx.r11.s64 = ctx.r16.s64 + -12572;
	// addi r10,r15,-12592
	ctx.r10.s64 = ctx.r15.s64 + -12592;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r27,-32232
	ctx.r27.s64 = -2112356352;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// lis r25,-32232
	ctx.r25.s64 = -2112356352;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// lis r17,-32232
	ctx.r17.s64 = -2112356352;
	// addi r18,r4,-12812
	ctx.r18.s64 = ctx.r4.s64 + -12812;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// addi r27,r27,-12296
	ctx.r27.s64 = ctx.r27.s64 + -12296;
	// addi r26,r26,-12324
	ctx.r26.s64 = ctx.r26.s64 + -12324;
	// addi r25,r25,-12348
	ctx.r25.s64 = ctx.r25.s64 + -12348;
	// addi r24,r24,-12376
	ctx.r24.s64 = ctx.r24.s64 + -12376;
	// addi r23,r23,-12404
	ctx.r23.s64 = ctx.r23.s64 + -12404;
	// addi r22,r22,-12432
	ctx.r22.s64 = ctx.r22.s64 + -12432;
	// addi r21,r21,-12456
	ctx.r21.s64 = ctx.r21.s64 + -12456;
	// addi r20,r17,-12548
	ctx.r20.s64 = ctx.r17.s64 + -12548;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lfs f31,904(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r4,-12840
	ctx.r3.s64 = ctx.r4.s64 + -12840;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r6,-12940
	ctx.r6.s64 = ctx.r6.s64 + -12940;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r7,-12968
	ctx.r7.s64 = ctx.r7.s64 + -12968;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r4,-12868
	ctx.r4.s64 = ctx.r4.s64 + -12868;
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r18.u32);
	// addi r9,r9,-13024
	ctx.r9.s64 = ctx.r9.s64 + -13024;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r11,r11,-13072
	ctx.r11.s64 = ctx.r11.s64 + -13072;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r18,r5,-12920
	ctx.r18.s64 = ctx.r5.s64 + -12920;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r17,r10,-13048
	ctx.r17.s64 = ctx.r10.s64 + -13048;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lwz r30,604(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r8,-12996
	ctx.r3.s64 = ctx.r8.s64 + -12996;
	// addi r4,r4,-12896
	ctx.r4.s64 = ctx.r4.s64 + -12896;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r5,r5,-13092
	ctx.r5.s64 = ctx.r5.s64 + -13092;
	// stw r4,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// addi r6,r6,-13112
	ctx.r6.s64 = ctx.r6.s64 + -13112;
	// addi r7,r7,-13132
	ctx.r7.s64 = ctx.r7.s64 + -13132;
	// stw r5,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r5.u32);
	// addi r9,r9,-13184
	ctx.r9.s64 = ctx.r9.s64 + -13184;
	// stw r6,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r6.u32);
	// addi r10,r10,-13212
	ctx.r10.s64 = ctx.r10.s64 + -13212;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// addi r15,r11,-13244
	ctx.r15.s64 = ctx.r11.s64 + -13244;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// addi r16,r8,-13152
	ctx.r16.s64 = ctx.r8.s64 + -13152;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r15,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r15.u32);
loc_826628B8:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826628dc
	if (ctx.cr6.eq) goto loc_826628DC;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x82411cb0
	ctx.lr = 0x826628D8;
	sub_82411CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_826628DC:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826628f0
	if (ctx.cr6.eq) goto loc_826628F0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_826628F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8266308c
	if (ctx.cr6.eq) goto loc_8266308C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8266308c
	if (ctx.cr6.eq) goto loc_8266308C;
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662914
	if (ctx.cr6.eq) goto loc_82662914;
	// lfs f30,228(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8266292c
	goto loc_8266292C;
loc_82662914:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662928;
	sub_829E6978(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_8266292C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82816528
	ctx.lr = 0x82662934;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662948;
	sub_82965458(ctx, base);
	// lwz r11,340(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662960
	if (ctx.cr6.eq) goto loc_82662960;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f30,232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662980
	goto loc_82662980;
loc_82662960:
	// lwz r15,220(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662978;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662980:
	// bl 0x82816528
	ctx.lr = 0x82662984;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662998;
	sub_82965458(ctx, base);
	// lwz r11,348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826629c0
	if (ctx.cr6.eq) goto loc_826629C0;
	// lfs f0,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82662a0c
	goto loc_82662A0C;
loc_826629C0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826629D4;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x826629EC;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662A08;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82662A0C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662A18;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x82662A2C;
	sub_829653C8(ctx, base);
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662a44
	if (ctx.cr6.eq) goto loc_82662A44;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f30,252(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662a64
	goto loc_82662A64;
loc_82662A44:
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662A5C;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662A64:
	// bl 0x82816528
	ctx.lr = 0x82662A68;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662A7C;
	sub_82965458(ctx, base);
	// lwz r11,356(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662aa4
	if (ctx.cr6.eq) goto loc_82662AA4;
	// lfs f0,256(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,264(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82662af0
	goto loc_82662AF0;
loc_82662AA4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662AB8;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662AD0;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662AEC;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82662AF0:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662AFC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x82662B10;
	sub_829653C8(ctx, base);
	// lwz r11,360(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 360);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662b28
	if (ctx.cr6.eq) goto loc_82662B28;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f30,268(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662b48
	goto loc_82662B48;
loc_82662B28:
	// lwz r15,100(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662B40;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662B48:
	// bl 0x82816528
	ctx.lr = 0x82662B4C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662B60;
	sub_82965458(ctx, base);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662b88
	if (ctx.cr6.eq) goto loc_82662B88;
	// lfs f0,272(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,280(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82662bd4
	goto loc_82662BD4;
loc_82662B88:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662B9C;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662BB4;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662BD0;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82662BD4:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662BE0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x82662BF4;
	sub_829653C8(ctx, base);
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662c0c
	if (ctx.cr6.eq) goto loc_82662C0C;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f30,284(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662c2c
	goto loc_82662C2C;
loc_82662C0C:
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662C24;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662C2C:
	// bl 0x82816528
	ctx.lr = 0x82662C30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662C44;
	sub_82965458(ctx, base);
	// lwz r11,372(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662c6c
	if (ctx.cr6.eq) goto loc_82662C6C;
	// lfs f0,288(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,292(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,296(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82662cb8
	goto loc_82662CB8;
loc_82662C6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662C80;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662C98;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662CB4;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82662CB8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662CC4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x82662CD8;
	sub_829653C8(ctx, base);
	// lwz r11,376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 376);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662cf0
	if (ctx.cr6.eq) goto loc_82662CF0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f30,300(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 300);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662d10
	goto loc_82662D10;
loc_82662CF0:
	// lwz r15,116(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662D08;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662D10:
	// bl 0x82816528
	ctx.lr = 0x82662D14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662D28;
	sub_82965458(ctx, base);
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662d40
	if (ctx.cr6.eq) goto loc_82662D40;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfs f30,304(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662d60
	goto loc_82662D60;
loc_82662D40:
	// lwz r15,136(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662D58;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662D60:
	// bl 0x82816528
	ctx.lr = 0x82662D64;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662D78;
	sub_82965458(ctx, base);
	// lwz r11,384(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662d90
	if (ctx.cr6.eq) goto loc_82662D90;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f30,308(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662db0
	goto loc_82662DB0;
loc_82662D90:
	// lwz r15,124(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662DA8;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662DB0:
	// bl 0x82816528
	ctx.lr = 0x82662DB4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662DC8;
	sub_82965458(ctx, base);
	// lwz r11,388(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662de0
	if (ctx.cr6.eq) goto loc_82662DE0;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f30,312(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 312);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662e00
	goto loc_82662E00;
loc_82662DE0:
	// lwz r15,132(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662DF8;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662E00:
	// bl 0x82816528
	ctx.lr = 0x82662E04;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662E18;
	sub_82965458(ctx, base);
	// lwz r11,392(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662e30
	if (ctx.cr6.eq) goto loc_82662E30;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lfs f30,316(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 316);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662e50
	goto loc_82662E50;
loc_82662E30:
	// lwz r15,120(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662E48;
	sub_829E6978(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662E50:
	// bl 0x82816528
	ctx.lr = 0x82662E54;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662E68;
	sub_82965458(ctx, base);
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662e90
	if (ctx.cr6.eq) goto loc_82662E90;
	// lfs f0,320(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,324(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 324);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,328(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82662edc
	goto loc_82662EDC;
loc_82662E90:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662EA4;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662EBC;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662ED8;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82662EDC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662EE8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829653c8
	ctx.lr = 0x82662EFC;
	sub_829653C8(ctx, base);
	// lwz r11,400(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82662f10
	if (ctx.cr6.eq) goto loc_82662F10;
	// lfs f30,332(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82662f28
	goto loc_82662F28;
loc_82662F10:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662F24;
	sub_829E6978(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_82662F28:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x82662F30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82965458
	ctx.lr = 0x82662F44;
	sub_82965458(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662F58;
	sub_829E6978(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662F70;
	sub_829E6978(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662F8C;
	sub_829E6978(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82662F9C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x82662FB0;
	sub_829653C8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82662FC4;
	sub_829E6978(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662FDC;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82662FF8;
	sub_829E6978(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82663008;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x8266301C;
	sub_829653C8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82663030;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82663048;
	sub_829E6978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82663064;
	sub_829E6978(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r15,r1,80
	ctx.r15.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82663074;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x829653c8
	ctx.lr = 0x82663088;
	sub_829653C8(ctx, base);
	// lwz r15,212(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
loc_8266308C:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826628b8
	if (ctx.cr6.lt) goto loc_826628B8;
loc_826630B4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x826630BC;
	sub_82333960(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826630D0"))) PPC_WEAK_FUNC(sub_826630D0);
PPC_FUNC_IMPL(__imp__sub_826630D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826630D8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r4,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r4.u64);
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,2252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2252);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,2248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2248);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266311C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82663358
	if (ctx.cr6.eq) goto loc_82663358;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663358
	if (ctx.cr6.eq) goto loc_82663358;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82817280
	ctx.lr = 0x82663138;
	sub_82817280(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// lwz r31,800(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x82817bb8
	ctx.lr = 0x82663148;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// addi r29,r1,152
	ctx.r29.s64 = ctx.r1.s64 + 152;
	// addi r3,r9,20104
	ctx.r3.s64 = ctx.r9.s64 + 20104;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r27,r1,168
	ctx.r27.s64 = ctx.r1.s64 + 168;
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-24640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x826631A4;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x826631E4;
	sub_828250B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,2352
	ctx.r4.s64 = ctx.r30.s64 + 2352;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823339b8
	ctx.lr = 0x826631F4;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816cf8
	ctx.lr = 0x82663214;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82400b48
	ctx.lr = 0x82663220;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82663228;
	sub_82333960(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r8,2348(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x82663248
	if (!ctx.cr6.eq) goto loc_82663248;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82663248:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r4,r11,28624
	ctx.r4.s64 = ctx.r11.s64 + 28624;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82816c30
	ctx.lr = 0x8266325C;
	sub_82816C30(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82663270
	if (!ctx.cr6.eq) goto loc_82663270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82663270:
	// bl 0x828165a8
	ctx.lr = 0x82663274;
	sub_828165A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82663280;
	sub_82333960(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r5,16607
	ctx.r5.s64 = 1088356352;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,8988
	ctx.r5.u64 = ctx.r5.u64 | 8988;
	// addi r4,r31,1580
	ctx.r4.s64 = ctx.r31.s64 + 1580;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826632A4;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,1584
	ctx.r4.s64 = ctx.r31.s64 + 1584;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x826632C0;
	sub_823CF190(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826632D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f31,1504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82817bb8
	ctx.lr = 0x826632E8;
	sub_82817BB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,2084(r30)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r30.u32 + 2084));
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82663358;
	sub_82333960(ctx, base);
loc_82663358:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663368"))) PPC_WEAK_FUNC(sub_82663368);
PPC_FUNC_IMPL(__imp__sub_82663368) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82332c38
	sub_82332C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8266339C"))) PPC_WEAK_FUNC(sub_8266339C);
PPC_FUNC_IMPL(__imp__sub_8266339C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826633A0"))) PPC_WEAK_FUNC(sub_826633A0);
PPC_FUNC_IMPL(__imp__sub_826633A0) {
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
	// lwz r11,1428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826633fc
	if (ctx.cr6.eq) goto loc_826633FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826633D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826633fc
	if (ctx.cr6.eq) goto loc_826633FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826633F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,1428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// stw r11,368(r10)
	PPC_STORE_U32(ctx.r10.u32 + 368, ctx.r11.u32);
loc_826633FC:
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

__attribute__((alias("__imp__sub_82663410"))) PPC_WEAK_FUNC(sub_82663410);
PPC_FUNC_IMPL(__imp__sub_82663410) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266343C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663488
	if (ctx.cr0.eq) goto loc_82663488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663458;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82663488
	if (ctx.cr6.gt) goto loc_82663488;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1636);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82336720
	ctx.lr = 0x82663484;
	sub_82336720(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82663488:
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

__attribute__((alias("__imp__sub_826634A8"))) PPC_WEAK_FUNC(sub_826634A8);
PPC_FUNC_IMPL(__imp__sub_826634A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f3,2316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1660);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826634E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x826634F0;
	sub_8233A258(ctx, base);
	// lis r4,4711
	ctx.r4.s64 = 308740096;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,27729
	ctx.r4.u64 = ctx.r4.u64 | 27729;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82663504;
	sub_829C3740(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,2316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,13216
	ctx.r11.s64 = ctx.r11.s64 + 13216;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82664338
	ctx.lr = 0x82663530;
	sub_82664338(ctx, base);
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

__attribute__((alias("__imp__sub_82663548"))) PPC_WEAK_FUNC(sub_82663548);
PPC_FUNC_IMPL(__imp__sub_82663548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f3,2316(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2316);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1660(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1660);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82663590;
	sub_8233A258(ctx, base);
	// lis r4,12888
	ctx.r4.s64 = 844627968;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,21445
	ctx.r4.u64 = ctx.r4.u64 | 21445;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x826635A4;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_826635B8"))) PPC_WEAK_FUNC(sub_826635B8);
PPC_FUNC_IMPL(__imp__sub_826635B8) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r5,2308(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2308);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82663694
	if (ctx.cr6.eq) goto loc_82663694;
	// lwz r11,2312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82663650
	if (!ctx.cr6.eq) goto loc_82663650;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336bf8
	ctx.lr = 0x82663620;
	sub_82336BF8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82663650
	if (ctx.cr6.eq) goto loc_82663650;
	// li r3,964
	ctx.r3.s64 = 964;
	// bl 0x82833108
	ctx.lr = 0x82663634;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663648
	if (ctx.cr0.eq) goto loc_82663648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82855c68
	ctx.lr = 0x82663644;
	sub_82855C68(ctx, base);
	// b 0x8266364c
	goto loc_8266364C;
loc_82663648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266364C:
	// stw r3,2312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2312, ctx.r3.u32);
loc_82663650:
	// lwz r10,2312(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82663694
	if (ctx.cr6.eq) goto loc_82663694;
	// lwz r11,1428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266366c
	if (ctx.cr6.eq) goto loc_8266366C;
	// stw r10,368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 368, ctx.r10.u32);
loc_8266366C:
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,29600
	ctx.r3.s64 = ctx.r11.s64 + 29600;
	// bl 0x82816528
	ctx.lr = 0x82663678;
	sub_82816528(ctx, base);
	// lwz r11,2312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82980630
	ctx.lr = 0x82663694;
	sub_82980630(ctx, base);
loc_82663694:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826636B8"))) PPC_WEAK_FUNC(sub_826636B8);
PPC_FUNC_IMPL(__imp__sub_826636B8) {
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
	// lwz r3,2344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826636e4
	if (ctx.cr6.eq) goto loc_826636E4;
	// bl 0x823357d8
	ctx.lr = 0x826636DC;
	sub_823357D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2344, ctx.r11.u32);
loc_826636E4:
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

__attribute__((alias("__imp__sub_826636F8"))) PPC_WEAK_FUNC(sub_826636F8);
PPC_FUNC_IMPL(__imp__sub_826636F8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x828a30d8
	sub_828A30D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663704"))) PPC_WEAK_FUNC(sub_82663704);
PPC_FUNC_IMPL(__imp__sub_82663704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663708"))) PPC_WEAK_FUNC(sub_82663708);
PPC_FUNC_IMPL(__imp__sub_82663708) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-12052
	ctx.r3.s64 = ctx.r11.s64 + -12052;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82816528
	ctx.lr = 0x82663738;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,3240
	ctx.r4.s64 = ctx.r31.s64 + 3240;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284f7c0
	ctx.lr = 0x82663750;
	sub_8284F7C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8284d0e0
	ctx.lr = 0x8266375C;
	sub_8284D0E0(ctx, base);
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

__attribute__((alias("__imp__sub_82663778"))) PPC_WEAK_FUNC(sub_82663778);
PPC_FUNC_IMPL(__imp__sub_82663778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82663780;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82663790:
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x826637c8
	if (!ctx.cr6.lt) goto loc_826637C8;
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82411cb0
	ctx.lr = 0x826637A8;
	sub_82411CB0(ctx, base);
	// bl 0x82411cb0
	ctx.lr = 0x826637AC;
	sub_82411CB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826637bc
	if (ctx.cr0.eq) goto loc_826637BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r11.u32);
loc_826637BC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82663790
	goto loc_82663790;
loc_826637C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284d0e0
	ctx.lr = 0x826637D4;
	sub_8284D0E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826637E0"))) PPC_WEAK_FUNC(sub_826637E0);
PPC_FUNC_IMPL(__imp__sub_826637E0) {
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
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828db368
	ctx.lr = 0x82663808;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266385C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663878;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826638B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// bl 0x828db368
	ctx.lr = 0x826638BC;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826638D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826638F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828ff9f8
	ctx.lr = 0x82663900;
	sub_828FF9F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_82663920"))) PPC_WEAK_FUNC(sub_82663920);
PPC_FUNC_IMPL(__imp__sub_82663920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82663928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,2344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826639f4
	if (ctx.cr6.eq) goto loc_826639F4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82663954;
	sub_829B9720(ctx, base);
	// bl 0x82336ae8
	ctx.lr = 0x82663958;
	sub_82336AE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266397C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826639d8
	if (ctx.cr6.eq) goto loc_826639D8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x826639d8
	if (ctx.cr6.eq) goto loc_826639D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r30.u32 + 12);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826639C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826639D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826639D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,14624
	ctx.r4.s64 = ctx.r11.s64 + 14624;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826639F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826639F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663A00"))) PPC_WEAK_FUNC(sub_82663A00);
PPC_FUNC_IMPL(__imp__sub_82663A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82663A08;
	__savegprlr_23(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r11,1932(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82663cd4
	if (ctx.cr6.eq) goto loc_82663CD4;
	// lwz r3,800(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82663a48
	if (ctx.cr6.eq) goto loc_82663A48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82663a4c
	goto loc_82663A4C;
loc_82663A48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82663A4C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82663a84
	if (!ctx.cr6.eq) goto loc_82663A84;
	// lwz r3,800(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 800);
	// bl 0x823328c8
	ctx.lr = 0x82663A5C;
	sub_823328C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663a98
	if (ctx.cr0.eq) goto loc_82663A98;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,6756(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6756);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82663A78;
	sub_829B9720(ctx, base);
	// bl 0x824090e0
	ctx.lr = 0x82663A7C;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663a98
	if (ctx.cr0.eq) goto loc_82663A98;
loc_82663A84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82663a9c
	goto loc_82663A9C;
loc_82663A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82663A9C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663ce4
	if (ctx.cr6.eq) goto loc_82663CE4;
	// lwz r11,1884(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1884);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82663ac0
	if (ctx.cr6.eq) goto loc_82663AC0;
	// lwz r28,7668(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7668);
	// b 0x82663ac4
	goto loc_82663AC4;
loc_82663AC0:
	// lwz r28,7672(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
loc_82663AC4:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,312
	ctx.r30.s64 = ctx.r28.s64 + 312;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_82663AD4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82663ae8
	if (!ctx.cr6.eq) goto loc_82663AE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663AE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82663b6c
	if (!ctx.cr6.gt) goto loc_82663B6C;
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82663b04
	if (ctx.cr6.eq) goto loc_82663B04;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// b 0x82663b08
	goto loc_82663B08;
loc_82663B04:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82663B08:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82409058
	ctx.lr = 0x82663B10;
	sub_82409058(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663b34
	if (ctx.cr6.eq) goto loc_82663B34;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828166e0
	ctx.lr = 0x82663B2C;
	sub_828166E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82816528
	ctx.lr = 0x82663B34;
	sub_82816528(ctx, base);
loc_82663B34:
	// lwz r9,76(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82663b64
	if (!ctx.cr6.gt) goto loc_82663B64;
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
loc_82663B48:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82663b6c
	if (ctx.cr6.eq) goto loc_82663B6C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82663b48
	if (ctx.cr6.lt) goto loc_82663B48;
loc_82663B64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82663b70
	goto loc_82663B70;
loc_82663B6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663B70:
	// clrlwi. r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82663b9c
	if (ctx.cr0.eq) goto loc_82663B9C;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// rlwinm r26,r26,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82663b9c
	if (ctx.cr6.eq) goto loc_82663B9C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663b9c
	if (ctx.cr6.eq) goto loc_82663B9C;
	// bl 0x82332db8
	ctx.lr = 0x82663B9C;
	sub_82332DB8(ctx, base);
loc_82663B9C:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663c6c
	if (!ctx.cr0.eq) goto loc_82663C6C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82663ad4
	if (ctx.cr6.lt) goto loc_82663AD4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,84
	ctx.r29.s64 = ctx.r28.s64 + 84;
loc_82663BBC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82663cb4
	if (ctx.cr6.eq) goto loc_82663CB4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82682100
	ctx.lr = 0x82663BD8;
	sub_82682100(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82663bec
	if (!ctx.cr6.eq) goto loc_82663BEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663BEC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82663c74
	if (!ctx.cr6.gt) goto loc_82663C74;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82663c08
	if (!ctx.cr6.eq) goto loc_82663C08;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82663C08:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x82663C10;
	sub_82409058(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663c34
	if (ctx.cr6.eq) goto loc_82663C34;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828166e0
	ctx.lr = 0x82663C2C;
	sub_828166E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82816528
	ctx.lr = 0x82663C34;
	sub_82816528(ctx, base);
loc_82663C34:
	// lwz r9,76(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 76);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82663c64
	if (!ctx.cr6.gt) goto loc_82663C64;
	// lwz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 72);
loc_82663C48:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82663c74
	if (ctx.cr6.eq) goto loc_82663C74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82663c48
	if (ctx.cr6.lt) goto loc_82663C48;
loc_82663C64:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82663c78
	goto loc_82663C78;
loc_82663C6C:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82663ce4
	goto loc_82663CE4;
loc_82663C74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663C78:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82663ca4
	if (ctx.cr0.eq) goto loc_82663CA4;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// rlwinm r26,r26,0,31,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82663ca4
	if (ctx.cr6.eq) goto loc_82663CA4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663ca4
	if (ctx.cr6.eq) goto loc_82663CA4;
	// bl 0x82332db8
	ctx.lr = 0x82663CA4;
	sub_82332DB8(ctx, base);
loc_82663CA4:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne 0x82663cc8
	if (!ctx.cr0.eq) goto loc_82663CC8;
	// bl 0x82333960
	ctx.lr = 0x82663CB4;
	sub_82333960(ctx, base);
loc_82663CB4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82663bbc
	if (ctx.cr6.lt) goto loc_82663BBC;
	// b 0x82663ce4
	goto loc_82663CE4;
loc_82663CC8:
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82333960
	ctx.lr = 0x82663CD0;
	sub_82333960(ctx, base);
	// b 0x82663ce4
	goto loc_82663CE4;
loc_82663CD4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x829c7bd8
	ctx.lr = 0x82663CE0;
	sub_829C7BD8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82663CE4:
	// stw r25,1080(r23)
	PPC_STORE_U32(ctx.r23.u32 + 1080, ctx.r25.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663CF8"))) PPC_WEAK_FUNC(sub_82663CF8);
PPC_FUNC_IMPL(__imp__sub_82663CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82663D00;
	__savegprlr_24(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82663d38
	if (ctx.cr6.eq) goto loc_82663D38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82663d3c
	goto loc_82663D3C;
loc_82663D38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82663D3C:
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82663d84
	if (!ctx.cr6.eq) goto loc_82663D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1872);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82663D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663d8c
	if (ctx.cr0.eq) goto loc_82663D8C;
	// lwz r11,1884(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82663d78
	if (ctx.cr6.eq) goto loc_82663D78;
	// lwz r11,7668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7668);
	// b 0x82663d7c
	goto loc_82663D7C;
loc_82663D78:
	// lwz r11,7672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7672);
loc_82663D7C:
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82663d8c
	goto loc_82663D8C;
loc_82663D84:
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r28,r31,2456
	ctx.r28.s64 = ctx.r31.s64 + 2456;
loc_82663D8C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,312
	ctx.r30.s64 = ctx.r28.s64 + 312;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r25,r11,7896
	ctx.r25.s64 = ctx.r11.s64 + 7896;
loc_82663DA0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82663db4
	if (!ctx.cr6.eq) goto loc_82663DB4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663DB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82663e18
	if (!ctx.cr6.gt) goto loc_82663E18;
	// ori r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82663dd0
	if (ctx.cr6.eq) goto loc_82663DD0;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// b 0x82663dd4
	goto loc_82663DD4;
loc_82663DD0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82663DD4:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82409058
	ctx.lr = 0x82663DDC;
	sub_82409058(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663e04
	if (ctx.cr6.eq) goto loc_82663E04;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828166e0
	ctx.lr = 0x82663DF8;
	sub_828166E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82816528
	ctx.lr = 0x82663E00;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82663E04:
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x824f8078
	ctx.lr = 0x82663E0C;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82663e1c
	if (ctx.cr0.eq) goto loc_82663E1C;
loc_82663E18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663E1C:
	// clrlwi. r10,r26,31
	ctx.r10.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82663e48
	if (ctx.cr0.eq) goto loc_82663E48;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// rlwinm r26,r26,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82663e48
	if (ctx.cr6.eq) goto loc_82663E48;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663e48
	if (ctx.cr6.eq) goto loc_82663E48;
	// bl 0x82332db8
	ctx.lr = 0x82663E48;
	sub_82332DB8(ctx, base);
loc_82663E48:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663e64
	if (!ctx.cr0.eq) goto loc_82663E64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x82663da0
	if (ctx.cr6.lt) goto loc_82663DA0;
	// b 0x82663e68
	goto loc_82663E68;
loc_82663E64:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82663E68:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82663f64
	if (ctx.cr6.eq) goto loc_82663F64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r28,84
	ctx.r29.s64 = ctx.r28.s64 + 84;
loc_82663E78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82663f48
	if (ctx.cr6.eq) goto loc_82663F48;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82682100
	ctx.lr = 0x82663E94;
	sub_82682100(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x82663ea8
	if (!ctx.cr6.eq) goto loc_82663EA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663EA8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82663f08
	if (!ctx.cr6.gt) goto loc_82663F08;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82663ec4
	if (!ctx.cr6.eq) goto loc_82663EC4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82663EC4:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82409058
	ctx.lr = 0x82663ECC;
	sub_82409058(ctx, base);
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82663ef4
	if (ctx.cr6.eq) goto loc_82663EF4;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828166e0
	ctx.lr = 0x82663EE8;
	sub_828166E0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82816528
	ctx.lr = 0x82663EF0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82663EF4:
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// bl 0x824f8078
	ctx.lr = 0x82663EFC;
	sub_824F8078(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82663f0c
	if (ctx.cr0.eq) goto loc_82663F0C;
loc_82663F08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82663F0C:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82663f38
	if (ctx.cr0.eq) goto loc_82663F38;
	// lwz r3,404(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r11,r1,276
	ctx.r11.s64 = ctx.r1.s64 + 276;
	// rlwinm r26,r26,0,31,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82663f38
	if (ctx.cr6.eq) goto loc_82663F38;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82663f38
	if (ctx.cr6.eq) goto loc_82663F38;
	// bl 0x82332db8
	ctx.lr = 0x82663F38;
	sub_82332DB8(ctx, base);
loc_82663F38:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne 0x82663f5c
	if (!ctx.cr0.eq) goto loc_82663F5C;
	// bl 0x82333960
	ctx.lr = 0x82663F48;
	sub_82333960(ctx, base);
loc_82663F48:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x82663e78
	if (ctx.cr6.lt) goto loc_82663E78;
	// b 0x82663f64
	goto loc_82663F64;
loc_82663F5C:
	// li r24,0
	ctx.r24.s64 = 0;
	// bl 0x82333960
	ctx.lr = 0x82663F64;
	sub_82333960(ctx, base);
loc_82663F64:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82663F70"))) PPC_WEAK_FUNC(sub_82663F70);
PPC_FUNC_IMPL(__imp__sub_82663F70) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r3,3216
	ctx.r3.s64 = ctx.r3.s64 + 3216;
	// bl 0x824fc978
	ctx.lr = 0x82663F8C;
	sub_824FC978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663FA0"))) PPC_WEAK_FUNC(sub_82663FA0);
PPC_FUNC_IMPL(__imp__sub_82663FA0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82333900
	ctx.lr = 0x82663FB4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82663fd4
	if (ctx.cr0.eq) goto loc_82663FD4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,29632
	ctx.r11.s64 = ctx.r10.s64 + 29632;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82663fd8
	goto loc_82663FD8;
loc_82663FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82663FD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663FE8"))) PPC_WEAK_FUNC(sub_82663FE8);
PPC_FUNC_IMPL(__imp__sub_82663FE8) {
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
	// lwz r3,13400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82664030
	if (!ctx.cr6.eq) goto loc_82664030;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26640
	ctx.r3.s64 = ctx.r10.s64 + -26640;
	// bl 0x82a4c7d8
	ctx.lr = 0x8266401C;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82664024;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x8266402C;
	sub_82816528(ctx, base);
	// stw r3,13400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13400, ctx.r3.u32);
loc_82664030:
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

__attribute__((alias("__imp__sub_82664048"))) PPC_WEAK_FUNC(sub_82664048);
PPC_FUNC_IMPL(__imp__sub_82664048) {
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
	// addi r31,r11,13388
	ctx.r31.s64 = ctx.r11.s64 + 13388;
	// lwz r11,13384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664090
	if (!ctx.cr0.eq) goto loc_82664090;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,29664
	ctx.r9.s64 = ctx.r9.s64 + 29664;
	// stw r11,13384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13384, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26408
	ctx.r3.s64 = ctx.r11.s64 + 26408;
	// bl 0x82a4c758
	ctx.lr = 0x82664090;
	sub_82A4C758(ctx, base);
loc_82664090:
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

__attribute__((alias("__imp__sub_826640A8"))) PPC_WEAK_FUNC(sub_826640A8);
PPC_FUNC_IMPL(__imp__sub_826640A8) {
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
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82833108
	ctx.lr = 0x826640BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826640d0
	if (ctx.cr0.eq) goto loc_826640D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826646c8
	ctx.lr = 0x826640CC;
	sub_826646C8(ctx, base);
	// b 0x826640d4
	goto loc_826640D4;
loc_826640D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826640D4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826640e8
	if (ctx.cr6.eq) goto loc_826640E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_826640E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826640F8"))) PPC_WEAK_FUNC(sub_826640F8);
PPC_FUNC_IMPL(__imp__sub_826640F8) {
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
	// lwz r11,24744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24744);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664138
	if (!ctx.cr0.eq) goto loc_82664138;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24744, ctx.r11.u32);
	// addi r3,r9,28332
	ctx.r3.s64 = ctx.r9.s64 + 28332;
	// bl 0x82816528
	ctx.lr = 0x82664130;
	sub_82816528(ctx, base);
	// stw r3,24740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24740, ctx.r3.u32);
	// b 0x8266413c
	goto loc_8266413C;
loc_82664138:
	// lwz r3,24740(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24740);
loc_8266413C:
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

__attribute__((alias("__imp__sub_82664150"))) PPC_WEAK_FUNC(sub_82664150);
PPC_FUNC_IMPL(__imp__sub_82664150) {
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
	// bl 0x826641a0
	ctx.lr = 0x82664170;
	sub_826641A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664184;
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

__attribute__((alias("__imp__sub_826641A0"))) PPC_WEAK_FUNC(sub_826641A0);
PPC_FUNC_IMPL(__imp__sub_826641A0) {
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
	// addi r31,r11,13396
	ctx.r31.s64 = ctx.r11.s64 + 13396;
	// lwz r11,13392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13392);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826641e8
	if (!ctx.cr0.eq) goto loc_826641E8;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30008
	ctx.r9.s64 = ctx.r9.s64 + 30008;
	// stw r11,13392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13392, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26384
	ctx.r3.s64 = ctx.r11.s64 + 26384;
	// bl 0x82a4c758
	ctx.lr = 0x826641E8;
	sub_82A4C758(ctx, base);
loc_826641E8:
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

__attribute__((alias("__imp__sub_82664200"))) PPC_WEAK_FUNC(sub_82664200);
PPC_FUNC_IMPL(__imp__sub_82664200) {
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
	// beq cr6,0x8266423c
	if (ctx.cr6.eq) goto loc_8266423C;
	// bl 0x8239d8c8
	ctx.lr = 0x82664220;
	sub_8239D8C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82664240
	goto loc_82664240;
loc_8266423C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82664240:
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

__attribute__((alias("__imp__sub_82664258"))) PPC_WEAK_FUNC(sub_82664258);
PPC_FUNC_IMPL(__imp__sub_82664258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82664260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x8266427C;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82664308
	if (!ctx.cr0.eq) goto loc_82664308;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823323b8
	ctx.lr = 0x8266428C;
	sub_823323B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826642A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826642AC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826642f4
	if (ctx.cr0.eq) goto loc_826642F4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// addi r9,r9,30112
	ctx.r9.s64 = ctx.r9.s64 + 30112;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x826642f8
	goto loc_826642F8;
loc_826642F4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826642F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82664304;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82664308:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266432C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664338"))) PPC_WEAK_FUNC(sub_82664338);
PPC_FUNC_IMPL(__imp__sub_82664338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82664340;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x829c80b8
	ctx.lr = 0x82664368;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82664400
	if (!ctx.cr0.eq) goto loc_82664400;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82664388
	if (!ctx.cr6.eq) goto loc_82664388;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82664388:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823323b8
	ctx.lr = 0x82664390;
	sub_823323B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826643A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826643B0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826643ec
	if (ctx.cr0.eq) goto loc_826643EC;
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
	// b 0x826643f0
	goto loc_826643F0;
loc_826643EC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826643F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826643FC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82664400:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266441C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664430"))) PPC_WEAK_FUNC(sub_82664430);
PPC_FUNC_IMPL(__imp__sub_82664430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82664438;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r29.u64);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x829c80b8
	ctx.lr = 0x82664464;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826644fc
	if (!ctx.cr0.eq) goto loc_826644FC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82664484
	if (!ctx.cr6.eq) goto loc_82664484;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82664484:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8239cf50
	ctx.lr = 0x8266448C;
	sub_8239CF50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826644A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x826644AC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x826644e8
	if (ctx.cr0.eq) goto loc_826644E8;
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
	// b 0x826644ec
	goto loc_826644EC;
loc_826644E8:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826644EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x826644F8;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826644FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664528"))) PPC_WEAK_FUNC(sub_82664528);
PPC_FUNC_IMPL(__imp__sub_82664528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82664530;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,104
	ctx.r3.s64 = 104;
	// lwz r27,-6056(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6056);
	// bl 0x82833108
	ctx.lr = 0x82664548;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82664560
	if (ctx.cr0.eq) goto loc_82664560;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826646c8
	ctx.lr = 0x82664558;
	sub_826646C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82664564
	goto loc_82664564;
loc_82664560:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82664564:
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8266462c
	if (ctx.cr6.eq) goto loc_8266462C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// addi r30,r29,68
	ctx.r30.s64 = ctx.r29.s64 + 68;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266462c
	if (ctx.cr6.eq) goto loc_8266462C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,-4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826645C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826645D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8266462c
	if (!ctx.cr6.eq) goto loc_8266462C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82664620
	if (ctx.cr6.eq) goto loc_82664620;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
loc_82664620:
	// stw r27,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826646c0
	goto loc_826646C0;
loc_8266462C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266464C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82816528
	ctx.lr = 0x82664650;
	sub_82816528(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,44(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826646A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x829e3c18
	ctx.lr = 0x826646C0;
	sub_829E3C18(ctx, base);
loc_826646C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826646C8"))) PPC_WEAK_FUNC(sub_826646C8);
PPC_FUNC_IMPL(__imp__sub_826646C8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-8232
	ctx.r11.s64 = ctx.r11.s64 + -8232;
	// addi r10,r10,15084
	ctx.r10.s64 = ctx.r10.s64 + 15084;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r8,-26516
	ctx.r11.s64 = ctx.r8.s64 + -26516;
	// addi r9,r9,-26776
	ctx.r9.s64 = ctx.r9.s64 + -26776;
	// addi r10,r7,27680
	ctx.r10.s64 = ctx.r7.s64 + 27680;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// bl 0x823e9df8
	ctx.lr = 0x82664728;
	sub_823E9DF8(ctx, base);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// addi r10,r10,27600
	ctx.r10.s64 = ctx.r10.s64 + 27600;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x823d5640
	ctx.lr = 0x82664760;
	sub_823D5640(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d5ab8
	ctx.lr = 0x8266476C;
	sub_823D5AB8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d5bb0
	ctx.lr = 0x82664778;
	sub_823D5BB0(ctx, base);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r11,r11,29688
	ctx.r11.s64 = ctx.r11.s64 + 29688;
	// addi r10,r10,29864
	ctx.r10.s64 = ctx.r10.s64 + 29864;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-32225
	ctx.r8.s64 = -2111897600;
	// addi r9,r9,29920
	ctx.r9.s64 = ctx.r9.s64 + 29920;
	// addi r8,r8,29988
	ctx.r8.s64 = ctx.r8.s64 + 29988;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r7,-16484
	ctx.r7.s64 = ctx.r7.s64 + -16484;
	// lwz r6,4(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82664800"))) PPC_WEAK_FUNC(sub_82664800);
PPC_FUNC_IMPL(__imp__sub_82664800) {
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
	// beq cr6,0x82664838
	if (ctx.cr6.eq) goto loc_82664838;
	// bl 0x82664b58
	ctx.lr = 0x82664828;
	sub_82664B58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82664838
	if (!ctx.cr6.eq) goto loc_82664838;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82664844
	goto loc_82664844;
loc_82664838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82664844;
	sub_82333C70(ctx, base);
loc_82664844:
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

__attribute__((alias("__imp__sub_82664860"))) PPC_WEAK_FUNC(sub_82664860);
PPC_FUNC_IMPL(__imp__sub_82664860) {
	PPC_FUNC_PROLOGUE();
	// b 0x82664b58
	sub_82664B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664868"))) PPC_WEAK_FUNC(sub_82664868);
PPC_FUNC_IMPL(__imp__sub_82664868) {
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
	ctx.lr = 0x82664884;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826648ec
	if (ctx.cr0.eq) goto loc_826648EC;
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
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,30032
	ctx.r9.s64 = ctx.r9.s64 + 30032;
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
	// b 0x826648f0
	goto loc_826648F0;
loc_826648EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826648F0:
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

__attribute__((alias("__imp__sub_82664908"))) PPC_WEAK_FUNC(sub_82664908);
PPC_FUNC_IMPL(__imp__sub_82664908) {
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
	// bl 0x82664b58
	ctx.lr = 0x82664928;
	sub_82664B58(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266493c
	if (ctx.cr6.eq) goto loc_8266493C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8266493C;
	sub_82333B08(ctx, base);
loc_8266493C:
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

__attribute__((alias("__imp__sub_82664958"))) PPC_WEAK_FUNC(sub_82664958);
PPC_FUNC_IMPL(__imp__sub_82664958) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82438430
	ctx.lr = 0x82664974;
	sub_82438430(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82664988;
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

__attribute__((alias("__imp__sub_826649A0"))) PPC_WEAK_FUNC(sub_826649A0);
PPC_FUNC_IMPL(__imp__sub_826649A0) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,30112
	ctx.r11.s64 = ctx.r11.s64 + 30112;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826649ec
	if (ctx.cr6.eq) goto loc_826649EC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,-25276
	ctx.r11.s64 = ctx.r11.s64 + -25276;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82332db8
	ctx.lr = 0x826649E4;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_826649EC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-12708
	ctx.r11.s64 = ctx.r11.s64 + -12708;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82664a08
	if (ctx.cr0.eq) goto loc_82664A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82664A08;
	sub_82332DB8(ctx, base);
loc_82664A08:
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

__attribute__((alias("__imp__sub_82664A28"))) PPC_WEAK_FUNC(sub_82664A28);
PPC_FUNC_IMPL(__imp__sub_82664A28) {
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
	ctx.lr = 0x82664A40;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82664a94
	if (ctx.cr0.eq) goto loc_82664A94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82664A50;
	sub_82833180(ctx, base);
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,30032
	ctx.r9.s64 = ctx.r9.s64 + 30032;
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
	// b 0x82664a98
	goto loc_82664A98;
loc_82664A94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82664A98:
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

__attribute__((alias("__imp__sub_82664AB0"))) PPC_WEAK_FUNC(sub_82664AB0);
PPC_FUNC_IMPL(__imp__sub_82664AB0) {
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
	// lwz r11,24728(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24728);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664af0
	if (!ctx.cr0.eq) goto loc_82664AF0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,24728(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24728, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x82664AE8;
	sub_82816528(ctx, base);
	// stw r3,24724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24724, ctx.r3.u32);
	// b 0x82664af4
	goto loc_82664AF4;
loc_82664AF0:
	// lwz r3,24724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24724);
loc_82664AF4:
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

__attribute__((alias("__imp__sub_82664B08"))) PPC_WEAK_FUNC(sub_82664B08);
PPC_FUNC_IMPL(__imp__sub_82664B08) {
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
	// bl 0x82664b58
	ctx.lr = 0x82664B28;
	sub_82664B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664B3C;
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

__attribute__((alias("__imp__sub_82664B58"))) PPC_WEAK_FUNC(sub_82664B58);
PPC_FUNC_IMPL(__imp__sub_82664B58) {
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
	// addi r31,r11,24732
	ctx.r31.s64 = ctx.r11.s64 + 24732;
	// lwz r11,24736(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24736);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664ba0
	if (!ctx.cr0.eq) goto loc_82664BA0;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30132
	ctx.r9.s64 = ctx.r9.s64 + 30132;
	// stw r11,24736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24736, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26432
	ctx.r3.s64 = ctx.r11.s64 + 26432;
	// bl 0x82a4c758
	ctx.lr = 0x82664BA0;
	sub_82A4C758(ctx, base);
loc_82664BA0:
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

__attribute__((alias("__imp__sub_82664BB8"))) PPC_WEAK_FUNC(sub_82664BB8);
PPC_FUNC_IMPL(__imp__sub_82664BB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82661728
	sub_82661728(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664BC0"))) PPC_WEAK_FUNC(sub_82664BC0);
PPC_FUNC_IMPL(__imp__sub_82664BC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1484(r12)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r12.u32 + 1484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82664BD0"))) PPC_WEAK_FUNC(sub_82664BD0);
PPC_FUNC_IMPL(__imp__sub_82664BD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x825d6ef8
	sub_825D6EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664BD8"))) PPC_WEAK_FUNC(sub_82664BD8);
PPC_FUNC_IMPL(__imp__sub_82664BD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82e59168
	sub_82E59168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664BE0"))) PPC_WEAK_FUNC(sub_82664BE0);
PPC_FUNC_IMPL(__imp__sub_82664BE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x82661798
	sub_82661798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664BE8"))) PPC_WEAK_FUNC(sub_82664BE8);
PPC_FUNC_IMPL(__imp__sub_82664BE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8265c2d0
	sub_8265C2D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664BF0"))) PPC_WEAK_FUNC(sub_82664BF0);
PPC_FUNC_IMPL(__imp__sub_82664BF0) {
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
	// addi r31,r11,13376
	ctx.r31.s64 = ctx.r11.s64 + 13376;
	// lwz r11,13380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13380);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664c38
	if (!ctx.cr0.eq) goto loc_82664C38;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,30172
	ctx.r9.s64 = ctx.r9.s64 + 30172;
	// stw r11,13380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13380, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26456
	ctx.r3.s64 = ctx.r11.s64 + 26456;
	// bl 0x82a4c758
	ctx.lr = 0x82664C38;
	sub_82A4C758(ctx, base);
loc_82664C38:
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

__attribute__((alias("__imp__sub_82664C50"))) PPC_WEAK_FUNC(sub_82664C50);
PPC_FUNC_IMPL(__imp__sub_82664C50) {
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
	// li r3,792
	ctx.r3.s64 = 792;
	// bl 0x82833108
	ctx.lr = 0x82664C64;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82664c74
	if (ctx.cr0.eq) goto loc_82664C74;
	// bl 0x82810710
	ctx.lr = 0x82664C70;
	sub_82810710(ctx, base);
	// b 0x82664c78
	goto loc_82664C78;
loc_82664C74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82664C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C88"))) PPC_WEAK_FUNC(sub_82664C88);
PPC_FUNC_IMPL(__imp__sub_82664C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,792
	ctx.r3.s64 = 792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C90"))) PPC_WEAK_FUNC(sub_82664C90);
PPC_FUNC_IMPL(__imp__sub_82664C90) {
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
	// lwz r11,24720(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24720);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82664cd0
	if (!ctx.cr0.eq) goto loc_82664CD0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32225
	ctx.r9.s64 = -2111897600;
	// stw r11,24720(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24720, ctx.r11.u32);
	// addi r3,r9,30152
	ctx.r3.s64 = ctx.r9.s64 + 30152;
	// bl 0x82816528
	ctx.lr = 0x82664CC8;
	sub_82816528(ctx, base);
	// stw r3,24716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24716, ctx.r3.u32);
	// b 0x82664cd4
	goto loc_82664CD4;
loc_82664CD0:
	// lwz r3,24716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24716);
loc_82664CD4:
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

__attribute__((alias("__imp__sub_82664CE8"))) PPC_WEAK_FUNC(sub_82664CE8);
PPC_FUNC_IMPL(__imp__sub_82664CE8) {
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
	// bl 0x82664bf0
	ctx.lr = 0x82664D08;
	sub_82664BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82664D1C;
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

__attribute__((alias("__imp__sub_82664D38"))) PPC_WEAK_FUNC(sub_82664D38);
PPC_FUNC_IMPL(__imp__sub_82664D38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-13612
	ctx.r3.s64 = ctx.r11.s64 + -13612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664D48"))) PPC_WEAK_FUNC(sub_82664D48);
PPC_FUNC_IMPL(__imp__sub_82664D48) {
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
	// beq cr6,0x82664d80
	if (ctx.cr6.eq) goto loc_82664D80;
	// bl 0x825ae870
	ctx.lr = 0x82664D70;
	sub_825AE870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82664d80
	if (!ctx.cr6.eq) goto loc_82664D80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82664d8c
	goto loc_82664D8C;
loc_82664D80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x82664D8C;
	sub_8234E2D8(ctx, base);
loc_82664D8C:
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

__attribute__((alias("__imp__sub_82664DA8"))) PPC_WEAK_FUNC(sub_82664DA8);
PPC_FUNC_IMPL(__imp__sub_82664DA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825ae870
	sub_825AE870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664DB0"))) PPC_WEAK_FUNC(sub_82664DB0);
PPC_FUNC_IMPL(__imp__sub_82664DB0) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82664DD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82664e20
	if (ctx.cr0.eq) goto loc_82664E20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x82664DE4;
	sub_8234E3E0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,30512
	ctx.r11.s64 = ctx.r11.s64 + 30512;
	// addi r10,r10,32180
	ctx.r10.s64 = ctx.r10.s64 + 32180;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// b 0x82664e24
	goto loc_82664E24;
loc_82664E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82664E24:
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

__attribute__((alias("__imp__sub_82664E40"))) PPC_WEAK_FUNC(sub_82664E40);
PPC_FUNC_IMPL(__imp__sub_82664E40) {
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
	// bl 0x825ae870
	ctx.lr = 0x82664E60;
	sub_825AE870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82664e70
	if (!ctx.cr6.eq) goto loc_82664E70;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82664e88
	goto loc_82664E88;
loc_82664E70:
	// bl 0x823323b8
	ctx.lr = 0x82664E74;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82664e88
	if (ctx.cr6.eq) goto loc_82664E88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82664E88;
	sub_8234D0A0(ctx, base);
loc_82664E88:
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

__attribute__((alias("__imp__sub_82664EA0"))) PPC_WEAK_FUNC(sub_82664EA0);
PPC_FUNC_IMPL(__imp__sub_82664EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82664EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82664EB4;
	sub_8265C840(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,30512
	ctx.r11.s64 = ctx.r11.s64 + 30512;
	// addi r10,r10,32180
	ctx.r10.s64 = ctx.r10.s64 + 32180;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// bl 0x828165a8
	ctx.lr = 0x82664EE4;
	sub_828165A8(ctx, base);
	// stw r3,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30240
	ctx.r3.s64 = ctx.r11.s64 + 30240;
	// bl 0x828165a8
	ctx.lr = 0x82664EF4;
	sub_828165A8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r30.u32);
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// bl 0x828165a8
	ctx.lr = 0x82664F10;
	sub_828165A8(ctx, base);
	// stw r3,2076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2076, ctx.r3.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30332
	ctx.r3.s64 = ctx.r11.s64 + 30332;
	// bl 0x828165a8
	ctx.lr = 0x82664F20;
	sub_828165A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,2080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2080, ctx.r3.u32);
	// addi r9,r11,-27300
	ctx.r9.s64 = ctx.r11.s64 + -27300;
	// stw r30,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r30.u32);
	// lis r6,-31961
	ctx.r6.s64 = -2094596096;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f12,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,18284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18284);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f13,2220(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2220);
	ctx.f13.f64 = double(temp.f32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r11,30
	ctx.r11.s64 = 30;
	// lfs f0,-28784(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -28784);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r9.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f10,17668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17668);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// lfs f11,18116(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18116);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,24088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f0.f64 = double(temp.f32);
	// stw r5,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r5.u32);
	// stw r4,2116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2116, ctx.r4.u32);
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r8,2108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2108, ctx.r8.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,2104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2104, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r29,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82664FD8;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82a455d0
	ctx.lr = 0x82664FE8;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// bl 0x823327e0
	ctx.lr = 0x82665008;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x82665018;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82665030;
	sub_823327E0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x82665040;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82665050;
	sub_82510B28(ctx, base);
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82665060;
	sub_82510B28(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82665078;
	sub_823327E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x82665088;
	sub_82A455D0(ctx, base);
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82665098;
	sub_82510B28(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x826650A8;
	sub_82816528(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82665470
	ctx.lr = 0x826650B4;
	sub_82665470(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,20352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20352);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f13,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lfs f12,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665100"))) PPC_WEAK_FUNC(sub_82665100);
PPC_FUNC_IMPL(__imp__sub_82665100) {
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
	// bl 0x8265cda8
	ctx.lr = 0x8266511C;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266513c
	if (ctx.cr0.eq) goto loc_8266513C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266513c
	if (ctx.cr6.eq) goto loc_8266513C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82665140
	goto loc_82665140;
loc_8266513C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82665140:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8548
	ctx.r3.s64 = ctx.r11.s64 + -8548;
	// bl 0x82816528
	ctx.lr = 0x8266514C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x8266515C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8266516C;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82665188"))) PPC_WEAK_FUNC(sub_82665188);
PPC_FUNC_IMPL(__imp__sub_82665188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30376
	ctx.r3.s64 = ctx.r11.s64 + 30376;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665198"))) PPC_WEAK_FUNC(sub_82665198);
PPC_FUNC_IMPL(__imp__sub_82665198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30432
	ctx.r3.s64 = ctx.r11.s64 + 30432;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826651A8"))) PPC_WEAK_FUNC(sub_826651A8);
PPC_FUNC_IMPL(__imp__sub_826651A8) {
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
	// bl 0x8265e4f0
	ctx.lr = 0x826651C0;
	sub_8265E4F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3280(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3280);
	// bl 0x826651e0
	ctx.lr = 0x826651CC;
	sub_826651E0(ctx, base);
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

__attribute__((alias("__imp__sub_826651E0"))) PPC_WEAK_FUNC(sub_826651E0);
PPC_FUNC_IMPL(__imp__sub_826651E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x826651E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x829c2520
	ctx.lr = 0x826651F8;
	sub_829C2520(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826652c4
	if (ctx.cr0.eq) goto loc_826652C4;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,30496
	ctx.r3.s64 = ctx.r11.s64 + 30496;
	// bl 0x82816528
	ctx.lr = 0x8266520C;
	sub_82816528(ctx, base);
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665234
	if (ctx.cr6.eq) goto loc_82665234;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82665238
	goto loc_82665238;
loc_82665234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82665238:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826652c4
	if (ctx.cr6.eq) goto loc_826652C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bl 0x8282d4b0
	ctx.lr = 0x82665268;
	sub_8282D4B0(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665280
	if (ctx.cr6.eq) goto loc_82665280;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82665280:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82665294
	if (!ctx.cr6.eq) goto loc_82665294;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826652c4
	if (!ctx.cr0.eq) goto loc_826652C4;
loc_82665294:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82412b58
	ctx.lr = 0x8266529C;
	sub_82412B58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826652C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826652C4:
	// lwz r11,3280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3280);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826652d8
	if (ctx.cr6.eq) goto loc_826652D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826652D8:
	// stw r11,1884(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1884, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826652E8"))) PPC_WEAK_FUNC(sub_826652E8);
PPC_FUNC_IMPL(__imp__sub_826652E8) {
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
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826604f8
	ctx.lr = 0x82665318;
	sub_826604F8(ctx, base);
	// bl 0x825ae870
	ctx.lr = 0x8266531C;
	sub_825AE870(ctx, base);
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
	ctx.lr = 0x82665334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82665340
	if (!ctx.cr0.eq) goto loc_82665340;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82665340:
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82665360"))) PPC_WEAK_FUNC(sub_82665360);
PPC_FUNC_IMPL(__imp__sub_82665360) {
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-72
	ctx.r10.s64 = ctx.r11.s64 + -72;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a2dd0
	ctx.lr = 0x826653B0;
	sub_828A2DD0(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// lwz r11,-72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826653D0;
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

__attribute__((alias("__imp__sub_826653E8"))) PPC_WEAK_FUNC(sub_826653E8);
PPC_FUNC_IMPL(__imp__sub_826653E8) {
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x826653FC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266540c
	if (ctx.cr0.eq) goto loc_8266540C;
	// bl 0x82379588
	ctx.lr = 0x82665408;
	sub_82379588(ctx, base);
	// b 0x82665410
	goto loc_82665410;
loc_8266540C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82665410:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665420"))) PPC_WEAK_FUNC(sub_82665420);
PPC_FUNC_IMPL(__imp__sub_82665420) {
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
	// bl 0x823c6f28
	ctx.lr = 0x82665440;
	sub_823C6F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665454;
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

__attribute__((alias("__imp__sub_82665470"))) PPC_WEAK_FUNC(sub_82665470);
PPC_FUNC_IMPL(__imp__sub_82665470) {
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
	// addi r31,r11,13408
	ctx.r31.s64 = ctx.r11.s64 + 13408;
	// lwz r11,13404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826654b8
	if (!ctx.cr0.eq) goto loc_826654B8;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-796
	ctx.r9.s64 = ctx.r9.s64 + -796;
	// stw r11,13404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13404, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26480
	ctx.r3.s64 = ctx.r11.s64 + 26480;
	// bl 0x82a4c758
	ctx.lr = 0x826654B8;
	sub_82A4C758(ctx, base);
loc_826654B8:
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

__attribute__((alias("__imp__sub_826654D0"))) PPC_WEAK_FUNC(sub_826654D0);
PPC_FUNC_IMPL(__imp__sub_826654D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82664e40
	sub_82664E40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826654D8"))) PPC_WEAK_FUNC(sub_826654D8);
PPC_FUNC_IMPL(__imp__sub_826654D8) {
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
	// beq cr6,0x82665510
	if (ctx.cr6.eq) goto loc_82665510;
	// bl 0x82666590
	ctx.lr = 0x82665500;
	sub_82666590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82665510
	if (!ctx.cr6.eq) goto loc_82665510;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266551c
	goto loc_8266551C;
loc_82665510:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265c138
	ctx.lr = 0x8266551C;
	sub_8265C138(ctx, base);
loc_8266551C:
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

__attribute__((alias("__imp__sub_82665538"))) PPC_WEAK_FUNC(sub_82665538);
PPC_FUNC_IMPL(__imp__sub_82665538) {
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
	// bl 0x82666590
	ctx.lr = 0x82665558;
	sub_82666590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82665568
	if (!ctx.cr6.eq) goto loc_82665568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82665580
	goto loc_82665580;
loc_82665568:
	// bl 0x82664048
	ctx.lr = 0x8266556C;
	sub_82664048(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82665580
	if (ctx.cr6.eq) goto loc_82665580;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82339d80
	ctx.lr = 0x82665580;
	sub_82339D80(ctx, base);
loc_82665580:
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

__attribute__((alias("__imp__sub_82665598"))) PPC_WEAK_FUNC(sub_82665598);
PPC_FUNC_IMPL(__imp__sub_82665598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826655A8"))) PPC_WEAK_FUNC(sub_826655A8);
PPC_FUNC_IMPL(__imp__sub_826655A8) {
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
	// beq cr6,0x826655e0
	if (ctx.cr6.eq) goto loc_826655E0;
	// bl 0x826433b0
	ctx.lr = 0x826655D0;
	sub_826433B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826655e0
	if (!ctx.cr6.eq) goto loc_826655E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826655ec
	goto loc_826655EC;
loc_826655E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x826655EC;
	sub_8234E2D8(ctx, base);
loc_826655EC:
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

__attribute__((alias("__imp__sub_82665608"))) PPC_WEAK_FUNC(sub_82665608);
PPC_FUNC_IMPL(__imp__sub_82665608) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82665624;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82665638
	if (ctx.cr0.eq) goto loc_82665638;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826656b0
	ctx.lr = 0x82665634;
	sub_826656B0(ctx, base);
	// b 0x8266563c
	goto loc_8266563C;
loc_82665638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266563C:
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

__attribute__((alias("__imp__sub_82665650"))) PPC_WEAK_FUNC(sub_82665650);
PPC_FUNC_IMPL(__imp__sub_82665650) {
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
	// bl 0x826433b0
	ctx.lr = 0x82665670;
	sub_826433B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82665680
	if (!ctx.cr6.eq) goto loc_82665680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82665698
	goto loc_82665698;
loc_82665680:
	// bl 0x823323b8
	ctx.lr = 0x82665684;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82665698
	if (ctx.cr6.eq) goto loc_82665698;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82665698;
	sub_8234D0A0(ctx, base);
loc_82665698:
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

__attribute__((alias("__imp__sub_826656B0"))) PPC_WEAK_FUNC(sub_826656B0);
PPC_FUNC_IMPL(__imp__sub_826656B0) {
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
	// bl 0x8234e3e0
	ctx.lr = 0x826656D0;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-32656
	ctx.r11.s64 = ctx.r11.s64 + -32656;
	// addi r10,r10,-30988
	ctx.r10.s64 = ctx.r10.s64 + -30988;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// lwz r11,3284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3284);
	// stw r11,3284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3284, ctx.r11.u32);
	// lwz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3288);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82665728"))) PPC_WEAK_FUNC(sub_82665728);
PPC_FUNC_IMPL(__imp__sub_82665728) {
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
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
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
	// ble cr6,0x82665794
	if (!ctx.cr6.gt) goto loc_82665794;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82665764:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82665784
	if (ctx.cr6.eq) goto loc_82665784;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82665764
	if (ctx.cr6.lt) goto loc_82665764;
	// b 0x82665794
	goto loc_82665794;
loc_82665784:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82665794:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826657bc
	if (ctx.cr6.eq) goto loc_826657BC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826657B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826657c0
	goto loc_826657C0;
loc_826657BC:
	// bl 0x8265c670
	ctx.lr = 0x826657C0;
	sub_8265C670(ctx, base);
loc_826657C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826657D0"))) PPC_WEAK_FUNC(sub_826657D0);
PPC_FUNC_IMPL(__imp__sub_826657D0) {
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
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82665830
	if (!ctx.cr6.gt) goto loc_82665830;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826657FC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8266581c
	if (ctx.cr6.eq) goto loc_8266581C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x826657fc
	if (ctx.cr6.lt) goto loc_826657FC;
	// b 0x82665830
	goto loc_82665830;
loc_8266581C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82665838
	if (!ctx.cr6.eq) goto loc_82665838;
loc_82665830:
	// bl 0x8265c718
	ctx.lr = 0x82665834;
	sub_8265C718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82665838:
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

__attribute__((alias("__imp__sub_82665850"))) PPC_WEAK_FUNC(sub_82665850);
PPC_FUNC_IMPL(__imp__sub_82665850) {
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
	// addi r11,r11,-21136
	ctx.r11.s64 = ctx.r11.s64 + -21136;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x826658d0
	if (!ctx.cr6.gt) goto loc_826658D0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8266588C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x826658ac
	if (ctx.cr6.eq) goto loc_826658AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8266588c
	if (ctx.cr6.lt) goto loc_8266588C;
	// b 0x826658d0
	goto loc_826658D0;
loc_826658AC:
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
	ctx.lr = 0x826658C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x826658dc
	if (!ctx.cr0.eq) goto loc_826658DC;
loc_826658D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8265c798
	ctx.lr = 0x826658DC;
	sub_8265C798(ctx, base);
loc_826658DC:
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

__attribute__((alias("__imp__sub_826658F8"))) PPC_WEAK_FUNC(sub_826658F8);
PPC_FUNC_IMPL(__imp__sub_826658F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82665900;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x8266590C;
	sub_8265C840(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-32656
	ctx.r11.s64 = ctx.r11.s64 + -32656;
	// addi r10,r10,-30988
	ctx.r10.s64 = ctx.r10.s64 + -30988;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r29,1932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1932, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// bl 0x823327e0
	ctx.lr = 0x82665958;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// bl 0x823327e0
	ctx.lr = 0x82665970;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// bl 0x823327e0
	ctx.lr = 0x82665988;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// bl 0x823327e0
	ctx.lr = 0x826659A0;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// bl 0x823327e0
	ctx.lr = 0x826659B8;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// bl 0x823327e0
	ctx.lr = 0x826659D0;
	sub_823327E0(ctx, base);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// bl 0x823327e0
	ctx.lr = 0x826659E8;
	sub_823327E0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x826659F8;
	sub_828165A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stb r29,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r29.u8);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r8,1768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f0,-11456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,24712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24712);
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r6,2156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// addi r30,r9,24708
	ctx.r30.s64 = ctx.r9.s64 + 24708;
	// bne 0x82665a6c
	if (!ctx.cr0.eq) goto loc_82665A6C;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23120
	ctx.r9.s64 = ctx.r9.s64 + -23120;
	// stw r11,24712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24712, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26616
	ctx.r3.s64 = ctx.r11.s64 + 26616;
	// bl 0x82a4c758
	ctx.lr = 0x82665A6C;
	sub_82A4C758(ctx, base);
loc_82665A6C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82665ab0
	if (ctx.cr6.eq) goto loc_82665AB0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,11532
	ctx.r4.s64 = ctx.r10.s64 + 11532;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82665AB0;
	sub_828C5680(ctx, base);
loc_82665AB0:
	// lwz r10,2032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// li r11,100
	ctx.r11.s64 = 100;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// addi r3,r7,32344
	ctx.r3.s64 = ctx.r7.s64 + 32344;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r29.u32);
	// stw r29,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r29.u32);
	// stw r8,1956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1956, ctx.r8.u32);
	// stw r28,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r28.u32);
	// stw r11,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82665AF0;
	sub_82816528(ctx, base);
	// lis r11,7936
	ctx.r11.s64 = 520093696;
	// stw r3,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,46534
	ctx.r11.u64 = ctx.r11.u64 | 46534;
	// stw r11,3104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3104, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665B10"))) PPC_WEAK_FUNC(sub_82665B10);
PPC_FUNC_IMPL(__imp__sub_82665B10) {
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
	// bl 0x8265cda8
	ctx.lr = 0x82665B2C;
	sub_8265CDA8(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82665b4c
	if (ctx.cr0.eq) goto loc_82665B4C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82665b4c
	if (ctx.cr6.eq) goto loc_82665B4C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82665b50
	goto loc_82665B50;
loc_82665B4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82665B50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6068
	ctx.r3.s64 = ctx.r11.s64 + -6068;
	// bl 0x82816528
	ctx.lr = 0x82665B5C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,32348
	ctx.r3.s64 = ctx.r11.s64 + 32348;
	// bl 0x82816528
	ctx.lr = 0x82665B6C;
	sub_82816528(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82665B80;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6036
	ctx.r3.s64 = ctx.r11.s64 + -6036;
	// bl 0x82816528
	ctx.lr = 0x82665B8C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82665B9C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82665BAC;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82665BC8"))) PPC_WEAK_FUNC(sub_82665BC8);
PPC_FUNC_IMPL(__imp__sub_82665BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82665BD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8265dc48
	ctx.lr = 0x82665BE4;
	sub_8265DC48(ctx, base);
	// mulli r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 * 24;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r4,r10,560
	ctx.r4.s64 = ctx.r10.s64 + 560;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x82665C18;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r29,r11,7896
	ctx.r29.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816cf8
	ctx.lr = 0x82665C38;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x82665C44;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82665C4C;
	sub_82333960(ctx, base);
	// lwz r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r24,172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82665c68
	if (!ctx.cr6.eq) goto loc_82665C68;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82665c70
	if (ctx.cr6.eq) goto loc_82665C70;
loc_82665C68:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82665c74
	goto loc_82665C74;
loc_82665C70:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82665C74:
	// addi r11,r31,21
	ctx.r11.s64 = ctx.r31.s64 + 21;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,32360
	ctx.r4.s64 = ctx.r10.s64 + 32360;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r6,r25,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// bl 0x82816c30
	ctx.lr = 0x82665C94;
	sub_82816C30(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665ca8
	if (!ctx.cr6.eq) goto loc_82665CA8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82665CA8:
	// bl 0x828165a8
	ctx.lr = 0x82665CAC;
	sub_828165A8(ctx, base);
	// stw r3,3284(r26)
	PPC_STORE_U32(ctx.r26.u32 + 3284, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82665CB8;
	sub_82333960(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82665ccc
	if (!ctx.cr6.eq) goto loc_82665CCC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82665cd4
	if (ctx.cr6.eq) goto loc_82665CD4;
loc_82665CCC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82665cd8
	goto loc_82665CD8;
loc_82665CD4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82665CD8:
	// lwzx r6,r25,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,32456
	ctx.r4.s64 = ctx.r11.s64 + 32456;
	// bl 0x82816c30
	ctx.lr = 0x82665CF0;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82665CFC;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82665D04;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665d18
	if (!ctx.cr6.eq) goto loc_82665D18;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82665D18:
	// bl 0x828165a8
	ctx.lr = 0x82665D1C;
	sub_828165A8(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// addi r4,r26,3160
	ctx.r4.s64 = ctx.r26.s64 + 3160;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82665D40;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82665d54
	if (!ctx.cr6.eq) goto loc_82665D54;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82665d5c
	if (ctx.cr6.eq) goto loc_82665D5C;
loc_82665D54:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82665d60
	goto loc_82665D60;
loc_82665D5C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82665D60:
	// lwzx r6,r25,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,32576
	ctx.r4.s64 = ctx.r11.s64 + 32576;
	// bl 0x82816c30
	ctx.lr = 0x82665D78;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82665D84;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82665D8C;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665da0
	if (!ctx.cr6.eq) goto loc_82665DA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82665DA0:
	// bl 0x828165a8
	ctx.lr = 0x82665DA4;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r26,3164
	ctx.r4.s64 = ctx.r26.s64 + 3164;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82665DC0;
	sub_823CF190(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// bne cr6,0x82665dd4
	if (!ctx.cr6.eq) goto loc_82665DD4;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82665ddc
	if (ctx.cr6.eq) goto loc_82665DDC;
loc_82665DD4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82665de0
	goto loc_82665DE0;
loc_82665DDC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82665DE0:
	// lwzx r6,r25,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r28.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r4,r11,32704
	ctx.r4.s64 = ctx.r11.s64 + 32704;
	// bl 0x82816c30
	ctx.lr = 0x82665DF8;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82400b48
	ctx.lr = 0x82665E04;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82665E0C;
	sub_82333960(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82665e20
	if (!ctx.cr6.eq) goto loc_82665E20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82665E20:
	// bl 0x828165a8
	ctx.lr = 0x82665E24;
	sub_828165A8(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r26,3168
	ctx.r4.s64 = ctx.r26.s64 + 3168;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82665E40;
	sub_823CF190(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82665E48;
	sub_82333960(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x82665E50;
	sub_82333960(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82665E58"))) PPC_WEAK_FUNC(sub_82665E58);
PPC_FUNC_IMPL(__imp__sub_82665E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82665E60;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r5,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r7,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r7.u64);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r3,800(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 800);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665E94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826609a8
	ctx.lr = 0x82665EBC;
	sub_826609A8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82666238
	if (!ctx.cr6.eq) goto loc_82666238;
	// bl 0x823956c8
	ctx.lr = 0x82665ED0;
	sub_823956C8(ctx, base);
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
	ctx.lr = 0x82665EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// bne 0x82665efc
	if (!ctx.cr0.eq) goto loc_82665EFC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82665EFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3284(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3284);
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82665F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82666238
	if (ctx.cr6.eq) goto loc_82666238;
	// lwz r11,6156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6156);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82665f30
	if (ctx.cr6.eq) goto loc_82665F30;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
loc_82665F30:
	// lwz r11,11164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82665f88
	if (ctx.cr6.eq) goto loc_82665F88;
	// lwz r11,8768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// lwz r9,8776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82665F5C;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82665f88
	if (ctx.cr0.eq) goto loc_82665F88;
	// lwz r11,8772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// lwz r10,8776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// lwz r9,8768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82665f88
	if (ctx.cr6.eq) goto loc_82665F88;
loc_82665F80:
	// stw r26,3280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3280, ctx.r26.u32);
	// b 0x82665ffc
	goto loc_82665FFC;
loc_82665F88:
	// lwz r11,8768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// lwz r9,8776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82665FA8;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82665ff4
	if (ctx.cr0.eq) goto loc_82665FF4;
	// lwz r11,8768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// lwz r9,8776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82665FD0;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82665f80
	if (ctx.cr0.eq) goto loc_82665F80;
	// lwz r11,8772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// lwz r10,8776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// lwz r9,8768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bne cr6,0x82665f80
	if (!ctx.cr6.eq) goto loc_82665F80;
loc_82665FF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3280, ctx.r11.u32);
loc_82665FFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,3280(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3280);
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8768);
	// lwz r10,8772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8772);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,8776(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8776);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d9b0
	ctx.lr = 0x82666038;
	sub_8281D9B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8281d960
	ctx.lr = 0x82666040;
	sub_8281D960(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826660b4
	if (ctx.cr0.eq) goto loc_826660B4;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f8,1504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,572(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f11,f9,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fmuls f9,f6,f11
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_826660B4:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,620
	ctx.r29.s64 = ctx.r31.s64 + 620;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266610C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// ble cr6,0x826661b4
	if (!ctx.cr6.gt) goto loc_826661B4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332e18
	ctx.lr = 0x82666124;
	sub_82332E18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1576);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826661B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826661c0
	goto loc_826661C0;
loc_826661B4:
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826661C0:
	// stw r27,1632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1632, ctx.r27.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,1636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1636, ctx.r28.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r29,1640(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1640, ctx.r29.u32);
	// addi r5,r30,1632
	ctx.r5.s64 = ctx.r30.s64 + 1632;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,1504(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,32668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32668);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f31,f0
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x826c3f20
	ctx.lr = 0x826661F4;
	sub_826C3F20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 576, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 580, ctx.r11.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82666238
	if (!ctx.cr6.eq) goto loc_82666238;
	// lwz r11,8828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8828);
	// stw r26,8852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8852, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666234
	if (ctx.cr6.eq) goto loc_82666234;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,8768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8768, ctx.r11.u32);
	// b 0x82666238
	goto loc_82666238;
loc_82666234:
	// stw r26,8768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8768, ctx.r26.u32);
loc_82666238:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666248"))) PPC_WEAK_FUNC(sub_82666248);
PPC_FUNC_IMPL(__imp__sub_82666248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82666250;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82666278
	if (!ctx.cr6.eq) goto loc_82666278;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82666370
	if (ctx.cr6.lt) goto loc_82666370;
loc_82666278:
	// lwz r11,956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82666370
	if (!ctx.cr6.eq) goto loc_82666370;
	// lbz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82666370
	if (!ctx.cr6.eq) goto loc_82666370;
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x82666298;
	sub_824090E0(ctx, base);
	// lbz r11,1632(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r9,3280(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-32712
	ctx.r10.s64 = ctx.r10.s64 + -32712;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lwz r11,6156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826662e0
	if (ctx.cr6.eq) goto loc_826662E0;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,624(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_826662E0:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,808
	ctx.r4.s64 = ctx.r11.s64 + 808;
	// bl 0x82873b58
	ctx.lr = 0x826662F0;
	sub_82873B58(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82666364
	if (!ctx.cr6.gt) goto loc_82666364;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r29,r11,28360
	ctx.r29.s64 = ctx.r11.s64 + 28360;
loc_8266630C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666358
	if (ctx.cr6.eq) goto loc_82666358;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,800(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82666358
	if (ctx.cr6.eq) goto loc_82666358;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// bl 0x82816528
	ctx.lr = 0x82666338;
	sub_82816528(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c710
	ctx.lr = 0x82666358;
	sub_8282C710(ctx, base);
loc_82666358:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8266630c
	if (!ctx.cr0.eq) goto loc_8266630C;
loc_82666364:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239d768
	ctx.lr = 0x8266636C;
	sub_8239D768(ctx, base);
	// b 0x82666388
	goto loc_82666388;
loc_82666370:
	// lwz r3,800(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82666388
	if (ctx.cr6.eq) goto loc_82666388;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,1632(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1632);
	// bl 0x82893210
	ctx.lr = 0x82666388;
	sub_82893210(ctx, base);
loc_82666388:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666390"))) PPC_WEAK_FUNC(sub_82666390);
PPC_FUNC_IMPL(__imp__sub_82666390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82666398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x826663d4
	if (ctx.cr6.eq) goto loc_826663D4;
	// bl 0x82666590
	ctx.lr = 0x826663B0;
	sub_82666590(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826663C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bne 0x826663d8
	if (!ctx.cr0.eq) goto loc_826663D8;
loc_826663D4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_826663D8:
	// lwz r3,800(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 800);
	// bl 0x824090e0
	ctx.lr = 0x826663E0;
	sub_824090E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,6156(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8266641c
	if (ctx.cr6.eq) goto loc_8266641C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,11236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11236, ctx.r11.u32);
	// stw r10,11240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11240, ctx.r10.u32);
	// stw r9,11244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11244, ctx.r9.u32);
loc_8266641C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,3280(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3280, ctx.r11.u32);
	// bl 0x82660e70
	ctx.lr = 0x82666430;
	sub_82660E70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666438"))) PPC_WEAK_FUNC(sub_82666438);
PPC_FUNC_IMPL(__imp__sub_82666438) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,3288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3288);
	// lwz r10,2032(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2032);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666478"))) PPC_WEAK_FUNC(sub_82666478);
PPC_FUNC_IMPL(__imp__sub_82666478) {
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8243c740
	ctx.lr = 0x826664A0;
	sub_8243C740(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// bl 0x828db3f8
	ctx.lr = 0x826664B0;
	sub_828DB3F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826664CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_826664E8"))) PPC_WEAK_FUNC(sub_826664E8);
PPC_FUNC_IMPL(__imp__sub_826664E8) {
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
	ctx.lr = 0x826664FC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8266651c
	if (ctx.cr0.eq) goto loc_8266651C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-32712
	ctx.r11.s64 = ctx.r10.s64 + -32712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82666520
	goto loc_82666520;
loc_8266651C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82666520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666530"))) PPC_WEAK_FUNC(sub_82666530);
PPC_FUNC_IMPL(__imp__sub_82666530) {
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
	// lwz r3,13420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82666578
	if (!ctx.cr6.eq) goto loc_82666578;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26608
	ctx.r3.s64 = ctx.r10.s64 + -26608;
	// bl 0x82a4c7d8
	ctx.lr = 0x82666564;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x8266656C;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82666574;
	sub_82816528(ctx, base);
	// stw r3,13420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13420, ctx.r3.u32);
loc_82666578:
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

__attribute__((alias("__imp__sub_82666590"))) PPC_WEAK_FUNC(sub_82666590);
PPC_FUNC_IMPL(__imp__sub_82666590) {
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
	// addi r31,r11,13416
	ctx.r31.s64 = ctx.r11.s64 + 13416;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826665d8
	if (!ctx.cr0.eq) goto loc_826665D8;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-32680
	ctx.r9.s64 = ctx.r9.s64 + -32680;
	// stw r11,13412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13412, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26640
	ctx.r3.s64 = ctx.r11.s64 + 26640;
	// bl 0x82a4c758
	ctx.lr = 0x826665D8;
	sub_82A4C758(ctx, base);
loc_826665D8:
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

__attribute__((alias("__imp__sub_826665F0"))) PPC_WEAK_FUNC(sub_826665F0);
PPC_FUNC_IMPL(__imp__sub_826665F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82665650
	sub_82665650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826665F8"))) PPC_WEAK_FUNC(sub_826665F8);
PPC_FUNC_IMPL(__imp__sub_826665F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5976
	ctx.r3.s64 = ctx.r11.s64 + -5976;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666608"))) PPC_WEAK_FUNC(sub_82666608);
PPC_FUNC_IMPL(__imp__sub_82666608) {
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
	// beq cr6,0x82666640
	if (ctx.cr6.eq) goto loc_82666640;
	// bl 0x823c4930
	ctx.lr = 0x82666630;
	sub_823C4930(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82666640
	if (!ctx.cr6.eq) goto loc_82666640;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8266664c
	goto loc_8266664C;
loc_82666640:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826655a8
	ctx.lr = 0x8266664C;
	sub_826655A8(ctx, base);
loc_8266664C:
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

__attribute__((alias("__imp__sub_82666668"))) PPC_WEAK_FUNC(sub_82666668);
PPC_FUNC_IMPL(__imp__sub_82666668) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c4930
	sub_823C4930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666670"))) PPC_WEAK_FUNC(sub_82666670);
PPC_FUNC_IMPL(__imp__sub_82666670) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x82666690;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826666e0
	if (ctx.cr0.eq) goto loc_826666E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826656b0
	ctx.lr = 0x826666A4;
	sub_826656B0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r10,r10,-29084
	ctx.r10.s64 = ctx.r10.s64 + -29084;
	// addi r9,r9,-29032
	ctx.r9.s64 = ctx.r9.s64 + -29032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,3296(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// lwz r11,3300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3300);
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// b 0x826666e4
	goto loc_826666E4;
loc_826666E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826666E4:
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

__attribute__((alias("__imp__sub_82666700"))) PPC_WEAK_FUNC(sub_82666700);
PPC_FUNC_IMPL(__imp__sub_82666700) {
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
	// bl 0x823c4930
	ctx.lr = 0x82666720;
	sub_823C4930(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82666734
	if (ctx.cr6.eq) goto loc_82666734;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82665650
	ctx.lr = 0x82666734;
	sub_82665650(ctx, base);
loc_82666734:
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

__attribute__((alias("__imp__sub_82666750"))) PPC_WEAK_FUNC(sub_82666750);
PPC_FUNC_IMPL(__imp__sub_82666750) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r10,r10,-29084
	ctx.r10.s64 = ctx.r10.s64 + -29084;
	// addi r9,r9,-29032
	ctx.r9.s64 = ctx.r9.s64 + -29032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8265cc00
	ctx.lr = 0x82666794;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826667a4
	if (ctx.cr0.eq) goto loc_826667A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x826667A4;
	sub_82332DB8(ctx, base);
loc_826667A4:
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

__attribute__((alias("__imp__sub_826667C0"))) PPC_WEAK_FUNC(sub_826667C0);
PPC_FUNC_IMPL(__imp__sub_826667C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x826667C8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826658f8
	ctx.lr = 0x826667DC;
	sub_826658F8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r10,r10,-29084
	ctx.r10.s64 = ctx.r10.s64 + -29084;
	// addi r9,r9,-29032
	ctx.r9.s64 = ctx.r9.s64 + -29032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23596
	ctx.r4.s64 = ctx.r11.s64 + -23596;
	// bl 0x8233a258
	ctx.lr = 0x82666810;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x8266681C;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82666824;
	sub_82333960(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r30,r11,32296
	ctx.r30.s64 = ctx.r11.s64 + 32296;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x82666838;
	sub_828165A8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f30,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,0(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f0,-32720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lfs f31,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x8266689C;
	sub_828165A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// stb r28,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r28.u8);
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r8,1768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f30,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,1744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f0,-11456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,24704(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24704);
	// lwz r7,2156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f31,4(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r30,r9,24700
	ctx.r30.s64 = ctx.r9.s64 + 24700;
	// bne 0x82666900
	if (!ctx.cr0.eq) goto loc_82666900;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23100
	ctx.r9.s64 = ctx.r9.s64 + -23100;
	// stw r11,24704(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24704, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26664
	ctx.r3.s64 = ctx.r11.s64 + 26664;
	// bl 0x82a4c758
	ctx.lr = 0x82666900;
	sub_82A4C758(ctx, base);
loc_82666900:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82666948
	if (ctx.cr6.eq) goto loc_82666948;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,11572
	ctx.r4.s64 = ctx.r10.s64 + 11572;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x82666944;
	sub_828C5680(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82666948:
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r10,-30872
	ctx.r30.s64 = ctx.r10.s64 + -30872;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82666994
	if (ctx.cr6.eq) goto loc_82666994;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82666990;
	sub_828C58B0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82666994:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stfs f31,3296(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3296, temp.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,8208
	ctx.r10.s64 = 8208;
	// stw r9,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r9.u32);
	// lis r7,6530
	ctx.r7.s64 = 427950080;
	// stw r8,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r8.u32);
	// lis r6,5754
	ctx.r6.s64 = 377094144;
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// ori r10,r6,49558
	ctx.r10.u64 = ctx.r6.u64 | 49558;
	// ori r8,r7,39469
	ctx.r8.u64 = ctx.r7.u64 | 39469;
	// stw r9,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r9.u32);
	// stw r10,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r10.u32);
	// stw r8,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82666a04
	if (ctx.cr6.eq) goto loc_82666A04;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x82666A04;
	sub_828C5740(ctx, base);
loc_82666A04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666A18"))) PPC_WEAK_FUNC(sub_82666A18);
PPC_FUNC_IMPL(__imp__sub_82666A18) {
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
	// bl 0x82665b10
	ctx.lr = 0x82666A34;
	sub_82665B10(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82666a54
	if (ctx.cr0.eq) goto loc_82666A54;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82666a54
	if (ctx.cr6.eq) goto loc_82666A54;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82666a58
	goto loc_82666A58;
loc_82666A54:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82666A58:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5952
	ctx.r3.s64 = ctx.r11.s64 + -5952;
	// bl 0x82816528
	ctx.lr = 0x82666A64;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x82666A74;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82666A84;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82666AA0"))) PPC_WEAK_FUNC(sub_82666AA0);
PPC_FUNC_IMPL(__imp__sub_82666AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82666AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265e4f0
	ctx.lr = 0x82666AB4;
	sub_8265E4F0(ctx, base);
	// li r3,1680
	ctx.r3.s64 = 1680;
	// bl 0x82833108
	ctx.lr = 0x82666ABC;
	sub_82833108(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82666ad0
	if (ctx.cr0.eq) goto loc_82666AD0;
	// bl 0x826be1e0
	ctx.lr = 0x82666ACC;
	sub_826BE1E0(ctx, base);
	// b 0x82666ad4
	goto loc_82666AD4;
loc_82666AD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82666AD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r3.u32);
	// beq cr6,0x82666c34
	if (ctx.cr6.eq) goto loc_82666C34;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r5,800(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
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
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 448);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-5704
	ctx.r3.s64 = ctx.r11.s64 + -5704;
	// bl 0x82816528
	ctx.lr = 0x82666B4C;
	sub_82816528(ctx, base);
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lwz r10,960(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r31,1432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1432, ctx.r31.u32);
	// stw r3,1436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1436, ctx.r3.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82666b78
	if (!ctx.cr6.eq) goto loc_82666B78;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666B78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666B78:
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// lwz r30,3300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82666bac
	if (ctx.cr6.eq) goto loc_82666BAC;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666bac
	if (ctx.cr6.eq) goto loc_82666BAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82666BA4;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82666BAC;
	sub_82978ED0(ctx, base);
loc_82666BAC:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82666be0
	if (ctx.cr6.eq) goto loc_82666BE0;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666be0
	if (ctx.cr6.eq) goto loc_82666BE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82666BD8;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82666BE0;
	sub_82978ED0(ctx, base);
loc_82666BE0:
	// lwz r10,3300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lis r11,138
	ctx.r11.s64 = 9043968;
	// lis r9,4929
	ctx.r9.s64 = 323026944;
	// ori r11,r11,59044
	ctx.r11.u64 = ctx.r11.u64 | 59044;
	// lis r8,6185
	ctx.r8.s64 = 405340160;
	// lis r7,12094
	ctx.r7.s64 = 792592384;
	// stw r11,1556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1556, ctx.r11.u32);
	// ori r11,r9,53856
	ctx.r11.u64 = ctx.r9.u64 | 53856;
	// lis r9,2329
	ctx.r9.s64 = 152633344;
	// ori r8,r8,27575
	ctx.r8.u64 = ctx.r8.u64 | 27575;
	// stw r11,1560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1560, ctx.r11.u32);
	// ori r7,r7,5302
	ctx.r7.u64 = ctx.r7.u64 | 5302;
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// lwz r10,3300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// ori r11,r9,40641
	ctx.r11.u64 = ctx.r9.u64 | 40641;
	// stw r8,1564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1564, ctx.r8.u32);
	// stw r7,1568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1568, ctx.r7.u32);
	// lwz r10,3300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r11,1584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1584, ctx.r11.u32);
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r29,1512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1512, ctx.r29.u32);
loc_82666C34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666C40"))) PPC_WEAK_FUNC(sub_82666C40);
PPC_FUNC_IMPL(__imp__sub_82666C40) {
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
	// bl 0x82665bc8
	ctx.lr = 0x82666C5C;
	sub_82665BC8(ctx, base);
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82666d30
	if (ctx.cr6.eq) goto loc_82666D30;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,2329
	ctx.r10.s64 = 152633344;
	// ori r10,r10,40641
	ctx.r10.u64 = ctx.r10.u64 | 40641;
	// stw r10,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r10.u32);
	// lwz r30,3300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lwz r5,3148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1468, ctx.r5.u32);
	// beq cr6,0x82666cac
	if (ctx.cr6.eq) goto loc_82666CAC;
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666cac
	if (ctx.cr6.eq) goto loc_82666CAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82666CA4;
	sub_82978BC0(ctx, base);
	// lwz r3,1500(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1500);
	// bl 0x82978ed0
	ctx.lr = 0x82666CAC;
	sub_82978ED0(ctx, base);
loc_82666CAC:
	// lwz r5,3152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3152);
	// lwz r30,3300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r5,1472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1472, ctx.r5.u32);
	// beq cr6,0x82666ce0
	if (ctx.cr6.eq) goto loc_82666CE0;
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666ce0
	if (ctx.cr6.eq) goto loc_82666CE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x82978bc0
	ctx.lr = 0x82666CD8;
	sub_82978BC0(ctx, base);
	// lwz r3,1504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// bl 0x82978ed0
	ctx.lr = 0x82666CE0;
	sub_82978ED0(ctx, base);
loc_82666CE0:
	// lwz r10,3300(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lis r11,4929
	ctx.r11.s64 = 323026944;
	// lis r9,138
	ctx.r9.s64 = 9043968;
	// lis r8,6185
	ctx.r8.s64 = 405340160;
	// lis r7,12094
	ctx.r7.s64 = 792592384;
	// ori r11,r11,53856
	ctx.r11.u64 = ctx.r11.u64 | 53856;
	// ori r9,r9,59044
	ctx.r9.u64 = ctx.r9.u64 | 59044;
	// ori r8,r8,27575
	ctx.r8.u64 = ctx.r8.u64 | 27575;
	// stw r11,1560(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1560, ctx.r11.u32);
	// ori r7,r7,5302
	ctx.r7.u64 = ctx.r7.u64 | 5302;
	// stw r11,1552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1552, ctx.r11.u32);
	// stw r9,1556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1556, ctx.r9.u32);
	// lwz r11,3300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// stw r8,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r8.u32);
	// stw r7,1568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1568, ctx.r7.u32);
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1012);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666D30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82666D30:
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

__attribute__((alias("__imp__sub_82666D48"))) PPC_WEAK_FUNC(sub_82666D48);
PPC_FUNC_IMPL(__imp__sub_82666D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82666D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8265d250
	ctx.lr = 0x82666D60;
	sub_8265D250(ctx, base);
	// lwz r3,800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666d84
	if (ctx.cr6.eq) goto loc_82666D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666D7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82666d88
	goto loc_82666D88;
loc_82666D84:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82666D88:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30780
	ctx.r3.s64 = ctx.r11.s64 + -30780;
	// bl 0x82816528
	ctx.lr = 0x82666D94;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82666de4
	if (!ctx.cr6.eq) goto loc_82666DE4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82666e0c
	if (ctx.cr6.eq) goto loc_82666E0C;
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82666e0c
	if (!ctx.cr6.eq) goto loc_82666E0C;
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82666e0c
	if (ctx.cr6.eq) goto loc_82666E0C;
	// lwz r11,2452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82666ddc
	if (ctx.cr6.eq) goto loc_82666DDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82666e0c
	goto loc_82666E0C;
loc_82666DDC:
	// bl 0x82715610
	ctx.lr = 0x82666DE0;
	sub_82715610(ctx, base);
	// b 0x82666e0c
	goto loc_82666E0C;
loc_82666DE4:
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-30764
	ctx.r3.s64 = ctx.r11.s64 + -30764;
	// bl 0x82816528
	ctx.lr = 0x82666DF0;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82666e0c
	if (!ctx.cr6.eq) goto loc_82666E0C;
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82666e0c
	if (ctx.cr6.eq) goto loc_82666E0C;
	// lwz r4,800(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	// bl 0x829c24c0
	ctx.lr = 0x82666E0C;
	sub_829C24C0(ctx, base);
loc_82666E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82666E18"))) PPC_WEAK_FUNC(sub_82666E18);
PPC_FUNC_IMPL(__imp__sub_82666E18) {
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
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,3300(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82666e64
	if (ctx.cr6.eq) goto loc_82666E64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82666e64
	if (!ctx.cr6.eq) goto loc_82666E64;
	// bl 0x82679860
	ctx.lr = 0x82666E50;
	sub_82679860(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82715f60
	ctx.lr = 0x82666E64;
	sub_82715F60(ctx, base);
loc_82666E64:
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

__attribute__((alias("__imp__sub_82666E80"))) PPC_WEAK_FUNC(sub_82666E80);
PPC_FUNC_IMPL(__imp__sub_82666E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3300);
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,32(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r8,40(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// stw r10,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r10.u32);
	// stw r9,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r9.u32);
	// stw r8,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666EB8"))) PPC_WEAK_FUNC(sub_82666EB8);
PPC_FUNC_IMPL(__imp__sub_82666EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,3300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// stfs f0,1636(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1636, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82666ED8"))) PPC_WEAK_FUNC(sub_82666ED8);
PPC_FUNC_IMPL(__imp__sub_82666ED8) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x82666F08;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x82666f24
	if (ctx.cr6.eq) goto loc_82666F24;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82666f28
	goto loc_82666F28;
loc_82666F24:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82666F28:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,1209
	ctx.r5.s64 = 79233024;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,4666
	ctx.r5.u64 = ctx.r5.u64 | 4666;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82666F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82666F58;
	sub_8233A258(ctx, base);
	// lis r4,7936
	ctx.r4.s64 = 520093696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46534
	ctx.r4.u64 = ctx.r4.u64 | 46534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82666F6C;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82666F80"))) PPC_WEAK_FUNC(sub_82666F80);
PPC_FUNC_IMPL(__imp__sub_82666F80) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828a3f38
	ctx.lr = 0x82666FB4;
	sub_828A3F38(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82667040
	if (ctx.cr6.eq) goto loc_82667040;
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82667040
	if (!ctx.cr0.eq) goto loc_82667040;
	// bl 0x823c4930
	ctx.lr = 0x82666FE0;
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
	ctx.lr = 0x82666FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82667004
	if (!ctx.cr0.eq) goto loc_82667004;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82667004:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82667040
	if (ctx.cr6.eq) goto loc_82667040;
	// lwz r30,3300(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82667038
	if (ctx.cr6.eq) goto loc_82667038;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82679860
	ctx.lr = 0x82667024;
	sub_82679860(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82667038:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_82667040:
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

__attribute__((alias("__imp__sub_82667058"))) PPC_WEAK_FUNC(sub_82667058);
PPC_FUNC_IMPL(__imp__sub_82667058) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828a3f90
	ctx.lr = 0x82667088;
	sub_828A3F90(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x826670e0
	if (ctx.cr6.eq) goto loc_826670E0;
	// bl 0x823c4930
	ctx.lr = 0x826670A4;
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
	ctx.lr = 0x826670BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826670c8
	if (!ctx.cr0.eq) goto loc_826670C8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_826670C8:
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826670d8
	if (ctx.cr6.eq) goto loc_826670D8;
	// bl 0x82715610
	ctx.lr = 0x826670D8;
	sub_82715610(ctx, base);
loc_826670D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_826670E0:
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

__attribute__((alias("__imp__sub_826670F8"))) PPC_WEAK_FUNC(sub_826670F8);
PPC_FUNC_IMPL(__imp__sub_826670F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82667100;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r31,-80(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lbz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82667184
	if (!ctx.cr0.eq) goto loc_82667184;
	// lwz r11,2044(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2044);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82667184
	if (ctx.cr6.eq) goto loc_82667184;
	// bl 0x823c4930
	ctx.lr = 0x8266713C;
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
	ctx.lr = 0x82667154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82667160
	if (!ctx.cr0.eq) goto loc_82667160;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82667160:
	// lwz r3,3300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82667180
	if (ctx.cr6.eq) goto loc_82667180;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8266717C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82667184
	goto loc_82667184;
loc_82667180:
	// bl 0x82715610
	ctx.lr = 0x82667184;
	sub_82715610(ctx, base);
loc_82667184:
	// lwz r11,-88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,-80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1428);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826671AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826671B8"))) PPC_WEAK_FUNC(sub_826671B8);
PPC_FUNC_IMPL(__imp__sub_826671B8) {
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
	// bl 0x82395788
	ctx.lr = 0x826671D8;
	sub_82395788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826671EC;
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

__attribute__((alias("__imp__sub_82667208"))) PPC_WEAK_FUNC(sub_82667208);
PPC_FUNC_IMPL(__imp__sub_82667208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82666750
	sub_82666750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667210"))) PPC_WEAK_FUNC(sub_82667210);
PPC_FUNC_IMPL(__imp__sub_82667210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82666750
	sub_82666750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667218"))) PPC_WEAK_FUNC(sub_82667218);
PPC_FUNC_IMPL(__imp__sub_82667218) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82666700
	sub_82666700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667220"))) PPC_WEAK_FUNC(sub_82667220);
PPC_FUNC_IMPL(__imp__sub_82667220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5912
	ctx.r3.s64 = ctx.r11.s64 + -5912;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82667230"))) PPC_WEAK_FUNC(sub_82667230);
PPC_FUNC_IMPL(__imp__sub_82667230) {
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
	// beq cr6,0x82667268
	if (ctx.cr6.eq) goto loc_82667268;
	// bl 0x823c4bc8
	ctx.lr = 0x82667258;
	sub_823C4BC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82667268
	if (!ctx.cr6.eq) goto loc_82667268;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82667274
	goto loc_82667274;
loc_82667268:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826655a8
	ctx.lr = 0x82667274;
	sub_826655A8(ctx, base);
loc_82667274:
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

__attribute__((alias("__imp__sub_82667290"))) PPC_WEAK_FUNC(sub_82667290);
PPC_FUNC_IMPL(__imp__sub_82667290) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c4bc8
	sub_823C4BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667298"))) PPC_WEAK_FUNC(sub_82667298);
PPC_FUNC_IMPL(__imp__sub_82667298) {
	PPC_FUNC_PROLOGUE();
	// b 0x826433b0
	sub_826433B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826672A0"))) PPC_WEAK_FUNC(sub_826672A0);
PPC_FUNC_IMPL(__imp__sub_826672A0) {
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
	// li r3,3312
	ctx.r3.s64 = 3312;
	// bl 0x82833108
	ctx.lr = 0x826672C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82667308
	if (ctx.cr0.eq) goto loc_82667308;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826656b0
	ctx.lr = 0x826672D4;
	sub_826656B0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-28808
	ctx.r11.s64 = ctx.r11.s64 + -28808;
	// addi r10,r10,-27140
	ctx.r10.s64 = ctx.r10.s64 + -27140;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3296);
	// stw r11,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r11.u32);
	// b 0x8266730c
	goto loc_8266730C;
loc_82667308:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266730C:
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

__attribute__((alias("__imp__sub_82667328"))) PPC_WEAK_FUNC(sub_82667328);
PPC_FUNC_IMPL(__imp__sub_82667328) {
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
	// bl 0x823c4bc8
	ctx.lr = 0x82667348;
	sub_823C4BC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8266735c
	if (ctx.cr6.eq) goto loc_8266735C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82665650
	ctx.lr = 0x8266735C;
	sub_82665650(ctx, base);
loc_8266735C:
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

__attribute__((alias("__imp__sub_82667378"))) PPC_WEAK_FUNC(sub_82667378);
PPC_FUNC_IMPL(__imp__sub_82667378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82667380;
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
	// bl 0x826658f8
	ctx.lr = 0x82667394;
	sub_826658F8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-28808
	ctx.r11.s64 = ctx.r11.s64 + -28808;
	// addi r10,r10,-27140
	ctx.r10.s64 = ctx.r10.s64 + -27140;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r29,r11,32296
	ctx.r29.s64 = ctx.r11.s64 + 32296;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x826673CC;
	sub_828165A8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f0,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r11,24696(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24696);
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r7,2156(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// clrlwi. r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f30,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r9,24688
	ctx.r30.s64 = ctx.r9.s64 + 24688;
	// stfs f30,0(r7)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// bne 0x82667444
	if (!ctx.cr0.eq) goto loc_82667444;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27088
	ctx.r9.s64 = ctx.r9.s64 + -27088;
	// stw r11,24696(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24696, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// bl 0x82a4c758
	ctx.lr = 0x82667444;
	sub_82A4C758(ctx, base);
loc_82667444:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x82667460;
	sub_828165A8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// stb r28,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r28.u8);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,1768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f31,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r8,1744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lfs f0,-11456(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r30,r11,24684
	ctx.r30.s64 = ctx.r11.s64 + 24684;
	// lwz r11,24692(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24692);
	// lwz r8,2156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f30,4(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826674c4
	if (!ctx.cr0.eq) goto loc_826674C4;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27068
	ctx.r9.s64 = ctx.r9.s64 + -27068;
	// stw r11,24692(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24692, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26688
	ctx.r3.s64 = ctx.r11.s64 + 26688;
	// bl 0x82a4c758
	ctx.lr = 0x826674C4;
	sub_82A4C758(ctx, base);
loc_826674C4:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82667510
	if (ctx.cr6.eq) goto loc_82667510;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r5,r11,32324
	ctx.r5.s64 = ctx.r11.s64 + 32324;
	// addi r4,r10,11480
	ctx.r4.s64 = ctx.r10.s64 + 11480;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5680
	ctx.lr = 0x8266750C;
	sub_828C5680(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_82667510:
	// lwz r9,2032(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r10,-28980
	ctx.r30.s64 = ctx.r10.s64 + -28980;
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,3288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3288, ctx.r10.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8266755c
	if (ctx.cr6.eq) goto loc_8266755C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x82667558;
	sub_828C58B0(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_8266755C:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r10.u32);
	// li r10,8448
	ctx.r10.s64 = 8448;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r9.u32);
	// stw r10,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r10.u32);
	// stw r8,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826675a8
	if (ctx.cr6.eq) goto loc_826675A8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x826675A8;
	sub_828C5740(ctx, base);
loc_826675A8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23612
	ctx.r4.s64 = ctx.r11.s64 + -23612;
	// bl 0x8233a258
	ctx.lr = 0x826675B8;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x826675C4;
	sub_82400B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x826675CC;
	sub_82333960(ctx, base);
	// lis r11,11298
	ctx.r11.s64 = 740425728;
	// lis r10,2698
	ctx.r10.s64 = 176816128;
	// lis r9,14251
	ctx.r9.s64 = 933953536;
	// li r8,37
	ctx.r8.s64 = 37;
	// ori r11,r11,44962
	ctx.r11.u64 = ctx.r11.u64 | 44962;
	// ori r10,r10,64637
	ctx.r10.u64 = ctx.r10.u64 | 64637;
	// stw r8,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r8.u32);
	// ori r9,r9,3762
	ctx.r9.u64 = ctx.r9.u64 | 3762;
	// stw r11,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r11.u32);
	// stw r10,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82667610"))) PPC_WEAK_FUNC(sub_82667610);
PPC_FUNC_IMPL(__imp__sub_82667610) {
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
	// bl 0x82665b10
	ctx.lr = 0x8266762C;
	sub_82665B10(ctx, base);
	// addic. r11,r31,300
	ctx.xer.ca = ctx.r31.u32 > 4294966995;
	ctx.r11.s64 = ctx.r31.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266764c
	if (ctx.cr0.eq) goto loc_8266764C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8266764c
	if (ctx.cr6.eq) goto loc_8266764C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82667650
	goto loc_82667650;
loc_8266764C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82667650:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-5888
	ctx.r3.s64 = ctx.r11.s64 + -5888;
	// bl 0x82816528
	ctx.lr = 0x8266765C;
	sub_82816528(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,30360
	ctx.r3.s64 = ctx.r11.s64 + 30360;
	// bl 0x82816528
	ctx.lr = 0x8266766C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8266767C;
	sub_828D0CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82667698"))) PPC_WEAK_FUNC(sub_82667698);
PPC_FUNC_IMPL(__imp__sub_82667698) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265d938
	sub_8265D938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826676A0"))) PPC_WEAK_FUNC(sub_826676A0);
PPC_FUNC_IMPL(__imp__sub_826676A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826676A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82665bc8
	ctx.lr = 0x826676BC;
	sub_82665BC8(ctx, base);
	// mulli r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 * 24;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,560
	ctx.r4.s64 = ctx.r11.s64 + 560;
	// bl 0x823339b8
	ctx.lr = 0x826676D0;
	sub_823339B8(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r28,r11,7896
	ctx.r28.s64 = ctx.r11.s64 + 7896;
	// addi r5,r10,28564
	ctx.r5.s64 = ctx.r10.s64 + 28564;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816cf8
	ctx.lr = 0x826676F0;
	sub_82816CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x826676FC;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82667704;
	sub_82333960(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bne cr6,0x82667720
	if (!ctx.cr6.eq) goto loc_82667720;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82667720:
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-28912
	ctx.r4.s64 = ctx.r10.s64 + -28912;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// bl 0x82816c30
	ctx.lr = 0x82667740;
	sub_82816C30(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82667754
	if (!ctx.cr6.eq) goto loc_82667754;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82667754:
	// bl 0x828165a8
	ctx.lr = 0x82667758;
	sub_828165A8(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r30,r31,3156
	ctx.r30.s64 = ctx.r31.s64 + 3156;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8266777C;
	sub_823CF190(ctx, base);
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667864
	if (ctx.cr6.eq) goto loc_82667864;
	// li r3,1424
	ctx.r3.s64 = 1424;
	// bl 0x82833108
	ctx.lr = 0x82667790;
	sub_82833108(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826677a8
	if (ctx.cr0.eq) goto loc_826677A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828adc70
	ctx.lr = 0x826677A4;
	sub_828ADC70(ctx, base);
	// b 0x826677ac
	goto loc_826677AC;
loc_826677A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_826677AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r3.u32);
	// beq cr6,0x82667864
	if (ctx.cr6.eq) goto loc_82667864;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x828ae6e8
	ctx.lr = 0x826677CC;
	sub_828AE6E8(ctx, base);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x826677D8;
	sub_82978ED0(ctx, base);
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826677F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r3,r10,-5704
	ctx.r3.s64 = ctx.r10.s64 + -5704;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,3296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x82667824;
	sub_82816528(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,3296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82667850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,3296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b8ee8
	ctx.lr = 0x82667864;
	sub_829B8EE8(ctx, base);
loc_82667864:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8266786C;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82667874;
	sub_82333960(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667880"))) PPC_WEAK_FUNC(sub_82667880);
PPC_FUNC_IMPL(__imp__sub_82667880) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x826678B0;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x826678cc
	if (ctx.cr6.eq) goto loc_826678CC;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x826678d0
	goto loc_826678D0;
loc_826678CC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826678D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,12183
	ctx.r5.s64 = 798425088;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,7736
	ctx.r5.u64 = ctx.r5.u64 | 7736;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826678F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82667900;
	sub_8233A258(ctx, base);
	// lis r4,7936
	ctx.r4.s64 = 520093696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46534
	ctx.r4.u64 = ctx.r4.u64 | 46534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82667914;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82667928"))) PPC_WEAK_FUNC(sub_82667928);
PPC_FUNC_IMPL(__imp__sub_82667928) {
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
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a3f38
	ctx.lr = 0x8266794C;
	sub_828A3F38(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82614198
	ctx.lr = 0x82667960;
	sub_82614198(ctx, base);
	// lwz r11,3296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82667978
	if (ctx.cr6.eq) goto loc_82667978;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978d98
	ctx.lr = 0x82667978;
	sub_82978D98(ctx, base);
loc_82667978:
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

__attribute__((alias("__imp__sub_82667990"))) PPC_WEAK_FUNC(sub_82667990);
PPC_FUNC_IMPL(__imp__sub_82667990) {
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
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82614198
	ctx.lr = 0x826679B0;
	sub_82614198(ctx, base);
	// lwz r11,3296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826679c4
	if (ctx.cr6.eq) goto loc_826679C4;
	// lwz r3,1408(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// bl 0x82978ed0
	ctx.lr = 0x826679C4;
	sub_82978ED0(ctx, base);
loc_826679C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826679D8"))) PPC_WEAK_FUNC(sub_826679D8);
PPC_FUNC_IMPL(__imp__sub_826679D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82667b40
	sub_82667B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826679E0"))) PPC_WEAK_FUNC(sub_826679E0);
PPC_FUNC_IMPL(__imp__sub_826679E0) {
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
	// lwz r11,24680(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24680);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82667a20
	if (!ctx.cr0.eq) goto loc_82667A20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// stw r11,24680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24680, ctx.r11.u32);
	// addi r3,r9,-29008
	ctx.r3.s64 = ctx.r9.s64 + -29008;
	// bl 0x82816528
	ctx.lr = 0x82667A18;
	sub_82816528(ctx, base);
	// stw r3,24676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24676, ctx.r3.u32);
	// b 0x82667a24
	goto loc_82667A24;
loc_82667A20:
	// lwz r3,24676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24676);
loc_82667A24:
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

__attribute__((alias("__imp__sub_82667A38"))) PPC_WEAK_FUNC(sub_82667A38);
PPC_FUNC_IMPL(__imp__sub_82667A38) {
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
	// addi r31,r11,13428
	ctx.r31.s64 = ctx.r11.s64 + 13428;
	// lwz r11,13424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13424);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82667a80
	if (!ctx.cr0.eq) goto loc_82667A80;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-27088
	ctx.r9.s64 = ctx.r9.s64 + -27088;
	// stw r11,13424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13424, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26736
	ctx.r3.s64 = ctx.r11.s64 + 26736;
	// bl 0x82a4c758
	ctx.lr = 0x82667A80;
	sub_82A4C758(ctx, base);
loc_82667A80:
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

__attribute__((alias("__imp__sub_82667A98"))) PPC_WEAK_FUNC(sub_82667A98);
PPC_FUNC_IMPL(__imp__sub_82667A98) {
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
	// bl 0x82667a38
	ctx.lr = 0x82667AB8;
	sub_82667A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82667ACC;
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

__attribute__((alias("__imp__sub_82667AE8"))) PPC_WEAK_FUNC(sub_82667AE8);
PPC_FUNC_IMPL(__imp__sub_82667AE8) {
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
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r31,-31943
	ctx.r31.s64 = -2093416448;
	// lwz r11,-28308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28308);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82667b28
	if (!ctx.cr0.eq) goto loc_82667B28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// stw r11,-28308(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28308, ctx.r11.u32);
	// addi r3,r9,19760
	ctx.r3.s64 = ctx.r9.s64 + 19760;
	// bl 0x82816528
	ctx.lr = 0x82667B20;
	sub_82816528(ctx, base);
	// stw r3,-28312(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28312, ctx.r3.u32);
	// b 0x82667b2c
	goto loc_82667B2C;
loc_82667B28:
	// lwz r3,-28312(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28312);
loc_82667B2C:
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

__attribute__((alias("__imp__sub_82667B40"))) PPC_WEAK_FUNC(sub_82667B40);
PPC_FUNC_IMPL(__imp__sub_82667B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x82667B58;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82667bd8
	if (ctx.cr0.eq) goto loc_82667BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b8e58
	ctx.lr = 0x82667B68;
	sub_826B8E58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-11824
	ctx.r11.s64 = ctx.r8.s64 + -11824;
	// lfs f13,16772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16772);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-13000
	ctx.r9.s64 = ctx.r9.s64 + -13000;
	// addi r10,r7,29100
	ctx.r10.s64 = ctx.r7.s64 + 29100;
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// li r8,8448
	ctx.r8.s64 = 8448;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stfs f13,1504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r10.u32);
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// stw r8,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r8.u32);
	// addi r3,r9,-16992
	ctx.r3.s64 = ctx.r9.s64 + -16992;
	// bl 0x828165a8
	ctx.lr = 0x82667BB8;
	sub_828165A8(ctx, base);
	// lis r11,16183
	ctx.r11.s64 = 1060569088;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// ori r11,r11,51940
	ctx.r11.u64 = ctx.r11.u64 | 51940;
	// stw r10,1776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1776, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// b 0x82667bdc
	goto loc_82667BDC;
loc_82667BD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82667BDC:
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

__attribute__((alias("__imp__sub_82667BF0"))) PPC_WEAK_FUNC(sub_82667BF0);
PPC_FUNC_IMPL(__imp__sub_82667BF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82667328
	sub_82667328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667BF8"))) PPC_WEAK_FUNC(sub_82667BF8);
PPC_FUNC_IMPL(__imp__sub_82667BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82667C00;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8265c840
	ctx.lr = 0x82667C14;
	sub_8265C840(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r8,-32223
	ctx.r8.s64 = -2111766528;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,-30752
	ctx.r10.s64 = ctx.r10.s64 + -30752;
	// lfs f0,900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r8,-4088
	ctx.r11.s64 = ctx.r8.s64 + -4088;
	// addi r9,r9,-29084
	ctx.r9.s64 = ctx.r9.s64 + -29084;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stfs f0,1892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1892, temp.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// stb r8,3281(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3281, ctx.r8.u8);
	// addi r3,r10,-27048
	ctx.r3.s64 = ctx.r10.s64 + -27048;
	// bl 0x82816528
	ctx.lr = 0x82667C58;
	sub_82816528(ctx, base);
	// li r11,30
	ctx.r11.s64 = 30;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// stw r11,2012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2012, ctx.r11.u32);
	// addi r3,r31,2020
	ctx.r3.s64 = ctx.r31.s64 + 2020;
	// stw r30,2052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2052, ctx.r30.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r11,2004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2004, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82667C88;
	sub_823327E0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,2032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82a455d0
	ctx.lr = 0x82667C98;
	sub_82A455D0(ctx, base);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// addi r3,r31,1684
	ctx.r3.s64 = ctx.r31.s64 + 1684;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lwz r11,2032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// bl 0x823327e0
	ctx.lr = 0x82667CC8;
	sub_823327E0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82a455d0
	ctx.lr = 0x82667CD8;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1708
	ctx.r3.s64 = ctx.r31.s64 + 1708;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82667CF0;
	sub_823327E0(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82a455d0
	ctx.lr = 0x82667D00;
	sub_82A455D0(ctx, base);
	// addi r3,r31,1732
	ctx.r3.s64 = ctx.r31.s64 + 1732;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82667D10;
	sub_82510B28(ctx, base);
	// addi r3,r31,1756
	ctx.r3.s64 = ctx.r31.s64 + 1756;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82667D20;
	sub_82510B28(ctx, base);
	// addi r3,r31,1660
	ctx.r3.s64 = ctx.r31.s64 + 1660;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823327e0
	ctx.lr = 0x82667D38;
	sub_823327E0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// bl 0x82a455d0
	ctx.lr = 0x82667D48;
	sub_82A455D0(ctx, base);
	// addi r3,r31,2144
	ctx.r3.s64 = ctx.r31.s64 + 2144;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82510b28
	ctx.lr = 0x82667D58;
	sub_82510B28(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,-32676
	ctx.r3.s64 = ctx.r11.s64 + -32676;
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x82667D68;
	sub_82816528(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82665470
	ctx.lr = 0x82667D74;
	sub_82665470(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lfs f30,20352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20352);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r7,-32524
	ctx.r3.s64 = ctx.r7.s64 + -32524;
	// stfs f30,0(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f0,19144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// lfs f31,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x82667DC0;
	sub_82816528(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82665470
	ctx.lr = 0x82667DCC;
	sub_82665470(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r11,1744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r3,r9,-32512
	ctx.r3.s64 = ctx.r9.s64 + -32512;
	// lfs f0,20456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r30.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r29,1696(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x82816528
	ctx.lr = 0x82667E08;
	sub_82816528(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lwz r29,1720(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// bl 0x82665470
	ctx.lr = 0x82667E14;
	sub_82665470(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,1744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// lis r8,14831
	ctx.r8.s64 = 971964416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r8,r8,19125
	ctx.r8.u64 = ctx.r8.u64 | 19125;
	// lfs f0,16356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lfs f0,17640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// lwz r11,2156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r8,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667E68"))) PPC_WEAK_FUNC(sub_82667E68);
PPC_FUNC_IMPL(__imp__sub_82667E68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82667E70;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x8265cda8
	ctx.lr = 0x82667E84;
	sub_8265CDA8(ctx, base);
	// addic. r11,r30,300
	ctx.xer.ca = ctx.r30.u32 > 4294966995;
	ctx.r11.s64 = ctx.r30.s64 + 300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82667ea0
	if (ctx.cr0.eq) goto loc_82667EA0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82667ea0
	if (ctx.cr6.eq) goto loc_82667EA0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82667EA0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9804
	ctx.r3.s64 = ctx.r11.s64 + -9804;
	// bl 0x82816528
	ctx.lr = 0x82667EAC;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-32524
	ctx.r3.s64 = ctx.r11.s64 + -32524;
	// bl 0x82816528
	ctx.lr = 0x82667EBC;
	sub_82816528(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82667ED0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9768
	ctx.r3.s64 = ctx.r11.s64 + -9768;
	// bl 0x82816528
	ctx.lr = 0x82667EDC;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-32676
	ctx.r3.s64 = ctx.r11.s64 + -32676;
	// bl 0x82816528
	ctx.lr = 0x82667EEC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82667EFC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9728
	ctx.r3.s64 = ctx.r11.s64 + -9728;
	// bl 0x82816528
	ctx.lr = 0x82667F08;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-32512
	ctx.r3.s64 = ctx.r11.s64 + -32512;
	// bl 0x82816528
	ctx.lr = 0x82667F18;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82667F28;
	sub_828D0CB0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lis r5,22664
	ctx.r5.s64 = 1485307904;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// ori r5,r5,42249
	ctx.r5.u64 = ctx.r5.u64 | 42249;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82667F4C;
	sub_823CF190(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r30,2188
	ctx.r31.s64 = ctx.r30.s64 + 2188;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82510b80
	ctx.lr = 0x82667F70;
	sub_82510B80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82510b80
	ctx.lr = 0x82667F80;
	sub_82510B80(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82510b80
	ctx.lr = 0x82667F90;
	sub_82510B80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667F98"))) PPC_WEAK_FUNC(sub_82667F98);
PPC_FUNC_IMPL(__imp__sub_82667F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-27008
	ctx.r3.s64 = ctx.r11.s64 + -27008;
	// b 0x828165a8
	sub_828165A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667FA8"))) PPC_WEAK_FUNC(sub_82667FA8);
PPC_FUNC_IMPL(__imp__sub_82667FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r3,r11,-26944
	ctx.r3.s64 = ctx.r11.s64 + -26944;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82667FB8"))) PPC_WEAK_FUNC(sub_82667FB8);
PPC_FUNC_IMPL(__imp__sub_82667FB8) {
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
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826604f8
	ctx.lr = 0x82667FE8;
	sub_826604F8(ctx, base);
	// bl 0x823ba418
	ctx.lr = 0x82667FEC;
	sub_823BA418(ctx, base);
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
	ctx.lr = 0x82668004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82668010
	if (!ctx.cr0.eq) goto loc_82668010;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82668010:
	// stw r31,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82668030"))) PPC_WEAK_FUNC(sub_82668030);
PPC_FUNC_IMPL(__imp__sub_82668030) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1508);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x824ea6e0
	ctx.lr = 0x82668054;
	sub_824EA6E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668068"))) PPC_WEAK_FUNC(sub_82668068);
PPC_FUNC_IMPL(__imp__sub_82668068) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828a2dd0
	ctx.lr = 0x82668094;
	sub_828A2DD0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826680B4;
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

__attribute__((alias("__imp__sub_826680C8"))) PPC_WEAK_FUNC(sub_826680C8);
PPC_FUNC_IMPL(__imp__sub_826680C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,3281(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3281);
	// stb r10,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r10.u8);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x828a3f38
	sub_828A3F38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826680F0"))) PPC_WEAK_FUNC(sub_826680F0);
PPC_FUNC_IMPL(__imp__sub_826680F0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r10,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r10.u8);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828a2dd0
	ctx.lr = 0x82668134;
	sub_828A2DD0(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668154;
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

__attribute__((alias("__imp__sub_82668168"))) PPC_WEAK_FUNC(sub_82668168);
PPC_FUNC_IMPL(__imp__sub_82668168) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lbz r11,3280(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826681a0
	if (ctx.cr0.eq) goto loc_826681A0;
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lbz r10,3280(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3280);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r10.u8);
loc_826681A0:
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -64);
	// lbz r10,3280(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3280);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x826681c4
	if (!ctx.cr0.eq) goto loc_826681C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826681C4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-72
	ctx.r10.s64 = ctx.r11.s64 + -72;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826681E8"))) PPC_WEAK_FUNC(sub_826681E8);
PPC_FUNC_IMPL(__imp__sub_826681E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r10,3280(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3280, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82668208"))) PPC_WEAK_FUNC(sub_82668208);
PPC_FUNC_IMPL(__imp__sub_82668208) {
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
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-72
	ctx.r10.s64 = ctx.r11.s64 + -72;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// bl 0x828a2dd0
	ctx.lr = 0x82668258;
	sub_828A2DD0(ctx, base);
	// lwz r11,-72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-72
	ctx.r3.s64 = ctx.r11.s64 + -72;
	// lwz r11,-72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668278;
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

__attribute__((alias("__imp__sub_82668290"))) PPC_WEAK_FUNC(sub_82668290);
PPC_FUNC_IMPL(__imp__sub_82668290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-6000
	ctx.r3.s64 = ctx.r11.s64 + -6000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826682A0"))) PPC_WEAK_FUNC(sub_826682A0);
PPC_FUNC_IMPL(__imp__sub_826682A0) {
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
	// beq cr6,0x826682d8
	if (ctx.cr6.eq) goto loc_826682D8;
	// bl 0x823c47f0
	ctx.lr = 0x826682C8;
	sub_823C47F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x826682d8
	if (!ctx.cr6.eq) goto loc_826682D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826682e4
	goto loc_826682E4;
loc_826682D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826655a8
	ctx.lr = 0x826682E4;
	sub_826655A8(ctx, base);
loc_826682E4:
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

__attribute__((alias("__imp__sub_82668300"))) PPC_WEAK_FUNC(sub_82668300);
PPC_FUNC_IMPL(__imp__sub_82668300) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c47f0
	sub_823C47F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668308"))) PPC_WEAK_FUNC(sub_82668308);
PPC_FUNC_IMPL(__imp__sub_82668308) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82668328;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82668368
	if (ctx.cr0.eq) goto loc_82668368;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826656b0
	ctx.lr = 0x8266833C;
	sub_826656B0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-26848
	ctx.r11.s64 = ctx.r11.s64 + -26848;
	// addi r10,r10,-25180
	ctx.r10.s64 = ctx.r10.s64 + -25180;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8266836c
	goto loc_8266836C;
loc_82668368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8266836C:
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

__attribute__((alias("__imp__sub_82668388"))) PPC_WEAK_FUNC(sub_82668388);
PPC_FUNC_IMPL(__imp__sub_82668388) {
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
	// bl 0x823c47f0
	ctx.lr = 0x826683A8;
	sub_823C47F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x826683bc
	if (ctx.cr6.eq) goto loc_826683BC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82665650
	ctx.lr = 0x826683BC;
	sub_82665650(ctx, base);
loc_826683BC:
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

__attribute__((alias("__imp__sub_826683D8"))) PPC_WEAK_FUNC(sub_826683D8);
PPC_FUNC_IMPL(__imp__sub_826683D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x826683E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x826658f8
	ctx.lr = 0x826683EC;
	sub_826658F8(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-26848
	ctx.r11.s64 = ctx.r11.s64 + -26848;
	// addi r10,r10,-25180
	ctx.r10.s64 = ctx.r10.s64 + -25180;
	// addi r9,r9,-30936
	ctx.r9.s64 = ctx.r9.s64 + -30936;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,32296
	ctx.r3.s64 = ctx.r11.s64 + 32296;
	// lwz r30,1696(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// bl 0x828165a8
	ctx.lr = 0x82668420;
	sub_828165A8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lwz r11,1672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1744);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// lwz r9,2156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2156);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r30,r11,24668
	ctx.r30.s64 = ctx.r11.s64 + 24668;
	// lwz r11,24672(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24672);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bne 0x82668498
	if (!ctx.cr0.eq) goto loc_82668498;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-25128
	ctx.r9.s64 = ctx.r9.s64 + -25128;
	// stw r11,24672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24672, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r3,r11,26760
	ctx.r3.s64 = ctx.r11.s64 + 26760;
	// bl 0x82a4c758
	ctx.lr = 0x82668498;
	sub_82A4C758(ctx, base);
loc_82668498:
	// lwz r10,1720(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// addi r30,r11,-26912
	ctx.r30.s64 = ctx.r11.s64 + -26912;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,2032(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826684e4
	if (ctx.cr6.eq) goto loc_826684E4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30912
	ctx.r5.s64 = ctx.r11.s64 + -30912;
	// addi r6,r31,3216
	ctx.r6.s64 = ctx.r31.s64 + 3216;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c58b0
	ctx.lr = 0x826684E4;
	sub_828C58B0(ctx, base);
loc_826684E4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,1940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1940, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r11,8320
	ctx.r11.s64 = 8320;
	// stw r10,1944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1944, ctx.r10.u32);
	// stw r9,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r9.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,2100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-23628
	ctx.r4.s64 = ctx.r10.s64 + -23628;
	// bl 0x8233a258
	ctx.lr = 0x82668514;
	sub_8233A258(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,2320
	ctx.r3.s64 = ctx.r31.s64 + 2320;
	// bl 0x82400b48
	ctx.lr = 0x82668520;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82668528;
	sub_82333960(ctx, base);
	// lis r10,9506
	ctx.r10.s64 = 622985216;
	// lis r9,7393
	ctx.r9.s64 = 484507648;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r10,r10,27854
	ctx.r10.u64 = ctx.r10.u64 | 27854;
	// lis r8,14732
	ctx.r8.s64 = 965476352;
	// stw r10,3100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3100, ctx.r10.u32);
	// li r10,40
	ctx.r10.s64 = 40;
	// ori r9,r9,19687
	ctx.r9.u64 = ctx.r9.u64 | 19687;
	// ori r8,r8,2775
	ctx.r8.u64 = ctx.r8.u64 | 2775;
	// stw r10,2168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2168, ctx.r10.u32);
	// stw r9,3092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3092, ctx.r9.u32);
	// stw r8,3096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3096, ctx.r8.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82668584
	if (ctx.cr6.eq) goto loc_82668584;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-30812
	ctx.r5.s64 = ctx.r11.s64 + -30812;
	// addi r6,r31,3212
	ctx.r6.s64 = ctx.r31.s64 + 3212;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x82668584;
	sub_828C5740(ctx, base);
loc_82668584:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668590"))) PPC_WEAK_FUNC(sub_82668590);
PPC_FUNC_IMPL(__imp__sub_82668590) {
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
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8265efe0
	ctx.lr = 0x826685C0;
	sub_8265EFE0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	// beq cr6,0x826685dc
	if (ctx.cr6.eq) goto loc_826685DC;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x826685e0
	goto loc_826685E0;
loc_826685DC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_826685E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r5,2722
	ctx.r5.s64 = 178388992;
	// lis r4,9265
	ctx.r4.s64 = 607191040;
	// ori r5,r5,49107
	ctx.r5.u64 = ctx.r5.u64 | 49107;
	// ori r4,r4,30242
	ctx.r4.u64 = ctx.r4.u64 | 30242;
	// lwz r11,336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x82668610;
	sub_8233A258(ctx, base);
	// lis r4,7936
	ctx.r4.s64 = 520093696;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,46534
	ctx.r4.u64 = ctx.r4.u64 | 46534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82668624;
	sub_829C3740(ctx, base);
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

__attribute__((alias("__imp__sub_82668638"))) PPC_WEAK_FUNC(sub_82668638);
PPC_FUNC_IMPL(__imp__sub_82668638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r3,1888
	ctx.r3.s64 = 1888;
	// bl 0x82833108
	ctx.lr = 0x82668650;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826686ac
	if (ctx.cr0.eq) goto loc_826686AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b8e58
	ctx.lr = 0x82668660;
	sub_826B8E58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r10,r10,-11768
	ctx.r10.s64 = ctx.r10.s64 + -11768;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,-10592
	ctx.r11.s64 = ctx.r9.s64 + -10592;
	// lis r7,7133
	ctx.r7.s64 = 467468288;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r9,r8,29100
	ctx.r9.s64 = ctx.r8.s64 + 29100;
	// li r10,8320
	ctx.r10.s64 = 8320;
	// stfs f0,696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 696, temp.u32);
	// ori r11,r7,38533
	ctx.r11.u64 = ctx.r7.u64 | 38533;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,1812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1812, ctx.r10.u32);
	// stw r11,1492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1492, ctx.r11.u32);
	// b 0x826686b0
	goto loc_826686B0;
loc_826686AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826686B0:
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

__attribute__((alias("__imp__sub_826686C8"))) PPC_WEAK_FUNC(sub_826686C8);
PPC_FUNC_IMPL(__imp__sub_826686C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82668388
	sub_82668388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826686D0"))) PPC_WEAK_FUNC(sub_826686D0);
PPC_FUNC_IMPL(__imp__sub_826686D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8692
	ctx.r3.s64 = ctx.r11.s64 + -8692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826686E0"))) PPC_WEAK_FUNC(sub_826686E0);
PPC_FUNC_IMPL(__imp__sub_826686E0) {
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
	// beq cr6,0x82668718
	if (ctx.cr6.eq) goto loc_82668718;
	// bl 0x823be170
	ctx.lr = 0x82668708;
	sub_823BE170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82668718
	if (!ctx.cr6.eq) goto loc_82668718;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82668724
	goto loc_82668724;
loc_82668718:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234e2d8
	ctx.lr = 0x82668724;
	sub_8234E2D8(ctx, base);
loc_82668724:
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

__attribute__((alias("__imp__sub_82668740"))) PPC_WEAK_FUNC(sub_82668740);
PPC_FUNC_IMPL(__imp__sub_82668740) {
	PPC_FUNC_PROLOGUE();
	// b 0x823be170
	sub_823BE170(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82668748"))) PPC_WEAK_FUNC(sub_82668748);
PPC_FUNC_IMPL(__imp__sub_82668748) {
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
	// li r3,3296
	ctx.r3.s64 = 3296;
	// bl 0x82833108
	ctx.lr = 0x82668768;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x826687b0
	if (ctx.cr0.eq) goto loc_826687B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e3e0
	ctx.lr = 0x8266877C;
	sub_8234E3E0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// addi r10,r10,-23376
	ctx.r10.s64 = ctx.r10.s64 + -23376;
	// addi r9,r9,-23324
	ctx.r9.s64 = ctx.r9.s64 + -23324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,3280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3280);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// b 0x826687b4
	goto loc_826687B4;
loc_826687B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826687B4:
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

__attribute__((alias("__imp__sub_826687D0"))) PPC_WEAK_FUNC(sub_826687D0);
PPC_FUNC_IMPL(__imp__sub_826687D0) {
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
	// bl 0x823be170
	ctx.lr = 0x826687F0;
	sub_823BE170(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82668800
	if (!ctx.cr6.eq) goto loc_82668800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82668818
	goto loc_82668818;
loc_82668800:
	// bl 0x823323b8
	ctx.lr = 0x82668804;
	sub_823323B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82668818
	if (ctx.cr6.eq) goto loc_82668818;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d0a0
	ctx.lr = 0x82668818;
	sub_8234D0A0(ctx, base);
loc_82668818:
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

__attribute__((alias("__imp__sub_82668830"))) PPC_WEAK_FUNC(sub_82668830);
PPC_FUNC_IMPL(__imp__sub_82668830) {
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
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// lis r9,-32224
	ctx.r9.s64 = -2111832064;
	// addi r11,r11,-25048
	ctx.r11.s64 = ctx.r11.s64 + -25048;
	// addi r10,r10,-23376
	ctx.r10.s64 = ctx.r10.s64 + -23376;
	// addi r9,r9,-23324
	ctx.r9.s64 = ctx.r9.s64 + -23324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x8265cc00
	ctx.lr = 0x82668874;
	sub_8265CC00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82668884
	if (ctx.cr0.eq) goto loc_82668884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82668884;
	sub_82332DB8(ctx, base);
loc_82668884:
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

