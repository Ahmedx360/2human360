#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828B5318"))) PPC_WEAK_FUNC(sub_828B5318);
PPC_FUNC_IMPL(__imp__sub_828B5318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x828B5320;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stb r11,558(r10)
	PPC_STORE_U8(ctx.r10.u32 + 558, ctx.r11.u8);
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// lwz r11,1580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// stb r30,557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 557, ctx.r30.u8);
	// lwz r5,1580(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1580);
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r30,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r30.u32);
	// stb r30,556(r5)
	PPC_STORE_U8(ctx.r5.u32 + 556, ctx.r30.u8);
	// bl 0x8277e630
	ctx.lr = 0x828B5394;
	sub_8277E630(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-14640
	ctx.r3.s64 = ctx.r11.s64 + -14640;
	// bl 0x824b99b0
	ctx.lr = 0x828B53A4;
	sub_824B99B0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
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
	ctx.lr = 0x828B53CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b53e8
	if (!ctx.cr6.gt) goto loc_828B53E8;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x828b54b8
	goto loc_828B54B8;
loc_828B53E8:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x828b5484
	if (!ctx.cr6.eq) goto loc_828B5484;
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
	ctx.lr = 0x828B540C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,964(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 964);
	// addi r28,r26,948
	ctx.r28.s64 = ctx.r26.s64 + 948;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b5464
	if (!ctx.cr6.gt) goto loc_828B5464;
loc_828B5420:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b5450
	if (!ctx.cr6.eq) goto loc_828B5450;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828B5448;
	sub_82332CA8(ctx, base);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_828B5450:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b5420
	if (ctx.cr6.lt) goto loc_828B5420;
loc_828B5464:
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
	ctx.lr = 0x828B5484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B5484:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828b54b8
	if (!ctx.cr0.eq) goto loc_828B54B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B54A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b54b8
	if (ctx.cr0.eq) goto loc_828B54B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r26,924
	ctx.r3.s64 = ctx.r26.s64 + 924;
	// bl 0x82410060
	ctx.lr = 0x828B54B8;
	sub_82410060(ctx, base);
loc_828B54B8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B54CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B54D8"))) PPC_WEAK_FUNC(sub_828B54D8);
PPC_FUNC_IMPL(__imp__sub_828B54D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B54E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x828b5524
	if (!ctx.cr6.eq) goto loc_828B5524;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823339b8
	ctx.lr = 0x828B5508;
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
	ctx.lr = 0x828B5520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_828B5524:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r31,r11,-18228
	ctx.r31.s64 = ctx.r11.s64 + -18228;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-18228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x828b5564
	if (ctx.cr6.eq) goto loc_828B5564;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r5,r11,25692
	ctx.r5.s64 = ctx.r11.s64 + 25692;
	// b 0x828b556c
	goto loc_828B556C;
loc_828B5564:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r5,r11,25704
	ctx.r5.s64 = ctx.r11.s64 + 25704;
loc_828B556C:
	// bl 0x8277dce0
	ctx.lr = 0x828B5570;
	sub_8277DCE0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// bl 0x8277db50
	ctx.lr = 0x828B5580;
	sub_8277DB50(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r4,r11,25716
	ctx.r4.s64 = ctx.r11.s64 + 25716;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8277b880
	ctx.lr = 0x828B5598;
	sub_8277B880(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8277c288
	ctx.lr = 0x828B55AC;
	sub_8277C288(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,1580(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// bl 0x82783b00
	ctx.lr = 0x828B55B8;
	sub_82783B00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B55CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B55D8"))) PPC_WEAK_FUNC(sub_828B55D8);
PPC_FUNC_IMPL(__imp__sub_828B55D8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828b5648
	if (ctx.cr6.eq) goto loc_828B5648;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x826d1ed0
	ctx.lr = 0x828B5600;
	sub_826D1ED0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b5648
	if (ctx.cr0.eq) goto loc_828B5648;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b561c
	if (ctx.cr6.eq) goto loc_828B561C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x828b5624
	goto loc_828B5624;
loc_828B561C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r11,r11,7896
	ctx.r11.s64 = ctx.r11.s64 + 7896;
loc_828B5624:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b5648
	if (ctx.cr6.eq) goto loc_828B5648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,768
	ctx.r3.s64 = ctx.r31.s64 + 768;
	// bl 0x82400b48
	ctx.lr = 0x828B5638;
	sub_82400B48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r11.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 752, ctx.r10.u32);
loc_828B5648:
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

__attribute__((alias("__imp__sub_828B5660"))) PPC_WEAK_FUNC(sub_828B5660);
PPC_FUNC_IMPL(__imp__sub_828B5660) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828b56bc
	if (ctx.cr6.eq) goto loc_828B56BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x828B5690;
	sub_823339B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B56B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828B56BC;
	sub_82333960(ctx, base);
loc_828B56BC:
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

__attribute__((alias("__imp__sub_828B56D8"))) PPC_WEAK_FUNC(sub_828B56D8);
PPC_FUNC_IMPL(__imp__sub_828B56D8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828b573c
	if (ctx.cr6.eq) goto loc_828B573C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x828B5710;
	sub_8233A258(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23796
	ctx.r4.s64 = ctx.r11.s64 + -23796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x828B573C;
	sub_82333960(ctx, base);
loc_828B573C:
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

__attribute__((alias("__imp__sub_828B5758"))) PPC_WEAK_FUNC(sub_828B5758);
PPC_FUNC_IMPL(__imp__sub_828B5758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B5760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r5,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r5.u8);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828b57e0
	if (ctx.cr6.eq) goto loc_828B57E0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x828b57e0
	if (ctx.cr6.eq) goto loc_828B57E0;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// addi r28,r29,-18228
	ctx.r28.s64 = ctx.r29.s64 + -18228;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B57A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,-2496
	ctx.r7.s64 = ctx.r10.s64 + -2496;
	// addi r6,r1,167
	ctx.r6.s64 = ctx.r1.s64 + 167;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82614738
	ctx.lr = 0x828B57CC;
	sub_82614738(ctx, base);
	// lwz r11,-18228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18228);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B57E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B57E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B57E8"))) PPC_WEAK_FUNC(sub_828B57E8);
PPC_FUNC_IMPL(__imp__sub_828B57E8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x828b5100
	ctx.lr = 0x828B5808;
	sub_828B5100(ctx, base);
	// bl 0x826d1fc0
	ctx.lr = 0x828B580C;
	sub_826D1FC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5888
	if (ctx.cr0.eq) goto loc_828B5888;
	// lwa r11,692(r3)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r3.u32 + 692));
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfs f13,704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,700(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	ctx.f12.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r9,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r9.u32);
	// lfs f11,696(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f10,f13,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x828b5888
	if (ctx.cr6.eq) goto loc_828B5888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5100
	ctx.lr = 0x828B586C;
	sub_828B5100(ctx, base);
	// bl 0x826d1ed0
	ctx.lr = 0x828B5870;
	sub_826D1ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5888
	if (ctx.cr0.eq) goto loc_828B5888;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,504(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8277cba0
	ctx.lr = 0x828B5888;
	sub_8277CBA0(ctx, base);
loc_828B5888:
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

__attribute__((alias("__imp__sub_828B58A0"))) PPC_WEAK_FUNC(sub_828B58A0);
PPC_FUNC_IMPL(__imp__sub_828B58A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B58A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r11,1628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b58f0
	if (!ctx.cr6.gt) goto loc_828B58F0;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_828B58C8:
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x828b58dc
	if (ctx.cr6.eq) goto loc_828B58DC;
	// stw r29,648(r10)
	PPC_STORE_U32(ctx.r10.u32 + 648, ctx.r29.u32);
loc_828B58DC:
	// lwz r10,1628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828b58c8
	if (ctx.cr6.lt) goto loc_828B58C8;
loc_828B58F0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_828B58F4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x828b5938
	if (ctx.cr6.lt) goto loc_828B5938;
	// lwz r11,1676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828b5938
	if (!ctx.cr6.lt) goto loc_828B5938;
	// lwz r10,1672(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// mulli r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 * 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x828b5100
	ctx.lr = 0x828B5920;
	sub_828B5100(ctx, base);
	// bl 0x826d1fc0
	ctx.lr = 0x828B5924;
	sub_826D1FC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5930
	if (ctx.cr0.eq) goto loc_828B5930;
	// stw r29,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r29.u32);
loc_828B5930:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x828b58f4
	goto loc_828B58F4;
loc_828B5938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5940"))) PPC_WEAK_FUNC(sub_828B5940);
PPC_FUNC_IMPL(__imp__sub_828B5940) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1560, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5948"))) PPC_WEAK_FUNC(sub_828B5948);
PPC_FUNC_IMPL(__imp__sub_828B5948) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5950"))) PPC_WEAK_FUNC(sub_828B5950);
PPC_FUNC_IMPL(__imp__sub_828B5950) {
	PPC_FUNC_PROLOGUE();
	// li r3,560
	ctx.r3.s64 = 560;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5958"))) PPC_WEAK_FUNC(sub_828B5958);
PPC_FUNC_IMPL(__imp__sub_828B5958) {
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
	// lwz r11,-26128(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26128);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828b5998
	if (!ctx.cr0.eq) goto loc_828B5998;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26128(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26128, ctx.r11.u32);
	// addi r3,r9,-23796
	ctx.r3.s64 = ctx.r9.s64 + -23796;
	// bl 0x82816528
	ctx.lr = 0x828B5990;
	sub_82816528(ctx, base);
	// stw r3,-26132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26132, ctx.r3.u32);
	// b 0x828b599c
	goto loc_828B599C;
loc_828B5998:
	// lwz r3,-26132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26132);
loc_828B599C:
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

__attribute__((alias("__imp__sub_828B59B0"))) PPC_WEAK_FUNC(sub_828B59B0);
PPC_FUNC_IMPL(__imp__sub_828B59B0) {
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
	// bl 0x828b5a00
	ctx.lr = 0x828B59D0;
	sub_828B5A00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B59E4;
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

__attribute__((alias("__imp__sub_828B5A00"))) PPC_WEAK_FUNC(sub_828B5A00);
PPC_FUNC_IMPL(__imp__sub_828B5A00) {
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
	// addi r31,r11,17556
	ctx.r31.s64 = ctx.r11.s64 + 17556;
	// lwz r11,17552(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17552);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828b5a48
	if (!ctx.cr0.eq) goto loc_828B5A48;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-23728
	ctx.r9.s64 = ctx.r9.s64 + -23728;
	// stw r11,17552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17552, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-16064
	ctx.r3.s64 = ctx.r11.s64 + -16064;
	// bl 0x82a4c758
	ctx.lr = 0x828B5A48;
	sub_82A4C758(ctx, base);
loc_828B5A48:
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

__attribute__((alias("__imp__sub_828B5A60"))) PPC_WEAK_FUNC(sub_828B5A60);
PPC_FUNC_IMPL(__imp__sub_828B5A60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x828B5A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828a57c8
	ctx.lr = 0x828B5A74;
	sub_828A57C8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,11632
	ctx.r11.s64 = ctx.r11.s64 + 11632;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,12688
	ctx.r10.s64 = ctx.r10.s64 + 12688;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,1512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1512, ctx.r30.u32);
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r30,1500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1500, ctx.r30.u32);
	// stw r11,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r11.u32);
	// stw r30,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r30.u32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r30,1544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1544, ctx.r30.u32);
	// stw r30,1524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1524, ctx.r30.u32);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// stw r30,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r30.u32);
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r30,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r30.u32);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// stw r11,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r11.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// stw r30,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r30.u32);
	// stw r30,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r30.u32);
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// stw r30,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r30.u32);
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// stw r29,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r29.u32);
	// stw r29,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r29.u32);
	// stw r29,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r29.u32);
	// stw r29,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r29.u32);
	// stw r29,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r29.u32);
	// bl 0x82333900
	ctx.lr = 0x828B5B50;
	sub_82333900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828b5b70
	if (ctx.cr0.eq) goto loc_828B5B70;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,15852
	ctx.r11.s64 = ctx.r11.s64 + 15852;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x828B5B6C;
	sub_8312E7DC(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828B5B70:
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5B88"))) PPC_WEAK_FUNC(sub_828B5B88);
PPC_FUNC_IMPL(__imp__sub_828B5B88) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// addi r11,r11,11632
	ctx.r11.s64 = ctx.r11.s64 + 11632;
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// addi r10,r10,12688
	ctx.r10.s64 = ctx.r10.s64 + 12688;
	// addi r9,r9,29308
	ctx.r9.s64 = ctx.r9.s64 + 29308;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// beq cr6,0x828b5be0
	if (ctx.cr6.eq) goto loc_828B5BE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B5BE0:
	// addi r3,r31,1624
	ctx.r3.s64 = ctx.r31.s64 + 1624;
	// bl 0x8239d768
	ctx.lr = 0x828B5BE8;
	sub_8239D768(ctx, base);
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// bl 0x8239d768
	ctx.lr = 0x828B5BF0;
	sub_8239D768(ctx, base);
	// addi r3,r31,1576
	ctx.r3.s64 = ctx.r31.s64 + 1576;
	// bl 0x8239d768
	ctx.lr = 0x828B5BF8;
	sub_8239D768(ctx, base);
	// addi r3,r31,1548
	ctx.r3.s64 = ctx.r31.s64 + 1548;
	// bl 0x8239d768
	ctx.lr = 0x828B5C00;
	sub_8239D768(ctx, base);
	// addi r3,r31,1524
	ctx.r3.s64 = ctx.r31.s64 + 1524;
	// bl 0x8239d768
	ctx.lr = 0x828B5C08;
	sub_8239D768(ctx, base);
	// addi r3,r31,1500
	ctx.r3.s64 = ctx.r31.s64 + 1500;
	// bl 0x8239d768
	ctx.lr = 0x828B5C10;
	sub_8239D768(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,13984
	ctx.r11.s64 = ctx.r11.s64 + 13984;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,15032
	ctx.r10.s64 = ctx.r10.s64 + 15032;
	// addi r9,r9,9276
	ctx.r9.s64 = ctx.r9.s64 + 9276;
	// addi r11,r8,-29556
	ctx.r11.s64 = ctx.r8.s64 + -29556;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r11.u32);
	// bl 0x829bc9e8
	ctx.lr = 0x828B5C48;
	sub_829BC9E8(ctx, base);
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

__attribute__((alias("__imp__sub_828B5C60"))) PPC_WEAK_FUNC(sub_828B5C60);
PPC_FUNC_IMPL(__imp__sub_828B5C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828B5C68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,1648(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828b5d20
	if (ctx.cr6.eq) goto loc_828B5D20;
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b5d20
	if (!ctx.cr6.gt) goto loc_828B5D20;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
loc_828B5C98:
	// lwz r10,13024(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,1388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1388);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r5,560(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8282b6b8
	ctx.lr = 0x828B5CB0;
	sub_8282B6B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b5ce0
	if (ctx.cr0.eq) goto loc_828B5CE0;
	// bl 0x82410e10
	ctx.lr = 0x828B5CBC;
	sub_82410E10(ctx, base);
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
	ctx.lr = 0x828B5CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x828b5ce4
	if (!ctx.cr0.eq) goto loc_828B5CE4;
loc_828B5CE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B5CE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b5d0c
	if (ctx.cr6.eq) goto loc_828B5D0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828B5D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828B5D0C:
	// lwz r11,1392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1392);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b5c98
	if (ctx.cr6.lt) goto loc_828B5C98;
loc_828B5D20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5D28"))) PPC_WEAK_FUNC(sub_828B5D28);
PPC_FUNC_IMPL(__imp__sub_828B5D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828b5d50
	if (ctx.cr0.eq) goto loc_828B5D50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828B5D50:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828b5d70
	if (ctx.cr0.eq) goto loc_828B5D70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828B5D70:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,1648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1052);
	// beq cr6,0x828b5d9c
	if (ctx.cr6.eq) goto loc_828B5D9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_828B5D9C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828B5DA8"))) PPC_WEAK_FUNC(sub_828B5DA8);
PPC_FUNC_IMPL(__imp__sub_828B5DA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5DB0"))) PPC_WEAK_FUNC(sub_828B5DB0);
PPC_FUNC_IMPL(__imp__sub_828B5DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23684
	ctx.r3.s64 = ctx.r11.s64 + -23684;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5DC0"))) PPC_WEAK_FUNC(sub_828B5DC0);
PPC_FUNC_IMPL(__imp__sub_828B5DC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x828b5e00
	if (ctx.cr6.eq) goto loc_828B5E00;
	// bl 0x828bc538
	ctx.lr = 0x828B5DE0;
	sub_828BC538(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b5df0
	if (!ctx.cr6.eq) goto loc_828B5DF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b5e04
	goto loc_828B5E04;
loc_828B5DF0:
	// bl 0x82333d20
	ctx.lr = 0x828B5DF4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x828b5e04
	if (ctx.cr6.eq) goto loc_828B5E04;
loc_828B5E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B5E04:
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

__attribute__((alias("__imp__sub_828B5E18"))) PPC_WEAK_FUNC(sub_828B5E18);
PPC_FUNC_IMPL(__imp__sub_828B5E18) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828B5E34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5e68
	if (ctx.cr0.eq) goto loc_828B5E68;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x828b5e6c
	goto loc_828B5E6C;
loc_828B5E68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B5E6C:
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

__attribute__((alias("__imp__sub_828B5E80"))) PPC_WEAK_FUNC(sub_828B5E80);
PPC_FUNC_IMPL(__imp__sub_828B5E80) {
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
	// bl 0x828bc538
	ctx.lr = 0x828B5EA0;
	sub_828BC538(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b5eb0
	if (!ctx.cr6.eq) goto loc_828B5EB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b5ec4
	goto loc_828B5EC4;
loc_828B5EB0:
	// bl 0x82333d20
	ctx.lr = 0x828B5EB4;
	sub_82333D20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b5ec4
	if (ctx.cr6.eq) goto loc_828B5EC4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B5EC4:
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

__attribute__((alias("__imp__sub_828B5EE0"))) PPC_WEAK_FUNC(sub_828B5EE0);
PPC_FUNC_IMPL(__imp__sub_828B5EE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23664
	ctx.r3.s64 = ctx.r11.s64 + -23664;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B5EF0"))) PPC_WEAK_FUNC(sub_828B5EF0);
PPC_FUNC_IMPL(__imp__sub_828B5EF0) {
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
	// beq cr6,0x828b5f28
	if (ctx.cr6.eq) goto loc_828B5F28;
	// bl 0x828bc698
	ctx.lr = 0x828B5F18;
	sub_828BC698(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b5f28
	if (!ctx.cr6.eq) goto loc_828B5F28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b5f34
	goto loc_828B5F34;
loc_828B5F28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B5F34;
	sub_828B5DC0(ctx, base);
loc_828B5F34:
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

__attribute__((alias("__imp__sub_828B5F50"))) PPC_WEAK_FUNC(sub_828B5F50);
PPC_FUNC_IMPL(__imp__sub_828B5F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bc698
	sub_828BC698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B5F58"))) PPC_WEAK_FUNC(sub_828B5F58);
PPC_FUNC_IMPL(__imp__sub_828B5F58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828B5F74;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b5fbc
	if (ctx.cr0.eq) goto loc_828B5FBC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-18128
	ctx.r11.s64 = ctx.r11.s64 + -18128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828b5fc0
	goto loc_828B5FC0;
loc_828B5FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B5FC0:
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

__attribute__((alias("__imp__sub_828B5FD8"))) PPC_WEAK_FUNC(sub_828B5FD8);
PPC_FUNC_IMPL(__imp__sub_828B5FD8) {
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
	// bl 0x828bc698
	ctx.lr = 0x828B5FF8;
	sub_828BC698(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b600c
	if (ctx.cr6.eq) goto loc_828B600C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B600C;
	sub_828B5E80(ctx, base);
loc_828B600C:
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

__attribute__((alias("__imp__sub_828B6028"))) PPC_WEAK_FUNC(sub_828B6028);
PPC_FUNC_IMPL(__imp__sub_828B6028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23636
	ctx.r3.s64 = ctx.r11.s64 + -23636;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6038"))) PPC_WEAK_FUNC(sub_828B6038);
PPC_FUNC_IMPL(__imp__sub_828B6038) {
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
	// beq cr6,0x828b6070
	if (ctx.cr6.eq) goto loc_828B6070;
	// bl 0x828bc7f8
	ctx.lr = 0x828B6060;
	sub_828BC7F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b6070
	if (!ctx.cr6.eq) goto loc_828B6070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b607c
	goto loc_828B607C;
loc_828B6070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B607C;
	sub_828B5DC0(ctx, base);
loc_828B607C:
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

__attribute__((alias("__imp__sub_828B6098"))) PPC_WEAK_FUNC(sub_828B6098);
PPC_FUNC_IMPL(__imp__sub_828B6098) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bc7f8
	sub_828BC7F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B60A0"))) PPC_WEAK_FUNC(sub_828B60A0);
PPC_FUNC_IMPL(__imp__sub_828B60A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828B60BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b6104
	if (ctx.cr0.eq) goto loc_828B6104;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-18024
	ctx.r11.s64 = ctx.r11.s64 + -18024;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828b6108
	goto loc_828B6108;
loc_828B6104:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6108:
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

__attribute__((alias("__imp__sub_828B6120"))) PPC_WEAK_FUNC(sub_828B6120);
PPC_FUNC_IMPL(__imp__sub_828B6120) {
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
	// bl 0x828bc7f8
	ctx.lr = 0x828B6140;
	sub_828BC7F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b6154
	if (ctx.cr6.eq) goto loc_828B6154;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B6154;
	sub_828B5E80(ctx, base);
loc_828B6154:
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

__attribute__((alias("__imp__sub_828B6170"))) PPC_WEAK_FUNC(sub_828B6170);
PPC_FUNC_IMPL(__imp__sub_828B6170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23612
	ctx.r3.s64 = ctx.r11.s64 + -23612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6180"))) PPC_WEAK_FUNC(sub_828B6180);
PPC_FUNC_IMPL(__imp__sub_828B6180) {
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
	// beq cr6,0x828b61b8
	if (ctx.cr6.eq) goto loc_828B61B8;
	// bl 0x828bc958
	ctx.lr = 0x828B61A8;
	sub_828BC958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b61b8
	if (!ctx.cr6.eq) goto loc_828B61B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b61c4
	goto loc_828B61C4;
loc_828B61B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B61C4;
	sub_828B5DC0(ctx, base);
loc_828B61C4:
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

__attribute__((alias("__imp__sub_828B61E0"))) PPC_WEAK_FUNC(sub_828B61E0);
PPC_FUNC_IMPL(__imp__sub_828B61E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bc958
	sub_828BC958(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B61E8"))) PPC_WEAK_FUNC(sub_828B61E8);
PPC_FUNC_IMPL(__imp__sub_828B61E8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x828B6204;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b625c
	if (ctx.cr0.eq) goto loc_828B625C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r9,r9,-18232
	ctx.r9.s64 = ctx.r9.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17920
	ctx.r11.s64 = ctx.r11.s64 + -17920;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r11,r10,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// b 0x828b6260
	goto loc_828B6260;
loc_828B625C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6260:
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

__attribute__((alias("__imp__sub_828B6278"))) PPC_WEAK_FUNC(sub_828B6278);
PPC_FUNC_IMPL(__imp__sub_828B6278) {
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
	// bl 0x828bc958
	ctx.lr = 0x828B6298;
	sub_828BC958(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b62ac
	if (ctx.cr6.eq) goto loc_828B62AC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B62AC;
	sub_828B5E80(ctx, base);
loc_828B62AC:
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

__attribute__((alias("__imp__sub_828B62C8"))) PPC_WEAK_FUNC(sub_828B62C8);
PPC_FUNC_IMPL(__imp__sub_828B62C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23588
	ctx.r3.s64 = ctx.r11.s64 + -23588;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B62D8"))) PPC_WEAK_FUNC(sub_828B62D8);
PPC_FUNC_IMPL(__imp__sub_828B62D8) {
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
	// beq cr6,0x828b6310
	if (ctx.cr6.eq) goto loc_828B6310;
	// bl 0x828bcab8
	ctx.lr = 0x828B6300;
	sub_828BCAB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b6310
	if (!ctx.cr6.eq) goto loc_828B6310;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b631c
	goto loc_828B631C;
loc_828B6310:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B631C;
	sub_828B5DC0(ctx, base);
loc_828B631C:
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

__attribute__((alias("__imp__sub_828B6338"))) PPC_WEAK_FUNC(sub_828B6338);
PPC_FUNC_IMPL(__imp__sub_828B6338) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bcab8
	sub_828BCAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6340"))) PPC_WEAK_FUNC(sub_828B6340);
PPC_FUNC_IMPL(__imp__sub_828B6340) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828B635C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b639c
	if (ctx.cr0.eq) goto loc_828B639C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17816
	ctx.r11.s64 = ctx.r11.s64 + -17816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x828b63a0
	goto loc_828B63A0;
loc_828B639C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B63A0:
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

__attribute__((alias("__imp__sub_828B63B8"))) PPC_WEAK_FUNC(sub_828B63B8);
PPC_FUNC_IMPL(__imp__sub_828B63B8) {
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
	// bl 0x828bcab8
	ctx.lr = 0x828B63D8;
	sub_828BCAB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b63ec
	if (ctx.cr6.eq) goto loc_828B63EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B63EC;
	sub_828B5E80(ctx, base);
loc_828B63EC:
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

__attribute__((alias("__imp__sub_828B6408"))) PPC_WEAK_FUNC(sub_828B6408);
PPC_FUNC_IMPL(__imp__sub_828B6408) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23552
	ctx.r3.s64 = ctx.r11.s64 + -23552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6418"))) PPC_WEAK_FUNC(sub_828B6418);
PPC_FUNC_IMPL(__imp__sub_828B6418) {
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
	// beq cr6,0x828b6450
	if (ctx.cr6.eq) goto loc_828B6450;
	// bl 0x828bcc18
	ctx.lr = 0x828B6440;
	sub_828BCC18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b6450
	if (!ctx.cr6.eq) goto loc_828B6450;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b645c
	goto loc_828B645C;
loc_828B6450:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B645C;
	sub_828B5DC0(ctx, base);
loc_828B645C:
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

__attribute__((alias("__imp__sub_828B6478"))) PPC_WEAK_FUNC(sub_828B6478);
PPC_FUNC_IMPL(__imp__sub_828B6478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bcc18
	sub_828BCC18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6480"))) PPC_WEAK_FUNC(sub_828B6480);
PPC_FUNC_IMPL(__imp__sub_828B6480) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828B649C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b64dc
	if (ctx.cr0.eq) goto loc_828B64DC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17712
	ctx.r11.s64 = ctx.r11.s64 + -17712;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x828b64e0
	goto loc_828B64E0;
loc_828B64DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B64E0:
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

__attribute__((alias("__imp__sub_828B64F8"))) PPC_WEAK_FUNC(sub_828B64F8);
PPC_FUNC_IMPL(__imp__sub_828B64F8) {
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
	// bl 0x828bcc18
	ctx.lr = 0x828B6518;
	sub_828BCC18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b652c
	if (ctx.cr6.eq) goto loc_828B652C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B652C;
	sub_828B5E80(ctx, base);
loc_828B652C:
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

__attribute__((alias("__imp__sub_828B6548"))) PPC_WEAK_FUNC(sub_828B6548);
PPC_FUNC_IMPL(__imp__sub_828B6548) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23516
	ctx.r3.s64 = ctx.r11.s64 + -23516;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6558"))) PPC_WEAK_FUNC(sub_828B6558);
PPC_FUNC_IMPL(__imp__sub_828B6558) {
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
	// beq cr6,0x828b6590
	if (ctx.cr6.eq) goto loc_828B6590;
	// bl 0x828bcd78
	ctx.lr = 0x828B6580;
	sub_828BCD78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b6590
	if (!ctx.cr6.eq) goto loc_828B6590;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b659c
	goto loc_828B659C;
loc_828B6590:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B659C;
	sub_828B5DC0(ctx, base);
loc_828B659C:
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

__attribute__((alias("__imp__sub_828B65B8"))) PPC_WEAK_FUNC(sub_828B65B8);
PPC_FUNC_IMPL(__imp__sub_828B65B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bcd78
	sub_828BCD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B65C0"))) PPC_WEAK_FUNC(sub_828B65C0);
PPC_FUNC_IMPL(__imp__sub_828B65C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bc538
	sub_828BC538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B65C8"))) PPC_WEAK_FUNC(sub_828B65C8);
PPC_FUNC_IMPL(__imp__sub_828B65C8) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828B65E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b662c
	if (ctx.cr0.eq) goto loc_828B662C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17608
	ctx.r11.s64 = ctx.r11.s64 + -17608;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x828b6630
	goto loc_828B6630;
loc_828B662C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6630:
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

__attribute__((alias("__imp__sub_828B6648"))) PPC_WEAK_FUNC(sub_828B6648);
PPC_FUNC_IMPL(__imp__sub_828B6648) {
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
	// bl 0x828bcd78
	ctx.lr = 0x828B6668;
	sub_828BCD78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b667c
	if (ctx.cr6.eq) goto loc_828B667C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B667C;
	sub_828B5E80(ctx, base);
loc_828B667C:
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

__attribute__((alias("__imp__sub_828B6698"))) PPC_WEAK_FUNC(sub_828B6698);
PPC_FUNC_IMPL(__imp__sub_828B6698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23488
	ctx.r3.s64 = ctx.r11.s64 + -23488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B66A8"))) PPC_WEAK_FUNC(sub_828B66A8);
PPC_FUNC_IMPL(__imp__sub_828B66A8) {
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
	// beq cr6,0x828b66e0
	if (ctx.cr6.eq) goto loc_828B66E0;
	// bl 0x828bced8
	ctx.lr = 0x828B66D0;
	sub_828BCED8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b66e0
	if (!ctx.cr6.eq) goto loc_828B66E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b66ec
	goto loc_828B66EC;
loc_828B66E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B66EC;
	sub_828B5DC0(ctx, base);
loc_828B66EC:
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

__attribute__((alias("__imp__sub_828B6708"))) PPC_WEAK_FUNC(sub_828B6708);
PPC_FUNC_IMPL(__imp__sub_828B6708) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bced8
	sub_828BCED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6710"))) PPC_WEAK_FUNC(sub_828B6710);
PPC_FUNC_IMPL(__imp__sub_828B6710) {
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
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82833108
	ctx.lr = 0x828B6730;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b67a4
	if (ctx.cr0.eq) goto loc_828B67A4;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,-18312
	ctx.r9.s64 = ctx.r9.s64 + -18312;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B677C;
	sub_82A4EA80(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x828b67a8
	goto loc_828B67A8;
loc_828B67A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B67A8:
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

__attribute__((alias("__imp__sub_828B67C0"))) PPC_WEAK_FUNC(sub_828B67C0);
PPC_FUNC_IMPL(__imp__sub_828B67C0) {
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
	// bl 0x828bced8
	ctx.lr = 0x828B67E0;
	sub_828BCED8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b67f4
	if (ctx.cr6.eq) goto loc_828B67F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B67F4;
	sub_828B5E80(ctx, base);
loc_828B67F4:
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

__attribute__((alias("__imp__sub_828B6810"))) PPC_WEAK_FUNC(sub_828B6810);
PPC_FUNC_IMPL(__imp__sub_828B6810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23464
	ctx.r3.s64 = ctx.r11.s64 + -23464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6820"))) PPC_WEAK_FUNC(sub_828B6820);
PPC_FUNC_IMPL(__imp__sub_828B6820) {
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
	// beq cr6,0x828b6858
	if (ctx.cr6.eq) goto loc_828B6858;
	// bl 0x828bd038
	ctx.lr = 0x828B6848;
	sub_828BD038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b6858
	if (!ctx.cr6.eq) goto loc_828B6858;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b6864
	goto loc_828B6864;
loc_828B6858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B6864;
	sub_828B5DC0(ctx, base);
loc_828B6864:
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

__attribute__((alias("__imp__sub_828B6880"))) PPC_WEAK_FUNC(sub_828B6880);
PPC_FUNC_IMPL(__imp__sub_828B6880) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd038
	sub_828BD038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6888"))) PPC_WEAK_FUNC(sub_828B6888);
PPC_FUNC_IMPL(__imp__sub_828B6888) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828B68A4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b68ec
	if (ctx.cr0.eq) goto loc_828B68EC;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17488
	ctx.r11.s64 = ctx.r11.s64 + -17488;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828b68f0
	goto loc_828B68F0;
loc_828B68EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B68F0:
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

__attribute__((alias("__imp__sub_828B6908"))) PPC_WEAK_FUNC(sub_828B6908);
PPC_FUNC_IMPL(__imp__sub_828B6908) {
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
	// bl 0x828bd038
	ctx.lr = 0x828B6928;
	sub_828BD038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b693c
	if (ctx.cr6.eq) goto loc_828B693C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B693C;
	sub_828B5E80(ctx, base);
loc_828B693C:
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

__attribute__((alias("__imp__sub_828B6958"))) PPC_WEAK_FUNC(sub_828B6958);
PPC_FUNC_IMPL(__imp__sub_828B6958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23440
	ctx.r3.s64 = ctx.r11.s64 + -23440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6968"))) PPC_WEAK_FUNC(sub_828B6968);
PPC_FUNC_IMPL(__imp__sub_828B6968) {
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
	// beq cr6,0x828b69a0
	if (ctx.cr6.eq) goto loc_828B69A0;
	// bl 0x828bd198
	ctx.lr = 0x828B6990;
	sub_828BD198(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b69a0
	if (!ctx.cr6.eq) goto loc_828B69A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b69ac
	goto loc_828B69AC;
loc_828B69A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b5dc0
	ctx.lr = 0x828B69AC;
	sub_828B5DC0(ctx, base);
loc_828B69AC:
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

__attribute__((alias("__imp__sub_828B69C8"))) PPC_WEAK_FUNC(sub_828B69C8);
PPC_FUNC_IMPL(__imp__sub_828B69C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd198
	sub_828BD198(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B69D0"))) PPC_WEAK_FUNC(sub_828B69D0);
PPC_FUNC_IMPL(__imp__sub_828B69D0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828B69EC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b6a2c
	if (ctx.cr0.eq) goto loc_828B6A2C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-17384
	ctx.r11.s64 = ctx.r11.s64 + -17384;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x828b6a30
	goto loc_828B6A30;
loc_828B6A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6A30:
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

__attribute__((alias("__imp__sub_828B6A48"))) PPC_WEAK_FUNC(sub_828B6A48);
PPC_FUNC_IMPL(__imp__sub_828B6A48) {
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
	// bl 0x828bd198
	ctx.lr = 0x828B6A68;
	sub_828BD198(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b6a7c
	if (ctx.cr6.eq) goto loc_828B6A7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b5e80
	ctx.lr = 0x828B6A7C;
	sub_828B5E80(ctx, base);
loc_828B6A7C:
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

__attribute__((alias("__imp__sub_828B6A98"))) PPC_WEAK_FUNC(sub_828B6A98);
PPC_FUNC_IMPL(__imp__sub_828B6A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25508
	ctx.r3.s64 = ctx.r11.s64 + -25508;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6AA8"))) PPC_WEAK_FUNC(sub_828B6AA8);
PPC_FUNC_IMPL(__imp__sub_828B6AA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b6ae0
	if (ctx.cr6.eq) goto loc_828B6AE0;
	// bl 0x828bd570
	ctx.lr = 0x828B6AD0;
	sub_828BD570(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b6ae0
	if (!ctx.cr6.eq) goto loc_828B6AE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b6af8
	goto loc_828B6AF8;
loc_828B6AE0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fe08
	ctx.lr = 0x828B6AF8;
	sub_8236FE08(ctx, base);
loc_828B6AF8:
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

__attribute__((alias("__imp__sub_828B6B10"))) PPC_WEAK_FUNC(sub_828B6B10);
PPC_FUNC_IMPL(__imp__sub_828B6B10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd570
	sub_828BD570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6B18"))) PPC_WEAK_FUNC(sub_828B6B18);
PPC_FUNC_IMPL(__imp__sub_828B6B18) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828B6B34;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b6b4c
	if (ctx.cr0.eq) goto loc_828B6B4C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x828b6bd8
	ctx.lr = 0x828B6B48;
	sub_828B6BD8(ctx, base);
	// b 0x828b6b50
	goto loc_828B6B50;
loc_828B6B4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6B50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b6b64
	if (ctx.cr6.eq) goto loc_828B6B64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828B6B64:
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

__attribute__((alias("__imp__sub_828B6B78"))) PPC_WEAK_FUNC(sub_828B6B78);
PPC_FUNC_IMPL(__imp__sub_828B6B78) {
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
	// bl 0x828bd570
	ctx.lr = 0x828B6B98;
	sub_828BD570(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b6ba8
	if (!ctx.cr6.eq) goto loc_828B6BA8;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x828b6bc0
	goto loc_828B6BC0;
loc_828B6BA8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fee0
	ctx.lr = 0x828B6BC0;
	sub_8236FEE0(ctx, base);
loc_828B6BC0:
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

__attribute__((alias("__imp__sub_828B6BD8"))) PPC_WEAK_FUNC(sub_828B6BD8);
PPC_FUNC_IMPL(__imp__sub_828B6BD8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x828b6c20
	if (!ctx.cr6.eq) goto loc_828B6C20;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828b6c2c
	goto loc_828B6C2C;
loc_828B6C20:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B6C2C:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x828B6C34;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828b6c44
	if (!ctx.cr6.eq) goto loc_828B6C44;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828b6c50
	goto loc_828B6C50;
loc_828B6C44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B6C50:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r10,6092
	ctx.r10.s64 = ctx.r10.s64 + 6092;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,-31048
	ctx.r8.s64 = ctx.r7.s64 + -31048;
	// addi r7,r6,-30872
	ctx.r7.s64 = ctx.r6.s64 + -30872;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r10,-16736
	ctx.r5.s64 = ctx.r10.s64 + -16736;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r6,r6,-16560
	ctx.r6.s64 = ctx.r6.s64 + -16560;
	// addi r4,r10,-16508
	ctx.r4.s64 = ctx.r10.s64 + -16508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_828B6CF8"))) PPC_WEAK_FUNC(sub_828B6CF8);
PPC_FUNC_IMPL(__imp__sub_828B6CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6D08"))) PPC_WEAK_FUNC(sub_828B6D08);
PPC_FUNC_IMPL(__imp__sub_828B6D08) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b6d40
	if (ctx.cr6.eq) goto loc_828B6D40;
	// bl 0x828bd6c8
	ctx.lr = 0x828B6D30;
	sub_828BD6C8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b6d40
	if (!ctx.cr6.eq) goto loc_828B6D40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b6d58
	goto loc_828B6D58;
loc_828B6D40:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fe08
	ctx.lr = 0x828B6D58;
	sub_8236FE08(ctx, base);
loc_828B6D58:
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

__attribute__((alias("__imp__sub_828B6D70"))) PPC_WEAK_FUNC(sub_828B6D70);
PPC_FUNC_IMPL(__imp__sub_828B6D70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd6c8
	sub_828BD6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6D78"))) PPC_WEAK_FUNC(sub_828B6D78);
PPC_FUNC_IMPL(__imp__sub_828B6D78) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bd730
	sub_823BD730(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6D80"))) PPC_WEAK_FUNC(sub_828B6D80);
PPC_FUNC_IMPL(__imp__sub_828B6D80) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828B6D9C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b6db4
	if (ctx.cr0.eq) goto loc_828B6DB4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x828b6e40
	ctx.lr = 0x828B6DB0;
	sub_828B6E40(ctx, base);
	// b 0x828b6db8
	goto loc_828B6DB8;
loc_828B6DB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B6DB8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b6dcc
	if (ctx.cr6.eq) goto loc_828B6DCC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828B6DCC:
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

__attribute__((alias("__imp__sub_828B6DE0"))) PPC_WEAK_FUNC(sub_828B6DE0);
PPC_FUNC_IMPL(__imp__sub_828B6DE0) {
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
	// bl 0x828bd6c8
	ctx.lr = 0x828B6E00;
	sub_828BD6C8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b6e10
	if (!ctx.cr6.eq) goto loc_828B6E10;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x828b6e28
	goto loc_828B6E28;
loc_828B6E10:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fee0
	ctx.lr = 0x828B6E28;
	sub_8236FEE0(ctx, base);
loc_828B6E28:
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

__attribute__((alias("__imp__sub_828B6E40"))) PPC_WEAK_FUNC(sub_828B6E40);
PPC_FUNC_IMPL(__imp__sub_828B6E40) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x828b6e88
	if (!ctx.cr6.eq) goto loc_828B6E88;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828b6e94
	goto loc_828B6E94;
loc_828B6E88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B6E94:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x828B6E9C;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828b6eac
	if (!ctx.cr6.eq) goto loc_828B6EAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828b6eb8
	goto loc_828B6EB8;
loc_828B6EAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B6EB8:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r10,6092
	ctx.r10.s64 = ctx.r10.s64 + 6092;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,-31048
	ctx.r8.s64 = ctx.r7.s64 + -31048;
	// addi r7,r6,-30872
	ctx.r7.s64 = ctx.r6.s64 + -30872;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r10,-16488
	ctx.r5.s64 = ctx.r10.s64 + -16488;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r6,r6,-16312
	ctx.r6.s64 = ctx.r6.s64 + -16312;
	// addi r4,r10,-16260
	ctx.r4.s64 = ctx.r10.s64 + -16260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_828B6F60"))) PPC_WEAK_FUNC(sub_828B6F60);
PPC_FUNC_IMPL(__imp__sub_828B6F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B6F70"))) PPC_WEAK_FUNC(sub_828B6F70);
PPC_FUNC_IMPL(__imp__sub_828B6F70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b6fa8
	if (ctx.cr6.eq) goto loc_828B6FA8;
	// bl 0x828bd820
	ctx.lr = 0x828B6F98;
	sub_828BD820(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b6fa8
	if (!ctx.cr6.eq) goto loc_828B6FA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b6fc0
	goto loc_828B6FC0;
loc_828B6FA8:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fe08
	ctx.lr = 0x828B6FC0;
	sub_8236FE08(ctx, base);
loc_828B6FC0:
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

__attribute__((alias("__imp__sub_828B6FD8"))) PPC_WEAK_FUNC(sub_828B6FD8);
PPC_FUNC_IMPL(__imp__sub_828B6FD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd820
	sub_828BD820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B6FE0"))) PPC_WEAK_FUNC(sub_828B6FE0);
PPC_FUNC_IMPL(__imp__sub_828B6FE0) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828B6FFC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b7014
	if (ctx.cr0.eq) goto loc_828B7014;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x828b70a0
	ctx.lr = 0x828B7010;
	sub_828B70A0(ctx, base);
	// b 0x828b7018
	goto loc_828B7018;
loc_828B7014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B7018:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b702c
	if (ctx.cr6.eq) goto loc_828B702C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828B702C:
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

__attribute__((alias("__imp__sub_828B7040"))) PPC_WEAK_FUNC(sub_828B7040);
PPC_FUNC_IMPL(__imp__sub_828B7040) {
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
	// bl 0x828bd820
	ctx.lr = 0x828B7060;
	sub_828BD820(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b7070
	if (!ctx.cr6.eq) goto loc_828B7070;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x828b7088
	goto loc_828B7088;
loc_828B7070:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fee0
	ctx.lr = 0x828B7088;
	sub_8236FEE0(ctx, base);
loc_828B7088:
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

__attribute__((alias("__imp__sub_828B70A0"))) PPC_WEAK_FUNC(sub_828B70A0);
PPC_FUNC_IMPL(__imp__sub_828B70A0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x828b70e8
	if (!ctx.cr6.eq) goto loc_828B70E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828b70f4
	goto loc_828B70F4;
loc_828B70E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B70F4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x828B70FC;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828b710c
	if (!ctx.cr6.eq) goto loc_828B710C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828b7118
	goto loc_828B7118;
loc_828B710C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B7118:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r10,6092
	ctx.r10.s64 = ctx.r10.s64 + 6092;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,-31048
	ctx.r8.s64 = ctx.r7.s64 + -31048;
	// addi r7,r6,-30872
	ctx.r7.s64 = ctx.r6.s64 + -30872;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r10,-17240
	ctx.r5.s64 = ctx.r10.s64 + -17240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r6,r6,-17064
	ctx.r6.s64 = ctx.r6.s64 + -17064;
	// addi r4,r10,-17012
	ctx.r4.s64 = ctx.r10.s64 + -17012;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_828B71C0"))) PPC_WEAK_FUNC(sub_828B71C0);
PPC_FUNC_IMPL(__imp__sub_828B71C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B71D0"))) PPC_WEAK_FUNC(sub_828B71D0);
PPC_FUNC_IMPL(__imp__sub_828B71D0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828b7208
	if (ctx.cr6.eq) goto loc_828B7208;
	// bl 0x828bd978
	ctx.lr = 0x828B71F8;
	sub_828BD978(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b7208
	if (!ctx.cr6.eq) goto loc_828B7208;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7220
	goto loc_828B7220;
loc_828B7208:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fe08
	ctx.lr = 0x828B7220;
	sub_8236FE08(ctx, base);
loc_828B7220:
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

__attribute__((alias("__imp__sub_828B7238"))) PPC_WEAK_FUNC(sub_828B7238);
PPC_FUNC_IMPL(__imp__sub_828B7238) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bd978
	sub_828BD978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B7240"))) PPC_WEAK_FUNC(sub_828B7240);
PPC_FUNC_IMPL(__imp__sub_828B7240) {
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
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82833108
	ctx.lr = 0x828B725C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b7274
	if (ctx.cr0.eq) goto loc_828B7274;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x828b7300
	ctx.lr = 0x828B7270;
	sub_828B7300(ctx, base);
	// b 0x828b7278
	goto loc_828B7278;
loc_828B7274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B7278:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b728c
	if (ctx.cr6.eq) goto loc_828B728C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828B728C:
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

__attribute__((alias("__imp__sub_828B72A0"))) PPC_WEAK_FUNC(sub_828B72A0);
PPC_FUNC_IMPL(__imp__sub_828B72A0) {
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
	// bl 0x828bd978
	ctx.lr = 0x828B72C0;
	sub_828BD978(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x828b72d0
	if (!ctx.cr6.eq) goto loc_828B72D0;
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// b 0x828b72e8
	goto loc_828B72E8;
loc_828B72D0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8236fee0
	ctx.lr = 0x828B72E8;
	sub_8236FEE0(ctx, base);
loc_828B72E8:
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

__attribute__((alias("__imp__sub_828B7300"))) PPC_WEAK_FUNC(sub_828B7300);
PPC_FUNC_IMPL(__imp__sub_828B7300) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-16748
	ctx.r11.s64 = ctx.r11.s64 + -16748;
	// addi r10,r10,-6368
	ctx.r10.s64 = ctx.r10.s64 + -6368;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bne cr6,0x828b7348
	if (!ctx.cr6.eq) goto loc_828B7348;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x828b7354
	goto loc_828B7354;
loc_828B7348:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B7354:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82404518
	ctx.lr = 0x828B735C;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x828b736c
	if (!ctx.cr6.eq) goto loc_828B736C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x828b7378
	goto loc_828B7378;
loc_828B736C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_828B7378:
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r10,6092
	ctx.r10.s64 = ctx.r10.s64 + 6092;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r7,-31048
	ctx.r8.s64 = ctx.r7.s64 + -31048;
	// addi r7,r6,-30872
	ctx.r7.s64 = ctx.r6.s64 + -30872;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lis r6,-32216
	ctx.r6.s64 = -2111307776;
	// addi r5,r10,-16992
	ctx.r5.s64 = ctx.r10.s64 + -16992;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// addi r6,r6,-16816
	ctx.r6.s64 = ctx.r6.s64 + -16816;
	// addi r4,r10,-16764
	ctx.r4.s64 = ctx.r10.s64 + -16764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_828B7420"))) PPC_WEAK_FUNC(sub_828B7420);
PPC_FUNC_IMPL(__imp__sub_828B7420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7430"))) PPC_WEAK_FUNC(sub_828B7430);
PPC_FUNC_IMPL(__imp__sub_828B7430) {
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
	// beq cr6,0x828b7468
	if (ctx.cr6.eq) goto loc_828B7468;
	// bl 0x82723640
	ctx.lr = 0x828B7458;
	sub_82723640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7468
	if (!ctx.cr6.eq) goto loc_828B7468;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7474
	goto loc_828B7474;
loc_828B7468:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7474;
	sub_8237B670(ctx, base);
loc_828B7474:
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

__attribute__((alias("__imp__sub_828B7490"))) PPC_WEAK_FUNC(sub_828B7490);
PPC_FUNC_IMPL(__imp__sub_828B7490) {
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
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82833108
	ctx.lr = 0x828B74AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b74c0
	if (ctx.cr0.eq) goto loc_828B74C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b7538
	ctx.lr = 0x828B74BC;
	sub_828B7538(ctx, base);
	// b 0x828b74c4
	goto loc_828B74C4;
loc_828B74C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B74C4:
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

__attribute__((alias("__imp__sub_828B74D8"))) PPC_WEAK_FUNC(sub_828B74D8);
PPC_FUNC_IMPL(__imp__sub_828B74D8) {
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
	// bl 0x82723640
	ctx.lr = 0x828B74F8;
	sub_82723640(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7508
	if (!ctx.cr6.eq) goto loc_828B7508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b7520
	goto loc_828B7520;
loc_828B7508:
	// bl 0x823ceb68
	ctx.lr = 0x828B750C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b7520
	if (ctx.cr6.eq) goto loc_828B7520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B7520;
	sub_8237B5A8(ctx, base);
loc_828B7520:
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

__attribute__((alias("__imp__sub_828B7538"))) PPC_WEAK_FUNC(sub_828B7538);
PPC_FUNC_IMPL(__imp__sub_828B7538) {
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
	// bl 0x8237b768
	ctx.lr = 0x828B7558;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21664
	ctx.r11.s64 = ctx.r11.s64 + -21664;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// lbz r11,113(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 113);
	// stb r11,113(r31)
	PPC_STORE_U8(ctx.r31.u32 + 113, ctx.r11.u8);
	// lbz r11,114(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 114);
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lbz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// lbz r11,121(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 121);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// lbz r11,122(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 122);
	// stb r11,122(r31)
	PPC_STORE_U8(ctx.r31.u32 + 122, ctx.r11.u8);
	// lbz r11,123(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 123);
	// stb r11,123(r31)
	PPC_STORE_U8(ctx.r31.u32 + 123, ctx.r11.u8);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828B7628"))) PPC_WEAK_FUNC(sub_828B7628);
PPC_FUNC_IMPL(__imp__sub_828B7628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23364
	ctx.r3.s64 = ctx.r11.s64 + -23364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7638"))) PPC_WEAK_FUNC(sub_828B7638);
PPC_FUNC_IMPL(__imp__sub_828B7638) {
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
	// beq cr6,0x828b7670
	if (ctx.cr6.eq) goto loc_828B7670;
	// bl 0x828bdac0
	ctx.lr = 0x828B7660;
	sub_828BDAC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7670
	if (!ctx.cr6.eq) goto loc_828B7670;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b767c
	goto loc_828B767C;
loc_828B7670:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B767C;
	sub_8237B670(ctx, base);
loc_828B767C:
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

__attribute__((alias("__imp__sub_828B7698"))) PPC_WEAK_FUNC(sub_828B7698);
PPC_FUNC_IMPL(__imp__sub_828B7698) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bdac0
	sub_828BDAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B76A0"))) PPC_WEAK_FUNC(sub_828B76A0);
PPC_FUNC_IMPL(__imp__sub_828B76A0) {
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
	// li r3,296
	ctx.r3.s64 = 296;
	// bl 0x82833108
	ctx.lr = 0x828B76BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b76d0
	if (ctx.cr0.eq) goto loc_828B76D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b7748
	ctx.lr = 0x828B76CC;
	sub_828B7748(ctx, base);
	// b 0x828b76d4
	goto loc_828B76D4;
loc_828B76D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B76D4:
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

__attribute__((alias("__imp__sub_828B76E8"))) PPC_WEAK_FUNC(sub_828B76E8);
PPC_FUNC_IMPL(__imp__sub_828B76E8) {
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
	// bl 0x828bdac0
	ctx.lr = 0x828B7708;
	sub_828BDAC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7718
	if (!ctx.cr6.eq) goto loc_828B7718;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b7730
	goto loc_828B7730;
loc_828B7718:
	// bl 0x823ceb68
	ctx.lr = 0x828B771C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b7730
	if (ctx.cr6.eq) goto loc_828B7730;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B7730;
	sub_8237B5A8(ctx, base);
loc_828B7730:
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

__attribute__((alias("__imp__sub_828B7748"))) PPC_WEAK_FUNC(sub_828B7748);
PPC_FUNC_IMPL(__imp__sub_828B7748) {
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
	// bl 0x8237b768
	ctx.lr = 0x828B7768;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-21552
	ctx.r11.s64 = ctx.r11.s64 + -21552;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7784;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r4,r30,140
	ctx.r4.s64 = ctx.r30.s64 + 140;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7794;
	sub_82A4EA80(ctx, base);
	// addi r11,r31,172
	ctx.r11.s64 = ctx.r31.s64 + 172;
	// addi r10,r30,172
	ctx.r10.s64 = ctx.r30.s64 + 172;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lfs f0,176(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// bl 0x825c7d68
	ctx.lr = 0x828B77B8;
	sub_825C7D68(ctx, base);
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// addi r10,r30,204
	ctx.r10.s64 = ctx.r30.s64 + 204;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// bl 0x825c7d68
	ctx.lr = 0x828B77DC;
	sub_825C7D68(ctx, base);
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
	// addi r10,r30,236
	ctx.r10.s64 = ctx.r30.s64 + 236;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// lwz r11,236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x825c7d68
	ctx.lr = 0x828B7800;
	sub_825C7D68(ctx, base);
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lwz r11,284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lwz r11,288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// lwz r11,292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828B7858"))) PPC_WEAK_FUNC(sub_828B7858);
PPC_FUNC_IMPL(__imp__sub_828B7858) {
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
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82855110
	ctx.lr = 0x828B787C;
	sub_82855110(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// bl 0x82855110
	ctx.lr = 0x828B7884;
	sub_82855110(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// bl 0x82855110
	ctx.lr = 0x828B788C;
	sub_82855110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B7894;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b78a4
	if (ctx.cr0.eq) goto loc_828B78A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B78A4;
	sub_82332DB8(ctx, base);
loc_828B78A4:
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

__attribute__((alias("__imp__sub_828B78C0"))) PPC_WEAK_FUNC(sub_828B78C0);
PPC_FUNC_IMPL(__imp__sub_828B78C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B78D0"))) PPC_WEAK_FUNC(sub_828B78D0);
PPC_FUNC_IMPL(__imp__sub_828B78D0) {
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
	// beq cr6,0x828b7908
	if (ctx.cr6.eq) goto loc_828B7908;
	// bl 0x828bdc20
	ctx.lr = 0x828B78F8;
	sub_828BDC20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7908
	if (!ctx.cr6.eq) goto loc_828B7908;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7914
	goto loc_828B7914;
loc_828B7908:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7914;
	sub_8237B670(ctx, base);
loc_828B7914:
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

__attribute__((alias("__imp__sub_828B7930"))) PPC_WEAK_FUNC(sub_828B7930);
PPC_FUNC_IMPL(__imp__sub_828B7930) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bdc20
	sub_828BDC20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B7938"))) PPC_WEAK_FUNC(sub_828B7938);
PPC_FUNC_IMPL(__imp__sub_828B7938) {
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
	// li r3,164
	ctx.r3.s64 = 164;
	// bl 0x82833108
	ctx.lr = 0x828B7954;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b7968
	if (ctx.cr0.eq) goto loc_828B7968;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b79e0
	ctx.lr = 0x828B7964;
	sub_828B79E0(ctx, base);
	// b 0x828b796c
	goto loc_828B796C;
loc_828B7968:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B796C:
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

__attribute__((alias("__imp__sub_828B7980"))) PPC_WEAK_FUNC(sub_828B7980);
PPC_FUNC_IMPL(__imp__sub_828B7980) {
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
	// bl 0x828bdc20
	ctx.lr = 0x828B79A0;
	sub_828BDC20(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b79b0
	if (!ctx.cr6.eq) goto loc_828B79B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b79c8
	goto loc_828B79C8;
loc_828B79B0:
	// bl 0x823ceb68
	ctx.lr = 0x828B79B4;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b79c8
	if (ctx.cr6.eq) goto loc_828B79C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B79C8;
	sub_8237B5A8(ctx, base);
loc_828B79C8:
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

__attribute__((alias("__imp__sub_828B79E0"))) PPC_WEAK_FUNC(sub_828B79E0);
PPC_FUNC_IMPL(__imp__sub_828B79E0) {
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
	// bl 0x8237b768
	ctx.lr = 0x828B7A00;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21424
	ctx.r11.s64 = ctx.r11.s64 + -21424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,160(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828B7A98"))) PPC_WEAK_FUNC(sub_828B7A98);
PPC_FUNC_IMPL(__imp__sub_828B7A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23316
	ctx.r3.s64 = ctx.r11.s64 + -23316;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7AA8"))) PPC_WEAK_FUNC(sub_828B7AA8);
PPC_FUNC_IMPL(__imp__sub_828B7AA8) {
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
	// beq cr6,0x828b7ae0
	if (ctx.cr6.eq) goto loc_828B7AE0;
	// bl 0x828bdd80
	ctx.lr = 0x828B7AD0;
	sub_828BDD80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7ae0
	if (!ctx.cr6.eq) goto loc_828B7AE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7aec
	goto loc_828B7AEC;
loc_828B7AE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7AEC;
	sub_8237B670(ctx, base);
loc_828B7AEC:
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

__attribute__((alias("__imp__sub_828B7B08"))) PPC_WEAK_FUNC(sub_828B7B08);
PPC_FUNC_IMPL(__imp__sub_828B7B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bdd80
	sub_828BDD80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B7B10"))) PPC_WEAK_FUNC(sub_828B7B10);
PPC_FUNC_IMPL(__imp__sub_828B7B10) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x828B7B30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b7b80
	if (ctx.cr0.eq) goto loc_828B7B80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B7B44;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-21296
	ctx.r11.s64 = ctx.r11.s64 + -21296;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x828b7b84
	goto loc_828B7B84;
loc_828B7B80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B7B84:
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

__attribute__((alias("__imp__sub_828B7BA0"))) PPC_WEAK_FUNC(sub_828B7BA0);
PPC_FUNC_IMPL(__imp__sub_828B7BA0) {
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
	// bl 0x828bdd80
	ctx.lr = 0x828B7BC0;
	sub_828BDD80(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7bd0
	if (!ctx.cr6.eq) goto loc_828B7BD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b7be8
	goto loc_828B7BE8;
loc_828B7BD0:
	// bl 0x823ceb68
	ctx.lr = 0x828B7BD4;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b7be8
	if (ctx.cr6.eq) goto loc_828B7BE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B7BE8;
	sub_8237B5A8(ctx, base);
loc_828B7BE8:
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

__attribute__((alias("__imp__sub_828B7C00"))) PPC_WEAK_FUNC(sub_828B7C00);
PPC_FUNC_IMPL(__imp__sub_828B7C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23300
	ctx.r3.s64 = ctx.r11.s64 + -23300;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7C10"))) PPC_WEAK_FUNC(sub_828B7C10);
PPC_FUNC_IMPL(__imp__sub_828B7C10) {
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
	// beq cr6,0x828b7c48
	if (ctx.cr6.eq) goto loc_828B7C48;
	// bl 0x828bdf00
	ctx.lr = 0x828B7C38;
	sub_828BDF00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7c48
	if (!ctx.cr6.eq) goto loc_828B7C48;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7c54
	goto loc_828B7C54;
loc_828B7C48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7C54;
	sub_8237B670(ctx, base);
loc_828B7C54:
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

__attribute__((alias("__imp__sub_828B7C70"))) PPC_WEAK_FUNC(sub_828B7C70);
PPC_FUNC_IMPL(__imp__sub_828B7C70) {
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
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82833108
	ctx.lr = 0x828B7C90;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b7ce4
	if (ctx.cr0.eq) goto loc_828B7CE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B7CA4;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7CC0;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7CD0;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8282f630
	ctx.lr = 0x828B7CDC;
	sub_8282F630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b7ce8
	goto loc_828B7CE8;
loc_828B7CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B7CE8:
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

__attribute__((alias("__imp__sub_828B7D00"))) PPC_WEAK_FUNC(sub_828B7D00);
PPC_FUNC_IMPL(__imp__sub_828B7D00) {
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
	// bl 0x828bdf00
	ctx.lr = 0x828B7D20;
	sub_828BDF00(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7d30
	if (!ctx.cr6.eq) goto loc_828B7D30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b7d48
	goto loc_828B7D48;
loc_828B7D30:
	// bl 0x823ceb68
	ctx.lr = 0x828B7D34;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b7d48
	if (ctx.cr6.eq) goto loc_828B7D48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B7D48;
	sub_8237B5A8(ctx, base);
loc_828B7D48:
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

__attribute__((alias("__imp__sub_828B7D60"))) PPC_WEAK_FUNC(sub_828B7D60);
PPC_FUNC_IMPL(__imp__sub_828B7D60) {
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
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82400f38
	ctx.lr = 0x828B7D84;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B7D8C;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b7d9c
	if (ctx.cr0.eq) goto loc_828B7D9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B7D9C;
	sub_82332DB8(ctx, base);
loc_828B7D9C:
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

__attribute__((alias("__imp__sub_828B7DB8"))) PPC_WEAK_FUNC(sub_828B7DB8);
PPC_FUNC_IMPL(__imp__sub_828B7DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23280
	ctx.r3.s64 = ctx.r11.s64 + -23280;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7DC8"))) PPC_WEAK_FUNC(sub_828B7DC8);
PPC_FUNC_IMPL(__imp__sub_828B7DC8) {
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
	// beq cr6,0x828b7e00
	if (ctx.cr6.eq) goto loc_828B7E00;
	// bl 0x828be0b8
	ctx.lr = 0x828B7DF0;
	sub_828BE0B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7e00
	if (!ctx.cr6.eq) goto loc_828B7E00;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7e0c
	goto loc_828B7E0C;
loc_828B7E00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7E0C;
	sub_8237B670(ctx, base);
loc_828B7E0C:
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

__attribute__((alias("__imp__sub_828B7E28"))) PPC_WEAK_FUNC(sub_828B7E28);
PPC_FUNC_IMPL(__imp__sub_828B7E28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be0b8
	sub_828BE0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B7E30"))) PPC_WEAK_FUNC(sub_828B7E30);
PPC_FUNC_IMPL(__imp__sub_828B7E30) {
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
	// li r3,264
	ctx.r3.s64 = 264;
	// bl 0x82833108
	ctx.lr = 0x828B7E4C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b7e60
	if (ctx.cr0.eq) goto loc_828B7E60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b7ed8
	ctx.lr = 0x828B7E5C;
	sub_828B7ED8(ctx, base);
	// b 0x828b7e64
	goto loc_828B7E64;
loc_828B7E60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B7E64:
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

__attribute__((alias("__imp__sub_828B7E78"))) PPC_WEAK_FUNC(sub_828B7E78);
PPC_FUNC_IMPL(__imp__sub_828B7E78) {
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
	// bl 0x828be0b8
	ctx.lr = 0x828B7E98;
	sub_828BE0B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7ea8
	if (!ctx.cr6.eq) goto loc_828B7EA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b7ec0
	goto loc_828B7EC0;
loc_828B7EA8:
	// bl 0x823ceb68
	ctx.lr = 0x828B7EAC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b7ec0
	if (ctx.cr6.eq) goto loc_828B7EC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B7EC0;
	sub_8237B5A8(ctx, base);
loc_828B7EC0:
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

__attribute__((alias("__imp__sub_828B7ED8"))) PPC_WEAK_FUNC(sub_828B7ED8);
PPC_FUNC_IMPL(__imp__sub_828B7ED8) {
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
	// bl 0x8237b768
	ctx.lr = 0x828B7EF8;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// addi r11,r11,-21040
	ctx.r11.s64 = ctx.r11.s64 + -21040;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7F14;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// addi r4,r30,164
	ctx.r4.s64 = ctx.r30.s64 + 164;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82a4ea80
	ctx.lr = 0x828B7F24;
	sub_82A4EA80(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f0,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f0,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f0,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f0,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,248(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f0,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f0,256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f0,260(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
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

__attribute__((alias("__imp__sub_828B7F98"))) PPC_WEAK_FUNC(sub_828B7F98);
PPC_FUNC_IMPL(__imp__sub_828B7F98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B7FA8"))) PPC_WEAK_FUNC(sub_828B7FA8);
PPC_FUNC_IMPL(__imp__sub_828B7FA8) {
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
	// beq cr6,0x828b7fe0
	if (ctx.cr6.eq) goto loc_828B7FE0;
	// bl 0x828be218
	ctx.lr = 0x828B7FD0;
	sub_828BE218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b7fe0
	if (!ctx.cr6.eq) goto loc_828B7FE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b7fec
	goto loc_828B7FEC;
loc_828B7FE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B7FEC;
	sub_8237B670(ctx, base);
loc_828B7FEC:
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

__attribute__((alias("__imp__sub_828B8008"))) PPC_WEAK_FUNC(sub_828B8008);
PPC_FUNC_IMPL(__imp__sub_828B8008) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be218
	sub_828BE218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8010"))) PPC_WEAK_FUNC(sub_828B8010);
PPC_FUNC_IMPL(__imp__sub_828B8010) {
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
	// li r3,180
	ctx.r3.s64 = 180;
	// bl 0x82833108
	ctx.lr = 0x828B8030;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b8098
	if (ctx.cr0.eq) goto loc_828B8098;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8044;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r11,r11,-20912
	ctx.r11.s64 = ctx.r11.s64 + -20912;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828B8060;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828B8070;
	sub_82A4EA80(ctx, base);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// b 0x828b809c
	goto loc_828B809C;
loc_828B8098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B809C:
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

__attribute__((alias("__imp__sub_828B80B8"))) PPC_WEAK_FUNC(sub_828B80B8);
PPC_FUNC_IMPL(__imp__sub_828B80B8) {
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
	// bl 0x828be218
	ctx.lr = 0x828B80D8;
	sub_828BE218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b80e8
	if (!ctx.cr6.eq) goto loc_828B80E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8100
	goto loc_828B8100;
loc_828B80E8:
	// bl 0x823ceb68
	ctx.lr = 0x828B80EC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8100
	if (ctx.cr6.eq) goto loc_828B8100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8100;
	sub_8237B5A8(ctx, base);
loc_828B8100:
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

__attribute__((alias("__imp__sub_828B8118"))) PPC_WEAK_FUNC(sub_828B8118);
PPC_FUNC_IMPL(__imp__sub_828B8118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23236
	ctx.r3.s64 = ctx.r11.s64 + -23236;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B8128"))) PPC_WEAK_FUNC(sub_828B8128);
PPC_FUNC_IMPL(__imp__sub_828B8128) {
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
	// beq cr6,0x828b8160
	if (ctx.cr6.eq) goto loc_828B8160;
	// bl 0x828be3e0
	ctx.lr = 0x828B8150;
	sub_828BE3E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8160
	if (!ctx.cr6.eq) goto loc_828B8160;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b816c
	goto loc_828B816C;
loc_828B8160:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B816C;
	sub_8237B670(ctx, base);
loc_828B816C:
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

__attribute__((alias("__imp__sub_828B8188"))) PPC_WEAK_FUNC(sub_828B8188);
PPC_FUNC_IMPL(__imp__sub_828B8188) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be3e0
	sub_828BE3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8190"))) PPC_WEAK_FUNC(sub_828B8190);
PPC_FUNC_IMPL(__imp__sub_828B8190) {
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
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x82833108
	ctx.lr = 0x828B81AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b81c0
	if (ctx.cr0.eq) goto loc_828B81C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b8238
	ctx.lr = 0x828B81BC;
	sub_828B8238(ctx, base);
	// b 0x828b81c4
	goto loc_828B81C4;
loc_828B81C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B81C4:
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

__attribute__((alias("__imp__sub_828B81D8"))) PPC_WEAK_FUNC(sub_828B81D8);
PPC_FUNC_IMPL(__imp__sub_828B81D8) {
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
	// bl 0x828be3e0
	ctx.lr = 0x828B81F8;
	sub_828BE3E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8208
	if (!ctx.cr6.eq) goto loc_828B8208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8220
	goto loc_828B8220;
loc_828B8208:
	// bl 0x823ceb68
	ctx.lr = 0x828B820C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8220
	if (ctx.cr6.eq) goto loc_828B8220;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8220;
	sub_8237B5A8(ctx, base);
loc_828B8220:
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

__attribute__((alias("__imp__sub_828B8238"))) PPC_WEAK_FUNC(sub_828B8238);
PPC_FUNC_IMPL(__imp__sub_828B8238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x828B8240;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8250;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r26,112
	ctx.r4.s64 = ctx.r26.s64 + 112;
	// addi r11,r11,-20784
	ctx.r11.s64 = ctx.r11.s64 + -20784;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 108);
	// stw r11,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B8270;
	sub_823339B8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,136
	ctx.r31.s64 = ctx.r29.s64 + 136;
	// addi r25,r26,136
	ctx.r25.s64 = ctx.r26.s64 + 136;
	// stw r30,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r30.u32);
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r30,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r30.u32);
	// stw r30,152(r29)
	PPC_STORE_U32(ctx.r29.u32 + 152, ctx.r30.u32);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// stw r11,140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 140, ctx.r11.u32);
	// stw r30,156(r29)
	PPC_STORE_U32(ctx.r29.u32 + 156, ctx.r30.u32);
	// stw r30,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r30.u32);
	// beq cr6,0x828b833c
	if (ctx.cr6.eq) goto loc_828B833C;
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b833c
	if (!ctx.cr6.gt) goto loc_828B833C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b82cc
	if (ctx.cr0.eq) goto loc_828B82CC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828B82CC;
	sub_82332C38(ctx, base);
loc_828B82CC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b833c
	if (!ctx.cr6.gt) goto loc_828B833C;
loc_828B82DC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828B82F0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// add. r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x828b8328
	if (ctx.cr0.eq) goto loc_828B8328;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823339b8
	ctx.lr = 0x828B8314;
	sub_823339B8(ctx, base);
	// addi r4,r27,24
	ctx.r4.s64 = ctx.r27.s64 + 24;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x823339b8
	ctx.lr = 0x828B8320;
	sub_823339B8(ctx, base);
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_828B8328:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b82dc
	if (ctx.cr6.lt) goto loc_828B82DC;
loc_828B833C:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// addi r31,r26,160
	ctx.r31.s64 = ctx.r26.s64 + 160;
	// addi r30,r29,160
	ctx.r30.s64 = ctx.r29.s64 + 160;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// stw r11,160(r29)
	PPC_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B8358;
	sub_823339B8(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x823339b8
	ctx.lr = 0x828B8364;
	sub_823339B8(ctx, base);
	// lfs f0,212(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 212, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,216(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 216, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8380"))) PPC_WEAK_FUNC(sub_828B8380);
PPC_FUNC_IMPL(__imp__sub_828B8380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B8388;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// bl 0x82333960
	ctx.lr = 0x828B83A0;
	sub_82333960(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82333960
	ctx.lr = 0x828B83A8;
	sub_82333960(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x828be278
	ctx.lr = 0x828B83B0;
	sub_828BE278(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828B83B8;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B83C0;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b83d0
	if (ctx.cr0.eq) goto loc_828B83D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B83D0;
	sub_82332DB8(ctx, base);
loc_828B83D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B83E0"))) PPC_WEAK_FUNC(sub_828B83E0);
PPC_FUNC_IMPL(__imp__sub_828B83E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B83F0"))) PPC_WEAK_FUNC(sub_828B83F0);
PPC_FUNC_IMPL(__imp__sub_828B83F0) {
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
	// beq cr6,0x828b8428
	if (ctx.cr6.eq) goto loc_828B8428;
	// bl 0x828be550
	ctx.lr = 0x828B8418;
	sub_828BE550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8428
	if (!ctx.cr6.eq) goto loc_828B8428;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b8434
	goto loc_828B8434;
loc_828B8428:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B8434;
	sub_8237B670(ctx, base);
loc_828B8434:
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

__attribute__((alias("__imp__sub_828B8450"))) PPC_WEAK_FUNC(sub_828B8450);
PPC_FUNC_IMPL(__imp__sub_828B8450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be550
	sub_828BE550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8458"))) PPC_WEAK_FUNC(sub_828B8458);
PPC_FUNC_IMPL(__imp__sub_828B8458) {
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
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82833108
	ctx.lr = 0x828B8478;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b84f8
	if (ctx.cr0.eq) goto loc_828B84F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B848C;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 + 112;
	// addi r11,r11,-20656
	ctx.r11.s64 = ctx.r11.s64 + -20656;
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,108(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B84B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828b84b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B84B8;
	// addi r11,r30,132
	ctx.r11.s64 = ctx.r30.s64 + 132;
	// addi r10,r31,132
	ctx.r10.s64 = ctx.r31.s64 + 132;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828B84DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828b84dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828B84DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b84fc
	goto loc_828B84FC;
loc_828B84F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B84FC:
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

__attribute__((alias("__imp__sub_828B8518"))) PPC_WEAK_FUNC(sub_828B8518);
PPC_FUNC_IMPL(__imp__sub_828B8518) {
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
	// bl 0x828be550
	ctx.lr = 0x828B8538;
	sub_828BE550(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8548
	if (!ctx.cr6.eq) goto loc_828B8548;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8560
	goto loc_828B8560;
loc_828B8548:
	// bl 0x823ceb68
	ctx.lr = 0x828B854C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8560
	if (ctx.cr6.eq) goto loc_828B8560;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8560;
	sub_8237B5A8(ctx, base);
loc_828B8560:
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

__attribute__((alias("__imp__sub_828B8578"))) PPC_WEAK_FUNC(sub_828B8578);
PPC_FUNC_IMPL(__imp__sub_828B8578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23196
	ctx.r3.s64 = ctx.r11.s64 + -23196;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B8588"))) PPC_WEAK_FUNC(sub_828B8588);
PPC_FUNC_IMPL(__imp__sub_828B8588) {
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
	// beq cr6,0x828b85c0
	if (ctx.cr6.eq) goto loc_828B85C0;
	// bl 0x828be6c0
	ctx.lr = 0x828B85B0;
	sub_828BE6C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b85c0
	if (!ctx.cr6.eq) goto loc_828B85C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b85cc
	goto loc_828B85CC;
loc_828B85C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B85CC;
	sub_8237B670(ctx, base);
loc_828B85CC:
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

__attribute__((alias("__imp__sub_828B85E8"))) PPC_WEAK_FUNC(sub_828B85E8);
PPC_FUNC_IMPL(__imp__sub_828B85E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be6c0
	sub_828BE6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B85F0"))) PPC_WEAK_FUNC(sub_828B85F0);
PPC_FUNC_IMPL(__imp__sub_828B85F0) {
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
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82833108
	ctx.lr = 0x828B8610;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b8660
	if (ctx.cr0.eq) goto loc_828B8660;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8624;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20528
	ctx.r11.s64 = ctx.r11.s64 + -20528;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x828b8664
	goto loc_828B8664;
loc_828B8660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B8664:
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

__attribute__((alias("__imp__sub_828B8680"))) PPC_WEAK_FUNC(sub_828B8680);
PPC_FUNC_IMPL(__imp__sub_828B8680) {
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
	// bl 0x828be6c0
	ctx.lr = 0x828B86A0;
	sub_828BE6C0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b86b0
	if (!ctx.cr6.eq) goto loc_828B86B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b86c8
	goto loc_828B86C8;
loc_828B86B0:
	// bl 0x823ceb68
	ctx.lr = 0x828B86B4;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b86c8
	if (ctx.cr6.eq) goto loc_828B86C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B86C8;
	sub_8237B5A8(ctx, base);
loc_828B86C8:
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

__attribute__((alias("__imp__sub_828B86E0"))) PPC_WEAK_FUNC(sub_828B86E0);
PPC_FUNC_IMPL(__imp__sub_828B86E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23172
	ctx.r3.s64 = ctx.r11.s64 + -23172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B86F0"))) PPC_WEAK_FUNC(sub_828B86F0);
PPC_FUNC_IMPL(__imp__sub_828B86F0) {
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
	// beq cr6,0x828b8728
	if (ctx.cr6.eq) goto loc_828B8728;
	// bl 0x828be820
	ctx.lr = 0x828B8718;
	sub_828BE820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8728
	if (!ctx.cr6.eq) goto loc_828B8728;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b8734
	goto loc_828B8734;
loc_828B8728:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B8734;
	sub_8237B670(ctx, base);
loc_828B8734:
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

__attribute__((alias("__imp__sub_828B8750"))) PPC_WEAK_FUNC(sub_828B8750);
PPC_FUNC_IMPL(__imp__sub_828B8750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828be820
	sub_828BE820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8758"))) PPC_WEAK_FUNC(sub_828B8758);
PPC_FUNC_IMPL(__imp__sub_828B8758) {
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
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82833108
	ctx.lr = 0x828B8778;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b87c8
	if (ctx.cr0.eq) goto loc_828B87C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B878C;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r11,r11,-20400
	ctx.r11.s64 = ctx.r11.s64 + -20400;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x828B87A8;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,132
	ctx.r4.s64 = ctx.r30.s64 + 132;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x828B87B8;
	sub_82A4EA80(ctx, base);
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// b 0x828b87cc
	goto loc_828B87CC;
loc_828B87C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B87CC:
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

__attribute__((alias("__imp__sub_828B87E8"))) PPC_WEAK_FUNC(sub_828B87E8);
PPC_FUNC_IMPL(__imp__sub_828B87E8) {
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
	// bl 0x828be820
	ctx.lr = 0x828B8808;
	sub_828BE820(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8818
	if (!ctx.cr6.eq) goto loc_828B8818;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8830
	goto loc_828B8830;
loc_828B8818:
	// bl 0x823ceb68
	ctx.lr = 0x828B881C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8830
	if (ctx.cr6.eq) goto loc_828B8830;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8830;
	sub_8237B5A8(ctx, base);
loc_828B8830:
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

__attribute__((alias("__imp__sub_828B8848"))) PPC_WEAK_FUNC(sub_828B8848);
PPC_FUNC_IMPL(__imp__sub_828B8848) {
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
	// bl 0x829c8a30
	ctx.lr = 0x828B8868;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b8878
	if (ctx.cr0.eq) goto loc_828B8878;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B8878;
	sub_82332DB8(ctx, base);
loc_828B8878:
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

__attribute__((alias("__imp__sub_828B8898"))) PPC_WEAK_FUNC(sub_828B8898);
PPC_FUNC_IMPL(__imp__sub_828B8898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B88A8"))) PPC_WEAK_FUNC(sub_828B88A8);
PPC_FUNC_IMPL(__imp__sub_828B88A8) {
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
	// beq cr6,0x828b88e0
	if (ctx.cr6.eq) goto loc_828B88E0;
	// bl 0x828beac8
	ctx.lr = 0x828B88D0;
	sub_828BEAC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b88e0
	if (!ctx.cr6.eq) goto loc_828B88E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b88ec
	goto loc_828B88EC;
loc_828B88E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B88EC;
	sub_8237B670(ctx, base);
loc_828B88EC:
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

__attribute__((alias("__imp__sub_828B8908"))) PPC_WEAK_FUNC(sub_828B8908);
PPC_FUNC_IMPL(__imp__sub_828B8908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828beac8
	sub_828BEAC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8910"))) PPC_WEAK_FUNC(sub_828B8910);
PPC_FUNC_IMPL(__imp__sub_828B8910) {
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
	// li r3,212
	ctx.r3.s64 = 212;
	// bl 0x82833108
	ctx.lr = 0x828B8930;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b89bc
	if (ctx.cr0.eq) goto loc_828B89BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8944;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r11,r11,-20256
	ctx.r11.s64 = ctx.r11.s64 + -20256;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B8964;
	sub_823339B8(ctx, base);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823339b8
	ctx.lr = 0x828B8970;
	sub_823339B8(ctx, base);
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x823339b8
	ctx.lr = 0x828B897C;
	sub_823339B8(ctx, base);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r11,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r11,196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// b 0x828b89c0
	goto loc_828B89C0;
loc_828B89BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B89C0:
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

__attribute__((alias("__imp__sub_828B89D8"))) PPC_WEAK_FUNC(sub_828B89D8);
PPC_FUNC_IMPL(__imp__sub_828B89D8) {
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
	// bl 0x828beac8
	ctx.lr = 0x828B89F8;
	sub_828BEAC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8a08
	if (!ctx.cr6.eq) goto loc_828B8A08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8a20
	goto loc_828B8A20;
loc_828B8A08:
	// bl 0x823ceb68
	ctx.lr = 0x828B8A0C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8a20
	if (ctx.cr6.eq) goto loc_828B8A20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8A20;
	sub_8237B5A8(ctx, base);
loc_828B8A20:
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

__attribute__((alias("__imp__sub_828B8A38"))) PPC_WEAK_FUNC(sub_828B8A38);
PPC_FUNC_IMPL(__imp__sub_828B8A38) {
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
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x828B8A5C;
	sub_82333960(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82333960
	ctx.lr = 0x828B8A64;
	sub_82333960(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828B8A6C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B8A74;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b8a84
	if (ctx.cr0.eq) goto loc_828B8A84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B8A84;
	sub_82332DB8(ctx, base);
loc_828B8A84:
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

__attribute__((alias("__imp__sub_828B8AA0"))) PPC_WEAK_FUNC(sub_828B8AA0);
PPC_FUNC_IMPL(__imp__sub_828B8AA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23100
	ctx.r3.s64 = ctx.r11.s64 + -23100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B8AB0"))) PPC_WEAK_FUNC(sub_828B8AB0);
PPC_FUNC_IMPL(__imp__sub_828B8AB0) {
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
	// beq cr6,0x828b8ae8
	if (ctx.cr6.eq) goto loc_828B8AE8;
	// bl 0x828bec28
	ctx.lr = 0x828B8AD8;
	sub_828BEC28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8ae8
	if (!ctx.cr6.eq) goto loc_828B8AE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b8af4
	goto loc_828B8AF4;
loc_828B8AE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B8AF4;
	sub_8237B670(ctx, base);
loc_828B8AF4:
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

__attribute__((alias("__imp__sub_828B8B10"))) PPC_WEAK_FUNC(sub_828B8B10);
PPC_FUNC_IMPL(__imp__sub_828B8B10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bec28
	sub_828BEC28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8B18"))) PPC_WEAK_FUNC(sub_828B8B18);
PPC_FUNC_IMPL(__imp__sub_828B8B18) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x828B8B38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b8b98
	if (ctx.cr0.eq) goto loc_828B8B98;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8B4C;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-20128
	ctx.r11.s64 = ctx.r11.s64 + -20128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x828b8b9c
	goto loc_828B8B9C;
loc_828B8B98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B8B9C:
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

__attribute__((alias("__imp__sub_828B8BB8"))) PPC_WEAK_FUNC(sub_828B8BB8);
PPC_FUNC_IMPL(__imp__sub_828B8BB8) {
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
	// bl 0x828bec28
	ctx.lr = 0x828B8BD8;
	sub_828BEC28(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8be8
	if (!ctx.cr6.eq) goto loc_828B8BE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b8c00
	goto loc_828B8C00;
loc_828B8BE8:
	// bl 0x823ceb68
	ctx.lr = 0x828B8BEC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8c00
	if (ctx.cr6.eq) goto loc_828B8C00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B8C00;
	sub_8237B5A8(ctx, base);
loc_828B8C00:
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

__attribute__((alias("__imp__sub_828B8C18"))) PPC_WEAK_FUNC(sub_828B8C18);
PPC_FUNC_IMPL(__imp__sub_828B8C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B8C28"))) PPC_WEAK_FUNC(sub_828B8C28);
PPC_FUNC_IMPL(__imp__sub_828B8C28) {
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
	// beq cr6,0x828b8c60
	if (ctx.cr6.eq) goto loc_828B8C60;
	// bl 0x828bede0
	ctx.lr = 0x828B8C50;
	sub_828BEDE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8c60
	if (!ctx.cr6.eq) goto loc_828B8C60;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b8c6c
	goto loc_828B8C6C;
loc_828B8C60:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b7430
	ctx.lr = 0x828B8C6C;
	sub_828B7430(ctx, base);
loc_828B8C6C:
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

__attribute__((alias("__imp__sub_828B8C88"))) PPC_WEAK_FUNC(sub_828B8C88);
PPC_FUNC_IMPL(__imp__sub_828B8C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bede0
	sub_828BEDE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8C90"))) PPC_WEAK_FUNC(sub_828B8C90);
PPC_FUNC_IMPL(__imp__sub_828B8C90) {
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
	// li r3,540
	ctx.r3.s64 = 540;
	// bl 0x82833108
	ctx.lr = 0x828B8CAC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b8cc0
	if (ctx.cr0.eq) goto loc_828B8CC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b8d28
	ctx.lr = 0x828B8CBC;
	sub_828B8D28(ctx, base);
	// b 0x828b8cc4
	goto loc_828B8CC4;
loc_828B8CC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B8CC4:
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

__attribute__((alias("__imp__sub_828B8CD8"))) PPC_WEAK_FUNC(sub_828B8CD8);
PPC_FUNC_IMPL(__imp__sub_828B8CD8) {
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
	// bl 0x828bede0
	ctx.lr = 0x828B8CF8;
	sub_828BEDE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b8d0c
	if (ctx.cr6.eq) goto loc_828B8D0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b74d8
	ctx.lr = 0x828B8D0C;
	sub_828B74D8(ctx, base);
loc_828B8D0C:
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

__attribute__((alias("__imp__sub_828B8D28"))) PPC_WEAK_FUNC(sub_828B8D28);
PPC_FUNC_IMPL(__imp__sub_828B8D28) {
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
	// bl 0x828b7538
	ctx.lr = 0x828B8D48;
	sub_828B7538(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// addi r11,r11,-20000
	ctx.r11.s64 = ctx.r11.s64 + -20000;
	// addi r4,r30,176
	ctx.r4.s64 = ctx.r30.s64 + 176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B8D68;
	sub_823339B8(ctx, base);
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// addi r4,r30,200
	ctx.r4.s64 = ctx.r30.s64 + 200;
	// bl 0x823339b8
	ctx.lr = 0x828B8D74;
	sub_823339B8(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// stw r11,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B8D94;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// addi r4,r30,292
	ctx.r4.s64 = ctx.r30.s64 + 292;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B8DA4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// addi r4,r30,352
	ctx.r4.s64 = ctx.r30.s64 + 352;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B8DB4;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,412
	ctx.r3.s64 = ctx.r31.s64 + 412;
	// addi r4,r30,412
	ctx.r4.s64 = ctx.r30.s64 + 412;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B8DC4;
	sub_82A4EA80(ctx, base);
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// stw r11,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// lwz r11,484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 484);
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// stw r11,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r11.u32);
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// lwz r11,504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// stw r11,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r11.u32);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// lwz r11,532(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_828B8E68"))) PPC_WEAK_FUNC(sub_828B8E68);
PPC_FUNC_IMPL(__imp__sub_828B8E68) {
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
	// addi r3,r31,200
	ctx.r3.s64 = ctx.r31.s64 + 200;
	// bl 0x82333960
	ctx.lr = 0x828B8E8C;
	sub_82333960(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x828B8E94;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B8E9C;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b8eac
	if (ctx.cr0.eq) goto loc_828B8EAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B8EAC;
	sub_82332DB8(ctx, base);
loc_828B8EAC:
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

__attribute__((alias("__imp__sub_828B8EC8"))) PPC_WEAK_FUNC(sub_828B8EC8);
PPC_FUNC_IMPL(__imp__sub_828B8EC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B8ED8"))) PPC_WEAK_FUNC(sub_828B8ED8);
PPC_FUNC_IMPL(__imp__sub_828B8ED8) {
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
	// beq cr6,0x828b8f10
	if (ctx.cr6.eq) goto loc_828B8F10;
	// bl 0x828bef60
	ctx.lr = 0x828B8F00;
	sub_828BEF60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8f10
	if (!ctx.cr6.eq) goto loc_828B8F10;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b8f1c
	goto loc_828B8F1C;
loc_828B8F10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B8F1C;
	sub_8237B670(ctx, base);
loc_828B8F1C:
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

__attribute__((alias("__imp__sub_828B8F38"))) PPC_WEAK_FUNC(sub_828B8F38);
PPC_FUNC_IMPL(__imp__sub_828B8F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bef60
	sub_828BEF60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B8F40"))) PPC_WEAK_FUNC(sub_828B8F40);
PPC_FUNC_IMPL(__imp__sub_828B8F40) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82833108
	ctx.lr = 0x828B8F60;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b8f9c
	if (ctx.cr0.eq) goto loc_828B8F9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B8F74;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r11,r11,-19864
	ctx.r11.s64 = ctx.r11.s64 + -19864;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B8F94;
	sub_823339B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b8fa0
	goto loc_828B8FA0;
loc_828B8F9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B8FA0:
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

__attribute__((alias("__imp__sub_828B8FB8"))) PPC_WEAK_FUNC(sub_828B8FB8);
PPC_FUNC_IMPL(__imp__sub_828B8FB8) {
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
	// bl 0x828bef60
	ctx.lr = 0x828B8FD8;
	sub_828BEF60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b8fe8
	if (!ctx.cr6.eq) goto loc_828B8FE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9000
	goto loc_828B9000;
loc_828B8FE8:
	// bl 0x823ceb68
	ctx.lr = 0x828B8FEC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9000
	if (ctx.cr6.eq) goto loc_828B9000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9000;
	sub_8237B5A8(ctx, base);
loc_828B9000:
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

__attribute__((alias("__imp__sub_828B9018"))) PPC_WEAK_FUNC(sub_828B9018);
PPC_FUNC_IMPL(__imp__sub_828B9018) {
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
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x828B903C;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B9044;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b9054
	if (ctx.cr0.eq) goto loc_828B9054;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B9054;
	sub_82332DB8(ctx, base);
loc_828B9054:
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

__attribute__((alias("__imp__sub_828B9070"))) PPC_WEAK_FUNC(sub_828B9070);
PPC_FUNC_IMPL(__imp__sub_828B9070) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23028
	ctx.r3.s64 = ctx.r11.s64 + -23028;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9080"))) PPC_WEAK_FUNC(sub_828B9080);
PPC_FUNC_IMPL(__imp__sub_828B9080) {
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
	// beq cr6,0x828b90b8
	if (ctx.cr6.eq) goto loc_828B90B8;
	// bl 0x828bf0e0
	ctx.lr = 0x828B90A8;
	sub_828BF0E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b90b8
	if (!ctx.cr6.eq) goto loc_828B90B8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b90c4
	goto loc_828B90C4;
loc_828B90B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b7430
	ctx.lr = 0x828B90C4;
	sub_828B7430(ctx, base);
loc_828B90C4:
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

__attribute__((alias("__imp__sub_828B90E0"))) PPC_WEAK_FUNC(sub_828B90E0);
PPC_FUNC_IMPL(__imp__sub_828B90E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf0e0
	sub_828BF0E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B90E8"))) PPC_WEAK_FUNC(sub_828B90E8);
PPC_FUNC_IMPL(__imp__sub_828B90E8) {
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
	// li r3,372
	ctx.r3.s64 = 372;
	// bl 0x82833108
	ctx.lr = 0x828B9108;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9188
	if (ctx.cr0.eq) goto loc_828B9188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b7538
	ctx.lr = 0x828B911C;
	sub_828B7538(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,192
	ctx.r4.s64 = ctx.r30.s64 + 192;
	// addi r11,r11,-19736
	ctx.r11.s64 = ctx.r11.s64 + -19736;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// lbz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
	// lwz r11,180(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B9160;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,252
	ctx.r4.s64 = ctx.r30.s64 + 252;
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9170;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,312
	ctx.r4.s64 = ctx.r30.s64 + 312;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9180;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b918c
	goto loc_828B918C;
loc_828B9188:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B918C:
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

__attribute__((alias("__imp__sub_828B91A8"))) PPC_WEAK_FUNC(sub_828B91A8);
PPC_FUNC_IMPL(__imp__sub_828B91A8) {
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
	// bl 0x828bf0e0
	ctx.lr = 0x828B91C8;
	sub_828BF0E0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b91dc
	if (ctx.cr6.eq) goto loc_828B91DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b74d8
	ctx.lr = 0x828B91DC;
	sub_828B74D8(ctx, base);
loc_828B91DC:
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

__attribute__((alias("__imp__sub_828B91F8"))) PPC_WEAK_FUNC(sub_828B91F8);
PPC_FUNC_IMPL(__imp__sub_828B91F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23004
	ctx.r3.s64 = ctx.r11.s64 + -23004;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9208"))) PPC_WEAK_FUNC(sub_828B9208);
PPC_FUNC_IMPL(__imp__sub_828B9208) {
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
	// beq cr6,0x828b9240
	if (ctx.cr6.eq) goto loc_828B9240;
	// bl 0x828bf278
	ctx.lr = 0x828B9230;
	sub_828BF278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9240
	if (!ctx.cr6.eq) goto loc_828B9240;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b924c
	goto loc_828B924C;
loc_828B9240:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b7430
	ctx.lr = 0x828B924C;
	sub_828B7430(ctx, base);
loc_828B924C:
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

__attribute__((alias("__imp__sub_828B9268"))) PPC_WEAK_FUNC(sub_828B9268);
PPC_FUNC_IMPL(__imp__sub_828B9268) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf278
	sub_828BF278(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9270"))) PPC_WEAK_FUNC(sub_828B9270);
PPC_FUNC_IMPL(__imp__sub_828B9270) {
	PPC_FUNC_PROLOGUE();
	// b 0x82723640
	sub_82723640(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9278"))) PPC_WEAK_FUNC(sub_828B9278);
PPC_FUNC_IMPL(__imp__sub_828B9278) {
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
	// li r3,312
	ctx.r3.s64 = 312;
	// bl 0x82833108
	ctx.lr = 0x828B9298;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9310
	if (ctx.cr0.eq) goto loc_828B9310;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828b7538
	ctx.lr = 0x828B92AC;
	sub_828B7538(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,172
	ctx.r4.s64 = ctx.r30.s64 + 172;
	// addi r11,r11,-19600
	ctx.r11.s64 = ctx.r11.s64 + -19600;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828B92C8;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,204
	ctx.r4.s64 = ctx.r30.s64 + 204;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x828B92D8;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,236
	ctx.r4.s64 = ctx.r30.s64 + 236;
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x828B92E8;
	sub_82A4EA80(ctx, base);
	// lwz r11,296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// lwz r11,300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// lbz r11,304(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 304);
	// stb r11,304(r31)
	PPC_STORE_U8(ctx.r31.u32 + 304, ctx.r11.u8);
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// b 0x828b9314
	goto loc_828B9314;
loc_828B9310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B9314:
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

__attribute__((alias("__imp__sub_828B9330"))) PPC_WEAK_FUNC(sub_828B9330);
PPC_FUNC_IMPL(__imp__sub_828B9330) {
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
	// bl 0x828bf278
	ctx.lr = 0x828B9350;
	sub_828BF278(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9364
	if (ctx.cr6.eq) goto loc_828B9364;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b74d8
	ctx.lr = 0x828B9364;
	sub_828B74D8(ctx, base);
loc_828B9364:
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

__attribute__((alias("__imp__sub_828B9380"))) PPC_WEAK_FUNC(sub_828B9380);
PPC_FUNC_IMPL(__imp__sub_828B9380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22980
	ctx.r3.s64 = ctx.r11.s64 + -22980;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9390"))) PPC_WEAK_FUNC(sub_828B9390);
PPC_FUNC_IMPL(__imp__sub_828B9390) {
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
	// beq cr6,0x828b93c8
	if (ctx.cr6.eq) goto loc_828B93C8;
	// bl 0x828bf418
	ctx.lr = 0x828B93B8;
	sub_828BF418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b93c8
	if (!ctx.cr6.eq) goto loc_828B93C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b93d4
	goto loc_828B93D4;
loc_828B93C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b7c10
	ctx.lr = 0x828B93D4;
	sub_828B7C10(ctx, base);
loc_828B93D4:
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

__attribute__((alias("__imp__sub_828B93F0"))) PPC_WEAK_FUNC(sub_828B93F0);
PPC_FUNC_IMPL(__imp__sub_828B93F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf418
	sub_828BF418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B93F8"))) PPC_WEAK_FUNC(sub_828B93F8);
PPC_FUNC_IMPL(__imp__sub_828B93F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bdf00
	sub_828BDF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9400"))) PPC_WEAK_FUNC(sub_828B9400);
PPC_FUNC_IMPL(__imp__sub_828B9400) {
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
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x82833108
	ctx.lr = 0x828B9420;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b948c
	if (ctx.cr0.eq) goto loc_828B948C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9434;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,108
	ctx.r4.s64 = ctx.r30.s64 + 108;
	// addi r11,r11,-21168
	ctx.r11.s64 = ctx.r11.s64 + -21168;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9450;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9460;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,196
	ctx.r4.s64 = ctx.r30.s64 + 196;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x8282f630
	ctx.lr = 0x828B946C;
	sub_8282F630(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// addi r11,r11,-19464
	ctx.r11.s64 = ctx.r11.s64 + -19464;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x828B9484;
	sub_823339B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b9490
	goto loc_828B9490;
loc_828B948C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B9490:
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

__attribute__((alias("__imp__sub_828B94A8"))) PPC_WEAK_FUNC(sub_828B94A8);
PPC_FUNC_IMPL(__imp__sub_828B94A8) {
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
	// bl 0x828bf418
	ctx.lr = 0x828B94C8;
	sub_828BF418(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b94dc
	if (ctx.cr6.eq) goto loc_828B94DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b7d00
	ctx.lr = 0x828B94DC;
	sub_828B7D00(ctx, base);
loc_828B94DC:
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

__attribute__((alias("__imp__sub_828B94F8"))) PPC_WEAK_FUNC(sub_828B94F8);
PPC_FUNC_IMPL(__imp__sub_828B94F8) {
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
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// bl 0x82333960
	ctx.lr = 0x828B951C;
	sub_82333960(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// bl 0x82400f38
	ctx.lr = 0x828B9524;
	sub_82400F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c8a30
	ctx.lr = 0x828B952C;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b953c
	if (ctx.cr0.eq) goto loc_828B953C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B953C;
	sub_82332DB8(ctx, base);
loc_828B953C:
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

__attribute__((alias("__imp__sub_828B9558"))) PPC_WEAK_FUNC(sub_828B9558);
PPC_FUNC_IMPL(__imp__sub_828B9558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22956
	ctx.r3.s64 = ctx.r11.s64 + -22956;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9568"))) PPC_WEAK_FUNC(sub_828B9568);
PPC_FUNC_IMPL(__imp__sub_828B9568) {
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
	// beq cr6,0x828b95a0
	if (ctx.cr6.eq) goto loc_828B95A0;
	// bl 0x828bf578
	ctx.lr = 0x828B9590;
	sub_828BF578(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b95a0
	if (!ctx.cr6.eq) goto loc_828B95A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b95ac
	goto loc_828B95AC;
loc_828B95A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B95AC;
	sub_8237B670(ctx, base);
loc_828B95AC:
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

__attribute__((alias("__imp__sub_828B95C8"))) PPC_WEAK_FUNC(sub_828B95C8);
PPC_FUNC_IMPL(__imp__sub_828B95C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf578
	sub_828BF578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B95D0"))) PPC_WEAK_FUNC(sub_828B95D0);
PPC_FUNC_IMPL(__imp__sub_828B95D0) {
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
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x82833108
	ctx.lr = 0x828B95F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9618
	if (ctx.cr0.eq) goto loc_828B9618;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9604;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19336
	ctx.r11.s64 = ctx.r11.s64 + -19336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828b961c
	goto loc_828B961C;
loc_828B9618:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B961C:
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

__attribute__((alias("__imp__sub_828B9638"))) PPC_WEAK_FUNC(sub_828B9638);
PPC_FUNC_IMPL(__imp__sub_828B9638) {
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
	// bl 0x828bf578
	ctx.lr = 0x828B9658;
	sub_828BF578(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9668
	if (!ctx.cr6.eq) goto loc_828B9668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9680
	goto loc_828B9680;
loc_828B9668:
	// bl 0x823ceb68
	ctx.lr = 0x828B966C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9680
	if (ctx.cr6.eq) goto loc_828B9680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9680;
	sub_8237B5A8(ctx, base);
loc_828B9680:
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

__attribute__((alias("__imp__sub_828B9698"))) PPC_WEAK_FUNC(sub_828B9698);
PPC_FUNC_IMPL(__imp__sub_828B9698) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22940
	ctx.r3.s64 = ctx.r11.s64 + -22940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B96A8"))) PPC_WEAK_FUNC(sub_828B96A8);
PPC_FUNC_IMPL(__imp__sub_828B96A8) {
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
	// beq cr6,0x828b96e0
	if (ctx.cr6.eq) goto loc_828B96E0;
	// bl 0x828bf6d8
	ctx.lr = 0x828B96D0;
	sub_828BF6D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b96e0
	if (!ctx.cr6.eq) goto loc_828B96E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b96ec
	goto loc_828B96EC;
loc_828B96E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B96EC;
	sub_8237B670(ctx, base);
loc_828B96EC:
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

__attribute__((alias("__imp__sub_828B9708"))) PPC_WEAK_FUNC(sub_828B9708);
PPC_FUNC_IMPL(__imp__sub_828B9708) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf6d8
	sub_828BF6D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9710"))) PPC_WEAK_FUNC(sub_828B9710);
PPC_FUNC_IMPL(__imp__sub_828B9710) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82833108
	ctx.lr = 0x828B9730;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9778
	if (ctx.cr0.eq) goto loc_828B9778;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9744;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,116
	ctx.r4.s64 = ctx.r30.s64 + 116;
	// addi r11,r11,-19208
	ctx.r11.s64 = ctx.r11.s64 + -19208;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B9770;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b977c
	goto loc_828B977C;
loc_828B9778:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B977C:
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

__attribute__((alias("__imp__sub_828B9798"))) PPC_WEAK_FUNC(sub_828B9798);
PPC_FUNC_IMPL(__imp__sub_828B9798) {
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
	// bl 0x828bf6d8
	ctx.lr = 0x828B97B8;
	sub_828BF6D8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b97c8
	if (!ctx.cr6.eq) goto loc_828B97C8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b97e0
	goto loc_828B97E0;
loc_828B97C8:
	// bl 0x823ceb68
	ctx.lr = 0x828B97CC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b97e0
	if (ctx.cr6.eq) goto loc_828B97E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B97E0;
	sub_8237B5A8(ctx, base);
loc_828B97E0:
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

__attribute__((alias("__imp__sub_828B97F8"))) PPC_WEAK_FUNC(sub_828B97F8);
PPC_FUNC_IMPL(__imp__sub_828B97F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22916
	ctx.r3.s64 = ctx.r11.s64 + -22916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9808"))) PPC_WEAK_FUNC(sub_828B9808);
PPC_FUNC_IMPL(__imp__sub_828B9808) {
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
	// beq cr6,0x828b9840
	if (ctx.cr6.eq) goto loc_828B9840;
	// bl 0x828bf838
	ctx.lr = 0x828B9830;
	sub_828BF838(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9840
	if (!ctx.cr6.eq) goto loc_828B9840;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b984c
	goto loc_828B984C;
loc_828B9840:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B984C;
	sub_8237B670(ctx, base);
loc_828B984C:
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

__attribute__((alias("__imp__sub_828B9868"))) PPC_WEAK_FUNC(sub_828B9868);
PPC_FUNC_IMPL(__imp__sub_828B9868) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf838
	sub_828BF838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9870"))) PPC_WEAK_FUNC(sub_828B9870);
PPC_FUNC_IMPL(__imp__sub_828B9870) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82833108
	ctx.lr = 0x828B9890;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b98d0
	if (ctx.cr0.eq) goto loc_828B98D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B98A4;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-19080
	ctx.r11.s64 = ctx.r11.s64 + -19080;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// b 0x828b98d4
	goto loc_828B98D4;
loc_828B98D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B98D4:
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

__attribute__((alias("__imp__sub_828B98F0"))) PPC_WEAK_FUNC(sub_828B98F0);
PPC_FUNC_IMPL(__imp__sub_828B98F0) {
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
	// bl 0x828bf838
	ctx.lr = 0x828B9910;
	sub_828BF838(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9920
	if (!ctx.cr6.eq) goto loc_828B9920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9938
	goto loc_828B9938;
loc_828B9920:
	// bl 0x823ceb68
	ctx.lr = 0x828B9924;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9938
	if (ctx.cr6.eq) goto loc_828B9938;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9938;
	sub_8237B5A8(ctx, base);
loc_828B9938:
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

__attribute__((alias("__imp__sub_828B9950"))) PPC_WEAK_FUNC(sub_828B9950);
PPC_FUNC_IMPL(__imp__sub_828B9950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9960"))) PPC_WEAK_FUNC(sub_828B9960);
PPC_FUNC_IMPL(__imp__sub_828B9960) {
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
	// beq cr6,0x828b9998
	if (ctx.cr6.eq) goto loc_828B9998;
	// bl 0x828bf9b8
	ctx.lr = 0x828B9988;
	sub_828BF9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9998
	if (!ctx.cr6.eq) goto loc_828B9998;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b99a4
	goto loc_828B99A4;
loc_828B9998:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B99A4;
	sub_8237B670(ctx, base);
loc_828B99A4:
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

__attribute__((alias("__imp__sub_828B99C0"))) PPC_WEAK_FUNC(sub_828B99C0);
PPC_FUNC_IMPL(__imp__sub_828B99C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bf9b8
	sub_828BF9B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B99C8"))) PPC_WEAK_FUNC(sub_828B99C8);
PPC_FUNC_IMPL(__imp__sub_828B99C8) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82833108
	ctx.lr = 0x828B99E4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828b99f8
	if (ctx.cr0.eq) goto loc_828B99F8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828b9a70
	ctx.lr = 0x828B99F4;
	sub_828B9A70(ctx, base);
	// b 0x828b99fc
	goto loc_828B99FC;
loc_828B99F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B99FC:
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

__attribute__((alias("__imp__sub_828B9A10"))) PPC_WEAK_FUNC(sub_828B9A10);
PPC_FUNC_IMPL(__imp__sub_828B9A10) {
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
	// bl 0x828bf9b8
	ctx.lr = 0x828B9A30;
	sub_828BF9B8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9a40
	if (!ctx.cr6.eq) goto loc_828B9A40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9a58
	goto loc_828B9A58;
loc_828B9A40:
	// bl 0x823ceb68
	ctx.lr = 0x828B9A44;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9a58
	if (ctx.cr6.eq) goto loc_828B9A58;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9A58;
	sub_8237B5A8(ctx, base);
loc_828B9A58:
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

__attribute__((alias("__imp__sub_828B9A70"))) PPC_WEAK_FUNC(sub_828B9A70);
PPC_FUNC_IMPL(__imp__sub_828B9A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x828B9A78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9A88;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-18952
	ctx.r11.s64 = ctx.r11.s64 + -18952;
	// addi r31,r27,116
	ctx.r31.s64 = ctx.r27.s64 + 116;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r28,r29,116
	ctx.r28.s64 = ctx.r29.s64 + 116;
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 108);
	// li r11,56
	ctx.r11.s64 = 56;
	// stw r10,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r10.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// stw r10,112(r27)
	PPC_STORE_U32(ctx.r27.u32 + 112, ctx.r10.u32);
	// stw r11,120(r27)
	PPC_STORE_U32(ctx.r27.u32 + 120, ctx.r11.u32);
	// stw r30,124(r27)
	PPC_STORE_U32(ctx.r27.u32 + 124, ctx.r30.u32);
	// stw r30,128(r27)
	PPC_STORE_U32(ctx.r27.u32 + 128, ctx.r30.u32);
	// stw r30,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r30.u32);
	// stw r30,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r30.u32);
	// stw r30,116(r27)
	PPC_STORE_U32(ctx.r27.u32 + 116, ctx.r30.u32);
	// beq cr6,0x828b9b58
	if (ctx.cr6.eq) goto loc_828B9B58;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b9b58
	if (!ctx.cr6.gt) goto loc_828B9B58;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b9b00
	if (ctx.cr0.eq) goto loc_828B9B00;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x828B9B00;
	sub_82332C38(ctx, base);
loc_828B9B00:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828b9b58
	if (!ctx.cr6.gt) goto loc_828B9B58;
loc_828B9B10:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x828B9B24;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828b9b44
	if (ctx.cr0.eq) goto loc_828B9B44;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r5,56
	ctx.r5.s64 = 56;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9B44;
	sub_82A4EA80(ctx, base);
loc_828B9B44:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,56
	ctx.r30.s64 = ctx.r30.s64 + 56;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828b9b10
	if (ctx.cr6.lt) goto loc_828B9B10;
loc_828B9B58:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9B68"))) PPC_WEAK_FUNC(sub_828B9B68);
PPC_FUNC_IMPL(__imp__sub_828B9B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x828B9B70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,116
	ctx.r31.s64 = ctx.r30.s64 + 116;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,56
	ctx.r6.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x828B9B98;
	sub_82332CA8(ctx, base);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828b9ba8
	if (ctx.cr6.eq) goto loc_828B9BA8;
	// bl 0x82332db8
	ctx.lr = 0x828B9BA8;
	sub_82332DB8(ctx, base);
loc_828B9BA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x829c8a30
	ctx.lr = 0x828B9BC0;
	sub_829C8A30(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828b9bd0
	if (ctx.cr0.eq) goto loc_828B9BD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x828B9BD0;
	sub_82332DB8(ctx, base);
loc_828B9BD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9BE0"))) PPC_WEAK_FUNC(sub_828B9BE0);
PPC_FUNC_IMPL(__imp__sub_828B9BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9BF0"))) PPC_WEAK_FUNC(sub_828B9BF0);
PPC_FUNC_IMPL(__imp__sub_828B9BF0) {
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
	// beq cr6,0x828b9c28
	if (ctx.cr6.eq) goto loc_828B9C28;
	// bl 0x828bfb18
	ctx.lr = 0x828B9C18;
	sub_828BFB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9c28
	if (!ctx.cr6.eq) goto loc_828B9C28;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b9c34
	goto loc_828B9C34;
loc_828B9C28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B9C34;
	sub_8237B670(ctx, base);
loc_828B9C34:
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

__attribute__((alias("__imp__sub_828B9C50"))) PPC_WEAK_FUNC(sub_828B9C50);
PPC_FUNC_IMPL(__imp__sub_828B9C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bfb18
	sub_828BFB18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9C58"))) PPC_WEAK_FUNC(sub_828B9C58);
PPC_FUNC_IMPL(__imp__sub_828B9C58) {
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
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82833108
	ctx.lr = 0x828B9C78;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9cd8
	if (ctx.cr0.eq) goto loc_828B9CD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9C8C;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// addi r11,r11,-18824
	ctx.r11.s64 = ctx.r11.s64 + -18824;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x828B9CC0;
	sub_82A4EA80(ctx, base);
	// addi r4,r30,148
	ctx.r4.s64 = ctx.r30.s64 + 148;
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x828B9CD0;
	sub_82A4EA80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828b9cdc
	goto loc_828B9CDC;
loc_828B9CD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B9CDC:
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

__attribute__((alias("__imp__sub_828B9CF8"))) PPC_WEAK_FUNC(sub_828B9CF8);
PPC_FUNC_IMPL(__imp__sub_828B9CF8) {
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
	// bl 0x828bfb18
	ctx.lr = 0x828B9D18;
	sub_828BFB18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9d28
	if (!ctx.cr6.eq) goto loc_828B9D28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9d40
	goto loc_828B9D40;
loc_828B9D28:
	// bl 0x823ceb68
	ctx.lr = 0x828B9D2C;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9d40
	if (ctx.cr6.eq) goto loc_828B9D40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9D40;
	sub_8237B5A8(ctx, base);
loc_828B9D40:
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

__attribute__((alias("__imp__sub_828B9D58"))) PPC_WEAK_FUNC(sub_828B9D58);
PPC_FUNC_IMPL(__imp__sub_828B9D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9D68"))) PPC_WEAK_FUNC(sub_828B9D68);
PPC_FUNC_IMPL(__imp__sub_828B9D68) {
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
	// beq cr6,0x828b9da0
	if (ctx.cr6.eq) goto loc_828B9DA0;
	// bl 0x828bfc78
	ctx.lr = 0x828B9D90;
	sub_828BFC78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9da0
	if (!ctx.cr6.eq) goto loc_828B9DA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b9dac
	goto loc_828B9DAC;
loc_828B9DA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B9DAC;
	sub_8237B670(ctx, base);
loc_828B9DAC:
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

__attribute__((alias("__imp__sub_828B9DC8"))) PPC_WEAK_FUNC(sub_828B9DC8);
PPC_FUNC_IMPL(__imp__sub_828B9DC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bfc78
	sub_828BFC78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9DD0"))) PPC_WEAK_FUNC(sub_828B9DD0);
PPC_FUNC_IMPL(__imp__sub_828B9DD0) {
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
	// li r3,140
	ctx.r3.s64 = 140;
	// bl 0x82833108
	ctx.lr = 0x828B9DF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9e58
	if (ctx.cr0.eq) goto loc_828B9E58;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9E04;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18696
	ctx.r11.s64 = ctx.r11.s64 + -18696;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// lfs f0,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x828b9e5c
	goto loc_828B9E5C;
loc_828B9E58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B9E5C:
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

__attribute__((alias("__imp__sub_828B9E78"))) PPC_WEAK_FUNC(sub_828B9E78);
PPC_FUNC_IMPL(__imp__sub_828B9E78) {
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
	// bl 0x828bfc78
	ctx.lr = 0x828B9E98;
	sub_828BFC78(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9ea8
	if (!ctx.cr6.eq) goto loc_828B9EA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828b9ec0
	goto loc_828B9EC0;
loc_828B9EA8:
	// bl 0x823ceb68
	ctx.lr = 0x828B9EAC;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828b9ec0
	if (ctx.cr6.eq) goto loc_828B9EC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828B9EC0;
	sub_8237B5A8(ctx, base);
loc_828B9EC0:
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

__attribute__((alias("__imp__sub_828B9ED8"))) PPC_WEAK_FUNC(sub_828B9ED8);
PPC_FUNC_IMPL(__imp__sub_828B9ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828B9EE8"))) PPC_WEAK_FUNC(sub_828B9EE8);
PPC_FUNC_IMPL(__imp__sub_828B9EE8) {
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
	// beq cr6,0x828b9f20
	if (ctx.cr6.eq) goto loc_828B9F20;
	// bl 0x828bfdd8
	ctx.lr = 0x828B9F10;
	sub_828BFDD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9f20
	if (!ctx.cr6.eq) goto loc_828B9F20;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828b9f2c
	goto loc_828B9F2C;
loc_828B9F20:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828B9F2C;
	sub_8237B670(ctx, base);
loc_828B9F2C:
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

__attribute__((alias("__imp__sub_828B9F48"))) PPC_WEAK_FUNC(sub_828B9F48);
PPC_FUNC_IMPL(__imp__sub_828B9F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bfdd8
	sub_828BFDD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828B9F50"))) PPC_WEAK_FUNC(sub_828B9F50);
PPC_FUNC_IMPL(__imp__sub_828B9F50) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x828B9F70;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828b9fa0
	if (ctx.cr0.eq) goto loc_828B9FA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828B9F84;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18568
	ctx.r11.s64 = ctx.r11.s64 + -18568;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x828b9fa4
	goto loc_828B9FA4;
loc_828B9FA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828B9FA4:
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

__attribute__((alias("__imp__sub_828B9FC0"))) PPC_WEAK_FUNC(sub_828B9FC0);
PPC_FUNC_IMPL(__imp__sub_828B9FC0) {
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
	// bl 0x828bfdd8
	ctx.lr = 0x828B9FE0;
	sub_828BFDD8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828b9ff0
	if (!ctx.cr6.eq) goto loc_828B9FF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828ba008
	goto loc_828BA008;
loc_828B9FF0:
	// bl 0x823ceb68
	ctx.lr = 0x828B9FF4;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828ba008
	if (ctx.cr6.eq) goto loc_828BA008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828BA008;
	sub_8237B5A8(ctx, base);
loc_828BA008:
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

__attribute__((alias("__imp__sub_828BA020"))) PPC_WEAK_FUNC(sub_828BA020);
PPC_FUNC_IMPL(__imp__sub_828BA020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828BA030"))) PPC_WEAK_FUNC(sub_828BA030);
PPC_FUNC_IMPL(__imp__sub_828BA030) {
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
	// beq cr6,0x828ba068
	if (ctx.cr6.eq) goto loc_828BA068;
	// bl 0x828bff38
	ctx.lr = 0x828BA058;
	sub_828BFF38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828ba068
	if (!ctx.cr6.eq) goto loc_828BA068;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828ba074
	goto loc_828BA074;
loc_828BA068:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8237b670
	ctx.lr = 0x828BA074;
	sub_8237B670(ctx, base);
loc_828BA074:
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

__attribute__((alias("__imp__sub_828BA090"))) PPC_WEAK_FUNC(sub_828BA090);
PPC_FUNC_IMPL(__imp__sub_828BA090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828bff38
	sub_828BFF38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BA098"))) PPC_WEAK_FUNC(sub_828BA098);
PPC_FUNC_IMPL(__imp__sub_828BA098) {
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
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82833108
	ctx.lr = 0x828BA0B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828ba0f0
	if (ctx.cr0.eq) goto loc_828BA0F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8237b768
	ctx.lr = 0x828BA0CC;
	sub_8237B768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18440
	ctx.r11.s64 = ctx.r11.s64 + -18440;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// b 0x828ba0f4
	goto loc_828BA0F4;
loc_828BA0F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BA0F4:
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

__attribute__((alias("__imp__sub_828BA110"))) PPC_WEAK_FUNC(sub_828BA110);
PPC_FUNC_IMPL(__imp__sub_828BA110) {
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
	// bl 0x828bff38
	ctx.lr = 0x828BA130;
	sub_828BFF38(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x828ba140
	if (!ctx.cr6.eq) goto loc_828BA140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x828ba158
	goto loc_828BA158;
loc_828BA140:
	// bl 0x823ceb68
	ctx.lr = 0x828BA144;
	sub_823CEB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x828ba158
	if (ctx.cr6.eq) goto loc_828BA158;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8237b5a8
	ctx.lr = 0x828BA158;
	sub_8237B5A8(ctx, base);
loc_828BA158:
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

__attribute__((alias("__imp__sub_828BA170"))) PPC_WEAK_FUNC(sub_828BA170);
PPC_FUNC_IMPL(__imp__sub_828BA170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x828BA178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82412e78
	ctx.lr = 0x828BA18C;
	sub_82412E78(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,14556
	ctx.r28.s64 = ctx.r11.s64 + 14556;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA1A0;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r11,-15060
	ctx.r30.s64 = ctx.r11.s64 + -15060;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA1B8;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA1C0;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA1CC;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r29,r11,-15028
	ctx.r29.s64 = ctx.r11.s64 + -15028;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA1E4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824a3890
	ctx.lr = 0x828BA1F4;
	sub_824A3890(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-31400
	ctx.r27.s64 = ctx.r11.s64 + -31400;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA208;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA218;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA220;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA22C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA23C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823f6760
	ctx.lr = 0x828BA24C;
	sub_823F6760(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,10128
	ctx.r27.s64 = ctx.r11.s64 + 10128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA260;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA270;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA278;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA284;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA294;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824031a8
	ctx.lr = 0x828BA2A4;
	sub_824031A8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22780
	ctx.r27.s64 = ctx.r11.s64 + -22780;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA2B8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA2C8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r28,r11,8216
	ctx.r28.s64 = ctx.r11.s64 + 8216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA2D8;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA2E4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA2F4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824031a8
	ctx.lr = 0x828BA304;
	sub_824031A8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA310;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA320;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA328;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA334;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA344;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824031a8
	ctx.lr = 0x828BA354;
	sub_824031A8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22768
	ctx.r26.s64 = ctx.r11.s64 + -22768;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA368;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA378;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA380;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA38C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA39C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823eb038
	ctx.lr = 0x828BA3AC;
	sub_823EB038(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,8240
	ctx.r3.s64 = ctx.r11.s64 + 8240;
	// bl 0x82816528
	ctx.lr = 0x828BA3BC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA3CC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8265bc98
	ctx.lr = 0x828BA3DC;
	sub_8265BC98(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,25944
	ctx.r27.s64 = ctx.r11.s64 + 25944;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA3F0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA400;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA408;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA414;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA424;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823ff848
	ctx.lr = 0x828BA434;
	sub_823FF848(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,8084
	ctx.r27.s64 = ctx.r11.s64 + 8084;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA448;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA458;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA460;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA46C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA47C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd570
	ctx.lr = 0x828BA48C;
	sub_828BD570(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-25508
	ctx.r3.s64 = ctx.r11.s64 + -25508;
	// bl 0x82816528
	ctx.lr = 0x828BA49C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA4AC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd6c8
	ctx.lr = 0x828BA4BC;
	sub_828BD6C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-25488
	ctx.r3.s64 = ctx.r11.s64 + -25488;
	// bl 0x82816528
	ctx.lr = 0x828BA4CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA4DC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd820
	ctx.lr = 0x828BA4EC;
	sub_828BD820(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-25464
	ctx.r3.s64 = ctx.r11.s64 + -25464;
	// bl 0x82816528
	ctx.lr = 0x828BA4FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA50C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd978
	ctx.lr = 0x828BA51C;
	sub_828BD978(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-25444
	ctx.r3.s64 = ctx.r11.s64 + -25444;
	// bl 0x82816528
	ctx.lr = 0x828BA52C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA53C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824122f8
	ctx.lr = 0x828BA54C;
	sub_824122F8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,14536
	ctx.r27.s64 = ctx.r11.s64 + 14536;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA560;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA570;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA578;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA584;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA594;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828c07e8
	ctx.lr = 0x828BA5A4;
	sub_828C07E8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-30836
	ctx.r27.s64 = ctx.r11.s64 + -30836;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA5B8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA5C8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA5D0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA5DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA5EC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823e8f00
	ctx.lr = 0x828BA5FC;
	sub_823E8F00(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,8048
	ctx.r3.s64 = ctx.r11.s64 + 8048;
	// bl 0x82816528
	ctx.lr = 0x828BA60C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA61C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8239d368
	ctx.lr = 0x828BA62C;
	sub_8239D368(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-26672
	ctx.r3.s64 = ctx.r11.s64 + -26672;
	// bl 0x82816528
	ctx.lr = 0x828BA63C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA64C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8239d208
	ctx.lr = 0x828BA65C;
	sub_8239D208(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-26696
	ctx.r3.s64 = ctx.r11.s64 + -26696;
	// bl 0x82816528
	ctx.lr = 0x828BA66C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA67C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8239d4c0
	ctx.lr = 0x828BA68C;
	sub_8239D4C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-26652
	ctx.r3.s64 = ctx.r11.s64 + -26652;
	// bl 0x82816528
	ctx.lr = 0x828BA69C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA6AC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8239d618
	ctx.lr = 0x828BA6BC;
	sub_8239D618(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-26624
	ctx.r3.s64 = ctx.r11.s64 + -26624;
	// bl 0x82816528
	ctx.lr = 0x828BA6CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA6DC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8266b820
	ctx.lr = 0x828BA6EC;
	sub_8266B820(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-23300
	ctx.r3.s64 = ctx.r11.s64 + -23300;
	// bl 0x82816528
	ctx.lr = 0x828BA6FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA70C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd2d8
	ctx.lr = 0x828BA71C;
	sub_828BD2D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23404
	ctx.r27.s64 = ctx.r11.s64 + -23404;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA730;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA740;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA748;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA754;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA764;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82643270
	ctx.lr = 0x828BA774;
	sub_82643270(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,2684
	ctx.r27.s64 = ctx.r11.s64 + 2684;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA788;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA798;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA7A0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA7AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA7BC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82437b78
	ctx.lr = 0x828BA7CC;
	sub_82437B78(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-30140
	ctx.r27.s64 = ctx.r11.s64 + -30140;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA7E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA7F0;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA7F8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA804;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA814;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282e3b0
	ctx.lr = 0x828BA824;
	sub_8282E3B0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,22988
	ctx.r27.s64 = ctx.r11.s64 + 22988;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA838;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA848;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA850;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA85C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA86C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282e610
	ctx.lr = 0x828BA87C;
	sub_8282E610(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23012
	ctx.r27.s64 = ctx.r11.s64 + 23012;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA890;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA8A0;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA8A8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA8B4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA8C4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282e870
	ctx.lr = 0x828BA8D4;
	sub_8282E870(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23052
	ctx.r27.s64 = ctx.r11.s64 + 23052;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA8E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA8F8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA900;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA90C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA91C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282ead0
	ctx.lr = 0x828BA92C;
	sub_8282EAD0(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23080
	ctx.r27.s64 = ctx.r11.s64 + 23080;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA940;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA950;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA958;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA964;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA974;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282f508
	ctx.lr = 0x828BA984;
	sub_8282F508(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23200
	ctx.r27.s64 = ctx.r11.s64 + 23200;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA998;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA9A8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA9B0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA9BC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BA9CC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282ed30
	ctx.lr = 0x828BA9DC;
	sub_8282ED30(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23112
	ctx.r27.s64 = ctx.r11.s64 + 23112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BA9F0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAA00;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAA08;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAA14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAA24;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282ef90
	ctx.lr = 0x828BAA34;
	sub_8282EF90(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23136
	ctx.r27.s64 = ctx.r11.s64 + 23136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAA48;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAA58;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAA60;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAA6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAA7C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282f278
	ctx.lr = 0x828BAA8C;
	sub_8282F278(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23172
	ctx.r27.s64 = ctx.r11.s64 + 23172;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAAA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAAB0;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAAB8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAAC4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAAD4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8282f870
	ctx.lr = 0x828BAAE4;
	sub_8282F870(ctx, base);
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23228
	ctx.r27.s64 = ctx.r11.s64 + 23228;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAAF8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAB08;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAB10;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAB1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAB2C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd418
	ctx.lr = 0x828BAB3C;
	sub_828BD418(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,23948
	ctx.r27.s64 = ctx.r11.s64 + 23948;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAB50;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAB60;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAB68;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAB74;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAB84;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bced8
	ctx.lr = 0x828BAB94;
	sub_828BCED8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23488
	ctx.r27.s64 = ctx.r11.s64 + -23488;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BABA8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BABB8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BABC0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BABCC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BABDC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bc698
	ctx.lr = 0x828BABEC;
	sub_828BC698(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23664
	ctx.r27.s64 = ctx.r11.s64 + -23664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC00;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAC10;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC18;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC24;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAC34;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bc7f8
	ctx.lr = 0x828BAC44;
	sub_828BC7F8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23636
	ctx.r27.s64 = ctx.r11.s64 + -23636;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC58;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAC68;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC70;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAC7C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAC8C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bc958
	ctx.lr = 0x828BAC9C;
	sub_828BC958(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23612
	ctx.r27.s64 = ctx.r11.s64 + -23612;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BACB0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BACC0;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BACC8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BACD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BACE4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd038
	ctx.lr = 0x828BACF4;
	sub_828BD038(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23464
	ctx.r27.s64 = ctx.r11.s64 + -23464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD08;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAD18;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD20;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD2C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAD3C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bcd78
	ctx.lr = 0x828BAD4C;
	sub_828BCD78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23516
	ctx.r27.s64 = ctx.r11.s64 + -23516;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD60;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAD70;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD78;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAD84;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAD94;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bcab8
	ctx.lr = 0x828BADA4;
	sub_828BCAB8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23588
	ctx.r27.s64 = ctx.r11.s64 + -23588;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BADB8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BADC8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BADD0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BADDC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BADEC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bd198
	ctx.lr = 0x828BADFC;
	sub_828BD198(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23440
	ctx.r27.s64 = ctx.r11.s64 + -23440;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE10;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAE20;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE28;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE34;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAE44;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bcc18
	ctx.lr = 0x828BAE54;
	sub_828BCC18(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23552
	ctx.r27.s64 = ctx.r11.s64 + -23552;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE68;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAE78;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE80;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAE8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAE9C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82485608
	ctx.lr = 0x828BAEAC;
	sub_82485608(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,8396
	ctx.r27.s64 = ctx.r11.s64 + 8396;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAEC0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAED0;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAED8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAEE4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAEF4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82831260
	ctx.lr = 0x828BAF04;
	sub_82831260(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-25948
	ctx.r27.s64 = ctx.r11.s64 + -25948;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF18;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAF28;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF30;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF3C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAF4C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823bb778
	ctx.lr = 0x828BAF5C;
	sub_823BB778(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-9376
	ctx.r27.s64 = ctx.r11.s64 + -9376;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF70;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAF80;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF88;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAF94;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAFA4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8248d030
	ctx.lr = 0x828BAFB4;
	sub_8248D030(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22760
	ctx.r27.s64 = ctx.r11.s64 + -22760;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAFC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BAFD8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r28,r11,8448
	ctx.r28.s64 = ctx.r11.s64 + 8448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAFE8;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BAFF4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB004;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8248d030
	ctx.lr = 0x828BB014;
	sub_8248D030(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB020;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB030;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB038;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB044;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB054;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82569060
	ctx.lr = 0x828BB064;
	sub_82569060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r11,8132
	ctx.r28.s64 = ctx.r11.s64 + 8132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB078;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB088;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB090;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB09C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB0AC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82569060
	ctx.lr = 0x828BB0BC;
	sub_82569060(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22748
	ctx.r26.s64 = ctx.r11.s64 + -22748;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB0D0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB0E0;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB0E8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB0F4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB104;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823bd878
	ctx.lr = 0x828BB114;
	sub_823BD878(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-8820
	ctx.r27.s64 = ctx.r11.s64 + -8820;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB128;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB138;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB140;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB14C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB15C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x824101a8
	ctx.lr = 0x828BB16C;
	sub_824101A8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,6972
	ctx.r27.s64 = ctx.r11.s64 + 6972;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB180;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB190;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB198;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB1A4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB1B4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8256d710
	ctx.lr = 0x828BB1C4;
	sub_8256D710(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,12924
	ctx.r27.s64 = ctx.r11.s64 + 12924;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB1D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB1E8;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB1F0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB1FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB20C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x826d1d18
	ctx.lr = 0x828BB21C;
	sub_826D1D18(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,24576
	ctx.r27.s64 = ctx.r11.s64 + 24576;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB230;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB240;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB248;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB254;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB264;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8287a0a8
	ctx.lr = 0x828BB274;
	sub_8287A0A8(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-312
	ctx.r27.s64 = ctx.r11.s64 + -312;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB288;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB298;
	sub_828D0CB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB2A0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB2AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB2BC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8247d938
	ctx.lr = 0x828BB2CC;
	sub_8247D938(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22740
	ctx.r27.s64 = ctx.r11.s64 + -22740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB2E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB2F0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r28,r11,19496
	ctx.r28.s64 = ctx.r11.s64 + 19496;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB300;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB30C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB31C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x8247d938
	ctx.lr = 0x828BB32C;
	sub_8247D938(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22724
	ctx.r26.s64 = ctx.r11.s64 + -22724;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB340;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB350;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB358;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB364;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB374;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871d00
	ctx.lr = 0x828BB384;
	sub_82871D00(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22700
	ctx.r27.s64 = ctx.r11.s64 + -22700;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB398;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB3A8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2700
	ctx.r28.s64 = ctx.r11.s64 + -2700;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB3B8;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB3C4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB3D4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871d00
	ctx.lr = 0x828BB3E4;
	sub_82871D00(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22684
	ctx.r26.s64 = ctx.r11.s64 + -22684;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB3F8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB408;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB410;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB41C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB42C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871a40
	ctx.lr = 0x828BB43C;
	sub_82871A40(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22664
	ctx.r27.s64 = ctx.r11.s64 + -22664;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB450;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB460;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2744
	ctx.r28.s64 = ctx.r11.s64 + -2744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB470;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB47C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB48C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871a40
	ctx.lr = 0x828BB49C;
	sub_82871A40(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22648
	ctx.r26.s64 = ctx.r11.s64 + -22648;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB4B0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB4C0;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB4C8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB4D4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB4E4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871ba0
	ctx.lr = 0x828BB4F4;
	sub_82871BA0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22628
	ctx.r27.s64 = ctx.r11.s64 + -22628;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB508;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB518;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2720
	ctx.r28.s64 = ctx.r11.s64 + -2720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB528;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB534;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB544;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871ba0
	ctx.lr = 0x828BB554;
	sub_82871BA0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22608
	ctx.r26.s64 = ctx.r11.s64 + -22608;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB568;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB578;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB580;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB58C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB59C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871ff0
	ctx.lr = 0x828BB5AC;
	sub_82871FF0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22580
	ctx.r27.s64 = ctx.r11.s64 + -22580;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB5C0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB5D0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2644
	ctx.r28.s64 = ctx.r11.s64 + -2644;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB5E0;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB5EC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB5FC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871ff0
	ctx.lr = 0x828BB60C;
	sub_82871FF0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22568
	ctx.r26.s64 = ctx.r11.s64 + -22568;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB620;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB630;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB638;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB644;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB654;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871e88
	ctx.lr = 0x828BB664;
	sub_82871E88(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22548
	ctx.r27.s64 = ctx.r11.s64 + -22548;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB678;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB688;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2660
	ctx.r28.s64 = ctx.r11.s64 + -2660;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB698;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB6A4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB6B4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82871e88
	ctx.lr = 0x828BB6C4;
	sub_82871E88(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22532
	ctx.r26.s64 = ctx.r11.s64 + -22532;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB6D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB6E8;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB6F0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB6FC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB70C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828389d0
	ctx.lr = 0x828BB71C;
	sub_828389D0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22508
	ctx.r27.s64 = ctx.r11.s64 + -22508;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB730;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB740;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-22864
	ctx.r28.s64 = ctx.r11.s64 + -22864;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB750;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB75C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB76C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828389d0
	ctx.lr = 0x828BB77C;
	sub_828389D0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22492
	ctx.r26.s64 = ctx.r11.s64 + -22492;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB790;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB7A0;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB7A8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB7B4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB7C4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82838b50
	ctx.lr = 0x828BB7D4;
	sub_82838B50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22472
	ctx.r27.s64 = ctx.r11.s64 + -22472;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB7E8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB7F8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-22848
	ctx.r28.s64 = ctx.r11.s64 + -22848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB808;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB814;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB824;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82838b50
	ctx.lr = 0x828BB834;
	sub_82838B50(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22452
	ctx.r26.s64 = ctx.r11.s64 + -22452;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB848;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB858;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB860;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB86C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB87C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82872438
	ctx.lr = 0x828BB88C;
	sub_82872438(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22428
	ctx.r27.s64 = ctx.r11.s64 + -22428;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB8A0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB8B0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r28,r11,-2560
	ctx.r28.s64 = ctx.r11.s64 + -2560;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB8C0;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB8CC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB8DC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82872438
	ctx.lr = 0x828BB8EC;
	sub_82872438(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-22408
	ctx.r26.s64 = ctx.r11.s64 + -22408;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB900;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB910;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB918;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB924;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB934;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82333d20
	ctx.lr = 0x828BB944;
	sub_82333D20(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-23708
	ctx.r27.s64 = ctx.r11.s64 + -23708;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB958;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB968;
	sub_828D0CB0(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r28,r11,14032
	ctx.r28.s64 = ctx.r11.s64 + 14032;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB978;
	sub_82816528(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB984;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB994;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x823fc348
	ctx.lr = 0x828BB9A4;
	sub_823FC348(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,8008
	ctx.r26.s64 = ctx.r11.s64 + 8008;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB9B8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB9C8;
	sub_828D0CB0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB9D0;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BB9DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BB9EC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82333d20
	ctx.lr = 0x828BB9FC;
	sub_82333D20(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r26,r11,-23388
	ctx.r26.s64 = ctx.r11.s64 + -23388;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBA10;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBA20;
	sub_828D0CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBA28;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBA34;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBA44;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828c0530
	ctx.lr = 0x828BBA54;
	sub_828C0530(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-22384
	ctx.r3.s64 = ctx.r11.s64 + -22384;
	// bl 0x82816528
	ctx.lr = 0x828BBA64;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBA74;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x82723640
	ctx.lr = 0x828BBA84;
	sub_82723640(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22368
	ctx.r27.s64 = ctx.r11.s64 + -22368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBA98;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBAA8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,-14552
	ctx.r3.s64 = ctx.r11.s64 + -14552;
	// bl 0x82816528
	ctx.lr = 0x828BBAB4;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBAC0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBAD0;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bdac0
	ctx.lr = 0x828BBAE0;
	sub_828BDAC0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22348
	ctx.r27.s64 = ctx.r11.s64 + -22348;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBAF4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBB04;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23364
	ctx.r3.s64 = ctx.r11.s64 + -23364;
	// bl 0x82816528
	ctx.lr = 0x828BBB10;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBB1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBB2C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bdc20
	ctx.lr = 0x828BBB3C;
	sub_828BDC20(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22324
	ctx.r27.s64 = ctx.r11.s64 + -22324;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBB50;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBB60;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23344
	ctx.r3.s64 = ctx.r11.s64 + -23344;
	// bl 0x82816528
	ctx.lr = 0x828BBB6C;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBB78;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBB88;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bdd80
	ctx.lr = 0x828BBB98;
	sub_828BDD80(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22292
	ctx.r27.s64 = ctx.r11.s64 + -22292;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBBAC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBBBC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23316
	ctx.r3.s64 = ctx.r11.s64 + -23316;
	// bl 0x82816528
	ctx.lr = 0x828BBBC8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBBD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBBE4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bdf00
	ctx.lr = 0x828BBBF4;
	sub_828BDF00(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22272
	ctx.r27.s64 = ctx.r11.s64 + -22272;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBC08;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBC18;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23300
	ctx.r3.s64 = ctx.r11.s64 + -23300;
	// bl 0x82816528
	ctx.lr = 0x828BBC24;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBC30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBC40;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be0b8
	ctx.lr = 0x828BBC50;
	sub_828BE0B8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22248
	ctx.r27.s64 = ctx.r11.s64 + -22248;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBC64;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBC74;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23280
	ctx.r3.s64 = ctx.r11.s64 + -23280;
	// bl 0x82816528
	ctx.lr = 0x828BBC80;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBC8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBC9C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be218
	ctx.lr = 0x828BBCAC;
	sub_828BE218(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22220
	ctx.r27.s64 = ctx.r11.s64 + -22220;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBCC0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBCD0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23256
	ctx.r3.s64 = ctx.r11.s64 + -23256;
	// bl 0x82816528
	ctx.lr = 0x828BBCDC;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBCE8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBCF8;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be3e0
	ctx.lr = 0x828BBD08;
	sub_828BE3E0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22196
	ctx.r27.s64 = ctx.r11.s64 + -22196;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBD1C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBD2C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23236
	ctx.r3.s64 = ctx.r11.s64 + -23236;
	// bl 0x82816528
	ctx.lr = 0x828BBD38;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBD44;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBD54;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be550
	ctx.lr = 0x828BBD64;
	sub_828BE550(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22172
	ctx.r27.s64 = ctx.r11.s64 + -22172;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBD78;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBD88;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23216
	ctx.r3.s64 = ctx.r11.s64 + -23216;
	// bl 0x82816528
	ctx.lr = 0x828BBD94;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBDA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBDB0;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be6c0
	ctx.lr = 0x828BBDC0;
	sub_828BE6C0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22148
	ctx.r27.s64 = ctx.r11.s64 + -22148;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBDD4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBDE4;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23196
	ctx.r3.s64 = ctx.r11.s64 + -23196;
	// bl 0x82816528
	ctx.lr = 0x828BBDF0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBDFC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBE0C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be820
	ctx.lr = 0x828BBE1C;
	sub_828BE820(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22120
	ctx.r27.s64 = ctx.r11.s64 + -22120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBE30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBE40;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23172
	ctx.r3.s64 = ctx.r11.s64 + -23172;
	// bl 0x82816528
	ctx.lr = 0x828BBE4C;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBE58;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBE68;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828be988
	ctx.lr = 0x828BBE78;
	sub_828BE988(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22096
	ctx.r27.s64 = ctx.r11.s64 + -22096;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBE8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBE9C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23152
	ctx.r3.s64 = ctx.r11.s64 + -23152;
	// bl 0x82816528
	ctx.lr = 0x828BBEA8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBEB4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBEC4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828beac8
	ctx.lr = 0x828BBED4;
	sub_828BEAC8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22076
	ctx.r27.s64 = ctx.r11.s64 + -22076;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBEE8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBEF8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23136
	ctx.r3.s64 = ctx.r11.s64 + -23136;
	// bl 0x82816528
	ctx.lr = 0x828BBF04;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBF10;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBF20;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bec28
	ctx.lr = 0x828BBF30;
	sub_828BEC28(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22036
	ctx.r27.s64 = ctx.r11.s64 + -22036;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBF44;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBF54;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23100
	ctx.r3.s64 = ctx.r11.s64 + -23100;
	// bl 0x82816528
	ctx.lr = 0x828BBF60;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBF6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBF7C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bede0
	ctx.lr = 0x828BBF8C;
	sub_828BEDE0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-22004
	ctx.r27.s64 = ctx.r11.s64 + -22004;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBFA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBFB0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23072
	ctx.r3.s64 = ctx.r11.s64 + -23072;
	// bl 0x82816528
	ctx.lr = 0x828BBFBC;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBFC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BBFD8;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bef60
	ctx.lr = 0x828BBFE8;
	sub_828BEF60(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21984
	ctx.r27.s64 = ctx.r11.s64 + -21984;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BBFFC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC00C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23056
	ctx.r3.s64 = ctx.r11.s64 + -23056;
	// bl 0x82816528
	ctx.lr = 0x828BC018;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC024;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC034;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf0e0
	ctx.lr = 0x828BC044;
	sub_828BF0E0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21952
	ctx.r27.s64 = ctx.r11.s64 + -21952;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC058;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC068;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23028
	ctx.r3.s64 = ctx.r11.s64 + -23028;
	// bl 0x82816528
	ctx.lr = 0x828BC074;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC080;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC090;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf278
	ctx.lr = 0x828BC0A0;
	sub_828BF278(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21924
	ctx.r27.s64 = ctx.r11.s64 + -21924;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC0B4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC0C4;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-23004
	ctx.r3.s64 = ctx.r11.s64 + -23004;
	// bl 0x82816528
	ctx.lr = 0x828BC0D0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC0DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC0EC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf418
	ctx.lr = 0x828BC0FC;
	sub_828BF418(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21896
	ctx.r27.s64 = ctx.r11.s64 + -21896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC110;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC120;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22980
	ctx.r3.s64 = ctx.r11.s64 + -22980;
	// bl 0x82816528
	ctx.lr = 0x828BC12C;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC138;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC148;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf578
	ctx.lr = 0x828BC158;
	sub_828BF578(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21868
	ctx.r27.s64 = ctx.r11.s64 + -21868;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC16C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC17C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22956
	ctx.r3.s64 = ctx.r11.s64 + -22956;
	// bl 0x82816528
	ctx.lr = 0x828BC188;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC194;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC1A4;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf6d8
	ctx.lr = 0x828BC1B4;
	sub_828BF6D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21848
	ctx.r27.s64 = ctx.r11.s64 + -21848;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC1C8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC1D8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22940
	ctx.r3.s64 = ctx.r11.s64 + -22940;
	// bl 0x82816528
	ctx.lr = 0x828BC1E4;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC1F0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC200;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf838
	ctx.lr = 0x828BC210;
	sub_828BF838(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21820
	ctx.r27.s64 = ctx.r11.s64 + -21820;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC224;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC234;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22916
	ctx.r3.s64 = ctx.r11.s64 + -22916;
	// bl 0x82816528
	ctx.lr = 0x828BC240;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC24C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC25C;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bf9b8
	ctx.lr = 0x828BC26C;
	sub_828BF9B8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21796
	ctx.r27.s64 = ctx.r11.s64 + -21796;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC280;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC290;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22896
	ctx.r3.s64 = ctx.r11.s64 + -22896;
	// bl 0x82816528
	ctx.lr = 0x828BC29C;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC2A8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC2B8;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bfb18
	ctx.lr = 0x828BC2C8;
	sub_828BFB18(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21768
	ctx.r27.s64 = ctx.r11.s64 + -21768;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC2DC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC2EC;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22864
	ctx.r3.s64 = ctx.r11.s64 + -22864;
	// bl 0x82816528
	ctx.lr = 0x828BC2F8;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC304;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC314;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bfc78
	ctx.lr = 0x828BC324;
	sub_828BFC78(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21748
	ctx.r27.s64 = ctx.r11.s64 + -21748;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC338;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC348;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22848
	ctx.r3.s64 = ctx.r11.s64 + -22848;
	// bl 0x82816528
	ctx.lr = 0x828BC354;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC360;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC370;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bfdd8
	ctx.lr = 0x828BC380;
	sub_828BFDD8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21720
	ctx.r27.s64 = ctx.r11.s64 + -21720;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC394;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC3A4;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22824
	ctx.r3.s64 = ctx.r11.s64 + -22824;
	// bl 0x82816528
	ctx.lr = 0x828BC3B0;
	sub_82816528(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC3BC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC3CC;
	sub_828D0CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828bc428
	if (!ctx.cr6.eq) goto loc_828BC428;
	// bl 0x828bff38
	ctx.lr = 0x828BC3DC;
	sub_828BFF38(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-21696
	ctx.r27.s64 = ctx.r11.s64 + -21696;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC3F0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC400;
	sub_828D0CB0(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r11,-22804
	ctx.r3.s64 = ctx.r11.s64 + -22804;
	// bl 0x82816528
	ctx.lr = 0x828BC40C;
	sub_82816528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x828BC418;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x828BC428;
	sub_828D0CB0(ctx, base);
loc_828BC428:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828BC438"))) PPC_WEAK_FUNC(sub_828BC438);
PPC_FUNC_IMPL(__imp__sub_828BC438) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82833108
	ctx.lr = 0x828BC450;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828bc474
	if (ctx.cr0.eq) goto loc_828BC474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828BC460;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18232
	ctx.r11.s64 = ctx.r11.s64 + -18232;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828bc478
	goto loc_828BC478;
loc_828BC474:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC478:
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

__attribute__((alias("__imp__sub_828BC490"))) PPC_WEAK_FUNC(sub_828BC490);
PPC_FUNC_IMPL(__imp__sub_828BC490) {
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
	// lwz r11,-26136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26136);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc4d0
	if (!ctx.cr0.eq) goto loc_828BC4D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26136(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26136, ctx.r11.u32);
	// addi r3,r9,-23684
	ctx.r3.s64 = ctx.r9.s64 + -23684;
	// bl 0x82816528
	ctx.lr = 0x828BC4C8;
	sub_82816528(ctx, base);
	// stw r3,-26140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26140, ctx.r3.u32);
	// b 0x828bc4d4
	goto loc_828BC4D4;
loc_828BC4D0:
	// lwz r3,-26140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26140);
loc_828BC4D4:
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

__attribute__((alias("__imp__sub_828BC4E8"))) PPC_WEAK_FUNC(sub_828BC4E8);
PPC_FUNC_IMPL(__imp__sub_828BC4E8) {
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
	// bl 0x828bc538
	ctx.lr = 0x828BC508;
	sub_828BC538(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BC51C;
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

__attribute__((alias("__imp__sub_828BC538"))) PPC_WEAK_FUNC(sub_828BC538);
PPC_FUNC_IMPL(__imp__sub_828BC538) {
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
	// addi r31,r11,17820
	ctx.r31.s64 = ctx.r11.s64 + 17820;
	// lwz r11,17816(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17816);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc580
	if (!ctx.cr0.eq) goto loc_828BC580;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18152
	ctx.r9.s64 = ctx.r9.s64 + -18152;
	// stw r11,17816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17816, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// bl 0x82a4c758
	ctx.lr = 0x828BC580;
	sub_82A4C758(ctx, base);
loc_828BC580:
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

__attribute__((alias("__imp__sub_828BC598"))) PPC_WEAK_FUNC(sub_828BC598);
PPC_FUNC_IMPL(__imp__sub_828BC598) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828BC5B0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828bc5d4
	if (ctx.cr0.eq) goto loc_828BC5D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828BC5C0;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18128
	ctx.r11.s64 = ctx.r11.s64 + -18128;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828bc5d8
	goto loc_828BC5D8;
loc_828BC5D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC5D8:
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

__attribute__((alias("__imp__sub_828BC5F0"))) PPC_WEAK_FUNC(sub_828BC5F0);
PPC_FUNC_IMPL(__imp__sub_828BC5F0) {
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
	// lwz r11,-26144(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26144);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc630
	if (!ctx.cr0.eq) goto loc_828BC630;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26144, ctx.r11.u32);
	// addi r3,r9,-23664
	ctx.r3.s64 = ctx.r9.s64 + -23664;
	// bl 0x82816528
	ctx.lr = 0x828BC628;
	sub_82816528(ctx, base);
	// stw r3,-26148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26148, ctx.r3.u32);
	// b 0x828bc634
	goto loc_828BC634;
loc_828BC630:
	// lwz r3,-26148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26148);
loc_828BC634:
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

__attribute__((alias("__imp__sub_828BC648"))) PPC_WEAK_FUNC(sub_828BC648);
PPC_FUNC_IMPL(__imp__sub_828BC648) {
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
	// bl 0x828bc698
	ctx.lr = 0x828BC668;
	sub_828BC698(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BC67C;
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

__attribute__((alias("__imp__sub_828BC698"))) PPC_WEAK_FUNC(sub_828BC698);
PPC_FUNC_IMPL(__imp__sub_828BC698) {
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
	// addi r31,r11,17828
	ctx.r31.s64 = ctx.r11.s64 + 17828;
	// lwz r11,17824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17824);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc6e0
	if (!ctx.cr0.eq) goto loc_828BC6E0;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-18048
	ctx.r9.s64 = ctx.r9.s64 + -18048;
	// stw r11,17824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17824, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14920
	ctx.r3.s64 = ctx.r11.s64 + -14920;
	// bl 0x82a4c758
	ctx.lr = 0x828BC6E0;
	sub_82A4C758(ctx, base);
loc_828BC6E0:
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

__attribute__((alias("__imp__sub_828BC6F8"))) PPC_WEAK_FUNC(sub_828BC6F8);
PPC_FUNC_IMPL(__imp__sub_828BC6F8) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82833108
	ctx.lr = 0x828BC710;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828bc734
	if (ctx.cr0.eq) goto loc_828BC734;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828BC720;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-18024
	ctx.r11.s64 = ctx.r11.s64 + -18024;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828bc738
	goto loc_828BC738;
loc_828BC734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC738:
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

__attribute__((alias("__imp__sub_828BC750"))) PPC_WEAK_FUNC(sub_828BC750);
PPC_FUNC_IMPL(__imp__sub_828BC750) {
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
	// lwz r11,-26152(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26152);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc790
	if (!ctx.cr0.eq) goto loc_828BC790;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26152(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26152, ctx.r11.u32);
	// addi r3,r9,-23636
	ctx.r3.s64 = ctx.r9.s64 + -23636;
	// bl 0x82816528
	ctx.lr = 0x828BC788;
	sub_82816528(ctx, base);
	// stw r3,-26156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26156, ctx.r3.u32);
	// b 0x828bc794
	goto loc_828BC794;
loc_828BC790:
	// lwz r3,-26156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26156);
loc_828BC794:
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

__attribute__((alias("__imp__sub_828BC7A8"))) PPC_WEAK_FUNC(sub_828BC7A8);
PPC_FUNC_IMPL(__imp__sub_828BC7A8) {
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
	// bl 0x828bc7f8
	ctx.lr = 0x828BC7C8;
	sub_828BC7F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BC7DC;
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

__attribute__((alias("__imp__sub_828BC7F8"))) PPC_WEAK_FUNC(sub_828BC7F8);
PPC_FUNC_IMPL(__imp__sub_828BC7F8) {
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
	// addi r31,r11,17836
	ctx.r31.s64 = ctx.r11.s64 + 17836;
	// lwz r11,17832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17832);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc840
	if (!ctx.cr0.eq) goto loc_828BC840;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-17944
	ctx.r9.s64 = ctx.r9.s64 + -17944;
	// stw r11,17832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17832, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// bl 0x82a4c758
	ctx.lr = 0x828BC840;
	sub_82A4C758(ctx, base);
loc_828BC840:
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

__attribute__((alias("__imp__sub_828BC858"))) PPC_WEAK_FUNC(sub_828BC858);
PPC_FUNC_IMPL(__imp__sub_828BC858) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82833108
	ctx.lr = 0x828BC870;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828bc894
	if (ctx.cr0.eq) goto loc_828BC894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x828BC880;
	sub_82833180(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-17920
	ctx.r11.s64 = ctx.r11.s64 + -17920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x828bc898
	goto loc_828BC898;
loc_828BC894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BC898:
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

__attribute__((alias("__imp__sub_828BC8B0"))) PPC_WEAK_FUNC(sub_828BC8B0);
PPC_FUNC_IMPL(__imp__sub_828BC8B0) {
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
	// lwz r11,-26160(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26160);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828bc8f0
	if (!ctx.cr0.eq) goto loc_828BC8F0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stw r11,-26160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26160, ctx.r11.u32);
	// addi r3,r9,-23612
	ctx.r3.s64 = ctx.r9.s64 + -23612;
	// bl 0x82816528
	ctx.lr = 0x828BC8E8;
	sub_82816528(ctx, base);
	// stw r3,-26164(r31)
	PPC_STORE_U32(ctx.r31.u32 + -26164, ctx.r3.u32);
	// b 0x828bc8f4
	goto loc_828BC8F4;
loc_828BC8F0:
	// lwz r3,-26164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26164);
loc_828BC8F4:
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

__attribute__((alias("__imp__sub_828BC908"))) PPC_WEAK_FUNC(sub_828BC908);
PPC_FUNC_IMPL(__imp__sub_828BC908) {
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
	// bl 0x828bc958
	ctx.lr = 0x828BC928;
	sub_828BC958(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828BC93C;
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

