#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825755B8"))) PPC_WEAK_FUNC(sub_825755B8);
PPC_FUNC_IMPL(__imp__sub_825755B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x825755C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x825755DC;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x825755E0;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82575924
	if (ctx.cr0.eq) goto loc_82575924;
	// lwz r28,1584(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1584);
	// lwz r27,4276(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4276);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82575924
	if (ctx.cr6.eq) goto loc_82575924;
	// lwz r9,1616(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1616);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82575634
	if (!ctx.cr6.gt) goto loc_82575634;
	// lwz r11,1612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1612);
loc_82575610:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82575630
	if (ctx.cr6.eq) goto loc_82575630;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82575610
	if (ctx.cr6.lt) goto loc_82575610;
	// b 0x82575634
	goto loc_82575634;
loc_82575630:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82575634:
	// lwz r31,4080(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4080);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8257565c
	if (!ctx.cr6.eq) goto loc_8257565C;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x82575654;
	sub_824F12A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,4080(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4080, ctx.r31.u32);
loc_8257565C:
	// lwz r11,1452(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1452);
	// lwz r26,1492(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82575768
	if (!ctx.cr6.eq) goto loc_82575768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r25.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,1484(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1476(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1476);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,1480(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1480);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825756D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r28,620
	ctx.r4.s64 = ctx.r28.s64 + 620;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825756FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82575738
	if (!ctx.cr0.eq) goto loc_82575738;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,1504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
loc_82575714:
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257572C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82575924
	goto loc_82575924;
loc_82575738:
	// bl 0x825752d0
	ctx.lr = 0x8257573C;
	sub_825752D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82575748;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82575910
	if (ctx.cr0.eq) goto loc_82575910;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x82575760;
	sub_82333A80(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// b 0x825758fc
	goto loc_825758FC;
loc_82575768:
	// lwz r9,1732(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1732);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82575798
	if (!ctx.cr6.gt) goto loc_82575798;
	// lwz r10,1728(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1728);
loc_8257577C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8257579c
	if (ctx.cr6.eq) goto loc_8257579C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8257577c
	if (ctx.cr6.lt) goto loc_8257577C;
loc_82575798:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8257579C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x825758c4
	if (!ctx.cr6.eq) goto loc_825758C4;
	// lwz r9,1708(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1708);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825757d4
	if (!ctx.cr6.gt) goto loc_825757D4;
	// lwz r10,1704(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1704);
loc_825757B8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x825757d8
	if (ctx.cr6.eq) goto loc_825757D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825757b8
	if (ctx.cr6.lt) goto loc_825757B8;
loc_825757D4:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_825757D8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825758c4
	if (ctx.cr6.eq) goto loc_825758C4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82575458
	ctx.lr = 0x825757F0;
	sub_82575458(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r29,1740
	ctx.r4.s64 = ctx.r29.s64 + 1740;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,1740(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1740, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,1744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1744, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,1748(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1748, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r28,620
	ctx.r4.s64 = ctx.r28.s64 + 620;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257586C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82575888
	if (!ctx.cr0.eq) goto loc_82575888;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,1504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82575714
	goto loc_82575714;
loc_82575888:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82575890;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82575910
	if (ctx.cr0.eq) goto loc_82575910;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x825758A8;
	sub_82333A80(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,25576
	ctx.r11.s64 = ctx.r11.s64 + 25576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82575914
	goto loc_82575914;
loc_825758C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825752d0
	ctx.lr = 0x825758D0;
	sub_825752D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x825758DC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82575910
	if (ctx.cr0.eq) goto loc_82575910;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x825758F4;
	sub_82333A80(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_825758FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,25832
	ctx.r11.s64 = ctx.r11.s64 + 25832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82575914
	goto loc_82575914;
loc_82575910:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82575914:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82575924;
	sub_82833A30(ctx, base);
loc_82575924:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575930"))) PPC_WEAK_FUNC(sub_82575930);
PPC_FUNC_IMPL(__imp__sub_82575930) {
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
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823327e0
	ctx.lr = 0x82575960;
	sub_823327E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82575974
	if (ctx.cr6.eq) goto loc_82575974;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82575974:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82575990"))) PPC_WEAK_FUNC(sub_82575990);
PPC_FUNC_IMPL(__imp__sub_82575990) {
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
	// lwz r11,25616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25616);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825759d0
	if (!ctx.cr0.eq) goto loc_825759D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25616(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25616, ctx.r11.u32);
	// addi r3,r9,24300
	ctx.r3.s64 = ctx.r9.s64 + 24300;
	// bl 0x82816528
	ctx.lr = 0x825759C8;
	sub_82816528(ctx, base);
	// stw r3,25612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25612, ctx.r3.u32);
	// b 0x825759d4
	goto loc_825759D4;
loc_825759D0:
	// lwz r3,25612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25612);
loc_825759D4:
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

__attribute__((alias("__imp__sub_825759E8"))) PPC_WEAK_FUNC(sub_825759E8);
PPC_FUNC_IMPL(__imp__sub_825759E8) {
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
	// bl 0x82575a38
	ctx.lr = 0x82575A08;
	sub_82575A38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575A1C;
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

__attribute__((alias("__imp__sub_82575A38"))) PPC_WEAK_FUNC(sub_82575A38);
PPC_FUNC_IMPL(__imp__sub_82575A38) {
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
	// addi r31,r11,25620
	ctx.r31.s64 = ctx.r11.s64 + 25620;
	// lwz r11,25624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25624);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82575a80
	if (!ctx.cr0.eq) goto loc_82575A80;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25656
	ctx.r9.s64 = ctx.r9.s64 + 25656;
	// stw r11,25624(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25624, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21736
	ctx.r3.s64 = ctx.r11.s64 + 21736;
	// bl 0x82a4c758
	ctx.lr = 0x82575A80;
	sub_82A4C758(ctx, base);
loc_82575A80:
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

__attribute__((alias("__imp__sub_82575A98"))) PPC_WEAK_FUNC(sub_82575A98);
PPC_FUNC_IMPL(__imp__sub_82575A98) {
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
	// lwz r11,25608(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25608);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82575ad8
	if (!ctx.cr0.eq) goto loc_82575AD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25608, ctx.r11.u32);
	// addi r3,r9,24348
	ctx.r3.s64 = ctx.r9.s64 + 24348;
	// bl 0x82816528
	ctx.lr = 0x82575AD0;
	sub_82816528(ctx, base);
	// stw r3,25604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25604, ctx.r3.u32);
	// b 0x82575adc
	goto loc_82575ADC;
loc_82575AD8:
	// lwz r3,25604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25604);
loc_82575ADC:
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

__attribute__((alias("__imp__sub_82575AF0"))) PPC_WEAK_FUNC(sub_82575AF0);
PPC_FUNC_IMPL(__imp__sub_82575AF0) {
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
	// bl 0x82575b40
	ctx.lr = 0x82575B10;
	sub_82575B40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575B24;
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

__attribute__((alias("__imp__sub_82575B40"))) PPC_WEAK_FUNC(sub_82575B40);
PPC_FUNC_IMPL(__imp__sub_82575B40) {
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
	// addi r31,r11,12288
	ctx.r31.s64 = ctx.r11.s64 + 12288;
	// lwz r11,12284(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12284);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82575b88
	if (!ctx.cr0.eq) goto loc_82575B88;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25760
	ctx.r9.s64 = ctx.r9.s64 + 25760;
	// stw r11,12284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12284, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21712
	ctx.r3.s64 = ctx.r11.s64 + 21712;
	// bl 0x82a4c758
	ctx.lr = 0x82575B88;
	sub_82A4C758(ctx, base);
loc_82575B88:
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

__attribute__((alias("__imp__sub_82575BA0"))) PPC_WEAK_FUNC(sub_82575BA0);
PPC_FUNC_IMPL(__imp__sub_82575BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82574a48
	sub_82574A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575BA8"))) PPC_WEAK_FUNC(sub_82575BA8);
PPC_FUNC_IMPL(__imp__sub_82575BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82574aa8
	sub_82574AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575BB0"))) PPC_WEAK_FUNC(sub_82575BB0);
PPC_FUNC_IMPL(__imp__sub_82575BB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82574aa8
	sub_82574AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575BB8"))) PPC_WEAK_FUNC(sub_82575BB8);
PPC_FUNC_IMPL(__imp__sub_82575BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,25780
	ctx.r3.s64 = ctx.r11.s64 + 25780;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82575BC8"))) PPC_WEAK_FUNC(sub_82575BC8);
PPC_FUNC_IMPL(__imp__sub_82575BC8) {
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
	// bl 0x82575c18
	ctx.lr = 0x82575BE8;
	sub_82575C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82575bfc
	if (ctx.cr6.eq) goto loc_82575BFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x82575BFC;
	sub_82333B08(ctx, base);
loc_82575BFC:
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

__attribute__((alias("__imp__sub_82575C18"))) PPC_WEAK_FUNC(sub_82575C18);
PPC_FUNC_IMPL(__imp__sub_82575C18) {
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
	// addi r31,r11,12292
	ctx.r31.s64 = ctx.r11.s64 + 12292;
	// lwz r11,12296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12296);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82575c60
	if (!ctx.cr0.eq) goto loc_82575C60;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25912
	ctx.r9.s64 = ctx.r9.s64 + 25912;
	// stw r11,12296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12296, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// bl 0x82a4c758
	ctx.lr = 0x82575C60;
	sub_82A4C758(ctx, base);
loc_82575C60:
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

__attribute__((alias("__imp__sub_82575C78"))) PPC_WEAK_FUNC(sub_82575C78);
PPC_FUNC_IMPL(__imp__sub_82575C78) {
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
	// lwz r11,25600(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25600);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82575cb8
	if (!ctx.cr0.eq) goto loc_82575CB8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25600, ctx.r11.u32);
	// addi r3,r9,25780
	ctx.r3.s64 = ctx.r9.s64 + 25780;
	// bl 0x82816528
	ctx.lr = 0x82575CB0;
	sub_82816528(ctx, base);
	// stw r3,25596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25596, ctx.r3.u32);
	// b 0x82575cbc
	goto loc_82575CBC;
loc_82575CB8:
	// lwz r3,25596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25596);
loc_82575CBC:
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

__attribute__((alias("__imp__sub_82575CD0"))) PPC_WEAK_FUNC(sub_82575CD0);
PPC_FUNC_IMPL(__imp__sub_82575CD0) {
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
	// bl 0x82575c18
	ctx.lr = 0x82575CF0;
	sub_82575C18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82575D04;
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

__attribute__((alias("__imp__sub_82575D20"))) PPC_WEAK_FUNC(sub_82575D20);
PPC_FUNC_IMPL(__imp__sub_82575D20) {
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
	// beq cr6,0x82575d58
	if (ctx.cr6.eq) goto loc_82575D58;
	// bl 0x82575c18
	ctx.lr = 0x82575D48;
	sub_82575C18(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82575d58
	if (!ctx.cr6.eq) goto loc_82575D58;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82575d64
	goto loc_82575D64;
loc_82575D58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82575D64;
	sub_82333C70(ctx, base);
loc_82575D64:
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

__attribute__((alias("__imp__sub_82575D80"))) PPC_WEAK_FUNC(sub_82575D80);
PPC_FUNC_IMPL(__imp__sub_82575D80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82575c18
	sub_82575C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575D88"))) PPC_WEAK_FUNC(sub_82575D88);
PPC_FUNC_IMPL(__imp__sub_82575D88) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82833108
	ctx.lr = 0x82575DA4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82575e04
	if (ctx.cr0.eq) goto loc_82575E04;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,25832
	ctx.r9.s64 = ctx.r9.s64 + 25832;
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
	// b 0x82575e08
	goto loc_82575E08;
loc_82575E04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82575E08:
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

__attribute__((alias("__imp__sub_82575E20"))) PPC_WEAK_FUNC(sub_82575E20);
PPC_FUNC_IMPL(__imp__sub_82575E20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8964
	ctx.r3.s64 = ctx.r11.s64 + -8964;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82575E30"))) PPC_WEAK_FUNC(sub_82575E30);
PPC_FUNC_IMPL(__imp__sub_82575E30) {
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
	// beq cr6,0x82575e68
	if (ctx.cr6.eq) goto loc_82575E68;
	// bl 0x823bcf68
	ctx.lr = 0x82575E58;
	sub_823BCF68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82575e68
	if (!ctx.cr6.eq) goto loc_82575E68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82575e74
	goto loc_82575E74;
loc_82575E68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82573b48
	ctx.lr = 0x82575E74;
	sub_82573B48(ctx, base);
loc_82575E74:
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

__attribute__((alias("__imp__sub_82575E90"))) PPC_WEAK_FUNC(sub_82575E90);
PPC_FUNC_IMPL(__imp__sub_82575E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bcf68
	sub_823BCF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82575E98"))) PPC_WEAK_FUNC(sub_82575E98);
PPC_FUNC_IMPL(__imp__sub_82575E98) {
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
	ctx.lr = 0x82575EB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82575ef8
	if (ctx.cr0.eq) goto loc_82575EF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c40
	ctx.lr = 0x82575ECC;
	sub_82573C40(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,25952
	ctx.r11.s64 = ctx.r11.s64 + 25952;
	// addi r10,r10,27048
	ctx.r10.s64 = ctx.r10.s64 + 27048;
	// addi r9,r9,24116
	ctx.r9.s64 = ctx.r9.s64 + 24116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82575efc
	goto loc_82575EFC;
loc_82575EF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82575EFC:
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

__attribute__((alias("__imp__sub_82575F18"))) PPC_WEAK_FUNC(sub_82575F18);
PPC_FUNC_IMPL(__imp__sub_82575F18) {
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
	// bl 0x823bcf68
	ctx.lr = 0x82575F38;
	sub_823BCF68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82575f48
	if (!ctx.cr6.eq) goto loc_82575F48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82575f60
	goto loc_82575F60;
loc_82575F48:
	// bl 0x82574618
	ctx.lr = 0x82575F4C;
	sub_82574618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82575f60
	if (ctx.cr6.eq) goto loc_82575F60;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x82575F60;
	sub_825702D8(ctx, base);
loc_82575F60:
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

__attribute__((alias("__imp__sub_82575F78"))) PPC_WEAK_FUNC(sub_82575F78);
PPC_FUNC_IMPL(__imp__sub_82575F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82575F80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82573d30
	ctx.lr = 0x82575F8C;
	sub_82573D30(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,25952
	ctx.r11.s64 = ctx.r11.s64 + 25952;
	// addi r10,r10,27048
	ctx.r10.s64 = ctx.r10.s64 + 27048;
	// addi r9,r9,24116
	ctx.r9.s64 = ctx.r9.s64 + 24116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1608
	ctx.r3.s64 = ctx.r31.s64 + 1608;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82575930
	ctx.lr = 0x82575FC8;
	sub_82575930(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,1632
	ctx.r3.s64 = ctx.r31.s64 + 1632;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82575930
	ctx.lr = 0x82575FE0;
	sub_82575930(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x82575FEC;
	sub_82816528(ctx, base);
	// addi r30,r31,1584
	ctx.r30.s64 = ctx.r31.s64 + 1584;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x8257600C;
	sub_823327E0(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257601c
	if (ctx.cr6.eq) goto loc_8257601C;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8257601C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,25932
	ctx.r3.s64 = ctx.r11.s64 + 25932;
	// bl 0x82816528
	ctx.lr = 0x82576028;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x82576044;
	sub_823327E0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addic. r11,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r11.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576054
	if (ctx.cr0.eq) goto loc_82576054;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82576054:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576068"))) PPC_WEAK_FUNC(sub_82576068);
PPC_FUNC_IMPL(__imp__sub_82576068) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-21696
	ctx.r4.s64 = ctx.r9.s64 + -21696;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825760A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825760C0;
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

__attribute__((alias("__imp__sub_825760D8"))) PPC_WEAK_FUNC(sub_825760D8);
PPC_FUNC_IMPL(__imp__sub_825760D8) {
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
	// bl 0x82573df0
	ctx.lr = 0x825760F0;
	sub_82573DF0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-22192
	ctx.r8.s64 = ctx.r11.s64 + -22192;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82576130
	if (!ctx.cr6.gt) goto loc_82576130;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82576114:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82576138
	if (ctx.cr6.eq) goto loc_82576138;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82576114
	if (ctx.cr6.lt) goto loc_82576114;
loc_82576130:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82576138;
	sub_82410060(ctx, base);
loc_82576138:
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

__attribute__((alias("__imp__sub_82576150"))) PPC_WEAK_FUNC(sub_82576150);
PPC_FUNC_IMPL(__imp__sub_82576150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82576158;
	__savegprlr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// lwz r3,1488(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x82576174;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82576178;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825764d8
	if (ctx.cr0.eq) goto loc_825764D8;
	// lwz r30,1584(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1584);
	// lwz r27,4276(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4276);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x825764d8
	if (ctx.cr6.eq) goto loc_825764D8;
	// lwz r9,1616(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1616);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825761cc
	if (!ctx.cr6.gt) goto loc_825761CC;
	// lwz r11,1612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1612);
loc_825761A8:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825761c8
	if (ctx.cr6.eq) goto loc_825761C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825761a8
	if (ctx.cr6.lt) goto loc_825761A8;
	// b 0x825761cc
	goto loc_825761CC;
loc_825761C8:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_825761CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825761E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82576228
	if (ctx.cr6.lt) goto loc_82576228;
	// lwz r11,2312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257622c
	if (ctx.cr6.eq) goto loc_8257622C;
	// lwz r11,2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2288);
	// lwz r10,2292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8257622c
	if (!ctx.cr6.lt) goto loc_8257622C;
loc_82576228:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_8257622C:
	// lwz r9,1504(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82576260
	if (!ctx.cr6.gt) goto loc_82576260;
	// lwz r11,1500(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1500);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_82576244:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82576268
	if (!ctx.cr6.eq) goto loc_82576268;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82576244
	if (ctx.cr6.lt) goto loc_82576244;
loc_82576260:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825763d0
	if (ctx.cr6.eq) goto loc_825763D0;
loc_82576268:
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// bl 0x82574000
	ctx.lr = 0x82576294;
	sub_82574000(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x825763c0
	if (!ctx.cr6.gt) goto loc_825763C0;
loc_825762A4:
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lbzx r28,r11,r31
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x825740d0
	ctx.lr = 0x825762BC;
	sub_825740D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825762d4
	if (!ctx.cr0.eq) goto loc_825762D4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x825762a4
	if (ctx.cr6.lt) goto loc_825762A4;
	// b 0x825763c0
	goto loc_825763C0;
loc_825762D4:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82574180
	ctx.lr = 0x825762EC;
	sub_82574180(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// ble cr6,0x825763c0
	if (!ctx.cr6.gt) goto loc_825763C0;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r3,1928(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 1928);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lfs f0,-24640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfs f2,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x824d7b70
	ctx.lr = 0x82576360;
	sub_824D7B70(ctx, base);
	// lwz r10,1596(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,28
	ctx.r3.s64 = 28;
	// lwzx r21,r10,r11
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x82576374;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825763a4
	if (ctx.cr0.eq) goto loc_825763A4;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333a80
	ctx.lr = 0x8257638C;
	sub_82333A80(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,25832
	ctx.r11.s64 = ctx.r11.s64 + 25832;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825763a8
	goto loc_825763A8;
loc_825763A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825763A8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825763B8;
	sub_82833A30(ctx, base);
	// stw r24,808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 808, ctx.r24.u32);
	// stw r24,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r24.u32);
loc_825763C0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82339860
	ctx.lr = 0x825763C8;
	sub_82339860(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x825764d8
	if (!ctx.cr6.eq) goto loc_825764D8;
loc_825763D0:
	// lwz r31,4080(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4080);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x825763f8
	if (!ctx.cr6.eq) goto loc_825763F8;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r25.u32 + 4);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x825763F0;
	sub_824F12A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,4080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4080, ctx.r31.u32);
loc_825763F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r29.u32);
	// lwz r11,1480(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1480);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r7,1476(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1476);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lwz r10,1484(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1484);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,20(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r6,16(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257645C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r24.u32);
	// lwz r3,1492(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r30,620
	ctx.r4.s64 = ctx.r30.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bne 0x825764c0
	if (!ctx.cr0.eq) goto loc_825764C0;
	// lwz r10,1504(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1504);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825764B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1504);
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x825764d0
	goto loc_825764D0;
loc_825764C0:
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825764D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825764D0:
	// stw r29,808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 808, ctx.r29.u32);
	// stw r29,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r29.u32);
loc_825764D8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825764E8"))) PPC_WEAK_FUNC(sub_825764E8);
PPC_FUNC_IMPL(__imp__sub_825764E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82575f18
	sub_82575F18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825764F0"))) PPC_WEAK_FUNC(sub_825764F0);
PPC_FUNC_IMPL(__imp__sub_825764F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-8940
	ctx.r3.s64 = ctx.r11.s64 + -8940;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576500"))) PPC_WEAK_FUNC(sub_82576500);
PPC_FUNC_IMPL(__imp__sub_82576500) {
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
	// beq cr6,0x82576538
	if (ctx.cr6.eq) goto loc_82576538;
	// bl 0x823bd100
	ctx.lr = 0x82576528;
	sub_823BD100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82576538
	if (!ctx.cr6.eq) goto loc_82576538;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82576544
	goto loc_82576544;
loc_82576538:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82573b48
	ctx.lr = 0x82576544;
	sub_82573B48(ctx, base);
loc_82576544:
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

__attribute__((alias("__imp__sub_82576560"))) PPC_WEAK_FUNC(sub_82576560);
PPC_FUNC_IMPL(__imp__sub_82576560) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bd100
	sub_823BD100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576568"))) PPC_WEAK_FUNC(sub_82576568);
PPC_FUNC_IMPL(__imp__sub_82576568) {
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
	ctx.lr = 0x82576588;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825765c8
	if (ctx.cr0.eq) goto loc_825765C8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82573c40
	ctx.lr = 0x8257659C;
	sub_82573C40(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,27104
	ctx.r11.s64 = ctx.r11.s64 + 27104;
	// addi r10,r10,28200
	ctx.r10.s64 = ctx.r10.s64 + 28200;
	// addi r9,r9,24116
	ctx.r9.s64 = ctx.r9.s64 + 24116;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x825765cc
	goto loc_825765CC;
loc_825765C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825765CC:
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

__attribute__((alias("__imp__sub_825765E8"))) PPC_WEAK_FUNC(sub_825765E8);
PPC_FUNC_IMPL(__imp__sub_825765E8) {
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
	// bl 0x823bd100
	ctx.lr = 0x82576608;
	sub_823BD100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82576618
	if (!ctx.cr6.eq) goto loc_82576618;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82576630
	goto loc_82576630;
loc_82576618:
	// bl 0x82574618
	ctx.lr = 0x8257661C;
	sub_82574618(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82576630
	if (ctx.cr6.eq) goto loc_82576630;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x82576630;
	sub_825702D8(ctx, base);
loc_82576630:
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

__attribute__((alias("__imp__sub_82576648"))) PPC_WEAK_FUNC(sub_82576648);
PPC_FUNC_IMPL(__imp__sub_82576648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82576650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82576694
	if (ctx.cr6.eq) goto loc_82576694;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257666C;
	sub_82414510(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257667c
	if (ctx.cr0.eq) goto loc_8257667C;
	// stw r30,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r30.u32);
loc_8257667C:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82576684;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82576694
	if (ctx.cr0.eq) goto loc_82576694;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_82576694:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82570930
	ctx.lr = 0x825766A0;
	sub_82570930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825766A8"))) PPC_WEAK_FUNC(sub_825766A8);
PPC_FUNC_IMPL(__imp__sub_825766A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-21904
	ctx.r4.s64 = ctx.r9.s64 + -21904;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825766D0"))) PPC_WEAK_FUNC(sub_825766D0);
PPC_FUNC_IMPL(__imp__sub_825766D0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// bl 0x824f1398
	ctx.lr = 0x825766F8;
	sub_824F1398(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82576718"))) PPC_WEAK_FUNC(sub_82576718);
PPC_FUNC_IMPL(__imp__sub_82576718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82576720;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a6173c
	ctx.lr = 0x82576728;
	__savefpr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r20,r23
	ctx.r20.u64 = ctx.r23.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// lwz r11,1456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1456);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// ble cr6,0x82576810
	if (!ctx.cr6.gt) goto loc_82576810;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82576770:
	// lwz r11,1452(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1452);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825767fc
	if (ctx.cr6.eq) goto loc_825767FC;
	// lwz r10,2112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x825767fc
	if (!ctx.cr6.gt) goto loc_825767FC;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825767fc
	if (!ctx.cr0.eq) goto loc_825767FC;
	// lwz r31,4276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4276);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825767fc
	if (ctx.cr6.eq) goto loc_825767FC;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x825767d0
	if (!ctx.cr6.gt) goto loc_825767D0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_825767B4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825767fc
	if (ctx.cr6.eq) goto loc_825767FC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x825767b4
	if (ctx.cr6.lt) goto loc_825767B4;
loc_825767D0:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332d50
	ctx.lr = 0x825767E4;
	sub_82332D50(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r20,96(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825767fc
	if (ctx.cr0.eq) goto loc_825767FC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_825767FC:
	// lwz r11,1456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82576770
	if (ctx.cr6.lt) goto loc_82576770;
loc_82576810:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82576b00
	if (!ctx.cr6.gt) goto loc_82576B00;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// lfs f26,-25080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f26.f64 = double(temp.f32);
	// lis r21,-31949
	ctx.r21.s64 = -2093809664;
	// lfs f25,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,24008(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24008);
	ctx.f28.f64 = double(temp.f32);
loc_82576844:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82576950
	if (!ctx.cr6.gt) goto loc_82576950;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
loc_82576860:
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// lwz r10,1648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82576938
	if (ctx.cr6.eq) goto loc_82576938;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257693c
	if (ctx.cr6.eq) goto loc_8257693C;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257693c
	if (!ctx.cr6.gt) goto loc_8257693C;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257693c
	if (!ctx.cr0.eq) goto loc_8257693C;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x825768A0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825768c4
	if (ctx.cr0.eq) goto loc_825768C4;
	// lwz r10,1408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// lwz r11,13024(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 13024);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825768BC;
	sub_829B9720(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825768c8
	goto loc_825768C8;
loc_825768C4:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_825768C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257693c
	if (ctx.cr6.eq) goto loc_8257693C;
	// lfs f13,624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f30,f0
	ctx.f30.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82414510
	ctx.lr = 0x82576910;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82576920
	if (ctx.cr0.eq) goto loc_82576920;
	// lfs f0,1656(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f26
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
loc_82576920:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82576938
	if (!ctx.cr6.gt) goto loc_82576938;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r11,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// b 0x8257693c
	goto loc_8257693C;
loc_82576938:
	// stw r23,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r23.u32);
loc_8257693C:
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,44
	ctx.r27.s64 = ctx.r27.s64 + 44;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82576860
	if (ctx.cr6.lt) goto loc_82576860;
loc_82576950:
	// lwz r10,1648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576994
	if (ctx.cr0.eq) goto loc_82576994;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82576994
	if (ctx.cr6.eq) goto loc_82576994;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// beq cr6,0x82576988
	if (ctx.cr6.eq) goto loc_82576988;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82576990
	goto loc_82576990;
loc_82576988:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82576990:
	// bl 0x82573f28
	ctx.lr = 0x82576994;
	sub_82573F28(ctx, base);
loc_82576994:
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82576af4
	if (!ctx.cr6.gt) goto loc_82576AF4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_825769A8:
	// lwz r11,1612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82576ae0
	if (ctx.cr6.eq) goto loc_82576AE0;
	// lwz r10,2112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82576ae0
	if (!ctx.cr6.gt) goto loc_82576AE0;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82576ae0
	if (!ctx.cr0.eq) goto loc_82576AE0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82576ac4
	if (ctx.cr6.eq) goto loc_82576AC4;
	// lwz r10,1452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82576ac4
	if (!ctx.cr6.eq) goto loc_82576AC4;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x82576a58
	if (!ctx.cr6.eq) goto loc_82576A58;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82573f28
	ctx.lr = 0x82576A08;
	sub_82573F28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// lfs f30,1512(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1512);
	ctx.f30.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x82576a48
	if (ctx.cr6.eq) goto loc_82576A48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fmuls f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82576A48:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// ble cr6,0x82576aa4
	if (!ctx.cr6.gt) goto loc_82576AA4;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// b 0x82576aa4
	goto loc_82576AA4;
loc_82576A58:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82573f28
	ctx.lr = 0x82576A60;
	sub_82573F28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// lfs f31,1516(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1516);
	ctx.f31.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82576aa0
	if (ctx.cr6.eq) goto loc_82576AA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmuls f30,f0,f27
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
loc_82576AA0:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82576AA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1568);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// b 0x82576ae0
	goto loc_82576AE0;
loc_82576AC4:
	// stfs f25,5412(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// stw r23,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82573f28
	ctx.lr = 0x82576AE0;
	sub_82573F28(ctx, base);
loc_82576AE0:
	// lwz r11,1616(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825769a8
	if (ctx.cr6.lt) goto loc_825769A8;
loc_82576AF4:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82576844
	if (!ctx.cr0.eq) goto loc_82576844;
loc_82576B00:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332ca8
	ctx.lr = 0x82576B18;
	sub_82332CA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82576b28
	if (ctx.cr6.eq) goto loc_82576B28;
	// bl 0x82332db8
	ctx.lr = 0x82576B28;
	sub_82332DB8(ctx, base);
loc_82576B28:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82a61788
	ctx.lr = 0x82576B34;
	__restfpr_25(ctx, base);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576B38"))) PPC_WEAK_FUNC(sub_82576B38);
PPC_FUNC_IMPL(__imp__sub_82576B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82576B40;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r28,1584(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	// lwz r30,4276(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4276);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82576df8
	if (ctx.cr6.eq) goto loc_82576DF8;
	// lwz r9,1616(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82576df8
	if (!ctx.cr6.gt) goto loc_82576DF8;
	// lwz r10,1612(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82576B78:
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82576b98
	if (ctx.cr6.eq) goto loc_82576B98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82576b78
	if (ctx.cr6.lt) goto loc_82576B78;
	// b 0x82576df8
	goto loc_82576DF8;
loc_82576B98:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82576df8
	if (ctx.cr6.eq) goto loc_82576DF8;
	// lwz r11,1648(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// lwz r31,4080(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4080);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subf r11,r27,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r24,r11,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82576be0
	if (!ctx.cr6.eq) goto loc_82576BE0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x82576BD8;
	sub_824F12A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,4080(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4080, ctx.r31.u32);
loc_82576BE0:
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82576cc4
	if (!ctx.cr6.eq) goto loc_82576CC4;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1628(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1628, temp.u32);
	// stfs f0,1632(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1632, temp.u32);
	// beq cr6,0x82576c24
	if (ctx.cr6.eq) goto loc_82576C24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,4
	ctx.r4.s64 = ctx.r27.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r23.u32);
	// b 0x82576cec
	goto loc_82576CEC;
loc_82576C24:
	// lwz r11,4276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82576ca0
	if (ctx.cr6.eq) goto loc_82576CA0;
	// lwz r10,1648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1648);
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82576ca0
	if (ctx.cr6.eq) goto loc_82576CA0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8258c410
	ctx.lr = 0x82576C60;
	sub_8258C410(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8258c410
	ctx.lr = 0x82576C70;
	sub_8258C410(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,1468(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// lwz r7,1472(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// b 0x82576cac
	goto loc_82576CAC;
loc_82576CA0:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82576CAC:
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// stw r9,1468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1468, ctx.r9.u32);
	// stw r10,1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1464, ctx.r10.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1460, ctx.r11.u32);
	// b 0x82576cec
	goto loc_82576CEC;
loc_82576CC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,1636(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1640(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1640);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,1628(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1628, temp.u32);
	// stfs f13,1632(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 1632, temp.u32);
loc_82576CEC:
	// lwz r3,1492(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// addi r4,r28,620
	ctx.r4.s64 = ctx.r28.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82576d90
	if (ctx.cr0.eq) goto loc_82576D90;
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82576df8
	if (ctx.cr6.eq) goto loc_82576DF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r6,1476(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,1480(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r11,1484(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82576df8
	goto loc_82576DF8;
loc_82576D90:
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82576D98;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82576da4
	if (ctx.cr0.eq) goto loc_82576DA4;
	// stw r23,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r23.u32);
loc_82576DA4:
	// lwz r3,1608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82576DAC;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82576dbc
	if (ctx.cr0.eq) goto loc_82576DBC;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r23,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r23.u32);
loc_82576DBC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82576DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1504);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82576df4
	if (ctx.cr6.eq) goto loc_82576DF4;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82576df8
	goto loc_82576DF8;
loc_82576DF4:
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82576DF8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576E08"))) PPC_WEAK_FUNC(sub_82576E08);
PPC_FUNC_IMPL(__imp__sub_82576E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825708c8
	ctx.lr = 0x82576E28;
	sub_825708C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82576718
	ctx.lr = 0x82576E34;
	sub_82576718(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576E50"))) PPC_WEAK_FUNC(sub_82576E50);
PPC_FUNC_IMPL(__imp__sub_82576E50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825765e8
	sub_825765E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576E58"))) PPC_WEAK_FUNC(sub_82576E58);
PPC_FUNC_IMPL(__imp__sub_82576E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9200
	ctx.r3.s64 = ctx.r11.s64 + -9200;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82576E68"))) PPC_WEAK_FUNC(sub_82576E68);
PPC_FUNC_IMPL(__imp__sub_82576E68) {
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
	// beq cr6,0x82576ea0
	if (ctx.cr6.eq) goto loc_82576EA0;
	// bl 0x823bc188
	ctx.lr = 0x82576E90;
	sub_823BC188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82576ea0
	if (!ctx.cr6.eq) goto loc_82576EA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82576eac
	goto loc_82576EAC;
loc_82576EA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x82576EAC;
	sub_82570278(ctx, base);
loc_82576EAC:
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

__attribute__((alias("__imp__sub_82576EC8"))) PPC_WEAK_FUNC(sub_82576EC8);
PPC_FUNC_IMPL(__imp__sub_82576EC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc188
	sub_823BC188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82576ED0"))) PPC_WEAK_FUNC(sub_82576ED0);
PPC_FUNC_IMPL(__imp__sub_82576ED0) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x82576EF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82576f40
	if (ctx.cr0.eq) goto loc_82576F40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x82576F04;
	sub_82571E20(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,28264
	ctx.r11.s64 = ctx.r11.s64 + 28264;
	// addi r10,r10,29356
	ctx.r10.s64 = ctx.r10.s64 + 29356;
	// addi r9,r9,22920
	ctx.r9.s64 = ctx.r9.s64 + 22920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// b 0x82576f44
	goto loc_82576F44;
loc_82576F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82576F44:
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

__attribute__((alias("__imp__sub_82576F60"))) PPC_WEAK_FUNC(sub_82576F60);
PPC_FUNC_IMPL(__imp__sub_82576F60) {
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
	// bl 0x823bc188
	ctx.lr = 0x82576F80;
	sub_823BC188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82576f94
	if (ctx.cr6.eq) goto loc_82576F94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x82576F94;
	sub_825702D8(ctx, base);
loc_82576F94:
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

__attribute__((alias("__imp__sub_82576FB0"))) PPC_WEAK_FUNC(sub_82576FB0);
PPC_FUNC_IMPL(__imp__sub_82576FB0) {
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
	// bl 0x82570708
	ctx.lr = 0x82576FD0;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82576fe0
	if (ctx.cr0.eq) goto loc_82576FE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82576FE0;
	sub_82332DB8(ctx, base);
loc_82576FE0:
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

__attribute__((alias("__imp__sub_82577000"))) PPC_WEAK_FUNC(sub_82577000);
PPC_FUNC_IMPL(__imp__sub_82577000) {
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
	// bl 0x8257a570
	ctx.lr = 0x82577018;
	sub_8257A570(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,28792
	ctx.r8.s64 = ctx.r11.s64 + 28792;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577058
	if (!ctx.cr6.gt) goto loc_82577058;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257703C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82577060
	if (ctx.cr6.eq) goto loc_82577060;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257703c
	if (ctx.cr6.lt) goto loc_8257703C;
loc_82577058:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82577060;
	sub_82410060(ctx, base);
loc_82577060:
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

__attribute__((alias("__imp__sub_82577078"))) PPC_WEAK_FUNC(sub_82577078);
PPC_FUNC_IMPL(__imp__sub_82577078) {
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
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x829c35d8
	ctx.lr = 0x82577094;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82577098;
	sub_824A0990(ctx, base);
	// bl 0x82577490
	ctx.lr = 0x8257709C;
	sub_82577490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825770a8
	if (ctx.cr0.eq) goto loc_825770A8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_825770A8:
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

__attribute__((alias("__imp__sub_825770C0"))) PPC_WEAK_FUNC(sub_825770C0);
PPC_FUNC_IMPL(__imp__sub_825770C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,28904
	ctx.r4.s64 = ctx.r9.s64 + 28904;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825770E8"))) PPC_WEAK_FUNC(sub_825770E8);
PPC_FUNC_IMPL(__imp__sub_825770E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257710C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82577110;
	sub_824A0990(ctx, base);
	// bl 0x82577490
	ctx.lr = 0x82577114;
	sub_82577490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82577144
	if (ctx.cr0.eq) goto loc_82577144;
	// lfs f13,2060(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,1588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82577144
	if (!ctx.cr6.lt) goto loc_82577144;
	// li r30,80
	ctx.r30.s64 = 80;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82577144
	if (!ctx.cr6.lt) goto loc_82577144;
	// li r30,100
	ctx.r30.s64 = 100;
loc_82577144:
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

__attribute__((alias("__imp__sub_82577160"))) PPC_WEAK_FUNC(sub_82577160);
PPC_FUNC_IMPL(__imp__sub_82577160) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8256d8b0
	ctx.lr = 0x82577174;
	sub_8256D8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82577184
	if (ctx.cr0.eq) goto loc_82577184;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6212, ctx.r11.u32);
loc_82577184:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577198"))) PPC_WEAK_FUNC(sub_82577198);
PPC_FUNC_IMPL(__imp__sub_82577198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825771A0;
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
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x825772f4
	if (!ctx.cr6.gt) goto loc_825772F4;
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825771d8
	if (!ctx.cr6.eq) goto loc_825771D8;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r10.u32);
loc_825771D8:
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825772f4
	if (ctx.cr6.eq) goto loc_825772F4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r30,r31,1588
	ctx.r30.s64 = ctx.r31.s64 + 1588;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,16464(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16464);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,1588(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// ble cr6,0x82577300
	if (!ctx.cr6.gt) goto loc_82577300;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82577208:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8256d8b0
	ctx.lr = 0x82577214;
	sub_8256D8B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82577260
	if (ctx.cr0.eq) goto loc_82577260;
	// lwz r11,2112(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577260
	if (!ctx.cr6.gt) goto loc_82577260;
	// lwz r11,84(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82577260
	if (!ctx.cr0.eq) goto loc_82577260;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825712e8
	ctx.lr = 0x82577244;
	sub_825712E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82577260
	if (ctx.cr0.eq) goto loc_82577260;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82577260
	if (!ctx.cr6.lt) goto loc_82577260;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82577260:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82577208
	if (ctx.cr6.lt) goto loc_82577208;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82577300
	if (ctx.cr6.eq) goto loc_82577300;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825772f4
	if (ctx.cr6.eq) goto loc_825772F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82577310
	ctx.lr = 0x82577294;
	sub_82577310(ctx, base);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// stw r3,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825772f4
	if (!ctx.cr6.gt) goto loc_825772F4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_825772AC:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8256d8b0
	ctx.lr = 0x825772B8;
	sub_8256D8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825772e0
	if (ctx.cr0.eq) goto loc_825772E0;
	// lwz r11,2112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825772e0
	if (!ctx.cr6.gt) goto loc_825772E0;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825772e0
	if (!ctx.cr0.eq) goto loc_825772E0;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r11,6212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6212, ctx.r11.u32);
loc_825772E0:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825772ac
	if (ctx.cr6.lt) goto loc_825772AC;
loc_825772F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x825708c8
	ctx.lr = 0x82577300;
	sub_825708C8(ctx, base);
loc_82577300:
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

__attribute__((alias("__imp__sub_82577310"))) PPC_WEAK_FUNC(sub_82577310);
PPC_FUNC_IMPL(__imp__sub_82577310) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257733C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82577340;
	sub_824A0990(ctx, base);
	// bl 0x82577490
	ctx.lr = 0x82577344;
	sub_82577490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825773f8
	if (ctx.cr0.eq) goto loc_825773F8;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825773bc
	if (ctx.cr6.lt) goto loc_825773BC;
	// beq cr6,0x82577394
	if (ctx.cr6.eq) goto loc_82577394;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82577378
	if (ctx.cr6.lt) goto loc_82577378;
	// bne cr6,0x825773f8
	if (!ctx.cr6.eq) goto loc_825773F8;
	// lfs f0,2060(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2056(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x825773c0
	goto loc_825773C0;
loc_82577378:
	// lfs f0,2056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x825773c8
	if (ctx.cr6.lt) goto loc_825773C8;
	// lfs f0,2060(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x825773d4
	goto loc_825773D4;
loc_82577394:
	// lfs f0,2056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x825773c8
	if (ctx.cr6.lt) goto loc_825773C8;
	// lfs f0,2052(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x825773dc
	if (ctx.cr6.lt) goto loc_825773DC;
	// lfs f0,2060(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2048(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x825773e8
	goto loc_825773E8;
loc_825773BC:
	// lfs f0,2056(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2056);
	ctx.f0.f64 = double(temp.f32);
loc_825773C0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x825773d0
	if (!ctx.cr6.lt) goto loc_825773D0;
loc_825773C8:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x825773f8
	goto loc_825773F8;
loc_825773D0:
	// lfs f0,2052(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f0.f64 = double(temp.f32);
loc_825773D4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x825773e4
	if (!ctx.cr6.lt) goto loc_825773E4;
loc_825773DC:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x825773f8
	goto loc_825773F8;
loc_825773E4:
	// lfs f0,2048(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2048);
	ctx.f0.f64 = double(temp.f32);
loc_825773E8:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// li r31,1
	ctx.r31.s64 = 1;
	// blt cr6,0x825773f8
	if (ctx.cr6.lt) goto loc_825773F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825773F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82577418"))) PPC_WEAK_FUNC(sub_82577418);
PPC_FUNC_IMPL(__imp__sub_82577418) {
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
	// lwz r3,1584(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8256d8b0
	ctx.lr = 0x8257743C;
	sub_8256D8B0(ctx, base);
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x82577444;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82577448;
	sub_824A0990(ctx, base);
	// bl 0x82577490
	ctx.lr = 0x8257744C;
	sub_82577490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82577474
	if (ctx.cr0.eq) goto loc_82577474;
	// lfs f13,2052(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2052);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2060(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,1588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82577474
	if (!ctx.cr6.lt) goto loc_82577474;
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82577474:
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

__attribute__((alias("__imp__sub_82577490"))) PPC_WEAK_FUNC(sub_82577490);
PPC_FUNC_IMPL(__imp__sub_82577490) {
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
	// beq cr6,0x825774d4
	if (ctx.cr6.eq) goto loc_825774D4;
	// bl 0x82485a50
	ctx.lr = 0x825774B0;
	sub_82485A50(ctx, base);
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
	ctx.lr = 0x825774C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x825774d8
	if (!ctx.cr0.eq) goto loc_825774D8;
loc_825774D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825774D8:
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

__attribute__((alias("__imp__sub_825774F0"))) PPC_WEAK_FUNC(sub_825774F0);
PPC_FUNC_IMPL(__imp__sub_825774F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82576fb0
	sub_82576FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825774F8"))) PPC_WEAK_FUNC(sub_825774F8);
PPC_FUNC_IMPL(__imp__sub_825774F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82576f60
	sub_82576F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577500"))) PPC_WEAK_FUNC(sub_82577500);
PPC_FUNC_IMPL(__imp__sub_82577500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9128
	ctx.r3.s64 = ctx.r11.s64 + -9128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577510"))) PPC_WEAK_FUNC(sub_82577510);
PPC_FUNC_IMPL(__imp__sub_82577510) {
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
	// beq cr6,0x82577548
	if (ctx.cr6.eq) goto loc_82577548;
	// bl 0x823bc5c8
	ctx.lr = 0x82577538;
	sub_823BC5C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82577548
	if (!ctx.cr6.eq) goto loc_82577548;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82577554
	goto loc_82577554;
loc_82577548:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x82577554;
	sub_82570278(ctx, base);
loc_82577554:
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

__attribute__((alias("__imp__sub_82577570"))) PPC_WEAK_FUNC(sub_82577570);
PPC_FUNC_IMPL(__imp__sub_82577570) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc5c8
	sub_823BC5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577578"))) PPC_WEAK_FUNC(sub_82577578);
PPC_FUNC_IMPL(__imp__sub_82577578) {
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
	// li r3,1760
	ctx.r3.s64 = 1760;
	// bl 0x82833108
	ctx.lr = 0x82577594;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825775a8
	if (ctx.cr0.eq) goto loc_825775A8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82577610
	ctx.lr = 0x825775A4;
	sub_82577610(ctx, base);
	// b 0x825775ac
	goto loc_825775AC;
loc_825775A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825775AC:
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

__attribute__((alias("__imp__sub_825775C0"))) PPC_WEAK_FUNC(sub_825775C0);
PPC_FUNC_IMPL(__imp__sub_825775C0) {
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
	// bl 0x823bc5c8
	ctx.lr = 0x825775E0;
	sub_823BC5C8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825775f4
	if (ctx.cr6.eq) goto loc_825775F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825775F4;
	sub_825702D8(ctx, base);
loc_825775F4:
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

__attribute__((alias("__imp__sub_82577610"))) PPC_WEAK_FUNC(sub_82577610);
PPC_FUNC_IMPL(__imp__sub_82577610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82577618;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82571e20
	ctx.lr = 0x82577628;
	sub_82571E20(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// addi r10,r10,30548
	ctx.r10.s64 = ctx.r10.s64 + 30548;
	// addi r9,r9,30600
	ctx.r9.s64 = ctx.r9.s64 + 30600;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r30,r29,1600
	ctx.r30.s64 = ctx.r29.s64 + 1600;
	// addi r27,r28,1600
	ctx.r27.s64 = ctx.r28.s64 + 1600;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// lwz r11,1584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1584);
	// stw r11,1584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1584, ctx.r11.u32);
	// lwz r11,1588(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1588);
	// stw r11,1588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1588, ctx.r11.u32);
	// lwz r11,1592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1592);
	// stw r11,1592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1592, ctx.r11.u32);
	// lwz r11,1596(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1596);
	// stw r11,1596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1596, ctx.r11.u32);
	// stw r26,1604(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1604, ctx.r26.u32);
	// stw r31,1608(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1608, ctx.r31.u32);
	// stw r31,1612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1612, ctx.r31.u32);
	// stw r31,1616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1616, ctx.r31.u32);
	// stw r31,1620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1620, ctx.r31.u32);
	// stw r31,1600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1600, ctx.r31.u32);
	// beq cr6,0x825776e4
	if (ctx.cr6.eq) goto loc_825776E4;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825776e4
	if (!ctx.cr6.gt) goto loc_825776E4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825776c8
	if (ctx.cr0.eq) goto loc_825776C8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x825776C8;
	sub_82332C38(ctx, base);
loc_825776C8:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x825776DC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_825776E4:
	// addi r30,r29,1624
	ctx.r30.s64 = ctx.r29.s64 + 1624;
	// stw r26,1628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1628, ctx.r26.u32);
	// addi r27,r28,1624
	ctx.r27.s64 = ctx.r28.s64 + 1624;
	// stw r31,1632(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1632, ctx.r31.u32);
	// stw r31,1636(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1636, ctx.r31.u32);
	// stw r31,1640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1640, ctx.r31.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r31,1644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1644, ctx.r31.u32);
	// stw r31,1624(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1624, ctx.r31.u32);
	// beq cr6,0x82577754
	if (ctx.cr6.eq) goto loc_82577754;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577754
	if (!ctx.cr6.gt) goto loc_82577754;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82577738
	if (ctx.cr0.eq) goto loc_82577738;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82577738;
	sub_82332C38(ctx, base);
loc_82577738:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8257774C;
	sub_82A45878(ctx, base);
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82577754:
	// addi r4,r28,1648
	ctx.r4.s64 = ctx.r28.s64 + 1648;
	// addi r3,r29,1648
	ctx.r3.s64 = ctx.r29.s64 + 1648;
	// bl 0x82873b58
	ctx.lr = 0x82577760;
	sub_82873B58(ctx, base);
	// addi r4,r28,1672
	ctx.r4.s64 = ctx.r28.s64 + 1672;
	// addi r3,r29,1672
	ctx.r3.s64 = ctx.r29.s64 + 1672;
	// bl 0x8282f630
	ctx.lr = 0x8257776C;
	sub_8282F630(ctx, base);
	// addi r30,r29,1696
	ctx.r30.s64 = ctx.r29.s64 + 1696;
	// addi r27,r28,1696
	ctx.r27.s64 = ctx.r28.s64 + 1696;
	// stw r31,1704(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1704, ctx.r31.u32);
	// li r11,72
	ctx.r11.s64 = 72;
	// stw r31,1708(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1708, ctx.r31.u32);
	// stw r31,1712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1712, ctx.r31.u32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// stw r11,1700(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1700, ctx.r11.u32);
	// stw r31,1716(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1716, ctx.r31.u32);
	// stw r31,1696(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1696, ctx.r31.u32);
	// beq cr6,0x82577818
	if (ctx.cr6.eq) goto loc_82577818;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577818
	if (!ctx.cr6.gt) goto loc_82577818;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825777c4
	if (ctx.cr0.eq) goto loc_825777C4;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x825777C4;
	sub_82332C38(ctx, base);
loc_825777C4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577818
	if (!ctx.cr6.gt) goto loc_82577818;
loc_825777D4:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332d50
	ctx.lr = 0x825777E8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 * 72;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82577804
	if (ctx.cr0.eq) goto loc_82577804;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825790a0
	ctx.lr = 0x82577804;
	sub_825790A0(ctx, base);
loc_82577804:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825777d4
	if (ctx.cr6.lt) goto loc_825777D4;
loc_82577818:
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r11,r29,1720
	ctx.r11.s64 = ctx.r29.s64 + 1720;
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,1720(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1720, ctx.r10.u32);
	// addi r4,r28,1724
	ctx.r4.s64 = ctx.r28.s64 + 1724;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x82577838;
	sub_82A4EA80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577848"))) PPC_WEAK_FUNC(sub_82577848);
PPC_FUNC_IMPL(__imp__sub_82577848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82577850;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,30548
	ctx.r10.s64 = ctx.r10.s64 + 30548;
	// addi r9,r9,30600
	ctx.r9.s64 = ctx.r9.s64 + 30600;
	// addi r11,r8,-29556
	ctx.r11.s64 = ctx.r8.s64 + -29556;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// stw r11,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r11.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82578fb8
	ctx.lr = 0x82577894;
	sub_82578FB8(ctx, base);
	// addi r3,r31,1672
	ctx.r3.s64 = ctx.r31.s64 + 1672;
	// bl 0x82400f38
	ctx.lr = 0x8257789C;
	sub_82400F38(ctx, base);
	// addi r3,r31,1648
	ctx.r3.s64 = ctx.r31.s64 + 1648;
	// bl 0x8239d768
	ctx.lr = 0x825778A4;
	sub_8239D768(ctx, base);
	// addi r29,r31,1624
	ctx.r29.s64 = ctx.r31.s64 + 1624;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1640(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332ca8
	ctx.lr = 0x825778C0;
	sub_82332CA8(ctx, base);
	// lwz r3,1636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825778d0
	if (ctx.cr6.eq) goto loc_825778D0;
	// bl 0x82332db8
	ctx.lr = 0x825778D0;
	sub_82332DB8(ctx, base);
loc_825778D0:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1600
	ctx.r30.s64 = ctx.r31.s64 + 1600;
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,1616(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// bl 0x82332ca8
	ctx.lr = 0x825778FC;
	sub_82332CA8(ctx, base);
	// lwz r3,1612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257790c
	if (ctx.cr6.eq) goto loc_8257790C;
	// bl 0x82332db8
	ctx.lr = 0x8257790C;
	sub_82332DB8(ctx, base);
loc_8257790C:
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// bl 0x82570708
	ctx.lr = 0x82577920;
	sub_82570708(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82577930
	if (ctx.cr0.eq) goto loc_82577930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82577930;
	sub_82332DB8(ctx, base);
loc_82577930:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577940"))) PPC_WEAK_FUNC(sub_82577940);
PPC_FUNC_IMPL(__imp__sub_82577940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82577948;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825705f8
	ctx.lr = 0x82577954;
	sub_825705F8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,29456
	ctx.r11.s64 = ctx.r11.s64 + 29456;
	// addi r10,r10,30548
	ctx.r10.s64 = ctx.r10.s64 + 30548;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r9,30600
	ctx.r9.s64 = ctx.r9.s64 + 30600;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// addi r10,r10,15852
	ctx.r10.s64 = ctx.r10.s64 + 15852;
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
	// stw r11,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r11.u32);
	// addi r11,r31,1720
	ctx.r11.s64 = ctx.r31.s64 + 1720;
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r30,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r30.u32);
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// stw r9,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r9.u32);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stw r30,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r8,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r8.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r10,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r10.u32);
	// bl 0x8312e7dc
	ctx.lr = 0x82577A20;
	sub_8312E7DC(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29408
	ctx.r3.s64 = ctx.r11.s64 + 29408;
	// bl 0x82816528
	ctx.lr = 0x82577A2C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,1492
	ctx.r29.s64 = ctx.r31.s64 + 1492;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82577A40;
	sub_82410060(ctx, base);
	// lis r11,14112
	ctx.r11.s64 = 924844032;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,53358
	ctx.r11.u64 = ctx.r11.u64 | 53358;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82577A58;
	sub_82410060(ctx, base);
	// lis r11,18987
	ctx.r11.s64 = 1244332032;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,28266
	ctx.r11.u64 = ctx.r11.u64 | 28266;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x82577A70;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29416
	ctx.r3.s64 = ctx.r11.s64 + 29416;
	// bl 0x82816528
	ctx.lr = 0x82577A7C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82577A8C;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29424
	ctx.r3.s64 = ctx.r11.s64 + 29424;
	// bl 0x82816528
	ctx.lr = 0x82577A98;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82577AA8;
	sub_82410060(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-19620
	ctx.r3.s64 = ctx.r11.s64 + -19620;
	// bl 0x82816528
	ctx.lr = 0x82577AB4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82577AC4;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,29440
	ctx.r3.s64 = ctx.r11.s64 + 29440;
	// bl 0x82816528
	ctx.lr = 0x82577AD0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82410060
	ctx.lr = 0x82577AE0;
	sub_82410060(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r11.u32);
	// bl 0x82577b00
	ctx.lr = 0x82577AF4;
	sub_82577B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577B00"))) PPC_WEAK_FUNC(sub_82577B00);
PPC_FUNC_IMPL(__imp__sub_82577B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82577B08;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,1672
	ctx.r30.s64 = ctx.r31.s64 + 1672;
	// lwz r10,1692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r29,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82577b50
	if (ctx.cr6.eq) goto loc_82577B50;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82577B50;
	sub_82332C38(ctx, base);
loc_82577B50:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x82577B68;
	sub_823327E0(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x82577B78;
	sub_82A455D0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lfs f30,18176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18176);
	ctx.f30.f64 = double(temp.f32);
loc_82577B88:
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4e118
	ctx.lr = 0x82577B94;
	sub_82A4E118(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a4e038
	ctx.lr = 0x82577BA4;
	sub_82A4E038(ctx, base);
	// lwz r11,1684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1684);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f31,f31,f30
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// blt cr6,0x82577b88
	if (ctx.cr6.lt) goto loc_82577B88;
	// lwz r11,1668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// addi r30,r31,1648
	ctx.r30.s64 = ctx.r31.s64 + 1648;
	// stw r29,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82577c04
	if (ctx.cr6.eq) goto loc_82577C04;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x82577C04;
	sub_82332C38(ctx, base);
loc_82577C04:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x82577C1C;
	sub_823327E0(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a455d0
	ctx.lr = 0x82577C2C;
	sub_82A455D0(ctx, base);
	// lwz r7,1660(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// lwz r7,1660(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577C78"))) PPC_WEAK_FUNC(sub_82577C78);
PPC_FUNC_IMPL(__imp__sub_82577C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x8257a570
	sub_8257A570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577C80"))) PPC_WEAK_FUNC(sub_82577C80);
PPC_FUNC_IMPL(__imp__sub_82577C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82577C88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// bl 0x824defd8
	ctx.lr = 0x82577C9C;
	sub_824DEFD8(ctx, base);
	// bl 0x823a9e00
	ctx.lr = 0x82577CA0;
	sub_823A9E00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82577CB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82577cd4
	if (!ctx.cr6.gt) goto loc_82577CD4;
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82577cdc
	if (ctx.cr6.gt) goto loc_82577CDC;
loc_82577CD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82577e50
	goto loc_82577E50;
loc_82577CDC:
	// lwz r11,1720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1720);
	// addi r26,r31,1720
	ctx.r26.s64 = ctx.r31.s64 + 1720;
	// lwz r29,1976(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1976);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82577CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82577d74
	if (!ctx.cr6.eq) goto loc_82577D74;
	// li r4,100
	ctx.r4.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82825ab8
	ctx.lr = 0x82577D14;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,70
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 70, ctx.xer);
	// bge cr6,0x82577e24
	if (!ctx.cr6.lt) goto loc_82577E24;
	// bl 0x823a9e00
	ctx.lr = 0x82577D20;
	sub_823A9E00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82577D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578998
	ctx.lr = 0x82577D48;
	sub_82578998(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82577d64
	if (!ctx.cr6.eq) goto loc_82577D64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578ab8
	ctx.lr = 0x82577D5C;
	sub_82578AB8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82577e24
	if (ctx.cr6.eq) goto loc_82577E24;
loc_82577D64:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,1976(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1976, ctx.r3.u32);
	// b 0x82577e34
	goto loc_82577E34;
loc_82577D74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82577d88
	if (!ctx.cr6.eq) goto loc_82577D88;
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82577d98
	goto loc_82577D98;
loc_82577D88:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82577da0
	if (!ctx.cr6.eq) goto loc_82577DA0;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
loc_82577D98:
	// stw r31,1976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1976, ctx.r31.u32);
	// b 0x82577e38
	goto loc_82577E38;
loc_82577DA0:
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82577e24
	if (!ctx.cr6.eq) goto loc_82577E24;
	// stw r28,1976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1976, ctx.r28.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82825ab8
	ctx.lr = 0x82577DBC;
	sub_82825AB8(ctx, base);
	// cmpwi cr6,r3,50
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 50, ctx.xer);
	// blt cr6,0x82577e1c
	if (ctx.cr6.lt) goto loc_82577E1C;
	// bl 0x823a9e00
	ctx.lr = 0x82577DC8;
	sub_823A9E00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82577DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578998
	ctx.lr = 0x82577DF0;
	sub_82578998(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82577e0c
	if (!ctx.cr6.eq) goto loc_82577E0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578ab8
	ctx.lr = 0x82577E04;
	sub_82578AB8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82577e1c
	if (ctx.cr6.eq) goto loc_82577E1C;
loc_82577E0C:
	// lwz r11,1504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1504);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r3,1976(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1976, ctx.r3.u32);
	// b 0x82577e34
	goto loc_82577E34;
loc_82577E1C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82577e28
	goto loc_82577E28;
loc_82577E24:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82577E28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82578f10
	ctx.lr = 0x82577E34;
	sub_82578F10(ctx, base);
loc_82577E34:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82577E38:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82577E4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82577E50:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82577E58"))) PPC_WEAK_FUNC(sub_82577E58);
PPC_FUNC_IMPL(__imp__sub_82577E58) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,1584(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,1712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1712);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,1708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1708);
loc_82577E78:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82577e98
	if (ctx.cr6.eq) goto loc_82577E98;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82577e78
	if (ctx.cr6.lt) goto loc_82577E78;
	// blr 
	return;
loc_82577E98:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82577eb0
	if (ctx.cr6.eq) goto loc_82577EB0;
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// b 0x82577eb4
	goto loc_82577EB4;
loc_82577EB0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82577EB4:
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
loc_82577EC8:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82577ee8
	if (ctx.cr6.eq) goto loc_82577EE8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82577ec8
	if (ctx.cr6.lt) goto loc_82577EC8;
	// blr 
	return;
loc_82577EE8:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,1684(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1684, ctx.r11.u32);
	// stw r10,1688(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1688, ctx.r10.u32);
	// stw r9,1692(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1692, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82577F28"))) PPC_WEAK_FUNC(sub_82577F28);
PPC_FUNC_IMPL(__imp__sub_82577F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82577F30;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,1584(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// bl 0x825780b0
	ctx.lr = 0x82577F90;
	sub_825780B0(ctx, base);
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,1592(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1592, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,620(r27)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r27.u32 + 620);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lwz r11,628(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82578c10
	ctx.lr = 0x82577FD0;
	sub_82578C10(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x82578000;
	sub_82332D50(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578018
	if (ctx.cr0.eq) goto loc_82578018;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82578018:
	// addi r3,r30,1696
	ctx.r3.s64 = ctx.r30.s64 + 1696;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8257802C;
	sub_82332D50(ctx, base);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// mulli r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 * 72;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82578044
	if (ctx.cr0.eq) goto loc_82578044;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825790a0
	ctx.lr = 0x82578044;
	sub_825790A0(ctx, base);
loc_82578044:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82332ca8
	ctx.lr = 0x8257805C;
	sub_82332CA8(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257806c
	if (ctx.cr6.eq) goto loc_8257806C;
	// bl 0x82332db8
	ctx.lr = 0x8257806C;
	sub_82332DB8(ctx, base);
loc_8257806C:
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82332ca8
	ctx.lr = 0x82578090;
	sub_82332CA8(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825780a0
	if (ctx.cr6.eq) goto loc_825780A0;
	// bl 0x82332db8
	ctx.lr = 0x825780A0;
	sub_82332DB8(ctx, base);
loc_825780A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825780B0"))) PPC_WEAK_FUNC(sub_825780B0);
PPC_FUNC_IMPL(__imp__sub_825780B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825780B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r5,48
	ctx.r30.s64 = ctx.r5.s64 + 48;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f31.f64 = double(temp.f32);
loc_825780E0:
	// lwz r7,620(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r9,1660(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1660);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1684);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r28,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x82332d50
	ctx.lr = 0x8257818C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825781c0
	if (ctx.cr0.eq) goto loc_825781C0;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_825781C0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x825780e0
	if (ctx.cr6.lt) goto loc_825780E0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825781D8"))) PPC_WEAK_FUNC(sub_825781D8);
PPC_FUNC_IMPL(__imp__sub_825781D8) {
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
	// lwz r11,1584(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825781fc
	if (ctx.cr6.eq) goto loc_825781FC;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82578200
	goto loc_82578200;
loc_825781FC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82578200:
	// lwz r9,1712(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8257823c
	if (!ctx.cr6.gt) goto loc_8257823C;
	// lwz r11,1708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
loc_82578218:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82578238
	if (ctx.cr6.eq) goto loc_82578238;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82578218
	if (ctx.cr6.lt) goto loc_82578218;
	// b 0x8257823c
	goto loc_8257823C;
loc_82578238:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8257823C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bl 0x82332d50
	ctx.lr = 0x8257826C;
	sub_82332D50(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578284
	if (ctx.cr0.eq) goto loc_82578284;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_82578284:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_825782A0"))) PPC_WEAK_FUNC(sub_825782A0);
PPC_FUNC_IMPL(__imp__sub_825782A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825782A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,1584(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1584);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,1712(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1712);
	// beq cr6,0x825782cc
	if (ctx.cr6.eq) goto loc_825782CC;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825782d0
	goto loc_825782D0;
loc_825782CC:
	// li r28,0
	ctx.r28.s64 = 0;
loc_825782D0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82578378
	if (!ctx.cr6.gt) goto loc_82578378;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
loc_825782E0:
	// lwz r11,1708(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1708);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257836c
	if (!ctx.cr6.gt) goto loc_8257836C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825782FC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82578358
	if (!ctx.cr6.eq) goto loc_82578358;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r7,8
	ctx.r7.s64 = 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r6,8
	ctx.r6.s64 = 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bl 0x82332ca8
	ctx.lr = 0x82578344;
	sub_82332CA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82578358
	if (!ctx.cr6.eq) goto loc_82578358;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82578358:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825782fc
	if (ctx.cr6.lt) goto loc_825782FC;
loc_8257836C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,72
	ctx.r27.s64 = ctx.r27.s64 + 72;
	// bne 0x825782e0
	if (!ctx.cr0.eq) goto loc_825782E0;
loc_82578378:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578388"))) PPC_WEAK_FUNC(sub_82578388);
PPC_FUNC_IMPL(__imp__sub_82578388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82578390;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r26,88(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,84(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825783b8
	if (!ctx.cr6.eq) goto loc_825783B8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82919328
	ctx.lr = 0x825783B8;
	sub_82919328(ctx, base);
loc_825783B8:
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x825783C0;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x825783C4;
	sub_824A0990(ctx, base);
	// lwz r11,7388(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7388);
	// addi r24,r26,7388
	ctx.r24.s64 = ctx.r26.s64 + 7388;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825783E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7340);
	// lwz r10,1584(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82578404
	if (!ctx.cr6.eq) goto loc_82578404;
	// lwz r11,1588(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1588);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82578408
	if (ctx.cr6.eq) goto loc_82578408;
loc_82578404:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82578408:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82578558
	if (ctx.cr0.eq) goto loc_82578558;
	// lwz r11,1620(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1620);
	// addi r27,r29,1600
	ctx.r27.s64 = ctx.r29.s64 + 1600;
	// stw r25,1616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1616, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82578438
	if (ctx.cr6.eq) goto loc_82578438;
	// stw r25,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c38
	ctx.lr = 0x82578438;
	sub_82332C38(ctx, base);
loc_82578438:
	// lwz r11,1644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1644);
	// addi r28,r29,1624
	ctx.r28.s64 = ctx.r29.s64 + 1624;
	// stw r25,1640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1640, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82578460
	if (ctx.cr6.eq) goto loc_82578460;
	// stw r25,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c38
	ctx.lr = 0x82578460;
	sub_82332C38(ctx, base);
loc_82578460:
	// lwz r30,84(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 84);
	// b 0x82578550
	goto loc_82578550;
loc_82578468:
	// bl 0x8247b540
	ctx.lr = 0x8257846C;
	sub_8247B540(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82578494
	if (!ctx.cr0.eq) goto loc_82578494;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82578494:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825784cc
	if (ctx.cr6.eq) goto loc_825784CC;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,112(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825784cc
	if (!ctx.cr6.eq) goto loc_825784CC;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332d50
	ctx.lr = 0x825784C4;
	sub_82332D50(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x8257853c
	goto loc_8257853C;
loc_825784CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82578508
	if (ctx.cr6.eq) goto loc_82578508;
	// bl 0x8247ac28
	ctx.lr = 0x825784D8;
	sub_8247AC28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825784F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82578500
	if (!ctx.cr0.eq) goto loc_82578500;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82578500:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8257850c
	goto loc_8257850C;
loc_82578508:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8257850C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257854c
	if (ctx.cr6.eq) goto loc_8257854C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r10,112(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257854c
	if (!ctx.cr6.eq) goto loc_8257854C;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332d50
	ctx.lr = 0x82578538;
	sub_82332D50(ctx, base);
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
loc_8257853C:
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257854c
	if (ctx.cr0.eq) goto loc_8257854C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_8257854C:
	// lwz r30,1720(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
loc_82578550:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82578468
	if (!ctx.cr6.eq) goto loc_82578468;
loc_82578558:
	// stw r26,1588(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1588, ctx.r26.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,7340(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 7340);
	// stw r11,1584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1584, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1616);
	// lwz r10,1620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1620);
	// addi r3,r29,1600
	ctx.r3.s64 = ctx.r29.s64 + 1600;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257859c
	if (ctx.cr6.eq) goto loc_8257859C;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8257859C;
	sub_82332C38(ctx, base);
loc_8257859C:
	// lwz r11,1640(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1640);
	// addi r3,r29,1624
	ctx.r3.s64 = ctx.r29.s64 + 1624;
	// lwz r10,1644(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1644);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825785c0
	if (ctx.cr6.eq) goto loc_825785C0;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x825785C0;
	sub_82332C38(ctx, base);
loc_825785C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825785C8"))) PPC_WEAK_FUNC(sub_825785C8);
PPC_FUNC_IMPL(__imp__sub_825785C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825785D0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x825785D8;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1616(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1616);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578798
	if (!ctx.cr6.gt) goto loc_82578798;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82825ab8
	ctx.lr = 0x82578600;
	sub_82825AB8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82578628
	if (ctx.cr6.eq) goto loc_82578628;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82578620;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82578624;
	sub_82409C40(ctx, base);
	// b 0x8257862c
	goto loc_8257862C;
loc_82578628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257862C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578798
	if (ctx.cr6.eq) goto loc_82578798;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578798
	if (ctx.cr6.eq) goto loc_82578798;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r8,628(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,620(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lfs f31,16668(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// lwz r6,628(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// lwz r9,620(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f30,f12,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82332e18
	ctx.lr = 0x825786C4;
	sub_82332E18(ctx, base);
	// fsqrts f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f30.f64)));
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,16800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8257878c
	if (!ctx.cr6.lt) goto loc_8257878C;
	// lwz r31,1616(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1616);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82578798
	if (!ctx.cr6.gt) goto loc_82578798;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,1612(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1612);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_825786F4:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lfs f0,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f12,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x8257872C;
	sub_82332E18(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82578798
	if (ctx.cr6.lt) goto loc_82578798;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twllei r31,0
	// subf r27,r9,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x825786f4
	if (ctx.cr6.lt) goto loc_825786F4;
	// b 0x82578798
	goto loc_82578798;
loc_8257878C:
	// lwz r11,1612(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1612);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82578798:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x825787A8;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825787B0"))) PPC_WEAK_FUNC(sub_825787B0);
PPC_FUNC_IMPL(__imp__sub_825787B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825787B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61744
	ctx.lr = 0x825787C0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,1640(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578980
	if (!ctx.cr6.gt) goto loc_82578980;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82825ab8
	ctx.lr = 0x825787E8;
	sub_82825AB8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82578810
	if (ctx.cr6.eq) goto loc_82578810;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82578808;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8257880C;
	sub_82409C40(ctx, base);
	// b 0x82578814
	goto loc_82578814;
loc_82578810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82578814:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82578980
	if (ctx.cr6.eq) goto loc_82578980;
	// lwz r11,1412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82578980
	if (ctx.cr6.eq) goto loc_82578980;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,1412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// lwz r8,628(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,620(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// lfs f31,16668(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16668);
	ctx.f31.f64 = double(temp.f32);
	// lwz r6,628(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 628);
	// lwz r9,620(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 620);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,624(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 624);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f30,f12,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82332e18
	ctx.lr = 0x825788AC;
	sub_82332E18(ctx, base);
	// fsqrts f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f30.f64)));
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,16800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16800);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82578974
	if (!ctx.cr6.lt) goto loc_82578974;
	// lwz r31,1640(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1640);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82578980
	if (!ctx.cr6.gt) goto loc_82578980;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r29,1636(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1636);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_825788DC:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwzx r28,r11,r29
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lfs f0,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f12,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82332e18
	ctx.lr = 0x82578914;
	sub_82332E18(ctx, base);
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x82578980
	if (ctx.cr6.lt) goto loc_82578980;
	// add r10,r30,r27
	ctx.r10.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r9,r10,r31
	ctx.r9.s32 = ctx.r10.s32 / ctx.r31.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r31.s32);
	// andc r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// twllei r31,0
	// subf r27,r9,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r9.s64;
	// twlgei r11,-1
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x825788dc
	if (ctx.cr6.lt) goto loc_825788DC;
	// b 0x82578980
	goto loc_82578980;
loc_82578974:
	// lwz r11,1636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1636);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82578980:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82a61790
	ctx.lr = 0x82578990;
	__restfpr_27(ctx, base);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578998"))) PPC_WEAK_FUNC(sub_82578998);
PPC_FUNC_IMPL(__imp__sub_82578998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x825789A0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,-1
	ctx.r25.s64 = -1;
	// bl 0x825785c8
	ctx.lr = 0x825789B4;
	sub_825785C8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82578aac
	if (ctx.cr0.eq) goto loc_82578AAC;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r24,80(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578a08
	if (!ctx.cr6.gt) goto loc_82578A08;
	// lwz r9,1708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
loc_825789D8:
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825789f0
	if (ctx.cr6.eq) goto loc_825789F0;
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82578a04
	if (ctx.cr6.eq) goto loc_82578A04;
loc_825789F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825789d8
	if (ctx.cr6.lt) goto loc_825789D8;
	// b 0x82578a08
	goto loc_82578A08;
loc_82578A04:
	// lwz r29,0(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82578A08:
	// bl 0x823a9e00
	ctx.lr = 0x82578A0C;
	sub_823A9E00(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r28,1584(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82578a64
	if (ctx.cr6.eq) goto loc_82578A64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82578d50
	ctx.lr = 0x82578A44;
	sub_82578D50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82578aac
	if (ctx.cr0.eq) goto loc_82578AAC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577e58
	ctx.lr = 0x82578A5C;
	sub_82577E58(ctx, base);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// b 0x82578aa8
	goto loc_82578AA8;
loc_82578A64:
	// bl 0x825782a0
	ctx.lr = 0x82578A68;
	sub_825782A0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82578a78
	if (ctx.cr6.eq) goto loc_82578A78;
	// lwz r5,80(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// b 0x82578a7c
	goto loc_82578A7C;
loc_82578A78:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82578A7C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577f28
	ctx.lr = 0x82578A94;
	sub_82577F28(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577e58
	ctx.lr = 0x82578AA8;
	sub_82577E58(ctx, base);
loc_82578AA8:
	// stw r24,1972(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1972, ctx.r24.u32);
loc_82578AAC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578AB8"))) PPC_WEAK_FUNC(sub_82578AB8);
PPC_FUNC_IMPL(__imp__sub_82578AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82578AC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r25,1616(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r21,1584(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82578c00
	if (!ctx.cr6.gt) goto loc_82578C00;
	// li r22,0
	ctx.r22.s64 = 0;
loc_82578AE8:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// lwzx r24,r11,r22
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82578b00
	if (ctx.cr6.eq) goto loc_82578B00;
	// lwz r26,80(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// b 0x82578b04
	goto loc_82578B04;
loc_82578B00:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82578B04:
	// lwz r9,1712(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82578b4c
	if (!ctx.cr6.gt) goto loc_82578B4C;
	// lwz r11,1708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
loc_82578B1C:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82578b34
	if (ctx.cr6.eq) goto loc_82578B34;
	// lwz r8,80(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82578b48
	if (ctx.cr6.eq) goto loc_82578B48;
loc_82578B34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82578b1c
	if (ctx.cr6.lt) goto loc_82578B1C;
	// b 0x82578b4c
	goto loc_82578B4C;
loc_82578B48:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82578B4C:
	// bl 0x823a9e00
	ctx.lr = 0x82578B50;
	sub_823A9E00(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82578bb8
	if (ctx.cr6.eq) goto loc_82578BB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82578d50
	ctx.lr = 0x82578B84;
	sub_82578D50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82578ba0
	if (!ctx.cr0.eq) goto loc_82578BA0;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r23,r25
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82578ae8
	if (ctx.cr6.lt) goto loc_82578AE8;
	// b 0x82578c00
	goto loc_82578C00;
loc_82578BA0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577e58
	ctx.lr = 0x82578BB0;
	sub_82577E58(ctx, base);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// b 0x82578bfc
	goto loc_82578BFC;
loc_82578BB8:
	// bl 0x825782a0
	ctx.lr = 0x82578BBC;
	sub_825782A0(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82578bcc
	if (ctx.cr6.eq) goto loc_82578BCC;
	// lwz r5,80(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// b 0x82578bd0
	goto loc_82578BD0;
loc_82578BCC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82578BD0:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577f28
	ctx.lr = 0x82578BE8;
	sub_82577F28(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82577e58
	ctx.lr = 0x82578BFC;
	sub_82577E58(ctx, base);
loc_82578BFC:
	// stw r26,1972(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1972, ctx.r26.u32);
loc_82578C00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578C10"))) PPC_WEAK_FUNC(sub_82578C10);
PPC_FUNC_IMPL(__imp__sub_82578C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82578c84
	if (!ctx.cr6.gt) goto loc_82578C84;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82578C3C:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,-48
	ctx.r5.s64 = ctx.r1.s64 + -48;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r10,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82578c3c
	if (ctx.cr6.lt) goto loc_82578C3C;
loc_82578C84:
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82578cf4
	if (!ctx.cr0.gt) goto loc_82578CF4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82578C94:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82578ce8
	if (!ctx.cr6.gt) goto loc_82578CE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82578CA4:
	// addi r10,r1,-44
	ctx.r10.s64 = ctx.r1.s64 + -44;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82578cdc
	if (!ctx.cr6.lt) goto loc_82578CDC;
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// stfs f0,-4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r8,r1,-76
	ctx.r8.s64 = ctx.r1.s64 + -76;
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r30,r11,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r30,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82578CDC:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82578ca4
	if (!ctx.cr0.eq) goto loc_82578CA4;
loc_82578CE8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// bne 0x82578c94
	if (!ctx.cr0.eq) goto loc_82578C94;
loc_82578CF4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82578d40
	if (!ctx.cr6.gt) goto loc_82578D40;
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
loc_82578D08:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82578d34
	if (!ctx.cr6.eq) goto loc_82578D34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82578d08
	if (ctx.cr6.lt) goto loc_82578D08;
	// b 0x82578d40
	goto loc_82578D40;
loc_82578D34:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82578D40:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82578D50"))) PPC_WEAK_FUNC(sub_82578D50);
PPC_FUNC_IMPL(__imp__sub_82578D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82578D58;
	__savegprlr_27(ctx, base);
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
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82578da8
	if (!ctx.cr6.gt) goto loc_82578DA8;
	// lwz r9,1708(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
loc_82578D84:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82578da4
	if (ctx.cr6.eq) goto loc_82578DA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82578d84
	if (ctx.cr6.lt) goto loc_82578D84;
	// b 0x82578da8
	goto loc_82578DA8;
loc_82578DA4:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82578DA8:
	// lwz r6,1584(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82578dbc
	if (ctx.cr0.eq) goto loc_82578DBC;
	// lwz r8,80(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// b 0x82578dc0
	goto loc_82578DC0;
loc_82578DBC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82578DC0:
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82578e04
	if (!ctx.cr6.gt) goto loc_82578E04;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
loc_82578DD4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82578df4
	if (ctx.cr6.eq) goto loc_82578DF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82578dd4
	if (ctx.cr6.lt) goto loc_82578DD4;
	// b 0x82578e04
	goto loc_82578E04;
loc_82578DF4:
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82578f00
	if (!ctx.cr0.eq) goto loc_82578F00;
loc_82578E04:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bge cr6,0x82578f00
	if (!ctx.cr6.lt) goto loc_82578F00;
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82578e54
	if (!ctx.cr6.eq) goto loc_82578E54;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82578e54
	if (!ctx.cr6.gt) goto loc_82578E54;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// twllei r11,0
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// divw r8,r9,r11
	ctx.r8.s32 = ctx.r9.s32 / ctx.r11.s32;
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r31,r8,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// twlgei r10,-1
	// bne cr6,0x82578e78
	if (!ctx.cr6.eq) goto loc_82578E78;
loc_82578E54:
	// lwz r10,628(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 628);
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// ld r5,620(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 620);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82578c10
	ctx.lr = 0x82578E6C;
	sub_82578C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82578f00
	if (ctx.cr6.eq) goto loc_82578F00;
loc_82578E78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825782a0
	ctx.lr = 0x82578E84;
	sub_825782A0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825781d8
	ctx.lr = 0x82578E98;
	sub_825781D8(ctx, base);
	// lwz r10,1712(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82578efc
	if (!ctx.cr6.gt) goto loc_82578EFC;
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
loc_82578EAC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82578ec4
	if (!ctx.cr6.eq) goto loc_82578EC4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82578ed8
	if (!ctx.cr6.eq) goto loc_82578ED8;
loc_82578EC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82578eac
	if (ctx.cr6.lt) goto loc_82578EAC;
	// b 0x82578efc
	goto loc_82578EFC;
loc_82578ED8:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x829c35d8
	ctx.lr = 0x82578EE0;
	sub_829C35D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82578efc
	if (ctx.cr0.eq) goto loc_82578EFC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82578EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82578EFC:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82578F00:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578F10"))) PPC_WEAK_FUNC(sub_82578F10);
PPC_FUNC_IMPL(__imp__sub_82578F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82578F18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823a9e00
	ctx.lr = 0x82578F2C;
	sub_823A9E00(ctx, base);
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
	ctx.lr = 0x82578F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825787b0
	ctx.lr = 0x82578F54;
	sub_825787B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a9e00
	ctx.lr = 0x82578F5C;
	sub_823A9E00(ctx, base);
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
	ctx.lr = 0x82578F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82578fa0
	if (ctx.cr6.eq) goto loc_82578FA0;
	// lwz r10,80(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,1972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1972, ctx.r10.u32);
	// bl 0x825782a0
	ctx.lr = 0x82578F94;
	sub_825782A0(ctx, base);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,1976(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1976, ctx.r29.u32);
loc_82578FA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578FB0"))) PPC_WEAK_FUNC(sub_82578FB0);
PPC_FUNC_IMPL(__imp__sub_82578FB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82578388
	sub_82578388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82578FB8"))) PPC_WEAK_FUNC(sub_82578FB8);
PPC_FUNC_IMPL(__imp__sub_82578FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82578FC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r25,16(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82579064
	if (!ctx.cr6.gt) goto loc_82579064;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_82578FE0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r30,48
	ctx.r31.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82332ca8
	ctx.lr = 0x82579004;
	sub_82332CA8(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82579014
	if (ctx.cr6.eq) goto loc_82579014;
	// bl 0x82332db8
	ctx.lr = 0x82579014;
	sub_82332DB8(ctx, base);
loc_82579014:
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82332ca8
	ctx.lr = 0x8257903C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257904c
	if (ctx.cr6.eq) goto loc_8257904C;
	// bl 0x82332db8
	ctx.lr = 0x8257904C;
	sub_82332DB8(ctx, base);
loc_8257904C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r28,r28,72
	ctx.r28.s64 = ctx.r28.s64 + 72;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// bne 0x82578fe0
	if (!ctx.cr0.eq) goto loc_82578FE0;
loc_82579064:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,72
	ctx.r6.s64 = 72;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8257907C;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257908c
	if (ctx.cr6.eq) goto loc_8257908C;
	// bl 0x82332db8
	ctx.lr = 0x8257908C;
	sub_82332DB8(ctx, base);
loc_8257908C:
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// stw r29,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825790A0"))) PPC_WEAK_FUNC(sub_825790A0);
PPC_FUNC_IMPL(__imp__sub_825790A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825790A8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r25,24
	ctx.r31.s64 = ctx.r25.s64 + 24;
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,12(r25)
	PPC_STORE_U32(ctx.r25.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r11.u32);
	// stw r10,28(r25)
	PPC_STORE_U32(ctx.r25.u32 + 28, ctx.r10.u32);
	// stw r30,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r30.u32);
	// stw r30,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r30.u32);
	// stw r30,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r30.u32);
	// stw r30,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r30.u32);
	// stw r30,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r30.u32);
	// beq cr6,0x825791a4
	if (ctx.cr6.eq) goto loc_825791A4;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825791a4
	if (!ctx.cr6.gt) goto loc_825791A4;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579140
	if (ctx.cr0.eq) goto loc_82579140;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82579140;
	sub_82332C38(ctx, base);
loc_82579140:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825791a4
	if (!ctx.cr6.gt) goto loc_825791A4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_82579154:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82579168;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579190
	if (ctx.cr0.eq) goto loc_82579190;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// add r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82579190:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82579154
	if (ctx.cr6.lt) goto loc_82579154;
loc_825791A4:
	// addi r31,r25,48
	ctx.r31.s64 = ctx.r25.s64 + 48;
	// stw r30,56(r25)
	PPC_STORE_U32(ctx.r25.u32 + 56, ctx.r30.u32);
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// stw r30,60(r25)
	PPC_STORE_U32(ctx.r25.u32 + 60, ctx.r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r30,64(r25)
	PPC_STORE_U32(ctx.r25.u32 + 64, ctx.r30.u32);
	// stw r30,68(r25)
	PPC_STORE_U32(ctx.r25.u32 + 68, ctx.r30.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r11,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
	// stw r30,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r30.u32);
	// beq cr6,0x8257926c
	if (ctx.cr6.eq) goto loc_8257926C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257926c
	if (!ctx.cr6.gt) goto loc_8257926C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825791fc
	if (ctx.cr0.eq) goto loc_825791FC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x825791FC;
	sub_82332C38(ctx, base);
loc_825791FC:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257926c
	if (!ctx.cr6.gt) goto loc_8257926C;
loc_8257920C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x82579220;
	sub_82332D50(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579258
	if (ctx.cr0.eq) goto loc_82579258;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82579258:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257920c
	if (ctx.cr6.lt) goto loc_8257920C;
loc_8257926C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579278"))) PPC_WEAK_FUNC(sub_82579278);
PPC_FUNC_IMPL(__imp__sub_82579278) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82577848
	sub_82577848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579280"))) PPC_WEAK_FUNC(sub_82579280);
PPC_FUNC_IMPL(__imp__sub_82579280) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825775c0
	sub_825775C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579288"))) PPC_WEAK_FUNC(sub_82579288);
PPC_FUNC_IMPL(__imp__sub_82579288) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82577848
	sub_82577848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579290"))) PPC_WEAK_FUNC(sub_82579290);
PPC_FUNC_IMPL(__imp__sub_82579290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9088
	ctx.r3.s64 = ctx.r11.s64 + -9088;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825792A0"))) PPC_WEAK_FUNC(sub_825792A0);
PPC_FUNC_IMPL(__imp__sub_825792A0) {
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
	// beq cr6,0x825792d8
	if (ctx.cr6.eq) goto loc_825792D8;
	// bl 0x823bc848
	ctx.lr = 0x825792C8;
	sub_823BC848(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825792d8
	if (!ctx.cr6.eq) goto loc_825792D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825792e4
	goto loc_825792E4;
loc_825792D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x825792E4;
	sub_82570278(ctx, base);
loc_825792E4:
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

__attribute__((alias("__imp__sub_82579300"))) PPC_WEAK_FUNC(sub_82579300);
PPC_FUNC_IMPL(__imp__sub_82579300) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc848
	sub_823BC848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579308"))) PPC_WEAK_FUNC(sub_82579308);
PPC_FUNC_IMPL(__imp__sub_82579308) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x82579328;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82579380
	if (ctx.cr0.eq) goto loc_82579380;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257933C;
	sub_82571E20(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,30624
	ctx.r11.s64 = ctx.r11.s64 + 30624;
	// addi r10,r10,31716
	ctx.r10.s64 = ctx.r10.s64 + 31716;
	// addi r9,r9,31768
	ctx.r9.s64 = ctx.r9.s64 + 31768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lfs f0,1584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// lfs f0,1588(r30)
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
	// b 0x82579384
	goto loc_82579384;
loc_82579380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82579384:
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

__attribute__((alias("__imp__sub_825793A0"))) PPC_WEAK_FUNC(sub_825793A0);
PPC_FUNC_IMPL(__imp__sub_825793A0) {
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
	// bl 0x823bc848
	ctx.lr = 0x825793C0;
	sub_823BC848(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825793d4
	if (ctx.cr6.eq) goto loc_825793D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x825793D4;
	sub_825702D8(ctx, base);
loc_825793D4:
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

__attribute__((alias("__imp__sub_825793F0"))) PPC_WEAK_FUNC(sub_825793F0);
PPC_FUNC_IMPL(__imp__sub_825793F0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,30624
	ctx.r11.s64 = ctx.r11.s64 + 30624;
	// addi r10,r10,31716
	ctx.r10.s64 = ctx.r10.s64 + 31716;
	// addi r9,r9,31768
	ctx.r9.s64 = ctx.r9.s64 + 31768;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82570708
	ctx.lr = 0x82579434;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579444
	if (ctx.cr0.eq) goto loc_82579444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82579444;
	sub_82332DB8(ctx, base);
loc_82579444:
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

__attribute__((alias("__imp__sub_82579460"))) PPC_WEAK_FUNC(sub_82579460);
PPC_FUNC_IMPL(__imp__sub_82579460) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6720, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579470"))) PPC_WEAK_FUNC(sub_82579470);
PPC_FUNC_IMPL(__imp__sub_82579470) {
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
	// bl 0x825705f8
	ctx.lr = 0x8257948C;
	sub_825705F8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,14112
	ctx.r8.s64 = 924844032;
	// addi r11,r11,30624
	ctx.r11.s64 = ctx.r11.s64 + 30624;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,31716
	ctx.r10.s64 = ctx.r10.s64 + 31716;
	// addi r9,r9,31768
	ctx.r9.s64 = ctx.r9.s64 + 31768;
	// ori r11,r8,53358
	ctx.r11.u64 = ctx.r8.u64 | 53358;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825794CC;
	sub_82410060(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r3,r11,-19620
	ctx.r3.s64 = ctx.r11.s64 + -19620;
	// bl 0x82816528
	ctx.lr = 0x825794D8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x825794E8;
	sub_82410060(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,32708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32708);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r8.u32);
	// lfs f13,17112(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,1584(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1584, temp.u32);
	// stfs f13,1588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// stfs f12,1592(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1592, temp.u32);
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

__attribute__((alias("__imp__sub_82579530"))) PPC_WEAK_FUNC(sub_82579530);
PPC_FUNC_IMPL(__imp__sub_82579530) {
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
	// bl 0x8257a570
	ctx.lr = 0x82579548;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-26248
	ctx.r8.s64 = ctx.r11.s64 + -26248;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82579588
	if (!ctx.cr6.gt) goto loc_82579588;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257956C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82579590
	if (ctx.cr6.eq) goto loc_82579590;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257956c
	if (ctx.cr6.lt) goto loc_8257956C;
loc_82579588:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82579590;
	sub_82410060(ctx, base);
loc_82579590:
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

__attribute__((alias("__imp__sub_825795A8"))) PPC_WEAK_FUNC(sub_825795A8);
PPC_FUNC_IMPL(__imp__sub_825795A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825795B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82579600
	if (ctx.cr6.eq) goto loc_82579600;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x824f6790
	ctx.lr = 0x825795D0;
	sub_824F6790(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579600
	if (ctx.cr0.eq) goto loc_82579600;
	// lwz r11,6720(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82579600
	if (ctx.cr6.eq) goto loc_82579600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82579610
	ctx.lr = 0x825795F0;
	sub_82579610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82579600
	if (ctx.cr0.eq) goto loc_82579600;
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82579600:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579610"))) PPC_WEAK_FUNC(sub_82579610);
PPC_FUNC_IMPL(__imp__sub_82579610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82579618;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61748
	ctx.lr = 0x82579620;
	__savefpr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// bl 0x824f6790
	ctx.lr = 0x82579634;
	sub_824F6790(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824defd8
	ctx.lr = 0x8257963C;
	sub_824DEFD8(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r4,6708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6708);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r24,1436(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1436);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82579658;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8257965C;
	sub_82333A20(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,1408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x829b9720
	ctx.lr = 0x82579674;
	sub_829B9720(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f29,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// beq 0x825796bc
	if (ctx.cr0.eq) goto loc_825796BC;
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
loc_825796BC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,1584(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	ctx.f13.f64 = double(temp.f32);
	// addi r22,r11,-24640
	ctx.r22.s64 = ctx.r11.s64 + -24640;
	// lfs f0,-4652(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -4652);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82579750
	if (!ctx.cr6.gt) goto loc_82579750;
	// bl 0x82a4cd78
	ctx.lr = 0x825796DC;
	sub_82A4CD78(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82579750
	if (!ctx.cr6.lt) goto loc_82579750;
	// lfs f0,1584(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// stfs f0,1656(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1656, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82579718
	if (ctx.cr6.eq) goto loc_82579718;
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x8257971c
	goto loc_8257971C;
loc_82579718:
	// stw r28,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
loc_8257971C:
	// stw r28,6720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6720, ctx.r28.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r11,-27552
	ctx.r11.s64 = ctx.r11.s64 + -27552;
	// lfs f1,-2660(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -2660);
	ctx.f1.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82509370
	ctx.lr = 0x82579748;
	sub_82509370(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257995c
	goto loc_8257995C;
loc_82579750:
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f28,-2660(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -2660);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// ble cr6,0x825798a8
	if (!ctx.cr6.gt) goto loc_825798A8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f30.f64 = double(temp.f32);
loc_82579770:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x825670f0
	ctx.lr = 0x8257977C;
	sub_825670F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x824f6790
	ctx.lr = 0x82579784;
	sub_824F6790(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82579854
	if (ctx.cr6.eq) goto loc_82579854;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82579854
	if (ctx.cr6.eq) goto loc_82579854;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82579854
	if (!ctx.cr6.eq) goto loc_82579854;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82579840
	if (ctx.cr6.eq) goto loc_82579840;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82579840
	if (!ctx.cr0.eq) goto loc_82579840;
	// lfs f13,624(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lfs f0,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,1588(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1588);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82579840
	if (!ctx.cr6.gt) goto loc_82579840;
	// lfs f13,1592(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1592);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82579840
	if (!ctx.cr6.lt) goto loc_82579840;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82579854
	if (!ctx.cr6.gt) goto loc_82579854;
	// lwz r11,6708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6708);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f1,-2660(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -2660);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,-27552
	ctx.r10.s64 = ctx.r10.s64 + -27552;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r11,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r11.u32);
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// stw r11,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r11.u32);
	// lfs f0,1584(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1656, temp.u32);
	// lwz r10,80(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x82579930
	goto loc_82579930;
loc_82579840:
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82579854
	if (!ctx.cr6.eq) goto loc_82579854;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82579864
	if (!ctx.cr6.eq) goto loc_82579864;
loc_82579854:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82579770
	if (ctx.cr6.lt) goto loc_82579770;
	// b 0x825798a8
	goto loc_825798A8;
loc_82579864:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257987C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,6720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6720, ctx.r28.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r11,r11,-27552
	ctx.r11.s64 = ctx.r11.s64 + -27552;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// bl 0x82509370
	ctx.lr = 0x825798A8;
	sub_82509370(ctx, base);
loc_825798A8:
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x824d7b70
	ctx.lr = 0x825798FC;
	sub_824D7B70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824d77f8
	ctx.lr = 0x8257990C;
	sub_824D77F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579958
	if (ctx.cr0.eq) goto loc_82579958;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lfs f0,1584(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1656(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1656, temp.u32);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-27552
	ctx.r9.s64 = ctx.r9.s64 + -27552;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82579930:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// ld r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r28,6720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6720, ctx.r28.u32);
	// bl 0x82509370
	ctx.lr = 0x82579954;
	sub_82509370(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82579958:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8257995C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61794
	ctx.lr = 0x82579968;
	__restfpr_28(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579970"))) PPC_WEAK_FUNC(sub_82579970);
PPC_FUNC_IMPL(__imp__sub_82579970) {
	PPC_FUNC_PROLOGUE();
	// b 0x82570860
	sub_82570860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579978"))) PPC_WEAK_FUNC(sub_82579978);
PPC_FUNC_IMPL(__imp__sub_82579978) {
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
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825799bc
	if (ctx.cr6.eq) goto loc_825799BC;
	// bl 0x823b4478
	ctx.lr = 0x82579998;
	sub_823B4478(ctx, base);
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
	ctx.lr = 0x825799B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x825799c0
	if (!ctx.cr0.eq) goto loc_825799C0;
loc_825799BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825799C0:
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

__attribute__((alias("__imp__sub_825799D8"))) PPC_WEAK_FUNC(sub_825799D8);
PPC_FUNC_IMPL(__imp__sub_825799D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825793f0
	sub_825793F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825799E0"))) PPC_WEAK_FUNC(sub_825799E0);
PPC_FUNC_IMPL(__imp__sub_825799E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825793a0
	sub_825793A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825799E8"))) PPC_WEAK_FUNC(sub_825799E8);
PPC_FUNC_IMPL(__imp__sub_825799E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825793f0
	sub_825793F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825799F0"))) PPC_WEAK_FUNC(sub_825799F0);
PPC_FUNC_IMPL(__imp__sub_825799F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9420
	ctx.r3.s64 = ctx.r11.s64 + -9420;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82579A00"))) PPC_WEAK_FUNC(sub_82579A00);
PPC_FUNC_IMPL(__imp__sub_82579A00) {
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
	// beq cr6,0x82579a38
	if (ctx.cr6.eq) goto loc_82579A38;
	// bl 0x823bb498
	ctx.lr = 0x82579A28;
	sub_823BB498(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82579a38
	if (!ctx.cr6.eq) goto loc_82579A38;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82579a50
	goto loc_82579A50;
loc_82579A38:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82570278
	ctx.lr = 0x82579A50;
	sub_82570278(ctx, base);
loc_82579A50:
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

__attribute__((alias("__imp__sub_82579A68"))) PPC_WEAK_FUNC(sub_82579A68);
PPC_FUNC_IMPL(__imp__sub_82579A68) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bb498
	sub_823BB498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579A70"))) PPC_WEAK_FUNC(sub_82579A70);
PPC_FUNC_IMPL(__imp__sub_82579A70) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x82579A8C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579aa4
	if (ctx.cr0.eq) goto loc_82579AA4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82579b30
	ctx.lr = 0x82579AA0;
	sub_82579B30(ctx, base);
	// b 0x82579aa8
	goto loc_82579AA8;
loc_82579AA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82579AA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82579abc
	if (ctx.cr6.eq) goto loc_82579ABC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82579ABC:
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

__attribute__((alias("__imp__sub_82579AD0"))) PPC_WEAK_FUNC(sub_82579AD0);
PPC_FUNC_IMPL(__imp__sub_82579AD0) {
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
	// bl 0x823bb498
	ctx.lr = 0x82579AF0;
	sub_823BB498(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82579b00
	if (!ctx.cr6.eq) goto loc_82579B00;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82579b18
	goto loc_82579B18;
loc_82579B00:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825702d8
	ctx.lr = 0x82579B18;
	sub_825702D8(ctx, base);
loc_82579B18:
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

__attribute__((alias("__imp__sub_82579B30"))) PPC_WEAK_FUNC(sub_82579B30);
PPC_FUNC_IMPL(__imp__sub_82579B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82579B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82579b80
	if (ctx.cr6.eq) goto loc_82579B80;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,16072
	ctx.r11.s64 = ctx.r11.s64 + 16072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82579b6c
	if (!ctx.cr6.eq) goto loc_82579B6C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82579b78
	goto loc_82579B78;
loc_82579B6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82579B78:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82571e20
	ctx.lr = 0x82579B80;
	sub_82571E20(ctx, base);
loc_82579B80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,31792
	ctx.r10.s64 = ctx.r10.s64 + 31792;
	// addi r9,r9,-32652
	ctx.r9.s64 = ctx.r9.s64 + -32652;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r8,-32600
	ctx.r8.s64 = ctx.r8.s64 + -32600;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579BF0"))) PPC_WEAK_FUNC(sub_82579BF0);
PPC_FUNC_IMPL(__imp__sub_82579BF0) {
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
	// bl 0x82570708
	ctx.lr = 0x82579C10;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579c20
	if (ctx.cr0.eq) goto loc_82579C20;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x82332db8
	ctx.lr = 0x82579C20;
	sub_82332DB8(ctx, base);
loc_82579C20:
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
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

__attribute__((alias("__imp__sub_82579C40"))) PPC_WEAK_FUNC(sub_82579C40);
PPC_FUNC_IMPL(__imp__sub_82579C40) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82579c70
	if (ctx.cr6.eq) goto loc_82579C70;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r11,r11,16072
	ctx.r11.s64 = ctx.r11.s64 + 16072;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x825705f8
	ctx.lr = 0x82579C70;
	sub_825705F8(ctx, base);
loc_82579C70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r10,r10,31792
	ctx.r10.s64 = ctx.r10.s64 + 31792;
	// addi r9,r9,-32652
	ctx.r9.s64 = ctx.r9.s64 + -32652;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,14112
	ctx.r7.s64 = 924844032;
	// addi r8,r8,-32600
	ctx.r8.s64 = ctx.r8.s64 + -32600;
	// ori r7,r7,53358
	ctx.r7.u64 = ctx.r7.u64 | 53358;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r10,1508(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1508);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,1492
	ctx.r3.s64 = ctx.r11.s64 + 1492;
	// bl 0x82410060
	ctx.lr = 0x82579CFC;
	sub_82410060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82579D18"))) PPC_WEAK_FUNC(sub_82579D18);
PPC_FUNC_IMPL(__imp__sub_82579D18) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x8257a570
	ctx.lr = 0x82579D40;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-25176
	ctx.r8.s64 = ctx.r11.s64 + -25176;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1484
	ctx.r3.s64 = ctx.r11.s64 + 1484;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82579d8c
	if (!ctx.cr6.gt) goto loc_82579D8C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82579D70:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82579d94
	if (ctx.cr6.eq) goto loc_82579D94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82579d70
	if (ctx.cr6.lt) goto loc_82579D70;
loc_82579D8C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82579D94;
	sub_82410060(ctx, base);
loc_82579D94:
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

__attribute__((alias("__imp__sub_82579DA8"))) PPC_WEAK_FUNC(sub_82579DA8);
PPC_FUNC_IMPL(__imp__sub_82579DA8) {
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
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x82579DC4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82579DC8;
	sub_824A0990(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82579df4
	if (ctx.cr0.eq) goto loc_82579DF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// bl 0x8257a298
	ctx.lr = 0x82579DDC;
	sub_8257A298(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579df4
	if (ctx.cr0.eq) goto loc_82579DF4;
	// lwz r11,1428(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1428);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82579df8
	if (!ctx.cr6.eq) goto loc_82579DF8;
loc_82579DF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82579DF8:
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

__attribute__((alias("__imp__sub_82579E10"))) PPC_WEAK_FUNC(sub_82579E10);
PPC_FUNC_IMPL(__imp__sub_82579E10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82579E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82579e5c
	if (ctx.cr6.eq) goto loc_82579E5C;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82579E34;
	sub_82414510(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579e44
	if (ctx.cr0.eq) goto loc_82579E44;
	// stw r30,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r30.u32);
loc_82579E44:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x82579E4C;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579e5c
	if (ctx.cr0.eq) goto loc_82579E5C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_82579E5C:
	// lwz r11,-32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82570930
	ctx.lr = 0x82579E74;
	sub_82570930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579E80"))) PPC_WEAK_FUNC(sub_82579E80);
PPC_FUNC_IMPL(__imp__sub_82579E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82579E88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
	// beq cr6,0x82579f5c
	if (ctx.cr6.eq) goto loc_82579F5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824defd8
	ctx.lr = 0x82579EB0;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579f5c
	if (ctx.cr0.eq) goto loc_82579F5C;
	// lwz r29,4080(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4080);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82579f24
	if (ctx.cr6.eq) goto loc_82579F24;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579EDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579f5c
	if (ctx.cr0.eq) goto loc_82579F5C;
	// lwz r31,4080(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4080);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82579f5c
	if (ctx.cr6.eq) goto loc_82579F5C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1456);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82579F04;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82579F08;
	sub_82333A20(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579f18
	if (ctx.cr0.eq) goto loc_82579F18;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82579f1c
	goto loc_82579F1C;
loc_82579F18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82579F1C:
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x82579f5c
	goto loc_82579F5C;
loc_82579F24:
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82579f5c
	if (ctx.cr0.eq) goto loc_82579F5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82579f5c
	if (ctx.cr0.eq) goto loc_82579F5C;
	// bl 0x824f1398
	ctx.lr = 0x82579F5C;
	sub_824F1398(ctx, base);
loc_82579F5C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f1398
	ctx.lr = 0x82579F64;
	sub_824F1398(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82579F70"))) PPC_WEAK_FUNC(sub_82579F70);
PPC_FUNC_IMPL(__imp__sub_82579F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82579F78;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r28,r30,-32
	ctx.r28.s64 = ctx.r30.s64 + -32;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r31,1584(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r11,1068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1068);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82579FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r25,1492(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r29,4080(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// beq 0x8257a0d4
	if (ctx.cr0.eq) goto loc_8257A0D4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x82579FDC;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x82579FE0;
	sub_824A0990(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r4,1764(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1764);
	// bl 0x829b9720
	ctx.lr = 0x82579FF4;
	sub_829B9720(ctx, base);
	// bl 0x824d4028
	ctx.lr = 0x82579FF8;
	sub_824D4028(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a034
	if (ctx.cr0.eq) goto loc_8257A034;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257a034
	if (ctx.cr6.eq) goto loc_8257A034;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r29,620
	ctx.r5.s64 = ctx.r29.s64 + 620;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A02C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257a09c
	if (ctx.cr0.eq) goto loc_8257A09C;
loc_8257A034:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8257a308
	ctx.lr = 0x8257A03C;
	sub_8257A308(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,-24(r30)
	PPC_STORE_U32(ctx.r30.u32 + -24, ctx.r11.u32);
	// bne 0x8257a05c
	if (!ctx.cr0.eq) goto loc_8257A05C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r22,1384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1384, ctx.r22.u32);
	// b 0x8257a09c
	goto loc_8257A09C;
loc_8257A05C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257a080
	if (!ctx.cr6.eq) goto loc_8257A080;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8257A078;
	sub_824F12A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r29,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r29.u32);
loc_8257A080:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// addi r4,r11,620
	ctx.r4.s64 = ctx.r11.s64 + 620;
	// lwz r11,464(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257A09C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r27,-24(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A0B4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A0B8;
	sub_824A0990(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8257a0c8
	if (ctx.cr6.eq) goto loc_8257A0C8;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// b 0x8257a0cc
	goto loc_8257A0CC;
loc_8257A0C8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8257A0CC:
	// stw r11,1764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1764, ctx.r11.u32);
	// b 0x8257a16c
	goto loc_8257A16C;
loc_8257A0D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8257a13c
	if (!ctx.cr6.eq) goto loc_8257A13C;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,620(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8257A0F0;
	sub_824F12A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,-32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r11,1056(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a12c
	if (ctx.cr0.eq) goto loc_8257A12C;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8257a130
	goto loc_8257A130;
loc_8257A12C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8257A130:
	// stw r11,1456(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1456, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,1460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1460, ctx.r11.u32);
loc_8257A13C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824defd8
	ctx.lr = 0x8257A144;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a16c
	if (ctx.cr0.eq) goto loc_8257A16C;
	// lwz r11,1548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// lwz r10,1544(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	// stw r11,1468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1468, ctx.r11.u32);
	// stw r10,1464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1464, ctx.r10.u32);
	// lfs f0,1772(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	// stfs f0,1480(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 1480, temp.u32);
	// stw r11,1472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1472, ctx.r11.u32);
loc_8257A16C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,-28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// lwz r9,-32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// lwz r9,1072(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1072);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8257A1A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1408(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1408);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8257A1BC;
	sub_829B9720(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8257a284
	if (ctx.cr0.eq) goto loc_8257A284;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r29,r6,620
	ctx.r29.s64 = ctx.r6.s64 + 620;
	// addi r27,r31,620
	ctx.r27.s64 = ctx.r31.s64 + 620;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A1EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257a284
	if (!ctx.cr0.eq) goto loc_8257A284;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x8257a244
	if (!ctx.cr6.eq) goto loc_8257A244;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,17580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8257a244
	if (ctx.cr6.lt) goto loc_8257A244;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8257A244:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257A24C;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a25c
	if (ctx.cr0.eq) goto loc_8257A25C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r26,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r26.u32);
loc_8257A25C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,1472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1472);
	// lwzx r22,r11,r9
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r10.u32);
	// b 0x8257a288
	goto loc_8257A288;
loc_8257A284:
	// stw r22,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r22.u32);
loc_8257A288:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A298"))) PPC_WEAK_FUNC(sub_8257A298);
PPC_FUNC_IMPL(__imp__sub_8257A298) {
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
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8257A2B8;
	sub_829B9720(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257a2f0
	if (ctx.cr0.eq) goto loc_8257A2F0;
	// bl 0x82569060
	ctx.lr = 0x8257A2C4;
	sub_82569060(ctx, base);
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
	ctx.lr = 0x8257A2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257a2e8
	if (!ctx.cr0.eq) goto loc_8257A2E8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257A2E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8257a2f4
	goto loc_8257A2F4;
loc_8257A2F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257A2F4:
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

__attribute__((alias("__imp__sub_8257A308"))) PPC_WEAK_FUNC(sub_8257A308);
PPC_FUNC_IMPL(__imp__sub_8257A308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257A310;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A330;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A334;
	sub_824A0990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1756(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1756);
	// bl 0x8257a298
	ctx.lr = 0x8257A344;
	sub_8257A298(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1488(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A35C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A360;
	sub_824A0990(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,1764(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1764);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8257A374;
	sub_829B9720(ctx, base);
	// bl 0x824d4028
	ctx.lr = 0x8257A378;
	sub_824D4028(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257a3bc
	if (ctx.cr6.eq) goto loc_8257A3BC;
	// lwz r8,1428(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257a3bc
	if (!ctx.cr6.gt) goto loc_8257A3BC;
	// lwz r9,1424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
loc_8257A398:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8257a3b8
	if (ctx.cr6.eq) goto loc_8257A3B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8257a398
	if (ctx.cr6.lt) goto loc_8257A398;
	// b 0x8257a3bc
	goto loc_8257A3BC;
loc_8257A3B8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8257A3BC:
	// lwz r11,1760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1760);
	// lwz r9,1428(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1428);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8257a3e8
	if (!ctx.cr6.lt) goto loc_8257A3E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8257a3e8
	if (ctx.cr6.lt) goto loc_8257A3E8;
	// lwz r10,1424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r10,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8257a428
	goto loc_8257A428;
loc_8257A3E8:
	// lwz r11,1408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1408);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8257a418
	if (!ctx.cr6.eq) goto loc_8257A418;
	// lwz r11,1760(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1760);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,1760(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1760, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8257a428
	goto loc_8257A428;
loc_8257A418:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8257a428
	if (!ctx.cr6.eq) goto loc_8257A428;
	// lwz r11,1424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1424);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8257A428:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A438"))) PPC_WEAK_FUNC(sub_8257A438);
PPC_FUNC_IMPL(__imp__sub_8257A438) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82579bf0
	sub_82579BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A448"))) PPC_WEAK_FUNC(sub_8257A448);
PPC_FUNC_IMPL(__imp__sub_8257A448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82579bf0
	sub_82579BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A458"))) PPC_WEAK_FUNC(sub_8257A458);
PPC_FUNC_IMPL(__imp__sub_8257A458) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579bf0
	sub_82579BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A468"))) PPC_WEAK_FUNC(sub_8257A468);
PPC_FUNC_IMPL(__imp__sub_8257A468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579e80
	sub_82579E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A478"))) PPC_WEAK_FUNC(sub_8257A478);
PPC_FUNC_IMPL(__imp__sub_8257A478) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579f70
	sub_82579F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A488"))) PPC_WEAK_FUNC(sub_8257A488);
PPC_FUNC_IMPL(__imp__sub_8257A488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825799f0
	sub_825799F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A498"))) PPC_WEAK_FUNC(sub_8257A498);
PPC_FUNC_IMPL(__imp__sub_8257A498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82580100
	sub_82580100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4A8"))) PPC_WEAK_FUNC(sub_8257A4A8);
PPC_FUNC_IMPL(__imp__sub_8257A4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82579ad0
	sub_82579AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4B8"))) PPC_WEAK_FUNC(sub_8257A4B8);
PPC_FUNC_IMPL(__imp__sub_8257A4B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579ad0
	sub_82579AD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4C8"))) PPC_WEAK_FUNC(sub_8257A4C8);
PPC_FUNC_IMPL(__imp__sub_8257A4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579e10
	sub_82579E10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4D8"))) PPC_WEAK_FUNC(sub_8257A4D8);
PPC_FUNC_IMPL(__imp__sub_8257A4D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579a00
	sub_82579A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4E8"))) PPC_WEAK_FUNC(sub_8257A4E8);
PPC_FUNC_IMPL(__imp__sub_8257A4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579d18
	sub_82579D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A4F8"))) PPC_WEAK_FUNC(sub_8257A4F8);
PPC_FUNC_IMPL(__imp__sub_8257A4F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579a68
	sub_82579A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A508"))) PPC_WEAK_FUNC(sub_8257A508);
PPC_FUNC_IMPL(__imp__sub_8257A508) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82579a70
	sub_82579A70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257A518"))) PPC_WEAK_FUNC(sub_8257A518);
PPC_FUNC_IMPL(__imp__sub_8257A518) {
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A53C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1036);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257A558;
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

__attribute__((alias("__imp__sub_8257A570"))) PPC_WEAK_FUNC(sub_8257A570);
PPC_FUNC_IMPL(__imp__sub_8257A570) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r3,1516
	ctx.r31.s64 = ctx.r3.s64 + 1516;
	// addi r8,r11,-22816
	ctx.r8.s64 = ctx.r11.s64 + -22816;
	// lwz r11,1532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1532);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257a5c0
	if (!ctx.cr6.gt) goto loc_8257A5C0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257A5A4:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257a5cc
	if (ctx.cr6.eq) goto loc_8257A5CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257a5a4
	if (ctx.cr6.lt) goto loc_8257A5A4;
loc_8257A5C0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257A5CC;
	sub_82410060(ctx, base);
loc_8257A5CC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-22704
	ctx.r8.s64 = ctx.r11.s64 + -22704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257a608
	if (!ctx.cr6.gt) goto loc_8257A608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257A5EC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257a614
	if (ctx.cr6.eq) goto loc_8257A614;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257a5ec
	if (ctx.cr6.lt) goto loc_8257A5EC;
loc_8257A608:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257A614;
	sub_82410060(ctx, base);
loc_8257A614:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-22664
	ctx.r8.s64 = ctx.r11.s64 + -22664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257a650
	if (!ctx.cr6.gt) goto loc_8257A650;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257A634:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257a65c
	if (ctx.cr6.eq) goto loc_8257A65C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257a634
	if (ctx.cr6.lt) goto loc_8257A634;
loc_8257A650:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257A65C;
	sub_82410060(ctx, base);
loc_8257A65C:
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

__attribute__((alias("__imp__sub_8257A670"))) PPC_WEAK_FUNC(sub_8257A670);
PPC_FUNC_IMPL(__imp__sub_8257A670) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A680"))) PPC_WEAK_FUNC(sub_8257A680);
PPC_FUNC_IMPL(__imp__sub_8257A680) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r3,r31,1540
	ctx.r3.s64 = ctx.r31.s64 + 1540;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8257A6B0;
	sub_82332D50(ctx, base);
	// lwz r11,1552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1552);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257a6c8
	if (ctx.cr0.eq) goto loc_8257A6C8;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_8257A6C8:
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

__attribute__((alias("__imp__sub_8257A6E0"))) PPC_WEAK_FUNC(sub_8257A6E0);
PPC_FUNC_IMPL(__imp__sub_8257A6E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,1508(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1508);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8257a748
	if (!ctx.cr6.gt) goto loc_8257A748;
	// lwz r7,1504(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1504);
loc_8257A6F4:
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8257a738
	if (ctx.cr6.eq) goto loc_8257A738;
	// lwz r9,1948(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8257a730
	if (!ctx.cr6.gt) goto loc_8257A730;
	// lwz r11,1944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1944);
loc_8257A714:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8257a738
	if (ctx.cr6.eq) goto loc_8257A738;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8257a714
	if (ctx.cr6.lt) goto loc_8257A714;
loc_8257A730:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8257A738:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8257a6f4
	if (ctx.cr6.lt) goto loc_8257A6F4;
loc_8257A748:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A750"))) PPC_WEAK_FUNC(sub_8257A750);
PPC_FUNC_IMPL(__imp__sub_8257A750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1568(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257a76c
	if (ctx.cr6.eq) goto loc_8257A76C;
	// lwz r10,1456(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1456);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_8257A76C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A778"))) PPC_WEAK_FUNC(sub_8257A778);
PPC_FUNC_IMPL(__imp__sub_8257A778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1412(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257a794
	if (ctx.cr6.eq) goto loc_8257A794;
	// lwz r11,1416(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1416);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8257A794:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A7A0"))) PPC_WEAK_FUNC(sub_8257A7A0);
PPC_FUNC_IMPL(__imp__sub_8257A7A0) {
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
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A7B4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A7B8;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a7d0
	if (ctx.cr0.eq) goto loc_8257A7D0;
	// lwz r11,1904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257a7d4
	if (!ctx.cr6.eq) goto loc_8257A7D4;
loc_8257A7D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257A7D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A7E8"))) PPC_WEAK_FUNC(sub_8257A7E8);
PPC_FUNC_IMPL(__imp__sub_8257A7E8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257a80c
	if (ctx.cr6.eq) goto loc_8257A80C;
	// lwz r11,1584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a80c
	if (ctx.cr6.eq) goto loc_8257A80C;
	// lwz r11,4276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4276);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8257A80C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A818"))) PPC_WEAK_FUNC(sub_8257A818);
PPC_FUNC_IMPL(__imp__sub_8257A818) {
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
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A82C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A830;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a848
	if (ctx.cr0.eq) goto loc_8257A848;
	// lwz r11,1444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257a84c
	if (ctx.cr6.eq) goto loc_8257A84C;
loc_8257A848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257A84C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A860"))) PPC_WEAK_FUNC(sub_8257A860);
PPC_FUNC_IMPL(__imp__sub_8257A860) {
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
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257A87C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257A880;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257a92c
	if (ctx.cr0.eq) goto loc_8257A92C;
	// lwz r5,1904(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8257a92c
	if (!ctx.cr6.gt) goto loc_8257A92C;
	// lwz r7,1900(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
loc_8257A89C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257a91c
	if (ctx.cr6.eq) goto loc_8257A91C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257a91c
	if (ctx.cr6.eq) goto loc_8257A91C;
	// lwz r8,1616(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1616);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257a91c
	if (!ctx.cr6.gt) goto loc_8257A91C;
	// lwz r10,1612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_8257A8C8:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8257a8e8
	if (ctx.cr6.eq) goto loc_8257A8E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8257a8c8
	if (ctx.cr6.lt) goto loc_8257A8C8;
	// b 0x8257a91c
	goto loc_8257A91C;
loc_8257A8E8:
	// lwz r9,1504(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1504);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8257a91c
	if (!ctx.cr6.gt) goto loc_8257A91C;
	// lwz r11,1500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1500);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_8257A900:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8257a944
	if (!ctx.cr6.eq) goto loc_8257A944;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8257a900
	if (ctx.cr6.lt) goto loc_8257A900;
loc_8257A91C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8257a89c
	if (ctx.cr6.lt) goto loc_8257A89C;
loc_8257A92C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257A930:
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
loc_8257A944:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257a930
	goto loc_8257A930;
}

__attribute__((alias("__imp__sub_8257A950"))) PPC_WEAK_FUNC(sub_8257A950);
PPC_FUNC_IMPL(__imp__sub_8257A950) {
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
	// bl 0x8257a860
	ctx.lr = 0x8257A960;
	sub_8257A860(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257A978"))) PPC_WEAK_FUNC(sub_8257A978);
PPC_FUNC_IMPL(__imp__sub_8257A978) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1584(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257aa24
	if (ctx.cr6.eq) goto loc_8257AA24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824defd8
	ctx.lr = 0x8257A9A4;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257aa24
	if (ctx.cr0.eq) goto loc_8257AA24;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,1524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r3,1928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1928);
	// lfs f0,-24640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,3116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3116);
	ctx.f2.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824d7b70
	ctx.lr = 0x8257AA18;
	sub_824D7B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8257aa28
	if (!ctx.cr0.eq) goto loc_8257AA28;
loc_8257AA24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257AA28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AA40"))) PPC_WEAK_FUNC(sub_8257AA40);
PPC_FUNC_IMPL(__imp__sub_8257AA40) {
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
	// bl 0x8257a860
	ctx.lr = 0x8257AA50;
	sub_8257A860(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,100
	ctx.r11.u64 = ctx.r11.u64 & 100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r3,r11,100
	ctx.xer.ca = ctx.r11.u32 <= 100;
	ctx.r3.s64 = 100 - ctx.r11.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AA70"))) PPC_WEAK_FUNC(sub_8257AA70);
PPC_FUNC_IMPL(__imp__sub_8257AA70) {
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
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257AA8C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257AA90;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ab1c
	if (ctx.cr0.eq) goto loc_8257AB1C;
	// lwz r5,1904(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8257ab1c
	if (!ctx.cr6.gt) goto loc_8257AB1C;
	// lwz r7,1900(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
loc_8257AAAC:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8257ab0c
	if (ctx.cr6.eq) goto loc_8257AB0C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257ab0c
	if (ctx.cr6.eq) goto loc_8257AB0C;
	// lwz r8,1616(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1616);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257ab0c
	if (!ctx.cr6.gt) goto loc_8257AB0C;
	// lwz r11,1612(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1612);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_8257AAD8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8257aaf8
	if (ctx.cr6.eq) goto loc_8257AAF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8257aad8
	if (ctx.cr6.lt) goto loc_8257AAD8;
	// b 0x8257ab0c
	goto loc_8257AB0C;
loc_8257AAF8:
	// lwz r11,1452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8257ab34
	if (ctx.cr6.eq) goto loc_8257AB34;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8257ab34
	if (ctx.cr6.eq) goto loc_8257AB34;
loc_8257AB0C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8257aaac
	if (ctx.cr6.lt) goto loc_8257AAAC;
loc_8257AB1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257AB20:
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
loc_8257AB34:
	// li r3,100
	ctx.r3.s64 = 100;
	// b 0x8257ab20
	goto loc_8257AB20;
}

__attribute__((alias("__imp__sub_8257AB40"))) PPC_WEAK_FUNC(sub_8257AB40);
PPC_FUNC_IMPL(__imp__sub_8257AB40) {
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
	// bl 0x8257aa70
	ctx.lr = 0x8257AB50;
	sub_8257AA70(ctx, base);
	// subfic r3,r3,100
	ctx.xer.ca = ctx.r3.u32 <= 100;
	ctx.r3.s64 = 100 - ctx.r3.s64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257AB68"))) PPC_WEAK_FUNC(sub_8257AB68);
PPC_FUNC_IMPL(__imp__sub_8257AB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,1584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4280);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f13,4292(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4292);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,17100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257ABD0"))) PPC_WEAK_FUNC(sub_8257ABD0);
PPC_FUNC_IMPL(__imp__sub_8257ABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8257ABD8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61748
	ctx.lr = 0x8257ABE0;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r28,1584(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1584);
	// bl 0x829c35d8
	ctx.lr = 0x8257ABFC;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257AC00;
	sub_824A0990(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257ad88
	if (ctx.cr6.eq) goto loc_8257AD88;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257ad88
	if (ctx.cr6.eq) goto loc_8257AD88;
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257ad88
	if (!ctx.cr6.gt) goto loc_8257AD88;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8257AC28:
	// lwz r11,1432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1432);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ac6c
	if (ctx.cr6.eq) goto loc_8257AC6C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8257ac6c
	if (!ctx.cr6.eq) goto loc_8257AC6C;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ac68
	if (ctx.cr0.eq) goto loc_8257AC68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AC60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8257ac6c
	goto loc_8257AC6C;
loc_8257AC68:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8257AC6C:
	// lwz r11,1436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1436);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257ac28
	if (ctx.cr6.lt) goto loc_8257AC28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257ad88
	if (ctx.cr6.eq) goto loc_8257AD88;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,1524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r3,1928(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1928);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f2,1820(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1820);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f1,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824d7b70
	ctx.lr = 0x8257ACF0;
	sub_824D7B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257ad88
	if (ctx.cr0.eq) goto loc_8257AD88;
	// lfs f0,620(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x829bed50
	ctx.lr = 0x8257AD24;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f28,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8257AD34;
	sub_829BED50(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257ad64
	if (!ctx.cr6.lt) goto loc_8257AD64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8257AD64:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,20364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20364);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r25,100
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 100, ctx.xer);
	// ble cr6,0x8257ad88
	if (!ctx.cr6.gt) goto loc_8257AD88;
	// li r25,100
	ctx.r25.s64 = 100;
loc_8257AD88:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82a61794
	ctx.lr = 0x8257AD98;
	__restfpr_28(ctx, base);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257ADA0"))) PPC_WEAK_FUNC(sub_8257ADA0);
PPC_FUNC_IMPL(__imp__sub_8257ADA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8257ADA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r30,1584(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1584);
	// bl 0x829c35d8
	ctx.lr = 0x8257ADC4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257ADC8;
	sub_824A0990(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257af68
	if (ctx.cr6.eq) goto loc_8257AF68;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257af68
	if (ctx.cr6.eq) goto loc_8257AF68;
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257af68
	if (!ctx.cr6.gt) goto loc_8257AF68;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8257ADF0:
	// lwz r11,1432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1432);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ae34
	if (ctx.cr6.eq) goto loc_8257AE34;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,1608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1608);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8257ae34
	if (!ctx.cr6.eq) goto loc_8257AE34;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ae30
	if (ctx.cr0.eq) goto loc_8257AE30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257AE28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8257ae34
	goto loc_8257AE34;
loc_8257AE30:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_8257AE34:
	// lwz r11,1436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1436);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257adf0
	if (ctx.cr6.lt) goto loc_8257ADF0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257af68
	if (ctx.cr6.eq) goto loc_8257AF68;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,1524(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1524);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1928(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1928);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f2,3108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3108);
	ctx.f2.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,3112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3112);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824d7b70
	ctx.lr = 0x8257AEB0;
	sub_824D7B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257af68
	if (ctx.cr0.eq) goto loc_8257AF68;
	// lfs f13,624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,18032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18032);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8257af04
	if (!ctx.cr6.gt) goto loc_8257AF04;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
loc_8257AF04:
	// lfs f13,3120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3120);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// bge cr6,0x8257af20
	if (!ctx.cr6.lt) goto loc_8257AF20;
	// li r11,100
	ctx.r11.s64 = 100;
loc_8257AF20:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257af2c
	if (!ctx.cr6.eq) goto loc_8257AF2C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257AF2C:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r10
	ctx.r9.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twllei r10,0
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 100, ctx.xer);
	// twlgei r11,-1
	// ble cr6,0x8257af68
	if (!ctx.cr6.gt) goto loc_8257AF68;
	// li r27,100
	ctx.r27.s64 = 100;
loc_8257AF68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257AF78"))) PPC_WEAK_FUNC(sub_8257AF78);
PPC_FUNC_IMPL(__imp__sub_8257AF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257AF80;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x8257b018
	if (ctx.cr6.eq) goto loc_8257B018;
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257AFB0;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257AFB4;
	sub_824A0990(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257b018
	if (ctx.cr6.eq) goto loc_8257B018;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257b018
	if (ctx.cr6.eq) goto loc_8257B018;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825712e8
	ctx.lr = 0x8257AFD8;
	sub_825712E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257b018
	if (ctx.cr0.eq) goto loc_8257B018;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8257b018
	if (ctx.cr6.lt) goto loc_8257B018;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,11
	ctx.r11.s64 = 720896;
	// ori r11,r11,29104
	ctx.r11.u64 = ctx.r11.u64 | 29104;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r11,r10,r11
	ctx.r11.s32 = ctx.r10.s32 / ctx.r11.s32;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// ble cr6,0x8257b018
	if (!ctx.cr6.gt) goto loc_8257B018;
	// li r29,100
	ctx.r29.s64 = 100;
loc_8257B018:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B028"))) PPC_WEAK_FUNC(sub_8257B028);
PPC_FUNC_IMPL(__imp__sub_8257B028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9108
	ctx.r3.s64 = ctx.r11.s64 + -9108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B038"))) PPC_WEAK_FUNC(sub_8257B038);
PPC_FUNC_IMPL(__imp__sub_8257B038) {
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
	// beq cr6,0x8257b070
	if (ctx.cr6.eq) goto loc_8257B070;
	// bl 0x823bc708
	ctx.lr = 0x8257B060;
	sub_823BC708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257b070
	if (!ctx.cr6.eq) goto loc_8257B070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257b07c
	goto loc_8257B07C;
loc_8257B070:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257B07C;
	sub_82570278(ctx, base);
loc_8257B07C:
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

__attribute__((alias("__imp__sub_8257B098"))) PPC_WEAK_FUNC(sub_8257B098);
PPC_FUNC_IMPL(__imp__sub_8257B098) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc708
	sub_823BC708(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B0A0"))) PPC_WEAK_FUNC(sub_8257B0A0);
PPC_FUNC_IMPL(__imp__sub_8257B0A0) {
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
	// li r3,1712
	ctx.r3.s64 = 1712;
	// bl 0x82833108
	ctx.lr = 0x8257B0BC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257b0d0
	if (ctx.cr0.eq) goto loc_8257B0D0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8257b138
	ctx.lr = 0x8257B0CC;
	sub_8257B138(ctx, base);
	// b 0x8257b0d4
	goto loc_8257B0D4;
loc_8257B0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257B0D4:
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

__attribute__((alias("__imp__sub_8257B0E8"))) PPC_WEAK_FUNC(sub_8257B0E8);
PPC_FUNC_IMPL(__imp__sub_8257B0E8) {
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
	// bl 0x823bc708
	ctx.lr = 0x8257B108;
	sub_823BC708(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257b11c
	if (ctx.cr6.eq) goto loc_8257B11C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257B11C;
	sub_825702D8(ctx, base);
loc_8257B11C:
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

__attribute__((alias("__imp__sub_8257B138"))) PPC_WEAK_FUNC(sub_8257B138);
PPC_FUNC_IMPL(__imp__sub_8257B138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8257B140;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257B150;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// addi r10,r10,-31484
	ctx.r10.s64 = ctx.r10.s64 + -31484;
	// addi r9,r9,-31432
	ctx.r9.s64 = ctx.r9.s64 + -31432;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// stw r9,396(r29)
	PPC_STORE_U32(ctx.r29.u32 + 396, ctx.r9.u32);
	// addi r11,r29,1584
	ctx.r11.s64 = ctx.r29.s64 + 1584;
	// stw r8,1584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1584, ctx.r8.u32);
	// addi r4,r27,1588
	ctx.r4.s64 = ctx.r27.s64 + 1588;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8257B194;
	sub_82A4EA80(ctx, base);
	// addi r4,r27,1616
	ctx.r4.s64 = ctx.r27.s64 + 1616;
	// addi r3,r29,1616
	ctx.r3.s64 = ctx.r29.s64 + 1616;
	// bl 0x82873b58
	ctx.lr = 0x8257B1A0;
	sub_82873B58(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,1640
	ctx.r31.s64 = ctx.r29.s64 + 1640;
	// addi r28,r27,1640
	ctx.r28.s64 = ctx.r27.s64 + 1640;
	// stw r30,1648(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1648, ctx.r30.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r30,1652(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1652, ctx.r30.u32);
	// stw r30,1656(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1656, ctx.r30.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// stw r11,1644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1644, ctx.r11.u32);
	// stw r30,1660(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1660, ctx.r30.u32);
	// stw r30,1640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1640, ctx.r30.u32);
	// beq cr6,0x8257b268
	if (ctx.cr6.eq) goto loc_8257B268;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257b268
	if (!ctx.cr6.gt) goto loc_8257B268;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b1fc
	if (ctx.cr0.eq) goto loc_8257B1FC;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x8257B1FC;
	sub_82332C38(ctx, base);
loc_8257B1FC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257b268
	if (!ctx.cr6.gt) goto loc_8257B268;
loc_8257B20C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332d50
	ctx.lr = 0x8257B220;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b254
	if (ctx.cr0.eq) goto loc_8257B254;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r10,5
	ctx.r10.s64 = 5;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8257B240:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8257b240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257B240;
loc_8257B254:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257b20c
	if (ctx.cr6.lt) goto loc_8257B20C;
loc_8257B268:
	// addi r4,r27,1664
	ctx.r4.s64 = ctx.r27.s64 + 1664;
	// addi r3,r29,1664
	ctx.r3.s64 = ctx.r29.s64 + 1664;
	// bl 0x82873b58
	ctx.lr = 0x8257B274;
	sub_82873B58(ctx, base);
	// addi r4,r27,1688
	ctx.r4.s64 = ctx.r27.s64 + 1688;
	// addi r3,r29,1688
	ctx.r3.s64 = ctx.r29.s64 + 1688;
	// bl 0x8282f630
	ctx.lr = 0x8257B280;
	sub_8282F630(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B290"))) PPC_WEAK_FUNC(sub_8257B290);
PPC_FUNC_IMPL(__imp__sub_8257B290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257B298;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,1688
	ctx.r3.s64 = ctx.r31.s64 + 1688;
	// bl 0x82400f38
	ctx.lr = 0x8257B2AC;
	sub_82400F38(ctx, base);
	// addi r3,r31,1664
	ctx.r3.s64 = ctx.r31.s64 + 1664;
	// bl 0x8239d768
	ctx.lr = 0x8257B2B4;
	sub_8239D768(ctx, base);
	// addi r30,r31,1640
	ctx.r30.s64 = ctx.r31.s64 + 1640;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,1656(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// li r6,20
	ctx.r6.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x8257B2D0;
	sub_82332CA8(ctx, base);
	// lwz r3,1652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257b2e0
	if (ctx.cr6.eq) goto loc_8257B2E0;
	// bl 0x82332db8
	ctx.lr = 0x8257B2E0;
	sub_82332DB8(ctx, base);
loc_8257B2E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,1616
	ctx.r3.s64 = ctx.r31.s64 + 1616;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8239d768
	ctx.lr = 0x8257B2F8;
	sub_8239D768(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29556
	ctx.r11.s64 = ctx.r11.s64 + -29556;
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// bl 0x82570708
	ctx.lr = 0x8257B30C;
	sub_82570708(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257b31c
	if (ctx.cr0.eq) goto loc_8257B31C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8257B31C;
	sub_82332DB8(ctx, base);
loc_8257B31C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B328"))) PPC_WEAK_FUNC(sub_8257B328);
PPC_FUNC_IMPL(__imp__sub_8257B328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257B330;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825705f8
	ctx.lr = 0x8257B33C;
	sub_825705F8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// addi r10,r10,-31484
	ctx.r10.s64 = ctx.r10.s64 + -31484;
	// addi r9,r9,-31432
	ctx.r9.s64 = ctx.r9.s64 + -31432;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,1584
	ctx.r11.s64 = ctx.r31.s64 + 1584;
	// stw r8,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x8257B378;
	sub_8312E7DC(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,14112
	ctx.r10.s64 = 924844032;
	// stw r30,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r30.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r11.u32);
	// stw r30,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r30.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// ori r10,r10,53358
	ctx.r10.u64 = ctx.r10.u64 | 53358;
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// addi r29,r31,1492
	ctx.r29.s64 = ctx.r31.s64 + 1492;
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r30.u32);
	// stw r30,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r30.u32);
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r30,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r30.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// stw r30,1672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1672, ctx.r30.u32);
	// stw r30,1676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1676, ctx.r30.u32);
	// stw r30,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r30.u32);
	// stw r30,1684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1684, ctx.r30.u32);
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// stw r8,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r8.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82410060
	ctx.lr = 0x8257B404;
	sub_82410060(ctx, base);
	// lis r11,30312
	ctx.r11.s64 = 1986527232;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,31343
	ctx.r11.u64 = ctx.r11.u64 | 31343;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8257B41C;
	sub_82410060(ctx, base);
	// lis r11,19106
	ctx.r11.s64 = 1252130816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,17460
	ctx.r11.u64 = ctx.r11.u64 | 17460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8257B434;
	sub_82410060(ctx, base);
	// stw r30,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B448"))) PPC_WEAK_FUNC(sub_8257B448);
PPC_FUNC_IMPL(__imp__sub_8257B448) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257B460;
	sub_8257A570(ctx, base);
	// addi r31,r31,1516
	ctx.r31.s64 = ctx.r31.s64 + 1516;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,-18688
	ctx.r8.s64 = ctx.r11.s64 + -18688;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257b4a0
	if (!ctx.cr6.gt) goto loc_8257B4A0;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257B484:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257b4ac
	if (ctx.cr6.eq) goto loc_8257B4AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257b484
	if (ctx.cr6.lt) goto loc_8257B484;
loc_8257B4A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257B4AC;
	sub_82410060(ctx, base);
loc_8257B4AC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-18664
	ctx.r8.s64 = ctx.r11.s64 + -18664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257b4e8
	if (!ctx.cr6.gt) goto loc_8257B4E8;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257B4CC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257b4f4
	if (ctx.cr6.eq) goto loc_8257B4F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257b4cc
	if (ctx.cr6.lt) goto loc_8257B4CC;
loc_8257B4E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257B4F4;
	sub_82410060(ctx, base);
loc_8257B4F4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r11,-22152
	ctx.r8.s64 = ctx.r11.s64 + -22152;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257b530
	if (!ctx.cr6.gt) goto loc_8257B530;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_8257B514:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257b53c
	if (ctx.cr6.eq) goto loc_8257B53C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257b514
	if (ctx.cr6.lt) goto loc_8257B514;
loc_8257B530:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x8257B53C;
	sub_82410060(ctx, base);
loc_8257B53C:
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

__attribute__((alias("__imp__sub_8257B550"))) PPC_WEAK_FUNC(sub_8257B550);
PPC_FUNC_IMPL(__imp__sub_8257B550) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-18496
	ctx.r4.s64 = ctx.r9.s64 + -18496;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257B578"))) PPC_WEAK_FUNC(sub_8257B578);
PPC_FUNC_IMPL(__imp__sub_8257B578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257B580;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82919328
	ctx.lr = 0x8257B5B4;
	sub_82919328(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r30,84(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8257b5fc
	if (ctx.cr6.eq) goto loc_8257B5FC;
loc_8257B5CC:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257b5e8
	if (!ctx.cr6.eq) goto loc_8257B5E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,1616
	ctx.r3.s64 = ctx.r29.s64 + 1616;
	// bl 0x82410060
	ctx.lr = 0x8257B5E8;
	sub_82410060(ctx, base);
loc_8257B5E8:
	// lwz r30,1720(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x8257b5cc
	if (!ctx.cr6.eq) goto loc_8257B5CC;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8257B5FC:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B614;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// addi r10,r10,-17384
	ctx.r10.s64 = ctx.r10.s64 + -17384;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-25080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8257c6a8
	ctx.lr = 0x8257B648;
	sub_8257C6A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f1,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r10,-17048
	ctx.r11.s64 = ctx.r10.s64 + -17048;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8257c6a8
	ctx.lr = 0x8257B674;
	sub_8257C6A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82570860
	ctx.lr = 0x8257B67C;
	sub_82570860(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B688"))) PPC_WEAK_FUNC(sub_8257B688);
PPC_FUNC_IMPL(__imp__sub_8257B688) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-17384
	ctx.r4.s64 = ctx.r11.s64 + -17384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B6C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-17048
	ctx.r4.s64 = ctx.r11.s64 + -17048;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd978
	ctx.lr = 0x8257B6E4;
	sub_829BD978(ctx, base);
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

__attribute__((alias("__imp__sub_8257B700"))) PPC_WEAK_FUNC(sub_8257B700);
PPC_FUNC_IMPL(__imp__sub_8257B700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1632(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1632);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257B718"))) PPC_WEAK_FUNC(sub_8257B718);
PPC_FUNC_IMPL(__imp__sub_8257B718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257B720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257b7a8
	if (ctx.cr6.eq) goto loc_8257B7A8;
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r30,r31,1584
	ctx.r30.s64 = ctx.r31.s64 + 1584;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B754;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1680);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257b784
	if (!ctx.cr6.gt) goto loc_8257B784;
	// lwz r9,1676(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1676);
loc_8257B768:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8257b7b4
	if (ctx.cr6.eq) goto loc_8257B7B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257b768
	if (ctx.cr6.lt) goto loc_8257B768;
loc_8257B784:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_8257B788:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B79C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8257b7a8
	if (!ctx.cr6.eq) goto loc_8257B7A8;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8257B7A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_8257B7B4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8257b788
	goto loc_8257B788;
}

__attribute__((alias("__imp__sub_8257B7C0"))) PPC_WEAK_FUNC(sub_8257B7C0);
PPC_FUNC_IMPL(__imp__sub_8257B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8257B7C8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61748
	ctx.lr = 0x8257B7D0;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,1488(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1488);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r29,1584(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1584);
	// bl 0x829c35d8
	ctx.lr = 0x8257B7EC;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257B7F0;
	sub_824A0990(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257b978
	if (ctx.cr6.eq) goto loc_8257B978;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257b978
	if (ctx.cr6.eq) goto loc_8257B978;
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257b978
	if (!ctx.cr6.gt) goto loc_8257B978;
loc_8257B814:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825670f0
	ctx.lr = 0x8257B820;
	sub_825670F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257b858
	if (ctx.cr0.eq) goto loc_8257B858;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8257b858
	if (!ctx.cr6.eq) goto loc_8257B858;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257b854
	if (ctx.cr0.eq) goto loc_8257B854;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B84C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8257b858
	goto loc_8257B858;
loc_8257B854:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8257B858:
	// lwz r11,1436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1436);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257b814
	if (ctx.cr6.lt) goto loc_8257B814;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257b978
	if (ctx.cr6.eq) goto loc_8257B978;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,1524(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1524);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lwz r3,1928(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1928);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f2,3116(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3116);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f1,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824d7b70
	ctx.lr = 0x8257B8D8;
	sub_824D7B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257b978
	if (ctx.cr0.eq) goto loc_8257B978;
	// lfs f0,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x829bed50
	ctx.lr = 0x8257B90C;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f28,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8257B91C;
	sub_829BED50(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257b94c
	if (!ctx.cr6.lt) goto loc_8257B94C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8257B94C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f12,3112(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-28788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28788);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r26,100
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 100, ctx.xer);
	// ble cr6,0x8257b978
	if (!ctx.cr6.gt) goto loc_8257B978;
	// li r26,100
	ctx.r26.s64 = 100;
loc_8257B978:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82a61794
	ctx.lr = 0x8257B988;
	__restfpr_28(ctx, base);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B990"))) PPC_WEAK_FUNC(sub_8257B990);
PPC_FUNC_IMPL(__imp__sub_8257B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257B998;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r29,1584
	ctx.r31.s64 = ctx.r29.s64 + 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1584(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257b9cc
	if (ctx.cr6.eq) goto loc_8257B9CC;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x8257b9d0
	goto loc_8257B9D0;
loc_8257B9CC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8257B9D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257bb80
	ctx.lr = 0x8257B9D8;
	sub_8257BB80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257B9EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257B9F8"))) PPC_WEAK_FUNC(sub_8257B9F8);
PPC_FUNC_IMPL(__imp__sub_8257B9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257BA00;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r30,r31,1584
	ctx.r30.s64 = ctx.r31.s64 + 1584;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BA30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8257ba80
	if (ctx.cr0.lt) goto loc_8257BA80;
	// lwz r9,1652(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8257BA48:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8257ba64
	if (ctx.cr6.eq) goto loc_8257BA64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// bge 0x8257ba48
	if (!ctx.cr0.lt) goto loc_8257BA48;
	// b 0x8257ba80
	goto loc_8257BA80;
loc_8257BA64:
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// lwz r11,10548(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10548);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_8257BA80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BA94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BAA8"))) PPC_WEAK_FUNC(sub_8257BAA8);
PPC_FUNC_IMPL(__imp__sub_8257BAA8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8257bb64
	if (ctx.cr6.eq) goto loc_8257BB64;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r30,r31,1584
	ctx.r30.s64 = ctx.r31.s64 + 1584;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r7,1584(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257BB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,1640
	ctx.r3.s64 = ctx.r31.s64 + 1640;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8257BB20;
	sub_82332D50(ctx, base);
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// mulli r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 * 20;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257bb50
	if (ctx.cr0.eq) goto loc_8257BB50;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8257BB3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8257bb3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8257BB3C;
loc_8257BB50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257BB64:
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

__attribute__((alias("__imp__sub_8257BB80"))) PPC_WEAK_FUNC(sub_8257BB80);
PPC_FUNC_IMPL(__imp__sub_8257BB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8257BB88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8257bc0c
	if (ctx.cr6.eq) goto loc_8257BC0C;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// addi r28,r30,1584
	ctx.r28.s64 = ctx.r30.s64 + 1584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BBB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8257bbf8
	if (ctx.cr0.lt) goto loc_8257BBF8;
	// mulli r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 * 20;
loc_8257BBC4:
	// lwz r11,1652(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8257bbec
	if (!ctx.cr6.eq) goto loc_8257BBEC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,1640
	ctx.r3.s64 = ctx.r30.s64 + 1640;
	// bl 0x82332ca8
	ctx.lr = 0x8257BBEC;
	sub_82332CA8(ctx, base);
loc_8257BBEC:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-20
	ctx.r29.s64 = ctx.r29.s64 + -20;
	// bge 0x8257bbc4
	if (!ctx.cr0.lt) goto loc_8257BBC4;
loc_8257BBF8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257BC0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BC18"))) PPC_WEAK_FUNC(sub_8257BC18);
PPC_FUNC_IMPL(__imp__sub_8257BC18) {
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
	// addi r31,r30,1584
	ctx.r31.s64 = ctx.r30.s64 + 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BC48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,1664
	ctx.r3.s64 = ctx.r30.s64 + 1664;
	// stw r11,1680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1680, ctx.r11.u32);
	// lwz r11,1684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1684);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8257bc74
	if (ctx.cr6.eq) goto loc_8257BC74;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8257BC74;
	sub_82332C38(ctx, base);
loc_8257BC74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BC88;
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

__attribute__((alias("__imp__sub_8257BCA0"))) PPC_WEAK_FUNC(sub_8257BCA0);
PPC_FUNC_IMPL(__imp__sub_8257BCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257BCA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r31,1584
	ctx.r30.s64 = ctx.r31.s64 + 1584;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1704(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257bd44
	if (!ctx.cr6.gt) goto loc_8257BD44;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1700(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
loc_8257BCE8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// bne cr6,0x8257bd2c
	if (!ctx.cr6.eq) goto loc_8257BD2C;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8257bd2c
	if (!ctx.cr6.eq) goto loc_8257BD2C;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8257bd40
	if (ctx.cr6.eq) goto loc_8257BD40;
loc_8257BD2C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257bce8
	if (ctx.cr6.lt) goto loc_8257BCE8;
	// b 0x8257bd44
	goto loc_8257BD44;
loc_8257BD40:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8257BD44:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BD58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257BD68"))) PPC_WEAK_FUNC(sub_8257BD68);
PPC_FUNC_IMPL(__imp__sub_8257BD68) {
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
	// addi r31,r30,1584
	ctx.r31.s64 = ctx.r30.s64 + 1584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,1688
	ctx.r3.s64 = ctx.r30.s64 + 1688;
	// stw r11,1704(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1704, ctx.r11.u32);
	// lwz r11,1708(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8257bdc4
	if (ctx.cr6.eq) goto loc_8257BDC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x8257BDC4;
	sub_82332C38(ctx, base);
loc_8257BDC4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BDD8;
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

__attribute__((alias("__imp__sub_8257BDF0"))) PPC_WEAK_FUNC(sub_8257BDF0);
PPC_FUNC_IMPL(__imp__sub_8257BDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8257BDF8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61724
	ctx.lr = 0x8257BE00;
	__savefpr_19(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32244
	ctx.r9.s64 = -2113142784;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f20,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// fmr f21,f20
	ctx.f21.f64 = ctx.f20.f64;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f24,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,30996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30996);
	ctx.f22.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f25,18208(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18208);
	ctx.f25.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f27,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f27.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f30,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lfs f31,904(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lfs f23,24088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24088);
	ctx.f23.f64 = double(temp.f32);
loc_8257BE64:
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// addi r23,r1,144
	ctx.r23.s64 = ctx.r1.s64 + 144;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82485608
	ctx.lr = 0x8257BE80;
	sub_82485608(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1360);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BEA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fadds f21,f21,f20
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f20.f64));
	// beq 0x8257c08c
	if (ctx.cr0.eq) goto loc_8257C08C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f29,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f29.f64 = double(temp.f32);
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257BECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1716(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257c044
	if (ctx.cr6.eq) goto loc_8257C044;
	// bl 0x8257c780
	ctx.lr = 0x8257BEE0;
	sub_8257C780(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r30,1728
	ctx.r4.s64 = ctx.r30.s64 + 1728;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8257BEF4;
	sub_82A4EA80(ctx, base);
	// lfs f0,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// lfs f29,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f29,f28
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fsubs f2,f0,f12
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f19,f11,f27
	ctx.f19.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// bl 0x82825a58
	ctx.lr = 0x8257BF20;
	sub_82825A58(ctx, base);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// fsubs f2,f29,f19
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f19.f64));
	// fadds f1,f28,f19
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f19.f64));
	// bl 0x82825a58
	ctx.lr = 0x8257BF30;
	sub_82825A58(ctx, base);
	// lfs f0,628(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f13,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f25.f64));
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r30,620
	ctx.r7.s64 = ctx.r30.s64 + 620;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r8,9348
	ctx.r8.s64 = 9348;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x8257BFCC;
	sub_82825330(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c08c
	if (ctx.cr6.eq) goto loc_8257C08C;
	// lwz r11,816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257c08c
	if (ctx.cr6.eq) goto loc_8257C08C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f24
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fmadds f0,f0,f22,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f13.f64));
	// lfs f13,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8257c08c
	if (!ctx.cr6.lt) goto loc_8257C08C;
	// stfs f26,88(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8257bca0
	ctx.lr = 0x8257C020;
	sub_8257BCA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257c08c
	if (ctx.cr0.eq) goto loc_8257C08C;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// b 0x8257c0b4
	goto loc_8257C0B4;
loc_8257C044:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1044);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257c08c
	if (!ctx.cr0.eq) goto loc_8257C08C;
	// lfs f0,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257c08c
	if (!ctx.cr6.lt) goto loc_8257C08C;
	// addi r4,r30,620
	ctx.r4.s64 = ctx.r30.s64 + 620;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8257bca0
	ctx.lr = 0x8257C084;
	sub_8257BCA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257c098
	if (!ctx.cr0.eq) goto loc_8257C098;
loc_8257C08C:
	// fcmpu cr6,f21,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f21.f64, ctx.f23.f64);
	// ble cr6,0x8257be64
	if (!ctx.cr6.gt) goto loc_8257BE64;
	// b 0x8257c0b8
	goto loc_8257C0B8;
loc_8257C098:
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_8257C0B4:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_8257C0B8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82a61770
	ctx.lr = 0x8257C0C8;
	__restfpr_19(ctx, base);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C0D0"))) PPC_WEAK_FUNC(sub_8257C0D0);
PPC_FUNC_IMPL(__imp__sub_8257C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8257C0D8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r28,1584(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1584);
	// lwz r11,2536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257c334
	if (!ctx.cr6.eq) goto loc_8257C334;
	// lwz r11,620(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,624(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// addi r31,r30,1584
	ctx.r31.s64 = ctx.r30.s64 + 1584;
	// lwz r9,628(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// addi r29,r28,620
	ctx.r29.s64 = ctx.r28.s64 + 620;
	// lwz r8,1584(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r26,80(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8257c17c
	if (ctx.cr0.lt) goto loc_8257C17C;
	// lwz r9,1652(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8257C15C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8257c178
	if (ctx.cr6.eq) goto loc_8257C178;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// bge 0x8257c15c
	if (!ctx.cr0.lt) goto loc_8257C15C;
	// b 0x8257c17c
	goto loc_8257C17C;
loc_8257C178:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8257C17C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C190;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8257c538
	if (!ctx.cr6.eq) goto loc_8257C538;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824defd8
	ctx.lr = 0x8257C1A0;
	sub_824DEFD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,1524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1524);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,1928(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1928);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f2,3116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 3116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-24640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// ld r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f29,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x824d7b70
	ctx.lr = 0x8257C20C;
	sub_824D7B70(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8257c334
	if (ctx.cr0.eq) goto loc_8257C334;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257bdf0
	ctx.lr = 0x8257C23C;
	sub_8257BDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257c34c
	if (ctx.cr0.eq) goto loc_8257C34C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f31,24088(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24088);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r11,r11,32716
	ctx.r11.s64 = ctx.r11.s64 + 32716;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lfs f30,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
loc_8257C274:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824dea78
	ctx.lr = 0x8257C284;
	sub_824DEA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257c29c
	if (!ctx.cr0.eq) goto loc_8257C29C;
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x8257c274
	if (!ctx.cr6.lt) goto loc_8257C274;
	// b 0x8257c2a0
	goto loc_8257C2A0;
loc_8257C29C:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8257C2A0:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257c34c
	if (ctx.cr0.eq) goto loc_8257C34C;
	// lwz r29,80(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// beq cr6,0x8257c320
	if (ctx.cr6.eq) goto loc_8257C320;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1680(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1680);
	// addi r3,r30,1664
	ctx.r3.s64 = ctx.r30.s64 + 1664;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257c304
	if (!ctx.cr6.gt) goto loc_8257C304;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257C2E8:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8257c30c
	if (ctx.cr6.eq) goto loc_8257C30C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257c2e8
	if (ctx.cr6.lt) goto loc_8257C2E8;
loc_8257C304:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82410060
	ctx.lr = 0x8257C30C;
	sub_82410060(ctx, base);
loc_8257C30C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C320:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C334;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257C334:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257C338:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
loc_8257C34C:
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257baa8
	ctx.lr = 0x8257C35C;
	sub_8257BAA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r30,1688
	ctx.r3.s64 = ctx.r30.s64 + 1688;
	// bl 0x824cac78
	ctx.lr = 0x8257C37C;
	sub_824CAC78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C390;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C3A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,628(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,16668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16668);
	ctx.f4.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f11,620(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f8,172(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f11,f13,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x8257c450
	if (!ctx.cr6.eq) goto loc_8257C450;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lfs f6,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lfs f5,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// b 0x8257c47c
	goto loc_8257C47C;
loc_8257C450:
	// fcmpu cr6,f11,f4
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f4.f64);
	// bge cr6,0x8257c468
	if (!ctx.cr6.lt) goto loc_8257C468;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// b 0x8257c47c
	goto loc_8257C47C;
loc_8257C468:
	// fsqrts f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f11,f5,f12
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f5,f13,f5
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
loc_8257C47C:
	// fmuls f0,f8,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f0,f7,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f0,f9,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x8257c4b8
	if (!ctx.cr6.eq) goto loc_8257C4B8;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8257c4e4
	goto loc_8257C4E4;
loc_8257C4B8:
	// fcmpu cr6,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x8257c4d0
	if (!ctx.cr6.lt) goto loc_8257C4D0;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// b 0x8257c4e4
	goto loc_8257C4E4;
loc_8257C4D0:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
loc_8257C4E4:
	// fmuls f13,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fmadds f13,f12,f5,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8257c680
	if (!ctx.cr6.gt) goto loc_8257C680;
	// lwz r11,1492(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257c680
	if (ctx.cr6.eq) goto loc_8257C680;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C52C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257c338
	goto loc_8257C338;
loc_8257C538:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,1492(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1492);
	// lwz r27,80(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C554;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8257c5a8
	if (ctx.cr0.lt) goto loc_8257C5A8;
	// lwz r9,1652(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// mulli r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8257C56C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8257c588
	if (ctx.cr6.eq) goto loc_8257C588;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// bge 0x8257c56c
	if (!ctx.cr0.lt) goto loc_8257C56C;
	// b 0x8257c5a8
	goto loc_8257C5A8;
loc_8257C588:
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_8257C5A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C5E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq 0x8257c5f8
	if (ctx.cr0.eq) goto loc_8257C5F8;
loc_8257C5F0:
	// bl 0x8257bb80
	ctx.lr = 0x8257C5F4;
	sub_8257BB80(ctx, base);
	// b 0x8257c334
	goto loc_8257C334;
loc_8257C5F8:
	// bl 0x8257b9f8
	ctx.lr = 0x8257C5FC;
	sub_8257B9F8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,32716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8257c64c
	if (!ctx.cr6.gt) goto loc_8257C64C;
loc_8257C60C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r30,1688
	ctx.r3.s64 = ctx.r30.s64 + 1688;
	// bl 0x824cac78
	ctx.lr = 0x8257C62C;
	sub_824CAC78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C640;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8257c5f0
	goto loc_8257C5F0;
loc_8257C64C:
	// lwz r11,1408(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8257c60c
	if (ctx.cr6.eq) goto loc_8257C60C;
loc_8257C65C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,1688(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1688, ctx.r11.u32);
	// stw r10,1684(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1684, ctx.r10.u32);
	// stw r9,1692(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1692, ctx.r9.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8257c338
	goto loc_8257C338;
loc_8257C680:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257c65c
	if (ctx.cr6.eq) goto loc_8257C65C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,1408(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1408);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257c338
	goto loc_8257C338;
}

__attribute__((alias("__imp__sub_8257C6A8"))) PPC_WEAK_FUNC(sub_8257C6A8);
PPC_FUNC_IMPL(__imp__sub_8257C6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257C6B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r29,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r29.u64);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x8257C6D0;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8257c758
	if (!ctx.cr0.eq) goto loc_8257C758;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823bc708
	ctx.lr = 0x8257C6E0;
	sub_823BC708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8257C700;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8257c744
	if (ctx.cr0.eq) goto loc_8257C744;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// std r29,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r29.u64);
	// addi r9,r9,9436
	ctx.r9.s64 = ctx.r9.s64 + 9436;
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
	// b 0x8257c748
	goto loc_8257C748;
loc_8257C744:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8257C748:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8257C754;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8257C758:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257C774;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C780"))) PPC_WEAK_FUNC(sub_8257C780);
PPC_FUNC_IMPL(__imp__sub_8257C780) {
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
	// bl 0x82482fd8
	ctx.lr = 0x8257C798;
	sub_82482FD8(ctx, base);
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
	ctx.lr = 0x8257C7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8257c7c0
	if (!ctx.cr0.eq) goto loc_8257C7C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257C7C0:
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

__attribute__((alias("__imp__sub_8257C7D8"))) PPC_WEAK_FUNC(sub_8257C7D8);
PPC_FUNC_IMPL(__imp__sub_8257C7D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257b0e8
	sub_8257B0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C7E0"))) PPC_WEAK_FUNC(sub_8257C7E0);
PPC_FUNC_IMPL(__imp__sub_8257C7E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257b290
	sub_8257B290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C7E8"))) PPC_WEAK_FUNC(sub_8257C7E8);
PPC_FUNC_IMPL(__imp__sub_8257C7E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8257b290
	sub_8257B290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C7F0"))) PPC_WEAK_FUNC(sub_8257C7F0);
PPC_FUNC_IMPL(__imp__sub_8257C7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9228
	ctx.r3.s64 = ctx.r11.s64 + -9228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257C800"))) PPC_WEAK_FUNC(sub_8257C800);
PPC_FUNC_IMPL(__imp__sub_8257C800) {
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
	// beq cr6,0x8257c838
	if (ctx.cr6.eq) goto loc_8257C838;
	// bl 0x823bbfe0
	ctx.lr = 0x8257C828;
	sub_823BBFE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257c838
	if (!ctx.cr6.eq) goto loc_8257C838;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257c844
	goto loc_8257C844;
loc_8257C838:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257C844;
	sub_82570278(ctx, base);
loc_8257C844:
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

__attribute__((alias("__imp__sub_8257C860"))) PPC_WEAK_FUNC(sub_8257C860);
PPC_FUNC_IMPL(__imp__sub_8257C860) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bbfe0
	sub_823BBFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257C868"))) PPC_WEAK_FUNC(sub_8257C868);
PPC_FUNC_IMPL(__imp__sub_8257C868) {
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
	// li r3,1600
	ctx.r3.s64 = 1600;
	// bl 0x82833108
	ctx.lr = 0x8257C888;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257c8e0
	if (ctx.cr0.eq) goto loc_8257C8E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257C89C;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-31408
	ctx.r11.s64 = ctx.r11.s64 + -31408;
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// addi r9,r9,22920
	ctx.r9.s64 = ctx.r9.s64 + 22920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// lwz r11,1592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1592);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// b 0x8257c8e4
	goto loc_8257C8E4;
loc_8257C8E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257C8E4:
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

__attribute__((alias("__imp__sub_8257C900"))) PPC_WEAK_FUNC(sub_8257C900);
PPC_FUNC_IMPL(__imp__sub_8257C900) {
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
	// bl 0x823bbfe0
	ctx.lr = 0x8257C920;
	sub_823BBFE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257c934
	if (ctx.cr6.eq) goto loc_8257C934;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257C934;
	sub_825702D8(ctx, base);
loc_8257C934:
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

__attribute__((alias("__imp__sub_8257C950"))) PPC_WEAK_FUNC(sub_8257C950);
PPC_FUNC_IMPL(__imp__sub_8257C950) {
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
	// bl 0x825705f8
	ctx.lr = 0x8257C96C;
	sub_825705F8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,14112
	ctx.r8.s64 = 924844032;
	// addi r11,r11,-31408
	ctx.r11.s64 = ctx.r11.s64 + -31408;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-30316
	ctx.r10.s64 = ctx.r10.s64 + -30316;
	// addi r9,r9,22920
	ctx.r9.s64 = ctx.r9.s64 + 22920;
	// ori r11,r8,53358
	ctx.r11.u64 = ctx.r8.u64 | 53358;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x8257C9AC;
	sub_82410060(ctx, base);
	// lwz r11,1508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// lwz r10,1512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1512);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257c9d0
	if (ctx.cr6.eq) goto loc_8257C9D0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c38
	ctx.lr = 0x8257C9D0;
	sub_82332C38(ctx, base);
loc_8257C9D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8257C9F8"))) PPC_WEAK_FUNC(sub_8257C9F8);
PPC_FUNC_IMPL(__imp__sub_8257C9F8) {
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
	// addi r3,r31,1440
	ctx.r3.s64 = ctx.r31.s64 + 1440;
	// lwz r11,1460(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1460);
	// stw r30,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257ca38
	if (ctx.cr6.eq) goto loc_8257CA38;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82332c38
	ctx.lr = 0x8257CA38;
	sub_82332C38(ctx, base);
loc_8257CA38:
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA48;
	sub_82570D10(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA54;
	sub_82570D10(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA60;
	sub_82570D10(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA6C;
	sub_82570D10(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA78;
	sub_82570D10(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570d10
	ctx.lr = 0x8257CA84;
	sub_82570D10(ctx, base);
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

__attribute__((alias("__imp__sub_8257CAA0"))) PPC_WEAK_FUNC(sub_8257CAA0);
PPC_FUNC_IMPL(__imp__sub_8257CAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257CAA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1584(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257cc24
	if (ctx.cr6.eq) goto loc_8257CC24;
	// lwz r10,1904(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8257cc24
	if (!ctx.cr6.lt) goto loc_8257CC24;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r29,620
	ctx.r4.s64 = ctx.r29.s64 + 620;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r31,r30,620
	ctx.r31.s64 = ctx.r30.s64 + 620;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r9,1484(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1484, ctx.r9.u32);
	// lwz r3,1492(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1492);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CB04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257cc24
	if (!ctx.cr0.eq) goto loc_8257CC24;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r11,-24640
	ctx.r28.s64 = ctx.r11.s64 + -24640;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4080(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4080);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f0,-4652(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -4652);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8257cb54
	if (ctx.cr6.eq) goto loc_8257CB54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r11.u32);
	// b 0x8257cb70
	goto loc_8257CB70;
loc_8257CB54:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8257CB68;
	sub_824F12A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r31,4080(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4080, ctx.r31.u32);
loc_8257CB70:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 464);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f2,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1472);
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
	// lwz r11,1008(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1008);
	// lwz r10,1476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	// stw r10,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r10.u32);
	// lwz r10,1480(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	// stw r10,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r10.u32);
	// lwz r10,1488(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// stw r10,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CBD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,1444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1444, ctx.r11.u32);
	// stw r10,1448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1448, ctx.r10.u32);
	// stw r9,1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1452, ctx.r9.u32);
	// lwz r10,1460(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1460);
	// lwz r9,1464(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1464);
	// lwz r11,1468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1468);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82817280
	ctx.lr = 0x8257CC10;
	sub_82817280(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CC24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257CC24:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CC30"))) PPC_WEAK_FUNC(sub_8257CC30);
PPC_FUNC_IMPL(__imp__sub_8257CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257CC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,4080(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257ccd8
	if (ctx.cr6.eq) goto loc_8257CCD8;
	// lwz r4,1484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8257ccd8
	if (ctx.cr6.eq) goto loc_8257CCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CC6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257ccd8
	if (ctx.cr0.eq) goto loc_8257CCD8;
	// lwz r3,1492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r30,620
	ctx.r5.s64 = ctx.r30.s64 + 620;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CC98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257ccd8
	if (!ctx.cr0.eq) goto loc_8257CCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CCB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ccd8
	if (ctx.cr0.eq) goto loc_8257CCD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,1484(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CCD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257CCD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CCE0"))) PPC_WEAK_FUNC(sub_8257CCE0);
PPC_FUNC_IMPL(__imp__sub_8257CCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8257CCE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// stw r4,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r4.u32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// beq cr6,0x8257cfc8
	if (ctx.cr6.eq) goto loc_8257CFC8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257cd20
	if (!ctx.cr6.eq) goto loc_8257CD20;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8257cfc8
	if (ctx.cr6.eq) goto loc_8257CFC8;
loc_8257CD20:
	// lwz r11,1912(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1912);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r4,1912
	ctx.r3.s64 = ctx.r4.s64 + 1912;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257ce70
	if (!ctx.cr6.gt) goto loc_8257CE70;
	// li r24,0
	ctx.r24.s64 = 0;
loc_8257CD50:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r26,r24,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8257cfb0
	if (ctx.cr6.eq) goto loc_8257CFB0;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257CD68;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257CD6C;
	sub_824A0990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CD80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8257cfb0
	if (ctx.cr0.eq) goto loc_8257CFB0;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257ce5c
	if (!ctx.cr6.gt) goto loc_8257CE5C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8257CDA0:
	// lwz r4,1584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257cddc
	if (ctx.cr6.eq) goto loc_8257CDDC;
	// lwz r11,1900(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1900);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8257cdd0
	if (!ctx.cr6.eq) goto loc_8257CDD0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x8257CDC8;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8257CDD0;
	sub_82333960(ctx, base);
loc_8257CDD0:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257cdf8
	if (ctx.cr6.eq) goto loc_8257CDF8;
loc_8257CDDC:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257cda0
	if (ctx.cr6.lt) goto loc_8257CDA0;
	// b 0x8257ce5c
	goto loc_8257CE5C;
loc_8257CDF8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257caa0
	ctx.lr = 0x8257CE08;
	sub_8257CAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257ce20
	if (!ctx.cr6.eq) goto loc_8257CE20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8257cc30
	ctx.lr = 0x8257CE20;
	sub_8257CC30(ctx, base);
loc_8257CE20:
	// lwz r11,4280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4280);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257ce5c
	if (!ctx.cr6.eq) goto loc_8257CE5C;
	// lwz r3,1608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ce4c
	if (ctx.cr6.eq) goto loc_8257CE4C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CE48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257ce50
	goto loc_8257CE50;
loc_8257CE4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257CE50:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257ce5c
	if (ctx.cr6.eq) goto loc_8257CE5C;
	// bl 0x824cd328
	ctx.lr = 0x8257CE5C;
	sub_824CD328(ctx, base);
loc_8257CE5C:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257cd50
	if (ctx.cr6.lt) goto loc_8257CD50;
loc_8257CE70:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257cfb0
	if (!ctx.cr6.gt) goto loc_8257CFB0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8257CE84:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257cfb0
	if (ctx.cr6.eq) goto loc_8257CFB0;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257CE9C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257CEA0;
	sub_824A0990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257cfb0
	if (ctx.cr0.eq) goto loc_8257CFB0;
	// lwz r9,1584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,1904(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1904);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257cf00
	if (!ctx.cr6.gt) goto loc_8257CF00;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1900);
loc_8257CED8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,1456(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8257cf9c
	if (ctx.cr6.eq) goto loc_8257CF9C;
	// lwz r6,1584(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,1904(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1904);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8257ced8
	if (ctx.cr6.lt) goto loc_8257CED8;
loc_8257CF00:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257cf9c
	if (!ctx.cr6.gt) goto loc_8257CF9C;
	// lwz r11,1900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1900);
loc_8257CF10:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1484);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8257cf3c
	if (ctx.cr6.eq) goto loc_8257CF3C;
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,1904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1904);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257cf10
	if (ctx.cr6.lt) goto loc_8257CF10;
	// b 0x8257cf9c
	goto loc_8257CF9C;
loc_8257CF3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257caa0
	ctx.lr = 0x8257CF48;
	sub_8257CAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257cf60
	if (!ctx.cr6.eq) goto loc_8257CF60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257cc30
	ctx.lr = 0x8257CF60;
	sub_8257CC30(ctx, base);
loc_8257CF60:
	// lwz r11,4280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4280);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257cf9c
	if (!ctx.cr6.eq) goto loc_8257CF9C;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257cf8c
	if (ctx.cr6.eq) goto loc_8257CF8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CF88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257cf90
	goto loc_8257CF90;
loc_8257CF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257CF90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257cf9c
	if (ctx.cr6.eq) goto loc_8257CF9C;
	// bl 0x824cd328
	ctx.lr = 0x8257CF9C;
	sub_824CD328(ctx, base);
loc_8257CF9C:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257ce84
	if (ctx.cr6.lt) goto loc_8257CE84;
loc_8257CFB0:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257CFC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257CFC8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257CFD0"))) PPC_WEAK_FUNC(sub_8257CFD0);
PPC_FUNC_IMPL(__imp__sub_8257CFD0) {
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
	// addi r30,r31,1912
	ctx.r30.s64 = ctx.r31.s64 + 1912;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1912);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1904(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257d038
	if (!ctx.cr6.gt) goto loc_8257D038;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8257D014:
	// lwz r9,1900(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1900);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,1484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1484, ctx.r8.u32);
	// lwz r9,1904(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1904);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8257d014
	if (ctx.cr6.lt) goto loc_8257D014;
loc_8257D038:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D04C;
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

__attribute__((alias("__imp__sub_8257D068"))) PPC_WEAK_FUNC(sub_8257D068);
PPC_FUNC_IMPL(__imp__sub_8257D068) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1416, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257D078"))) PPC_WEAK_FUNC(sub_8257D078);
PPC_FUNC_IMPL(__imp__sub_8257D078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257D080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D098;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D09C;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d0d4
	if (ctx.cr0.eq) goto loc_8257D0D4;
	// lwz r11,1456(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1456);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8257d0d0
	if (ctx.cr6.lt) goto loc_8257D0D0;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d0d4
	if (ctx.cr6.eq) goto loc_8257D0D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257af78
	ctx.lr = 0x8257D0C8;
	sub_8257AF78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8257d0d4
	goto loc_8257D0D4;
loc_8257D0D0:
	// li r30,50
	ctx.r30.s64 = 50;
loc_8257D0D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D0E0"))) PPC_WEAK_FUNC(sub_8257D0E0);
PPC_FUNC_IMPL(__imp__sub_8257D0E0) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257D0F8;
	sub_8257A570(ctx, base);
	// lis r11,-32026
	ctx.r11.s64 = -2098855936;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-28312
	ctx.r8.s64 = ctx.r11.s64 + -28312;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d138
	if (!ctx.cr6.gt) goto loc_8257D138;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257D11C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257d140
	if (ctx.cr6.eq) goto loc_8257D140;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d11c
	if (ctx.cr6.lt) goto loc_8257D11C;
loc_8257D138:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257D140;
	sub_82410060(ctx, base);
loc_8257D140:
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

__attribute__((alias("__imp__sub_8257D158"))) PPC_WEAK_FUNC(sub_8257D158);
PPC_FUNC_IMPL(__imp__sub_8257D158) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-12168
	ctx.r4.s64 = ctx.r9.s64 + -12168;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257D180"))) PPC_WEAK_FUNC(sub_8257D180);
PPC_FUNC_IMPL(__imp__sub_8257D180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257D188;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,1588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8257d1bc
	if (ctx.cr6.gt) goto loc_8257D1BC;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8257d2c0
	if (ctx.cr6.lt) goto loc_8257D2C0;
loc_8257D1BC:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// lwz r9,1456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1588(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1588, temp.u32);
	// ble cr6,0x8257d2ac
	if (!ctx.cr6.gt) goto loc_8257D2AC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,23752(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23752);
	ctx.f31.f64 = double(temp.f32);
loc_8257D1F0:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d298
	if (ctx.cr6.eq) goto loc_8257D298;
	// lwz r3,4080(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4080);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d298
	if (ctx.cr6.eq) goto loc_8257D298;
	// lwz r11,1452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	// lfs f0,624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// lfs f13,628(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,1448(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// lfs f12,620(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8257d26c
	if (ctx.cr6.gt) goto loc_8257D26C;
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8257d298
	if (ctx.cr6.lt) goto loc_8257D298;
loc_8257D26C:
	// lwz r11,1452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1452);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,1444(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1444);
	// lwz r9,1448(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1448);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257D298:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d1f0
	if (ctx.cr6.lt) goto loc_8257D1F0;
loc_8257D2AC:
	// lwz r11,1592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8257d2c0
	if (ctx.cr6.lt) goto loc_8257D2C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
loc_8257D2C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D2D0"))) PPC_WEAK_FUNC(sub_8257D2D0);
PPC_FUNC_IMPL(__imp__sub_8257D2D0) {
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
	// bl 0x824f1398
	ctx.lr = 0x8257D2EC;
	sub_824F1398(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// bl 0x8257cce0
	ctx.lr = 0x8257D2FC;
	sub_8257CCE0(ctx, base);
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

__attribute__((alias("__imp__sub_8257D310"))) PPC_WEAK_FUNC(sub_8257D310);
PPC_FUNC_IMPL(__imp__sub_8257D310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257D318;
	__savegprlr_29(ctx, base);
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
	// beq cr6,0x8257d3dc
	if (ctx.cr6.eq) goto loc_8257D3DC;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257d3dc
	if (ctx.cr6.eq) goto loc_8257D3DC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D35C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D360;
	sub_824A0990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d380
	if (ctx.cr0.eq) goto loc_8257D380;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8257D380:
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,1904(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257d3c4
	if (!ctx.cr6.gt) goto loc_8257D3C4;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
loc_8257D398:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,1456(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1456);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8257d3bc
	if (ctx.cr6.eq) goto loc_8257D3BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8257d398
	if (ctx.cr6.lt) goto loc_8257D398;
	// b 0x8257d3c4
	goto loc_8257D3C4;
loc_8257D3BC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1484(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1484, ctx.r11.u32);
loc_8257D3C4:
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D3DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257D3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D3E8"))) PPC_WEAK_FUNC(sub_8257D3E8);
PPC_FUNC_IMPL(__imp__sub_8257D3E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8257D3F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r7.u64);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// std r8,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r8.u64);
	// std r9,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r9.u64);
	// std r10,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r10.u64);
	// beq cr6,0x8257d790
	if (ctx.cr6.eq) goto loc_8257D790;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x8257d7b4
	if (!ctx.cr6.eq) goto loc_8257D7B4;
	// lwz r3,1584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d42c
	if (ctx.cr6.eq) goto loc_8257D42C;
	// bl 0x8257cfd0
	ctx.lr = 0x8257D42C;
	sub_8257CFD0(ctx, base);
loc_8257D42C:
	// lwz r30,280(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257d460
	if (ctx.cr6.eq) goto loc_8257D460;
	// bl 0x823bdea0
	ctx.lr = 0x8257D43C;
	sub_823BDEA0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x8257d464
	if (!ctx.cr0.eq) goto loc_8257D464;
loc_8257D460:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257D464:
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r11.u32);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x8257d734
	if (ctx.cr6.eq) goto loc_8257D734;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8257d734
	if (ctx.cr6.eq) goto loc_8257D734;
	// lwz r10,1912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D4A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d5dc
	if (!ctx.cr6.gt) goto loc_8257D5DC;
	// li r24,0
	ctx.r24.s64 = 0;
loc_8257D4BC:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r26,r24,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8257d71c
	if (ctx.cr6.eq) goto loc_8257D71C;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D4D4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D4D8;
	sub_824A0990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 80);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D4EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8257d71c
	if (ctx.cr0.eq) goto loc_8257D71C;
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d5c8
	if (!ctx.cr6.gt) goto loc_8257D5C8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8257D50C:
	// lwz r4,1584(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257d548
	if (ctx.cr6.eq) goto loc_8257D548;
	// lwz r11,1900(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1900);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8257d53c
	if (!ctx.cr6.eq) goto loc_8257D53C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x829c62f0
	ctx.lr = 0x8257D534;
	sub_829C62F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8257D53C;
	sub_82333960(ctx, base);
loc_8257D53C:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8257d564
	if (ctx.cr6.eq) goto loc_8257D564;
loc_8257D548:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r11,1904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1904);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d50c
	if (ctx.cr6.lt) goto loc_8257D50C;
	// b 0x8257d5c8
	goto loc_8257D5C8;
loc_8257D564:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257caa0
	ctx.lr = 0x8257D574;
	sub_8257CAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257d58c
	if (!ctx.cr6.eq) goto loc_8257D58C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8257cc30
	ctx.lr = 0x8257D58C;
	sub_8257CC30(ctx, base);
loc_8257D58C:
	// lwz r11,4280(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4280);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257d5c8
	if (!ctx.cr6.eq) goto loc_8257D5C8;
	// lwz r3,1608(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d5b8
	if (ctx.cr6.eq) goto loc_8257D5B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257d5bc
	goto loc_8257D5BC;
loc_8257D5B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257D5BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d5c8
	if (ctx.cr6.eq) goto loc_8257D5C8;
	// bl 0x824cd328
	ctx.lr = 0x8257D5C8;
	sub_824CD328(ctx, base);
loc_8257D5C8:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d4bc
	if (ctx.cr6.lt) goto loc_8257D4BC;
loc_8257D5DC:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d71c
	if (!ctx.cr6.gt) goto loc_8257D71C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8257D5F0:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257d71c
	if (ctx.cr6.eq) goto loc_8257D71C;
	// lwz r3,1488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D608;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D60C;
	sub_824A0990(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d71c
	if (ctx.cr0.eq) goto loc_8257D71C;
	// lwz r9,1584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,1904(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1904);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257d66c
	if (!ctx.cr6.gt) goto loc_8257D66C;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1900);
loc_8257D644:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,1456(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1456);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8257d708
	if (ctx.cr6.eq) goto loc_8257D708;
	// lwz r6,1584(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,1904(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1904);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8257d644
	if (ctx.cr6.lt) goto loc_8257D644;
loc_8257D66C:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8257d708
	if (!ctx.cr6.gt) goto loc_8257D708;
	// lwz r11,1900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1900);
loc_8257D67C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,1484(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1484);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8257d6a8
	if (ctx.cr6.eq) goto loc_8257D6A8;
	// lwz r10,1584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,1904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1904);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257d67c
	if (ctx.cr6.lt) goto loc_8257D67C;
	// b 0x8257d708
	goto loc_8257D708;
loc_8257D6A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257caa0
	ctx.lr = 0x8257D6B4;
	sub_8257CAA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257d6cc
	if (!ctx.cr6.eq) goto loc_8257D6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8257cc30
	ctx.lr = 0x8257D6CC;
	sub_8257CC30(ctx, base);
loc_8257D6CC:
	// lwz r11,4280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4280);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257d708
	if (!ctx.cr6.eq) goto loc_8257D708;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d6f8
	if (ctx.cr6.eq) goto loc_8257D6F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D6F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257d6fc
	goto loc_8257D6FC;
loc_8257D6F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257D6FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d708
	if (ctx.cr6.eq) goto loc_8257D708;
	// bl 0x824cd328
	ctx.lr = 0x8257D708;
	sub_824CD328(ctx, base);
loc_8257D708:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d5f0
	if (ctx.cr6.lt) goto loc_8257D5F0;
loc_8257D71C:
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// lwz r11,1912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1912);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257D734:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d7b4
	if (!ctx.cr6.gt) goto loc_8257D7B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8257D748:
	// lwz r11,1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1452);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d778
	if (ctx.cr6.eq) goto loc_8257D778;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d778
	if (ctx.cr0.eq) goto loc_8257D778;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1604(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1604, ctx.r11.u32);
loc_8257D778:
	// lwz r11,1456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1456);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d748
	if (ctx.cr6.lt) goto loc_8257D748;
	// b 0x8257d7b4
	goto loc_8257D7B4;
loc_8257D790:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8257D7A4;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8257D7A8;
	sub_82333A20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8257d7c0
	ctx.lr = 0x8257D7B4;
	sub_8257D7C0(ctx, base);
loc_8257D7B4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257D7C0"))) PPC_WEAK_FUNC(sub_8257D7C0);
PPC_FUNC_IMPL(__imp__sub_8257D7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8257D7C8;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D7E4;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D7E8;
	sub_824A0990(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8257d914
	if (ctx.cr6.eq) goto loc_8257D914;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d914
	if (ctx.cr6.eq) goto loc_8257D914;
	// lwz r11,1416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257d914
	if (ctx.cr6.eq) goto loc_8257D914;
	// lwz r11,1412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257d914
	if (ctx.cr6.eq) goto loc_8257D914;
	// lwz r3,1584(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d820
	if (ctx.cr6.eq) goto loc_8257D820;
	// bl 0x8257cfd0
	ctx.lr = 0x8257D820;
	sub_8257CFD0(ctx, base);
loc_8257D820:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257d914
	if (!ctx.cr6.gt) goto loc_8257D914;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,24020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24020);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
loc_8257D844:
	// lwz r11,1452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1452);
	// lwzx r31,r29,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257d900
	if (ctx.cr6.eq) goto loc_8257D900;
	// lwz r11,4280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4280);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8257d900
	if (!ctx.cr6.eq) goto loc_8257D900;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825712e8
	ctx.lr = 0x8257D874;
	sub_825712E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d900
	if (ctx.cr0.eq) goto loc_8257D900;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x8257d900
	if (ctx.cr6.lt) goto loc_8257D900;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8257d900
	if (!ctx.cr6.lt) goto loc_8257D900;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,624(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8257d900
	if (!ctx.cr6.lt) goto loc_8257D900;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d8f0
	if (ctx.cr6.eq) goto loc_8257D8F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D8EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8257d8f4
	goto loc_8257D8F4;
loc_8257D8F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257D8F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257d900
	if (ctx.cr6.eq) goto loc_8257D900;
	// bl 0x824cd328
	ctx.lr = 0x8257D900;
	sub_824CD328(ctx, base);
loc_8257D900:
	// lwz r11,1456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1456);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257d844
	if (ctx.cr6.lt) goto loc_8257D844;
loc_8257D914:
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

__attribute__((alias("__imp__sub_8257D928"))) PPC_WEAK_FUNC(sub_8257D928);
PPC_FUNC_IMPL(__imp__sub_8257D928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8257D930;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r3,1488(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1488);
	// bl 0x829c35d8
	ctx.lr = 0x8257D94C;
	sub_829C35D8(ctx, base);
	// bl 0x824a0990
	ctx.lr = 0x8257D950;
	sub_824A0990(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257daf8
	if (ctx.cr0.eq) goto loc_8257DAF8;
	// lwz r31,1584(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1584);
	// lwz r28,4080(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257daf8
	if (ctx.cr6.eq) goto loc_8257DAF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257D998;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257d9a4
	if (ctx.cr0.eq) goto loc_8257D9A4;
	// stw r26,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r26.u32);
loc_8257D9A4:
	// lwz r11,628(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,620(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r7,624(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r6,620(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	// lwz r5,624(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,1492(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,460(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 460);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257D9FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DA20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257da44
	if (!ctx.cr0.eq) goto loc_8257DA44;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824cf678
	ctx.lr = 0x8257DA30;
	sub_824CF678(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5456, ctx.r11.u32);
	// lwz r11,1504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257dadc
	goto loc_8257DADC;
loc_8257DA44:
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257dac4
	if (!ctx.cr6.gt) goto loc_8257DAC4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257dac4
	if (!ctx.cr0.eq) goto loc_8257DAC4;
	// lwz r30,4080(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8257dac4
	if (ctx.cr6.eq) goto loc_8257DAC4;
	// lwz r4,1488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8257dac4
	if (ctx.cr6.eq) goto loc_8257DAC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DA88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257dac4
	if (ctx.cr0.eq) goto loc_8257DAC4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DAA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257dac4
	if (ctx.cr0.eq) goto loc_8257DAC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,1488(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,1304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DAC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r26,1488(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1488, ctx.r26.u32);
loc_8257DAC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DADC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DAF8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DB08"))) PPC_WEAK_FUNC(sub_8257DB08);
PPC_FUNC_IMPL(__imp__sub_8257DB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x829c18c0
	ctx.lr = 0x8257DB28;
	sub_829C18C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8257d180
	ctx.lr = 0x8257DB34;
	sub_8257D180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DB50"))) PPC_WEAK_FUNC(sub_8257DB50);
PPC_FUNC_IMPL(__imp__sub_8257DB50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257c900
	sub_8257C900(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DB58"))) PPC_WEAK_FUNC(sub_8257DB58);
PPC_FUNC_IMPL(__imp__sub_8257DB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9932
	ctx.r3.s64 = ctx.r11.s64 + -9932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257DB68"))) PPC_WEAK_FUNC(sub_8257DB68);
PPC_FUNC_IMPL(__imp__sub_8257DB68) {
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
	// beq cr6,0x8257dba0
	if (ctx.cr6.eq) goto loc_8257DBA0;
	// bl 0x823ba028
	ctx.lr = 0x8257DB90;
	sub_823BA028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257dba0
	if (!ctx.cr6.eq) goto loc_8257DBA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257dbac
	goto loc_8257DBAC;
loc_8257DBA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257DBAC;
	sub_82570278(ctx, base);
loc_8257DBAC:
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

__attribute__((alias("__imp__sub_8257DBC8"))) PPC_WEAK_FUNC(sub_8257DBC8);
PPC_FUNC_IMPL(__imp__sub_8257DBC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba028
	sub_823BA028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DBD0"))) PPC_WEAK_FUNC(sub_8257DBD0);
PPC_FUNC_IMPL(__imp__sub_8257DBD0) {
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
	// li r3,1632
	ctx.r3.s64 = 1632;
	// bl 0x82833108
	ctx.lr = 0x8257DBF0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257dc78
	if (ctx.cr0.eq) goto loc_8257DC78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257DC04;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-30160
	ctx.r11.s64 = ctx.r11.s64 + -30160;
	// addi r10,r10,-29068
	ctx.r10.s64 = ctx.r10.s64 + -29068;
	// addi r9,r9,22920
	ctx.r9.s64 = ctx.r9.s64 + 22920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
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
	// lfs f0,1600(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1600(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1600, temp.u32);
	// lfs f0,1604(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1604);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// lfs f0,1608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1608(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// lfs f0,1612(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1612(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1612, temp.u32);
	// lfs f0,1616(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1616, temp.u32);
	// b 0x8257dc7c
	goto loc_8257DC7C;
loc_8257DC78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257DC7C:
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

__attribute__((alias("__imp__sub_8257DC98"))) PPC_WEAK_FUNC(sub_8257DC98);
PPC_FUNC_IMPL(__imp__sub_8257DC98) {
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
	// bl 0x823ba028
	ctx.lr = 0x8257DCB8;
	sub_823BA028(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257dccc
	if (ctx.cr6.eq) goto loc_8257DCCC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257DCCC;
	sub_825702D8(ctx, base);
loc_8257DCCC:
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

__attribute__((alias("__imp__sub_8257DCE8"))) PPC_WEAK_FUNC(sub_8257DCE8);
PPC_FUNC_IMPL(__imp__sub_8257DCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257DCF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825705f8
	ctx.lr = 0x8257DCFC;
	sub_825705F8(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r8,14112
	ctx.r8.s64 = 924844032;
	// addi r11,r11,-30160
	ctx.r11.s64 = ctx.r11.s64 + -30160;
	// addi r10,r10,-29068
	ctx.r10.s64 = ctx.r10.s64 + -29068;
	// addi r7,r9,22920
	ctx.r7.s64 = ctx.r9.s64 + 22920;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r9,r8,53358
	ctx.r9.u64 = ctx.r8.u64 | 53358;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r7,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r7.u32);
	// addi r3,r31,1492
	ctx.r3.s64 = ctx.r31.s64 + 1492;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r10,1508(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1508);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8257dd64
	if (!ctx.cr6.gt) goto loc_8257DD64;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257DD48:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8257dd6c
	if (ctx.cr6.eq) goto loc_8257DD6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8257dd48
	if (ctx.cr6.lt) goto loc_8257DD48;
loc_8257DD64:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257DD6C;
	sub_82410060(ctx, base);
loc_8257DD6C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r29,r11,-30240
	ctx.r29.s64 = ctx.r11.s64 + -30240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257ddac
	if (ctx.cr6.eq) goto loc_8257DDAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30264
	ctx.r5.s64 = ctx.r11.s64 + -30264;
	// addi r6,r31,1600
	ctx.r6.s64 = ctx.r31.s64 + 1600;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8257DDA8;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8257DDAC:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257dddc
	if (ctx.cr6.eq) goto loc_8257DDDC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30200
	ctx.r5.s64 = ctx.r11.s64 + -30200;
	// addi r6,r31,1612
	ctx.r6.s64 = ctx.r31.s64 + 1612;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8257DDD8;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8257DDDC:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8257de08
	if (ctx.cr6.eq) goto loc_8257DE08;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-30180
	ctx.r5.s64 = ctx.r11.s64 + -30180;
	// addi r6,r31,1616
	ctx.r6.s64 = ctx.r31.s64 + 1616;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8257DE08;
	sub_828C5740(ctx, base);
loc_8257DE08:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,1600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r28,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r28.u32);
	// lfs f0,-29292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32616);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,1604(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1604, temp.u32);
	// stfs f13,1608(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1608, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257DE40"))) PPC_WEAK_FUNC(sub_8257DE40);
PPC_FUNC_IMPL(__imp__sub_8257DE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8257DE48;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r31,1584(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257dffc
	if (ctx.cr6.eq) goto loc_8257DFFC;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257dffc
	if (!ctx.cr6.gt) goto loc_8257DFFC;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257dffc
	if (!ctx.cr0.eq) goto loc_8257DFFC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x825712e8
	ctx.lr = 0x8257DE98;
	sub_825712E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,1584(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1584, ctx.r3.u32);
	// beq 0x8257dffc
	if (ctx.cr0.eq) goto loc_8257DFFC;
	// lwz r3,1608(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8257dffc
	if (ctx.cr6.eq) goto loc_8257DFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,496(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DEC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4080(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4080);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r26,1408(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1408);
	// bne cr6,0x8257def0
	if (!ctx.cr6.eq) goto loc_8257DEF0;
	// lwz r11,1584(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,628(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// ld r4,620(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 620);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824f12a0
	ctx.lr = 0x8257DEE8;
	sub_824F12A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,4080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4080, ctx.r6.u32);
loc_8257DEF0:
	// lwz r11,1584(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1584);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8257df04
	if (ctx.cr6.eq) goto loc_8257DF04;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x8257df08
	goto loc_8257DF08;
loc_8257DF04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257DF08:
	// stw r11,1456(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1456, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,1460(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1460, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,1504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,72(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8257DF4C;
	sub_829B9720(ctx, base);
	// lwz r28,1492(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8257dffc
	if (ctx.cr0.eq) goto loc_8257DFFC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r27,r30,620
	ctx.r27.s64 = ctx.r30.s64 + 620;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x82825ea0
	ctx.lr = 0x8257DF74;
	sub_82825EA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257dffc
	if (ctx.cr0.eq) goto loc_8257DFFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r31,620
	ctx.r4.s64 = ctx.r31.s64 + 620;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DFA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8257dffc
	if (!ctx.cr0.eq) goto loc_8257DFFC;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257DFB0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257dfc0
	if (ctx.cr0.eq) goto loc_8257DFC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
loc_8257DFC0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,1504(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// lwz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8257dffc
	if (!ctx.cr6.gt) goto loc_8257DFFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,-25080(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 32, temp.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,1320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257DFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257DFFC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E008"))) PPC_WEAK_FUNC(sub_8257E008);
PPC_FUNC_IMPL(__imp__sub_8257E008) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,1584(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e054
	if (ctx.cr6.eq) goto loc_8257E054;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825712e8
	ctx.lr = 0x8257E038;
	sub_825712E8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e054
	if (ctx.cr0.eq) goto loc_8257E054;
	// lfs f0,1600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8257e058
	if (ctx.cr6.gt) goto loc_8257E058;
loc_8257E054:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257E058:
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

__attribute__((alias("__imp__sub_8257E070"))) PPC_WEAK_FUNC(sub_8257E070);
PPC_FUNC_IMPL(__imp__sub_8257E070) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,1584(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8257e0ec
	if (ctx.cr6.eq) goto loc_8257E0EC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825712e8
	ctx.lr = 0x8257E0A8;
	sub_825712E8(ctx, base);
	// lfs f0,1600(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8257e0ec
	if (ctx.cr6.lt) goto loc_8257E0EC;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,1608(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,100
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 100, ctx.xer);
	// ble cr6,0x8257e0e0
	if (!ctx.cr6.gt) goto loc_8257E0E0;
	// li r31,100
	ctx.r31.s64 = 100;
	// b 0x8257e0ec
	goto loc_8257E0EC;
loc_8257E0E0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8257e0ec
	if (!ctx.cr6.lt) goto loc_8257E0EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257E0EC:
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

__attribute__((alias("__imp__sub_8257E108"))) PPC_WEAK_FUNC(sub_8257E108);
PPC_FUNC_IMPL(__imp__sub_8257E108) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257E120;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-8184
	ctx.r8.s64 = ctx.r11.s64 + -8184;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257e160
	if (!ctx.cr6.gt) goto loc_8257E160;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257E144:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257e168
	if (ctx.cr6.eq) goto loc_8257E168;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257e144
	if (ctx.cr6.lt) goto loc_8257E144;
loc_8257E160:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257E168;
	sub_82410060(ctx, base);
loc_8257E168:
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

__attribute__((alias("__imp__sub_8257E180"))) PPC_WEAK_FUNC(sub_8257E180);
PPC_FUNC_IMPL(__imp__sub_8257E180) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-8080
	ctx.r4.s64 = ctx.r9.s64 + -8080;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,1428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1428, ctx.r10.u32);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E1B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r4,r11,-21656
	ctx.r4.s64 = ctx.r11.s64 + -21656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E1D8;
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

__attribute__((alias("__imp__sub_8257E1F0"))) PPC_WEAK_FUNC(sub_8257E1F0);
PPC_FUNC_IMPL(__imp__sub_8257E1F0) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E224;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257e25c
	if (ctx.cr6.eq) goto loc_8257E25C;
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257E234;
	sub_82414510(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e244
	if (ctx.cr0.eq) goto loc_8257E244;
	// stw r30,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r30.u32);
loc_8257E244:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257E24C;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e25c
	if (ctx.cr0.eq) goto loc_8257E25C;
	// lwz r11,1408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// stw r30,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r30.u32);
loc_8257E25C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f1398
	ctx.lr = 0x8257E264;
	sub_824F1398(ctx, base);
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

__attribute__((alias("__imp__sub_8257E280"))) PPC_WEAK_FUNC(sub_8257E280);
PPC_FUNC_IMPL(__imp__sub_8257E280) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f1398
	ctx.lr = 0x8257E2A4;
	sub_824F1398(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,1600(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,1088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E2C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257E2CC;
	sub_82414510(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,1616(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,1612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,1628(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1628, temp.u32);
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// bl 0x82570930
	ctx.lr = 0x8257E2EC;
	sub_82570930(ctx, base);
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

__attribute__((alias("__imp__sub_8257E308"))) PPC_WEAK_FUNC(sub_8257E308);
PPC_FUNC_IMPL(__imp__sub_8257E308) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257dc98
	sub_8257DC98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E310"))) PPC_WEAK_FUNC(sub_8257E310);
PPC_FUNC_IMPL(__imp__sub_8257E310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9916
	ctx.r3.s64 = ctx.r11.s64 + -9916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E320"))) PPC_WEAK_FUNC(sub_8257E320);
PPC_FUNC_IMPL(__imp__sub_8257E320) {
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
	// beq cr6,0x8257e358
	if (ctx.cr6.eq) goto loc_8257E358;
	// bl 0x823ba168
	ctx.lr = 0x8257E348;
	sub_823BA168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257e358
	if (!ctx.cr6.eq) goto loc_8257E358;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257e364
	goto loc_8257E364;
loc_8257E358:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257E364;
	sub_82570278(ctx, base);
loc_8257E364:
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

__attribute__((alias("__imp__sub_8257E380"))) PPC_WEAK_FUNC(sub_8257E380);
PPC_FUNC_IMPL(__imp__sub_8257E380) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba168
	sub_823BA168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E388"))) PPC_WEAK_FUNC(sub_8257E388);
PPC_FUNC_IMPL(__imp__sub_8257E388) {
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
	ctx.lr = 0x8257E3A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257e3e8
	if (ctx.cr0.eq) goto loc_8257E3E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257E3BC;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-29000
	ctx.r11.s64 = ctx.r11.s64 + -29000;
	// addi r10,r10,-27908
	ctx.r10.s64 = ctx.r10.s64 + -27908;
	// addi r9,r9,-27856
	ctx.r9.s64 = ctx.r9.s64 + -27856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8257e3ec
	goto loc_8257E3EC;
loc_8257E3E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257E3EC:
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

__attribute__((alias("__imp__sub_8257E408"))) PPC_WEAK_FUNC(sub_8257E408);
PPC_FUNC_IMPL(__imp__sub_8257E408) {
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
	// bl 0x823ba168
	ctx.lr = 0x8257E428;
	sub_823BA168(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257e43c
	if (ctx.cr6.eq) goto loc_8257E43C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257E43C;
	sub_825702D8(ctx, base);
loc_8257E43C:
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

__attribute__((alias("__imp__sub_8257E458"))) PPC_WEAK_FUNC(sub_8257E458);
PPC_FUNC_IMPL(__imp__sub_8257E458) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-29000
	ctx.r11.s64 = ctx.r11.s64 + -29000;
	// addi r10,r10,-27908
	ctx.r10.s64 = ctx.r10.s64 + -27908;
	// addi r9,r9,-27856
	ctx.r9.s64 = ctx.r9.s64 + -27856;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82570708
	ctx.lr = 0x8257E49C;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257e4ac
	if (ctx.cr0.eq) goto loc_8257E4AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8257E4AC;
	sub_82332DB8(ctx, base);
loc_8257E4AC:
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

__attribute__((alias("__imp__sub_8257E4C8"))) PPC_WEAK_FUNC(sub_8257E4C8);
PPC_FUNC_IMPL(__imp__sub_8257E4C8) {
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
	// bl 0x825705f8
	ctx.lr = 0x8257E4E4;
	sub_825705F8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,14112
	ctx.r8.s64 = 924844032;
	// addi r11,r11,-29000
	ctx.r11.s64 = ctx.r11.s64 + -29000;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-27908
	ctx.r10.s64 = ctx.r10.s64 + -27908;
	// addi r9,r9,-27856
	ctx.r9.s64 = ctx.r9.s64 + -27856;
	// ori r11,r8,53358
	ctx.r11.u64 = ctx.r8.u64 | 53358;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r30,r31,1492
	ctx.r30.s64 = ctx.r31.s64 + 1492;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x8257E524;
	sub_82410060(ctx, base);
	// lis r11,9385
	ctx.r11.s64 = 615055360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,21604
	ctx.r11.u64 = ctx.r11.u64 | 21604;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8257E53C;
	sub_82410060(ctx, base);
	// lis r11,7330
	ctx.r11.s64 = 480378880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,14075
	ctx.r11.u64 = ctx.r11.u64 | 14075;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82410060
	ctx.lr = 0x8257E554;
	sub_82410060(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1432, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8257E578"))) PPC_WEAK_FUNC(sub_8257E578);
PPC_FUNC_IMPL(__imp__sub_8257E578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8257E580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257e634
	if (ctx.cr6.eq) goto loc_8257E634;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824f6598
	ctx.lr = 0x8257E59C;
	sub_824F6598(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8257e634
	if (ctx.cr0.eq) goto loc_8257E634;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r3,28
	ctx.r3.s64 = 28;
	// lfs f0,3436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3108, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x8257E5B8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257e620
	if (ctx.cr0.eq) goto loc_8257E620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824defd8
	ctx.lr = 0x8257E5C8;
	sub_824DEFD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e5d8
	if (ctx.cr0.eq) goto loc_8257E5D8;
	// lwz r29,80(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x8257e5dc
	goto loc_8257E5DC;
loc_8257E5D8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8257E5DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8257E5E8;
	sub_82833180(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r11,r11,4576
	ctx.r11.s64 = ctx.r11.s64 + 4576;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x8257e624
	goto loc_8257E624;
loc_8257E620:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8257E624:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8257E634;
	sub_82833A30(ctx, base);
loc_8257E634:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82570930
	ctx.lr = 0x8257E640;
	sub_82570930(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E648"))) PPC_WEAK_FUNC(sub_8257E648);
PPC_FUNC_IMPL(__imp__sub_8257E648) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257E660;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-6280
	ctx.r8.s64 = ctx.r11.s64 + -6280;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257e6a0
	if (!ctx.cr6.gt) goto loc_8257E6A0;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257E684:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257e6a8
	if (ctx.cr6.eq) goto loc_8257E6A8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257e684
	if (ctx.cr6.lt) goto loc_8257E684;
loc_8257E6A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257E6A8;
	sub_82410060(ctx, base);
loc_8257E6A8:
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

__attribute__((alias("__imp__sub_8257E6C0"))) PPC_WEAK_FUNC(sub_8257E6C0);
PPC_FUNC_IMPL(__imp__sub_8257E6C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-6184
	ctx.r4.s64 = ctx.r9.s64 + -6184;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257E6E8"))) PPC_WEAK_FUNC(sub_8257E6E8);
PPC_FUNC_IMPL(__imp__sub_8257E6E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257E6F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257e728
	if (ctx.cr6.eq) goto loc_8257E728;
	// bl 0x8239e220
	ctx.lr = 0x8257E708;
	sub_8239E220(ctx, base);
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
	ctx.lr = 0x8257E720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8257e72c
	goto loc_8257E72C;
loc_8257E728:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8257E72C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257e9c0
	ctx.lr = 0x8257E738;
	sub_8257E9C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8257e750
	if (!ctx.cr0.eq) goto loc_8257E750;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8257eb30
	ctx.lr = 0x8257E74C;
	sub_8257EB30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8257E750:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257E76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E778"))) PPC_WEAK_FUNC(sub_8257E778);
PPC_FUNC_IMPL(__imp__sub_8257E778) {
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
	// lwz r31,1584(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257e7bc
	if (ctx.cr6.eq) goto loc_8257E7BC;
	// bl 0x8239e770
	ctx.lr = 0x8257E798;
	sub_8239E770(ctx, base);
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
	ctx.lr = 0x8257E7B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8257e7c0
	if (!ctx.cr0.eq) goto loc_8257E7C0;
loc_8257E7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257E7C0:
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

__attribute__((alias("__imp__sub_8257E7D8"))) PPC_WEAK_FUNC(sub_8257E7D8);
PPC_FUNC_IMPL(__imp__sub_8257E7D8) {
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
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// bl 0x824f6598
	ctx.lr = 0x8257E7EC;
	sub_824F6598(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257e804
	if (ctx.cr0.eq) goto loc_8257E804;
	// lwz r11,6096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// li r3,100
	ctx.r3.s64 = 100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257e808
	if (!ctx.cr6.eq) goto loc_8257E808;
loc_8257E804:
	// li r3,80
	ctx.r3.s64 = 80;
loc_8257E808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257E818"))) PPC_WEAK_FUNC(sub_8257E818);
PPC_FUNC_IMPL(__imp__sub_8257E818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257E820;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x8257E84C;
	sub_823FFC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257e880
	if (ctx.cr6.eq) goto loc_8257E880;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82332c38
	ctx.lr = 0x8257E880;
	sub_82332C38(ctx, base);
loc_8257E880:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257e8a4
	if (ctx.cr6.eq) goto loc_8257E8A4;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82332c38
	ctx.lr = 0x8257E8A4;
	sub_82332C38(ctx, base);
loc_8257E8A4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14124
	ctx.r3.s64 = ctx.r11.s64 + -14124;
	// bl 0x82816528
	ctx.lr = 0x8257E8B0;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x8257E8C0;
	sub_82410060(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x8257E8D4;
	sub_82410060(ctx, base);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823ffc38
	ctx.lr = 0x8257E8E4;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x8257E8F8;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-24640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24640);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x8257E960;
	sub_824D7B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257e99c
	if (ctx.cr0.eq) goto loc_8257E99C;
	// lfs f13,624(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8257E99C:
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8239d768
	ctx.lr = 0x8257E9A8;
	sub_8239D768(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8239d768
	ctx.lr = 0x8257E9B0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257E9C0"))) PPC_WEAK_FUNC(sub_8257E9C0);
PPC_FUNC_IMPL(__imp__sub_8257E9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8257E9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257eb24
	if (ctx.cr6.eq) goto loc_8257EB24;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8257e818
	ctx.lr = 0x8257E9EC;
	sub_8257E818(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8257eb24
	if (ctx.cr0.eq) goto loc_8257EB24;
	// lfs f0,1696(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1696);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8257ea4c
	if (!ctx.cr6.gt) goto loc_8257EA4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,1504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1072);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257EA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257EA30;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257ea40
	if (ctx.cr0.eq) goto loc_8257EA40;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
loc_8257EA40:
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8257eb24
	goto loc_8257EB24;
loc_8257EA4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x8257EA64;
	sub_823FFC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257ea94
	if (ctx.cr6.eq) goto loc_8257EA94;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82332c38
	ctx.lr = 0x8257EA94;
	sub_82332C38(ctx, base);
loc_8257EA94:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257eab8
	if (ctx.cr6.eq) goto loc_8257EAB8;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82332c38
	ctx.lr = 0x8257EAB8;
	sub_82332C38(ctx, base);
loc_8257EAB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14124
	ctx.r3.s64 = ctx.r11.s64 + -14124;
	// bl 0x82816528
	ctx.lr = 0x8257EAC4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82410060
	ctx.lr = 0x8257EAD4;
	sub_82410060(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82410060
	ctx.lr = 0x8257EAE8;
	sub_82410060(ctx, base);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823ffc38
	ctx.lr = 0x8257EAF8;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x8257EB0C;
	sub_824D5A80(ctx, base);
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8239d768
	ctx.lr = 0x8257EB1C;
	sub_8239D768(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8239d768
	ctx.lr = 0x8257EB24;
	sub_8239D768(ctx, base);
loc_8257EB24:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EB30"))) PPC_WEAK_FUNC(sub_8257EB30);
PPC_FUNC_IMPL(__imp__sub_8257EB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8257EB38;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8257edf8
	if (ctx.cr6.eq) goto loc_8257EDF8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-8052
	ctx.r3.s64 = ctx.r11.s64 + -8052;
	// bl 0x82816528
	ctx.lr = 0x8257EB60;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8257EB74;
	sub_829B98F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8257EB78;
	sub_82333A20(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,1920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257eb94
	if (!ctx.cr6.eq) goto loc_8257EB94;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_8257EB94:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8257edf8
	if (ctx.cr6.eq) goto loc_8257EDF8;
	// lfs f13,628(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f11,3108(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3108);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8257ed94
	if (ctx.cr6.gt) goto loc_8257ED94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x828a95f0
	ctx.lr = 0x8257EBF4;
	sub_828A95F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8257ed94
	if (ctx.cr0.eq) goto loc_8257ED94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x8257EC14;
	sub_823FFC38(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// beq cr6,0x8257ec44
	if (ctx.cr6.eq) goto loc_8257EC44;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82332c38
	ctx.lr = 0x8257EC44;
	sub_82332C38(ctx, base);
loc_8257EC44:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257ec68
	if (ctx.cr6.eq) goto loc_8257EC68;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82332c38
	ctx.lr = 0x8257EC68;
	sub_82332C38(ctx, base);
loc_8257EC68:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// bl 0x82816528
	ctx.lr = 0x8257EC74;
	sub_82816528(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82410060
	ctx.lr = 0x8257EC84;
	sub_82410060(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82410060
	ctx.lr = 0x8257EC98;
	sub_82410060(ctx, base);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823ffc38
	ctx.lr = 0x8257ECA8;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d5a80
	ctx.lr = 0x8257ECBC;
	sub_824D5A80(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r11,r11,30356
	ctx.r11.s64 = ctx.r11.s64 + 30356;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f2.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,10540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10540);
	ctx.f0.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ld r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x8257ED24;
	sub_824D7B70(ctx, base);
	// lwz r11,6100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8257ed78
	if (ctx.cr6.eq) goto loc_8257ED78;
	// stw r30,6100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6100, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-29016
	ctx.r3.s64 = ctx.r11.s64 + -29016;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,1708(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1708, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r30,r11,r31
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x8257ED5C;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,1380(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257ED78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8257ED78:
	// lwz r11,1504(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8239d768
	ctx.lr = 0x8257ED88;
	sub_8239D768(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8239d768
	ctx.lr = 0x8257ED90;
	sub_8239D768(ctx, base);
	// b 0x8257edf8
	goto loc_8257EDF8;
loc_8257ED94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,1504(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,30356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1072(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1072);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8257EDD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1608(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1608);
	// bl 0x82414510
	ctx.lr = 0x8257EDE0;
	sub_82414510(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257edf0
	if (ctx.cr0.eq) goto loc_8257EDF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1956, ctx.r11.u32);
loc_8257EDF0:
	// lwz r11,1504(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1504);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8257EDF8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE08"))) PPC_WEAK_FUNC(sub_8257EE08);
PPC_FUNC_IMPL(__imp__sub_8257EE08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8257e458
	sub_8257E458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE10"))) PPC_WEAK_FUNC(sub_8257EE10);
PPC_FUNC_IMPL(__imp__sub_8257EE10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257e458
	sub_8257E458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE18"))) PPC_WEAK_FUNC(sub_8257EE18);
PPC_FUNC_IMPL(__imp__sub_8257EE18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257e408
	sub_8257E408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE20"))) PPC_WEAK_FUNC(sub_8257EE20);
PPC_FUNC_IMPL(__imp__sub_8257EE20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9892
	ctx.r3.s64 = ctx.r11.s64 + -9892;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257EE30"))) PPC_WEAK_FUNC(sub_8257EE30);
PPC_FUNC_IMPL(__imp__sub_8257EE30) {
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
	// beq cr6,0x8257ee68
	if (ctx.cr6.eq) goto loc_8257EE68;
	// bl 0x823ba328
	ctx.lr = 0x8257EE58;
	sub_823BA328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257ee68
	if (!ctx.cr6.eq) goto loc_8257EE68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257ee74
	goto loc_8257EE74;
loc_8257EE68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257EE74;
	sub_82570278(ctx, base);
loc_8257EE74:
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

__attribute__((alias("__imp__sub_8257EE90"))) PPC_WEAK_FUNC(sub_8257EE90);
PPC_FUNC_IMPL(__imp__sub_8257EE90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ba328
	sub_823BA328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257EE98"))) PPC_WEAK_FUNC(sub_8257EE98);
PPC_FUNC_IMPL(__imp__sub_8257EE98) {
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
	// li r3,1616
	ctx.r3.s64 = 1616;
	// bl 0x82833108
	ctx.lr = 0x8257EEB8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257ef04
	if (ctx.cr0.eq) goto loc_8257EF04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82571e20
	ctx.lr = 0x8257EECC;
	sub_82571E20(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-27832
	ctx.r11.s64 = ctx.r11.s64 + -27832;
	// addi r10,r10,-26740
	ctx.r10.s64 = ctx.r10.s64 + -26740;
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,1584
	ctx.r4.s64 = ctx.r30.s64 + 1584;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// bl 0x82873b58
	ctx.lr = 0x8257EEFC;
	sub_82873B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8257ef08
	goto loc_8257EF08;
loc_8257EF04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257EF08:
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

__attribute__((alias("__imp__sub_8257EF20"))) PPC_WEAK_FUNC(sub_8257EF20);
PPC_FUNC_IMPL(__imp__sub_8257EF20) {
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
	// bl 0x823ba328
	ctx.lr = 0x8257EF40;
	sub_823BA328(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8257ef54
	if (ctx.cr6.eq) goto loc_8257EF54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x825702d8
	ctx.lr = 0x8257EF54;
	sub_825702D8(ctx, base);
loc_8257EF54:
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

__attribute__((alias("__imp__sub_8257EF70"))) PPC_WEAK_FUNC(sub_8257EF70);
PPC_FUNC_IMPL(__imp__sub_8257EF70) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r11,r11,-27832
	ctx.r11.s64 = ctx.r11.s64 + -27832;
	// addi r10,r10,-26740
	ctx.r10.s64 = ctx.r10.s64 + -26740;
	// addi r9,r9,-26688
	ctx.r9.s64 = ctx.r9.s64 + -26688;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8239d768
	ctx.lr = 0x8257EFB8;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570708
	ctx.lr = 0x8257EFC0;
	sub_82570708(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257efd0
	if (ctx.cr0.eq) goto loc_8257EFD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8257EFD0;
	sub_82332DB8(ctx, base);
loc_8257EFD0:
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

__attribute__((alias("__imp__sub_8257EFF0"))) PPC_WEAK_FUNC(sub_8257EFF0);
PPC_FUNC_IMPL(__imp__sub_8257EFF0) {
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
	// bl 0x8257a570
	ctx.lr = 0x8257F008;
	sub_8257A570(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r3,r31,1516
	ctx.r3.s64 = ctx.r31.s64 + 1516;
	// addi r8,r11,-2640
	ctx.r8.s64 = ctx.r11.s64 + -2640;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lwz r11,1532(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8257f048
	if (!ctx.cr6.gt) goto loc_8257F048;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8257F02C:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8257f050
	if (ctx.cr6.eq) goto loc_8257F050;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257f02c
	if (ctx.cr6.lt) goto loc_8257F02C;
loc_8257F048:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x8257F050;
	sub_82410060(ctx, base);
loc_8257F050:
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

__attribute__((alias("__imp__sub_8257F068"))) PPC_WEAK_FUNC(sub_8257F068);
PPC_FUNC_IMPL(__imp__sub_8257F068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stw r10,1428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1428, ctx.r10.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r9,-2544
	ctx.r4.s64 = ctx.r9.s64 + -2544;
	// lwz r11,1040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1040);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8257F090"))) PPC_WEAK_FUNC(sub_8257F090);
PPC_FUNC_IMPL(__imp__sub_8257F090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8257F098;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61740
	ctx.lr = 0x8257F0A0;
	__savefpr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r3,r10,-8052
	ctx.r3.s64 = ctx.r10.s64 + -8052;
	// lwz r11,1600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// lwz r23,1584(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1584);
	// addi r22,r11,-1
	ctx.r22.s64 = ctx.r11.s64 + -1;
	// bl 0x82816528
	ctx.lr = 0x8257F0CC;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8257F0E0;
	sub_829B98F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8257F0E4;
	sub_82333A20(ctx, base);
	// lwz r11,1600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r28.u32);
	// ble cr6,0x8257f144
	if (!ctx.cr6.gt) goto loc_8257F144;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8257F11C:
	// lwz r11,1596(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1596);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82410060
	ctx.lr = 0x8257F12C;
	sub_82410060(ctx, base);
	// lwz r11,1600(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257f11c
	if (ctx.cr6.lt) goto loc_8257F11C;
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
loc_8257F144:
	// lwz r30,1600(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8257f1b0
	if (!ctx.cr0.gt) goto loc_8257F1B0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8257F158:
	// bl 0x82a4cd78
	ctx.lr = 0x8257F15C;
	sub_82A4CD78(ctx, base);
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// divw r10,r3,r9
	ctx.r10.s32 = ctx.r3.s32 / ctx.r9.s32;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// twllei r9,0
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// andc r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r10,-1
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r8,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r8.u32);
	// lwz r30,1600(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1600);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8257f158
	if (ctx.cr6.lt) goto loc_8257F158;
loc_8257F1B0:
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r28,r11,-32488
	ctx.r28.s64 = ctx.r11.s64 + -32488;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f29,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r24,620
	ctx.r29.s64 = ctx.r24.s64 + 620;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// lfs f27,-300(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -300);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,16668(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16668);
	ctx.f28.f64 = double(temp.f32);
	// lfs f26,-188(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -188);
	ctx.f26.f64 = double(temp.f32);
loc_8257F1E8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ca6d0
	ctx.lr = 0x8257F1F4;
	sub_824CA6D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8257f30c
	if (ctx.cr0.eq) goto loc_8257F30C;
	// addi r4,r3,1728
	ctx.r4.s64 = ctx.r3.s64 + 1728;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8257F20C;
	sub_82A4EA80(ctx, base);
	// lfs f2,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x8257F218;
	sub_82825A58(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f2,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x8257F228;
	sub_82825A58(ctx, base);
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f0,628(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,620(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,624(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_8257F278:
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,620(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r23,620
	ctx.r11.s64 = ctx.r23.s64 + 620;
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f7,624(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 624);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f6,628(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 628);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8257f330
	if (!ctx.cr6.eq) goto loc_8257F330;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// rotlwi r5,r4,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// lfs f11,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// b 0x8257f35c
	goto loc_8257F35C;
loc_8257F30C:
	// lwz r9,620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// addi r10,r31,620
	ctx.r10.s64 = ctx.r31.s64 + 620;
	// lwz r8,624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// lwz r7,628(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// b 0x8257f278
	goto loc_8257F278;
loc_8257F330:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8257f348
	if (!ctx.cr6.lt) goto loc_8257F348;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// b 0x8257f35c
	goto loc_8257F35C;
loc_8257F348:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8257F35C:
	// fmuls f0,f9,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f0,f8,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f10,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8257f398
	if (!ctx.cr6.eq) goto loc_8257F398;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8257f3c4
	goto loc_8257F3C4;
loc_8257F398:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8257f3b0
	if (!ctx.cr6.lt) goto loc_8257F3B0;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// b 0x8257f3c4
	goto loc_8257F3C4;
loc_8257F3B0:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
loc_8257F3C4:
	// lfs f9,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f13,f12,f6,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f0,f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f9,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// fmadds f0,f8,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// ble cr6,0x8257f41c
	if (!ctx.cr6.gt) goto loc_8257F41C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8257f42c
	goto loc_8257F42C;
loc_8257F41C:
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x8257f42c
	if (!ctx.cr6.gt) goto loc_8257F42C;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// blt cr6,0x8257f444
	if (ctx.cr6.lt) goto loc_8257F444;
loc_8257F42C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// bne 0x8257f1e8
	if (!ctx.cr0.eq) goto loc_8257F1E8;
	// b 0x8257f448
	goto loc_8257F448;
loc_8257F444:
	// li r24,1
	ctx.r24.s64 = 1;
loc_8257F448:
	// lwz r11,1408(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1408);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// beq cr6,0x8257f4b4
	if (ctx.cr6.eq) goto loc_8257F4B4;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257F474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1408(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1408);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8257f48c
	if (ctx.cr6.eq) goto loc_8257F48C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// b 0x8257f490
	goto loc_8257F490;
loc_8257F48C:
	// stw r27,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r27.u32);
loc_8257F490:
	// lwz r11,1504(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1504);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8257F498:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8239d768
	ctx.lr = 0x8257F4A0;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a6178c
	ctx.lr = 0x8257F4B0;
	__restfpr_26(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
loc_8257F4B4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8257f4f4
	if (ctx.cr6.eq) goto loc_8257F4F4;
	// lwz r11,1492(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1492);
	// stw r27,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r27.u32);
	// lwz r11,1492(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1492);
	// stw r9,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r9.u32);
	// stw r8,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r8.u32);
	// stw r7,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r7.u32);
	// lwz r11,1408(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1408);
	// stw r27,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r27.u32);
	// stw r9,1684(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1684, ctx.r9.u32);
	// stw r8,1688(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1688, ctx.r8.u32);
	// stw r7,1692(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1692, ctx.r7.u32);
	// lwz r11,1504(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1504);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8257f498
	goto loc_8257F498;
loc_8257F4F4:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x8257f498
	goto loc_8257F498;
}

__attribute__((alias("__imp__sub_8257F500"))) PPC_WEAK_FUNC(sub_8257F500);
PPC_FUNC_IMPL(__imp__sub_8257F500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8257F508;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257F530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82919328
	ctx.lr = 0x8257F53C;
	sub_82919328(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r30,84(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x8257f584
	if (ctx.cr6.eq) goto loc_8257F584;
loc_8257F554:
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8257f570
	if (!ctx.cr6.eq) goto loc_8257F570;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,1584
	ctx.r3.s64 = ctx.r29.s64 + 1584;
	// bl 0x82410060
	ctx.lr = 0x8257F570;
	sub_82410060(ctx, base);
loc_8257F570:
	// lwz r30,1720(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bne cr6,0x8257f554
	if (!ctx.cr6.eq) goto loc_8257F554;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_8257F584:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// addi r3,r11,7388
	ctx.r3.s64 = ctx.r11.s64 + 7388;
	// lwz r11,7388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8257F59C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82570860
	ctx.lr = 0x8257F5A4;
	sub_82570860(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F5B0"))) PPC_WEAK_FUNC(sub_8257F5B0);
PPC_FUNC_IMPL(__imp__sub_8257F5B0) {
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
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x824f6598
	ctx.lr = 0x8257F5CC;
	sub_824F6598(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8257f5dc
	if (!ctx.cr0.eq) goto loc_8257F5DC;
loc_8257F5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257f5f8
	goto loc_8257F5F8;
loc_8257F5DC:
	// lwz r11,6096(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8257f5d4
	if (!ctx.cr6.eq) goto loc_8257F5D4;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_8257F5F8:
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

__attribute__((alias("__imp__sub_8257F610"))) PPC_WEAK_FUNC(sub_8257F610);
PPC_FUNC_IMPL(__imp__sub_8257F610) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61748
	ctx.lr = 0x8257F628;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,1584(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1584);
	// bl 0x824f6598
	ctx.lr = 0x8257F634;
	sub_824F6598(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-8052
	ctx.r3.s64 = ctx.r11.s64 + -8052;
	// bl 0x82816528
	ctx.lr = 0x8257F644;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8257F658;
	sub_829B98F8(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x8257F65C;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8257f6e0
	if (ctx.cr0.eq) goto loc_8257F6E0;
	// lfs f0,620(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x829bed50
	ctx.lr = 0x8257F690;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f28,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8257F6A0;
	sub_829BED50(ctx, base);
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f29,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f31,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8257f6d0
	if (!ctx.cr6.lt) goto loc_8257F6D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8257F6D0:
	// lfs f13,3112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3112);
	ctx.f13.f64 = double(temp.f32);
	// li r3,90
	ctx.r3.s64 = 90;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8257f6e4
	if (!ctx.cr6.gt) goto loc_8257F6E4;
loc_8257F6E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8257F6E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82a61794
	ctx.lr = 0x8257F6F0;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F708"))) PPC_WEAK_FUNC(sub_8257F708);
PPC_FUNC_IMPL(__imp__sub_8257F708) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257ef70
	sub_8257EF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F710"))) PPC_WEAK_FUNC(sub_8257F710);
PPC_FUNC_IMPL(__imp__sub_8257F710) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8257ef70
	sub_8257EF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F718"))) PPC_WEAK_FUNC(sub_8257F718);
PPC_FUNC_IMPL(__imp__sub_8257F718) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8257ef20
	sub_8257EF20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8257F720"))) PPC_WEAK_FUNC(sub_8257F720);
PPC_FUNC_IMPL(__imp__sub_8257F720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-9156
	ctx.r3.s64 = ctx.r11.s64 + -9156;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8257F730"))) PPC_WEAK_FUNC(sub_8257F730);
PPC_FUNC_IMPL(__imp__sub_8257F730) {
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
	// beq cr6,0x8257f768
	if (ctx.cr6.eq) goto loc_8257F768;
	// bl 0x823bc488
	ctx.lr = 0x8257F758;
	sub_823BC488(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8257f768
	if (!ctx.cr6.eq) goto loc_8257F768;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8257f774
	goto loc_8257F774;
loc_8257F768:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82570278
	ctx.lr = 0x8257F774;
	sub_82570278(ctx, base);
loc_8257F774:
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

__attribute__((alias("__imp__sub_8257F790"))) PPC_WEAK_FUNC(sub_8257F790);
PPC_FUNC_IMPL(__imp__sub_8257F790) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc488
	sub_823BC488(ctx, base);
	return;
}

