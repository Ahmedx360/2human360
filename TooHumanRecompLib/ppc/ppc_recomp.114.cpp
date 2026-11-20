#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8276A300"))) PPC_WEAK_FUNC(sub_8276A300);
PPC_FUNC_IMPL(__imp__sub_8276A300) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8276a360
	if (ctx.cr6.eq) goto loc_8276A360;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8276a358
	if (ctx.cr6.eq) goto loc_8276A358;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8276a350
	if (ctx.cr6.eq) goto loc_8276A350;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x8276a348
	if (ctx.cr6.eq) goto loc_8276A348;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x8276a340
	if (ctx.cr6.eq) goto loc_8276A340;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8276a364
	if (!ctx.cr6.eq) goto loc_8276A364;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x8276a364
	goto loc_8276A364;
loc_8276A340:
	// li r11,302
	ctx.r11.s64 = 302;
	// b 0x8276a364
	goto loc_8276A364;
loc_8276A348:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8276a364
	goto loc_8276A364;
loc_8276A350:
	// li r11,254
	ctx.r11.s64 = 254;
	// b 0x8276a364
	goto loc_8276A364;
loc_8276A358:
	// li r11,274
	ctx.r11.s64 = 274;
	// b 0x8276a364
	goto loc_8276A364;
loc_8276A360:
	// li r11,222
	ctx.r11.s64 = 222;
loc_8276A364:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x8276a38c
	if (!ctx.cr6.eq) goto loc_8276A38C;
	// lhz r10,1275(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1275);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8276A38C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276A398"))) PPC_WEAK_FUNC(sub_8276A398);
PPC_FUNC_IMPL(__imp__sub_8276A398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82a6f2f0
	ctx.lr = 0x8276A3B0;
	sub_82A6F2F0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,17284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 17284, ctx.r3.u32);
	// beq 0x8276a4ec
	if (ctx.cr0.eq) goto loc_8276A4EC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276a4ec
	if (ctx.cr6.eq) goto loc_8276A4EC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// stw r11,10872(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10872, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,17256(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17256, ctx.r10.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r9,17260(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17260, ctx.r9.u32);
	// stw r11,17264(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17264, ctx.r11.u32);
	// bl 0x82a6f2f0
	ctx.lr = 0x8276A3FC;
	sub_82A6F2F0(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,17272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17272, ctx.r11.u32);
	// bl 0x82d17800
	ctx.lr = 0x8276A418;
	sub_82D17800(ctx, base);
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r3,9528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9528, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82d17898
	ctx.lr = 0x8276A444;
	sub_82D17898(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// lwz r3,9528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9528);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x82d17828
	ctx.lr = 0x8276A460;
	sub_82D17828(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x8276A474;
	sub_82A4EFB0(ctx, base);
loc_8276A474:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d17738
	ctx.lr = 0x8276A47C;
	sub_82D17738(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276a474
	if (ctx.cr0.eq) goto loc_8276A474;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6280
	ctx.r4.s64 = ctx.r11.s64 + 6280;
	// bl 0x82d17698
	ctx.lr = 0x8276A494;
	sub_82D17698(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,6808
	ctx.r3.s64 = ctx.r11.s64 + 6808;
	// bl 0x82773778
	ctx.lr = 0x8276A4A0;
	sub_82773778(ctx, base);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// lis r6,-31954
	ctx.r6.s64 = -2094137344;
	// stw r11,9372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9372, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,9368(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9368, ctx.r10.u32);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// stw r9,9224(r7)
	PPC_STORE_U32(ctx.r7.u32 + 9224, ctx.r9.u32);
	// lis r7,-31956
	ctx.r7.s64 = -2094268416;
	// stw r11,9736(r6)
	PPC_STORE_U32(ctx.r6.u32 + 9736, ctx.r11.u32);
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,9216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9216, ctx.r10.u32);
	// stw r9,-7188(r7)
	PPC_STORE_U32(ctx.r7.u32 + -7188, ctx.r9.u32);
	// stw r11,10864(r6)
	PPC_STORE_U32(ctx.r6.u32 + 10864, ctx.r11.u32);
	// b 0x8276a4f4
	goto loc_8276A4F4;
loc_8276A4EC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8276A4F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276A508"))) PPC_WEAK_FUNC(sub_8276A508);
PPC_FUNC_IMPL(__imp__sub_8276A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276A510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r11,9720
	ctx.r10.s64 = ctx.r11.s64 + 9720;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// stw r29,9720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9720, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r8,r8,6280
	ctx.r8.s64 = ctx.r8.s64 + 6280;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// lis r5,-31954
	ctx.r5.s64 = -2094137344;
	// stw r29,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// stw r11,10840(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10840, ctx.r11.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r3,r5,9532
	ctx.r3.s64 = ctx.r5.s64 + 9532;
	// stw r10,216(r8)
	PPC_STORE_U32(ctx.r8.u32 + 216, ctx.r10.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r9,10848(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10848, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,10784(r6)
	PPC_STORE_U32(ctx.r6.u32 + 10784, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8276A574;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r31,r11,6792
	ctx.r31.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276a590
	if (!ctx.cr6.gt) goto loc_8276A590;
	// twi 31,r0,22
loc_8276A590:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8276A594:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276a5a0
	if (!ctx.cr6.gt) goto loc_8276A5A0;
	// twi 31,r0,22
loc_8276A5A0:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276a5d4
	if (ctx.cr6.eq) goto loc_8276A5D4;
	// blt cr6,0x8276a5b0
	if (ctx.cr6.lt) goto loc_8276A5B0;
	// twi 31,r0,22
loc_8276A5B0:
	// lwz r3,252(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// bl 0x82332db8
	ctx.lr = 0x8276A5B8;
	sub_82332DB8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276a5c8
	if (ctx.cr6.lt) goto loc_8276A5C8;
	// twi 31,r0,22
loc_8276A5C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// b 0x8276a594
	goto loc_8276A594;
loc_8276A5D4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276a5e8
	if (!ctx.cr6.gt) goto loc_8276A5E8;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_8276A5E8:
	// beq cr6,0x8276a5f0
	if (ctx.cr6.eq) goto loc_8276A5F0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8276A5F0:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,9688
	ctx.r3.s64 = ctx.r11.s64 + 9688;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a455d0
	ctx.lr = 0x8276A604;
	sub_82A455D0(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r3,r11,9592
	ctx.r3.s64 = ctx.r11.s64 + 9592;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a455d0
	ctx.lr = 0x8276A618;
	sub_82A455D0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// addi r11,r11,7260
	ctx.r11.s64 = ctx.r11.s64 + 7260;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// stw r10,10824(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10824, ctx.r10.u32);
	// stw r9,10836(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10836, ctx.r9.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r8,10832(r6)
	PPC_STORE_U32(ctx.r6.u32 + 10832, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276a660
	if (!ctx.cr6.gt) goto loc_8276A660;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
loc_8276A660:
	// beq cr6,0x8276a668
	if (ctx.cr6.eq) goto loc_8276A668;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8276A668:
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,9216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9216);
	// stw r11,10864(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10864, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276a690
	if (ctx.cr6.eq) goto loc_8276A690;
	// bl 0x82332db8
	ctx.lr = 0x8276A688;
	sub_82332DB8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,9216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9216, ctx.r11.u32);
loc_8276A690:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276a6c8
	if (ctx.cr6.eq) goto loc_8276A6C8;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276a6b8
	if (ctx.cr6.eq) goto loc_8276A6B8;
	// bl 0x82d17728
	ctx.lr = 0x8276A6B0;
	sub_82D17728(ctx, base);
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
loc_8276A6B8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276A6C0;
	sub_82332DB8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,-7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7188, ctx.r11.u32);
loc_8276A6C8:
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lwz r3,9736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9736);
	// stw r11,10844(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10844, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276a6fc
	if (ctx.cr6.eq) goto loc_8276A6FC;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8276a6fc
	if (!ctx.cr6.eq) goto loc_8276A6FC;
	// bl 0x82332db8
	ctx.lr = 0x8276A6F4;
	sub_82332DB8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r11.u32);
loc_8276A6FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276A708"))) PPC_WEAK_FUNC(sub_8276A708);
PPC_FUNC_IMPL(__imp__sub_8276A708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276A710;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17284(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17284);
	// bl 0x8312eb1c
	ctx.lr = 0x8276A730;
	sub_8312EB1C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8276a9c8
	if (ctx.cr0.eq) goto loc_8276A9C8;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276a77c
	if (ctx.cr6.eq) goto loc_8276A77C;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276a9c8
	if (!ctx.cr6.gt) goto loc_8276A9C8;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8276a9c8
	if (ctx.cr6.gt) goto loc_8276A9C8;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10796, ctx.r11.u32);
	// b 0x8276a9c8
	goto loc_8276A9C8;
loc_8276A77C:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276a814
	if (!ctx.cr6.eq) goto loc_8276A814;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276a814
	if (!ctx.cr6.eq) goto loc_8276A814;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8276a814
	if (ctx.cr6.eq) goto loc_8276A814;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8276a814
	if (ctx.cr6.eq) goto loc_8276A814;
	// lwz r10,1348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276a814
	if (!ctx.cr6.eq) goto loc_8276A814;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x8276A7DC;
	sub_828CEF18(ctx, base);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276A7F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1005
	ctx.r4.s64 = 1005;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8276A814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276A814:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82d183e0
	ctx.lr = 0x8276A820;
	sub_82D183E0(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r4,254
	ctx.r4.s64 = 254;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a46250
	ctx.lr = 0x8276A838;
	sub_82A46250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8276a858
	if (!ctx.cr0.eq) goto loc_8276A858;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276a858
	if (!ctx.cr6.eq) goto loc_8276A858;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,1000
	ctx.r4.s64 = 1000;
	// b 0x8276ab48
	goto loc_8276AB48;
loc_8276A858:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276a9c8
	if (ctx.cr6.eq) goto loc_8276A9C8;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// addi r10,r10,9532
	ctx.r10.s64 = ctx.r10.s64 + 9532;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_8276A874:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276a894
	if (!ctx.cr0.eq) goto loc_8276A894;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8276a874
	if (!ctx.cr6.eq) goto loc_8276A874;
loc_8276A894:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276a8a8
	if (!ctx.cr0.eq) goto loc_8276A8A8;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,1009
	ctx.r4.s64 = 1009;
	// b 0x8276ab48
	goto loc_8276AB48;
loc_8276A8A8:
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r3,9736(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276a8c4
	if (ctx.cr6.eq) goto loc_8276A8C4;
	// bl 0x82332db8
	ctx.lr = 0x8276A8BC;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9736, ctx.r11.u32);
loc_8276A8C4:
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82333900
	ctx.lr = 0x8276A8CC;
	sub_82333900(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// stw r31,9736(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9736, ctx.r31.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8276A8F8;
	sub_82A4EA80(ctx, base);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276a9e4
	if (ctx.cr6.eq) goto loc_8276A9E4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8276a938
	if (!ctx.cr6.eq) goto loc_8276A938;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1014
	ctx.r4.s64 = 1014;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8276A930:
	// bctrl 
	ctx.lr = 0x8276A934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276aad8
	goto loc_8276AAD8;
loc_8276A938:
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276a97c
	if (ctx.cr6.eq) goto loc_8276A97C;
	// rotlwi r11,r31,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276A958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1012
	ctx.r4.s64 = 1012;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8276a930
	goto loc_8276A930;
loc_8276A97C:
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8276a9d8
	if (ctx.cr6.eq) goto loc_8276A9D8;
	// bctrl 
	ctx.lr = 0x8276A99C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1011
	ctx.r4.s64 = 1011;
loc_8276A9A0:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8276A9C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r28,1408(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1408, ctx.r28.u32);
loc_8276A9C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_8276A9D8:
	// bctrl 
	ctx.lr = 0x8276A9DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1010
	ctx.r4.s64 = 1010;
	// b 0x8276a9a0
	goto loc_8276A9A0;
loc_8276A9E4:
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r10,560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8276aa7c
	if (ctx.cr6.eq) goto loc_8276AA7C;
	// lwz r10,524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276aa3c
	if (!ctx.cr6.eq) goto loc_8276AA3C;
	// lwz r10,520(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276aa3c
	if (!ctx.cr6.eq) goto loc_8276AA3C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8276aa44
	if (ctx.cr6.eq) goto loc_8276AA44;
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8276aa3c
	if (ctx.cr6.eq) goto loc_8276AA3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AA34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1015
	ctx.r4.s64 = 1015;
	// b 0x8276a9a0
	goto loc_8276A9A0;
loc_8276AA3C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8276aa60
	if (!ctx.cr6.eq) goto loc_8276AA60;
loc_8276AA44:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AA58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1014
	ctx.r4.s64 = 1014;
	// b 0x8276a9a0
	goto loc_8276A9A0;
loc_8276AA60:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AA74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1013
	ctx.r4.s64 = 1013;
	// b 0x8276a9a0
	goto loc_8276A9A0;
loc_8276AA7C:
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276aad8
	if (ctx.cr6.eq) goto loc_8276AAD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne 0x8276aac4
	if (!ctx.cr0.eq) goto loc_8276AAC4;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8276aad8
	if (!ctx.cr0.eq) goto loc_8276AAD8;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8276AAC4:
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276AAD8:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,17288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8276aaf4
	if (!ctx.cr6.eq) goto loc_8276AAF4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8276aed8
	ctx.lr = 0x8276AAF0;
	sub_8276AED8(ctx, base);
	// b 0x8276ab04
	goto loc_8276AB04;
loc_8276AAF4:
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8276e958
	ctx.lr = 0x8276AB04;
	sub_8276E958(ctx, base);
loc_8276AB04:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AB1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276ab38
	if (!ctx.cr6.eq) goto loc_8276AB38;
	// lwz r11,1348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276a9c8
	if (ctx.cr6.eq) goto loc_8276A9C8;
loc_8276AB38:
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8276a9c8
	if (ctx.cr6.eq) goto loc_8276A9C8;
	// li r4,1016
	ctx.r4.s64 = 1016;
loc_8276AB48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AB64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276a9c8
	goto loc_8276A9C8;
}

__attribute__((alias("__imp__sub_8276AB68"))) PPC_WEAK_FUNC(sub_8276AB68);
PPC_FUNC_IMPL(__imp__sub_8276AB68) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276abb8
	if (ctx.cr6.eq) goto loc_8276ABB8;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276aba8
	if (ctx.cr6.eq) goto loc_8276ABA8;
	// bl 0x82d17728
	ctx.lr = 0x8276ABA0;
	sub_82D17728(ctx, base);
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_8276ABA8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276ABB0;
	sub_82332DB8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r11,-7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7188, ctx.r11.u32);
loc_8276ABB8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x8276ABC0;
	sub_82333900(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r3,-7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7188, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// lwz r9,284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8276ac04
	if (ctx.cr6.eq) goto loc_8276AC04;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8276ac04
	if (ctx.cr6.eq) goto loc_8276AC04;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8276ac1c
	if (!ctx.cr6.eq) goto loc_8276AC1C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// b 0x8276ac1c
	goto loc_8276AC1C;
loc_8276AC04:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// mulli r10,r10,92
	ctx.r10.s64 = ctx.r10.s64 * 92;
	// lwz r11,10800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10800);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8276AC1C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r6,r3,12
	ctx.r6.s64 = ctx.r3.s64 + 12;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82d176c8
	ctx.lr = 0x8276AC68;
	sub_82D176C8(ctx, base);
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

__attribute__((alias("__imp__sub_8276AC80"))) PPC_WEAK_FUNC(sub_8276AC80);
PPC_FUNC_IMPL(__imp__sub_8276AC80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lwz r11,-7188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7188);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276aebc
	if (ctx.cr6.eq) goto loc_8276AEBC;
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276aebc
	if (ctx.cr0.eq) goto loc_8276AEBC;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r7,13024(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,912(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 912);
	// lwz r6,284(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// beq 0x8276ae10
	if (ctx.cr0.eq) goto loc_8276AE10;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276ae10
	if (!ctx.cr0.eq) goto loc_8276AE10;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276ae10
	if (ctx.cr0.eq) goto loc_8276AE10;
	// lhz r11,14(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8276ae14
	if (!ctx.cr6.eq) goto loc_8276AE14;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,10236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10236);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276ae08
	if (!ctx.cr6.eq) goto loc_8276AE08;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lwz r9,10232(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10232);
	// lwz r8,10228(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10228);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276ae08
	if (!ctx.cr6.eq) goto loc_8276AE08;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8276adf4
	if (!ctx.cr6.eq) goto loc_8276ADF4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x8276ad44
	if (!ctx.cr6.eq) goto loc_8276AD44;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8276adf4
	if (ctx.cr6.eq) goto loc_8276ADF4;
loc_8276AD44:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// stw r11,10828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10828, ctx.r11.u32);
	// beq cr6,0x8276adb4
	if (ctx.cr6.eq) goto loc_8276ADB4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8276adb4
	if (ctx.cr6.eq) goto loc_8276ADB4;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8276aebc
	if (!ctx.cr6.eq) goto loc_8276AEBC;
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r31,9736(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9736);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,17296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17296, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8276AD90;
	sub_82A4EA80(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8276d598
	ctx.lr = 0x8276AD98;
	sub_8276D598(ctx, base);
	// lwz r3,9736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276aebc
	if (ctx.cr6.eq) goto loc_8276AEBC;
	// bl 0x82332db8
	ctx.lr = 0x8276ADA8;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9736(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9736, ctx.r11.u32);
	// b 0x8276aebc
	goto loc_8276AEBC;
loc_8276ADB4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,548(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 548);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// mulli r9,r9,92
	ctx.r9.s64 = ctx.r9.s64 * 92;
	// lwz r11,10800(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10800);
	// stw r10,17296(r7)
	PPC_STORE_U32(ctx.r7.u32 + 17296, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r8,9532
	ctx.r3.s64 = ctx.r8.s64 + 9532;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x82a4ea80
	ctx.lr = 0x8276ADE8;
	sub_82A4EA80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276d598
	ctx.lr = 0x8276ADF0;
	sub_8276D598(ctx, base);
	// b 0x8276aebc
	goto loc_8276AEBC;
loc_8276ADF4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276ae08
	if (!ctx.cr6.eq) goto loc_8276AE08;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8276ae14
	if (ctx.cr6.eq) goto loc_8276AE14;
loc_8276AE08:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8276ae14
	goto loc_8276AE14;
loc_8276AE10:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8276AE14:
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x8276ae84
	if (!ctx.cr6.eq) goto loc_8276AE84;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8276ae2c
	if (ctx.cr6.eq) goto loc_8276AE2C;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8276ae3c
	goto loc_8276AE3C;
loc_8276AE2C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x8276ae3c
	if (!ctx.cr6.eq) goto loc_8276AE3C;
	// li r4,5
	ctx.r4.s64 = 5;
loc_8276AE3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AE4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10832);
	// bl 0x8276aed8
	ctx.lr = 0x8276AE58;
	sub_8276AED8(ctx, base);
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,9736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9736);
	// stw r11,10828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10828, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276aebc
	if (ctx.cr6.eq) goto loc_8276AEBC;
	// bl 0x82332db8
	ctx.lr = 0x8276AE78;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r11.u32);
	// b 0x8276aebc
	goto loc_8276AEBC;
loc_8276AE84:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8276ae94
	if (ctx.cr6.eq) goto loc_8276AE94;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8276aea4
	goto loc_8276AEA4;
loc_8276AE94:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x8276aea4
	if (!ctx.cr6.eq) goto loc_8276AEA4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8276AEA4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276AEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8276aed8
	ctx.lr = 0x8276AEBC;
	sub_8276AED8(ctx, base);
loc_8276AEBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276AED8"))) PPC_WEAK_FUNC(sub_8276AED8);
PPC_FUNC_IMPL(__imp__sub_8276AED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8276AEE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r9,10824(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10824);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// addi r29,r10,6536
	ctx.r29.s64 = ctx.r10.s64 + 6536;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8276b050
	if (ctx.cr6.eq) goto loc_8276B050;
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// beq cr6,0x8276af30
	if (ctx.cr6.eq) goto loc_8276AF30;
	// cmpwi cr6,r11,4104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4104, ctx.xer);
	// beq cr6,0x8276af3c
	if (ctx.cr6.eq) goto loc_8276AF3C;
	// b 0x8276b088
	goto loc_8276B088;
loc_8276AF30:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10788, ctx.r11.u32);
loc_8276AF3C:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10848, ctx.r11.u32);
	// bl 0x8276ecf8
	ctx.lr = 0x8276AF4C;
	sub_8276ECF8(ctx, base);
	// lwz r11,10804(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276af60
	if (!ctx.cr6.eq) goto loc_8276AF60;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r11,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r11.u32);
loc_8276AF60:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276af74
	if (!ctx.cr6.gt) goto loc_8276AF74;
	// twi 31,r0,22
loc_8276AF74:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8276AF78:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276af84
	if (!ctx.cr6.gt) goto loc_8276AF84;
	// twi 31,r0,22
loc_8276AF84:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276afb4
	if (ctx.cr6.eq) goto loc_8276AFB4;
	// blt cr6,0x8276af94
	if (ctx.cr6.lt) goto loc_8276AF94;
	// twi 31,r0,22
loc_8276AF94:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r25,220(r9)
	PPC_STORE_U32(ctx.r9.u32 + 220, ctx.r25.u32);
	// blt cr6,0x8276afa4
	if (ctx.cr6.lt) goto loc_8276AFA4;
	// twi 31,r0,22
loc_8276AFA4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8276af78
	goto loc_8276AF78;
loc_8276AFB4:
	// rlwinm. r9,r24,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276b090
	if (!ctx.cr0.eq) goto loc_8276B090;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r8,9720
	ctx.r7.s64 = ctx.r8.s64 + 9720;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r9,10784(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10784, ctx.r9.u32);
	// stw r27,9720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9720, ctx.r27.u32);
	// stw r27,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r27.u32);
	// stw r27,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r27.u32);
	// stw r27,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r27.u32);
	// ble cr6,0x8276afe8
	if (!ctx.cr6.gt) goto loc_8276AFE8;
	// twi 31,r0,22
loc_8276AFE8:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276AFEC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276aff8
	if (!ctx.cr6.gt) goto loc_8276AFF8;
	// twi 31,r0,22
loc_8276AFF8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276b02c
	if (ctx.cr6.eq) goto loc_8276B02C;
	// blt cr6,0x8276b008
	if (ctx.cr6.lt) goto loc_8276B008;
	// twi 31,r0,22
loc_8276B008:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82332db8
	ctx.lr = 0x8276B010;
	sub_82332DB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276b020
	if (ctx.cr6.lt) goto loc_8276B020;
	// twi 31,r0,22
loc_8276B020:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276afec
	goto loc_8276AFEC;
loc_8276B02C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276b040
	if (!ctx.cr6.gt) goto loc_8276B040;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_8276B040:
	// beq cr6,0x8276b090
	if (ctx.cr6.eq) goto loc_8276B090;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8276b090
	goto loc_8276B090;
loc_8276B050:
	// lis r31,-31956
	ctx.r31.s64 = -2094268416;
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276b088
	if (ctx.cr6.eq) goto loc_8276B088;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276b078
	if (ctx.cr6.eq) goto loc_8276B078;
	// bl 0x82d17728
	ctx.lr = 0x8276B070;
	sub_82D17728(ctx, base);
	// lwz r11,-7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7188);
	// stw r27,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r27.u32);
loc_8276B078:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276B080;
	sub_82332DB8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,-7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -7188, ctx.r11.u32);
loc_8276B088:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276B090:
	// cmpwi cr6,r24,4096
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4096, ctx.xer);
	// bgt cr6,0x8276b444
	if (ctx.cr6.gt) goto loc_8276B444;
	// beq cr6,0x8276b3cc
	if (ctx.cr6.eq) goto loc_8276B3CC;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x8276b324
	if (ctx.cr6.lt) goto loc_8276B324;
	// beq cr6,0x8276b278
	if (ctx.cr6.eq) goto loc_8276B278;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// blt cr6,0x8276b220
	if (ctx.cr6.lt) goto loc_8276B220;
	// beq cr6,0x8276b210
	if (ctx.cr6.eq) goto loc_8276B210;
	// cmplwi cr6,r24,5
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 5, ctx.xer);
	// blt cr6,0x8276b1a0
	if (ctx.cr6.lt) goto loc_8276B1A0;
	// bne cr6,0x8276b698
	if (!ctx.cr6.eq) goto loc_8276B698;
	// lwz r11,10824(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10824);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,17288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17288);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r10,9200
	ctx.r10.s64 = ctx.r10.s64 + 9200;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r3,r9,9532
	ctx.r3.s64 = ctx.r9.s64 + 9532;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d176a8
	ctx.lr = 0x8276B108;
	sub_82D176A8(ctx, base);
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6808(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6808);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8276b178
	if (ctx.cr0.lt) goto loc_8276B178;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276b178
	if (ctx.cr6.eq) goto loc_8276B178;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_8276B14C:
	// lwz r3,6808(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6808);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276b14c
	if (ctx.cr6.lt) goto loc_8276B14C;
loc_8276B178:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,9416
	ctx.r31.s64 = ctx.r11.s64 + 9416;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B190;
	sub_82A4EFB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,17288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17288);
	// bl 0x82d17c78
	ctx.lr = 0x8276B19C;
	sub_82D17C78(ctx, base);
	// b 0x8276b494
	goto loc_8276B494;
loc_8276B1A0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276b1ac
	if (!ctx.cr6.gt) goto loc_8276B1AC;
	// twi 31,r0,22
loc_8276B1AC:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276B1B0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276b1bc
	if (!ctx.cr6.gt) goto loc_8276B1BC;
	// twi 31,r0,22
loc_8276B1BC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276b1f0
	if (ctx.cr6.eq) goto loc_8276B1F0;
	// blt cr6,0x8276b1cc
	if (ctx.cr6.lt) goto loc_8276B1CC;
	// twi 31,r0,22
loc_8276B1CC:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82332db8
	ctx.lr = 0x8276B1D4;
	sub_82332DB8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276b1e4
	if (ctx.cr6.lt) goto loc_8276B1E4;
	// twi 31,r0,22
loc_8276B1E4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276b1b0
	goto loc_8276B1B0;
loc_8276B1F0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276b204
	if (!ctx.cr6.gt) goto loc_8276B204;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
loc_8276B204:
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B210:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10828, ctx.r11.u32);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B220:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r9,50
	ctx.r9.s64 = 50;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r10,10780(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10780, ctx.r10.u32);
	// stw r9,17280(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17280, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,17276(r5)
	PPC_STORE_U32(ctx.r5.u32 + 17276, ctx.r8.u32);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10772, ctx.r11.u32);
	// bl 0x8276d150
	ctx.lr = 0x8276B274;
	sub_8276D150(ctx, base);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B278:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,25
	ctx.r11.s64 = 25;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// stw r11,10776(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10776, ctx.r11.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r10,17276(r8)
	PPC_STORE_U32(ctx.r8.u32 + 17276, ctx.r10.u32);
	// stw r9,10772(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10772, ctx.r9.u32);
	// stw r11,17292(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17292, ctx.r11.u32);
	// bl 0x8276d3b0
	ctx.lr = 0x8276B2AC;
	sub_8276D3B0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276b2c0
	if (!ctx.cr6.gt) goto loc_8276B2C0;
	// twi 31,r0,22
loc_8276B2C0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276B2C4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276b2d0
	if (!ctx.cr6.gt) goto loc_8276B2D0;
	// twi 31,r0,22
loc_8276B2D0:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276b304
	if (ctx.cr6.eq) goto loc_8276B304;
	// blt cr6,0x8276b2e0
	if (ctx.cr6.lt) goto loc_8276B2E0;
	// twi 31,r0,22
loc_8276B2E0:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82332db8
	ctx.lr = 0x8276B2E8;
	sub_82332DB8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276b2f8
	if (ctx.cr6.lt) goto loc_8276B2F8;
	// twi 31,r0,22
loc_8276B2F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276b2c4
	goto loc_8276B2C4;
loc_8276B304:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276b318
	if (!ctx.cr6.gt) goto loc_8276B318;
	// twi 31,r0,22
	// twi 31,r0,22
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_8276B318:
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B324:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8276B334:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8276b394
	if (ctx.cr6.eq) goto loc_8276B394;
	// lwz r10,10884(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10884);
	// slw r9,r25,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8276b394
	if (ctx.cr6.eq) goto loc_8276B394;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276b394
	if (!ctx.cr6.eq) goto loc_8276B394;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B37C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46198
	ctx.lr = 0x8276B390;
	sub_82A46198(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8276B394:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8276b334
	if (ctx.cr6.lt) goto loc_8276B334;
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lwz r3,9736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8276b698
	if (!ctx.cr6.eq) goto loc_8276B698;
	// bl 0x82332db8
	ctx.lr = 0x8276B3C0;
	sub_82332DB8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,9736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9736, ctx.r11.u32);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B3CC:
	// bl 0x82a6f310
	ctx.lr = 0x8276B3D0;
	sub_82A6F310(ctx, base);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r10,10804(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10804);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,10784(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10784, ctx.r11.u32);
	// stw r3,10820(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10820, ctx.r3.u32);
	// beq cr6,0x8276b698
	if (ctx.cr6.eq) goto loc_8276B698;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r31,r9,9200
	ctx.r31.s64 = ctx.r9.s64 + 9200;
	// li r6,1002
	ctx.r6.s64 = 1002;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B424;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d176a8
	ctx.lr = 0x8276B440;
	sub_82D176A8(ctx, base);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B444:
	// cmpwi cr6,r24,4097
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4097, ctx.xer);
	// beq cr6,0x8276b514
	if (ctx.cr6.eq) goto loc_8276B514;
	// cmpwi cr6,r24,4099
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4099, ctx.xer);
	// beq cr6,0x8276b4f8
	if (ctx.cr6.eq) goto loc_8276B4F8;
	// cmpwi cr6,r24,4100
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4100, ctx.xer);
	// beq cr6,0x8276b4dc
	if (ctx.cr6.eq) goto loc_8276B4DC;
	// cmpwi cr6,r24,4101
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4101, ctx.xer);
	// beq cr6,0x8276b4a4
	if (ctx.cr6.eq) goto loc_8276B4A4;
	// cmpwi cr6,r24,4103
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4103, ctx.xer);
	// bne cr6,0x8276b698
	if (!ctx.cr6.eq) goto loc_8276B698;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,9444
	ctx.r31.s64 = ctx.r11.s64 + 9444;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B484;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,17288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// bl 0x82d17f10
	ctx.lr = 0x8276B494;
	sub_82D17F10(ctx, base);
loc_8276B494:
	// bl 0x82a6f310
	ctx.lr = 0x8276B498;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B4A4:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,9500
	ctx.r31.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B4BC;
	sub_82A4EFB0(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276B4C0;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
	// lwz r3,17288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17288);
	// bl 0x82d180a8
	ctx.lr = 0x8276B4D8;
	sub_82D180A8(ctx, base);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B4DC:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B4F0;
	sub_82A4EFB0(ctx, base);
	// bl 0x8276e5e0
	ctx.lr = 0x8276B4F4;
	sub_8276E5E0(ctx, base);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B4F8:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B50C;
	sub_82A4EFB0(ctx, base);
	// bl 0x8276e1a8
	ctx.lr = 0x8276B510;
	sub_8276E1A8(ctx, base);
	// b 0x8276b698
	goto loc_8276B698;
loc_8276B514:
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// std r27,192(r29)
	PPC_STORE_U64(ctx.r29.u32 + 192, ctx.r27.u64);
	// std r27,200(r29)
	PPC_STORE_U64(ctx.r29.u32 + 200, ctx.r27.u64);
	// addi r8,r29,192
	ctx.r8.s64 = ctx.r29.s64 + 192;
	// addi r9,r9,6280
	ctx.r9.s64 = ctx.r9.s64 + 6280;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// std r27,192(r9)
	PPC_STORE_U64(ctx.r9.u32 + 192, ctx.r27.u64);
	// std r27,200(r9)
	PPC_STORE_U64(ctx.r9.u32 + 200, ctx.r27.u64);
	// ble cr6,0x8276b53c
	if (!ctx.cr6.gt) goto loc_8276B53C;
	// twi 31,r0,22
loc_8276B53C:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_8276B540:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276b54c
	if (!ctx.cr6.gt) goto loc_8276B54C;
	// twi 31,r0,22
loc_8276B54C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276b580
	if (ctx.cr6.eq) goto loc_8276B580;
	// blt cr6,0x8276b55c
	if (ctx.cr6.lt) goto loc_8276B55C;
	// twi 31,r0,22
loc_8276B55C:
	// std r27,192(r9)
	PPC_STORE_U64(ctx.r9.u32 + 192, ctx.r27.u64);
	// std r27,200(r9)
	PPC_STORE_U64(ctx.r9.u32 + 200, ctx.r27.u64);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276b574
	if (ctx.cr6.lt) goto loc_8276B574;
	// twi 31,r0,22
loc_8276B574:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// b 0x8276b540
	goto loc_8276B540;
loc_8276B580:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,9500
	ctx.r31.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B598;
	sub_82A4EFB0(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,10784(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10784, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17288);
	// bl 0x82d17e78
	ctx.lr = 0x8276B5B4;
	sub_82D17E78(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276B5B8;
	sub_82A6F310(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10804(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10804);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,10868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10868, ctx.r3.u32);
	// beq cr6,0x8276b620
	if (ctx.cr6.eq) goto loc_8276B620;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r31,r10,9200
	ctx.r31.s64 = ctx.r10.s64 + 9200;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,1002
	ctx.r6.s64 = 1002;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82d176a8
	ctx.lr = 0x8276B620;
	sub_82D176A8(ctx, base);
loc_8276B620:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
loc_8276B62C:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8276b68c
	if (ctx.cr6.eq) goto loc_8276B68C;
	// lwz r10,10884(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10884);
	// slw r9,r25,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8276b68c
	if (ctx.cr6.eq) goto loc_8276B68C;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276b68c
	if (!ctx.cr6.eq) goto loc_8276B68C;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46198
	ctx.lr = 0x8276B688;
	sub_82A46198(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_8276B68C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8276b62c
	if (ctx.cr6.lt) goto loc_8276B62C;
loc_8276B698:
	// lwz r11,10824(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10824);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r24,10824(r23)
	PPC_STORE_U32(ctx.r23.u32 + 10824, ctx.r24.u32);
	// stw r11,10832(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10832, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B6B0"))) PPC_WEAK_FUNC(sub_8276B6B0);
PPC_FUNC_IMPL(__imp__sub_8276B6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276B6B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82a4efb0
	ctx.lr = 0x8276B6D8;
	sub_82A4EFB0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r8,1000
	ctx.r8.s64 = 1000;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_8276B6FC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276b71c
	if (!ctx.cr0.eq) goto loc_8276B71C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8276b6fc
	if (!ctx.cr6.eq) goto loc_8276B6FC;
loc_8276B71C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276b730
	if (!ctx.cr0.eq) goto loc_8276B730;
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_8276B730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x8276a300
	ctx.lr = 0x8276B73C;
	sub_8276A300(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r3,9528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9528);
	// bl 0x82d17960
	ctx.lr = 0x8276B75C;
	sub_82D17960(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276a300
	ctx.lr = 0x8276B768;
	sub_8276A300(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8276b780
	if (ctx.cr6.eq) goto loc_8276B780;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8276c860
	ctx.lr = 0x8276B780;
	sub_8276C860(ctx, base);
loc_8276B780:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B788"))) PPC_WEAK_FUNC(sub_8276B788);
PPC_FUNC_IMPL(__imp__sub_8276B788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8276B790;
	__savegprlr_26(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
loc_8276B7B8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,9528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9528);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1277
	ctx.r5.s64 = 1277;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82d17928
	ctx.lr = 0x8276B7D4;
	sub_82D17928(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8276b980
	if (ctx.cr6.eq) goto loc_8276B980;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8276b984
	if (!ctx.cr6.gt) goto loc_8276B984;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// bne cr6,0x8276b968
	if (!ctx.cr6.eq) goto loc_8276B968;
	// lwz r11,10824(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276b968
	if (ctx.cr6.eq) goto loc_8276B968;
	// lbz r11,114(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 114);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bgt cr6,0x8276b968
	if (ctx.cr6.gt) goto loc_8276B968;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30592
	ctx.r12.s64 = ctx.r12.s64 + -30592;
	// lbzx r0,r12,r10
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32137
	ctx.r12.s64 = -2106130432;
	// addi r12,r12,-18376
	ctx.r12.s64 = ctx.r12.s64 + -18376;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8276B838;
	case 1:
		goto loc_8276B848;
	case 2:
		goto loc_8276B858;
	case 3:
		goto loc_8276B868;
	case 4:
		goto loc_8276B874;
	case 5:
		goto loc_8276B884;
	case 6:
		goto loc_8276B894;
	case 7:
		goto loc_8276B8A0;
	case 8:
		goto loc_8276B924;
	case 9:
		goto loc_8276B934;
	case 10:
		goto loc_8276B948;
	default:
		__builtin_unreachable();
	}
loc_8276B838:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276b990
	ctx.lr = 0x8276B844;
	sub_8276B990(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B848:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276c038
	ctx.lr = 0x8276B854;
	sub_8276C038(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B858:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276c3b8
	ctx.lr = 0x8276B864;
	sub_8276C3B8(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B868:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10848(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10848, ctx.r11.u32);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B874:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276bf20
	ctx.lr = 0x8276B880;
	sub_8276BF20(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B884:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276c860
	ctx.lr = 0x8276B890;
	sub_8276C860(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B894:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10788(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10788, ctx.r11.u32);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B8A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8276b8fc
	if (ctx.cr6.eq) goto loc_8276B8FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8276b8f4
	if (ctx.cr6.eq) goto loc_8276B8F4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8276b8ec
	if (ctx.cr6.eq) goto loc_8276B8EC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8276b8e4
	if (ctx.cr6.eq) goto loc_8276B8E4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8276b8dc
	if (ctx.cr6.eq) goto loc_8276B8DC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8276b900
	if (!ctx.cr6.eq) goto loc_8276B900;
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x8276b900
	goto loc_8276B900;
loc_8276B8DC:
	// li r10,302
	ctx.r10.s64 = 302;
	// b 0x8276b900
	goto loc_8276B900;
loc_8276B8E4:
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x8276b900
	goto loc_8276B900;
loc_8276B8EC:
	// li r10,254
	ctx.r10.s64 = 254;
	// b 0x8276b900
	goto loc_8276B900;
loc_8276B8F4:
	// li r10,274
	ctx.r10.s64 = 274;
	// b 0x8276b900
	goto loc_8276B900;
loc_8276B8FC:
	// li r10,222
	ctx.r10.s64 = 222;
loc_8276B900:
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r11,1387(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1387, ctx.r11.u16);
	// bl 0x8276d890
	ctx.lr = 0x8276B920;
	sub_8276D890(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B924:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8276db70
	ctx.lr = 0x8276B930;
	sub_8276DB70(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B934:
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276e958
	ctx.lr = 0x8276B944;
	sub_8276E958(ctx, base);
	// b 0x8276b968
	goto loc_8276B968;
loc_8276B948:
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r6,131(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 131);
	// lwz r5,123(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 123);
	// lwz r4,127(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 127);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276B968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276B968:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8276b984
	if (!ctx.cr6.gt) goto loc_8276B984;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,1000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1000, ctx.xer);
	// beq cr6,0x8276b7b8
	if (ctx.cr6.eq) goto loc_8276B7B8;
	// b 0x8276b984
	goto loc_8276B984;
loc_8276B980:
	// bl 0x82d17988
	ctx.lr = 0x8276B984;
	sub_82D17988(ctx, base);
loc_8276B984:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276B990"))) PPC_WEAK_FUNC(sub_8276B990);
PPC_FUNC_IMPL(__imp__sub_8276B990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8276B998;
	__savegprlr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4336(r1)
	ea = -4336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r22,2
	ctx.r22.s64 = 2;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stb r22,402(r1)
	PPC_STORE_U8(ctx.r1.u32 + 402, ctx.r22.u8);
	// li r21,3
	ctx.r21.s64 = 3;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// addi r27,r3,3
	ctx.r27.s64 = ctx.r3.s64 + 3;
	// addi r24,r10,6808
	ctx.r24.s64 = ctx.r10.s64 + 6808;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276b9dc
	if (!ctx.cr6.eq) goto loc_8276B9DC;
	// stw r22,403(r1)
	PPC_STORE_U32(ctx.r1.u32 + 403, ctx.r22.u32);
	// b 0x8276bc28
	goto loc_8276BC28;
loc_8276B9DC:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,7260
	ctx.r11.s64 = ctx.r11.s64 + 7260;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276b9f8
	if (!ctx.cr6.gt) goto loc_8276B9F8;
	// twi 31,r0,22
loc_8276B9F8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8276B9FC:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ba08
	if (!ctx.cr6.gt) goto loc_8276BA08;
	// twi 31,r0,22
loc_8276BA08:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276ba58
	if (ctx.cr6.eq) goto loc_8276BA58;
	// blt cr6,0x8276ba18
	if (ctx.cr6.lt) goto loc_8276BA18;
	// twi 31,r0,22
loc_8276BA18:
	// li r8,137
	ctx.r8.s64 = 137;
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ldx r8,r27,r8
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + ctx.r8.u32);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x8276ba40
	if (ctx.cr6.eq) goto loc_8276BA40;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276ba38
	if (ctx.cr6.lt) goto loc_8276BA38;
	// twi 31,r0,22
loc_8276BA38:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8276b9fc
	goto loc_8276B9FC;
loc_8276BA40:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,403(r1)
	PPC_STORE_U32(ctx.r1.u32 + 403, ctx.r11.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8276b6b0
	ctx.lr = 0x8276BA54;
	sub_8276B6B0(ctx, base);
	// b 0x8276bf14
	goto loc_8276BF14;
loc_8276BA58:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r9,185(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 185);
	// lbz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// addi r29,r11,9720
	ctx.r29.s64 = ctx.r11.s64 + 9720;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276ba8c
	if (!ctx.cr6.gt) goto loc_8276BA8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,403(r1)
	PPC_STORE_U32(ctx.r1.u32 + 403, ctx.r11.u32);
	// b 0x8276bc28
	goto loc_8276BC28;
loc_8276BA8C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,13024(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r28,403(r1)
	PPC_STORE_U32(ctx.r1.u32 + 403, ctx.r28.u32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r26,1
	ctx.r26.s64 = 1;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// ld r11,10808(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 10808);
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r10,10776(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10776);
	// addi r31,r7,6280
	ctx.r31.s64 = ctx.r7.s64 + 6280;
	// lwz r9,10772(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10772);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r7,r31,144
	ctx.r7.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,568
	ctx.r3.s64 = ctx.r1.s64 + 568;
	// li r12,423
	ctx.r12.s64 = 423;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// stw r10,431(r1)
	PPC_STORE_U32(ctx.r1.u32 + 431, ctx.r10.u32);
	// stw r9,435(r1)
	PPC_STORE_U32(ctx.r1.u32 + 435, ctx.r9.u32);
	// lwz r30,548(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 548);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r26,439(r1)
	PPC_STORE_U8(ctx.r1.u32 + 439, ctx.r26.u8);
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BAEC;
	sub_82A4D1F8(ctx, base);
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 + 14;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,440
	ctx.r3.s64 = ctx.r1.s64 + 440;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BB08;
	sub_82A4D1F8(ctx, base);
	// addi r4,r24,4
	ctx.r4.s64 = ctx.r24.s64 + 4;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82a4ea80
	ctx.lr = 0x8276BB18;
	sub_82A4EA80(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8276bb40
	if (ctx.cr6.eq) goto loc_8276BB40;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,600
	ctx.r10.s64 = ctx.r1.s64 + 600;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,600
	ctx.r3.s64 = ctx.r1.s64 + 600;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8276BB3C;
	sub_82A4EFB0(ctx, base);
	// stw r30,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r30.u32);
loc_8276BB40:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BB54;
	sub_82A4D1F8(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
	// li r12,415
	ctx.r12.s64 = 415;
	// stdx r8,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r8.u64);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwz r11,10824(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 10824);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// stw r10,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// beq cr6,0x8276bbd0
	if (ctx.cr6.eq) goto loc_8276BBD0;
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// beq cr6,0x8276bbc8
	if (ctx.cr6.eq) goto loc_8276BBC8;
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// beq cr6,0x8276bbc0
	if (ctx.cr6.eq) goto loc_8276BBC0;
	// cmpwi cr6,r11,4102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4102, ctx.xer);
	// ble cr6,0x8276bbd4
	if (!ctx.cr6.gt) goto loc_8276BBD4;
	// cmpwi cr6,r11,4104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4104, ctx.xer);
	// bgt cr6,0x8276bbd4
	if (ctx.cr6.gt) goto loc_8276BBD4;
	// stw r21,407(r1)
	PPC_STORE_U32(ctx.r1.u32 + 407, ctx.r21.u32);
	// b 0x8276bbd4
	goto loc_8276BBD4;
loc_8276BBC0:
	// stw r22,407(r1)
	PPC_STORE_U32(ctx.r1.u32 + 407, ctx.r22.u32);
	// b 0x8276bbd4
	goto loc_8276BBD4;
loc_8276BBC8:
	// stw r26,407(r1)
	PPC_STORE_U32(ctx.r1.u32 + 407, ctx.r26.u32);
	// b 0x8276bbd4
	goto loc_8276BBD4;
loc_8276BBD0:
	// stw r28,407(r1)
	PPC_STORE_U32(ctx.r1.u32 + 407, ctx.r28.u32);
loc_8276BBD4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,13024(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r11,10836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10836);
	// stw r11,411(r1)
	PPC_STORE_U32(ctx.r1.u32 + 411, ctx.r11.u32);
	// lwz r3,912(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276BBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276BC14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BC28;
	sub_82A4D1F8(ctx, base);
loc_8276BC28:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8276b6b0
	ctx.lr = 0x8276BC34;
	sub_8276B6B0(ctx, base);
	// lwz r11,403(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 403);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276bf14
	if (!ctx.cr6.eq) goto loc_8276BF14;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a4efb0
	ctx.lr = 0x8276BC50;
	sub_82A4EFB0(ctx, base);
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// lbz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stb r10,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r10.u8);
	// bl 0x82a6f310
	ctx.lr = 0x8276BC68;
	sub_82A6F310(ctx, base);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// stw r28,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r28.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r27,137
	ctx.r5.s64 = ctx.r27.s64 + 137;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BC84;
	sub_82A4D1F8(ctx, base);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r27,9
	ctx.r5.s64 = ctx.r27.s64 + 9;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,126
	ctx.r3.s64 = ctx.r1.s64 + 126;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BC98;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r27,169
	ctx.r5.s64 = ctx.r27.s64 + 169;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BCAC;
	sub_82A4D1F8(ctx, base);
	// lwz r3,364(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8276bcd4
	if (!ctx.cr6.eq) goto loc_8276BCD4;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276BCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r3.u32);
loc_8276BCD4:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r27,189
	ctx.r5.s64 = ctx.r27.s64 + 189;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BCE4;
	sub_82A4D1F8(ctx, base);
	// lwz r11,185(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 185);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// bl 0x82773a00
	ctx.lr = 0x8276BCF8;
	sub_82773A00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8276cfe0
	ctx.lr = 0x8276BD04;
	sub_8276CFE0(ctx, base);
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// bl 0x82414568
	ctx.lr = 0x8276BD2C;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82400b48
	ctx.lr = 0x8276BD38;
	sub_82400B48(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82333960
	ctx.lr = 0x8276BD40;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-18444
	ctx.r31.s64 = ctx.r11.s64 + -18444;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8276BD5C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8276bd80
	if (ctx.cr0.eq) goto loc_8276BD80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823339b8
	ctx.lr = 0x8276BD78;
	sub_823339B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8276BD80:
	// lbz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// li r6,128
	ctx.r6.s64 = 128;
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r5,r1,126
	ctx.r5.s64 = ctx.r1.s64 + 126;
	// stb r21,2962(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2962, ctx.r21.u8);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r28,3212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3212, ctx.r28.u32);
	// addi r3,r1,2972
	ctx.r3.s64 = ctx.r1.s64 + 2972;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stb r11,2971(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2971, ctx.r11.u8);
	// stw r9,3208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3208, ctx.r9.u32);
	// li r12,2963
	ctx.r12.s64 = 2963;
	// stdx r10,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r10.u64);
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BDB8;
	sub_82A4D1F8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,3100
	ctx.r3.s64 = ctx.r1.s64 + 3100;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BDCC;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,3132
	ctx.r3.s64 = ctx.r1.s64 + 3132;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BDE0;
	sub_82A4D1F8(ctx, base);
	// addi r3,r1,3148
	ctx.r3.s64 = ctx.r1.s64 + 3148;
	// addi r4,r1,340
	ctx.r4.s64 = ctx.r1.s64 + 340;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8276BDF0;
	sub_82A4EA80(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,364(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r3,r1,3172
	ctx.r3.s64 = ctx.r1.s64 + 3172;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BE04;
	sub_82A4D1F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276be20
	if (!ctx.cr6.gt) goto loc_8276BE20;
	// twi 31,r0,22
loc_8276BE20:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276BE24:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276be30
	if (!ctx.cr6.gt) goto loc_8276BE30;
	// twi 31,r0,22
loc_8276BE30:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276befc
	if (ctx.cr6.eq) goto loc_8276BEFC;
	// blt cr6,0x8276be40
	if (ctx.cr6.lt) goto loc_8276BE40;
	// twi 31,r0,22
loc_8276BE40:
	// stb r21,1682(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1682, ctx.r21.u8);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r31,14
	ctx.r5.s64 = ctx.r31.s64 + 14;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,1692
	ctx.r3.s64 = ctx.r1.s64 + 1692;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stb r11,1691(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1691, ctx.r11.u8);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r12,1683
	ctx.r12.s64 = 1683;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,1928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1928, ctx.r11.u32);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// stw r11,1932(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1932, ctx.r11.u32);
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BE7C;
	sub_82A4D1F8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,1820
	ctx.r3.s64 = ctx.r1.s64 + 1820;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BE90;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,1852
	ctx.r3.s64 = ctx.r1.s64 + 1852;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BEA4;
	sub_82A4D1F8(ctx, base);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r3,r1,1868
	ctx.r3.s64 = ctx.r1.s64 + 1868;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8276BEB4;
	sub_82A4EA80(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r1,1892
	ctx.r3.s64 = ctx.r1.s64 + 1892;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276BEC8;
	sub_82A4D1F8(ctx, base);
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8276b6b0
	ctx.lr = 0x8276BED4;
	sub_8276B6B0(ctx, base);
	// addi r3,r1,2960
	ctx.r3.s64 = ctx.r1.s64 + 2960;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276BEE0;
	sub_8276B6B0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276bef0
	if (ctx.cr6.lt) goto loc_8276BEF0;
	// twi 31,r0,22
loc_8276BEF0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276be24
	goto loc_8276BE24;
loc_8276BEFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8276f0d0
	ctx.lr = 0x8276BF08;
	sub_8276F0D0(ctx, base);
	// bl 0x8276cbf0
	ctx.lr = 0x8276BF0C;
	sub_8276CBF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8276BF14;
	sub_82333960(ctx, base);
loc_8276BF14:
	// addi r1,r1,4336
	ctx.r1.s64 = ctx.r1.s64 + 4336;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276BF20"))) PPC_WEAK_FUNC(sub_8276BF20);
PPC_FUNC_IMPL(__imp__sub_8276BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276bfa4
	if (!ctx.cr6.eq) goto loc_8276BFA4;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// addi r31,r10,6536
	ctx.r31.s64 = ctx.r10.s64 + 6536;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_8276BF5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276bf7c
	if (!ctx.cr0.eq) goto loc_8276BF7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8276bf5c
	if (!ctx.cr6.eq) goto loc_8276BF5C;
loc_8276BF7C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276bf8c
	if (!ctx.cr0.eq) goto loc_8276BF8C;
	// bl 0x82a6f310
	ctx.lr = 0x8276BF88;
	sub_82A6F310(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
loc_8276BF8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8276BFA4:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276bfc0
	if (!ctx.cr6.gt) goto loc_8276BFC0;
	// twi 31,r0,22
loc_8276BFC0:
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_8276BFC4:
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276bfd0
	if (!ctx.cr6.gt) goto loc_8276BFD0;
	// twi 31,r0,22
loc_8276BFD0:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276bf8c
	if (ctx.cr6.eq) goto loc_8276BF8C;
	// blt cr6,0x8276bfe0
	if (ctx.cr6.lt) goto loc_8276BFE0;
	// twi 31,r0,22
loc_8276BFE0:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_8276BFEC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276c00c
	if (!ctx.cr0.eq) goto loc_8276C00C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8276bfec
	if (!ctx.cr6.eq) goto loc_8276BFEC;
loc_8276C00C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276c024
	if (!ctx.cr0.eq) goto loc_8276C024;
	// bl 0x82a6f310
	ctx.lr = 0x8276C018;
	sub_82A6F310(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276C024:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8276c030
	if (ctx.cr6.lt) goto loc_8276C030;
	// twi 31,r0,22
loc_8276C030:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276bfc4
	goto loc_8276BFC4;
}

__attribute__((alias("__imp__sub_8276C038"))) PPC_WEAK_FUNC(sub_8276C038);
PPC_FUNC_IMPL(__imp__sub_8276C038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276C040;
	__savegprlr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r31,13024(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lwz r29,548(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// bne cr6,0x8276c350
	if (!ctx.cr6.eq) goto loc_8276C350;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8276c350
	if (ctx.cr6.eq) goto loc_8276C350;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8276c350
	if (ctx.cr6.eq) goto loc_8276C350;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r11,10876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10876);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276c350
	if (ctx.cr6.eq) goto loc_8276C350;
	// addi r4,r3,3
	ctx.r4.s64 = ctx.r3.s64 + 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,273
	ctx.r5.s64 = 273;
	// li r28,4096
	ctx.r28.s64 = 4096;
	// bl 0x82a4ea80
	ctx.lr = 0x8276C0AC;
	sub_82A4EA80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8276c0f8
	if (ctx.cr6.lt) goto loc_8276C0F8;
	// beq cr6,0x8276c0f0
	if (ctx.cr6.eq) goto loc_8276C0F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8276c0d0
	if (ctx.cr6.lt) goto loc_8276C0D0;
	// bne cr6,0x8276c348
	if (!ctx.cr6.eq) goto loc_8276C348;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8276c0d4
	goto loc_8276C0D4;
loc_8276C0D0:
	// li r4,6
	ctx.r4.s64 = 6;
loc_8276C0D4:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x8276c348
	goto loc_8276C348;
loc_8276C0F0:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8276c0d4
	goto loc_8276C0D4;
loc_8276C0F8:
	// lwz r3,912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x8276c348
	if (!ctx.cr6.eq) goto loc_8276C348;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lbz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r31,r10,6536
	ctx.r31.s64 = ctx.r10.s64 + 6536;
	// addi r5,r1,117
	ctx.r5.s64 = ctx.r1.s64 + 117;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C138;
	sub_82A4D1F8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,245
	ctx.r5.s64 = ctx.r1.s64 + 245;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C14C;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,277
	ctx.r5.s64 = ctx.r1.s64 + 277;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C160;
	sub_82A4D1F8(ctx, base);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8276c188
	if (!ctx.cr6.eq) goto loc_8276C188;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
loc_8276C188:
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,293
	ctx.r5.s64 = ctx.r1.s64 + 293;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C198;
	sub_82A4D1F8(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C1CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,333
	ctx.r5.s64 = ctx.r1.s64 + 333;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C1E0;
	sub_82A4D1F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r5,329(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 329);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// ld r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 92);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r8,9720
	ctx.r7.s64 = ctx.r8.s64 + 9720;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lis r5,-31949
	ctx.r5.s64 = -2093809664;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,325(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 325);
	// stw r11,10776(r6)
	PPC_STORE_U32(ctx.r6.u32 + 10776, ctx.r11.u32);
	// stw r10,10772(r5)
	PPC_STORE_U32(ctx.r5.u32 + 10772, ctx.r10.u32);
	// stw r9,9720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9720, ctx.r9.u32);
	// bl 0x8276cbf0
	ctx.lr = 0x8276C25C;
	sub_8276CBF0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,6808
	ctx.r3.s64 = ctx.r11.s64 + 6808;
	// bl 0x82773a00
	ctx.lr = 0x8276C26C;
	sub_82773A00(ctx, base);
	// ld r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 100);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,10808(r10)
	PPC_STORE_U64(ctx.r10.u32 + 10808, ctx.r11.u64);
	// bl 0x8276cfe0
	ctx.lr = 0x8276C284;
	sub_8276CFE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// bl 0x8276cfe0
	ctx.lr = 0x8276C294;
	sub_8276CFE0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C2B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C2CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,10836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10836, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8276c300
	if (ctx.cr6.lt) goto loc_8276C300;
	// beq cr6,0x8276c358
	if (ctx.cr6.eq) goto loc_8276C358;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8276c358
	if (ctx.cr6.lt) goto loc_8276C358;
	// bne cr6,0x8276c308
	if (!ctx.cr6.eq) goto loc_8276C308;
loc_8276C300:
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x82828c40
	ctx.lr = 0x8276C308;
	sub_82828C40(ctx, base);
loc_8276C308:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r3,r10,9532
	ctx.r3.s64 = ctx.r10.s64 + 9532;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d176a8
	ctx.lr = 0x8276C338;
	sub_82D176A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276c348
	if (ctx.cr0.eq) goto loc_8276C348;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x8276C348;
	sub_82A6ED60(ctx, base);
loc_8276C348:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8276aed8
	ctx.lr = 0x8276C350;
	sub_8276AED8(ctx, base);
loc_8276C350:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
loc_8276C358:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276c398
	if (!ctx.cr6.eq) goto loc_8276C398;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10844(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276c398
	if (!ctx.cr6.eq) goto loc_8276C398;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276c308
	goto loc_8276C308;
loc_8276C398:
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276c308
	goto loc_8276C308;
}

__attribute__((alias("__imp__sub_8276C3B8"))) PPC_WEAK_FUNC(sub_8276C3B8);
PPC_FUNC_IMPL(__imp__sub_8276C3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x8276C3C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,3
	ctx.r4.s64 = ctx.r3.s64 + 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,253
	ctx.r5.s64 = 253;
	// bl 0x82a4ea80
	ctx.lr = 0x8276C3D4;
	sub_82A4EA80(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r24,r11,6792
	ctx.r24.s64 = ctx.r11.s64 + 6792;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276c3f8
	if (!ctx.cr6.gt) goto loc_8276C3F8;
	// twi 31,r0,22
loc_8276C3F8:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8276C414:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276c420
	if (!ctx.cr6.gt) goto loc_8276C420;
	// twi 31,r0,22
loc_8276C420:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8276c430
	if (ctx.cr6.eq) goto loc_8276C430;
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8276c434
	if (ctx.cr6.eq) goto loc_8276C434;
loc_8276C430:
	// twi 31,r0,22
loc_8276C434:
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276c490
	if (ctx.cr6.eq) goto loc_8276C490;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8276c448
	if (!ctx.cr6.eq) goto loc_8276C448;
	// twi 31,r0,22
loc_8276C448:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276c458
	if (ctx.cr6.lt) goto loc_8276C458;
	// twi 31,r0,22
loc_8276C458:
	// ld r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276c478
	if (ctx.cr6.eq) goto loc_8276C478;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276c470
	if (ctx.cr6.lt) goto loc_8276C470;
	// twi 31,r0,22
loc_8276C470:
	// addi r23,r23,256
	ctx.r23.s64 = ctx.r23.s64 + 256;
	// b 0x8276c414
	goto loc_8276C414;
loc_8276C478:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276c488
	if (ctx.cr6.lt) goto loc_8276C488;
	// twi 31,r0,22
loc_8276C488:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x8276c52c
	goto loc_8276C52C;
loc_8276C490:
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6280
	ctx.r30.s64 = ctx.r11.s64 + 6280;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8276c828
	if (ctx.cr0.eq) goto loc_8276C828;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276c828
	if (ctx.cr6.eq) goto loc_8276C828;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82a4efb0
	ctx.lr = 0x8276C4C0;
	sub_82A4EFB0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// bl 0x8276f0d0
	ctx.lr = 0x8276C4CC;
	sub_8276F0D0(ctx, base);
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276c4e0
	if (!ctx.cr6.gt) goto loc_8276C4E0;
	// twi 31,r0,22
loc_8276C4E0:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// bgt cr6,0x8276c504
	if (ctx.cr6.gt) goto loc_8276C504;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8276c508
	if (!ctx.cr6.lt) goto loc_8276C508;
loc_8276C504:
	// twi 31,r0,22
loc_8276C508:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r11,-256
	ctx.r31.s64 = ctx.r11.s64 + -256;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276c520
	if (ctx.cr6.lt) goto loc_8276C520;
	// twi 31,r0,22
loc_8276C520:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276c824
	if (ctx.cr6.eq) goto loc_8276C824;
loc_8276C52C:
	// lbz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276c6bc
	if (ctx.cr0.eq) goto loc_8276C6BC;
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// addi r30,r31,14
	ctx.r30.s64 = ctx.r31.s64 + 14;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,128
	ctx.r6.s64 = 128;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r5,r1,169
	ctx.r5.s64 = ctx.r1.s64 + 169;
	// lwz r11,405(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 405);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,409(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 409);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C56C;
	sub_82A4D1F8(ctx, base);
	// addi r29,r31,144
	ctx.r29.s64 = ctx.r31.s64 + 144;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,297
	ctx.r5.s64 = ctx.r1.s64 + 297;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C584;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,329
	ctx.r5.s64 = ctx.r1.s64 + 329;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C598;
	sub_82A4D1F8(ctx, base);
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// addi r4,r1,345
	ctx.r4.s64 = ctx.r1.s64 + 345;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8276C5A8;
	sub_82A4EA80(ctx, base);
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276c5d4
	if (!ctx.cr6.eq) goto loc_8276C5D4;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r3.u32);
loc_8276C5D4:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r5,r1,369
	ctx.r5.s64 = ctx.r1.s64 + 369;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276C5E8;
	sub_82A4D1F8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8276c854
	if (ctx.cr6.eq) goto loc_8276C854;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276cfe0
	ctx.lr = 0x8276C5FC;
	sub_8276CFE0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,6808
	ctx.r3.s64 = ctx.r11.s64 + 6808;
	// bl 0x82773a00
	ctx.lr = 0x8276C60C;
	sub_82773A00(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// bl 0x82414568
	ctx.lr = 0x8276C638;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x8276C644;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8276C64C;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r30,r11,-18444
	ctx.r30.s64 = ctx.r11.s64 + -18444;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8276C668;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8276c68c
	if (ctx.cr0.eq) goto loc_8276C68C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823339b8
	ctx.lr = 0x8276C684;
	sub_823339B8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8276C68C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// bl 0x8276ebc8
	ctx.lr = 0x8276C69C;
	sub_8276EBC8(ctx, base);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276c818
	goto loc_8276C818;
loc_8276C6BC:
	// lwz r11,401(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 401);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,14
	ctx.r4.s64 = ctx.r31.s64 + 14;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82414568
	ctx.lr = 0x8276C6FC;
	sub_82414568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82400b48
	ctx.lr = 0x8276C708;
	sub_82400B48(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8276C710;
	sub_82333960(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r30,r11,-18444
	ctx.r30.s64 = ctx.r11.s64 + -18444;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8276C72C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8276c750
	if (ctx.cr0.eq) goto loc_8276C750;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823339b8
	ctx.lr = 0x8276C748;
	sub_823339B8(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_8276C750:
	// addi r27,r31,144
	ctx.r27.s64 = ctx.r31.s64 + 144;
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r26,4
	ctx.r26.s64 = 4;
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
loc_8276C764:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276c794
	if (ctx.cr6.eq) goto loc_8276C794;
	// lwz r3,6808(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6808);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8276c794
	if (ctx.cr0.eq) goto loc_8276C794;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8276C794:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8276c764
	if (!ctx.cr0.eq) goto loc_8276C764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276ce30
	ctx.lr = 0x8276C7AC;
	sub_8276CE30(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276C7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// bl 0x82332db8
	ctx.lr = 0x8276C7D4;
	sub_82332DB8(ctx, base);
	// addi r30,r23,256
	ctx.r30.s64 = ctx.r23.s64 + 256;
	// stw r28,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r28.u32);
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276c810
	if (ctx.cr6.eq) goto loc_8276C810;
	// addi r29,r30,-256
	ctx.r29.s64 = ctx.r30.s64 + -256;
loc_8276C7EC:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276C7FC;
	sub_82A4EA80(ctx, base);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276c7ec
	if (!ctx.cr6.eq) goto loc_8276C7EC;
	// lwz r31,8(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
loc_8276C810:
	// addi r11,r31,-256
	ctx.r11.s64 = ctx.r31.s64 + -256;
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
loc_8276C818:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8276C820;
	sub_82333960(ctx, base);
	// b 0x8276c854
	goto loc_8276C854;
loc_8276C824:
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
loc_8276C828:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276c854
	if (!ctx.cr6.eq) goto loc_8276C854;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x8276c854
	if (!ctx.cr6.eq) goto loc_8276C854;
	// addi r3,r30,228
	ctx.r3.s64 = ctx.r30.s64 + 228;
	// addi r4,r1,345
	ctx.r4.s64 = ctx.r1.s64 + 345;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8276C854;
	sub_82A4EA80(ctx, base);
loc_8276C854:
	// bl 0x8276cbf0
	ctx.lr = 0x8276C858;
	sub_8276CBF0(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276C860"))) PPC_WEAK_FUNC(sub_8276C860);
PPC_FUNC_IMPL(__imp__sub_8276C860) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276c8d4
	if (!ctx.cr6.eq) goto loc_8276C8D4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10864(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276c95c
	if (!ctx.cr6.eq) goto loc_8276C95C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,4104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4104, ctx.xer);
	// beq cr6,0x8276c95c
	if (ctx.cr6.eq) goto loc_8276C95C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8276c95c
	if (ctx.cr6.eq) goto loc_8276C95C;
	// cmpwi cr6,r11,4103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4103, ctx.xer);
	// beq cr6,0x8276c95c
	if (ctx.cr6.eq) goto loc_8276C95C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,17288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8276c95c
	if (ctx.cr6.eq) goto loc_8276C95C;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276e958
	ctx.lr = 0x8276C8D0;
	sub_8276E958(ctx, base);
	// b 0x8276c95c
	goto loc_8276C95C;
loc_8276C8D4:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8276c8f0
	if (!ctx.cr6.gt) goto loc_8276C8F0;
	// twi 31,r0,22
loc_8276C8F0:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_8276C8F4:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x8276c900
	if (!ctx.cr6.gt) goto loc_8276C900;
	// twi 31,r0,22
loc_8276C900:
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8276c95c
	if (ctx.cr6.eq) goto loc_8276C95C;
	// blt cr6,0x8276c910
	if (ctx.cr6.lt) goto loc_8276C910;
	// twi 31,r0,22
loc_8276C910:
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_8276C91C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276c93c
	if (!ctx.cr0.eq) goto loc_8276C93C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8276c91c
	if (!ctx.cr6.eq) goto loc_8276C91C;
loc_8276C93C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276c958
	if (ctx.cr0.eq) goto loc_8276C958;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8276c950
	if (ctx.cr6.lt) goto loc_8276C950;
	// twi 31,r0,22
loc_8276C950:
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// b 0x8276c8f4
	goto loc_8276C8F4;
loc_8276C958:
	// bl 0x8276c970
	ctx.lr = 0x8276C95C;
	sub_8276C970(ctx, base);
loc_8276C95C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276C970"))) PPC_WEAK_FUNC(sub_8276C970);
PPC_FUNC_IMPL(__imp__sub_8276C970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276C978;
	__savegprlr_29(ctx, base);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ca6c
	if (ctx.cr6.eq) goto loc_8276CA6C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r12,83
	ctx.r12.s64 = 83;
	// stdx r10,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r10.u64);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stb r7,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r7.u8);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8276c9d0
	if (!ctx.cr6.gt) goto loc_8276C9D0;
	// twi 31,r0,22
loc_8276C9D0:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8276C9D4:
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8276c9e0
	if (!ctx.cr6.gt) goto loc_8276C9E0;
	// twi 31,r0,22
loc_8276C9E0:
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8276ca5c
	if (ctx.cr6.eq) goto loc_8276CA5C;
	// blt cr6,0x8276c9f0
	if (ctx.cr6.lt) goto loc_8276C9F0;
	// twi 31,r0,22
loc_8276C9F0:
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// addi r10,r29,8
	ctx.r10.s64 = ctx.r29.s64 + 8;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
loc_8276CA00:
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r6,r4,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8276ca20
	if (!ctx.cr0.eq) goto loc_8276CA20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8276ca00
	if (!ctx.cr6.eq) goto loc_8276CA00;
loc_8276CA20:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8276ca48
	if (ctx.cr0.eq) goto loc_8276CA48;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8276ca34
	if (ctx.cr6.lt) goto loc_8276CA34;
	// twi 31,r0,22
loc_8276CA34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8276b6b0
	ctx.lr = 0x8276CA40;
	sub_8276B6B0(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276CA48:
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8276ca54
	if (ctx.cr6.lt) goto loc_8276CA54;
	// twi 31,r0,22
loc_8276CA54:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276c9d4
	goto loc_8276C9D4;
loc_8276CA5C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8756);
	// bl 0x8276b6b0
	ctx.lr = 0x8276CA6C;
	sub_8276B6B0(ctx, base);
loc_8276CA6C:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276CA78"))) PPC_WEAK_FUNC(sub_8276CA78);
PPC_FUNC_IMPL(__imp__sub_8276CA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a6f310
	ctx.lr = 0x8276CA90;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,10820(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10820);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,1000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1000, ctx.xer);
	// blt cr6,0x8276cb2c
	if (ctx.cr6.lt) goto loc_8276CB2C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r3,10820(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10820, ctx.r3.u32);
	// lwz r11,10804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276cb20
	if (ctx.cr6.eq) goto loc_8276CB20;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276cad4
	if (!ctx.cr6.gt) goto loc_8276CAD4;
	// twi 31,r0,22
loc_8276CAD4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276CAD8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276cae4
	if (!ctx.cr6.gt) goto loc_8276CAE4;
	// twi 31,r0,22
loc_8276CAE4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276cb2c
	if (ctx.cr6.eq) goto loc_8276CB2C;
	// blt cr6,0x8276caf4
	if (ctx.cr6.lt) goto loc_8276CAF4;
	// twi 31,r0,22
loc_8276CAF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276cb48
	ctx.lr = 0x8276CAFC;
	sub_8276CB48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8276cb2c
	if (ctx.cr0.lt) goto loc_8276CB2C;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276cb14
	if (ctx.cr6.lt) goto loc_8276CB14;
	// twi 31,r0,22
loc_8276CB14:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276cad8
	goto loc_8276CAD8;
loc_8276CB20:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r11,6536
	ctx.r3.s64 = ctx.r11.s64 + 6536;
	// bl 0x8276cb48
	ctx.lr = 0x8276CB2C;
	sub_8276CB48(ctx, base);
loc_8276CB2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276CB48"))) PPC_WEAK_FUNC(sub_8276CB48);
PPC_FUNC_IMPL(__imp__sub_8276CB48) {
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
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276CB74;
	sub_8276B6B0(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276CB78;
	sub_82A6F310(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,5000
	ctx.xer.ca = ctx.r11.u32 <= 5000;
	ctx.r11.s64 = 5000 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82a6f310
	ctx.lr = 0x8276CB90;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r11,10816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10816);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,5000
	ctx.xer.ca = ctx.r11.u32 <= 5000;
	ctx.r11.s64 = 5000 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq cr6,0x8276cbd0
	if (ctx.cr6.eq) goto loc_8276CBD0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276cbd0
	if (ctx.cr6.eq) goto loc_8276CBD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276c860
	ctx.lr = 0x8276CBC4;
	sub_8276C860(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8276cbd4
	goto loc_8276CBD4;
loc_8276CBD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8276CBD4:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276CBF0"))) PPC_WEAK_FUNC(sub_8276CBF0);
PPC_FUNC_IMPL(__imp__sub_8276CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276CBF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r10,r10,6280
	ctx.r10.s64 = ctx.r10.s64 + 6280;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// addi r27,r11,9720
	ctx.r27.s64 = ctx.r11.s64 + 9720;
	// lwz r9,13024(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// lwz r6,10804(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10804);
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r30,r8,31
	ctx.r30.u64 = ctx.r8.u32 & 0x1;
	// bne cr6,0x8276cc60
	if (!ctx.cr6.eq) goto loc_8276CC60;
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,6536
	ctx.r9.s64 = ctx.r9.s64 + 6536;
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lbz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x8276cc6c
	goto loc_8276CC6C;
loc_8276CC60:
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r10,31
	ctx.r31.u64 = ctx.r10.u32 & 0x1;
loc_8276CC6C:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lwz r28,56(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,60(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r11,r10,6792
	ctx.r11.s64 = ctx.r10.s64 + 6792;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276cc94
	if (!ctx.cr6.gt) goto loc_8276CC94;
	// twi 31,r0,22
loc_8276CC94:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8276CC98:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276cca4
	if (!ctx.cr6.gt) goto loc_8276CCA4;
	// twi 31,r0,22
loc_8276CCA4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276cd1c
	if (ctx.cr6.eq) goto loc_8276CD1C;
	// blt cr6,0x8276ccb4
	if (ctx.cr6.lt) goto loc_8276CCB4;
	// twi 31,r0,22
loc_8276CCB4:
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// beq cr6,0x8276cd08
	if (ctx.cr6.eq) goto loc_8276CD08;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ccd0
	if (ctx.cr6.lt) goto loc_8276CCD0;
	// twi 31,r0,22
loc_8276CCD0:
	// lwz r5,212(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8276cd08
	if (ctx.cr6.eq) goto loc_8276CD08;
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8276ccf8
	if (ctx.cr6.gt) goto loc_8276CCF8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ccf4
	if (ctx.cr6.lt) goto loc_8276CCF4;
	// twi 31,r0,22
loc_8276CCF4:
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_8276CCF8:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276cd04
	if (ctx.cr6.lt) goto loc_8276CD04;
	// twi 31,r0,22
loc_8276CD04:
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
loc_8276CD08:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276cd14
	if (ctx.cr6.lt) goto loc_8276CD14;
	// twi 31,r0,22
loc_8276CD14:
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// b 0x8276cc98
	goto loc_8276CC98;
loc_8276CD1C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8276cdf8
	if (ctx.cr6.eq) goto loc_8276CDF8;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bgt cr6,0x8276cd34
	if (ctx.cr6.gt) goto loc_8276CD34;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8276CD34:
	// subf r5,r7,r30
	ctx.r5.s64 = ctx.r30.s64 - ctx.r7.s64;
	// cmplw cr6,r29,r6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8276cd44
	if (!ctx.cr6.gt) goto loc_8276CD44;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8276CD44:
	// subfic r10,r6,2
	ctx.xer.ca = ctx.r6.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r6.s64;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x8276cd54
	if (!ctx.cr6.gt) goto loc_8276CD54;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8276CD54:
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276cd8c
	if (!ctx.cr6.gt) goto loc_8276CD8C;
	// subf. r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// beq 0x8276cd88
	if (ctx.cr0.eq) goto loc_8276CD88;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276cd78
	if (ctx.cr6.lt) goto loc_8276CD78;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// b 0x8276cd8c
	goto loc_8276CD8C;
loc_8276CD78:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x8276cd8c
	goto loc_8276CD8C;
loc_8276CD88:
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_8276CD8C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r7,r11,9472
	ctx.r7.s64 = ctx.r11.s64 + 9472;
	// lwz r11,9472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8276cdb8
	if (ctx.cr6.eq) goto loc_8276CDB8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,17292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17292);
	// lwz r3,17288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17288);
	// ori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 | 1;
	// bl 0x82d17bc0
	ctx.lr = 0x8276CDB8;
	sub_82D17BC0(ctx, base);
loc_8276CDB8:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// ble cr6,0x8276cdc8
	if (!ctx.cr6.gt) goto loc_8276CDC8;
	// subf r31,r28,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r28.s64;
loc_8276CDC8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8276cdd4
	if (ctx.cr6.lt) goto loc_8276CDD4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8276CDD4:
	// subf r9,r30,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r30.s64;
	// stw r31,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r31.u32);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// b 0x8276ce28
	goto loc_8276CE28;
loc_8276CDF8:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r7,r11,9472
	ctx.r7.s64 = ctx.r11.s64 + 9472;
	// lwz r11,9472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9472);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8276ce28
	if (ctx.cr6.eq) goto loc_8276CE28;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lwz r4,17292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17292);
	// lwz r3,17288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17288);
	// bl 0x82d17bc0
	ctx.lr = 0x8276CE28;
	sub_82D17BC0(ctx, base);
loc_8276CE28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276CE30"))) PPC_WEAK_FUNC(sub_8276CE30);
PPC_FUNC_IMPL(__imp__sub_8276CE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x8276CE38;
	__savegprlr_18(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82333900
	ctx.lr = 0x8276CE48;
	sub_82333900(ctx, base);
	// lis r24,-31954
	ctx.r24.s64 = -2094137344;
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r21,-31963
	ctx.r21.s64 = -2094727168;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,9216(r24)
	PPC_STORE_U32(ctx.r24.u32 + 9216, ctx.r28.u32);
	// beq 0x8276cf80
	if (ctx.cr0.eq) goto loc_8276CF80;
	// addi r31,r29,144
	ctx.r31.s64 = ctx.r29.s64 + 144;
	// addi r26,r29,14
	ctx.r26.s64 = ctx.r29.s64 + 14;
	// subfic r23,r29,-144
	ctx.xer.ca = ctx.r29.u32 <= 4294967152;
	ctx.r23.s64 = -144 - ctx.r29.s64;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r19,-31963
	ctx.r19.s64 = -2094727168;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_8276CE84:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// add r30,r23,r31
	ctx.r30.u64 = ctx.r23.u64 + ctx.r31.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stdx r10,r30,r28
	PPC_STORE_U64(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u64);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r18,224(r29)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// bl 0x82414568
	ctx.lr = 0x8276CEA8;
	sub_82414568(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,240(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8276CEC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x8276CECC;
	sub_82333960(ctx, base);
	// lwz r11,10824(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10824);
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// bne cr6,0x8276cf64
	if (!ctx.cr6.eq) goto loc_8276CF64;
	// lwz r11,17276(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 17276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276cf64
	if (!ctx.cr6.eq) goto loc_8276CF64;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stb r22,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r22.u8);
	// ori r10,r10,32778
	ctx.r10.u64 = ctx.r10.u64 | 32778;
	// stb r22,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r22.u8);
	// rldicl r8,r11,32,32
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// lwz r3,17288(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17288);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// ori r9,r9,32779
	ctx.r9.u64 = ctx.r9.u64 | 32779;
	// lwz r11,9216(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9216);
	// xor r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// ldx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d18148
	ctx.lr = 0x8276CF54;
	sub_82D18148(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276cf64
	if (ctx.cr0.eq) goto loc_8276CF64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x8276CF64;
	sub_82A6ED60(ctx, base);
loc_8276CF64:
	// lbz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// lwz r28,9216(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 9216);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ce84
	if (ctx.cr6.lt) goto loc_8276CE84;
loc_8276CF80:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r31,r11,9500
	ctx.r31.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276CF98;
	sub_82A4EFB0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,17288(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 17288);
	// lbz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// bl 0x82d17dd0
	ctx.lr = 0x8276CFAC;
	sub_82D17DD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,4102
	ctx.r3.s64 = 4102;
	// bl 0x8276aed8
	ctx.lr = 0x8276CFB8;
	sub_8276AED8(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276CFBC;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmplwi cr6,r31,997
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 997, ctx.xer);
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
	// beq cr6,0x8276cfd4
	if (ctx.cr6.eq) goto loc_8276CFD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x8276CFD4;
	sub_82A6ED60(ctx, base);
loc_8276CFD4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276CFE0"))) PPC_WEAK_FUNC(sub_8276CFE0);
PPC_FUNC_IMPL(__imp__sub_8276CFE0) {
	PPC_FUNC_PROLOGUE();
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
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8276d018
	if (ctx.cr6.eq) goto loc_8276D018;
	// addi r11,r4,18
	ctx.r11.s64 = ctx.r4.s64 + 18;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r31,1
	ctx.r31.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ldx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// b 0x8276d04c
	goto loc_8276D04C;
loc_8276D018:
	// lbz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8276d04c
	if (ctx.cr0.eq) goto loc_8276D04C;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// addi r4,r3,144
	ctx.r4.s64 = ctx.r3.s64 + 144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8276D034:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8276d034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276D034;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r31,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82a4ef08
	ctx.lr = 0x8276D04C;
	sub_82A4EF08(ctx, base);
loc_8276D04C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,17288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// bl 0x82d17d28
	ctx.lr = 0x8276D068;
	sub_82D17D28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276d084
	if (ctx.cr0.eq) goto loc_8276D084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x8276D078;
	sub_82A6ED60(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10816, ctx.r11.u32);
loc_8276D084:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10852, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8276D0A8"))) PPC_WEAK_FUNC(sub_8276D0A8);
PPC_FUNC_IMPL(__imp__sub_8276D0A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d0e0
	if (!ctx.cr6.gt) goto loc_8276D0E0;
	// twi 31,r0,22
loc_8276D0E0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276D0E4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d0f0
	if (!ctx.cr6.gt) goto loc_8276D0F0;
	// twi 31,r0,22
loc_8276D0F0:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276d128
	if (ctx.cr6.eq) goto loc_8276D128;
	// blt cr6,0x8276d100
	if (ctx.cr6.lt) goto loc_8276D100;
	// twi 31,r0,22
loc_8276D100:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276D10C;
	sub_8276B6B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276d11c
	if (ctx.cr6.lt) goto loc_8276D11C;
	// twi 31,r0,22
loc_8276D11C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276d0e4
	goto loc_8276D0E4;
loc_8276D128:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8756(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8756);
	// bl 0x8276b6b0
	ctx.lr = 0x8276D138;
	sub_8276B6B0(ctx, base);
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276D150"))) PPC_WEAK_FUNC(sub_8276D150);
PPC_FUNC_IMPL(__imp__sub_8276D150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8276D158;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r23,r11,9500
	ctx.r23.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8276d3a8
	if (ctx.cr6.eq) goto loc_8276D3A8;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x8276D188;
	sub_82A4EFB0(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r31,17296(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17296);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276D1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82d17fc0
	ctx.lr = 0x8276D1DC;
	sub_82D17FC0(ctx, base);
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r3,10800(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10800);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276d1f8
	if (ctx.cr6.eq) goto loc_8276D1F8;
	// bl 0x82332db8
	ctx.lr = 0x8276D1F0;
	sub_82332DB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,10800(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10800, ctx.r11.u32);
loc_8276D1F8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82333900
	ctx.lr = 0x8276D200;
	sub_82333900(ctx, base);
	// lwz r9,13024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r11,-31943
	ctx.r11.s64 = -2093416448;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r3,10800(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10800, ctx.r3.u32);
	// addi r27,r11,-18640
	ctx.r27.s64 = ctx.r11.s64 + -18640;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// lwz r29,76(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8276d2b4
	if (!ctx.cr6.gt) goto loc_8276D2B4;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_8276D230:
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8276d274
	if (!ctx.cr6.eq) goto loc_8276D274;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mulli r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 * 24;
	// stwx r6,r4,r27
	PPC_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r6.u32);
	// addi r6,r27,16
	ctx.r6.s64 = ctx.r27.s64 + 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r3,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r3.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r11,r4,r6
	PPC_STORE_U32(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u32);
	// b 0x8276d2a0
	goto loc_8276D2A0;
loc_8276D274:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8276d2a8
	if (!ctx.cr6.eq) goto loc_8276D2A8;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r27,8
	ctx.r5.s64 = ctx.r27.s64 + 8;
	// mulli r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 * 24;
	// stwx r6,r4,r27
	PPC_STORE_U32(ctx.r4.u32 + ctx.r27.u32, ctx.r6.u32);
	// stbx r30,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r30.u8);
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r6,r27,16
	ctx.r6.s64 = ctx.r27.s64 + 16;
	// stdx r11,r4,r6
	PPC_STORE_U64(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u64);
loc_8276D2A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
loc_8276D2A8:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bne 0x8276d230
	if (!ctx.cr0.eq) goto loc_8276D230;
loc_8276D2B4:
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-18840
	ctx.r31.s64 = ctx.r10.s64 + -18840;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// ori r11,r11,32778
	ctx.r11.u64 = ctx.r11.u64 | 32778;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// ori r10,r10,32779
	ctx.r10.u64 = ctx.r10.u64 | 32779;
	// lwz r11,17276(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 17276);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,912(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276D2F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// ble cr6,0x8276d350
	if (!ctx.cr6.gt) goto loc_8276D350;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_8276D308:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8276d344
	if (!ctx.cr6.eq) goto loc_8276D344;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r30,3,13,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r8,r30,16
	ctx.r8.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r7,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r7.u32);
	// clrlwi r30,r8,16
	ctx.r30.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r10,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r10.u32);
loc_8276D344:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x8276d308
	if (!ctx.cr0.eq) goto loc_8276D308;
loc_8276D350:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// addi r24,r1,112
	ctx.r24.s64 = ctx.r1.s64 + 112;
	// lwz r29,10800(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10800);
	// lwz r28,17296(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 17296);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276D370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82d17fc0
	ctx.lr = 0x8276D39C;
	sub_82D17FC0(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276D3A0;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
loc_8276D3A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D3B0"))) PPC_WEAK_FUNC(sub_8276D3B0);
PPC_FUNC_IMPL(__imp__sub_8276D3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276D3B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// addi r7,r8,9720
	ctx.r7.s64 = ctx.r8.s64 + 9720;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r11,6280
	ctx.r27.s64 = ctx.r11.s64 + 6280;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stw r10,9720(r8)
	PPC_STORE_U32(ctx.r8.u32 + 9720, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// stw r9,212(r27)
	PPC_STORE_U32(ctx.r27.u32 + 212, ctx.r9.u32);
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// stw r3,17296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17296, ctx.r3.u32);
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276d4a0
	if (ctx.cr6.eq) goto loc_8276D4A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8276D420:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r10,68(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ldx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// ld r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276d464
	if (!ctx.cr6.eq) goto loc_8276D464;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82a46198
	ctx.lr = 0x8276D460;
	sub_82A46198(ctx, base);
	// b 0x8276d48c
	goto loc_8276D48C;
loc_8276D464:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8276d474
	if (!ctx.cr6.eq) goto loc_8276D474;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x8276d480
	goto loc_8276D480;
loc_8276D474:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8276d494
	if (!ctx.cr6.eq) goto loc_8276D494;
	// li r5,8
	ctx.r5.s64 = 8;
loc_8276D480:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82a46230
	ctx.lr = 0x8276D48C;
	sub_82A46230(ctx, base);
loc_8276D48C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,17296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17296);
loc_8276D494:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x8276d420
	if (!ctx.cr0.eq) goto loc_8276D420;
loc_8276D4A0:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276D4B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,17296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17296);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x82a46198
	ctx.lr = 0x8276D4CC;
	sub_82A46198(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17296);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// lwz r5,17276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17276);
	// bl 0x82a46198
	ctx.lr = 0x8276D4E4;
	sub_82A46198(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r29,r11,9500
	ctx.r29.s64 = ctx.r11.s64 + 9500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8276D4FC;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r30,r11,17288
	ctx.r30.s64 = ctx.r11.s64 + 17288;
	// lwz r3,17288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276d51c
	if (ctx.cr6.eq) goto loc_8276D51C;
	// bl 0x82a6ed08
	ctx.lr = 0x8276D514;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8276D51C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lis r6,-31949
	ctx.r6.s64 = -2093809664;
	// lwz r4,17296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17296);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r5,912(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// addi r8,r8,9532
	ctx.r8.s64 = ctx.r8.s64 + 9532;
	// lwz r11,17292(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17292);
	// addi r7,r6,10808
	ctx.r7.s64 = ctx.r6.s64 + 10808;
	// ori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 | 1;
	// lwz r6,60(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lwz r5,56(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// bl 0x82d17a10
	ctx.lr = 0x8276D558;
	sub_82D17A10(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276D55C;
	sub_82A6F310(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r7,-31949
	ctx.r7.s64 = -2093809664;
	// addi r8,r8,6536
	ctx.r8.s64 = ctx.r8.s64 + 6536;
	// lwz r11,8756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8756);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,10804(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10804, ctx.r10.u32);
	// stw r3,10868(r7)
	PPC_STORE_U32(ctx.r7.u32 + 10868, ctx.r3.u32);
	// stw r10,216(r27)
	PPC_STORE_U32(ctx.r27.u32 + 216, ctx.r10.u32);
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D598"))) PPC_WEAK_FUNC(sub_8276D598);
PPC_FUNC_IMPL(__imp__sub_8276D598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276D5A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,10804(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10804, ctx.r11.u32);
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,17296(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17296);
	// bl 0x82a46198
	ctx.lr = 0x8276D5CC;
	sub_82A46198(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// li r11,46
	ctx.r11.s64 = 46;
	// stw r11,17292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17292, ctx.r11.u32);
	// lwz r10,17276(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17276);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276d5f0
	if (!ctx.cr6.eq) goto loc_8276D5F0;
	// li r11,62
	ctx.r11.s64 = 62;
	// stw r11,17292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17292, ctx.r11.u32);
loc_8276D5F0:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r30,r10,17288
	ctx.r30.s64 = ctx.r10.s64 + 17288;
	// lwz r3,17288(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17288);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276d614
	if (ctx.cr6.eq) goto loc_8276D614;
	// bl 0x82a6ed08
	ctx.lr = 0x8276D608;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,17292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17292);
loc_8276D614:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r4,17296(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 17296);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r31,r10,9532
	ctx.r31.s64 = ctx.r10.s64 + 9532;
	// addi r7,r9,10808
	ctx.r7.s64 = ctx.r9.s64 + 10808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82d17a10
	ctx.lr = 0x8276D644;
	sub_82D17A10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8276d654
	if (ctx.cr0.eq) goto loc_8276D654;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x8276D654;
	sub_82A6ED60(ctx, base);
loc_8276D654:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r29,r11,6536
	ctx.r29.s64 = ctx.r11.s64 + 6536;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// bl 0x82d17668
	ctx.lr = 0x8276D66C;
	sub_82D17668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8276d69c
	if (ctx.cr0.eq) goto loc_8276D69C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276D694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8276d7c8
	goto loc_8276D7C8;
loc_8276D69C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r28.u32);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r31,r11,6280
	ctx.r31.s64 = ctx.r11.s64 + 6280;
	// addi r10,r10,6808
	ctx.r10.s64 = ctx.r10.s64 + 6808;
	// li r30,1
	ctx.r30.s64 = 1;
	// ld r11,6280(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6280);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// stb r30,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r30.u8);
	// stw r28,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r28.u32);
	// li r12,99
	ctx.r12.s64 = 99;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// bl 0x82a4ea80
	ctx.lr = 0x8276D6DC;
	sub_82A4EA80(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276D6F0;
	sub_82A4D1F8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x82a4efb0
	ctx.lr = 0x8276D700;
	sub_82A4EFB0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,548(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8276d7a8
	if (ctx.cr6.eq) goto loc_8276D7A8;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8276d7a8
	if (ctx.cr6.eq) goto loc_8276D7A8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// slw r10,r30,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r11,10876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10876);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276d7a8
	if (ctx.cr6.eq) goto loc_8276D7A8;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46508
	ctx.lr = 0x8276D74C;
	sub_82A46508(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46238
	ctx.lr = 0x8276D75C;
	sub_82A46238(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,16
	ctx.r8.s64 = 16;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a45b58
	ctx.lr = 0x8276D780;
	sub_82A45B58(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276d7a8
	if (ctx.cr6.eq) goto loc_8276D7A8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x8276D7A4;
	sub_82A4EFB0(ctx, base);
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
loc_8276D7A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276D7B4;
	sub_8276B6B0(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276D7B8;
	sub_82A6F310(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,10816(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10816, ctx.r11.u32);
loc_8276D7C8:
	// bl 0x8276aed8
	ctx.lr = 0x8276D7CC;
	sub_8276AED8(ctx, base);
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D7D8"))) PPC_WEAK_FUNC(sub_8276D7D8);
PPC_FUNC_IMPL(__imp__sub_8276D7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r10,10804(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10804);
	// stw r11,10836(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10836, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8276d874
	if (ctx.cr6.eq) goto loc_8276D874;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d824
	if (!ctx.cr6.gt) goto loc_8276D824;
	// twi 31,r0,22
loc_8276D824:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276D828:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d834
	if (!ctx.cr6.gt) goto loc_8276D834;
	// twi 31,r0,22
loc_8276D834:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276d874
	if (ctx.cr6.eq) goto loc_8276D874;
	// blt cr6,0x8276d844
	if (ctx.cr6.lt) goto loc_8276D844;
	// twi 31,r0,22
loc_8276D844:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276D858;
	sub_8276B6B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276d868
	if (ctx.cr6.lt) goto loc_8276D868;
	// twi 31,r0,22
loc_8276D868:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276d828
	goto loc_8276D828;
loc_8276D874:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276D890"))) PPC_WEAK_FUNC(sub_8276D890);
PPC_FUNC_IMPL(__imp__sub_8276D890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276D898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// addi r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 3;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276d8c8
	if (!ctx.cr6.eq) goto loc_8276D8C8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// ld r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x8276d934
	if (ctx.cr6.eq) goto loc_8276D934;
loc_8276D8C8:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d8e4
	if (!ctx.cr6.gt) goto loc_8276D8E4;
	// twi 31,r0,22
loc_8276D8E4:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8276D8E8:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276d8f4
	if (!ctx.cr6.gt) goto loc_8276D8F4;
	// twi 31,r0,22
loc_8276D8F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276d9a4
	if (ctx.cr6.eq) goto loc_8276D9A4;
	// blt cr6,0x8276d904
	if (ctx.cr6.lt) goto loc_8276D904;
	// twi 31,r0,22
loc_8276D904:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// beq cr6,0x8276d928
	if (ctx.cr6.eq) goto loc_8276D928;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276d920
	if (ctx.cr6.lt) goto loc_8276D920;
	// twi 31,r0,22
loc_8276D920:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// b 0x8276d8e8
	goto loc_8276D8E8;
loc_8276D928:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276d934
	if (ctx.cr6.lt) goto loc_8276D934;
	// twi 31,r0,22
loc_8276D934:
	// lhz r30,1272(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 1272);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r31,r8,8
	ctx.r31.s64 = ctx.r8.s64 + 8;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x8276d9a4
	if (ctx.cr0.eq) goto loc_8276D9A4;
	// lis r29,-31948
	ctx.r29.s64 = -2093744128;
loc_8276D94C:
	// lhz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,6808(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6808);
	// addi r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// ldx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r28.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8276D980;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi. r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8276d94c
	if (!ctx.cr0.eq) goto loc_8276D94C;
loc_8276D9A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276D9B0"))) PPC_WEAK_FUNC(sub_8276D9B0);
PPC_FUNC_IMPL(__imp__sub_8276D9B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276D9B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// sth r28,1355(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1355, ctx.r28.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r11,6280(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6280);
	// li r12,83
	ctx.r12.s64 = 83;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// bl 0x8276a300
	ctx.lr = 0x8276D9E4;
	sub_8276A300(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// subfic r9,r9,1264
	ctx.xer.ca = ctx.r9.u32 <= 1264;
	ctx.r9.s64 = 1264 - ctx.r9.s64;
	// addi r29,r10,6808
	ctx.r29.s64 = ctx.r10.s64 + 6808;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8276da6c
	if (ctx.cr6.eq) goto loc_8276DA6C;
	// clrlwi. r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8276da6c
	if (ctx.cr0.eq) goto loc_8276DA6C;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r29,436
	ctx.r31.s64 = ctx.r29.s64 + 436;
	// lhzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// mr. r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8276da6c
	if (ctx.cr0.eq) goto loc_8276DA6C;
	// addi r8,r6,3
	ctx.r8.s64 = ctx.r6.s64 + 3;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8276da74
	if (ctx.cr6.lt) goto loc_8276DA74;
	// sth r10,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r10.u16);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// stb r28,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r28.u8);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// addi r10,r29,36
	ctx.r10.s64 = ctx.r29.s64 + 36;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r3,r1,94
	ctx.r3.s64 = ctx.r1.s64 + 94;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276DA5C;
	sub_82A4D1F8(ctx, base);
	// lhzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r31.u32);
	// sthx r28,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u16);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
loc_8276DA6C:
	// bl 0x82a6f310
	ctx.lr = 0x8276DA70;
	sub_82A6F310(ctx, base);
	// stw r3,444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 444, ctx.r3.u32);
loc_8276DA74:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// sth r28,1355(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1355, ctx.r28.u16);
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276dac0
	if (!ctx.cr6.eq) goto loc_8276DAC0;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// ld r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8276dd30
	ctx.lr = 0x8276DA9C;
	sub_8276DD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8276dac0
	if (!ctx.cr0.eq) goto loc_8276DAC0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8276dd98
	ctx.lr = 0x8276DAAC;
	sub_8276DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8276dac0
	if (!ctx.cr0.eq) goto loc_8276DAC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276DAC0;
	sub_8276B6B0(ctx, base);
loc_8276DAC0:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8276dadc
	if (!ctx.cr6.gt) goto loc_8276DADC;
	// twi 31,r0,22
loc_8276DADC:
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_8276DAE0:
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8276daec
	if (!ctx.cr6.gt) goto loc_8276DAEC;
	// twi 31,r0,22
loc_8276DAEC:
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8276db64
	if (ctx.cr6.eq) goto loc_8276DB64;
	// blt cr6,0x8276dafc
	if (ctx.cr6.lt) goto loc_8276DAFC;
	// twi 31,r0,22
loc_8276DAFC:
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8276dd30
	ctx.lr = 0x8276DB08;
	sub_8276DD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8276db50
	if (!ctx.cr0.eq) goto loc_8276DB50;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8276db1c
	if (ctx.cr6.lt) goto loc_8276DB1C;
	// twi 31,r0,22
loc_8276DB1C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8276dd98
	ctx.lr = 0x8276DB24;
	sub_8276DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8276db48
	if (!ctx.cr0.eq) goto loc_8276DB48;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276db3c
	if (ctx.cr6.lt) goto loc_8276DB3C;
	// twi 31,r0,22
loc_8276DB3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276DB48;
	sub_8276B6B0(ctx, base);
loc_8276DB48:
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8276DB50:
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8276db5c
	if (ctx.cr6.lt) goto loc_8276DB5C;
	// twi 31,r0,22
loc_8276DB5C:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276dae0
	goto loc_8276DAE0;
loc_8276DB64:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276DB70"))) PPC_WEAK_FUNC(sub_8276DB70);
PPC_FUNC_IMPL(__imp__sub_8276DB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x8276DB78;
	__savegprlr_22(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,3
	ctx.r4.s64 = ctx.r3.s64 + 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,301
	ctx.r5.s64 = 301;
	// bl 0x82a4ea80
	ctx.lr = 0x8276DB8C;
	sub_82A4EA80(ctx, base);
	// addi r4,r1,89
	ctx.r4.s64 = ctx.r1.s64 + 89;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8276edf0
	ctx.lr = 0x8276DB98;
	sub_8276EDF0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r11,r11,6280
	ctx.r11.s64 = ctx.r11.s64 + 6280;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r24,r11,144
	ctx.r24.s64 = ctx.r11.s64 + 144;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r25,-31948
	ctx.r25.s64 = -2093744128;
	// lis r23,-31944
	ctx.r23.s64 = -2093481984;
	// addi r30,r11,9592
	ctx.r30.s64 = ctx.r11.s64 + 9592;
loc_8276DBBC:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276dd04
	if (ctx.cr0.eq) goto loc_8276DD04;
	// addi r26,r1,89
	ctx.r26.s64 = ctx.r1.s64 + 89;
	// addi r28,r1,125
	ctx.r28.s64 = ctx.r1.s64 + 125;
loc_8276DBD4:
	// ld r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// ld r11,13992(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 13992);
	// cmpld cr6,r31,r11
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8276dcec
	if (ctx.cr6.eq) goto loc_8276DCEC;
	// addi r11,r1,121
	ctx.r11.s64 = ctx.r1.s64 + 121;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r8,0
	ctx.r8.s64 = 0;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276dc60
	if (ctx.cr0.eq) goto loc_8276DC60;
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8276DC04:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r6
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r6.u64, ctx.xer);
	// bne cr6,0x8276dc14
	if (!ctx.cr6.eq) goto loc_8276DC14;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8276DC14:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x8276dc04
	if (!ctx.cr0.eq) goto loc_8276DC04;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8276dc60
	if (ctx.cr6.eq) goto loc_8276DC60;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8276DC30:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276dc54
	if (ctx.cr6.eq) goto loc_8276DC54;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r9,r30,96
	ctx.r9.s64 = ctx.r30.s64 + 96;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8276dc30
	if (ctx.cr6.lt) goto loc_8276DC30;
	// b 0x8276dc60
	goto loc_8276DC60;
loc_8276DC54:
	// mulli r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 * 48;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
loc_8276DC60:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_8276DC68:
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// beq cr6,0x8276dc7c
	if (ctx.cr6.eq) goto loc_8276DC7C;
	// ld r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276dca0
	if (ctx.cr6.eq) goto loc_8276DCA0;
loc_8276DC7C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r31
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r31.u64, ctx.xer);
	// beq cr6,0x8276dca0
	if (ctx.cr6.eq) goto loc_8276DCA0;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r9,r30,104
	ctx.r9.s64 = ctx.r30.s64 + 104;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8276dc68
	if (ctx.cr6.lt) goto loc_8276DC68;
	// b 0x8276dcb4
	goto loc_8276DCB4;
loc_8276DCA0:
	// mulli r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 * 48;
	// addi r10,r30,40
	ctx.r10.s64 = ctx.r30.s64 + 40;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276dcc4
	if (!ctx.cr6.eq) goto loc_8276DCC4;
loc_8276DCB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276dd98
	ctx.lr = 0x8276DCBC;
	sub_8276DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8276dccc
	if (ctx.cr0.eq) goto loc_8276DCCC;
loc_8276DCC4:
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x8276dcd0
	goto loc_8276DCD0;
loc_8276DCCC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8276DCD0:
	// lwz r3,6808(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 6808);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276DCEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276DCEC:
	// lbz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276dbd4
	if (ctx.cr6.lt) goto loc_8276DBD4;
loc_8276DD04:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x8276dbbc
	if (ctx.cr6.lt) goto loc_8276DBBC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8276dd28
	if (ctx.cr6.eq) goto loc_8276DD28;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10852(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10852, ctx.r11.u32);
loc_8276DD28:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276DD30"))) PPC_WEAK_FUNC(sub_8276DD30);
PPC_FUNC_IMPL(__imp__sub_8276DD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r11,14000(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 14000);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8276dd8c
	if (ctx.cr6.eq) goto loc_8276DD8C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,9592
	ctx.r10.s64 = ctx.r11.s64 + 9592;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
loc_8276DD58:
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r7,r3
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8276dd7c
	if (ctx.cr6.eq) goto loc_8276DD7C;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r7,r10,104
	ctx.r7.s64 = ctx.r10.s64 + 104;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8276dd58
	if (ctx.cr6.lt) goto loc_8276DD58;
	// b 0x8276dd88
	goto loc_8276DD88;
loc_8276DD7C:
	// mulli r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 * 48;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8276DD88:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8276DD8C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276DD98"))) PPC_WEAK_FUNC(sub_8276DD98);
PPC_FUNC_IMPL(__imp__sub_8276DD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8276DDA0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31944
	ctx.r24.s64 = -2093481984;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ld r11,14008(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 14008);
	// cmpld cr6,r7,r11
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8276df68
	if (ctx.cr6.eq) goto loc_8276DF68;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r8,r11,9592
	ctx.r8.s64 = ctx.r11.s64 + 9592;
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
loc_8276DDD0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8276de1c
	if (!ctx.cr6.eq) goto loc_8276DE1C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8276DDE0:
	// ld r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276de00
	if (ctx.cr6.eq) goto loc_8276DE00;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8276dde0
	if (ctx.cr6.lt) goto loc_8276DDE0;
	// b 0x8276de04
	goto loc_8276DE04;
loc_8276DE00:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8276DE04:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r8,104
	ctx.r10.s64 = ctx.r8.s64 + 104;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8276ddd0
	if (ctx.cr6.lt) goto loc_8276DDD0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276df68
	if (ctx.cr6.eq) goto loc_8276DF68;
loc_8276DE1C:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8276DE2C:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r7,14008(r24)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r24.u32 + 14008);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x8276de48
	if (ctx.cr6.eq) goto loc_8276DE48;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8276DE48:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x8276de2c
	if (!ctx.cr0.eq) goto loc_8276DE2C;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8276DE60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8276df68
	if (!ctx.cr6.eq) goto loc_8276DF68;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x8276df54
	if (ctx.cr6.eq) goto loc_8276DF54;
	// lwz r11,10876(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10876);
	// slw r10,r28,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r29.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276df54
	if (ctx.cr6.eq) goto loc_8276DF54;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8276DE98:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r11,14008(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 14008);
	// cmpld cr6,r4,r11
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x8276dec8
	if (ctx.cr6.eq) goto loc_8276DEC8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d18208
	ctx.lr = 0x8276DEB4;
	sub_82D18208(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x8276dec8
	if (!ctx.cr0.eq) goto loc_8276DEC8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8276ded8
	if (ctx.cr6.eq) goto loc_8276DED8;
loc_8276DEC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x8276de98
	if (ctx.cr6.lt) goto loc_8276DE98;
loc_8276DED8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8276df54
	if (!ctx.cr6.eq) goto loc_8276DF54;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a46250
	ctx.lr = 0x8276DEF0;
	sub_82A46250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8276df50
	if (!ctx.cr0.eq) goto loc_8276DF50;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276df50
	if (!ctx.cr6.eq) goto loc_8276DF50;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,251
	ctx.r4.s64 = 251;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a46250
	ctx.lr = 0x8276DF14;
	sub_82A46250(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276df64
	if (ctx.cr6.eq) goto loc_8276DF64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a46248
	ctx.lr = 0x8276DF3C;
	sub_82A46248(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276df50
	if (!ctx.cr6.eq) goto loc_8276DF50;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276df64
	if (ctx.cr6.eq) goto loc_8276DF64;
loc_8276DF50:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8276DF54:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x8276de60
	if (ctx.cr6.lt) goto loc_8276DE60;
	// b 0x8276df68
	goto loc_8276DF68;
loc_8276DF64:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8276DF68:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276DF70"))) PPC_WEAK_FUNC(sub_8276DF70);
PPC_FUNC_IMPL(__imp__sub_8276DF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// stw r3,95(r1)
	PPC_STORE_U32(ctx.r1.u32 + 95, ctx.r3.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// stw r4,91(r1)
	PPC_STORE_U32(ctx.r1.u32 + 91, ctx.r4.u32);
	// stw r5,99(r1)
	PPC_STORE_U32(ctx.r1.u32 + 99, ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// ld r11,6280(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6280);
	// li r12,83
	ctx.r12.s64 = 83;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// ble cr6,0x8276dfcc
	if (!ctx.cr6.gt) goto loc_8276DFCC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// subfic r10,r5,2
	ctx.xer.ca = ctx.r5.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r5.s64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
	// bl 0x8276cbf0
	ctx.lr = 0x8276DFCC;
	sub_8276CBF0(ctx, base);
loc_8276DFCC:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276dfe8
	if (!ctx.cr6.gt) goto loc_8276DFE8;
	// twi 31,r0,22
loc_8276DFE8:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276DFEC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276dff8
	if (!ctx.cr6.gt) goto loc_8276DFF8;
	// twi 31,r0,22
loc_8276DFF8:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276e030
	if (ctx.cr6.eq) goto loc_8276E030;
	// blt cr6,0x8276e008
	if (ctx.cr6.lt) goto loc_8276E008;
	// twi 31,r0,22
loc_8276E008:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276E014;
	sub_8276B6B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276e024
	if (ctx.cr6.lt) goto loc_8276E024;
	// twi 31,r0,22
loc_8276E024:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276dfec
	goto loc_8276DFEC;
loc_8276E030:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276E048"))) PPC_WEAK_FUNC(sub_8276E048);
PPC_FUNC_IMPL(__imp__sub_8276E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8276E050;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r26,r11,6792
	ctx.r26.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e1a0
	if (ctx.cr6.eq) goto loc_8276E1A0;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276e1a0
	if (ctx.cr0.eq) goto loc_8276E1A0;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r10,10860(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10860, ctx.r10.u32);
	// ble cr6,0x8276e094
	if (!ctx.cr6.gt) goto loc_8276E094;
	// twi 31,r0,22
loc_8276E094:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// addi r29,r10,9376
	ctx.r29.s64 = ctx.r10.s64 + 9376;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r28,r8,9408
	ctx.r28.s64 = ctx.r8.s64 + 9408;
	// addi r27,r10,9532
	ctx.r27.s64 = ctx.r10.s64 + 9532;
loc_8276E0B4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276e0c0
	if (!ctx.cr6.gt) goto loc_8276E0C0;
	// twi 31,r0,22
loc_8276E0C0:
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276e158
	if (ctx.cr6.eq) goto loc_8276E158;
	// blt cr6,0x8276e0d0
	if (ctx.cr6.lt) goto loc_8276E0D0;
	// twi 31,r0,22
loc_8276E0D0:
	// addi r4,r27,44
	ctx.r4.s64 = ctx.r27.s64 + 44;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82a4ea80
	ctx.lr = 0x8276E0E0;
	sub_82A4EA80(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82d17680
	ctx.lr = 0x8276E0F0;
	sub_82D17680(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// stwx r7,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r6,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r6.u32);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// beq cr6,0x8276e134
	if (ctx.cr6.eq) goto loc_8276E134;
	// bl 0x82d17728
	ctx.lr = 0x8276E12C;
	sub_82D17728(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8276E134:
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8276e144
	if (ctx.cr6.lt) goto loc_8276E144;
	// twi 31,r0,22
loc_8276E144:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// b 0x8276e0b4
	goto loc_8276E0B4;
loc_8276E158:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276e168
	if (!ctx.cr6.eq) goto loc_8276E168;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x8276e170
	goto loc_8276E170;
loc_8276E168:
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r3,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 8;
loc_8276E170:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82d176c8
	ctx.lr = 0x8276E1A0;
	sub_82D176C8(ctx, base);
loc_8276E1A0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276E1A8"))) PPC_WEAK_FUNC(sub_8276E1A8);
PPC_FUNC_IMPL(__imp__sub_8276E1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276E1B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r11,9372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e1e8
	if (ctx.cr6.eq) goto loc_8276E1E8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e1d8
	if (ctx.cr6.eq) goto loc_8276E1D8;
	// bl 0x82332db8
	ctx.lr = 0x8276E1D4;
	sub_82332DB8(ctx, base);
	// lwz r11,9372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9372);
loc_8276E1D8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276E1E0;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9372, ctx.r11.u32);
loc_8276E1E8:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r27,180(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// lwz r30,184(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r31,188(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// bl 0x82333900
	ctx.lr = 0x8276E208;
	sub_82333900(ctx, base);
	// lis r11,2730
	ctx.r11.s64 = 178913280;
	// stw r3,9372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9372, ctx.r3.u32);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mulli r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 * 24;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276e22c
	if (!ctx.cr6.gt) goto loc_8276E22C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8276E22C:
	// bl 0x82333900
	ctx.lr = 0x8276E230;
	sub_82333900(ctx, base);
	// lwz r10,9372(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9372);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// ble cr6,0x8276e344
	if (!ctx.cr6.gt) goto loc_8276E344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_8276E24C:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r6,-8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8276e30c
	if (ctx.cr6.lt) goto loc_8276E30C;
	// beq cr6,0x8276e2e8
	if (ctx.cr6.eq) goto loc_8276E2E8;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8276e2c4
	if (ctx.cr6.lt) goto loc_8276E2C4;
	// beq cr6,0x8276e2a0
	if (ctx.cr6.eq) goto loc_8276E2A0;
	// cmplwi cr6,r8,5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 5, ctx.xer);
	// bge cr6,0x8276e334
	if (!ctx.cr6.lt) goto loc_8276E334;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,3
	ctx.r6.s64 = 3;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r6,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r6.u8);
	// lfd f0,0(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stfd f0,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.f0.u64);
	// b 0x8276e334
	goto loc_8276E334;
loc_8276E2A0:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,5
	ctx.r6.s64 = 5;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r6,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r6.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// b 0x8276e334
	goto loc_8276E334;
loc_8276E2C4:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r6,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r6.u8);
	// ld r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// std r6,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r6.u64);
	// b 0x8276e334
	goto loc_8276E334;
loc_8276E2E8:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r6,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r6.u8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// b 0x8276e334
	goto loc_8276E334;
loc_8276E30C:
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r6,7
	ctx.r6.s64 = 7;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stb r6,8(r8)
	PPC_STORE_U8(ctx.r8.u32 + 8, ctx.r6.u8);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
loc_8276E334:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x8276e24c
	if (!ctx.cr0.eq) goto loc_8276E24C;
loc_8276E344:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x82a46508
	ctx.lr = 0x8276E358;
	sub_82A46508(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r6,9372(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9372);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r7,r10,9500
	ctx.r7.s64 = ctx.r10.s64 + 9500;
	// lwz r3,17288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// bl 0x82d18148
	ctx.lr = 0x8276E378;
	sub_82D18148(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8276E37C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276E390"))) PPC_WEAK_FUNC(sub_8276E390);
PPC_FUNC_IMPL(__imp__sub_8276E390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8276E398;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r30,r10,17300
	ctx.r30.s64 = ctx.r10.s64 + 17300;
	// addi r31,r11,9228
	ctx.r31.s64 = ctx.r11.s64 + 9228;
	// lwz r3,17300(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17300);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276e3d0
	if (ctx.cr6.eq) goto loc_8276E3D0;
	// bl 0x82a6ed08
	ctx.lr = 0x8276E3C0;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8276E3D0:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r3,208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// bl 0x82d18280
	ctx.lr = 0x8276E3F4;
	sub_82D18280(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82333900
	ctx.lr = 0x8276E3FC;
	sub_82333900(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8276e430
	if (ctx.cr6.eq) goto loc_8276E430;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a6f2f8
	ctx.lr = 0x8276E424;
	sub_82A6F2F8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276e434
	if (!ctx.cr6.eq) goto loc_8276E434;
loc_8276E430:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_8276E434:
	// lis r27,-31954
	ctx.r27.s64 = -2094137344;
	// lwz r3,9224(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e450
	if (ctx.cr6.eq) goto loc_8276E450;
	// bl 0x82332db8
	ctx.lr = 0x8276E448;
	sub_82332DB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,9224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9224, ctx.r11.u32);
loc_8276E450:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8276e474
	if (!ctx.cr6.gt) goto loc_8276E474;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8276E474:
	// bl 0x82333900
	ctx.lr = 0x8276E478;
	sub_82333900(ctx, base);
	// stw r3,9224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9224, ctx.r3.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r3,208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	// bl 0x82a46508
	ctx.lr = 0x8276E494;
	sub_82A46508(ctx, base);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,9224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9224);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8276e4f0
	if (!ctx.cr6.gt) goto loc_8276E4F0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_8276E4B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8276e4dc
	if (!ctx.cr0.eq) goto loc_8276E4DC;
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8276e4dc
	if (!ctx.cr0.eq) goto loc_8276E4DC;
	// ld r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_8276E4DC:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8276e4b8
	if (ctx.cr6.lt) goto loc_8276E4B8;
loc_8276E4F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276E4F8;
	sub_82332DB8(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r30,-31954
	ctx.r30.s64 = -2094137344;
	// lwz r3,9368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r28,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r28.u32);
	// beq cr6,0x8276e520
	if (ctx.cr6.eq) goto loc_8276E520;
	// bl 0x82332db8
	ctx.lr = 0x8276E518;
	sub_82332DB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,9368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9368, ctx.r11.u32);
loc_8276E520:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x8276e530
	if (!ctx.cr6.gt) goto loc_8276E530;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8276E530:
	// bl 0x82333900
	ctx.lr = 0x8276E534;
	sub_82333900(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r3,9368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9368, ctx.r3.u32);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r31,r11,9220
	ctx.r31.s64 = ctx.r11.s64 + 9220;
	// lwz r5,9224(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9224);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r29,r9,9232
	ctx.r29.s64 = ctx.r9.s64 + 9232;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a46368
	ctx.lr = 0x8276E574;
	sub_82A46368(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x8276e588
	if (ctx.cr6.eq) goto loc_8276E588;
	// li r3,4098
	ctx.r3.s64 = 4098;
	// bl 0x8276aed8
	ctx.lr = 0x8276E584;
	sub_8276AED8(ctx, base);
	// b 0x8276e5d4
	goto loc_8276E5D4;
loc_8276E588:
	// lwz r3,9368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e5a0
	if (ctx.cr6.eq) goto loc_8276E5A0;
	// bl 0x82332db8
	ctx.lr = 0x8276E598;
	sub_82332DB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,9368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9368, ctx.r11.u32);
loc_8276E5A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82333900
	ctx.lr = 0x8276E5A8;
	sub_82333900(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r5,9224(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9224);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r9,9368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 9368, ctx.r9.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r11,9500
	ctx.r10.s64 = ctx.r11.s64 + 9500;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a46368
	ctx.lr = 0x8276E5D4;
	sub_82A46368(ctx, base);
loc_8276E5D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276E5E0"))) PPC_WEAK_FUNC(sub_8276E5E0);
PPC_FUNC_IMPL(__imp__sub_8276E5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276E5E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r29,r11,9232
	ctx.r29.s64 = ctx.r11.s64 + 9232;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r8,912(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lfs f0,984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10792(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 10792, temp.u32);
	// lwz r10,196(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 196);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// beq cr6,0x8276e658
	if (ctx.cr6.eq) goto loc_8276E658;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8276E630:
	// lwz r8,912(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// addi r7,r29,8
	ctx.r7.s64 = ctx.r29.s64 + 8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,216(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 216);
	// lhzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// sthx r8,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8276e630
	if (ctx.cr6.lt) goto loc_8276E630;
loc_8276E658:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r9,192(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x8276e6e4
	if (ctx.cr6.lt) goto loc_8276E6E4;
	// beq cr6,0x8276e6dc
	if (ctx.cr6.eq) goto loc_8276E6DC;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bge cr6,0x8276e788
	if (!ctx.cr6.lt) goto loc_8276E788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,208(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 208);
	// bl 0x82a46508
	ctx.lr = 0x8276E680;
	sub_82A46508(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r31,r11,17300
	ctx.r31.s64 = ctx.r11.s64 + 17300;
	// addi r30,r10,9228
	ctx.r30.s64 = ctx.r10.s64 + 9228;
	// lwz r3,17300(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17300);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276e6b0
	if (ctx.cr6.eq) goto loc_8276E6B0;
	// bl 0x82a6ed08
	ctx.lr = 0x8276E6A0;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8276E6B0:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// bl 0x82a464a8
	ctx.lr = 0x8276E6D8;
	sub_82A464A8(ctx, base);
	// b 0x8276e73c
	goto loc_8276E73C;
loc_8276E6DC:
	// bl 0x8276e390
	ctx.lr = 0x8276E6E0;
	sub_8276E390(ctx, base);
	// b 0x8276e788
	goto loc_8276E788;
loc_8276E6E4:
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// addi r31,r9,17300
	ctx.r31.s64 = ctx.r9.s64 + 17300;
	// addi r30,r10,9228
	ctx.r30.s64 = ctx.r10.s64 + 9228;
	// lwz r3,17300(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17300);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8276e718
	if (ctx.cr6.eq) goto loc_8276E718;
	// bl 0x82a6ed08
	ctx.lr = 0x8276E704;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_8276E718:
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,204(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r4,200(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// bl 0x82a46448
	ctx.lr = 0x8276E73C;
	sub_82A46448(ctx, base);
loc_8276E73C:
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lwz r3,9368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e758
	if (ctx.cr6.eq) goto loc_8276E758;
	// bl 0x82332db8
	ctx.lr = 0x8276E750;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9368, ctx.r11.u32);
loc_8276E758:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276e788
	if (ctx.cr6.eq) goto loc_8276E788;
	// bl 0x82333900
	ctx.lr = 0x8276E768;
	sub_82333900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r4,9368(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9368, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,9500
	ctx.r7.s64 = ctx.r11.s64 + 9500;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a6f2f8
	ctx.lr = 0x8276E788;
	sub_82A6F2F8(ctx, base);
loc_8276E788:
	// bl 0x82a6f310
	ctx.lr = 0x8276E78C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r3,10868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10868, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276E7A0"))) PPC_WEAK_FUNC(sub_8276E7A0);
PPC_FUNC_IMPL(__imp__sub_8276E7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276E7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,6792
	ctx.r31.s64 = ctx.r11.s64 + 6792;
	// lwz r9,13024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276e7e0
	if (!ctx.cr6.gt) goto loc_8276E7E0;
	// twi 31,r0,22
loc_8276E7E0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8276E7F8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276e804
	if (!ctx.cr6.gt) goto loc_8276E804;
	// twi 31,r0,22
loc_8276E804:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276e814
	if (ctx.cr6.eq) goto loc_8276E814;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276e818
	if (ctx.cr6.eq) goto loc_8276E818;
loc_8276E814:
	// twi 31,r0,22
loc_8276E818:
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276e934
	if (ctx.cr6.eq) goto loc_8276E934;
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8276e830
	if (!ctx.cr6.eq) goto loc_8276E830;
	// twi 31,r0,22
loc_8276E830:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276e840
	if (ctx.cr6.lt) goto loc_8276E840;
	// twi 31,r0,22
loc_8276E840:
	// addi r3,r30,14
	ctx.r3.s64 = ctx.r30.s64 + 14;
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// bl 0x82a4dff0
	ctx.lr = 0x8276E84C;
	sub_82A4DFF0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq 0x8276e878
	if (ctx.cr0.eq) goto loc_8276E878;
	// blt cr6,0x8276e864
	if (ctx.cr6.lt) goto loc_8276E864;
	// twi 31,r0,22
loc_8276E864:
	// lwz r9,13024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276e7f8
	goto loc_8276E7F8;
loc_8276E878:
	// blt cr6,0x8276e880
	if (ctx.cr6.lt) goto loc_8276E880;
	// twi 31,r0,22
loc_8276E880:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276e930
	if (ctx.cr6.eq) goto loc_8276E930;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276e90c
	if (ctx.cr6.eq) goto loc_8276E90C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r6,r30,144
	ctx.r6.s64 = ctx.r30.s64 + 144;
	// addi r4,r11,7260
	ctx.r4.s64 = ctx.r11.s64 + 7260;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276e8f8
	if (ctx.cr6.eq) goto loc_8276E8F8;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// srawi r8,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8276e8ec
	if (!ctx.cr6.lt) goto loc_8276E8EC;
	// ld r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// b 0x8276e90c
	goto loc_8276E90C;
loc_8276E8EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276e8f8
	if (!ctx.cr6.gt) goto loc_8276E8F8;
	// twi 31,r0,22
loc_8276E8F8:
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8276f250
	ctx.lr = 0x8276E90C;
	sub_8276F250(ctx, base);
loc_8276E90C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8276c860
	ctx.lr = 0x8276E918;
	sub_8276C860(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276E92C;
	sub_8276B6B0(ctx, base);
	// b 0x8276e94c
	goto loc_8276E94C;
loc_8276E930:
	// lwz r9,13024(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_8276E934:
	// lwz r3,912(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276E94C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276E94C:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276E958"))) PPC_WEAK_FUNC(sub_8276E958);
PPC_FUNC_IMPL(__imp__sub_8276E958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276E960;
	__savegprlr_27(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r10,10848(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10848, ctx.r10.u32);
	// lwz r10,10864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10864);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276eb40
	if (!ctx.cr6.eq) goto loc_8276EB40;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r10,10864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10864, ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8276ea6c
	if (ctx.cr6.eq) goto loc_8276EA6C;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8276e9b8
	if (!ctx.cr6.eq) goto loc_8276E9B8;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8276ea70
	if (ctx.cr6.lt) goto loc_8276EA70;
loc_8276E9B8:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,6
	ctx.r10.s64 = 6;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276e9e8
	if (!ctx.cr6.eq) goto loc_8276E9E8;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276E9E4;
	sub_8276B6B0(ctx, base);
	// b 0x8276ea6c
	goto loc_8276EA6C;
loc_8276E9E8:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ea04
	if (!ctx.cr6.gt) goto loc_8276EA04;
	// twi 31,r0,22
loc_8276EA04:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276EA08:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ea14
	if (!ctx.cr6.gt) goto loc_8276EA14;
	// twi 31,r0,22
loc_8276EA14:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276ea4c
	if (ctx.cr6.eq) goto loc_8276EA4C;
	// blt cr6,0x8276ea24
	if (ctx.cr6.lt) goto loc_8276EA24;
	// twi 31,r0,22
loc_8276EA24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x8276EA30;
	sub_8276B6B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276ea40
	if (ctx.cr6.lt) goto loc_8276EA40;
	// twi 31,r0,22
loc_8276EA40:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276ea08
	goto loc_8276EA08;
loc_8276EA4C:
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// bne cr6,0x8276ea6c
	if (!ctx.cr6.eq) goto loc_8276EA6C;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276EA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276EA6C:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
loc_8276EA70:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8276eb18
	if (ctx.cr6.eq) goto loc_8276EB18;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 17, ctx.xer);
	// beq cr6,0x8276eb04
	if (ctx.cr6.eq) goto loc_8276EB04;
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// beq cr6,0x8276eaec
	if (ctx.cr6.eq) goto loc_8276EAEC;
	// cmpwi cr6,r28,19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 19, ctx.xer);
	// beq cr6,0x8276eac4
	if (ctx.cr6.eq) goto loc_8276EAC4;
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// bne cr6,0x8276eb18
	if (!ctx.cr6.eq) goto loc_8276EB18;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276EAAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276EAAC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8276eb28
	if (ctx.cr6.eq) goto loc_8276EB28;
	// li r3,4103
	ctx.r3.s64 = 4103;
	// b 0x8276eb3c
	goto loc_8276EB3C;
loc_8276EAC4:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r9.u32);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276EAE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276eaac
	goto loc_8276EAAC;
loc_8276EAEC:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276EB00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8276eb20
	goto loc_8276EB20;
loc_8276EB04:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8276EB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8276EB18:
	// cmpwi cr6,r28,18
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 18, ctx.xer);
	// bne cr6,0x8276eaac
	if (!ctx.cr6.eq) goto loc_8276EAAC;
loc_8276EB20:
	// li r3,4104
	ctx.r3.s64 = 4104;
	// b 0x8276eb3c
	goto loc_8276EB3C;
loc_8276EB28:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8276eb40
	if (ctx.cr6.eq) goto loc_8276EB40;
	// li r3,5
	ctx.r3.s64 = 5;
loc_8276EB3C:
	// bl 0x8276aed8
	ctx.lr = 0x8276EB40;
	sub_8276AED8(ctx, base);
loc_8276EB40:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276EB48"))) PPC_WEAK_FUNC(sub_8276EB48);
PPC_FUNC_IMPL(__imp__sub_8276EB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,6280
	ctx.r11.s64 = ctx.r11.s64 + 6280;
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8276eb64
	if (!ctx.cr6.eq) goto loc_8276EB64;
loc_8276EB5C:
	// ld r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// blr 
	return;
loc_8276EB64:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276eb80
	if (!ctx.cr6.gt) goto loc_8276EB80;
	// twi 31,r0,22
loc_8276EB80:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8276EB84:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276eb90
	if (!ctx.cr6.gt) goto loc_8276EB90;
	// twi 31,r0,22
loc_8276EB90:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276ebc0
	if (ctx.cr6.eq) goto loc_8276EBC0;
	// blt cr6,0x8276eba0
	if (ctx.cr6.lt) goto loc_8276EBA0;
	// twi 31,r0,22
loc_8276EBA0:
	// lwz r8,224(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8276eb5c
	if (ctx.cr6.eq) goto loc_8276EB5C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276ebb8
	if (ctx.cr6.lt) goto loc_8276EBB8;
	// twi 31,r0,22
loc_8276EBB8:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// b 0x8276eb84
	goto loc_8276EB84;
loc_8276EBC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276EBC8"))) PPC_WEAK_FUNC(sub_8276EBC8);
PPC_FUNC_IMPL(__imp__sub_8276EBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276EBD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8276ebf8
	if (!ctx.cr6.eq) goto loc_8276EBF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276EBF8:
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r10,6280
	ctx.r31.s64 = ctx.r10.s64 + 6280;
	// addi r10,r31,144
	ctx.r10.s64 = ctx.r31.s64 + 144;
	// ldx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// cmpld cr6,r10,r28
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ec34
	if (ctx.cr6.eq) goto loc_8276EC34;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 + 14;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x828165a8
	ctx.lr = 0x8276EC2C;
	sub_828165A8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
loc_8276EC34:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276ec70
	if (!ctx.cr6.eq) goto loc_8276EC70;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// ld r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ec70
	if (ctx.cr6.eq) goto loc_8276EC70;
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// bl 0x828165a8
	ctx.lr = 0x8276EC68;
	sub_828165A8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
loc_8276EC70:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276ec8c
	if (!ctx.cr6.gt) goto loc_8276EC8C;
	// twi 31,r0,22
loc_8276EC8C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8276EC90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276ec9c
	if (!ctx.cr6.gt) goto loc_8276EC9C;
	// twi 31,r0,22
loc_8276EC9C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8276ecf0
	if (ctx.cr6.eq) goto loc_8276ECF0;
	// blt cr6,0x8276ecac
	if (ctx.cr6.lt) goto loc_8276ECAC;
	// twi 31,r0,22
loc_8276ECAC:
	// ld r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// cmpld cr6,r9,r28
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8276ecd8
	if (ctx.cr6.eq) goto loc_8276ECD8;
	// addi r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 14;
	// bl 0x828165a8
	ctx.lr = 0x8276ECC8;
	sub_828165A8(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8276ecec
	if (ctx.cr6.eq) goto loc_8276ECEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_8276ECD8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ece4
	if (ctx.cr6.lt) goto loc_8276ECE4;
	// twi 31,r0,22
loc_8276ECE4:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276ec90
	goto loc_8276EC90;
loc_8276ECEC:
	// stw r27,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r27.u32);
loc_8276ECF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276ECF8"))) PPC_WEAK_FUNC(sub_8276ECF8);
PPC_FUNC_IMPL(__imp__sub_8276ECF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r31,548(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x8276ed24
	if (!ctx.cr6.eq) goto loc_8276ED24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8276ED24:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276ed4c
	if (!ctx.cr6.eq) goto loc_8276ED4C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 144);
	// bl 0x8276ebc8
	ctx.lr = 0x8276ED4C;
	sub_8276EBC8(ctx, base);
loc_8276ED4C:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,6280
	ctx.r11.s64 = ctx.r11.s64 + 6280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// ldx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8276ebc8
	ctx.lr = 0x8276ED6C;
	sub_8276EBC8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ed88
	if (!ctx.cr6.gt) goto loc_8276ED88;
	// twi 31,r0,22
loc_8276ED88:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276ED8C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276ed98
	if (!ctx.cr6.gt) goto loc_8276ED98;
	// twi 31,r0,22
loc_8276ED98:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276edd4
	if (ctx.cr6.eq) goto loc_8276EDD4;
	// blt cr6,0x8276eda8
	if (ctx.cr6.lt) goto loc_8276EDA8;
	// twi 31,r0,22
loc_8276EDA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8276ebc8
	ctx.lr = 0x8276EDB8;
	sub_8276EBC8(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276edc8
	if (ctx.cr6.lt) goto loc_8276EDC8;
	// twi 31,r0,22
loc_8276EDC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x8276ed8c
	goto loc_8276ED8C;
loc_8276EDD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276EDF0"))) PPC_WEAK_FUNC(sub_8276EDF0);
PPC_FUNC_IMPL(__imp__sub_8276EDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8276EDF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,9592
	ctx.r31.s64 = ctx.r11.s64 + 9592;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8276EE1C:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r28
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x8276ee40
	if (ctx.cr6.eq) goto loc_8276EE40;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r8,r31,96
	ctx.r8.s64 = ctx.r31.s64 + 96;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8276ee1c
	if (ctx.cr6.lt) goto loc_8276EE1C;
	// b 0x8276ee44
	goto loc_8276EE44;
loc_8276EE40:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8276EE44:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8276ef50
	if (!ctx.cr6.eq) goto loc_8276EF50;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276ee80
	if (!ctx.cr6.eq) goto loc_8276EE80;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// ld r11,6536(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6536);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, ctx.xer);
	// bne cr6,0x8276ee80
	if (!ctx.cr6.eq) goto loc_8276EE80;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8276ef78
	goto loc_8276EF78;
loc_8276EE80:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r8,r11,6792
	ctx.r8.s64 = ctx.r11.s64 + 6792;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_8276EE98:
	// ld r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x8276ef48
	if (ctx.cr6.eq) goto loc_8276EF48;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8276eeb0
	if (!ctx.cr6.gt) goto loc_8276EEB0;
	// twi 31,r0,22
loc_8276EEB0:
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8276EEC8:
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8276eed4
	if (!ctx.cr6.gt) goto loc_8276EED4;
	// twi 31,r0,22
loc_8276EED4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8276eee4
	if (ctx.cr6.eq) goto loc_8276EEE4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8276eee8
	if (ctx.cr6.eq) goto loc_8276EEE8;
loc_8276EEE4:
	// twi 31,r0,22
loc_8276EEE8:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8276ef2c
	if (ctx.cr6.eq) goto loc_8276EF2C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8276eefc
	if (!ctx.cr6.eq) goto loc_8276EEFC;
	// twi 31,r0,22
loc_8276EEFC:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ef0c
	if (ctx.cr6.lt) goto loc_8276EF0C;
	// twi 31,r0,22
loc_8276EF0C:
	// ld r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r25,r3
	ctx.cr6.compare<uint64_t>(ctx.r25.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8276ef30
	if (ctx.cr6.eq) goto loc_8276EF30;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276ef24
	if (ctx.cr6.lt) goto loc_8276EF24;
	// twi 31,r0,22
loc_8276EF24:
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// b 0x8276eec8
	goto loc_8276EEC8;
loc_8276EF2C:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8276EF30:
	// addi r7,r7,48
	ctx.r7.s64 = ctx.r7.s64 + 48;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8276ee98
	if (ctx.cr6.lt) goto loc_8276EE98;
	// b 0x8276ef68
	goto loc_8276EF68;
loc_8276EF48:
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x8276ef68
	goto loc_8276EF68;
loc_8276EF50:
	// mulli r11,r10,48
	ctx.r11.s64 = ctx.r10.s64 * 48;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x82a45878
	ctx.lr = 0x8276EF68;
	sub_82A45878(ctx, base);
loc_8276EF68:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8276efe0
	if (ctx.cr6.eq) goto loc_8276EFE0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x8276efe0
	if (!ctx.cr6.lt) goto loc_8276EFE0;
loc_8276EF78:
	// mulli r11,r30,48
	ctx.r11.s64 = ctx.r30.s64 * 48;
	// stdx r28,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r28.u64);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a45878
	ctx.lr = 0x8276EFA4;
	sub_82A45878(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8276efe0
	if (!ctx.cr6.eq) goto loc_8276EFE0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
loc_8276EFB4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x8276efdc
	if (!ctx.cr6.eq) goto loc_8276EFDC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8276efb4
	if (ctx.cr6.lt) goto loc_8276EFB4;
	// b 0x8276efe0
	goto loc_8276EFE0;
loc_8276EFDC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8276EFE0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276EFF0"))) PPC_WEAK_FUNC(sub_8276EFF0);
PPC_FUNC_IMPL(__imp__sub_8276EFF0) {
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,6792
	ctx.r11.s64 = ctx.r11.s64 + 6792;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276f020
	if (!ctx.cr6.gt) goto loc_8276F020;
	// twi 31,r0,22
loc_8276F020:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8276F024:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276f030
	if (!ctx.cr6.gt) goto loc_8276F030;
	// twi 31,r0,22
loc_8276F030:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276f064
	if (ctx.cr6.eq) goto loc_8276F064;
	// blt cr6,0x8276f040
	if (ctx.cr6.lt) goto loc_8276F040;
	// twi 31,r0,22
loc_8276F040:
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r3
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x8276f060
	if (ctx.cr6.eq) goto loc_8276F060;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8276f058
	if (ctx.cr6.lt) goto loc_8276F058;
	// twi 31,r0,22
loc_8276F058:
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// b 0x8276f024
	goto loc_8276F024;
loc_8276F060:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276F064:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8276f094
	if (!ctx.cr6.eq) goto loc_8276F094;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8276f09c
	if (!ctx.cr6.eq) goto loc_8276F09C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r3
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x8276f0b4
	if (!ctx.cr6.eq) goto loc_8276F0B4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8276F094:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276f0b4
	if (ctx.cr6.eq) goto loc_8276F0B4;
loc_8276F09C:
	// bl 0x82a6f310
	ctx.lr = 0x8276F0A0;
	sub_82A6F310(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// blt cr6,0x8276f0b8
	if (ctx.cr6.lt) goto loc_8276F0B8;
loc_8276F0B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8276F0B8:
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

__attribute__((alias("__imp__sub_8276F0D0"))) PPC_WEAK_FUNC(sub_8276F0D0);
PPC_FUNC_IMPL(__imp__sub_8276F0D0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r31,r11,6792
	ctx.r31.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f13c
	if (ctx.cr6.eq) goto loc_8276F13C;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8276f13c
	if (!ctx.cr6.lt) goto loc_8276F13C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f130
	if (ctx.cr6.eq) goto loc_8276F130;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F130;
	sub_82A4EA80(ctx, base);
loc_8276F130:
	// addi r11,r30,256
	ctx.r11.s64 = ctx.r30.s64 + 256;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8276f160
	goto loc_8276F160;
loc_8276F13C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x8276f148
	if (!ctx.cr6.gt) goto loc_8276F148;
	// twi 31,r0,22
loc_8276F148:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8276f178
	ctx.lr = 0x8276F160;
	sub_8276F178(ctx, base);
loc_8276F160:
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

__attribute__((alias("__imp__sub_8276F178"))) PPC_WEAK_FUNC(sub_8276F178);
PPC_FUNC_IMPL(__imp__sub_8276F178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276F180;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r31,r11,6792
	ctx.r31.s64 = ctx.r11.s64 + 6792;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f1b4
	if (ctx.cr6.eq) goto loc_8276F1B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276f1bc
	if (!ctx.cr0.eq) goto loc_8276F1BC;
loc_8276F1B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8276f1ec
	goto loc_8276F1EC;
loc_8276F1BC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276f1c8
	if (!ctx.cr6.gt) goto loc_8276F1C8;
	// twi 31,r0,22
loc_8276F1C8:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276f1dc
	if (ctx.cr6.eq) goto loc_8276F1DC;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276f1e0
	if (ctx.cr6.eq) goto loc_8276F1E0;
loc_8276F1DC:
	// twi 31,r0,22
loc_8276F1E0:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 8;
loc_8276F1EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8276f328
	ctx.lr = 0x8276F1F8;
	sub_8276F328(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276f20c
	if (!ctx.cr6.gt) goto loc_8276F20C;
	// twi 31,r0,22
loc_8276F20C:
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8276f234
	if (ctx.cr6.gt) goto loc_8276F234;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f238
	if (!ctx.cr6.lt) goto loc_8276F238;
loc_8276F234:
	// twi 31,r0,22
loc_8276F238:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276F250"))) PPC_WEAK_FUNC(sub_8276F250);
PPC_FUNC_IMPL(__imp__sub_8276F250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276F258;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r31,r11,7260
	ctx.r31.s64 = ctx.r11.s64 + 7260;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f28c
	if (ctx.cr6.eq) goto loc_8276F28C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8276f294
	if (!ctx.cr0.eq) goto loc_8276F294;
loc_8276F28C:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8276f2c4
	goto loc_8276F2C4;
loc_8276F294:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8276f2a0
	if (!ctx.cr6.gt) goto loc_8276F2A0;
	// twi 31,r0,22
loc_8276F2A0:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8276f2b4
	if (ctx.cr6.eq) goto loc_8276F2B4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276f2b8
	if (ctx.cr6.eq) goto loc_8276F2B8;
loc_8276F2B4:
	// twi 31,r0,22
loc_8276F2B8:
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r30,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 3;
loc_8276F2C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8276f710
	ctx.lr = 0x8276F2D0;
	sub_8276F710(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8276f2e4
	if (!ctx.cr6.gt) goto loc_8276F2E4;
	// twi 31,r0,22
loc_8276F2E4:
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8276f30c
	if (ctx.cr6.gt) goto loc_8276F30C;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f310
	if (!ctx.cr6.lt) goto loc_8276F310;
loc_8276F30C:
	// twi 31,r0,22
loc_8276F310:
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276F328"))) PPC_WEAK_FUNC(sub_8276F328);
PPC_FUNC_IMPL(__imp__sub_8276F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8276F330;
	__savegprlr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,520(r1)
	PPC_STORE_U64(ctx.r1.u32 + 520, ctx.r4.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F348;
	sub_82A4EA80(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r26,r11,6792
	ctx.r26.s64 = ctx.r11.s64 + 6792;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f36c
	if (!ctx.cr6.eq) goto loc_8276F36C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f380
	goto loc_8276F380;
loc_8276F36C:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
loc_8276F380:
	// lis r8,255
	ctx.r8.s64 = 16711680;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8276f3dc
	if (!ctx.cr6.lt) goto loc_8276F3DC;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,21104
	ctx.r4.s64 = ctx.r11.s64 + 21104;
	// bl 0x8276fba8
	ctx.lr = 0x8276F3A4;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8277f0b8
	ctx.lr = 0x8276F3B0;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x8276F3B4;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x8276F3C8;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8276fb38
	ctx.lr = 0x8276F3D8;
	sub_8276FB38(ctx, base);
	// b 0x8276f704
	goto loc_8276F704;
loc_8276F3DC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f3ec
	if (!ctx.cr6.eq) goto loc_8276F3EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f3f4
	goto loc_8276F3F4;
loc_8276F3EC:
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
loc_8276F3F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f5a4
	if (!ctx.cr6.lt) goto loc_8276F5A4;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8276f418
	if (ctx.cr6.lt) goto loc_8276F418;
	// add r25,r11,r9
	ctx.r25.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8276F418:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f428
	if (!ctx.cr6.eq) goto loc_8276F428;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f430
	goto loc_8276F430;
loc_8276F428:
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
loc_8276F430:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f458
	if (!ctx.cr6.lt) goto loc_8276F458;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f44c
	if (!ctx.cr6.eq) goto loc_8276F44C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f454
	goto loc_8276F454;
loc_8276F44C:
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
loc_8276F454:
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_8276F458:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8276f4a0
	if (ctx.cr6.eq) goto loc_8276F4A0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r25,0
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x8276f4a0
	if (!ctx.cr6.lt) goto loc_8276F4A0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82770178
	ctx.lr = 0x8276F494;
	sub_82770178(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8276F4A0:
	// rlwinm r3,r31,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// bl 0x82333900
	ctx.lr = 0x8276F4A8;
	sub_82333900(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,524(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276f4f0
	if (ctx.cr6.eq) goto loc_8276F4F0;
loc_8276F4C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276f4dc
	if (ctx.cr6.eq) goto loc_8276F4DC;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F4DC;
	sub_82A4EA80(ctx, base);
loc_8276F4DC:
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8276f4c4
	if (!ctx.cr6.eq) goto loc_8276F4C4;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8276F4F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276f50c
	if (ctx.cr6.eq) goto loc_8276F50C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F508;
	sub_82A4EA80(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8276F50C:
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8276f558
	if (ctx.cr6.eq) goto loc_8276F558;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,-256
	ctx.r31.s64 = ctx.r11.s64 + -256;
loc_8276F528:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f540
	if (ctx.cr6.eq) goto loc_8276F540;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F540;
	sub_82A4EA80(ctx, base);
loc_8276F540:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8276f528
	if (!ctx.cr6.eq) goto loc_8276F528;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_8276F558:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8276f568
	if (!ctx.cr6.eq) goto loc_8276F568;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8276f570
	goto loc_8276F570;
loc_8276F568:
	// subf r10,r11,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
loc_8276F570:
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f584
	if (ctx.cr6.eq) goto loc_8276F584;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276F584;
	sub_82332DB8(ctx, base);
loc_8276F584:
	// rlwinm r11,r25,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 8) & 0xFFFFFF00;
	// stw r27,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r27.u32);
	// rlwinm r10,r31,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// stw r10,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// b 0x8276f704
	goto loc_8276F704;
loc_8276F5A4:
	// lwz r27,524(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8276f668
	if (!ctx.cr6.lt) goto loc_8276F668;
	// addi r30,r27,256
	ctx.r30.s64 = ctx.r27.s64 + 256;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276f5f4
	if (ctx.cr6.eq) goto loc_8276F5F4;
	// addi r29,r30,-256
	ctx.r29.s64 = ctx.r30.s64 + -256;
loc_8276F5C8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f5e0
	if (ctx.cr6.eq) goto loc_8276F5E0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F5E0;
	sub_82A4EA80(ctx, base);
loc_8276F5E0:
	// addi r29,r29,256
	ctx.r29.s64 = ctx.r29.s64 + 256;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276f5c8
	if (!ctx.cr6.eq) goto loc_8276F5C8;
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_8276F5F4:
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// subfic r30,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r30.s64 = 1 - ctx.r11.s64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f630
	if (ctx.cr6.eq) goto loc_8276F630;
loc_8276F608:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276f620
	if (ctx.cr6.eq) goto loc_8276F620;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F620;
	sub_82A4EA80(ctx, base);
loc_8276F620:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// bne 0x8276f608
	if (!ctx.cr0.eq) goto loc_8276F608;
	// lwz r31,8(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_8276F630:
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r11,-256
	ctx.r30.s64 = ctx.r11.s64 + -256;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8276f704
	if (ctx.cr6.eq) goto loc_8276F704;
loc_8276F648:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F658;
	sub_82A4EA80(ctx, base);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8276f648
	if (!ctx.cr6.eq) goto loc_8276F648;
	// b 0x8276f704
	goto loc_8276F704;
loc_8276F668:
	// addi r29,r31,-256
	ctx.r29.s64 = ctx.r31.s64 + -256;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8276f6a4
	if (ctx.cr6.eq) goto loc_8276F6A4;
loc_8276F67C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276f694
	if (ctx.cr6.eq) goto loc_8276F694;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F694;
	sub_82A4EA80(ctx, base);
loc_8276F694:
	// addi r28,r28,256
	ctx.r28.s64 = ctx.r28.s64 + 256;
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8276f67c
	if (!ctx.cr6.eq) goto loc_8276F67C;
loc_8276F6A4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r30,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8276f6d8
	if (ctx.cr6.eq) goto loc_8276F6D8;
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
loc_8276F6B8:
	// addi r31,r31,-256
	ctx.r31.s64 = ctx.r31.s64 + -256;
	// addi r30,r30,-256
	ctx.r30.s64 = ctx.r30.s64 + -256;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F6D0;
	sub_82A4EA80(ctx, base);
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8276f6b8
	if (!ctx.cr6.eq) goto loc_8276F6B8;
loc_8276F6D8:
	// addi r30,r27,256
	ctx.r30.s64 = ctx.r27.s64 + 256;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8276f704
	if (ctx.cr6.eq) goto loc_8276F704;
loc_8276F6E8:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x8276F6F8;
	sub_82A4EA80(ctx, base);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8276f6e8
	if (!ctx.cr6.eq) goto loc_8276F6E8;
loc_8276F704:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276F710"))) PPC_WEAK_FUNC(sub_8276F710);
PPC_FUNC_IMPL(__imp__sub_8276F710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8276F718;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// ld r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// std r4,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r4.u64);
	// addi r27,r11,7260
	ctx.r27.s64 = ctx.r11.s64 + 7260;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f748
	if (!ctx.cr6.eq) goto loc_8276F748;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f75c
	goto loc_8276F75C;
loc_8276F748:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_8276F75C:
	// lis r8,8191
	ctx.r8.s64 = 536805376;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8276f7b8
	if (!ctx.cr6.lt) goto loc_8276F7B8;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,21104
	ctx.r4.s64 = ctx.r11.s64 + 21104;
	// bl 0x8276fba8
	ctx.lr = 0x8276F780;
	sub_8276FBA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8277f0b8
	ctx.lr = 0x8276F78C;
	sub_8277F0B8(ctx, base);
	// bl 0x82770178
	ctx.lr = 0x8276F790;
	sub_82770178(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,11252
	ctx.r11.s64 = ctx.r11.s64 + 11252;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8276fa98
	ctx.lr = 0x8276F7A4;
	sub_8276FA98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8276fb38
	ctx.lr = 0x8276F7B4;
	sub_8276FB38(ctx, base);
	// b 0x8276fa28
	goto loc_8276FA28;
loc_8276F7B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f7c8
	if (!ctx.cr6.eq) goto loc_8276F7C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f7d0
	goto loc_8276F7D0;
loc_8276F7C8:
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_8276F7D0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f924
	if (!ctx.cr6.lt) goto loc_8276F924;
	// rlwinm r11,r9,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// li r28,0
	ctx.r28.s64 = 0;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8276f7f4
	if (ctx.cr6.lt) goto loc_8276F7F4;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8276F7F4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f804
	if (!ctx.cr6.eq) goto loc_8276F804;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f80c
	goto loc_8276F80C;
loc_8276F804:
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_8276F80C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276f834
	if (!ctx.cr6.lt) goto loc_8276F834;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276f828
	if (!ctx.cr6.eq) goto loc_8276F828;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f830
	goto loc_8276F830;
loc_8276F828:
	// subf r11,r10,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_8276F830:
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8276F834:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8276f87c
	if (ctx.cr6.eq) goto loc_8276F87C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r28,0
	// divwu r11,r11,r28
	ctx.r11.u32 = ctx.r11.u32 / ctx.r28.u32;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8276f87c
	if (!ctx.cr6.lt) goto loc_8276F87C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82770178
	ctx.lr = 0x8276F870;
	sub_82770178(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8276F87C:
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82333900
	ctx.lr = 0x8276F884;
	sub_82333900(ctx, base);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r30,252(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r6,r31
	ctx.r29.u64 = ctx.r6.u64 + ctx.r31.u64;
	// beq 0x8276f8ac
	if (ctx.cr0.eq) goto loc_8276F8AC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276F8AC;
	sub_82A4D2D0(ctx, base);
loc_8276F8AC:
	// std r26,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r26.u64);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi. r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276f8d8
	if (ctx.cr0.eq) goto loc_8276F8D8;
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276F8D4;
	sub_82A4D2D0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_8276F8D8:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8276f8ec
	if (!ctx.cr6.eq) goto loc_8276F8EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8276f8f4
	goto loc_8276F8F4;
loc_8276F8EC:
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
loc_8276F8F4:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f904
	if (ctx.cr6.eq) goto loc_8276F904;
	// bl 0x82332db8
	ctx.lr = 0x8276F904;
	sub_82332DB8(ctx, base);
loc_8276F904:
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// b 0x8276fa28
	goto loc_8276FA28;
loc_8276F924:
	// lwz r31,252(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8276f9b8
	if (!ctx.cr6.lt) goto loc_8276F9B8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f958
	if (ctx.cr0.eq) goto loc_8276F958;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276F954;
	sub_82A4D2D0(ctx, base);
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_8276F958:
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8276f98c
	if (ctx.cr6.eq) goto loc_8276F98C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8276f98c
	if (ctx.cr0.eq) goto loc_8276F98C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8276F97C:
	// std r26,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r26.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8276f97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276F97C;
	// lwz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
loc_8276F98C:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// stw r10,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8276fa28
	if (ctx.cr6.eq) goto loc_8276FA28;
loc_8276F9A4:
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8276f9a4
	if (!ctx.cr6.eq) goto loc_8276F9A4;
	// b 0x8276fa28
	goto loc_8276FA28;
loc_8276F9B8:
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r6,r30
	ctx.r28.u64 = ctx.r6.u64 + ctx.r30.u64;
	// beq 0x8276f9e0
	if (ctx.cr0.eq) goto loc_8276F9E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276F9E0;
	sub_82A4D2D0(ctx, base);
loc_8276F9E0:
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// stw r28,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r28.u32);
	// srawi. r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8276fa08
	if (!ctx.cr0.gt) goto loc_8276FA08;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// subf r3,r11,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276FA08;
	sub_82A4D2D0(ctx, base);
loc_8276FA08:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8276fa28
	if (ctx.cr6.eq) goto loc_8276FA28;
loc_8276FA18:
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8276fa18
	if (!ctx.cr6.eq) goto loc_8276FA18;
loc_8276FA28:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FA30"))) PPC_WEAK_FUNC(sub_8276FA30);
PPC_FUNC_IMPL(__imp__sub_8276FA30) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8276fa5c
	if (ctx.cr0.eq) goto loc_8276FA5C;
	// bl 0x82332db8
	ctx.lr = 0x8276FA5C;
	sub_82332DB8(ctx, base);
loc_8276FA5C:
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

__attribute__((alias("__imp__sub_8276FA78"))) PPC_WEAK_FUNC(sub_8276FA78);
PPC_FUNC_IMPL(__imp__sub_8276FA78) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8276fa90
	if (ctx.cr6.lt) goto loc_8276FA90;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
loc_8276FA90:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8276FA98"))) PPC_WEAK_FUNC(sub_8276FA98);
PPC_FUNC_IMPL(__imp__sub_8276FA98) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,21144
	ctx.r11.s64 = ctx.r11.s64 + 21144;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8276fb38
	ctx.lr = 0x8276FAC8;
	sub_8276FB38(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
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

__attribute__((alias("__imp__sub_8276FAE8"))) PPC_WEAK_FUNC(sub_8276FAE8);
PPC_FUNC_IMPL(__imp__sub_8276FAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8276fa98
	ctx.lr = 0x8276FB08;
	sub_8276FA98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fb18
	if (ctx.cr0.eq) goto loc_8276FB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276FB18;
	sub_82332DB8(ctx, base);
loc_8276FB18:
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

__attribute__((alias("__imp__sub_8276FB38"))) PPC_WEAK_FUNC(sub_8276FB38);
PPC_FUNC_IMPL(__imp__sub_8276FB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8276FB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fb88
	if (ctx.cr0.eq) goto loc_8276FB88;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8276fb88
	if (ctx.cr6.lt) goto loc_8276FB88;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8276fb80
	if (ctx.cr6.eq) goto loc_8276FB80;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276FB80;
	sub_82A4D1F8(ctx, base);
loc_8276FB80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x8276FB88;
	sub_82332DB8(ctx, base);
loc_8276FB88:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FBA8"))) PPC_WEAK_FUNC(sub_8276FBA8);
PPC_FUNC_IMPL(__imp__sub_8276FBA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8276fb38
	ctx.lr = 0x8276FBD0;
	sub_8276FB38(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FBD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8276fbd4
	if (!ctx.cr6.eq) goto loc_8276FBD4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8276fc18
	ctx.lr = 0x8276FBFC;
	sub_8276FC18(ctx, base);
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

__attribute__((alias("__imp__sub_8276FC18"))) PPC_WEAK_FUNC(sub_8276FC18);
PPC_FUNC_IMPL(__imp__sub_8276FC18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276FC20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8276fc48
	if (ctx.cr6.lt) goto loc_8276FC48;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276fc4c
	goto loc_8276FC4C;
loc_8276FC48:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FC4C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8276fc7c
	if (ctx.cr6.lt) goto loc_8276FC7C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8276fc64
	if (ctx.cr6.lt) goto loc_8276FC64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8276fc68
	goto loc_8276FC68;
loc_8276FC64:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FC68:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8276fc80
	if (ctx.cr6.gt) goto loc_8276FC80;
loc_8276FC7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8276FC80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fcb4
	if (ctx.cr0.eq) goto loc_8276FCB4;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8276fc98
	if (ctx.cr6.lt) goto loc_8276FC98;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8276fc9c
	goto loc_8276FC9C;
loc_8276FC98:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FC9C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276fd20
	ctx.lr = 0x8276FCB0;
	sub_8276FD20(ctx, base);
	// b 0x8276fd18
	goto loc_8276FD18;
loc_8276FCB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276fec8
	ctx.lr = 0x8276FCC4;
	sub_8276FEC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fd14
	if (ctx.cr0.eq) goto loc_8276FD14;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x8276fce0
	if (ctx.cr6.lt) goto loc_8276FCE0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8276fce4
	goto loc_8276FCE4;
loc_8276FCE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8276FCE4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276FCF0;
	sub_82A4D1F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8276fd08
	if (ctx.cr6.lt) goto loc_8276FD08;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8276fd0c
	goto loc_8276FD0C;
loc_8276FD08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FD0C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
loc_8276FD14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8276FD18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FD20"))) PPC_WEAK_FUNC(sub_8276FD20);
PPC_FUNC_IMPL(__imp__sub_8276FD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276FD28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8276fd4c
	if (!ctx.cr6.lt) goto loc_8276FD4C;
	// bl 0x82a4c138
	ctx.lr = 0x8276FD4C;
	sub_82A4C138(ctx, base);
loc_8276FD4C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r29,r27,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8276fd60
	if (!ctx.cr6.lt) goto loc_8276FD60;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8276FD60:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8276fd8c
	if (!ctx.cr6.eq) goto loc_8276FD8C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bl 0x8276fe08
	ctx.lr = 0x8276FD78;
	sub_8276FE08(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276fe08
	ctx.lr = 0x8276FD88;
	sub_8276FE08(ctx, base);
	// b 0x8276fdfc
	goto loc_8276FDFC;
loc_8276FD8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8276fec8
	ctx.lr = 0x8276FD98;
	sub_8276FEC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8276fdfc
	if (ctx.cr0.eq) goto loc_8276FDFC;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8276fdb4
	if (ctx.cr6.lt) goto loc_8276FDB4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8276fdb8
	goto loc_8276FDB8;
loc_8276FDB4:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_8276FDB8:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x8276fdd0
	if (ctx.cr6.lt) goto loc_8276FDD0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276fdd4
	goto loc_8276FDD4;
loc_8276FDD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8276FDD4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x8276FDE0;
	sub_82A4D1F8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8276fdf4
	if (ctx.cr6.lt) goto loc_8276FDF4;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8276FDF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u8);
loc_8276FDFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FE08"))) PPC_WEAK_FUNC(sub_8276FE08);
PPC_FUNC_IMPL(__imp__sub_8276FE08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276FE10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8276fe30
	if (!ctx.cr6.lt) goto loc_8276FE30;
	// bl 0x82a4c138
	ctx.lr = 0x8276FE30;
	sub_82A4C138(ctx, base);
loc_8276FE30:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8276fe44
	if (!ctx.cr6.lt) goto loc_8276FE44;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_8276FE44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8276feb8
	if (ctx.cr6.eq) goto loc_8276FEB8;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x8276fe64
	if (ctx.cr6.lt) goto loc_8276FE64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276fe68
	goto loc_8276FE68;
loc_8276FE64:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8276FE68:
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x8276fe78
	if (ctx.cr6.lt) goto loc_8276FE78;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8276fe7c
	goto loc_8276FE7C;
loc_8276FE78:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8276FE7C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r6,r30,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r4,r29,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r29.s64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x82a4d2d0
	ctx.lr = 0x8276FE94;
	sub_82A4D2D0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// blt cr6,0x8276feb0
	if (ctx.cr6.lt) goto loc_8276FEB0;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_8276FEB0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u8);
loc_8276FEB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FEC8"))) PPC_WEAK_FUNC(sub_8276FEC8);
PPC_FUNC_IMPL(__imp__sub_8276FEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8276FED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276fef0
	if (!ctx.cr6.gt) goto loc_8276FEF0;
	// bl 0x82a4c040
	ctx.lr = 0x8276FEF0;
	sub_82A4C040(ctx, base);
loc_8276FEF0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8276ff14
	if (!ctx.cr6.lt) goto loc_8276FF14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276ff80
	ctx.lr = 0x8276FF10;
	sub_8276FF80(ctx, base);
	// b 0x8276ff6c
	goto loc_8276FF6C;
loc_8276FF14:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8276ff48
	if (ctx.cr0.eq) goto loc_8276FF48;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bge cr6,0x8276ff48
	if (!ctx.cr6.lt) goto loc_8276FF48;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8276ff34
	if (!ctx.cr6.lt) goto loc_8276FF34;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8276FF34:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8276fb38
	ctx.lr = 0x8276FF44;
	sub_8276FB38(ctx, base);
	// b 0x8276ff6c
	goto loc_8276FF6C;
loc_8276FF48:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8276ff6c
	if (!ctx.cr6.eq) goto loc_8276FF6C;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// blt cr6,0x8276ff64
	if (ctx.cr6.lt) goto loc_8276FF64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8276ff68
	goto loc_8276FF68;
loc_8276FF64:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
loc_8276FF68:
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
loc_8276FF6C:
	// subfc r11,r30,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8276FF80"))) PPC_WEAK_FUNC(sub_8276FF80);
PPC_FUNC_IMPL(__imp__sub_8276FF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8276FF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ori r31,r4,15
	ctx.r31.u64 = ctx.r4.u64 | 15;
	// li r11,-2
	ctx.r11.s64 = -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8276ffac
	if (!ctx.cr6.gt) goto loc_8276FFAC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x8276ffd4
	goto loc_8276FFD4;
loc_8276FFAC:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// divwu r9,r31,r9
	ctx.r9.u32 = ctx.r31.u32 / ctx.r9.u32;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8276ffd4
	if (!ctx.cr6.lt) goto loc_8276FFD4;
	// subfic r9,r10,-2
	ctx.xer.ca = ctx.r10.u32 <= 4294967294;
	ctx.r9.s64 = -2 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8276ffd4
	if (ctx.cr6.gt) goto loc_8276FFD4;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8276FFD4:
	// addi r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82770058
	ctx.lr = 0x8276FFE4;
	sub_82770058(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82770018
	if (ctx.cr6.eq) goto loc_82770018;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82770004
	if (ctx.cr6.lt) goto loc_82770004;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82770008
	goto loc_82770008;
loc_82770004:
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
loc_82770008:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4d1f8
	ctx.lr = 0x82770018;
	sub_82A4D1F8(ctx, base);
loc_82770018:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8276fb38
	ctx.lr = 0x82770028;
	sub_8276FB38(ctx, base);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r31,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r31.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// blt cr6,0x82770044
	if (ctx.cr6.lt) goto loc_82770044;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82770044:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r27
	PPC_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770058"))) PPC_WEAK_FUNC(sub_82770058);
PPC_FUNC_IMPL(__imp__sub_82770058) {
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
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827700b0
	if (ctx.cr6.eq) goto loc_827700B0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// twllei r31,0
	// divwu r11,r11,r31
	ctx.r11.u32 = ctx.r11.u32 / ctx.r31.u32;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x827700b0
	if (!ctx.cr6.lt) goto loc_827700B0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82770178
	ctx.lr = 0x827700A4;
	sub_82770178(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r11,r11,21132
	ctx.r11.s64 = ctx.r11.s64 + 21132;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_827700B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333900
	ctx.lr = 0x827700B8;
	sub_82333900(ctx, base);
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

__attribute__((alias("__imp__sub_827700D0"))) PPC_WEAK_FUNC(sub_827700D0);
PPC_FUNC_IMPL(__imp__sub_827700D0) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,21124
	ctx.r11.s64 = ctx.r11.s64 + 21124;
	// addi r10,r10,21144
	ctx.r10.s64 = ctx.r10.s64 + 21144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82770120
	ctx.lr = 0x82770104;
	sub_82770120(ctx, base);
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

__attribute__((alias("__imp__sub_82770120"))) PPC_WEAK_FUNC(sub_82770120);
PPC_FUNC_IMPL(__imp__sub_82770120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8276fb38
	ctx.lr = 0x82770148;
	sub_8276FB38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8276fd20
	ctx.lr = 0x8277015C;
	sub_8276FD20(ctx, base);
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

__attribute__((alias("__imp__sub_82770178"))) PPC_WEAK_FUNC(sub_82770178);
PPC_FUNC_IMPL(__imp__sub_82770178) {
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
	// lwz r10,10916(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10916);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827701a8
	if (ctx.cr6.eq) goto loc_827701A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827701A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827701A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827701BC;
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

__attribute__((alias("__imp__sub_827701D0"))) PPC_WEAK_FUNC(sub_827701D0);
PPC_FUNC_IMPL(__imp__sub_827701D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827701D8;
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,17272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17272);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x8312eb1c
	ctx.lr = 0x8277020C;
	sub_8312EB1C(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x8277040c
	if (ctx.cr0.eq) goto loc_8277040C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x827703cc
	if (ctx.cr6.eq) goto loc_827703CC;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8277037c
	if (ctx.cr6.eq) goto loc_8277037C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82770308
	if (ctx.cr6.eq) goto loc_82770308;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x827702ec
	if (ctx.cr6.eq) goto loc_827702EC;
	// addis r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -33554432;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827702d0
	if (ctx.cr0.eq) goto loc_827702D0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82770280
	if (ctx.cr6.eq) goto loc_82770280;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8277040c
	if (!ctx.cr6.eq) goto loc_8277040C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// b 0x82770404
	goto loc_82770404;
loc_82770280:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// addi r10,r10,-2536
	ctx.r10.s64 = ctx.r10.s64 + -2536;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827702ac
	if (ctx.cr6.eq) goto loc_827702AC;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827702b0
	goto loc_827702B0;
loc_827702AC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_827702B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827702c0
	if (ctx.cr6.eq) goto loc_827702C0;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827702c4
	goto loc_827702C4;
loc_827702C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_827702C4:
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826f01d8
	ctx.lr = 0x827702CC;
	sub_826F01D8(ctx, base);
	// b 0x8277040c
	goto loc_8277040C;
loc_827702D0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,4
	ctx.r29.s64 = 4;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// b 0x82770404
	goto loc_82770404;
loc_827702EC:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,10852(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10852, ctx.r11.u32);
	// stw r10,10796(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10796, ctx.r10.u32);
	// b 0x8277040c
	goto loc_8277040C;
loc_82770308:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r10,r10,-2448
	ctx.r10.s64 = ctx.r10.s64 + -2448;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770350
	if (ctx.cr6.eq) goto loc_82770350;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82770354
	goto loc_82770354;
loc_82770350:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82770354:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770364
	if (ctx.cr6.eq) goto loc_82770364;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82770368
	goto loc_82770368;
loc_82770364:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82770368:
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826f01d8
	ctx.lr = 0x82770370;
	sub_826F01D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333960
	ctx.lr = 0x82770378;
	sub_82333960(ctx, base);
	// b 0x8277040c
	goto loc_8277040C;
loc_8277037C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82770380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46240
	ctx.lr = 0x82770388;
	sub_82A46240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82770394
	if (ctx.cr0.eq) goto loc_82770394;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82770394:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82770380
	if (ctx.cr6.lt) goto loc_82770380;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x827703b4
	if (ctx.cr6.eq) goto loc_827703B4;
	// lfs f0,10888(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 10888);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82770418
	goto loc_82770418;
loc_827703B4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82770418
	if (!ctx.cr6.gt) goto loc_82770418;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x82770418
	goto loc_82770418;
loc_827703CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r11,10900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10900);
	// stw r4,10892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10892, ctx.r4.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827703f4
	if (ctx.cr6.eq) goto loc_827703F4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r31,10896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10896, ctx.r31.u32);
loc_827703F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
loc_82770404:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277040C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277040C:
	// lfs f0,10888(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 10888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8277043c
	if (!ctx.cr6.gt) goto loc_8277043C;
loc_82770418:
	// fsubs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,10888(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 10888, temp.u32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82770430
	if (!ctx.cr6.eq) goto loc_82770430;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8277043c
	if (ctx.cr6.gt) goto loc_8277043C;
loc_82770430:
	// stfs f31,10888(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 10888, temp.u32);
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x82770450
	ctx.lr = 0x8277043C;
	sub_82770450(ctx, base);
loc_8277043C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
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

__attribute__((alias("__imp__sub_82770450"))) PPC_WEAK_FUNC(sub_82770450);
PPC_FUNC_IMPL(__imp__sub_82770450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82770458;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r20,0
	ctx.r20.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r10,13024(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r23,10876(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10876);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r22,10884(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10884);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// stw r11,10876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10876, ctx.r11.u32);
	// stw r8,10880(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10880, ctx.r8.u32);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lwz r25,548(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r9,10884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10884, ctx.r9.u32);
loc_827704A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a46240
	ctx.lr = 0x827704B0;
	sub_82A46240(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8277055c
	if (ctx.cr0.eq) goto loc_8277055C;
	// addi r8,r3,-2
	ctx.r8.s64 = ctx.r3.s64 + -2;
	// lwz r10,17260(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17260);
	// lwz r9,10884(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10884);
	// slw r11,r21,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r30.u8 & 0x3F));
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// slw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r7,10884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10884, ctx.r7.u32);
	// beq cr6,0x827704ec
	if (ctx.cr6.eq) goto loc_827704EC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82770504
	if (ctx.cr6.eq) goto loc_82770504;
loc_827704EC:
	// lwz r10,10876(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10876);
	// lwz r9,10880(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10880);
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r6,10876(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10876, ctx.r6.u32);
	// stw r10,10880(r28)
	PPC_STORE_U32(ctx.r28.u32 + 10880, ctx.r10.u32);
loc_82770504:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82770560
	if (ctx.cr6.eq) goto loc_82770560;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82770560
	if (ctx.cr6.eq) goto loc_82770560;
	// lwz r10,13024(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,1316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1316);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82770560
	if (ctx.cr6.eq) goto loc_82770560;
	// lwz r10,10876(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10876);
	// and r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 & ctx.r23.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82770548
	if (!ctx.cr6.eq) goto loc_82770548;
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82770560
	if (ctx.cr6.eq) goto loc_82770560;
loc_82770548:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277055C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277055C:
	// lwz r7,10884(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10884);
loc_82770560:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x827704a8
	if (ctx.cr6.lt) goto loc_827704A8;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lis r8,-31949
	ctx.r8.s64 = -2093809664;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// stw r11,10896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10896, ctx.r11.u32);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// stw r10,10900(r8)
	PPC_STORE_U32(ctx.r8.u32 + 10900, ctx.r10.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// beq cr6,0x82770634
	if (ctx.cr6.eq) goto loc_82770634;
	// lwz r10,10876(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10876);
	// slw r11,r21,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r25.u8 & 0x3F));
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// and r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 & ctx.r23.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827705bc
	if (!ctx.cr6.eq) goto loc_827705BC;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_827705BC:
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 & ctx.r22.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827705d0
	if (!ctx.cr6.eq) goto loc_827705D0;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_827705D0:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82770608
	if (ctx.cr6.eq) goto loc_82770608;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a46238
	ctx.lr = 0x827705F4;
	sub_82A46238(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82770608
	if (!ctx.cr0.eq) goto loc_82770608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82816528
	ctx.lr = 0x82770604;
	sub_82816528(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82770608:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82770634
	if (!ctx.cr6.eq) goto loc_82770634;
	// lwz r11,17268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 17268);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82770628
	if (!ctx.cr6.eq) goto loc_82770628;
	// lwz r10,10904(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10904);
loc_82770628:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82770634
	if (ctx.cr6.eq) goto loc_82770634;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82770634:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r25,17268(r28)
	PPC_STORE_U32(ctx.r28.u32 + 17268, ctx.r25.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,10904(r26)
	PPC_STORE_U32(ctx.r26.u32 + 10904, ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277065C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x827707d8
	if (!ctx.cr6.eq) goto loc_827707D8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82770820
	if (!ctx.cr6.eq) goto loc_82770820;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r11,524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827706ac
	if (!ctx.cr6.eq) goto loc_827706AC;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827706ac
	if (!ctx.cr6.eq) goto loc_827706AC;
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827706ac
	if (ctx.cr6.eq) goto loc_827706AC;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827706ac
	if (ctx.cr6.eq) goto loc_827706AC;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x827706c4
	if (!ctx.cr6.lt) goto loc_827706C4;
loc_827706AC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827706BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82770820
	if (ctx.cr0.eq) goto loc_82770820;
loc_827706C4:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,254
	ctx.r4.s64 = 254;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82a46250
	ctx.lr = 0x827706D8;
	sub_82A46250(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82770820
	if (!ctx.cr0.eq) goto loc_82770820;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770820
	if (!ctx.cr6.eq) goto loc_82770820;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,524(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827707a0
	if (!ctx.cr6.eq) goto loc_827707A0;
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827707a0
	if (!ctx.cr6.eq) goto loc_827707A0;
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827707a0
	if (ctx.cr6.eq) goto loc_827707A0;
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x827707a0
	if (ctx.cr6.eq) goto loc_827707A0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16276(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16276);
	// bl 0x828cef18
	ctx.lr = 0x8277073C;
	sub_828CEF18(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10824);
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// beq cr6,0x82770754
	if (ctx.cr6.eq) goto loc_82770754;
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// bne cr6,0x82770764
	if (!ctx.cr6.eq) goto loc_82770764;
loc_82770754:
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8276e958
	ctx.lr = 0x82770764;
	sub_8276E958(ctx, base);
loc_82770764:
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1004
	ctx.r4.s64 = 1004;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8277079C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
loc_827707A0:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827707B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1001
	ctx.r4.s64 = 1001;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827707D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82770820
	goto loc_82770820;
loc_827707D8:
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r10,r10,-2536
	ctx.r10.s64 = ctx.r10.s64 + -2536;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770800
	if (ctx.cr6.eq) goto loc_82770800;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82770804
	goto loc_82770804;
loc_82770800:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_82770804:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770814
	if (ctx.cr6.eq) goto loc_82770814;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82770818
	goto loc_82770818;
loc_82770814:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82770818:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826f01d8
	ctx.lr = 0x82770820;
	sub_826F01D8(ctx, base);
loc_82770820:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770830"))) PPC_WEAK_FUNC(sub_82770830);
PPC_FUNC_IMPL(__imp__sub_82770830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82770838;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r28,r11,21156
	ctx.r28.s64 = ctx.r11.s64 + 21156;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// bl 0x82a6eeb0
	ctx.lr = 0x82770860;
	sub_82A6EEB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82a484f8
	ctx.lr = 0x82770870;
	sub_82A484F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8277088c
	if (ctx.cr0.eq) goto loc_8277088C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82770894
	if (ctx.cr6.eq) goto loc_82770894;
loc_8277088C:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82770894:
	// li r11,20
	ctx.r11.s64 = 20;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827708A8"))) PPC_WEAK_FUNC(sub_827708A8);
PPC_FUNC_IMPL(__imp__sub_827708A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r4,88
	ctx.r4.s64 = 88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827708D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x827708E4;
	sub_82A4EFB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a6ee98
	ctx.lr = 0x827708EC;
	sub_82A6EE98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277090C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82770928"))) PPC_WEAK_FUNC(sub_82770928);
PPC_FUNC_IMPL(__imp__sub_82770928) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x82a6eea0
	sub_82A6EEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770930"))) PPC_WEAK_FUNC(sub_82770930);
PPC_FUNC_IMPL(__imp__sub_82770930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82770938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a6eea8
	ctx.lr = 0x82770950;
	sub_82A6EEA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82770968
	if (ctx.cr6.eq) goto loc_82770968;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82770970
	if (ctx.cr6.eq) goto loc_82770970;
loc_82770968:
	// bl 0x82a4cd78
	ctx.lr = 0x8277096C;
	sub_82A4CD78(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82770970:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770990"))) PPC_WEAK_FUNC(sub_82770990);
PPC_FUNC_IMPL(__imp__sub_82770990) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82a6f320
	sub_82A6F320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770998"))) PPC_WEAK_FUNC(sub_82770998);
PPC_FUNC_IMPL(__imp__sub_82770998) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82a6f388
	sub_82A6F388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827709A0"))) PPC_WEAK_FUNC(sub_827709A0);
PPC_FUNC_IMPL(__imp__sub_827709A0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82a4d1f8
	sub_82A4D1F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827709B8"))) PPC_WEAK_FUNC(sub_827709B8);
PPC_FUNC_IMPL(__imp__sub_827709B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827709C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x829bdba0
	ctx.lr = 0x827709CC;
	sub_829BDBA0(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82333900
	ctx.lr = 0x827709D4;
	sub_82333900(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827709f0
	if (ctx.cr0.eq) goto loc_827709F0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x8281ab48
	ctx.lr = 0x827709E8;
	sub_8281AB48(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x827709f4
	goto loc_827709F4;
loc_827709F0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_827709F4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,10908
	ctx.r11.s64 = ctx.r11.s64 + 10908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r5,r11,18672
	ctx.r5.s64 = ctx.r11.s64 + 18672;
	// bl 0x82a6ed50
	ctx.lr = 0x82770A1C;
	sub_82A6ED50(ctx, base);
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r3,9744(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9744, ctx.r3.u32);
	// bl 0x82a48718
	ctx.lr = 0x82770A2C;
	sub_82A48718(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,9744(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 9744);
	// bl 0x82a485c8
	ctx.lr = 0x82770A38;
	sub_82A485C8(ctx, base);
	// stw r31,3752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3752, ctx.r31.u32);
	// stw r31,3748(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3748, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r31,3816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3816, ctx.r31.u32);
	// stw r31,3820(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3820, ctx.r31.u32);
	// bl 0x82a6f2f0
	ctx.lr = 0x82770A50;
	sub_82A6F2F0(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,3800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3800, ctx.r3.u32);
	// stw r31,3788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3788, ctx.r31.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r31,3792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3792, ctx.r31.u32);
	// stw r31,3796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3796, ctx.r31.u32);
	// stw r31,3784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3784, ctx.r31.u32);
	// stw r31,3804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3804, ctx.r31.u32);
	// stw r31,3808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3808, ctx.r31.u32);
	// stw r31,3812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3812, ctx.r31.u32);
	// stw r11,10896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10896, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x82770A88;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770a9c
	if (ctx.cr0.eq) goto loc_82770A9C;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x8281ab48
	ctx.lr = 0x82770A98;
	sub_8281AB48(ctx, base);
	// b 0x82770aa0
	goto loc_82770AA0;
loc_82770A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82770AA0:
	// stw r3,624(r30)
	PPC_STORE_U32(ctx.r30.u32 + 624, ctx.r3.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,3708
	ctx.r3.s64 = ctx.r30.s64 + 3708;
	// bl 0x82a4efb0
	ctx.lr = 0x82770AB4;
	sub_82A4EFB0(ctx, base);
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82333900
	ctx.lr = 0x82770ABC;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770af0
	if (ctx.cr0.eq) goto loc_82770AF0;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r29,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r29.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-24016
	ctx.r11.s64 = ctx.r11.s64 + -24016;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// b 0x82770af4
	goto loc_82770AF4;
loc_82770AF0:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82770AF4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770B08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82770B18"))) PPC_WEAK_FUNC(sub_82770B18);
PPC_FUNC_IMPL(__imp__sub_82770B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82770B20;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82770b40
	if (ctx.cr6.eq) goto loc_82770B40;
	// bl 0x828fc420
	ctx.lr = 0x82770B40;
	sub_828FC420(ctx, base);
loc_82770B40:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82771110
	if (ctx.cr6.eq) goto loc_82771110;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771540
	ctx.lr = 0x82770B54;
	sub_82771540(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r25,1
	ctx.r25.s64 = 1;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r10,13024(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82770fb8
	if (ctx.cr6.eq) goto loc_82770FB8;
	// lwz r9,10876(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10876);
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82770fb8
	if (ctx.cr6.eq) goto loc_82770FB8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770fb8
	if (!ctx.cr6.eq) goto loc_82770FB8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770fb8
	if (!ctx.cr6.eq) goto loc_82770FB8;
	// lwz r11,3816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770fb8
	if (!ctx.cr6.eq) goto loc_82770FB8;
	// lwz r11,3820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3820);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82770c90
	if (ctx.cr6.eq) goto loc_82770C90;
	// stw r23,3820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3820, ctx.r23.u32);
	// lwz r11,524(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82770c00
	if (ctx.cr6.eq) goto loc_82770C00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770BF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ceeb0
	ctx.lr = 0x82770BF8;
	sub_828CEEB0(ctx, base);
	// stw r25,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r25.u32);
	// b 0x82770c90
	goto loc_82770C90;
loc_82770C00:
	// lwz r11,520(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770c90
	if (!ctx.cr6.eq) goto loc_82770C90;
	// lwz r11,548(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82770c90
	if (ctx.cr6.eq) goto loc_82770C90;
	// lwz r11,528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82770c90
	if (ctx.cr6.eq) goto loc_82770C90;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82770c3c
	if (!ctx.cr6.eq) goto loc_82770C3C;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82770c70
	goto loc_82770C70;
loc_82770C3C:
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lis r11,13
	ctx.r11.s64 = 851968;
	// ori r11,r11,47021
	ctx.r11.u64 = ctx.r11.u64 | 47021;
	// lwz r4,16276(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16276);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82770c90
	if (ctx.cr6.eq) goto loc_82770C90;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771ac0
	ctx.lr = 0x82770C60;
	sub_82771AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82770c7c
	if (!ctx.cr6.eq) goto loc_82770C7C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82770C70:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x824c1588
	ctx.lr = 0x82770C78;
	sub_824C1588(ctx, base);
	// b 0x82770c90
	goto loc_82770C90;
loc_82770C7C:
	// stw r25,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,16276(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16276);
	// bl 0x828cec70
	ctx.lr = 0x82770C8C;
	sub_828CEC70(ctx, base);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
loc_82770C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x828ce730
	ctx.lr = 0x82770C9C;
	sub_828CE730(ctx, base);
	// lwz r11,3788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82770d10
	if (ctx.cr6.eq) goto loc_82770D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82770d10
	if (ctx.cr0.eq) goto loc_82770D10;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770d10
	if (!ctx.cr6.eq) goto loc_82770D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3792(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3792);
	// lwz r11,312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82770d10
	if (ctx.cr0.eq) goto loc_82770D10;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82770D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82770D10:
	// lwz r11,3796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82770e1c
	if (ctx.cr6.eq) goto loc_82770E1C;
	// lwz r11,3756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3756);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82770e1c
	if (ctx.cr6.eq) goto loc_82770E1C;
	// lwz r11,3784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// stw r23,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// bne cr6,0x82770d90
	if (!ctx.cr6.eq) goto loc_82770D90;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82770d7c
	if (ctx.cr6.lt) goto loc_82770D7C;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770d7c
	if (!ctx.cr6.eq) goto loc_82770D7C;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770d7c
	if (!ctx.cr6.eq) goto loc_82770D7C;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82770d7c
	if (ctx.cr6.eq) goto loc_82770D7C;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82770d80
	if (!ctx.cr6.eq) goto loc_82770D80;
loc_82770D7C:
	// li r4,5
	ctx.r4.s64 = 5;
loc_82770D80:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c1588
	ctx.lr = 0x82770D8C;
	sub_824C1588(ctx, base);
	// b 0x82770e1c
	goto loc_82770E1C;
loc_82770D90:
	// stw r25,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r25.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770dc4
	if (!ctx.cr6.eq) goto loc_82770DC4;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770dc4
	if (!ctx.cr6.eq) goto loc_82770DC4;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82770dc4
	if (ctx.cr6.eq) goto loc_82770DC4;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82770dd0
	if (!ctx.cr6.eq) goto loc_82770DD0;
loc_82770DC4:
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82770e14
	if (ctx.cr6.eq) goto loc_82770E14;
loc_82770DD0:
	// stw r25,3820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3820, ctx.r25.u32);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770e14
	if (!ctx.cr6.eq) goto loc_82770E14;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82770e14
	if (!ctx.cr6.eq) goto loc_82770E14;
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82770e14
	if (ctx.cr6.eq) goto loc_82770E14;
	// lwz r11,528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82770e14
	if (ctx.cr6.eq) goto loc_82770E14;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c1588
	ctx.lr = 0x82770E14;
	sub_824C1588(ctx, base);
loc_82770E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771818
	ctx.lr = 0x82770E1C;
	sub_82771818(ctx, base);
loc_82770E1C:
	// lwz r11,3816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82770eb4
	if (!ctx.cr6.eq) goto loc_82770EB4;
	// lwz r11,3804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770eb4
	if (!ctx.cr6.eq) goto loc_82770EB4;
	// stw r25,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r25.u32);
	// li r3,3596
	ctx.r3.s64 = 3596;
	// lwz r30,404(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r29,408(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r28,3748(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r27,3784(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r26,432(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82333900
	ctx.lr = 0x82770E64;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770ea4
	if (ctx.cr0.eq) goto loc_82770EA4;
	// addi r8,r31,564
	ctx.r8.s64 = ctx.r31.s64 + 564;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r10,r31,628
	ctx.r10.s64 = ctx.r31.s64 + 628;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r11,17928
	ctx.r7.s64 = ctx.r11.s64 + 17928;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82774440
	ctx.lr = 0x82770E9C;
	sub_82774440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82770ea8
	goto loc_82770EA8;
loc_82770EA4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82770EA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,10908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10908);
	// bl 0x8281abd8
	ctx.lr = 0x82770EB4;
	sub_8281ABD8(ctx, base);
loc_82770EB4:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82770f30
	if (!ctx.cr6.eq) goto loc_82770F30;
	// lwz r11,3808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770f30
	if (!ctx.cr6.eq) goto loc_82770F30;
	// stw r25,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r25.u32);
	// li r3,3596
	ctx.r3.s64 = 3596;
	// lwz r30,3748(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r29,3784(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r28,432(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82333900
	ctx.lr = 0x82770EE4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770f20
	if (ctx.cr0.eq) goto loc_82770F20;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r10,r31,628
	ctx.r10.s64 = ctx.r31.s64 + 628;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r11,18064
	ctx.r7.s64 = ctx.r11.s64 + 18064;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82774440
	ctx.lr = 0x82770F18;
	sub_82774440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82770f24
	goto loc_82770F24;
loc_82770F20:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82770F24:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,10908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10908);
	// bl 0x8281abd8
	ctx.lr = 0x82770F30;
	sub_8281ABD8(ctx, base);
loc_82770F30:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82770fac
	if (!ctx.cr6.eq) goto loc_82770FAC;
	// lwz r11,3812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82770fac
	if (!ctx.cr6.eq) goto loc_82770FAC;
	// stw r25,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r25.u32);
	// li r3,3596
	ctx.r3.s64 = 3596;
	// lwz r30,3748(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3748);
	// lwz r29,3784(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r28,432(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x82333900
	ctx.lr = 0x82770F60;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82770f9c
	if (ctx.cr0.eq) goto loc_82770F9C;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// addi r10,r31,628
	ctx.r10.s64 = ctx.r31.s64 + 628;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r11,18200
	ctx.r7.s64 = ctx.r11.s64 + 18200;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82774440
	ctx.lr = 0x82770F94;
	sub_82774440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82770fa0
	goto loc_82770FA0;
loc_82770F9C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
loc_82770FA0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,10908(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10908);
	// bl 0x8281abd8
	ctx.lr = 0x82770FAC;
	sub_8281ABD8(ctx, base);
loc_82770FAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771120
	ctx.lr = 0x82770FB4;
	sub_82771120(ctx, base);
	// b 0x82771110
	goto loc_82771110;
loc_82770FB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771120
	ctx.lr = 0x82770FC0;
	sub_82771120(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82770ff0
	if (ctx.cr6.eq) goto loc_82770FF0;
	// lwz r10,10876(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10876);
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
loc_82770FF0:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771014
	if (!ctx.cr6.eq) goto loc_82771014;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771014
	if (!ctx.cr6.eq) goto loc_82771014;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82771024
	if (ctx.cr6.eq) goto loc_82771024;
loc_82771014:
	// li r23,0
	ctx.r23.s64 = 0;
	// stw r23,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r23.u32);
	// stw r23,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r23.u32);
	// stw r23,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r23.u32);
loc_82771024:
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// li r29,6
	ctx.r29.s64 = 6;
	// li r30,9
	ctx.r30.s64 = 9;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8277104c
	if (!ctx.cr6.eq) goto loc_8277104C;
	// lwz r11,3804(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277104c
	if (!ctx.cr6.eq) goto loc_8277104C;
	// stw r29,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r29.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
loc_8277104C:
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82771080
	if (!ctx.cr6.eq) goto loc_82771080;
	// lwz r11,3812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771080
	if (!ctx.cr6.eq) goto loc_82771080;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// addi r4,r31,536
	ctx.r4.s64 = ctx.r31.s64 + 536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ced70
	ctx.lr = 0x82771080;
	sub_828CED70(ctx, base);
loc_82771080:
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827710a0
	if (!ctx.cr6.eq) goto loc_827710A0;
	// lwz r11,3808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827710a0
	if (!ctx.cr6.eq) goto loc_827710A0;
	// stw r29,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r29.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
loc_827710A0:
	// lwz r11,420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771110
	if (!ctx.cr6.eq) goto loc_82771110;
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82771110
	if (ctx.cr6.eq) goto loc_82771110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82771110:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771120"))) PPC_WEAK_FUNC(sub_82771120);
PPC_FUNC_IMPL(__imp__sub_82771120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82771128;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r14,2
	ctx.r14.s64 = 2;
	// li r16,3
	ctx.r16.s64 = 3;
	// li r15,4
	ctx.r15.s64 = 4;
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// li r18,9
	ctx.r18.s64 = 9;
	// li r19,6
	ctx.r19.s64 = 6;
	// lis r20,-31949
	ctx.r20.s64 = -2093809664;
	// addi r17,r11,31448
	ctx.r17.s64 = ctx.r11.s64 + 31448;
loc_8277115C:
	// lwz r31,624(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 624);
	// mr r24,r21
	ctx.r24.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e74c
	ctx.lr = 0x8277116C;
	sub_8312E74C(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771184
	if (!ctx.cr6.eq) goto loc_82771184;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// b 0x827712b4
	goto loc_827712B4;
loc_82771184:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771218
	if (!ctx.cr6.eq) goto loc_82771218;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// addi r29,r9,20
	ctx.r29.s64 = ctx.r9.s64 + 20;
	// add r26,r30,r8
	ctx.r26.u64 = ctx.r30.u64 + ctx.r8.u64;
loc_827711B4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827711c4
	if (ctx.cr6.eq) goto loc_827711C4;
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
loc_827711C4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r26,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827711d8
	if (!ctx.cr6.eq) goto loc_827711D8;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_827711D8:
	// stwx r31,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r31.u32);
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x82a6ee60
	ctx.lr = 0x827711E4;
	sub_82A6EE60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e73c
	ctx.lr = 0x827711EC;
	sub_8312E73C(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// lwzx r3,r30,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x82a4be60
	ctx.lr = 0x827711FC;
	sub_82A4BE60(ctx, base);
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r23,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r23.u32);
	// bl 0x8312e74c
	ctx.lr = 0x8277120C;
	sub_8312E74C(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827711b4
	if (ctx.cr6.eq) goto loc_827711B4;
loc_82771218:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r23,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r23.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// divw r7,r10,r8
	ctx.r7.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mullw r7,r7,r8
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// twllei r8,0
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// twlgei r9,-1
	// beq cr6,0x827712b4
	if (ctx.cr6.eq) goto loc_827712B4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x82771294
	if (!ctx.cr6.eq) goto loc_82771294;
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
loc_82771294:
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a6ed88
	ctx.lr = 0x827712B4;
	sub_82A6ED88(ctx, base);
loc_827712B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8312e73c
	ctx.lr = 0x827712BC;
	sub_8312E73C(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82771534
	if (ctx.cr6.eq) goto loc_82771534;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82771498
	if (ctx.cr6.eq) goto loc_82771498;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x827713f0
	if (ctx.cr6.eq) goto loc_827713F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82771344
	if (ctx.cr6.eq) goto loc_82771344;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82771518
	if (!ctx.cr6.eq) goto loc_82771518;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8277133c
	if (!ctx.cr6.eq) goto loc_8277133C;
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8277133c
	if (ctx.cr6.eq) goto loc_8277133C;
	// lwz r10,10876(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10876);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8277133c
	if (ctx.cr6.eq) goto loc_8277133C;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// addi r3,r25,628
	ctx.r3.s64 = ctx.r25.s64 + 628;
	// bl 0x82a45878
	ctx.lr = 0x82771334;
	sub_82A45878(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,3748(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3748, ctx.r11.u32);
loc_8277133C:
	// stw r23,3816(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3816, ctx.r23.u32);
	// b 0x82771518
	goto loc_82771518;
loc_82771344:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82771398
	if (!ctx.cr6.eq) goto loc_82771398;
	// stw r14,484(r25)
	PPC_STORE_U32(ctx.r25.u32 + 484, ctx.r14.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82771818
	ctx.lr = 0x8277135C;
	sub_82771818(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r25,536
	ctx.r4.s64 = ctx.r25.s64 + 536;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ced70
	ctx.lr = 0x8277136C;
	sub_828CED70(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828cec70
	ctx.lr = 0x82771394;
	sub_828CEC70(ctx, base);
	// b 0x827713b0
	goto loc_827713B0;
loc_82771398:
	// stw r15,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r15.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r16,484(r25)
	PPC_STORE_U32(ctx.r25.u32 + 484, ctx.r16.u32);
	// addi r4,r25,536
	ctx.r4.s64 = ctx.r25.s64 + 536;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x828ced70
	ctx.lr = 0x827713B0;
	sub_828CED70(ctx, base);
loc_827713B0:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827713e0
	if (ctx.cr6.eq) goto loc_827713E0;
	// lwz r10,10876(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10876);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827713e8
	if (!ctx.cr6.eq) goto loc_827713E8;
loc_827713E0:
	// stw r16,484(r25)
	PPC_STORE_U32(ctx.r25.u32 + 484, ctx.r16.u32);
	// stw r18,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r18.u32);
loc_827713E8:
	// stw r23,3812(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3812, ctx.r23.u32);
	// b 0x82771518
	goto loc_82771518;
loc_827713F0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82771450
	if (!ctx.cr6.eq) goto loc_82771450;
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r5,3784(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3784);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,432(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// stw r11,480(r25)
	PPC_STORE_U32(ctx.r25.u32 + 480, ctx.r11.u32);
	// bl 0x82771ac0
	ctx.lr = 0x82771414;
	sub_82771AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82771424
	if (!ctx.cr6.eq) goto loc_82771424;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82771818
	ctx.lr = 0x82771424;
	sub_82771818(ctx, base);
loc_82771424:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,548(r25)
	PPC_STORE_U32(ctx.r25.u32 + 548, ctx.r23.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r17,8
	ctx.r3.s64 = ctx.r17.s64 + 8;
	// bl 0x82a46740
	ctx.lr = 0x8277144C;
	sub_82A46740(ctx, base);
	// b 0x82771458
	goto loc_82771458;
loc_82771450:
	// stw r15,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r15.u32);
	// stw r19,480(r25)
	PPC_STORE_U32(ctx.r25.u32 + 480, ctx.r19.u32);
loc_82771458:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82771488
	if (ctx.cr6.eq) goto loc_82771488;
	// lwz r10,10876(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10876);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771490
	if (!ctx.cr6.eq) goto loc_82771490;
loc_82771488:
	// stw r19,480(r25)
	PPC_STORE_U32(ctx.r25.u32 + 480, ctx.r19.u32);
	// stw r18,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r18.u32);
loc_82771490:
	// stw r23,3804(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3804, ctx.r23.u32);
	// b 0x82771518
	goto loc_82771518;
loc_82771498:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827714bc
	if (!ctx.cr6.eq) goto loc_827714BC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,404(r25)
	PPC_STORE_U32(ctx.r25.u32 + 404, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,408(r25)
	PPC_STORE_U32(ctx.r25.u32 + 408, ctx.r11.u32);
	// stw r14,476(r25)
	PPC_STORE_U32(ctx.r25.u32 + 476, ctx.r14.u32);
	// b 0x827714dc
	goto loc_827714DC;
loc_827714BC:
	// stw r19,476(r25)
	PPC_STORE_U32(ctx.r25.u32 + 476, ctx.r19.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x827714d8
	if (!ctx.cr6.eq) goto loc_827714D8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r11.u32);
	// b 0x827714dc
	goto loc_827714DC;
loc_827714D8:
	// stw r16,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r16.u32);
loc_827714DC:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8277150c
	if (ctx.cr6.eq) goto loc_8277150C;
	// lwz r10,10876(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10876);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771514
	if (!ctx.cr6.eq) goto loc_82771514;
loc_8277150C:
	// stw r19,476(r25)
	PPC_STORE_U32(ctx.r25.u32 + 476, ctx.r19.u32);
	// stw r18,472(r25)
	PPC_STORE_U32(ctx.r25.u32 + 472, ctx.r18.u32);
loc_82771514:
	// stw r23,3808(r25)
	PPC_STORE_U32(ctx.r25.u32 + 3808, ctx.r23.u32);
loc_82771518:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8277115c
	goto loc_8277115C;
loc_82771534:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771540"))) PPC_WEAK_FUNC(sub_82771540);
PPC_FUNC_IMPL(__imp__sub_82771540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,3800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3800);
	// bl 0x8312eb1c
	ctx.lr = 0x8277156C;
	sub_8312EB1C(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827716b0
	if (ctx.cr0.eq) goto loc_827716B0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x827716b0
	if (ctx.cr6.eq) goto loc_827716B0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82771604
	if (ctx.cr6.eq) goto loc_82771604;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x827715b8
	if (ctx.cr6.eq) goto loc_827715B8;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x827716b0
	if (!ctx.cr6.eq) goto loc_827716B0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827715B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827716b0
	goto loc_827716B0;
loc_827715B8:
	// lwz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827716b0
	if (ctx.cr6.eq) goto loc_827716B0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,396(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827716b0
	if (ctx.cr6.eq) goto loc_827716B0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827716b0
	if (!ctx.cr6.eq) goto loc_827716B0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// bl 0x828fc420
	ctx.lr = 0x82771600;
	sub_828FC420(ctx, base);
	// b 0x827716b0
	goto loc_827716B0;
loc_82771604:
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82771638
	if (!ctx.cr6.eq) goto loc_82771638;
	// lwz r3,3784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82771638
	if (ctx.cr6.eq) goto loc_82771638;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a6f440
	ctx.lr = 0x8277162C;
	sub_82A6F440(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827716b0
	if (ctx.cr0.eq) goto loc_827716B0;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_82771638:
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x827716b0
	if (ctx.cr6.eq) goto loc_827716B0;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827716b0
	if (!ctx.cr6.eq) goto loc_827716B0;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82771670
	if (ctx.cr6.eq) goto loc_82771670;
	// lwz r11,3796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827716b0
	if (!ctx.cr6.eq) goto loc_827716B0;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x827716a4
	goto loc_827716A4;
loc_82771670:
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82771684
	if (!ctx.cr6.eq) goto loc_82771684;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x827716a4
	goto loc_827716A4;
loc_82771684:
	// lwz r10,3796(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827716b0
	if (!ctx.cr6.eq) goto loc_827716B0;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x827716a4
	if (!ctx.cr6.lt) goto loc_827716A4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_827716A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c1588
	ctx.lr = 0x827716B0;
	sub_824C1588(ctx, base);
loc_827716B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827716C8"))) PPC_WEAK_FUNC(sub_827716C8);
PPC_FUNC_IMPL(__imp__sub_827716C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827716D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// beq cr6,0x82771720
	if (ctx.cr6.eq) goto loc_82771720;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82771720
	if (ctx.cr6.eq) goto loc_82771720;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,13
	ctx.r11.s64 = 851968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47021
	ctx.r11.u64 = ctx.r11.u64 | 47021;
	// stw r9,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r9.u32);
	// stw r11,16276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16276, ctx.r11.u32);
	// bl 0x82771818
	ctx.lr = 0x82771714;
	sub_82771818(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828ceeb0
	ctx.lr = 0x8277171C;
	sub_828CEEB0(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
loc_82771720:
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82771740
	if (ctx.cr6.eq) goto loc_82771740;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8277174c
	if (ctx.cr6.eq) goto loc_8277174C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828cec70
	ctx.lr = 0x82771740;
	sub_828CEC70(ctx, base);
loc_82771740:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8277174c
	if (ctx.cr6.eq) goto loc_8277174C;
	// bl 0x82775278
	ctx.lr = 0x8277174C;
	sub_82775278(ctx, base);
loc_8277174C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771758"))) PPC_WEAK_FUNC(sub_82771758);
PPC_FUNC_IMPL(__imp__sub_82771758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82771760;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,3796(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771804
	if (!ctx.cr6.eq) goto loc_82771804;
	// addi r29,r31,3756
	ctx.r29.s64 = ctx.r31.s64 + 3756;
	// stw r30,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82771794;
	sub_82A4EFB0(ctx, base);
	// stw r30,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r30.u32);
	// addi r7,r31,3784
	ctx.r7.s64 = ctx.r31.s64 + 3784;
	// bl 0x827719d0
	ctx.lr = 0x827717A0;
	sub_827719D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82771808
	if (ctx.cr6.eq) goto loc_82771808;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// subfic r10,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// rlwinm r5,r10,0,22,22
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82a46070
	ctx.lr = 0x827717D0;
	sub_82A46070(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x827717e4
	if (!ctx.cr6.eq) goto loc_827717E4;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r30.u32);
	// b 0x82771808
	goto loc_82771808;
loc_827717E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,3792(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3792);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82771808
	goto loc_82771808;
loc_82771804:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82771808:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771818"))) PPC_WEAK_FUNC(sub_82771818);
PPC_FUNC_IMPL(__imp__sub_82771818) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82771820;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,3816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827718d4
	if (!ctx.cr6.eq) goto loc_827718D4;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r31,628
	ctx.r28.s64 = ctx.r31.s64 + 628;
	// stw r27,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r27.u32);
	// li r5,3080
	ctx.r5.s64 = 3080;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a455d0
	ctx.lr = 0x82771850;
	sub_82A455D0(ctx, base);
	// bl 0x82775278
	ctx.lr = 0x82771854;
	sub_82775278(ctx, base);
	// bl 0x827719d0
	ctx.lr = 0x82771858;
	sub_827719D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827718d4
	if (ctx.cr6.eq) goto loc_827718D4;
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827718d4
	if (ctx.cr6.eq) goto loc_827718D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r30,3748(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3748);
	// li r3,3596
	ctx.r3.s64 = 3596;
	// lwz r29,3784(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// stw r11,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r11.u32);
	// bl 0x82333900
	ctx.lr = 0x82771884;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827718c0
	if (ctx.cr0.eq) goto loc_827718C0;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,18336
	ctx.r7.s64 = ctx.r11.s64 + 18336;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82774440
	ctx.lr = 0x827718B8;
	sub_82774440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827718c4
	goto loc_827718C4;
loc_827718C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_827718C4:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,10908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10908);
	// bl 0x8281abd8
	ctx.lr = 0x827718D4;
	sub_8281ABD8(ctx, base);
loc_827718D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827718E0"))) PPC_WEAK_FUNC(sub_827718E0);
PPC_FUNC_IMPL(__imp__sub_827718E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277190C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82771938
	if (ctx.cr0.eq) goto loc_82771938;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771938
	if (!ctx.cr6.eq) goto loc_82771938;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771938
	if (!ctx.cr6.eq) goto loc_82771938;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824bfc90
	ctx.lr = 0x82771938;
	sub_824BFC90(ctx, base);
loc_82771938:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771950"))) PPC_WEAK_FUNC(sub_82771950);
PPC_FUNC_IMPL(__imp__sub_82771950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82771958;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827719b8
	if (ctx.cr0.eq) goto loc_827719B8;
	// cmplwi cr6,r29,42
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 42, ctx.xer);
	// bne cr6,0x827719a8
	if (!ctx.cr6.eq) goto loc_827719A8;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r5,3784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771ac0
	ctx.lr = 0x82771998;
	sub_82771AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x827719a8
	if (!ctx.cr6.eq) goto loc_827719A8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x827719b8
	goto loc_827719B8;
loc_827719A8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c0180
	ctx.lr = 0x827719B4;
	sub_824C0180(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_827719B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827719C8"))) PPC_WEAK_FUNC(sub_827719C8);
PPC_FUNC_IMPL(__imp__sub_827719C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828ce580
	sub_828CE580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827719D0"))) PPC_WEAK_FUNC(sub_827719D0);
PPC_FUNC_IMPL(__imp__sub_827719D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82771a0c
	if (ctx.cr6.eq) goto loc_82771A0C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r11,10876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10876);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82771A0C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771A18"))) PPC_WEAK_FUNC(sub_82771A18);
PPC_FUNC_IMPL(__imp__sub_82771A18) {
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
	// bl 0x828cee38
	ctx.lr = 0x82771A30;
	sub_828CEE38(ctx, base);
	// bl 0x827719d0
	ctx.lr = 0x82771A34;
	sub_827719D0(ctx, base);
	// stw r3,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82771A50"))) PPC_WEAK_FUNC(sub_82771A50);
PPC_FUNC_IMPL(__imp__sub_82771A50) {
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
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771a7c
	if (!ctx.cr6.eq) goto loc_82771A7C;
	// bl 0x827719d0
	ctx.lr = 0x82771A70;
	sub_827719D0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82771a7c
	if (ctx.cr6.eq) goto loc_82771A7C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82771A7C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771A90"))) PPC_WEAK_FUNC(sub_82771A90);
PPC_FUNC_IMPL(__imp__sub_82771A90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3788, ctx.r4.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r5,3792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3792, ctx.r5.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,13
	ctx.r11.s64 = 851968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47021
	ctx.r11.u64 = ctx.r11.u64 | 47021;
	// stw r9,560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 560, ctx.r9.u32);
	// stw r11,16276(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16276, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771AC0"))) PPC_WEAK_FUNC(sub_82771AC0);
PPC_FUNC_IMPL(__imp__sub_82771AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82771AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// bne cr6,0x82771b18
	if (!ctx.cr6.eq) goto loc_82771B18;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82409058
	ctx.lr = 0x82771AF4;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,21232
	ctx.r4.s64 = ctx.r10.s64 + 21232;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4cf58
	ctx.lr = 0x82771B0C;
	sub_82A4CF58(ctx, base);
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// b 0x82771b44
	goto loc_82771B44;
loc_82771B18:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82409058
	ctx.lr = 0x82771B20;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r10,21248
	ctx.r4.s64 = ctx.r10.s64 + 21248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4cf58
	ctx.lr = 0x82771B3C;
	sub_82A4CF58(ctx, base);
	// lwz r3,484(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
loc_82771B44:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82771b58
	if (ctx.cr6.eq) goto loc_82771B58;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82771b58
	if (ctx.cr6.eq) goto loc_82771B58;
	// bl 0x82332db8
	ctx.lr = 0x82771B58;
	sub_82332DB8(ctx, base);
loc_82771B58:
	// lwz r6,3748(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3748);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82771bcc
	if (ctx.cr6.eq) goto loc_82771BCC;
	// addi r8,r30,628
	ctx.r8.s64 = ctx.r30.s64 + 628;
loc_82771B6C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r8,264
	ctx.r11.s64 = ctx.r8.s64 + 264;
loc_82771B74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// beq 0x82771b98
	if (ctx.cr0.eq) goto loc_82771B98;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82771b74
	if (ctx.cr6.eq) goto loc_82771B74;
loc_82771B98:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82771bb4
	if (!ctx.cr0.eq) goto loc_82771BB4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82771bc8
	if (ctx.cr6.eq) goto loc_82771BC8;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82771bc8
	if (ctx.cr6.eq) goto loc_82771BC8;
loc_82771BB4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,308
	ctx.r8.s64 = ctx.r8.s64 + 308;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82771b6c
	if (ctx.cr6.lt) goto loc_82771B6C;
	// b 0x82771bcc
	goto loc_82771BCC;
loc_82771BC8:
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
loc_82771BCC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82771BD8"))) PPC_WEAK_FUNC(sub_82771BD8);
PPC_FUNC_IMPL(__imp__sub_82771BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82771c24
	if (ctx.cr0.eq) goto loc_82771C24;
	// lwz r11,484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82771c24
	if (!ctx.cr6.eq) goto loc_82771C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824c1490
	ctx.lr = 0x82771C24;
	sub_824C1490(ctx, base);
loc_82771C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771C40"))) PPC_WEAK_FUNC(sub_82771C40);
PPC_FUNC_IMPL(__imp__sub_82771C40) {
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
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// bne cr6,0x82771c70
	if (!ctx.cr6.eq) goto loc_82771C70;
	// lwz r4,548(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82771c90
	if (ctx.cr6.eq) goto loc_82771C90;
loc_82771C70:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82771c90
	if (!ctx.cr0.eq) goto loc_82771C90;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82771C90:
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

__attribute__((alias("__imp__sub_82771CA8"))) PPC_WEAK_FUNC(sub_82771CA8);
PPC_FUNC_IMPL(__imp__sub_82771CA8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,3784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82771d18
	if (ctx.cr6.eq) goto loc_82771D18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a6f448
	ctx.lr = 0x82771CD8;
	sub_82A6F448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82771d18
	if (!ctx.cr0.eq) goto loc_82771D18;
	// lwz r5,3784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r31,10
	ctx.r31.s64 = 655360;
	// li r4,42
	ctx.r4.s64 = 42;
	// ori r31,r31,40960
	ctx.r31.u64 = ctx.r31.u64 | 40960;
	// bl 0x82771ac0
	ctx.lr = 0x82771CF8;
	sub_82771AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82771d08
	if (ctx.cr6.eq) goto loc_82771D08;
	// lis r31,5
	ctx.r31.s64 = 327680;
	// ori r31,r31,57344
	ctx.r31.u64 = ctx.r31.u64 | 57344;
loc_82771D08:
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r31
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r31.u64, ctx.xer);
	// bge cr6,0x82771d18
	if (!ctx.cr6.lt) goto loc_82771D18;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82771D18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82771D38"))) PPC_WEAK_FUNC(sub_82771D38);
PPC_FUNC_IMPL(__imp__sub_82771D38) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r3,3784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82771dcc
	if (ctx.cr6.eq) goto loc_82771DCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a6f448
	ctx.lr = 0x82771D68;
	sub_82A6F448(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82771dcc
	if (!ctx.cr0.eq) goto loc_82771DCC;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,57344
	ctx.r11.u64 = ctx.r11.u64 | 57344;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bge cr6,0x82771dcc
	if (!ctx.cr6.lt) goto loc_82771DCC;
	// li r4,42
	ctx.r4.s64 = 42;
	// lwz r5,3784(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82771ac0
	ctx.lr = 0x82771D94;
	sub_82771AC0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82771dcc
	if (!ctx.cr6.eq) goto loc_82771DCC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// li r4,1019
	ctx.r4.s64 = 1019;
	// lfs f1,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771DCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82771DCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82771DE8"))) PPC_WEAK_FUNC(sub_82771DE8);
PPC_FUNC_IMPL(__imp__sub_82771DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828cdf40
	ctx.lr = 0x82771E08;
	sub_828CDF40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82771e18
	if (ctx.cr0.eq) goto loc_82771E18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82771E18;
	sub_82332DB8(ctx, base);
loc_82771E18:
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

__attribute__((alias("__imp__sub_82771E38"))) PPC_WEAK_FUNC(sub_82771E38);
PPC_FUNC_IMPL(__imp__sub_82771E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82771e98
	ctx.lr = 0x82771E58;
	sub_82771E98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82771e68
	if (!ctx.cr6.eq) goto loc_82771E68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82771e80
	goto loc_82771E80;
loc_82771E68:
	// bl 0x82772058
	ctx.lr = 0x82771E6C;
	sub_82772058(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82771e80
	if (ctx.cr6.eq) goto loc_82771E80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82771E80;
	sub_82338858(ctx, base);
loc_82771E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771E98"))) PPC_WEAK_FUNC(sub_82771E98);
PPC_FUNC_IMPL(__imp__sub_82771E98) {
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
	// addi r31,r11,14028
	ctx.r31.s64 = ctx.r11.s64 + 14028;
	// lwz r11,14016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14016);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82771ee0
	if (!ctx.cr0.eq) goto loc_82771EE0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22048
	ctx.r9.s64 = ctx.r9.s64 + 22048;
	// stw r11,14016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14016, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-28008
	ctx.r3.s64 = ctx.r11.s64 + -28008;
	// bl 0x82a4c758
	ctx.lr = 0x82771EE0;
	sub_82A4C758(ctx, base);
loc_82771EE0:
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

__attribute__((alias("__imp__sub_82771EF8"))) PPC_WEAK_FUNC(sub_82771EF8);
PPC_FUNC_IMPL(__imp__sub_82771EF8) {
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
	// li r3,3824
	ctx.r3.s64 = 3824;
	// bl 0x82833108
	ctx.lr = 0x82771F10;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82771f40
	if (ctx.cr0.eq) goto loc_82771F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cde28
	ctx.lr = 0x82771F20;
	sub_828CDE28(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,21680
	ctx.r11.s64 = ctx.r11.s64 + 21680;
	// addi r10,r10,21996
	ctx.r10.s64 = ctx.r10.s64 + 21996;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82771f44
	goto loc_82771F44;
loc_82771F40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82771F44:
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

__attribute__((alias("__imp__sub_82771F58"))) PPC_WEAK_FUNC(sub_82771F58);
PPC_FUNC_IMPL(__imp__sub_82771F58) {
	PPC_FUNC_PROLOGUE();
	// li r3,3824
	ctx.r3.s64 = 3824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82771F60"))) PPC_WEAK_FUNC(sub_82771F60);
PPC_FUNC_IMPL(__imp__sub_82771F60) {
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
	// lwz r11,23444(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23444);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82771fa0
	if (!ctx.cr0.eq) goto loc_82771FA0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23444, ctx.r11.u32);
	// addi r3,r9,21276
	ctx.r3.s64 = ctx.r9.s64 + 21276;
	// bl 0x82816528
	ctx.lr = 0x82771F98;
	sub_82816528(ctx, base);
	// stw r3,23440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23440, ctx.r3.u32);
	// b 0x82771fa4
	goto loc_82771FA4;
loc_82771FA0:
	// lwz r3,23440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23440);
loc_82771FA4:
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

__attribute__((alias("__imp__sub_82771FB8"))) PPC_WEAK_FUNC(sub_82771FB8);
PPC_FUNC_IMPL(__imp__sub_82771FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82771e98
	ctx.lr = 0x82771FD8;
	sub_82771E98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82771FEC;
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

__attribute__((alias("__imp__sub_82772008"))) PPC_WEAK_FUNC(sub_82772008);
PPC_FUNC_IMPL(__imp__sub_82772008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772058
	ctx.lr = 0x82772028;
	sub_82772058(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8277203c
	if (ctx.cr6.eq) goto loc_8277203C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x8277203C;
	sub_82338858(ctx, base);
loc_8277203C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772058"))) PPC_WEAK_FUNC(sub_82772058);
PPC_FUNC_IMPL(__imp__sub_82772058) {
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
	// addi r31,r11,14024
	ctx.r31.s64 = ctx.r11.s64 + 14024;
	// lwz r11,14020(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14020);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827720a0
	if (!ctx.cr0.eq) goto loc_827720A0;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,21656
	ctx.r9.s64 = ctx.r9.s64 + 21656;
	// stw r11,14020(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14020, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27984
	ctx.r3.s64 = ctx.r11.s64 + -27984;
	// bl 0x82a4c758
	ctx.lr = 0x827720A0;
	sub_82A4C758(ctx, base);
loc_827720A0:
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

__attribute__((alias("__imp__sub_827720B8"))) PPC_WEAK_FUNC(sub_827720B8);
PPC_FUNC_IMPL(__imp__sub_827720B8) {
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
	// li r3,624
	ctx.r3.s64 = 624;
	// bl 0x82833108
	ctx.lr = 0x827720CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827720dc
	if (ctx.cr0.eq) goto loc_827720DC;
	// bl 0x828cde28
	ctx.lr = 0x827720D8;
	sub_828CDE28(ctx, base);
	// b 0x827720e0
	goto loc_827720E0;
loc_827720DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827720E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827720F0"))) PPC_WEAK_FUNC(sub_827720F0);
PPC_FUNC_IMPL(__imp__sub_827720F0) {
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
	// lwz r11,23436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23436);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82772130
	if (!ctx.cr0.eq) goto loc_82772130;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23436, ctx.r11.u32);
	// addi r3,r9,21264
	ctx.r3.s64 = ctx.r9.s64 + 21264;
	// bl 0x82816528
	ctx.lr = 0x82772128;
	sub_82816528(ctx, base);
	// stw r3,23432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23432, ctx.r3.u32);
	// b 0x82772134
	goto loc_82772134;
loc_82772130:
	// lwz r3,23432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23432);
loc_82772134:
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

__attribute__((alias("__imp__sub_82772148"))) PPC_WEAK_FUNC(sub_82772148);
PPC_FUNC_IMPL(__imp__sub_82772148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772058
	ctx.lr = 0x82772168;
	sub_82772058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277217C;
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

__attribute__((alias("__imp__sub_82772198"))) PPC_WEAK_FUNC(sub_82772198);
PPC_FUNC_IMPL(__imp__sub_82772198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827721d0
	if (ctx.cr6.eq) goto loc_827721D0;
	// bl 0x82771e98
	ctx.lr = 0x827721C0;
	sub_82771E98(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827721d0
	if (!ctx.cr6.eq) goto loc_827721D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827721dc
	goto loc_827721DC;
loc_827721D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827721f8
	ctx.lr = 0x827721DC;
	sub_827721F8(ctx, base);
loc_827721DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827721F8"))) PPC_WEAK_FUNC(sub_827721F8);
PPC_FUNC_IMPL(__imp__sub_827721F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82772230
	if (ctx.cr6.eq) goto loc_82772230;
	// bl 0x82772058
	ctx.lr = 0x82772220;
	sub_82772058(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82772230
	if (!ctx.cr6.eq) goto loc_82772230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277223c
	goto loc_8277223C;
loc_82772230:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x8277223C;
	sub_82338A88(ctx, base);
loc_8277223C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772258"))) PPC_WEAK_FUNC(sub_82772258);
PPC_FUNC_IMPL(__imp__sub_82772258) {
	PPC_FUNC_PROLOGUE();
	// b 0x82771e98
	sub_82771E98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772260"))) PPC_WEAK_FUNC(sub_82772260);
PPC_FUNC_IMPL(__imp__sub_82772260) {
	PPC_FUNC_PROLOGUE();
	// b 0x82772058
	sub_82772058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772268"))) PPC_WEAK_FUNC(sub_82772268);
PPC_FUNC_IMPL(__imp__sub_82772268) {
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
	// li r3,3824
	ctx.r3.s64 = 3824;
	// bl 0x82833108
	ctx.lr = 0x82772284;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82772298
	if (ctx.cr0.eq) goto loc_82772298;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827722b0
	ctx.lr = 0x82772294;
	sub_827722B0(ctx, base);
	// b 0x8277229c
	goto loc_8277229C;
loc_82772298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277229C:
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

__attribute__((alias("__imp__sub_827722B0"))) PPC_WEAK_FUNC(sub_827722B0);
PPC_FUNC_IMPL(__imp__sub_827722B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827723a0
	ctx.lr = 0x827722D0;
	sub_827723A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,21680
	ctx.r11.s64 = ctx.r11.s64 + 21680;
	// addi r10,r10,21996
	ctx.r10.s64 = ctx.r10.s64 + 21996;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,628
	ctx.r3.s64 = ctx.r31.s64 + 628;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,628
	ctx.r4.s64 = ctx.r30.s64 + 628;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// stw r11,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82772300;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,3708
	ctx.r3.s64 = ctx.r31.s64 + 3708;
	// addi r4,r30,3708
	ctx.r4.s64 = ctx.r30.s64 + 3708;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82a4ea80
	ctx.lr = 0x82772310;
	sub_82A4EA80(ctx, base);
	// lwz r11,3748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3748);
	// addi r3,r31,3756
	ctx.r3.s64 = ctx.r31.s64 + 3756;
	// addi r4,r30,3756
	ctx.r4.s64 = ctx.r30.s64 + 3756;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,3748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3748, ctx.r11.u32);
	// lwz r11,3752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3752);
	// stw r11,3752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3752, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82772330;
	sub_82A4EA80(ctx, base);
	// lwz r11,3784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3784, ctx.r11.u32);
	// lwz r11,3788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3788);
	// stw r11,3788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3788, ctx.r11.u32);
	// lwz r11,3792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3792);
	// stw r11,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r11.u32);
	// lwz r11,3796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3796);
	// stw r11,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r11.u32);
	// lwz r11,3800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3800);
	// stw r11,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r11.u32);
	// lwz r11,3804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3804);
	// stw r11,3804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3804, ctx.r11.u32);
	// lwz r11,3808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3808);
	// stw r11,3808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3808, ctx.r11.u32);
	// lwz r11,3812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3812);
	// stw r11,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r11.u32);
	// lwz r11,3816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3816);
	// stw r11,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r11.u32);
	// lwz r11,3820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3820);
	// stw r11,3820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3820, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827723A0"))) PPC_WEAK_FUNC(sub_827723A0);
PPC_FUNC_IMPL(__imp__sub_827723A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823393a0
	ctx.lr = 0x827723C0;
	sub_823393A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,21288
	ctx.r11.s64 = ctx.r11.s64 + 21288;
	// addi r10,r10,21604
	ctx.r10.s64 = ctx.r10.s64 + 21604;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,488
	ctx.r4.s64 = ctx.r30.s64 + 488;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// lwz r11,412(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lwz r11,420(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lwz r11,436(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,464(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 464);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lwz r11,472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 472);
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
	// bl 0x82873b58
	ctx.lr = 0x8277249C;
	sub_82873B58(ctx, base);
	// addi r4,r30,512
	ctx.r4.s64 = ctx.r30.s64 + 512;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x82873b58
	ctx.lr = 0x827724A8;
	sub_82873B58(ctx, base);
	// lwz r11,536(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// addi r4,r30,564
	ctx.r4.s64 = ctx.r30.s64 + 564;
	// addi r3,r31,564
	ctx.r3.s64 = ctx.r31.s64 + 564;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// lwz r11,540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// lwz r11,548(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 548);
	// stw r11,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// stw r11,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// lwz r11,560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// stw r11,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x827724F0;
	sub_82A4EA80(ctx, base);
	// addi r3,r31,596
	ctx.r3.s64 = ctx.r31.s64 + 596;
	// addi r4,r30,596
	ctx.r4.s64 = ctx.r30.s64 + 596;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x82772500;
	sub_82A4EA80(ctx, base);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772528"))) PPC_WEAK_FUNC(sub_82772528);
PPC_FUNC_IMPL(__imp__sub_82772528) {
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
	// li r3,624
	ctx.r3.s64 = 624;
	// bl 0x82833108
	ctx.lr = 0x82772544;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82772558
	if (ctx.cr0.eq) goto loc_82772558;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827723a0
	ctx.lr = 0x82772554;
	sub_827723A0(ctx, base);
	// b 0x8277255c
	goto loc_8277255C;
loc_82772558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277255C:
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

__attribute__((alias("__imp__sub_82772570"))) PPC_WEAK_FUNC(sub_82772570);
PPC_FUNC_IMPL(__imp__sub_82772570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,21264
	ctx.r3.s64 = ctx.r11.s64 + 21264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772580"))) PPC_WEAK_FUNC(sub_82772580);
PPC_FUNC_IMPL(__imp__sub_82772580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82772008
	sub_82772008(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772588"))) PPC_WEAK_FUNC(sub_82772588);
PPC_FUNC_IMPL(__imp__sub_82772588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,21276
	ctx.r3.s64 = ctx.r11.s64 + 21276;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772598"))) PPC_WEAK_FUNC(sub_82772598);
PPC_FUNC_IMPL(__imp__sub_82772598) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3796);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827725A0"))) PPC_WEAK_FUNC(sub_827725A0);
PPC_FUNC_IMPL(__imp__sub_827725A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3820(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827725A8"))) PPC_WEAK_FUNC(sub_827725A8);
PPC_FUNC_IMPL(__imp__sub_827725A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82771de8
	sub_82771DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827725B0"))) PPC_WEAK_FUNC(sub_827725B0);
PPC_FUNC_IMPL(__imp__sub_827725B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82771e38
	sub_82771E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827725B8"))) PPC_WEAK_FUNC(sub_827725B8);
PPC_FUNC_IMPL(__imp__sub_827725B8) {
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
	// bl 0x829bc368
	ctx.lr = 0x827725D4;
	sub_829BC368(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r7,r11,22472
	ctx.r7.s64 = ctx.r11.s64 + 22472;
	// addi r9,r9,22764
	ctx.r9.s64 = ctx.r9.s64 + 22764;
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r7,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r7.u32);
	// stw r10,5812(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5812, ctx.r10.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82772630;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,-472
	ctx.r11.s64 = ctx.r11.s64 + -472;
	// li r9,32
	ctx.r9.s64 = 32;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// addi r30,r11,-12168
	ctx.r30.s64 = ctx.r11.s64 + -12168;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x8277265C;
	sub_8312E74C(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82772680
	if (ctx.cr6.eq) goto loc_82772680;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277267C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827726c4
	goto loc_827726C4;
loc_82772680:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r10,-2476
	ctx.r10.s64 = ctx.r10.s64 + -2476;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// b 0x827726a8
	goto loc_827726A8;
loc_82772698:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827726b0
	if (!ctx.cr6.eq) goto loc_827726B0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_827726A8:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82772698
	if (ctx.cr6.lt) goto loc_82772698;
loc_827726B0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827726C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827726C4:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x827726CC;
	sub_8312E73C(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r5,r31,396
	ctx.r5.s64 = ctx.r31.s64 + 396;
	// li r3,63
	ctx.r3.s64 = 63;
	// lfs f1,18464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82d17998
	ctx.lr = 0x827726E0;
	sub_82D17998(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82772700"))) PPC_WEAK_FUNC(sub_82772700);
PPC_FUNC_IMPL(__imp__sub_82772700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82772708;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// lwz r11,432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8277284c
	if (!ctx.cr6.gt) goto loc_8277284C;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82772728:
	// lwz r11,428(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 428);
	// lwzx r30,r27,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lbz r11,142(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 142);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82772748
	if (ctx.cr0.eq) goto loc_82772748;
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772754
	if (!ctx.cr6.gt) goto loc_82772754;
loc_82772748:
	// lbz r11,143(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 143);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8277282c
	if (ctx.cr0.eq) goto loc_8277282C;
loc_82772754:
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82772808
	if (ctx.cr0.eq) goto loc_82772808;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x829fd920
	ctx.lr = 0x82772768;
	sub_829FD920(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x829fd598
	ctx.lr = 0x82772770;
	sub_829FD598(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827727a4
	if (!ctx.cr6.gt) goto loc_827727A4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82772784:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82775cb8
	ctx.lr = 0x82772790;
	sub_82775CB8(ctx, base);
	// lwz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772784
	if (ctx.cr6.lt) goto loc_82772784;
loc_827727A4:
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r31,r30,108
	ctx.r31.s64 = ctx.r30.s64 + 108;
	// stw r28,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827727cc
	if (ctx.cr6.eq) goto loc_827727CC;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827727CC;
	sub_82332C38(ctx, base);
loc_827727CC:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x827727E4;
	sub_82332CA8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827727f4
	if (ctx.cr6.eq) goto loc_827727F4;
	// bl 0x82332db8
	ctx.lr = 0x827727F4;
	sub_82332DB8(ctx, base);
loc_827727F4:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// bl 0x82332db8
	ctx.lr = 0x82772808;
	sub_82332DB8(ctx, base);
loc_82772808:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r25,416
	ctx.r3.s64 = ctx.r25.s64 + 416;
	// bl 0x82332ca8
	ctx.lr = 0x82772820;
	sub_82332CA8(ctx, base);
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// b 0x82772838
	goto loc_82772838;
loc_8277282C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82775918
	ctx.lr = 0x82772838;
	sub_82775918(ctx, base);
loc_82772838:
	// lwz r11,432(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 432);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772728
	if (ctx.cr6.lt) goto loc_82772728;
loc_8277284C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772858"))) PPC_WEAK_FUNC(sub_82772858);
PPC_FUNC_IMPL(__imp__sub_82772858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82772860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,176
	ctx.r3.s64 = 176;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82333900
	ctx.lr = 0x82772878;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82772890
	if (ctx.cr0.eq) goto loc_82772890;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82775690
	ctx.lr = 0x82772888;
	sub_82775690(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82772894
	goto loc_82772894;
loc_82772890:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82772894:
	// stw r29,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r29.u32);
	// addi r3,r30,416
	ctx.r3.s64 = ctx.r30.s64 + 416;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x827728AC;
	sub_82332D50(ctx, base);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82a455d0
	ctx.lr = 0x827728C4;
	sub_82A455D0(ctx, base);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r31,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827728D8"))) PPC_WEAK_FUNC(sub_827728D8);
PPC_FUNC_IMPL(__imp__sub_827728D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827728F4:
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82772928
	if (!ctx.cr6.eq) goto loc_82772928;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,32(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r6,36(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,40(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// stb r8,145(r10)
	PPC_STORE_U8(ctx.r10.u32 + 145, ctx.r8.u8);
	// stw r7,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r7.u32);
	// stw r6,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r6.u32);
	// stw r5,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r5.u32);
loc_82772928:
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827728f4
	if (ctx.cr6.lt) goto loc_827728F4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772940"))) PPC_WEAK_FUNC(sub_82772940);
PPC_FUNC_IMPL(__imp__sub_82772940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82772948;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827729b8
	if (!ctx.cr6.gt) goto loc_827729B8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8277296C:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwzx r26,r11,r30
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,136(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// beq cr6,0x82772994
	if (ctx.cr6.eq) goto loc_82772994;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x829fd920
	ctx.lr = 0x82772988;
	sub_829FD920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,140(r26)
	PPC_STORE_U8(ctx.r26.u32 + 140, ctx.r11.u8);
	// b 0x827729a4
	goto loc_827729A4;
loc_82772994:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829fd8d8
	ctx.lr = 0x8277299C;
	sub_829FD8D8(ctx, base);
	// stb r28,140(r26)
	PPC_STORE_U8(ctx.r26.u32 + 140, ctx.r28.u8);
	// stb r28,172(r26)
	PPC_STORE_U8(ctx.r26.u32 + 172, ctx.r28.u8);
loc_827729A4:
	// lwz r11,432(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8277296c
	if (ctx.cr6.lt) goto loc_8277296C;
loc_827729B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827729C0"))) PPC_WEAK_FUNC(sub_827729C0);
PPC_FUNC_IMPL(__imp__sub_827729C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827729C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772a24
	if (!ctx.cr6.gt) goto loc_82772A24;
	// li r31,0
	ctx.r31.s64 = 0;
loc_827729E8:
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82772a10
	if (!ctx.cr6.eq) goto loc_82772A10;
	// rotlwi r27,r10,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 136);
	// bl 0x829fd920
	ctx.lr = 0x82772A08;
	sub_829FD920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,140(r27)
	PPC_STORE_U8(ctx.r27.u32 + 140, ctx.r11.u8);
loc_82772A10:
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827729e8
	if (ctx.cr6.lt) goto loc_827729E8;
loc_82772A24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772A30"))) PPC_WEAK_FUNC(sub_82772A30);
PPC_FUNC_IMPL(__imp__sub_82772A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82772A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772a98
	if (!ctx.cr6.gt) goto loc_82772A98;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82772A5C:
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82772a84
	if (!ctx.cr6.eq) goto loc_82772A84;
	// rotlwi r26,r10,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,136(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// bl 0x829fd8d8
	ctx.lr = 0x82772A7C;
	sub_829FD8D8(ctx, base);
	// stb r27,140(r26)
	PPC_STORE_U8(ctx.r26.u32 + 140, ctx.r27.u8);
	// stb r27,172(r26)
	PPC_STORE_U8(ctx.r26.u32 + 172, ctx.r27.u8);
loc_82772A84:
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772a5c
	if (ctx.cr6.lt) goto loc_82772A5C;
loc_82772A98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772AA0"))) PPC_WEAK_FUNC(sub_82772AA0);
PPC_FUNC_IMPL(__imp__sub_82772AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82772AA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772afc
	if (!ctx.cr6.gt) goto loc_82772AFC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82772ACC:
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82772ae8
	if (!ctx.cr6.eq) goto loc_82772AE8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82775b10
	ctx.lr = 0x82772AE8;
	sub_82775B10(ctx, base);
loc_82772AE8:
	// lwz r11,432(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772acc
	if (ctx.cr6.lt) goto loc_82772ACC;
loc_82772AFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772B08"))) PPC_WEAK_FUNC(sub_82772B08);
PPC_FUNC_IMPL(__imp__sub_82772B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82772B1C:
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82772b38
	if (!ctx.cr6.eq) goto loc_82772B38;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,143(r10)
	PPC_STORE_U8(ctx.r10.u32 + 143, ctx.r8.u8);
loc_82772B38:
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82772b1c
	if (ctx.cr6.lt) goto loc_82772B1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772B50"))) PPC_WEAK_FUNC(sub_82772B50);
PPC_FUNC_IMPL(__imp__sub_82772B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82772B58;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r25,r11,-12168
	ctx.r25.s64 = ctx.r11.s64 + -12168;
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772be0
	if (!ctx.cr6.gt) goto loc_82772BE0;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
loc_82772B88:
	// lwz r11,428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// lwzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lbz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82772bc8
	if (ctx.cr0.eq) goto loc_82772BC8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82772bc8
	if (ctx.cr6.eq) goto loc_82772BC8;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x8312e74c
	ctx.lr = 0x82772BB0;
	sub_8312E74C(ctx, base);
	// lwz r3,13584(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82772bc0
	if (ctx.cr6.eq) goto loc_82772BC0;
	// bl 0x82a04f90
	ctx.lr = 0x82772BC0;
	sub_82A04F90(ctx, base);
loc_82772BC0:
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82772BC8;
	sub_8312E73C(ctx, base);
loc_82772BC8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r24,172(r28)
	PPC_STORE_U8(ctx.r28.u32 + 172, ctx.r24.u8);
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772b88
	if (ctx.cr6.lt) goto loc_82772B88;
loc_82772BE0:
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82772ca4
	if (!ctx.cr6.gt) goto loc_82772CA4;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82772BF4:
	// lwz r11,428(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r27,136(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x8312e74c
	ctx.lr = 0x82772C08;
	sub_8312E74C(ctx, base);
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82772C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r25,4
	ctx.r3.s64 = ctx.r25.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82772C2C;
	sub_8312E73C(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82772c90
	if (ctx.cr6.lt) goto loc_82772C90;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// beq 0x82772c8c
	if (ctx.cr0.eq) goto loc_82772C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r11.u8);
	// b 0x82772c90
	goto loc_82772C90;
loc_82772C8C:
	// stb r24,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r24.u8);
loc_82772C90:
	// lwz r11,432(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82772bf4
	if (ctx.cr6.lt) goto loc_82772BF4;
loc_82772CA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772CB0"))) PPC_WEAK_FUNC(sub_82772CB0);
PPC_FUNC_IMPL(__imp__sub_82772CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,432(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82772cec
	if (!ctx.cr6.gt) goto loc_82772CEC;
	// lwz r10,428(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 428);
loc_82772CC4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82772cdc
	if (!ctx.cr6.eq) goto loc_82772CDC;
	// lbz r7,164(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 164);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x82772cf4
	if (ctx.cr6.eq) goto loc_82772CF4;
loc_82772CDC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82772cc4
	if (ctx.cr6.lt) goto loc_82772CC4;
loc_82772CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82772CF4:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772D30"))) PPC_WEAK_FUNC(sub_82772D30);
PPC_FUNC_IMPL(__imp__sub_82772D30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82772d38
	sub_82772D38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772D38"))) PPC_WEAK_FUNC(sub_82772D38);
PPC_FUNC_IMPL(__imp__sub_82772D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82772D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,22472
	ctx.r11.s64 = ctx.r11.s64 + 22472;
	// addi r10,r10,22764
	ctx.r10.s64 = ctx.r10.s64 + 22764;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x829fdbe8
	ctx.lr = 0x82772D68;
	sub_829FDBE8(ctx, base);
	// addi r30,r31,416
	ctx.r30.s64 = ctx.r31.s64 + 416;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82772D84;
	sub_82332CA8(ctx, base);
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82772d94
	if (ctx.cr6.eq) goto loc_82772D94;
	// bl 0x82332db8
	ctx.lr = 0x82772D94;
	sub_82332DB8(ctx, base);
loc_82772D94:
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,22104
	ctx.r10.s64 = ctx.r10.s64 + 22104;
	// addi r9,r9,22396
	ctx.r9.s64 = ctx.r9.s64 + 22396;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x829bcf90
	ctx.lr = 0x82772DC4;
	sub_829BCF90(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82772dd4
	if (ctx.cr0.eq) goto loc_82772DD4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82772DD4;
	sub_82332DB8(ctx, base);
loc_82772DD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772DE0"))) PPC_WEAK_FUNC(sub_82772DE0);
PPC_FUNC_IMPL(__imp__sub_82772DE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82772de8
	sub_82772DE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82772DE8"))) PPC_WEAK_FUNC(sub_82772DE8);
PPC_FUNC_IMPL(__imp__sub_82772DE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772e48
	ctx.lr = 0x82772E08;
	sub_82772E48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82772e18
	if (!ctx.cr6.eq) goto loc_82772E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82772e30
	goto loc_82772E30;
loc_82772E18:
	// bl 0x82772fe0
	ctx.lr = 0x82772E1C;
	sub_82772FE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82772e30
	if (ctx.cr6.eq) goto loc_82772E30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82772E30;
	sub_82338858(ctx, base);
loc_82772E30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772E48"))) PPC_WEAK_FUNC(sub_82772E48);
PPC_FUNC_IMPL(__imp__sub_82772E48) {
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
	// addi r31,r11,14044
	ctx.r31.s64 = ctx.r11.s64 + 14044;
	// lwz r11,14036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14036);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82772e90
	if (!ctx.cr0.eq) goto loc_82772E90;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22816
	ctx.r9.s64 = ctx.r9.s64 + 22816;
	// stw r11,14036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14036, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27960
	ctx.r3.s64 = ctx.r11.s64 + -27960;
	// bl 0x82a4c758
	ctx.lr = 0x82772E90;
	sub_82A4C758(ctx, base);
loc_82772E90:
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

__attribute__((alias("__imp__sub_82772EA8"))) PPC_WEAK_FUNC(sub_82772EA8);
PPC_FUNC_IMPL(__imp__sub_82772EA8) {
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
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x82833108
	ctx.lr = 0x82772EBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82772ecc
	if (ctx.cr0.eq) goto loc_82772ECC;
	// bl 0x827725b8
	ctx.lr = 0x82772EC8;
	sub_827725B8(ctx, base);
	// b 0x82772ed0
	goto loc_82772ED0;
loc_82772ECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82772ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772EE0"))) PPC_WEAK_FUNC(sub_82772EE0);
PPC_FUNC_IMPL(__imp__sub_82772EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,440
	ctx.r3.s64 = 440;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772EE8"))) PPC_WEAK_FUNC(sub_82772EE8);
PPC_FUNC_IMPL(__imp__sub_82772EE8) {
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
	// lwz r11,23428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23428);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82772f28
	if (!ctx.cr0.eq) goto loc_82772F28;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23428(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23428, ctx.r11.u32);
	// addi r3,r9,22084
	ctx.r3.s64 = ctx.r9.s64 + 22084;
	// bl 0x82816528
	ctx.lr = 0x82772F20;
	sub_82816528(ctx, base);
	// stw r3,23424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23424, ctx.r3.u32);
	// b 0x82772f2c
	goto loc_82772F2C;
loc_82772F28:
	// lwz r3,23424(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23424);
loc_82772F2C:
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

__attribute__((alias("__imp__sub_82772F40"))) PPC_WEAK_FUNC(sub_82772F40);
PPC_FUNC_IMPL(__imp__sub_82772F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772e48
	ctx.lr = 0x82772F60;
	sub_82772E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82772F74;
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

__attribute__((alias("__imp__sub_82772F90"))) PPC_WEAK_FUNC(sub_82772F90);
PPC_FUNC_IMPL(__imp__sub_82772F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772fe0
	ctx.lr = 0x82772FB0;
	sub_82772FE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82772fc4
	if (ctx.cr6.eq) goto loc_82772FC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82772FC4;
	sub_82338858(ctx, base);
loc_82772FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82772FE0"))) PPC_WEAK_FUNC(sub_82772FE0);
PPC_FUNC_IMPL(__imp__sub_82772FE0) {
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
	// addi r31,r11,14032
	ctx.r31.s64 = ctx.r11.s64 + 14032;
	// lwz r11,14040(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14040);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82773028
	if (!ctx.cr0.eq) goto loc_82773028;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,22448
	ctx.r9.s64 = ctx.r9.s64 + 22448;
	// stw r11,14040(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14040, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27936
	ctx.r3.s64 = ctx.r11.s64 + -27936;
	// bl 0x82a4c758
	ctx.lr = 0x82773028;
	sub_82A4C758(ctx, base);
loc_82773028:
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

__attribute__((alias("__imp__sub_82773040"))) PPC_WEAK_FUNC(sub_82773040);
PPC_FUNC_IMPL(__imp__sub_82773040) {
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
	// lwz r11,23420(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23420);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82773080
	if (!ctx.cr0.eq) goto loc_82773080;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23420, ctx.r11.u32);
	// addi r3,r9,22068
	ctx.r3.s64 = ctx.r9.s64 + 22068;
	// bl 0x82816528
	ctx.lr = 0x82773078;
	sub_82816528(ctx, base);
	// stw r3,23416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23416, ctx.r3.u32);
	// b 0x82773084
	goto loc_82773084;
loc_82773080:
	// lwz r3,23416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23416);
loc_82773084:
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

__attribute__((alias("__imp__sub_82773098"))) PPC_WEAK_FUNC(sub_82773098);
PPC_FUNC_IMPL(__imp__sub_82773098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82772fe0
	ctx.lr = 0x827730B8;
	sub_82772FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827730CC;
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

__attribute__((alias("__imp__sub_827730E8"))) PPC_WEAK_FUNC(sub_827730E8);
PPC_FUNC_IMPL(__imp__sub_827730E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82773120
	if (ctx.cr6.eq) goto loc_82773120;
	// bl 0x82772e48
	ctx.lr = 0x82773110;
	sub_82772E48(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82773120
	if (!ctx.cr6.eq) goto loc_82773120;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277312c
	goto loc_8277312C;
loc_82773120:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82773148
	ctx.lr = 0x8277312C;
	sub_82773148(ctx, base);
loc_8277312C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773148"))) PPC_WEAK_FUNC(sub_82773148);
PPC_FUNC_IMPL(__imp__sub_82773148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82773180
	if (ctx.cr6.eq) goto loc_82773180;
	// bl 0x82772fe0
	ctx.lr = 0x82773170;
	sub_82772FE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82773180
	if (!ctx.cr6.eq) goto loc_82773180;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277318c
	goto loc_8277318C;
loc_82773180:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x8277318C;
	sub_82338A88(ctx, base);
loc_8277318C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827731A8"))) PPC_WEAK_FUNC(sub_827731A8);
PPC_FUNC_IMPL(__imp__sub_827731A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82772e48
	sub_82772E48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827731B0"))) PPC_WEAK_FUNC(sub_827731B0);
PPC_FUNC_IMPL(__imp__sub_827731B0) {
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
	// li r3,440
	ctx.r3.s64 = 440;
	// bl 0x82833108
	ctx.lr = 0x827731CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827731e0
	if (ctx.cr0.eq) goto loc_827731E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x827731f8
	ctx.lr = 0x827731DC;
	sub_827731F8(ctx, base);
	// b 0x827731e4
	goto loc_827731E4;
loc_827731E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827731E4:
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

__attribute__((alias("__imp__sub_827731F8"))) PPC_WEAK_FUNC(sub_827731F8);
PPC_FUNC_IMPL(__imp__sub_827731F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82773200;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823393a0
	ctx.lr = 0x82773210;
	sub_823393A0(ctx, base);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r9,r10,22764
	ctx.r9.s64 = ctx.r10.s64 + 22764;
	// addi r11,r11,22472
	ctx.r11.s64 = ctx.r11.s64 + 22472;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// addi r10,r30,396
	ctx.r10.s64 = ctx.r30.s64 + 396;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r29,396
	ctx.r11.s64 = ctx.r29.s64 + 396;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82773238:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82773238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82773238;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,416
	ctx.r31.s64 = ctx.r30.s64 + 416;
	// addi r29,r29,416
	ctx.r29.s64 = ctx.r29.s64 + 416;
	// stw r11,424(r30)
	PPC_STORE_U32(ctx.r30.u32 + 424, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,428(r30)
	PPC_STORE_U32(ctx.r30.u32 + 428, ctx.r11.u32);
	// stw r11,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r11.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// stw r10,420(r30)
	PPC_STORE_U32(ctx.r30.u32 + 420, ctx.r10.u32);
	// stw r11,436(r30)
	PPC_STORE_U32(ctx.r30.u32 + 436, ctx.r11.u32);
	// stw r11,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r11.u32);
	// beq cr6,0x827732c4
	if (ctx.cr6.eq) goto loc_827732C4;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827732c4
	if (!ctx.cr6.gt) goto loc_827732C4;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x827732a8
	if (ctx.cr0.eq) goto loc_827732A8;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x827732A8;
	sub_82332C38(ctx, base);
loc_827732A8:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x827732BC;
	sub_82A45878(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_827732C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827732D0"))) PPC_WEAK_FUNC(sub_827732D0);
PPC_FUNC_IMPL(__imp__sub_827732D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,22104
	ctx.r11.s64 = ctx.r11.s64 + 22104;
	// addi r10,r10,22396
	ctx.r10.s64 = ctx.r10.s64 + 22396;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x829bcf90
	ctx.lr = 0x82773308;
	sub_829BCF90(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82773318
	if (ctx.cr0.eq) goto loc_82773318;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82773318;
	sub_82332DB8(ctx, base);
loc_82773318:
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

__attribute__((alias("__imp__sub_82773338"))) PPC_WEAK_FUNC(sub_82773338);
PPC_FUNC_IMPL(__imp__sub_82773338) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,22068
	ctx.r3.s64 = ctx.r11.s64 + 22068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773348"))) PPC_WEAK_FUNC(sub_82773348);
PPC_FUNC_IMPL(__imp__sub_82773348) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x827732d0
	sub_827732D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773350"))) PPC_WEAK_FUNC(sub_82773350);
PPC_FUNC_IMPL(__imp__sub_82773350) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82772f90
	sub_82772F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773358"))) PPC_WEAK_FUNC(sub_82773358);
PPC_FUNC_IMPL(__imp__sub_82773358) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,22084
	ctx.r3.s64 = ctx.r11.s64 + 22084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773368"))) PPC_WEAK_FUNC(sub_82773368);
PPC_FUNC_IMPL(__imp__sub_82773368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82773370;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,10876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10876);
loc_82773390:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827733b8
	if (ctx.cr6.eq) goto loc_827733B8;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827733c8
	if (!ctx.cr6.eq) goto loc_827733C8;
loc_827733B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82773390
	if (ctx.cr6.lt) goto loc_82773390;
	// b 0x827733d0
	goto loc_827733D0;
loc_827733C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_827733D0:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827733EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r9,10828(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10828);
	// lwz r10,10824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10824);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82773420
	if (!ctx.cr6.eq) goto loc_82773420;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82773420
	if (!ctx.cr6.eq) goto loc_82773420;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x827734f8
	if (ctx.cr6.eq) goto loc_827734F8;
loc_82773420:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82773440
	if (!ctx.cr6.eq) goto loc_82773440;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82773440
	if (!ctx.cr6.eq) goto loc_82773440;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773440
	if (!ctx.cr6.eq) goto loc_82773440;
loc_82773438:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x827734fc
	goto loc_827734FC;
loc_82773440:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8277347c
	if (!ctx.cr6.eq) goto loc_8277347C;
	// lwz r8,284(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82773464
	if (!ctx.cr6.eq) goto loc_82773464;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82773464
	if (!ctx.cr6.eq) goto loc_82773464;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82773700
	goto loc_82773700;
loc_82773464:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8277347c
	if (!ctx.cr6.eq) goto loc_8277347C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8277347c
	if (!ctx.cr6.eq) goto loc_8277347C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82773438
	if (ctx.cr6.eq) goto loc_82773438;
loc_8277347C:
	// lis r27,-31954
	ctx.r27.s64 = -2094137344;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x827734c0
	if (!ctx.cr6.eq) goto loc_827734C0;
	// lwz r8,9736(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9736);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x827734c0
	if (!ctx.cr6.eq) goto loc_827734C0;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x827734ac
	if (ctx.cr6.eq) goto loc_827734AC;
	// cmpwi cr6,r10,4098
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4098, ctx.xer);
	// beq cr6,0x827734ac
	if (ctx.cr6.eq) goto loc_827734AC;
	// cmpwi cr6,r10,4104
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4104, ctx.xer);
	// bne cr6,0x827734c0
	if (!ctx.cr6.eq) goto loc_827734C0;
loc_827734AC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8276e958
	ctx.lr = 0x827734BC;
	sub_8276E958(ctx, base);
	// b 0x8277373c
	goto loc_8277373C;
loc_827734C0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8277350c
	if (!ctx.cr6.eq) goto loc_8277350C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827734D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,10824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10824);
	// lwz r9,10828(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10828);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8277350c
	if (ctx.cr0.eq) goto loc_8277350C;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// bne cr6,0x8277350c
	if (!ctx.cr6.eq) goto loc_8277350C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8277350c
	if (!ctx.cr6.eq) goto loc_8277350C;
loc_827734F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827734FC:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// stw r11,10828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10828, ctx.r11.u32);
	// stw r29,17296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17296, ctx.r29.u32);
	// b 0x8277373c
	goto loc_8277373C;
loc_8277350C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82773568
	if (!ctx.cr6.eq) goto loc_82773568;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,10824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10824);
	// lwz r9,10828(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10828);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82773568
	if (!ctx.cr0.eq) goto loc_82773568;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// bne cr6,0x82773568
	if (!ctx.cr6.eq) goto loc_82773568;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773568
	if (!ctx.cr6.eq) goto loc_82773568;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,4097
	ctx.r3.s64 = 4097;
	// b 0x82773700
	goto loc_82773700;
loc_82773568:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r8,912(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x827735a4
	if (!ctx.cr6.eq) goto loc_827735A4;
	// cmpwi cr6,r10,4098
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4098, ctx.xer);
	// bne cr6,0x827735a4
	if (!ctx.cr6.eq) goto loc_827735A4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827735a4
	if (!ctx.cr6.eq) goto loc_827735A4;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,4099
	ctx.r3.s64 = 4099;
	// b 0x82773700
	goto loc_82773700;
loc_827735A4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x827735f8
	if (!ctx.cr6.eq) goto loc_827735F8;
	// cmpwi cr6,r10,4100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4100, ctx.xer);
	// beq cr6,0x827735f8
	if (ctx.cr6.eq) goto loc_827735F8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827735f8
	if (!ctx.cr6.eq) goto loc_827735F8;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,10792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10792);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8277373c
	if (!ctx.cr6.gt) goto loc_8277373C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,4100
	ctx.r3.s64 = 4100;
	// b 0x82773700
	goto loc_82773700;
loc_827735F8:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82773628
	if (!ctx.cr6.eq) goto loc_82773628;
	// cmpwi cr6,r10,4098
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4098, ctx.xer);
	// bne cr6,0x82773628
	if (!ctx.cr6.eq) goto loc_82773628;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773628
	if (!ctx.cr6.eq) goto loc_82773628;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,4101
	ctx.r3.s64 = 4101;
	// b 0x82773700
	goto loc_82773700;
loc_82773628:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82773668
	if (!ctx.cr6.eq) goto loc_82773668;
	// lwz r7,228(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 228);
	// lwz r7,40(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82773668
	if (!ctx.cr6.eq) goto loc_82773668;
	// cmpwi cr6,r10,4098
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4098, ctx.xer);
	// beq cr6,0x82773658
	if (ctx.cr6.eq) goto loc_82773658;
	// cmpwi cr6,r10,4096
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4096, ctx.xer);
	// beq cr6,0x82773658
	if (ctx.cr6.eq) goto loc_82773658;
	// cmpwi cr6,r10,4104
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4104, ctx.xer);
	// bne cr6,0x82773668
	if (!ctx.cr6.eq) goto loc_82773668;
loc_82773658:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82773668
	if (!ctx.cr6.eq) goto loc_82773668;
	// bl 0x8276e7a0
	ctx.lr = 0x82773664;
	sub_8276E7A0(ctx, base);
	// b 0x8277373c
	goto loc_8277373C;
loc_82773668:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827736a0
	if (!ctx.cr6.eq) goto loc_827736A0;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x827736a0
	if (ctx.cr6.eq) goto loc_827736A0;
	// cmpwi cr6,r10,4104
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4104, ctx.xer);
	// bne cr6,0x827736a0
	if (!ctx.cr6.eq) goto loc_827736A0;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8276aed8
	ctx.lr = 0x8277368C;
	sub_8276AED8(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x8277373c
	goto loc_8277373C;
loc_827736A0:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x827736d0
	if (!ctx.cr6.eq) goto loc_827736D0;
	// cmpwi cr6,r10,4098
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4098, ctx.xer);
	// bne cr6,0x827736d0
	if (!ctx.cr6.eq) goto loc_827736D0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827736d0
	if (!ctx.cr6.eq) goto loc_827736D0;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9444);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,4103
	ctx.r3.s64 = 4103;
	// b 0x82773700
	goto loc_82773700;
loc_827736D0:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x827736e4
	if (ctx.cr6.eq) goto loc_827736E4;
	// lwz r8,9736(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 9736);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82773708
	if (ctx.cr6.eq) goto loc_82773708;
loc_827736E4:
	// cmpwi cr6,r10,4104
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4104, ctx.xer);
	// bne cr6,0x82773708
	if (!ctx.cr6.eq) goto loc_82773708;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9416);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277373c
	if (ctx.cr6.eq) goto loc_8277373C;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82773700:
	// bl 0x8276aed8
	ctx.lr = 0x82773704;
	sub_8276AED8(ctx, base);
	// b 0x8277373c
	goto loc_8277373C;
loc_82773708:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277373c
	if (!ctx.cr6.eq) goto loc_8277373C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8277373c
	if (!ctx.cr6.eq) goto loc_8277373C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82773738
	if (ctx.cr6.eq) goto loc_82773738;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82773738
	if (ctx.cr6.eq) goto loc_82773738;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82773738
	if (ctx.cr6.eq) goto loc_82773738;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8277373c
	if (!ctx.cr6.eq) goto loc_8277373C;
loc_82773738:
	// bl 0x8276a508
	ctx.lr = 0x8277373C;
	sub_8276A508(ctx, base);
loc_8277373C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82775d18
	ctx.lr = 0x82773744;
	sub_82775D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773758"))) PPC_WEAK_FUNC(sub_82773758);
PPC_FUNC_IMPL(__imp__sub_82773758) {
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
	// bl 0x82a6f490
	ctx.lr = 0x82773768;
	sub_82A6F490(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82773778"))) PPC_WEAK_FUNC(sub_82773778);
PPC_FUNC_IMPL(__imp__sub_82773778) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x82a4efb0
	ctx.lr = 0x8277379C;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-472
	ctx.r11.s64 = ctx.r11.s64 + -472;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x827737D0;
	sub_8312E74C(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,13584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13584);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827737f4
	if (ctx.cr6.eq) goto loc_827737F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827737F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82773838
	goto loc_82773838;
loc_827737F4:
	// lis r10,-31973
	ctx.r10.s64 = -2095382528;
	// lis r11,-31973
	ctx.r11.s64 = -2095382528;
	// addi r10,r10,-2476
	ctx.r10.s64 = ctx.r10.s64 + -2476;
	// addi r4,r11,-2468
	ctx.r4.s64 = ctx.r11.s64 + -2468;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// b 0x8277381c
	goto loc_8277381C;
loc_8277380C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82773824
	if (!ctx.cr6.eq) goto loc_82773824;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_8277381C:
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8277380c
	if (ctx.cr6.lt) goto loc_8277380C;
loc_82773824:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82773838:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82773840;
	sub_8312E73C(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82a4efb0
	ctx.lr = 0x82773850;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,16916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16916);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,16920(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16920);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r31,r8,6808
	ctx.r31.s64 = ctx.r8.s64 + 6808;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// bl 0x82d1bb78
	ctx.lr = 0x827738B0;
	sub_82D1BB78(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x827738B4;
	sub_82A6F310(ctx, base);
	// stw r3,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_827738D0"))) PPC_WEAK_FUNC(sub_827738D0);
PPC_FUNC_IMPL(__imp__sub_827738D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x827738D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r30,r11,6808
	ctx.r30.s64 = ctx.r11.s64 + 6808;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// addi r28,r30,436
	ctx.r28.s64 = ctx.r30.s64 + 436;
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// addi r26,r11,16920
	ctx.r26.s64 = ctx.r11.s64 + 16920;
	// addi r25,r10,16916
	ctx.r25.s64 = ctx.r10.s64 + 16916;
loc_82773910:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x827739b4
	if (ctx.cr6.eq) goto loc_827739B4;
	// lwz r11,10884(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10884);
	// slw r10,r24,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r31.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827739b4
	if (ctx.cr6.eq) goto loc_827739B4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277395c
	if (!ctx.cr6.eq) goto loc_8277395C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277395C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277395C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277397C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827739a4
	if (ctx.cr0.lt) goto loc_827739A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827739A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827739A4:
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
	// stw r24,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r24.u32);
	// sth r22,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r22.u16);
	// b 0x827739e4
	goto loc_827739E4;
loc_827739B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827739e4
	if (ctx.cr6.eq) goto loc_827739E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827739D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x827739e4
	if (ctx.cr0.lt) goto loc_827739E4;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_827739E4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82773910
	if (!ctx.cr0.eq) goto loc_82773910;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773A00"))) PPC_WEAK_FUNC(sub_82773A00);
PPC_FUNC_IMPL(__imp__sub_82773A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82773A08;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r31,r4,144
	ctx.r31.s64 = ctx.r4.s64 + 144;
	// addi r24,r4,176
	ctx.r24.s64 = ctx.r4.s64 + 176;
	// li r25,4
	ctx.r25.s64 = 4;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// addi r29,r10,6808
	ctx.r29.s64 = ctx.r10.s64 + 6808;
	// addi r26,r11,16916
	ctx.r26.s64 = ctx.r11.s64 + 16916;
loc_82773A2C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773b54
	if (ctx.cr6.eq) goto loc_82773B54;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82773b54
	if (ctx.cr0.lt) goto loc_82773B54;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773A84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82773b3c
	if (ctx.cr0.lt) goto loc_82773B3C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 4;
loc_82773A94:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773b28
	if (ctx.cr6.eq) goto loc_82773B28;
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8276dd98
	ctx.lr = 0x82773AA8;
	sub_8276DD98(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82773b00
	if (!ctx.cr6.eq) goto loc_82773B00;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82773b00
	if (!ctx.cr6.gt) goto loc_82773B00;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82773AD4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82773ae8
	if (ctx.cr6.eq) goto loc_82773AE8;
	// ld r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82773afc
	if (ctx.cr6.eq) goto loc_82773AFC;
loc_82773AE8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82773ad4
	if (ctx.cr6.lt) goto loc_82773AD4;
	// b 0x82773b00
	goto loc_82773B00;
loc_82773AFC:
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
loc_82773B00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82773B28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82773a94
	if (ctx.cr6.lt) goto loc_82773A94;
	// b 0x82773b54
	goto loc_82773B54;
loc_82773B3C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82773B54:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82773a2c
	if (!ctx.cr0.eq) goto loc_82773A2C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773B70"))) PPC_WEAK_FUNC(sub_82773B70);
PPC_FUNC_IMPL(__imp__sub_82773B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x82773B78;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// addi r31,r11,6808
	ctx.r31.s64 = ctx.r11.s64 + 6808;
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,548(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82773bb4
	if (!ctx.cr0.eq) goto loc_82773BB4;
loc_82773BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82773cbc
	goto loc_82773CBC;
loc_82773BB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,436
	ctx.r30.s64 = ctx.r31.s64 + 436;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82773BE8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773c7c
	if (ctx.cr6.eq) goto loc_82773C7C;
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 & ctx.r23.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82773c6c
	if (ctx.cr0.eq) goto loc_82773C6C;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subfic r10,r11,100
	ctx.xer.ca = ctx.r11.u32 <= 100;
	ctx.r10.s64 = 100 - ctx.r11.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// blt cr6,0x82773c68
	if (ctx.cr6.lt) goto loc_82773C68;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82773c6c
	if (ctx.cr0.lt) goto loc_82773C6C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// ble cr6,0x82773c6c
	if (!ctx.cr6.gt) goto loc_82773C6C;
loc_82773C68:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82773C6C:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r25,r11,16
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFF;
loc_82773C7C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// bne 0x82773be8
	if (!ctx.cr0.eq) goto loc_82773BE8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82773cb8
	if (!ctx.cr6.eq) goto loc_82773CB8;
	// clrlwi. r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82773bac
	if (ctx.cr0.eq) goto loc_82773BAC;
	// bl 0x82a6f310
	ctx.lr = 0x82773CA8;
	sub_82A6F310(ctx, base);
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// ble cr6,0x82773bac
	if (!ctx.cr6.gt) goto loc_82773BAC;
loc_82773CB8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82773CBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773CC8"))) PPC_WEAK_FUNC(sub_82773CC8);
PPC_FUNC_IMPL(__imp__sub_82773CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82773CD0;
	__savegprlr_18(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r18,r11,6808
	ctx.r18.s64 = ctx.r11.s64 + 6808;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,6808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6808);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82773f48
	if (ctx.cr0.lt) goto loc_82773F48;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r20,-31949
	ctx.r20.s64 = -2093809664;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82773d88
	if (ctx.cr6.eq) goto loc_82773D88;
	// lwz r6,13024(r20)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
loc_82773D2C:
	// lwz r11,912(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82773d74
	if (!ctx.cr6.gt) goto loc_82773D74;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82773D48:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82773d5c
	if (ctx.cr6.eq) goto loc_82773D5C;
	// ld r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// cmpld cr6,r4,r7
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82773d70
	if (ctx.cr6.eq) goto loc_82773D70;
loc_82773D5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82773d48
	if (ctx.cr6.lt) goto loc_82773D48;
	// b 0x82773d74
	goto loc_82773D74;
loc_82773D70:
	// stw r23,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r23.u32);
loc_82773D74:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82773d2c
	if (ctx.cr6.lt) goto loc_82773D2C;
loc_82773D88:
	// stb r23,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r23.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,41
	ctx.r3.s64 = ctx.r27.s64 + 41;
	// bl 0x82a455d0
	ctx.lr = 0x82773D9C;
	sub_82A455D0(ctx, base);
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// addi r21,r18,4
	ctx.r21.s64 = ctx.r18.s64 + 4;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// addi r22,r10,6280
	ctx.r22.s64 = ctx.r10.s64 + 6280;
	// addi r25,r11,9688
	ctx.r25.s64 = ctx.r11.s64 + 9688;
loc_82773DBC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82773DC4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82773dd4
	if (!ctx.cr6.eq) goto loc_82773DD4;
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
loc_82773DD4:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82773dc4
	if (!ctx.cr0.eq) goto loc_82773DC4;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stdx r23,r26,r25
	PPC_STORE_U64(ctx.r26.u32 + ctx.r25.u32, ctx.r23.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773f28
	if (ctx.cr6.eq) goto loc_82773F28;
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r11,548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82773e0c
	if (ctx.cr6.eq) goto loc_82773E0C;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
loc_82773E0C:
	// addi r11,r22,144
	ctx.r11.s64 = ctx.r22.s64 + 144;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,9
	ctx.r8.s64 = 9;
	// add r7,r30,r27
	ctx.r7.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// ldx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + ctx.r11.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stdx r11,r7,r8
	PPC_STORE_U64(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u64);
loc_82773E2C:
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82773e3c
	if (!ctx.cr6.eq) goto loc_82773E3C;
	// std r23,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r23.u64);
loc_82773E3C:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82773e2c
	if (!ctx.cr0.eq) goto loc_82773E2C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stdx r11,r26,r25
	PPC_STORE_U64(ctx.r26.u32 + ctx.r25.u32, ctx.r11.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82773f28
	if (ctx.cr6.eq) goto loc_82773F28;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82773E60:
	// ld r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x8276dd98
	ctx.lr = 0x82773E68;
	sub_8276DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82773eec
	if (ctx.cr0.eq) goto loc_82773EEC;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r6,45
	ctx.r6.s64 = 45;
	// lwz r9,13024(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// addi r10,r11,41
	ctx.r10.s64 = ctx.r11.s64 + 41;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stdx r7,r10,r6
	PPC_STORE_U64(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u64);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,41(r11)
	PPC_STORE_U8(ctx.r11.u32 + 41, ctx.r10.u8);
	// lwz r11,912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82773eec
	if (!ctx.cr6.gt) goto loc_82773EEC;
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
loc_82773EC0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82773ed4
	if (ctx.cr6.eq) goto loc_82773ED4;
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// cmpld cr6,r9,r7
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82773ee8
	if (ctx.cr6.eq) goto loc_82773EE8;
loc_82773ED4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82773ec0
	if (ctx.cr6.lt) goto loc_82773EC0;
	// b 0x82773eec
	goto loc_82773EEC;
loc_82773EE8:
	// stw r3,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r3.u32);
loc_82773EEC:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// subfe r6,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82773F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82773e60
	if (ctx.cr6.lt) goto loc_82773E60;
loc_82773F28:
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// stb r11,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r11.u8);
	// blt cr6,0x82773dbc
	if (ctx.cr6.lt) goto loc_82773DBC;
loc_82773F48:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82773F50"))) PPC_WEAK_FUNC(sub_82773F50);
PPC_FUNC_IMPL(__imp__sub_82773F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x82773F58;
	__savegprlr_14(ctx, base);
	// stwu r1,-3728(r1)
	ea = -3728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82773f9c
	if (!ctx.cr6.gt) goto loc_82773F9C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82773F7C:
	// lwz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x82773F88;
	sub_82333960(ctx, base);
	// lwz r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 16);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82773f7c
	if (ctx.cr6.lt) goto loc_82773F7C;
loc_82773F9C:
	// lwz r11,20(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 20);
	// stw r28,16(r14)
	PPC_STORE_U32(ctx.r14.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773fc0
	if (ctx.cr6.eq) goto loc_82773FC0;
	// stw r28,20(r14)
	PPC_STORE_U32(ctx.r14.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82332c38
	ctx.lr = 0x82773FC0;
	sub_82332C38(ctx, base);
loc_82773FC0:
	// lwz r11,20(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 20);
	// stw r28,16(r16)
	PPC_STORE_U32(ctx.r16.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82773fe4
	if (ctx.cr6.eq) goto loc_82773FE4;
	// stw r28,20(r16)
	PPC_STORE_U32(ctx.r16.u32 + 20, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82332c38
	ctx.lr = 0x82773FE4;
	sub_82332C38(ctx, base);
loc_82773FE4:
	// li r5,3080
	ctx.r5.s64 = 3080;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// mr r17,r28
	ctx.r17.u64 = ctx.r28.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82773FF8;
	sub_82A4EFB0(ctx, base);
	// lis r20,-31949
	ctx.r20.s64 = -2093809664;
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r15,548(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r15,-1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, -1, ctx.xer);
	// beq cr6,0x82774064
	if (ctx.cr6.eq) goto loc_82774064;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a6f438
	ctx.lr = 0x8277402C;
	sub_82A6F438(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82774394
	if (!ctx.cr0.eq) goto loc_82774394;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x82a6f2f8
	ctx.lr = 0x8277404C;
	sub_82A6F2F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82774058
	if (!ctx.cr0.eq) goto loc_82774058;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82774058:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82a6ed08
	ctx.lr = 0x82774060;
	sub_82A6ED08(ctx, base);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
loc_82774064:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r4,r11,612
	ctx.r4.s64 = ctx.r11.s64 + 612;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// bl 0x82400b48
	ctx.lr = 0x827740A8;
	sub_82400B48(ctx, base);
	// mr r19,r28
	ctx.r19.u64 = ctx.r28.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82774384
	if (!ctx.cr6.gt) goto loc_82774384;
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r7,-32219
	ctx.r7.s64 = -2111504384;
	// lis r8,-32219
	ctx.r8.s64 = -2111504384;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r18,r1,504
	ctx.r18.s64 = ctx.r1.s64 + 504;
	// addi r26,r5,-14924
	ctx.r26.s64 = ctx.r5.s64 + -14924;
	// addi r29,r6,7896
	ctx.r29.s64 = ctx.r6.s64 + 7896;
	// addi r25,r7,22836
	ctx.r25.s64 = ctx.r7.s64 + 22836;
	// addi r24,r8,22900
	ctx.r24.s64 = ctx.r8.s64 + 22900;
	// addi r23,r9,22876
	ctx.r23.s64 = ctx.r9.s64 + 22876;
	// addi r21,r10,22856
	ctx.r21.s64 = ctx.r10.s64 + 22856;
	// addi r22,r11,22844
	ctx.r22.s64 = ctx.r11.s64 + 22844;
loc_827740F0:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x828168f0
	ctx.lr = 0x827740FC;
	sub_828168F0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82774110
	if (ctx.cr6.eq) goto loc_82774110;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82774114
	goto loc_82774114;
loc_82774110:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_82774114:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82816c30
	ctx.lr = 0x82774124;
	sub_82816C30(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x8277412C;
	sub_82333960(ctx, base);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82774140
	if (!ctx.cr6.eq) goto loc_82774140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82774140:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82409058
	ctx.lr = 0x82774148;
	sub_82409058(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r27,132(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8277416c
	if (ctx.cr6.eq) goto loc_8277416C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8277416c
	if (ctx.cr6.eq) goto loc_8277416C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8277416C;
	sub_82332DB8(ctx, base);
loc_8277416C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r18,-8
	ctx.r5.s64 = ctx.r18.s64 + -8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82a6f450
	ctx.lr = 0x8277418C;
	sub_82A6F450(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827741b0
	if (ctx.cr0.eq) goto loc_827741B0;
	// cmplwi cr6,r3,183
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 183, ctx.xer);
	// beq cr6,0x827741b0
	if (ctx.cr6.eq) goto loc_827741B0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82414568
	ctx.lr = 0x827741A8;
	sub_82414568(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82774368
	goto loc_82774368;
loc_827741B0:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82414568
	ctx.lr = 0x827741BC;
	sub_82414568(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827741d0
	if (ctx.cr6.eq) goto loc_827741D0;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x827741d4
	goto loc_827741D4;
loc_827741D0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_827741D4:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82419348
	ctx.lr = 0x827741E0;
	sub_82419348(ctx, base);
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827741f4
	if (!ctx.cr6.eq) goto loc_827741F4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_827741F4:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82419348
	ctx.lr = 0x82774200;
	sub_82419348(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82333960
	ctx.lr = 0x82774208;
	sub_82333960(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82333960
	ctx.lr = 0x82774210;
	sub_82333960(ctx, base);
	// lwz r31,272(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r30,268(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82774228
	if (!ctx.cr6.eq) goto loc_82774228;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82774228:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// bl 0x828c3ab0
	ctx.lr = 0x82774238;
	sub_828C3AB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82774358
	if (ctx.cr0.eq) goto loc_82774358;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// bl 0x828c3800
	ctx.lr = 0x82774250;
	sub_828C3800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827742d0
	if (ctx.cr0.eq) goto loc_827742D0;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277426c
	if (!ctx.cr6.eq) goto loc_8277426C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8277426C:
	// bl 0x82a4cad0
	ctx.lr = 0x82774270;
	sub_82A4CAD0(ctx, base);
	// lwz r10,16(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827742a8
	if (!ctx.cr6.gt) goto loc_827742A8;
	// lwz r10,12(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 12);
loc_82774288:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x827742ac
	if (ctx.cr6.eq) goto loc_827742AC;
	// lwz r9,16(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82774288
	if (ctx.cr6.lt) goto loc_82774288;
loc_827742A8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_827742AC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82774358
	if (!ctx.cr6.eq) goto loc_82774358;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82410060
	ctx.lr = 0x827742C0;
	sub_82410060(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x824152a0
	ctx.lr = 0x827742CC;
	sub_824152A0(ctx, base);
	// b 0x82774364
	goto loc_82774364;
loc_827742D0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x827742e0
	if (!ctx.cr6.eq) goto loc_827742E0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_827742E0:
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827742F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82774308
	if (!ctx.cr6.eq) goto loc_82774308;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82774308:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82414568
	ctx.lr = 0x82774310;
	sub_82414568(ctx, base);
	// lwz r11,13024(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 13024);
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r31,r11,44
	ctx.r31.s64 = ctx.r11.s64 + 44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82774330;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x828c65c0
	ctx.lr = 0x8277433C;
	sub_828C65C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82774350;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82333960
	ctx.lr = 0x82774358;
	sub_82333960(ctx, base);
loc_82774358:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a6f428
	ctx.lr = 0x82774364;
	sub_82A6F428(ctx, base);
loc_82774364:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
loc_82774368:
	// bl 0x82333960
	ctx.lr = 0x8277436C;
	sub_82333960(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x82774374;
	sub_82333960(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r18,r18,308
	ctx.r18.s64 = ctx.r18.s64 + 308;
	// cmpw cr6,r19,r17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x827740f0
	if (ctx.cr6.lt) goto loc_827740F0;
loc_82774384:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82333960
	ctx.lr = 0x8277438C;
	sub_82333960(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82333960
	ctx.lr = 0x82774394;
	sub_82333960(ctx, base);
loc_82774394:
	// addi r1,r1,3728
	ctx.r1.s64 = ctx.r1.s64 + 3728;
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827743A0"))) PPC_WEAK_FUNC(sub_827743A0);
PPC_FUNC_IMPL(__imp__sub_827743A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827743A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82774438
	if (!ctx.cr6.gt) goto loc_82774438;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,7896
	ctx.r27.s64 = ctx.r11.s64 + 7896;
loc_827743CC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827743e8
	if (ctx.cr6.eq) goto loc_827743E8;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x827743ec
	goto loc_827743EC;
loc_827743E8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_827743EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x827743F4;
	sub_82409058(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82774418
	if (ctx.cr6.eq) goto loc_82774418;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82774418
	if (ctx.cr6.eq) goto loc_82774418;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82774418;
	sub_82332DB8(ctx, base);
loc_82774418:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6f428
	ctx.lr = 0x82774424;
	sub_82A6F428(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827743cc
	if (ctx.cr6.lt) goto loc_827743CC;
loc_82774438:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774440"))) PPC_WEAK_FUNC(sub_82774440);
PPC_FUNC_IMPL(__imp__sub_82774440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82774448;
	__savegprlr_29(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// stw r5,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r5.u32);
	// stw r6,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r6.u32);
	// stw r7,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r7.u32);
	// stw r9,3136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3136, ctx.r9.u32);
	// stw r8,3592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3592, ctx.r8.u32);
	// beq cr6,0x82774480
	if (ctx.cr6.eq) goto loc_82774480;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82774480;
	sub_82A4EA80(ctx, base);
loc_82774480:
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// addi r29,r31,3196
	ctx.r29.s64 = ctx.r31.s64 + 3196;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x827744A8;
	sub_82A4EFB0(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r30,r11,7896
	ctx.r30.s64 = ctx.r11.s64 + 7896;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r11,3592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x82774538
	if (!ctx.cr6.eq) goto loc_82774538;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,22936
	ctx.r4.s64 = ctx.r11.s64 + 22936;
	// bl 0x824099b8
	ctx.lr = 0x827744E8;
	sub_824099B8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// bl 0x82409058
	ctx.lr = 0x827744F8;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,21232
	ctx.r4.s64 = ctx.r10.s64 + 21232;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4cf58
	ctx.lr = 0x82774510;
	sub_82A4CF58(ctx, base);
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277452c
	if (ctx.cr6.eq) goto loc_8277452C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8277452c
	if (ctx.cr6.eq) goto loc_8277452C;
	// bl 0x82332db8
	ctx.lr = 0x8277452C;
	sub_82332DB8(ctx, base);
loc_8277452C:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9748);
	// b 0x827745cc
	goto loc_827745CC;
loc_82774538:
	// lwz r6,636(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82774554
	if (ctx.cr6.eq) goto loc_82774554;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82774558
	if (!ctx.cr0.eq) goto loc_82774558;
loc_82774554:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82774558:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,23004
	ctx.r4.s64 = ctx.r11.s64 + 23004;
	// bl 0x82816c30
	ctx.lr = 0x82774568;
	sub_82816C30(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82400b48
	ctx.lr = 0x82774574;
	sub_82400B48(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82333960
	ctx.lr = 0x8277457C;
	sub_82333960(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,16448
	ctx.r4.s64 = ctx.r11.s64 + 16448;
	// bl 0x82409058
	ctx.lr = 0x8277458C;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r6,3592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,21248
	ctx.r4.s64 = ctx.r10.s64 + 21248;
	// lwz r5,132(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x82a4cf58
	ctx.lr = 0x827745A8;
	sub_82A4CF58(ctx, base);
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// addi r11,r1,372
	ctx.r11.s64 = ctx.r1.s64 + 372;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x827745c4
	if (ctx.cr6.eq) goto loc_827745C4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x827745c4
	if (ctx.cr6.eq) goto loc_827745C4;
	// bl 0x82332db8
	ctx.lr = 0x827745C4;
	sub_82332DB8(ctx, base);
loc_827745C4:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9752);
loc_827745CC:
	// stw r11,3192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3192, ctx.r11.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827745e4
	if (!ctx.cr6.eq) goto loc_827745E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_827745E4:
	// addi r3,r31,3324
	ctx.r3.s64 = ctx.r31.s64 + 3324;
	// bl 0x82a4cdf0
	ctx.lr = 0x827745EC;
	sub_82A4CDF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82333960
	ctx.lr = 0x827745FC;
	sub_82333960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774608"))) PPC_WEAK_FUNC(sub_82774608);
PPC_FUNC_IMPL(__imp__sub_82774608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82774610;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r27,184(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82774684
	if (ctx.cr6.eq) goto loc_82774684;
	// li r3,3116
	ctx.r3.s64 = 3116;
	// bl 0x82333900
	ctx.lr = 0x82774640;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82774674
	if (ctx.cr0.eq) goto loc_82774674;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// b 0x82774678
	goto loc_82774678;
loc_82774674:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82774678:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// bl 0x8281abd8
	ctx.lr = 0x82774684;
	sub_8281ABD8(ctx, base);
loc_82774684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774690"))) PPC_WEAK_FUNC(sub_82774690);
PPC_FUNC_IMPL(__imp__sub_82774690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82774698;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r27,184(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8277470c
	if (ctx.cr6.eq) goto loc_8277470C;
	// li r3,3116
	ctx.r3.s64 = 3116;
	// bl 0x82333900
	ctx.lr = 0x827746C8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827746fc
	if (ctx.cr0.eq) goto loc_827746FC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// b 0x82774700
	goto loc_82774700;
loc_827746FC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82774700:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// bl 0x8281abd8
	ctx.lr = 0x8277470C;
	sub_8281ABD8(ctx, base);
loc_8277470C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774718"))) PPC_WEAK_FUNC(sub_82774718);
PPC_FUNC_IMPL(__imp__sub_82774718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82774720;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r27,184(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82774794
	if (ctx.cr6.eq) goto loc_82774794;
	// li r3,3116
	ctx.r3.s64 = 3116;
	// bl 0x82333900
	ctx.lr = 0x82774750;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82774784
	if (ctx.cr0.eq) goto loc_82774784;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// b 0x82774788
	goto loc_82774788;
loc_82774784:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82774788:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// bl 0x8281abd8
	ctx.lr = 0x82774794;
	sub_8281ABD8(ctx, base);
loc_82774794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827747A0"))) PPC_WEAK_FUNC(sub_827747A0);
PPC_FUNC_IMPL(__imp__sub_827747A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827747A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r27,184(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8277483c
	if (ctx.cr6.eq) goto loc_8277483C;
	// li r3,3116
	ctx.r3.s64 = 3116;
	// bl 0x82333900
	ctx.lr = 0x827747D8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277480c
	if (ctx.cr0.eq) goto loc_8277480C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r11,r11,11204
	ctx.r11.s64 = ctx.r11.s64 + 11204;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// b 0x82774810
	goto loc_82774810;
loc_8277480C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82774810:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82774828
	if (ctx.cr6.eq) goto loc_82774828;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82774828;
	sub_82A4EA80(ctx, base);
loc_82774828:
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,624(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 624);
	// bl 0x8281abd8
	ctx.lr = 0x8277483C;
	sub_8281ABD8(ctx, base);
loc_8277483C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774848"))) PPC_WEAK_FUNC(sub_82774848);
PPC_FUNC_IMPL(__imp__sub_82774848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82774850;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827748e8
	if (ctx.cr6.eq) goto loc_827748E8;
	// lis r10,-32114
	ctx.r10.s64 = -2104623104;
	// lwz r30,80(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r10,-1512
	ctx.r11.s64 = ctx.r10.s64 + -1512;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x82774890;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827748d8
	if (ctx.cr0.eq) goto loc_827748D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x827748A0;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r10,r10,23032
	ctx.r10.s64 = ctx.r10.s64 + 23032;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x827748dc
	goto loc_827748DC;
loc_827748D8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_827748DC:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827748E8;
	sub_82833A30(ctx, base);
loc_827748E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827748F0"))) PPC_WEAK_FUNC(sub_827748F0);
PPC_FUNC_IMPL(__imp__sub_827748F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827748F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x828243b0
	ctx.lr = 0x82774928;
	sub_828243B0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x82774930;
	sub_82333900(ctx, base);
	// lis r9,13
	ctx.r9.s64 = 851968;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// ori r30,r9,47021
	ctx.r30.u64 = ctx.r9.u64 | 47021;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,17192
	ctx.r31.s64 = ctx.r11.s64 + 17192;
	// addi r29,r10,23028
	ctx.r29.s64 = ctx.r10.s64 + 23028;
	// beq 0x8277497c
	if (ctx.cr0.eq) goto loc_8277497C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r3,9752(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9752, ctx.r3.u32);
	// b 0x82774988
	goto loc_82774988;
loc_8277497C:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,9752(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9752, ctx.r11.u32);
loc_82774988:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82333900
	ctx.lr = 0x82774990;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827749c0
	if (ctx.cr0.eq) goto loc_827749C0;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r3,9748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9748, ctx.r3.u32);
	// b 0x827749cc
	goto loc_827749CC;
loc_827749C0:
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r11,9748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 9748, ctx.r11.u32);
loc_827749CC:
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_827749D0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_827749D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8281ad60
	ctx.lr = 0x827749E4;
	sub_8281AD60(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82774a60
	if (ctx.cr6.eq) goto loc_82774A60;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82774a4c
	if (ctx.cr6.eq) goto loc_82774A4C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82774a44
	if (ctx.cr6.eq) goto loc_82774A44;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82774a3c
	if (ctx.cr6.eq) goto loc_82774A3C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82774a34
	if (ctx.cr6.eq) goto loc_82774A34;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82774a2c
	if (ctx.cr6.eq) goto loc_82774A2C;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82774a60
	if (!ctx.cr6.eq) goto loc_82774A60;
	// li r10,13
	ctx.r10.s64 = 13;
	// b 0x82774a50
	goto loc_82774A50;
loc_82774A2C:
	// li r10,12
	ctx.r10.s64 = 12;
	// b 0x82774a50
	goto loc_82774A50;
loc_82774A34:
	// li r10,11
	ctx.r10.s64 = 11;
	// b 0x82774a50
	goto loc_82774A50;
loc_82774A3C:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82774a50
	goto loc_82774A50;
loc_82774A44:
	// li r10,5
	ctx.r10.s64 = 5;
	// b 0x82774a50
	goto loc_82774A50;
loc_82774A4C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_82774A50:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82410060
	ctx.lr = 0x82774A60;
	sub_82410060(ctx, base);
loc_82774A60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// bl 0x8312e74c
	ctx.lr = 0x82774A6C;
	sub_8312E74C(ctx, base);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82774a7c
	if (!ctx.cr6.eq) goto loc_82774A7C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82774A7C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8312e73c
	ctx.lr = 0x82774A84;
	sub_8312E73C(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x827749d4
	if (!ctx.cr6.eq) goto loc_827749D4;
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x827749d4
	if (ctx.cr6.eq) goto loc_827749D4;
	// ble cr6,0x827749d0
	if (!ctx.cr6.gt) goto loc_827749D0;
loc_82774A9C:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82774c60
	if (ctx.cr6.eq) goto loc_82774C60;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82774c54
	if (ctx.cr6.eq) goto loc_82774C54;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82774b90
	if (ctx.cr6.eq) goto loc_82774B90;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82774b18
	if (ctx.cr6.eq) goto loc_82774B18;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82774af4
	if (ctx.cr6.eq) goto loc_82774AF4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82774c6c
	if (!ctx.cr6.eq) goto loc_82774C6C;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82774c6c
	if (ctx.cr6.eq) goto loc_82774C6C;
	// bl 0x828defa8
	ctx.lr = 0x82774AF0;
	sub_828DEFA8(ctx, base);
	// b 0x82774c6c
	goto loc_82774C6C;
loc_82774AF4:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82774b10
	if (ctx.cr6.eq) goto loc_82774B10;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x828df878
	ctx.lr = 0x82774B0C;
	sub_828DF878(ctx, base);
	// b 0x82774c68
	goto loc_82774C68;
loc_82774B10:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82774c6c
	goto loc_82774C6C;
loc_82774B18:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r30,21
	ctx.r30.s64 = 21;
	// stw r28,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r28.u32);
	// stw r28,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r28.u32);
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82774c6c
	if (ctx.cr6.eq) goto loc_82774C6C;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r4,3136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82a6f438
	ctx.lr = 0x82774B50;
	sub_82A6F438(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82774c6c
	if (!ctx.cr0.eq) goto loc_82774C6C;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a6f2f8
	ctx.lr = 0x82774B74;
	sub_82A6F2F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82774b88
	if (!ctx.cr0.eq) goto loc_82774B88;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r29,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r29.u32);
	// stw r11,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r11.u32);
loc_82774B88:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82774c4c
	goto loc_82774C4C;
loc_82774B90:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e818
	ctx.lr = 0x82774BA4;
	sub_82A6E818(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82a4efb0
	ctx.lr = 0x82774BBC;
	sub_82A4EFB0(ctx, base);
	// li r5,304
	ctx.r5.s64 = 304;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82774BD4;
	sub_82A4EFB0(ctx, base);
	// addi r11,r31,3196
	ctx.r11.s64 = ctx.r31.s64 + 3196;
	// addi r10,r1,424
	ctx.r10.s64 = ctx.r1.s64 + 424;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82774BE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82774be0
	if (!ctx.cr0.eq) goto loc_82774BE0;
	// addi r4,r31,3324
	ctx.r4.s64 = ctx.r31.s64 + 3324;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82a4cdf0
	ctx.lr = 0x82774C00;
	sub_82A4CDF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r11,3136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x827719d0
	ctx.lr = 0x82774C14;
	sub_827719D0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82a6f420
	ctx.lr = 0x82774C20;
	sub_82A6F420(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,997
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 997, ctx.xer);
	// bne cr6,0x82774c48
	if (!ctx.cr6.eq) goto loc_82774C48;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a48530
	ctx.lr = 0x82774C3C;
	sub_82A48530(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82774c48
	if (ctx.cr0.eq) goto loc_82774C48;
	// bl 0x82a4be58
	ctx.lr = 0x82774C48;
	sub_82A4BE58(ctx, base);
loc_82774C48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82774C4C:
	// bl 0x82a6ed08
	ctx.lr = 0x82774C50;
	sub_82A6ED08(ctx, base);
	// b 0x82774c6c
	goto loc_82774C6C;
loc_82774C54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82774f10
	ctx.lr = 0x82774C5C;
	sub_82774F10(ctx, base);
	// b 0x82774c68
	goto loc_82774C68;
loc_82774C60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82774cf0
	ctx.lr = 0x82774C68;
	sub_82774CF0(ctx, base);
loc_82774C68:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82774C6C:
	// lwz r6,3592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,3584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	// lwz r4,3580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// lwz r11,3588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82774C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82774cdc
	if (!ctx.cr6.gt) goto loc_82774CDC;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82774C98:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82774cc8
	if (!ctx.cr6.eq) goto loc_82774CC8;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82332ca8
	ctx.lr = 0x82774CC0;
	sub_82332CA8(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82774CC8:
	// lwz r25,112(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82774c98
	if (ctx.cr6.lt) goto loc_82774C98;
loc_82774CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82774CE4;
	sub_82332DB8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt cr6,0x82774a9c
	if (ctx.cr6.gt) goto loc_82774A9C;
	// b 0x827749d0
	goto loc_827749D0;
}

__attribute__((alias("__imp__sub_82774CF0"))) PPC_WEAK_FUNC(sub_82774CF0);
PPC_FUNC_IMPL(__imp__sub_82774CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82774CF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e818
	ctx.lr = 0x82774D14;
	sub_82A6E818(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82774d24
	if (!ctx.cr0.eq) goto loc_82774D24;
	// li r27,1627
	ctx.r27.s64 = 1627;
	// b 0x82774f04
	goto loc_82774F04;
loc_82774D24:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82a4efb0
	ctx.lr = 0x82774D3C;
	sub_82A4EFB0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82774da8
	if (!ctx.cr6.gt) goto loc_82774DA8;
	// addi r7,r31,3196
	ctx.r7.s64 = ctx.r31.s64 + 3196;
	// addi r8,r31,292
	ctx.r8.s64 = ctx.r31.s64 + 292;
loc_82774D54:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82774D5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// beq 0x82774d80
	if (ctx.cr0.eq) goto loc_82774D80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82774d5c
	if (ctx.cr6.eq) goto loc_82774D5C;
loc_82774D80:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82774da0
	if (ctx.cr0.eq) goto loc_82774DA0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,308
	ctx.r8.s64 = ctx.r8.s64 + 308;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82774d54
	if (ctx.cr6.lt) goto loc_82774D54;
	// b 0x82774da8
	goto loc_82774DA8;
loc_82774DA0:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82774db0
	if (!ctx.cr6.eq) goto loc_82774DB0;
loc_82774DA8:
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x82774eec
	goto loc_82774EEC;
loc_82774DB0:
	// lwz r3,3192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// bl 0x827751f0
	ctx.lr = 0x82774DB8;
	sub_827751F0(ctx, base);
	// bl 0x827719d0
	ctx.lr = 0x82774DBC;
	sub_827719D0(ctx, base);
	// mulli r11,r30,308
	ctx.r11.s64 = ctx.r30.s64 * 308;
	// lwz r10,3192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// bl 0x82a6f450
	ctx.lr = 0x82774DE4;
	sub_82A6F450(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,997
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 997, ctx.xer);
	// bne cr6,0x82774eec
	if (!ctx.cr6.eq) goto loc_82774EEC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a48530
	ctx.lr = 0x82774E00;
	sub_82A48530(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82774edc
	if (!ctx.cr0.eq) goto loc_82774EDC;
	// lwz r11,3192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a6e620
	ctx.lr = 0x82774E2C;
	sub_82A6E620(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82774ed4
	if (ctx.cr6.eq) goto loc_82774ED4;
	// addi r4,r31,3140
	ctx.r4.s64 = ctx.r31.s64 + 3140;
	// bl 0x82a6f498
	ctx.lr = 0x82774E40;
	sub_82A6F498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82774e54
	if (!ctx.cr0.eq) goto loc_82774E54;
	// bl 0x82a4be58
	ctx.lr = 0x82774E4C;
	sub_82A4BE58(ctx, base);
	// li r27,1631
	ctx.r27.s64 = 1631;
	// b 0x82774ec8
	goto loc_82774EC8;
loc_82774E54:
	// lwz r30,3176(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3176);
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82774e68
	if (ctx.cr0.eq) goto loc_82774E68;
	// rlwinm r11,r30,0,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF800;
	// addi r30,r11,2048
	ctx.r30.s64 = ctx.r11.s64 + 2048;
loc_82774E68:
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// stw r30,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r30.u32);
	// lwz r3,13016(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82774e84
	if (!ctx.cr6.eq) goto loc_82774E84;
	// bl 0x828223f0
	ctx.lr = 0x82774E80;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13016);
loc_82774E84:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82774E9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,3584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a6f128
	ctx.lr = 0x82774EB8;
	sub_82A6F128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82774ec8
	if (!ctx.cr0.eq) goto loc_82774EC8;
	// bl 0x82a4be58
	ctx.lr = 0x82774EC4;
	sub_82A4BE58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82774EC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a6ed08
	ctx.lr = 0x82774ED0;
	sub_82A6ED08(ctx, base);
	// b 0x82774edc
	goto loc_82774EDC;
loc_82774ED4:
	// bl 0x82a4be58
	ctx.lr = 0x82774ED8;
	sub_82A4BE58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82774EDC:
	// lwz r11,3192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a6f428
	ctx.lr = 0x82774EEC;
	sub_82A6F428(ctx, base);
loc_82774EEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a48530
	ctx.lr = 0x82774EFC;
	sub_82A48530(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a6ed08
	ctx.lr = 0x82774F04;
	sub_82A6ED08(ctx, base);
loc_82774F04:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82774F10"))) PPC_WEAK_FUNC(sub_82774F10);
PPC_FUNC_IMPL(__imp__sub_82774F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82774F18;
	__savegprlr_22(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6e818
	ctx.lr = 0x82774F34;
	sub_82A6E818(ctx, base);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,304
	ctx.r5.s64 = 304;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r24,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r24.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// bl 0x82a4efb0
	ctx.lr = 0x82774F64;
	sub_82A4EFB0(ctx, base);
	// addi r11,r31,3196
	ctx.r11.s64 = ctx.r31.s64 + 3196;
	// addi r10,r1,376
	ctx.r10.s64 = ctx.r1.s64 + 376;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82774F70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82774f70
	if (!ctx.cr0.eq) goto loc_82774F70;
	// addi r4,r31,3324
	ctx.r4.s64 = ctx.r31.s64 + 3324;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82a4cdf0
	ctx.lr = 0x82774F90;
	sub_82A4CDF0(ctx, base);
	// lwz r11,3136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3136);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x827719d0
	ctx.lr = 0x82774FA4;
	sub_827719D0(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r27,3592(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3592);
	// addi r29,r11,-18404
	ctx.r29.s64 = ctx.r11.s64 + -18404;
	// lwz r30,3192(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-18404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18404);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82774FCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,13
	ctx.r10.s64 = 851968;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r10,47021
	ctx.r10.u64 = ctx.r10.u64 | 47021;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82774fec
	if (ctx.cr6.eq) goto loc_82774FEC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82774fec
	if (ctx.cr6.eq) goto loc_82774FEC;
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
loc_82774FEC:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82775000
	if (ctx.cr6.eq) goto loc_82775000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827751f0
	ctx.lr = 0x82775000;
	sub_827751F0(ctx, base);
loc_82775000:
	// lwz r25,12(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82775014
	if (!ctx.cr6.eq) goto loc_82775014;
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_82775014:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775028;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8277506c
	if (!ctx.cr6.eq) goto loc_8277506C;
	// lwz r4,3192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2098
	ctx.r6.s64 = 2098;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r10,-26264(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26264);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,14056(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14056);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82a6f398
	ctx.lr = 0x82775064;
	sub_82A6F398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8277513c
	if (!ctx.cr0.eq) goto loc_8277513C;
loc_8277506C:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r4,544(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// bl 0x824c0b88
	ctx.lr = 0x8277507C;
	sub_824C0B88(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// stw r3,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r3.u32);
	// lwz r11,3192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a6e620
	ctx.lr = 0x827750B0;
	sub_82A6E620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82775118
	if (ctx.cr6.eq) goto loc_82775118;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,3584(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3584);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r4,3580(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3580);
	// bl 0x82a6ead0
	ctx.lr = 0x827750D0;
	sub_82A6EAD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x82775110
	if (!ctx.cr0.eq) goto loc_82775110;
	// bl 0x82a6ed08
	ctx.lr = 0x827750E0;
	sub_82A6ED08(ctx, base);
	// lwz r3,3192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// bl 0x827751f0
	ctx.lr = 0x827750E8;
	sub_827751F0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a6ed08
	ctx.lr = 0x827750F0;
	sub_82A6ED08(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828ced70
	ctx.lr = 0x82775104;
	sub_828CED70(ctx, base);
	// bl 0x82a4be58
	ctx.lr = 0x82775108;
	sub_82A4BE58(ctx, base);
loc_82775108:
	// bl 0x82a4be58
	ctx.lr = 0x8277510C;
	sub_82A4BE58(ctx, base);
	// b 0x82775180
	goto loc_82775180;
loc_82775110:
	// bl 0x82a6ed08
	ctx.lr = 0x82775114;
	sub_82A6ED08(ctx, base);
	// b 0x82775150
	goto loc_82775150;
loc_82775118:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828ced70
	ctx.lr = 0x8277512C;
	sub_828CED70(ctx, base);
	// bl 0x82a4be58
	ctx.lr = 0x82775130;
	sub_82A4BE58(ctx, base);
	// lwz r3,3192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// bl 0x827751f0
	ctx.lr = 0x82775138;
	sub_827751F0(ctx, base);
	// b 0x82775108
	goto loc_82775108;
loc_8277513C:
	// bl 0x82a4be58
	ctx.lr = 0x82775140;
	sub_82A4BE58(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r10.u32);
loc_82775150:
	// lwz r11,3192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3192);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a6f430
	ctx.lr = 0x82775160;
	sub_82A6F430(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a6ed08
	ctx.lr = 0x82775168;
	sub_82A6ED08(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// bl 0x828ced70
	ctx.lr = 0x8277517C;
	sub_828CED70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775180:
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775188"))) PPC_WEAK_FUNC(sub_82775188);
PPC_FUNC_IMPL(__imp__sub_82775188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,23028
	ctx.r11.s64 = ctx.r11.s64 + 23028;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x827751c0
	if (ctx.cr6.eq) goto loc_827751C0;
	// bl 0x827751f0
	ctx.lr = 0x827751C0;
	sub_827751F0(ctx, base);
loc_827751C0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827751d0
	if (ctx.cr0.eq) goto loc_827751D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827751D0;
	sub_82332DB8(ctx, base);
loc_827751D0:
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

__attribute__((alias("__imp__sub_827751F0"))) PPC_WEAK_FUNC(sub_827751F0);
PPC_FUNC_IMPL(__imp__sub_827751F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x827751F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-18404
	ctx.r30.s64 = ctx.r11.s64 + -18404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-18404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18404);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277521C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82775248
	if (ctx.cr6.eq) goto loc_82775248;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a6f428
	ctx.lr = 0x82775238;
	sub_82A6F428(ctx, base);
	// lis r11,13
	ctx.r11.s64 = 851968;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// ori r11,r11,47021
	ctx.r11.u64 = ctx.r11.u64 | 47021;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82775248:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82775258
	if (!ctx.cr6.eq) goto loc_82775258;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
loc_82775258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277526C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775278"))) PPC_WEAK_FUNC(sub_82775278);
PPC_FUNC_IMPL(__imp__sub_82775278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82775280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// addi r28,r29,-18404
	ctx.r28.s64 = ctx.r29.s64 + -18404;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827752A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,9752(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9752);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827752BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827752D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,9748(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 9748);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827752F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277530C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-18404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18404);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775328"))) PPC_WEAK_FUNC(sub_82775328);
PPC_FUNC_IMPL(__imp__sub_82775328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82775360
	if (ctx.cr6.eq) goto loc_82775360;
	// bl 0x82775630
	ctx.lr = 0x82775350;
	sub_82775630(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82775360
	if (!ctx.cr6.eq) goto loc_82775360;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8277536c
	goto loc_8277536C;
loc_82775360:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8277536C;
	sub_82333C70(ctx, base);
loc_8277536C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82775388"))) PPC_WEAK_FUNC(sub_82775388);
PPC_FUNC_IMPL(__imp__sub_82775388) {
	PPC_FUNC_PROLOGUE();
	// b 0x82775630
	sub_82775630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775390"))) PPC_WEAK_FUNC(sub_82775390);
PPC_FUNC_IMPL(__imp__sub_82775390) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x827753AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277541c
	if (ctx.cr0.eq) goto loc_8277541C;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23032
	ctx.r9.s64 = ctx.r9.s64 + 23032;
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
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x82775420
	goto loc_82775420;
loc_8277541C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775420:
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

__attribute__((alias("__imp__sub_82775438"))) PPC_WEAK_FUNC(sub_82775438);
PPC_FUNC_IMPL(__imp__sub_82775438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82775630
	ctx.lr = 0x82775458;
	sub_82775630(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8277546c
	if (ctx.cr6.eq) goto loc_8277546C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8277546C;
	sub_82333B08(ctx, base);
loc_8277546C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82775488"))) PPC_WEAK_FUNC(sub_82775488);
PPC_FUNC_IMPL(__imp__sub_82775488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x826f0070
	ctx.lr = 0x827754A8;
	sub_826F0070(ctx, base);
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
	ctx.lr = 0x827754C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x827754cc
	if (!ctx.cr0.eq) goto loc_827754CC;
	// li r30,0
	ctx.r30.s64 = 0;
loc_827754CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827754E4;
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

__attribute__((alias("__imp__sub_82775500"))) PPC_WEAK_FUNC(sub_82775500);
PPC_FUNC_IMPL(__imp__sub_82775500) {
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82775518;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8277556c
	if (ctx.cr0.eq) goto loc_8277556C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82775528;
	sub_82833180(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,23032
	ctx.r9.s64 = ctx.r9.s64 + 23032;
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
	// b 0x82775570
	goto loc_82775570;
loc_8277556C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82775570:
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

__attribute__((alias("__imp__sub_82775588"))) PPC_WEAK_FUNC(sub_82775588);
PPC_FUNC_IMPL(__imp__sub_82775588) {
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
	// lwz r11,23412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23412);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x827755c8
	if (!ctx.cr0.eq) goto loc_827755C8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,23412(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23412, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x827755C0;
	sub_82816528(ctx, base);
	// stw r3,23408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23408, ctx.r3.u32);
	// b 0x827755cc
	goto loc_827755CC;
loc_827755C8:
	// lwz r3,23408(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23408);
loc_827755CC:
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

__attribute__((alias("__imp__sub_827755E0"))) PPC_WEAK_FUNC(sub_827755E0);
PPC_FUNC_IMPL(__imp__sub_827755E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82775630
	ctx.lr = 0x82775600;
	sub_82775630(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775614;
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

__attribute__((alias("__imp__sub_82775630"))) PPC_WEAK_FUNC(sub_82775630);
PPC_FUNC_IMPL(__imp__sub_82775630) {
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
	// addi r31,r11,14052
	ctx.r31.s64 = ctx.r11.s64 + 14052;
	// lwz r11,14048(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14048);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82775678
	if (!ctx.cr0.eq) goto loc_82775678;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23112
	ctx.r9.s64 = ctx.r9.s64 + 23112;
	// stw r11,14048(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14048, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27888
	ctx.r3.s64 = ctx.r11.s64 + -27888;
	// bl 0x82a4c758
	ctx.lr = 0x82775678;
	sub_82A4C758(ctx, base);
loc_82775678:
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

__attribute__((alias("__imp__sub_82775690"))) PPC_WEAK_FUNC(sub_82775690);
PPC_FUNC_IMPL(__imp__sub_82775690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82775698;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r31.u32);
	// li r26,200
	ctx.r26.s64 = 200;
	// stw r31,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r31.u32);
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r31.u32);
	// stfs f30,160(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stb r31,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r31.u8);
	// stb r31,140(r30)
	PPC_STORE_U8(ctx.r30.u32 + 140, ctx.r31.u8);
	// stb r28,141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 141, ctx.r28.u8);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// stb r31,142(r30)
	PPC_STORE_U8(ctx.r30.u32 + 142, ctx.r31.u8);
	// stw r31,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r31.u32);
	// stb r31,145(r30)
	PPC_STORE_U8(ctx.r30.u32 + 145, ctx.r31.u8);
	// stb r31,143(r30)
	PPC_STORE_U8(ctx.r30.u32 + 143, ctx.r31.u8);
	// stb r28,172(r30)
	PPC_STORE_U8(ctx.r30.u32 + 172, ctx.r28.u8);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// cmpwi cr6,r11,200
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 200, ctx.xer);
	// bge cr6,0x82775728
	if (!ctx.cr6.lt) goto loc_82775728;
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r26.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82332c38
	ctx.lr = 0x82775728;
	sub_82332C38(ctx, base);
loc_82775728:
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x8277573C;
	sub_82A4EFB0(ctx, base);
	// li r23,4
	ctx.r23.s64 = 4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stb r23,52(r30)
	PPC_STORE_U8(ctx.r30.u32 + 52, ctx.r23.u8);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r11,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r11.u8);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8277578c
	if (!ctx.cr6.gt) goto loc_8277578C;
	// addi r10,r30,64
	ctx.r10.s64 = ctx.r30.s64 + 64;
	// addi r11,r27,60
	ctx.r11.s64 = ctx.r27.s64 + 60;
loc_82775764:
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,32(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82775764
	if (ctx.cr6.lt) goto loc_82775764;
loc_8277578C:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// bl 0x82a4efb0
	ctx.lr = 0x8277579C;
	sub_82A4EFB0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x827757AC;
	sub_82A4EA80(ctx, base);
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// li r22,6
	ctx.r22.s64 = 6;
	// stw r30,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r30.u32);
	// addi r11,r11,23624
	ctx.r11.s64 = ctx.r11.s64 + 23624;
	// stb r26,299(r1)
	PPC_STORE_U8(ctx.r1.u32 + 299, ctx.r26.u8);
	// stb r22,298(r1)
	PPC_STORE_U8(ctx.r1.u32 + 298, ctx.r22.u8);
	// addi r29,r30,136
	ctx.r29.s64 = ctx.r30.s64 + 136;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829fdc68
	ctx.lr = 0x827757D8;
	sub_829FDC68(ctx, base);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// li r24,2
	ctx.r24.s64 = 2;
	// stb r31,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r31.u8);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,5
	ctx.r26.s64 = 5;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lfs f31,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r28,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r28.u8);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stb r28,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r28.u8);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// stb r24,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r24.u8);
	// stb r25,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// stb r25,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r25.u8);
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// stb r23,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r23.u8);
	// stb r26,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r26.u8);
	// lwz r11,32(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stb r26,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r26.u8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82775868
	if (!ctx.cr6.eq) goto loc_82775868;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// stb r31,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r31.u8);
loc_82775868:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x829fd670
	ctx.lr = 0x82775898;
	sub_829FD670(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stfs f31,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stb r28,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r28.u8);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stb r24,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r24.u8);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stb r25,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r25.u8);
	// stb r23,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r23.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stb r26,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r26.u8);
	// stb r22,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r22.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x829fd6c8
	ctx.lr = 0x827758F8;
	sub_829FD6C8(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x829fda58
	ctx.lr = 0x82775904;
	sub_829FDA58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775918"))) PPC_WEAK_FUNC(sub_82775918);
PPC_FUNC_IMPL(__imp__sub_82775918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82775920;
	__savegprlr_28(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8277595c
	if (ctx.cr0.lt) goto loc_8277595C;
	// rlwinm r29,r31,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
loc_82775938:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82775cb8
	ctx.lr = 0x82775944;
	sub_82775CB8(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bge 0x82775938
	if (!ctx.cr0.lt) goto loc_82775938;
loc_8277595C:
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x82332ca8
	ctx.lr = 0x82775974;
	sub_82332CA8(ctx, base);
	// lbz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// beq 0x827759a4
	if (ctx.cr0.eq) goto loc_827759A4;
	// lbz r11,141(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827759a4
	if (ctx.cr0.eq) goto loc_827759A4;
	// stb r31,141(r30)
	PPC_STORE_U8(ctx.r30.u32 + 141, ctx.r31.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x829fd8d8
	ctx.lr = 0x827759A4;
	sub_829FD8D8(ctx, base);
loc_827759A4:
	// lbz r11,145(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 145);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82775b08
	if (ctx.cr0.eq) goto loc_82775B08;
	// lbz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82775b08
	if (ctx.cr0.eq) goto loc_82775B08;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lbz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// mulli r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 * 6;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f13,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lfs f0,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// stb r28,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r28.u8);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r8,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r8.u8);
	// stb r7,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r7.u8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r11.u8);
	// stb r6,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r6.u8);
	// ble cr6,0x82775a80
	if (!ctx.cr6.gt) goto loc_82775A80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82775A5C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824fc978
	ctx.lr = 0x82775A68;
	sub_824FC978(ctx, base);
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mulli r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 * 6;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82775a5c
	if (ctx.cr6.lt) goto loc_82775A5C;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82775A80:
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82775ac4
	if (!ctx.cr6.lt) goto loc_82775AC4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82775ac4
	if (ctx.cr6.eq) goto loc_82775AC4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
loc_82775AC4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stb r28,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r28.u8);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// bl 0x829fd6c8
	ctx.lr = 0x82775AF8;
	sub_829FD6C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8239d768
	ctx.lr = 0x82775B00;
	sub_8239D768(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d768
	ctx.lr = 0x82775B08;
	sub_8239D768(ctx, base);
loc_82775B08:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775B10"))) PPC_WEAK_FUNC(sub_82775B10);
PPC_FUNC_IMPL(__imp__sub_82775B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82775B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,132(r29)
	PPC_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82775b50
	if (!ctx.cr6.eq) goto loc_82775B50;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x82a45878
	ctx.lr = 0x82775B4C;
	sub_82A45878(ctx, base);
	// b 0x82775c3c
	goto loc_82775C3C;
loc_82775B50:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,13016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82775b78
	if (!ctx.cr6.eq) goto loc_82775B78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82775c60
	ctx.lr = 0x82775B74;
	sub_82775C60(ctx, base);
	// b 0x82775b94
	goto loc_82775B94;
loc_82775B78:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82775B94:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a4efb0
	ctx.lr = 0x82775BA4;
	sub_82A4EFB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82a45878
	ctx.lr = 0x82775BB4;
	sub_82A45878(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a4efb0
	ctx.lr = 0x82775BC4;
	sub_82A4EFB0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82332d50
	ctx.lr = 0x82775BE8;
	sub_82332D50(ctx, base);
	// lwz r11,120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82775c04
	if (ctx.cr0.eq) goto loc_82775C04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82a4ea80
	ctx.lr = 0x82775C04;
	sub_82A4EA80(ctx, base);
loc_82775C04:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lwz r30,136(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r31,r11,-12168
	ctx.r31.s64 = ctx.r11.s64 + -12168;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e74c
	ctx.lr = 0x82775C18;
	sub_8312E74C(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8312e73c
	ctx.lr = 0x82775C3C;
	sub_8312E73C(ctx, base);
loc_82775C3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82775C48"))) PPC_WEAK_FUNC(sub_82775C48);
PPC_FUNC_IMPL(__imp__sub_82775C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82775C60"))) PPC_WEAK_FUNC(sub_82775C60);
PPC_FUNC_IMPL(__imp__sub_82775C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x828223f0
	ctx.lr = 0x82775C80;
	sub_828223F0(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13016);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775CA0;
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

__attribute__((alias("__imp__sub_82775CB8"))) PPC_WEAK_FUNC(sub_82775CB8);
PPC_FUNC_IMPL(__imp__sub_82775CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82775ce8
	if (!ctx.cr6.eq) goto loc_82775CE8;
	// bl 0x828223f0
	ctx.lr = 0x82775CE4;
	sub_828223F0(ctx, base);
	// lwz r3,13016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13016);
loc_82775CE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775CFC;
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

__attribute__((alias("__imp__sub_82775D18"))) PPC_WEAK_FUNC(sub_82775D18);
PPC_FUNC_IMPL(__imp__sub_82775D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82775D20;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r10,10896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82775d9c
	if (ctx.cr6.eq) goto loc_82775D9C;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r10,10892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10892);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82775d9c
	if (!ctx.cr6.eq) goto loc_82775D9C;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r10,10900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10900);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82775d9c
	if (ctx.cr6.eq) goto loc_82775D9C;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// stw r10,10896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10896, ctx.r10.u32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,17260(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17260);
	// lwz r3,17264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17264);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r4,r11,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// bl 0x82a46038
	ctx.lr = 0x82775D8C;
	sub_82A46038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82775d9c
	if (!ctx.cr0.eq) goto loc_82775D9C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,10892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10892, ctx.r11.u32);
loc_82775D9C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x827701d0
	ctx.lr = 0x82775DA4;
	sub_827701D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// clrlwi. r9,r25,31
	ctx.r9.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// addi r21,r11,6808
	ctx.r21.s64 = ctx.r11.s64 + 6808;
	// addi r28,r10,6280
	ctx.r28.s64 = ctx.r10.s64 + 6280;
	// beq 0x82775ff8
	if (ctx.cr0.eq) goto loc_82775FF8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stb r11,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r11.u8);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82775DDC:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r20,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r20.u8);
	// addi r11,r28,144
	ctx.r11.s64 = ctx.r28.s64 + 144;
	// li r8,16
	ctx.r8.s64 = 16;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r28,14
	ctx.r11.s64 = ctx.r28.s64 + 14;
	// li r6,-1
	ctx.r6.s64 = -1;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r20,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r20.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a45b58
	ctx.lr = 0x82775E18;
	sub_82A45B58(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82775e88
	if (ctx.cr6.eq) goto loc_82775E88;
	// lwz r11,10876(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10876);
	// slw r10,r24,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r31.u8 & 0x3F));
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82775e88
	if (ctx.cr6.eq) goto loc_82775E88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46508
	ctx.lr = 0x82775E4C;
	sub_82A46508(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a46238
	ctx.lr = 0x82775E5C;
	sub_82A46238(ctx, base);
	// stb r20,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r20.u8);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a45b58
	ctx.lr = 0x82775E7C;
	sub_82A45B58(ctx, base);
	// lbz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,12(r28)
	PPC_STORE_U8(ctx.r28.u32 + 12, ctx.r11.u8);
loc_82775E88:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82775ddc
	if (ctx.cr6.lt) goto loc_82775DDC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x827738d0
	ctx.lr = 0x82775EA0;
	sub_827738D0(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82775ed0
	if (ctx.cr6.eq) goto loc_82775ED0;
	// lwz r9,10876(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 10876);
	// slw r10,r24,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82775f7c
	if (!ctx.cr6.eq) goto loc_82775F7C;
loc_82775ED0:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775EE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82775f78
	if (ctx.cr6.eq) goto loc_82775F78;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,17288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17288);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82775f68
	if (!ctx.cr6.eq) goto loc_82775F68;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// stw r10,10828(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10828, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82775f24
	if (ctx.cr6.eq) goto loc_82775F24;
	// stw r24,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r24.u32);
loc_82775F24:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775F3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276aed8
	ctx.lr = 0x82775F44;
	sub_8276AED8(ctx, base);
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// bl 0x82828928
	ctx.lr = 0x82775F4C;
	sub_82828928(ctx, base);
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82775F64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82775f78
	goto loc_82775F78;
loc_82775F68:
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8276e958
	ctx.lr = 0x82775F78;
	sub_8276E958(ctx, base);
loc_82775F78:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
loc_82775F7C:
	// lwz r9,548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82775ff8
	if (ctx.cr6.eq) goto loc_82775FF8;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r10,10884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10884);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82775ff8
	if (ctx.cr6.eq) goto loc_82775FF8;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82775ff8
	if (!ctx.cr6.eq) goto loc_82775FF8;
	// lwz r10,520(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82775ff8
	if (!ctx.cr6.eq) goto loc_82775FF8;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82775ff8
	if (ctx.cr6.eq) goto loc_82775FF8;
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82775ff8
	if (ctx.cr6.eq) goto loc_82775FF8;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82775ff8
	if (ctx.cr6.lt) goto loc_82775FF8;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r11,10852(r23)
	PPC_STORE_U32(ctx.r23.u32 + 10852, ctx.r11.u32);
	// stw r10,10796(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10796, ctx.r10.u32);
loc_82775FF8:
	// rlwinm. r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8277601c
	if (ctx.cr0.eq) goto loc_8277601C;
loc_82776000:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d17738
	ctx.lr = 0x82776008;
	sub_82D17738(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82776000
	if (ctx.cr0.eq) goto loc_82776000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d17698
	ctx.lr = 0x8277601C;
	sub_82D17698(ctx, base);
loc_8277601C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10880);
	// lwz r10,10872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10872);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82776044
	if (ctx.cr6.lt) goto loc_82776044;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r10,17256(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17256);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277605c
	if (!ctx.cr6.gt) goto loc_8277605C;
loc_82776044:
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82776054
	if (!ctx.cr6.eq) goto loc_82776054;
	// bl 0x82777268
	ctx.lr = 0x82776054;
	sub_82777268(ctx, base);
loc_82776054:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x827761d0
	goto loc_827761D0;
loc_8277605C:
	// bl 0x8276a708
	ctx.lr = 0x82776060;
	sub_8276A708(ctx, base);
	// lwz r11,10852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8277608c
	if (ctx.cr6.eq) goto loc_8277608C;
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x82776080
	if (ctx.cr6.eq) goto loc_82776080;
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// bne cr6,0x8277608c
	if (!ctx.cr6.eq) goto loc_8277608C;
loc_82776080:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r11,10852(r23)
	PPC_STORE_U32(ctx.r23.u32 + 10852, ctx.r11.u32);
	// bl 0x827782a8
	ctx.lr = 0x8277608C;
	sub_827782A8(ctx, base);
loc_8277608C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82773b70
	ctx.lr = 0x82776094;
	sub_82773B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x827760b4
	if (ctx.cr0.eq) goto loc_827760B4;
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// beq cr6,0x827760b0
	if (ctx.cr6.eq) goto loc_827760B0;
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// bne cr6,0x827760b4
	if (!ctx.cr6.eq) goto loc_827760B4;
loc_827760B0:
	// bl 0x8276d9b0
	ctx.lr = 0x827760B4;
	sub_8276D9B0(ctx, base);
loc_827760B4:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827760CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// stw r3,252(r28)
	PPC_STORE_U32(ctx.r28.u32 + 252, ctx.r3.u32);
	// cmpwi cr6,r11,4097
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4097, ctx.xer);
	// bgt cr6,0x8277618c
	if (ctx.cr6.gt) goto loc_8277618C;
	// beq cr6,0x82776184
	if (ctx.cr6.eq) goto loc_82776184;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8277617c
	if (ctx.cr6.lt) goto loc_8277617C;
	// beq cr6,0x82776174
	if (ctx.cr6.eq) goto loc_82776174;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8277616c
	if (ctx.cr6.lt) goto loc_8277616C;
	// beq cr6,0x82776164
	if (ctx.cr6.eq) goto loc_82776164;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82776114
	if (ctx.cr6.lt) goto loc_82776114;
	// beq cr6,0x8277610c
	if (ctx.cr6.eq) goto loc_8277610C;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// b 0x827761c0
	goto loc_827761C0;
loc_8277610C:
	// bl 0x82777268
	ctx.lr = 0x82776110;
	sub_82777268(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776114:
	// bl 0x8276b788
	ctx.lr = 0x82776118;
	sub_8276B788(ctx, base);
	// bl 0x82a6f310
	ctx.lr = 0x8277611C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10816);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x827761cc
	if (!ctx.cr6.gt) goto loc_827761CC;
	// lwz r11,10824(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10824);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827761cc
	if (!ctx.cr6.eq) goto loc_827761CC;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776158;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8276aed8
	ctx.lr = 0x82776160;
	sub_8276AED8(ctx, base);
	// b 0x827761cc
	goto loc_827761CC;
loc_82776164:
	// bl 0x82776af8
	ctx.lr = 0x82776168;
	sub_82776AF8(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_8277616C:
	// bl 0x82776530
	ctx.lr = 0x82776170;
	sub_82776530(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776174:
	// bl 0x82776d20
	ctx.lr = 0x82776178;
	sub_82776D20(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_8277617C:
	// bl 0x82776268
	ctx.lr = 0x82776180;
	sub_82776268(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776184:
	// bl 0x827770d0
	ctx.lr = 0x82776188;
	sub_827770D0(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_8277618C:
	// cmpwi cr6,r11,4098
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4098, ctx.xer);
	// beq cr6,0x827761c4
	if (ctx.cr6.eq) goto loc_827761C4;
	// cmpwi cr6,r11,4099
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4099, ctx.xer);
	// beq cr6,0x82776260
	if (ctx.cr6.eq) goto loc_82776260;
	// cmpwi cr6,r11,4100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4100, ctx.xer);
	// beq cr6,0x82776258
	if (ctx.cr6.eq) goto loc_82776258;
	// cmpwi cr6,r11,4101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4101, ctx.xer);
	// beq cr6,0x82776250
	if (ctx.cr6.eq) goto loc_82776250;
	// cmpwi cr6,r11,4102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4102, ctx.xer);
	// beq cr6,0x82776248
	if (ctx.cr6.eq) goto loc_82776248;
	// cmpwi cr6,r11,4103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4103, ctx.xer);
	// beq cr6,0x827761dc
	if (ctx.cr6.eq) goto loc_827761DC;
	// cmpwi cr6,r11,4104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4104, ctx.xer);
loc_827761C0:
	// bne cr6,0x827761cc
	if (!ctx.cr6.eq) goto loc_827761CC;
loc_827761C4:
	// bl 0x82776f08
	ctx.lr = 0x827761C8;
	sub_82776F08(ctx, base);
loc_827761C8:
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_827761CC:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_827761D0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
loc_827761DC:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r31,r11,9444
	ctx.r31.s64 = ctx.r11.s64 + 9444;
	// lwz r11,9444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9444);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776228
	if (ctx.cr6.eq) goto loc_82776228;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// bl 0x82a46558
	ctx.lr = 0x82776204;
	sub_82A46558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a6ed60
	ctx.lr = 0x82776210;
	sub_82A6ED60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82776240
	if (!ctx.cr0.lt) goto loc_82776240;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82776240
	if (!ctx.cr6.eq) goto loc_82776240;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82776240
	goto loc_82776240;
loc_82776228:
	// bl 0x82a6f310
	ctx.lr = 0x8277622C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x827761cc
	if (!ctx.cr6.gt) goto loc_827761CC;
loc_82776240:
	// bl 0x827771c8
	ctx.lr = 0x82776244;
	sub_827771C8(ctx, base);
	// b 0x827761cc
	goto loc_827761CC;
loc_82776248:
	// bl 0x827780f0
	ctx.lr = 0x8277624C;
	sub_827780F0(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776250:
	// bl 0x827781e8
	ctx.lr = 0x82776254;
	sub_827781E8(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776258:
	// bl 0x82777af8
	ctx.lr = 0x8277625C;
	sub_82777AF8(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
loc_82776260:
	// bl 0x82777a38
	ctx.lr = 0x82776264;
	sub_82777A38(ctx, base);
	// b 0x827761c8
	goto loc_827761C8;
}

__attribute__((alias("__imp__sub_82776268"))) PPC_WEAK_FUNC(sub_82776268);
PPC_FUNC_IMPL(__imp__sub_82776268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8276b788
	ctx.lr = 0x82776280;
	sub_8276B788(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776514
	if (ctx.cr6.eq) goto loc_82776514;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9444);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776514
	if (ctx.cr6.eq) goto loc_82776514;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9416);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776514
	if (ctx.cr6.eq) goto loc_82776514;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,10828(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10828);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x827763a4
	if (ctx.cr6.eq) goto loc_827763A4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82776514
	if (!ctx.cr6.eq) goto loc_82776514;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,10828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10828, ctx.r10.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82776338
	if (ctx.cr6.eq) goto loc_82776338;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,10884(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10884);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82776338
	if (ctx.cr6.eq) goto loc_82776338;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82776334
	if (!ctx.cr6.eq) goto loc_82776334;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82776408
	goto loc_82776408;
loc_82776334:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82776338:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277634C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82776384
	if (!ctx.cr6.eq) goto loc_82776384;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x82776514
	goto loc_82776514;
loc_82776384:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r30,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r30.u32);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827763A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82776514
	goto loc_82776514;
loc_827763A4:
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r10,10828(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10828, ctx.r10.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82776414
	if (ctx.cr6.eq) goto loc_82776414;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,10884(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10884);
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82776414
	if (ctx.cr6.eq) goto loc_82776414;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82776410
	if (!ctx.cr6.eq) goto loc_82776410;
loc_82776408:
	// bl 0x8276aed8
	ctx.lr = 0x8277640C;
	sub_8276AED8(ctx, base);
	// b 0x82776514
	goto loc_82776514;
loc_82776410:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
loc_82776414:
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x827764c4
	if (!ctx.cr6.eq) goto loc_827764C4;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277644C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827764a0
	if (!ctx.cr6.eq) goto loc_827764A0;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82776514
	if (ctx.cr6.lt) goto loc_82776514;
loc_827764A0:
	// lwz r3,916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827764B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x82828928
	ctx.lr = 0x827764C0;
	sub_82828928(ctx, base);
	// b 0x827764fc
	goto loc_827764FC;
loc_827764C4:
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r30,284(r10)
	PPC_STORE_U32(ctx.r10.u32 + 284, ctx.r30.u32);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827764E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827764FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827764FC:
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82776514:
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

__attribute__((alias("__imp__sub_82776530"))) PPC_WEAK_FUNC(sub_82776530);
PPC_FUNC_IMPL(__imp__sub_82776530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82776538;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x827765ac
	if (!ctx.cr6.eq) goto loc_827765AC;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,10840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10840, ctx.r11.u32);
	// bl 0x82a6f310
	ctx.lr = 0x82776564;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x82776854
	if (!ctx.cr6.gt) goto loc_82776854;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r24,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// b 0x8277684c
	goto loc_8277684C;
loc_827765AC:
	// bl 0x82a6ed60
	ctx.lr = 0x827765B0;
	sub_82A6ED60(ctx, base);
	// lis r22,-31949
	ctx.r22.s64 = -2093809664;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r29,10800(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10800);
	// blt 0x827765d4
	if (ctx.cr0.lt) goto loc_827765D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x827765d8
	if (ctx.cr6.gt) goto loc_827765D8;
loc_827765D4:
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
loc_827765D8:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10840(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776830
	if (!ctx.cr6.eq) goto loc_82776830;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r11,10840(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10840, ctx.r11.u32);
	// beq cr6,0x82776614
	if (ctx.cr6.eq) goto loc_82776614;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x82776600;
	sub_82333900(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r29,10800(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10800);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r3,-7188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7188, ctx.r3.u32);
loc_82776614:
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r30,13024(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// beq cr6,0x82776644
	if (ctx.cr6.eq) goto loc_82776644;
	// lwz r10,912(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,84(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// ble cr6,0x82776644
	if (!ctx.cr6.gt) goto loc_82776644;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82776644:
	// lwz r11,912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// beq cr6,0x82776818
	if (ctx.cr6.eq) goto loc_82776818;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_82776664:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,92
	ctx.r5.s64 = 92;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82a4ea80
	ctx.lr = 0x82776678;
	sub_82A4EA80(ctx, base);
	// lwz r11,912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stwx r28,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r28.u32);
	// stw r24,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r24.u32);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827767a4
	if (ctx.cr6.eq) goto loc_827767A4;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addi r30,r10,16
	ctx.r30.s64 = ctx.r10.s64 + 16;
loc_827766A4:
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// ori r10,r10,33033
	ctx.r10.u64 = ctx.r10.u64 | 33033;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827766d8
	if (!ctx.cr6.eq) goto loc_827766D8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,34
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 34, ctx.xer);
	// ble cr6,0x827766c8
	if (!ctx.cr6.gt) goto loc_827766C8;
	// li r5,34
	ctx.r5.s64 = 34;
loc_827766C8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a45878
	ctx.lr = 0x827766D4;
	sub_82A45878(ctx, base);
	// b 0x82776790
	goto loc_82776790;
loc_827766D8:
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// ori r10,r10,33031
	ctx.r10.u64 = ctx.r10.u64 | 33031;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x827766f4
	if (!ctx.cr6.eq) goto loc_827766F4;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// b 0x82776790
	goto loc_82776790;
loc_827766F4:
	// lbz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82776740
	if (!ctx.cr6.eq) goto loc_82776740;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x82776784
	goto loc_82776784;
loc_82776740:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82776790
	if (!ctx.cr6.eq) goto loc_82776790;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
loc_82776784:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82776790:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x827766a4
	if (!ctx.cr0.eq) goto loc_827766A4;
	// lwz r30,13024(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 13024);
	// lwz r29,10800(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 10800);
loc_827767A4:
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82776804
	if (ctx.cr6.eq) goto loc_82776804;
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
loc_827767B4:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r24,56(r9)
	PPC_STORE_U32(ctx.r9.u32 + 56, ctx.r24.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r8,60(r9)
	PPC_STORE_U32(ctx.r9.u32 + 60, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bne 0x827767b4
	if (!ctx.cr0.eq) goto loc_827767B4;
loc_82776804:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,92
	ctx.r27.s64 = ctx.r27.s64 + 92;
	// addi r26,r26,392
	ctx.r26.s64 = ctx.r26.s64 + 392;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82776664
	if (ctx.cr6.lt) goto loc_82776664;
loc_82776818:
	// lwz r3,912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 912);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776830;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82776830:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82776840
	if (ctx.cr6.eq) goto loc_82776840;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82776850
	goto loc_82776850;
loc_82776840:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r11,10828(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10828, ctx.r11.u32);
loc_8277684C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82776850:
	// bl 0x8276aed8
	ctx.lr = 0x82776854;
	sub_8276AED8(ctx, base);
loc_82776854:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776860"))) PPC_WEAK_FUNC(sub_82776860);
PPC_FUNC_IMPL(__imp__sub_82776860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82776868;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lis r28,-31954
	ctx.r28.s64 = -2094137344;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,13024(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r11,9736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,548(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// beq cr6,0x82776ab8
	if (ctx.cr6.eq) goto loc_82776AB8;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,452(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827768a8
	if (!ctx.cr6.eq) goto loc_827768A8;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_827768A8:
	// bl 0x824c1308
	ctx.lr = 0x827768AC;
	sub_824C1308(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r27,6
	ctx.r27.s64 = 6;
	// lwz r3,1316(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// subfc r11,r27,r23
	ctx.xer.ca = ctx.r23.u32 >= ctx.r27.u32;
	ctx.r11.s64 = ctx.r23.s64 - ctx.r27.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r11,31
	ctx.r29.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82438738
	ctx.lr = 0x827768CC;
	sub_82438738(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827768e4
	if (ctx.cr0.eq) goto loc_827768E4;
	// lwz r11,732(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x827768e4
	if (!ctx.cr6.eq) goto loc_827768E4;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_827768E4:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// slw r10,r22,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r11,10884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10884);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r11,1356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,1348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,1392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,9736(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 9736);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1020
	ctx.r4.s64 = 1020;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277696C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82776aec
	if (!ctx.cr0.eq) goto loc_82776AEC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82776984
	if (ctx.cr6.eq) goto loc_82776984;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8277698c
	if (!ctx.cr6.eq) goto loc_8277698C;
loc_82776984:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
loc_8277698C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82776ae8
	if (!ctx.cr6.eq) goto loc_82776AE8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r9,420(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r9,480(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 480);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r9,416(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r9,428(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r10,464(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82776aec
	if (!ctx.cr6.eq) goto loc_82776AEC;
	// lwz r10,1316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// stw r27,432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 432, ctx.r27.u32);
	// addi r3,r10,108
	ctx.r3.s64 = ctx.r10.s64 + 108;
	// lwz r9,128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r25,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r25.u32);
	// beq cr6,0x82776a10
	if (ctx.cr6.eq) goto loc_82776A10;
	// stw r25,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82332c38
	ctx.lr = 0x82776A0C;
	sub_82332C38(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
loc_82776A10:
	// lwz r10,1316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// addi r31,r10,132
	ctx.r31.s64 = ctx.r10.s64 + 132;
	// lwz r10,148(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82776a50
	if (!ctx.cr6.gt) goto loc_82776A50;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82776A2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82333960
	ctx.lr = 0x82776A38;
	sub_82333960(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82776a2c
	if (ctx.cr6.lt) goto loc_82776A2C;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
loc_82776A50:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r25,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82776a78
	if (ctx.cr6.eq) goto loc_82776A78;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82776A74;
	sub_82332C38(ctx, base);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
loc_82776A78:
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 920, ctx.r22.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776A98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82776aec
	goto loc_82776AEC;
loc_82776AB8:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r22,1
	ctx.r22.s64 = 1;
	// slw r10,r22,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r11,10884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10884);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82776aec
	if (ctx.cr6.eq) goto loc_82776AEC;
loc_82776AE8:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82776AEC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776AF8"))) PPC_WEAK_FUNC(sub_82776AF8);
PPC_FUNC_IMPL(__imp__sub_82776AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82776B00;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776d10
	if (ctx.cr6.eq) goto loc_82776D10;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9444(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9444);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776d10
	if (ctx.cr6.eq) goto loc_82776D10;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9416);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82776d10
	if (ctx.cr6.eq) goto loc_82776D10;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,-31956
	ctx.r26.s64 = -2094268416;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// lwz r11,10828(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10828);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82776c88
	if (ctx.cr6.eq) goto loc_82776C88;
	// lwz r11,-7188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82776c88
	if (ctx.cr6.eq) goto loc_82776C88;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82776b70
	if (!ctx.cr6.eq) goto loc_82776B70;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// b 0x82776bd8
	goto loc_82776BD8;
loc_82776B70:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82776c88
	if (ctx.cr6.eq) goto loc_82776C88;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82776c88
	if (ctx.cr0.eq) goto loc_82776C88;
	// lwz r10,13024(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mulli r8,r31,392
	ctx.r8.s64 = ctx.r31.s64 * 392;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,912(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	// lhz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 20);
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r8,r10,376
	ctx.r8.s64 = ctx.r10.s64 + 376;
	// sth r7,376(r10)
	PPC_STORE_U16(ctx.r10.u32 + 376, ctx.r7.u16);
	// lhz r8,22(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 22);
	// sth r8,378(r10)
	PPC_STORE_U16(ctx.r10.u32 + 378, ctx.r8.u16);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// stw r8,384(r10)
	PPC_STORE_U32(ctx.r10.u32 + 384, ctx.r8.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, ctx.r9.u32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82d17728
	ctx.lr = 0x82776BCC;
	sub_82D17728(ctx, base);
	// lwz r11,-7188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7188);
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// stw r29,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r29.u32);
loc_82776BD8:
	// lwz r9,13024(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r9,912(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	// lwz r9,92(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82776c68
	if (!ctx.cr6.lt) goto loc_82776C68;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r30,r10,92
	ctx.r30.s64 = ctx.r10.s64 * 92;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r31,10800(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10800);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r28,r30,r28
	ctx.r28.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// bl 0x82d176c8
	ctx.lr = 0x82776C64;
	sub_82D176C8(ctx, base);
	// b 0x82776c88
	goto loc_82776C88;
loc_82776C68:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82776C70;
	sub_82332DB8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-7188(r26)
	PPC_STORE_U32(ctx.r26.u32 + -7188, ctx.r11.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_82776C88:
	// li r30,4
	ctx.r30.s64 = 4;
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
loc_82776C90:
	// bl 0x82776860
	ctx.lr = 0x82776C94;
	sub_82776860(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82776cd8
	if (!ctx.cr0.eq) goto loc_82776CD8;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,9736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82776d08
	if (ctx.cr6.eq) goto loc_82776D08;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82776d08
	if (!ctx.cr6.eq) goto loc_82776D08;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r11,10828(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10828, ctx.r11.u32);
	// b 0x82776d08
	goto loc_82776D08;
loc_82776CD8:
	// lwz r11,10828(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10828);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82776d08
	if (!ctx.cr6.eq) goto loc_82776D08;
	// lwz r11,-7188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -7188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82776d04
	if (ctx.cr6.eq) goto loc_82776D04;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82776d04
	if (!ctx.cr6.eq) goto loc_82776D04;
	// bl 0x8276ac80
	ctx.lr = 0x82776D00;
	sub_8276AC80(ctx, base);
	// b 0x82776d08
	goto loc_82776D08;
loc_82776D04:
	// bl 0x8276ab68
	ctx.lr = 0x82776D08;
	sub_8276AB68(ctx, base);
loc_82776D08:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82776c90
	if (!ctx.cr0.eq) goto loc_82776C90;
loc_82776D10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776D20"))) PPC_WEAK_FUNC(sub_82776D20);
PPC_FUNC_IMPL(__imp__sub_82776D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82776D28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x82776d64
	if (!ctx.cr6.eq) goto loc_82776D64;
	// bl 0x82a6f310
	ctx.lr = 0x82776D44;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x82776ef8
	if (!ctx.cr6.gt) goto loc_82776EF8;
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82776e4c
	goto loc_82776E4C;
loc_82776D64:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r30,548(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// bl 0x82a6ed60
	ctx.lr = 0x82776D74;
	sub_82A6ED60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82776e48
	if (ctx.cr0.lt) goto loc_82776E48;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82776e48
	if (ctx.cr6.eq) goto loc_82776E48;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82776e48
	if (ctx.cr6.eq) goto loc_82776E48;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r10,r8,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r11,10876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10876);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82776e48
	if (ctx.cr6.eq) goto loc_82776E48;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r29,-31954
	ctx.r29.s64 = -2094137344;
	// lis r6,-31954
	ctx.r6.s64 = -2094137344;
	// lwz r11,10236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10236);
	// addi r4,r29,9200
	ctx.r4.s64 = ctx.r29.s64 + 9200;
	// lwz r10,10232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10232);
	// addi r3,r6,9532
	ctx.r3.s64 = ctx.r6.s64 + 9532;
	// lwz r9,10228(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10228);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r11,9200(r29)
	PPC_STORE_U32(ctx.r29.u32 + 9200, ctx.r11.u32);
	// bl 0x82d176a8
	ctx.lr = 0x82776DFC;
	sub_82D176A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82776e0c
	if (ctx.cr0.eq) goto loc_82776E0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed60
	ctx.lr = 0x82776E0C;
	sub_82A6ED60(ctx, base);
loc_82776E0C:
	// bl 0x8276cbf0
	ctx.lr = 0x82776E10;
	sub_8276CBF0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,6280
	ctx.r3.s64 = ctx.r11.s64 + 6280;
	// bl 0x8276cfe0
	ctx.lr = 0x82776E20;
	sub_8276CFE0(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8276aed8
	ctx.lr = 0x82776E44;
	sub_8276AED8(ctx, base);
	// b 0x82776ef8
	goto loc_82776EF8;
loc_82776E48:
	// li r4,13
	ctx.r4.s64 = 13;
loc_82776E4C:
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276aed8
	ctx.lr = 0x82776E6C;
	sub_8276AED8(ctx, base);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776EA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82776ec0
	if (!ctx.cr6.eq) goto loc_82776EC0;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82776ef8
	if (ctx.cr6.lt) goto loc_82776EF8;
loc_82776EC0:
	// lwz r3,916(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 916);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x82828928
	ctx.lr = 0x82776EE0;
	sub_82828928(ctx, base);
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82776EF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82776EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82776F08"))) PPC_WEAK_FUNC(sub_82776F08);
PPC_FUNC_IMPL(__imp__sub_82776F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82776F10;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x827770c4
	if (ctx.cr6.eq) goto loc_827770C4;
	// bl 0x8276b788
	ctx.lr = 0x82776F28;
	sub_8276B788(ctx, base);
	// bl 0x8276ca78
	ctx.lr = 0x82776F2C;
	sub_8276CA78(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,10804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82776f78
	if (ctx.cr6.eq) goto loc_82776F78;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82776f78
	if (!ctx.cr6.eq) goto loc_82776F78;
	// bl 0x82a6f310
	ctx.lr = 0x82776F50;
	sub_82A6F310(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10856);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// blt cr6,0x82776f74
	if (ctx.cr6.lt) goto loc_82776F74;
	// bl 0x8276e048
	ctx.lr = 0x82776F6C;
	sub_8276E048(ctx, base);
	// stw r31,10856(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10856, ctx.r31.u32);
	// b 0x82776f78
	goto loc_82776F78;
loc_82776F74:
	// bl 0x82777358
	ctx.lr = 0x82776F78;
	sub_82777358(ctx, base);
loc_82776F78:
	// bl 0x827774b8
	ctx.lr = 0x82776F7C;
	sub_827774B8(ctx, base);
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// lwz r8,10824(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10824);
	// cmpwi cr6,r8,4104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4104, ctx.xer);
	// beq cr6,0x827770c4
	if (ctx.cr6.eq) goto loc_827770C4;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r9,10804(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10804);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// lis r26,-31963
	ctx.r26.s64 = -2094727168;
	// lwz r11,10828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10828);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82776FB4:
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x82777050
	if (ctx.cr6.eq) goto loc_82777050;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,10876(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 10876);
	// slw r7,r7,r24
	ctx.r7.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r24.u8 & 0x3F));
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82777050
	if (ctx.cr6.eq) goto loc_82777050;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82776ff0
	if (ctx.cr6.eq) goto loc_82776FF0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82777050
	if (!ctx.cr6.eq) goto loc_82777050;
loc_82776FF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,4096
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4096, ctx.xer);
	// stw r11,10828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10828, ctx.r11.u32);
	// bne cr6,0x82777050
	if (!ctx.cr6.eq) goto loc_82777050;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82777050
	if (ctx.cr6.eq) goto loc_82777050;
	// lwz r7,17296(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 17296);
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82777050
	if (!ctx.cr6.eq) goto loc_82777050;
	// lwz r7,17276(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17276);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x8277703c
	if (ctx.cr6.eq) goto loc_8277703C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82777050
	if (ctx.cr6.eq) goto loc_82777050;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r7,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 8;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// b 0x82777050
	goto loc_82777050;
loc_8277703C:
	// bl 0x8276d0a8
	ctx.lr = 0x82777040;
	sub_8276D0A8(ctx, base);
	// lwz r9,10804(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10804);
	// lwz r8,10824(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10824);
	// lwz r11,10828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10828);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82777050:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x82776fb4
	if (ctx.cr6.lt) goto loc_82776FB4;
	// cmpwi cr6,r8,4096
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4096, ctx.xer);
	// bne cr6,0x827770c4
	if (!ctx.cr6.eq) goto loc_827770C4;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10848(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827770c4
	if (ctx.cr6.eq) goto loc_827770C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,10848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10848, ctx.r11.u32);
	// bne cr6,0x827770bc
	if (!ctx.cr6.eq) goto loc_827770BC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x827770c4
	if (ctx.cr6.eq) goto loc_827770C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r11,10788(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10788, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827770B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827770c4
	goto loc_827770C4;
loc_827770BC:
	// li r3,4097
	ctx.r3.s64 = 4097;
	// bl 0x8276aed8
	ctx.lr = 0x827770C4;
	sub_8276AED8(ctx, base);
loc_827770C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827770D0"))) PPC_WEAK_FUNC(sub_827770D0);
PPC_FUNC_IMPL(__imp__sub_827770D0) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8277716c
	if (ctx.cr6.eq) goto loc_8277716C;
	// bl 0x82a6ed60
	ctx.lr = 0x827770F8;
	sub_82A6ED60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,4098
	ctx.r3.s64 = 4098;
	// blt 0x82777160
	if (ctx.cr0.lt) goto loc_82777160;
	// bl 0x8276aed8
	ctx.lr = 0x82777108;
	sub_8276AED8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777128;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827771ac
	if (!ctx.cr6.eq) goto loc_827771AC;
	// lwz r3,13024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// bl 0x82828c40
	ctx.lr = 0x8277715C;
	sub_82828C40(ctx, base);
	// b 0x827771ac
	goto loc_827771AC;
loc_82777160:
	// bl 0x8276aed8
	ctx.lr = 0x82777164;
	sub_8276AED8(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82777190
	goto loc_82777190;
loc_8277716C:
	// bl 0x82a6f310
	ctx.lr = 0x82777170;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x827771ac
	if (!ctx.cr6.gt) goto loc_827771AC;
	// li r3,4098
	ctx.r3.s64 = 4098;
	// bl 0x8276aed8
	ctx.lr = 0x8277718C;
	sub_8276AED8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
loc_82777190:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827771AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827771AC:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_827771C8"))) PPC_WEAK_FUNC(sub_827771C8);
PPC_FUNC_IMPL(__imp__sub_827771C8) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82777248
	if (!ctx.cr6.eq) goto loc_82777248;
	// li r3,4104
	ctx.r3.s64 = 4104;
	// bl 0x8276aed8
	ctx.lr = 0x827771F0;
	sub_8276AED8(ctx, base);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277720C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82777234
	if (!ctx.cr6.eq) goto loc_82777234;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82777250
	goto loc_82777250;
loc_82777234:
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// bne cr6,0x82777250
	if (!ctx.cr6.eq) goto loc_82777250;
loc_82777248:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8276aed8
	ctx.lr = 0x82777250;
	sub_8276AED8(ctx, base);
loc_82777250:
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

__attribute__((alias("__imp__sub_82777268"))) PPC_WEAK_FUNC(sub_82777268);
PPC_FUNC_IMPL(__imp__sub_82777268) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9416(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9416);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82777304
	if (ctx.cr6.eq) goto loc_82777304;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r3,17288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17288);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x827772a4
	if (ctx.cr6.eq) goto loc_827772A4;
	// bl 0x82a6ed08
	ctx.lr = 0x8277729C;
	sub_82A6ED08(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,17288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17288, ctx.r11.u32);
loc_827772A4:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x827772B8;
	sub_82A4EFB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276aed8
	ctx.lr = 0x827772C0;
	sub_8276AED8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827772e0
	if (ctx.cr6.eq) goto loc_827772E0;
	// bl 0x8276a508
	ctx.lr = 0x827772D4;
	sub_8276A508(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8276aed8
	ctx.lr = 0x827772DC;
	sub_8276AED8(ctx, base);
	// b 0x8277733c
	goto loc_8277733C;
loc_827772E0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8277733c
	goto loc_8277733C;
loc_82777304:
	// bl 0x82a6f310
	ctx.lr = 0x82777308;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x8277733c
	if (!ctx.cr6.gt) goto loc_8277733C;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r11,9532
	ctx.r3.s64 = ctx.r11.s64 + 9532;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a4efb0
	ctx.lr = 0x82777330;
	sub_82A4EFB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8276aed8
	ctx.lr = 0x82777338;
	sub_8276AED8(ctx, base);
	// bl 0x8276a508
	ctx.lr = 0x8277733C;
	sub_8276A508(ctx, base);
loc_8277733C:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82777358"))) PPC_WEAK_FUNC(sub_82777358);
PPC_FUNC_IMPL(__imp__sub_82777358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82777360;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r11,9412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827773c8
	if (ctx.cr6.eq) goto loc_827773C8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x82777384;
	sub_82A4EA80(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827773c8
	if (ctx.cr0.eq) goto loc_827773C8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lhz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r6,912(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// sth r10,160(r6)
	PPC_STORE_U16(ctx.r6.u32 + 160, ctx.r10.u16);
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// sth r9,162(r10)
	PPC_STORE_U16(ctx.r10.u32 + 162, ctx.r9.u16);
	// lwz r10,912(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r8,164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 164, ctx.r8.u32);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r7,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r7.u32);
loc_827773C8:
	// lis r26,-31954
	ctx.r26.s64 = -2094137344;
	// lwz r9,9408(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9408);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827774b0
	if (ctx.cr6.eq) goto loc_827774B0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827774b0
	if (!ctx.cr6.eq) goto loc_827774B0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82777494
	if (!ctx.cr6.gt) goto loc_82777494;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r28,r11,9376
	ctx.r28.s64 = ctx.r11.s64 + 9376;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82777410:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8277741c
	if (!ctx.cr6.gt) goto loc_8277741C;
	// twi 31,r0,22
loc_8277741C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82777420:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8277742c
	if (!ctx.cr6.gt) goto loc_8277742C;
	// twi 31,r0,22
loc_8277742C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8277747c
	if (ctx.cr6.eq) goto loc_8277747C;
	// blt cr6,0x8277743c
	if (ctx.cr6.lt) goto loc_8277743C;
	// twi 31,r0,22
loc_8277743C:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bne cr6,0x82777468
	if (!ctx.cr6.eq) goto loc_82777468;
	// add r4,r29,r9
	ctx.r4.u64 = ctx.r29.u64 + ctx.r9.u64;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8277745C;
	sub_82A4EA80(ctx, base);
	// lwz r9,9408(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9408);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82777468:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82777474
	if (ctx.cr6.lt) goto loc_82777474;
	// twi 31,r0,22
loc_82777474:
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x82777420
	goto loc_82777420;
loc_8277747C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r27,r8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82777410
	if (ctx.cr6.lt) goto loc_82777410;
loc_82777494:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,10860(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827774b0
	if (!ctx.cr6.eq) goto loc_827774B0;
	// bl 0x827778b0
	ctx.lr = 0x827774A8;
	sub_827778B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,10860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10860, ctx.r11.u32);
loc_827774B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827774B8"))) PPC_WEAK_FUNC(sub_827774B8);
PPC_FUNC_IMPL(__imp__sub_827774B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827774C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// addi r30,r11,6280
	ctx.r30.s64 = ctx.r11.s64 + 6280;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,10796(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10796);
	// bl 0x827776d0
	ctx.lr = 0x827774E4;
	sub_827776D0(ctx, base);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,6536
	ctx.r31.s64 = ctx.r11.s64 + 6536;
	// lwz r11,10804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82777518
	if (!ctx.cr6.eq) goto loc_82777518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,10796(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10796);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x827776d0
	ctx.lr = 0x82777514;
	sub_827776D0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
loc_82777518:
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r11,6792
	ctx.r28.s64 = ctx.r11.s64 + 6792;
	// bne 0x8277760c
	if (!ctx.cr0.eq) goto loc_8277760C;
	// lwz r11,10804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277756c
	if (!ctx.cr6.eq) goto loc_8277756C;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8277756C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8277756C:
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82777580
	if (!ctx.cr6.eq) goto loc_82777580;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82777580:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r30,144
	ctx.r9.s64 = ctx.r30.s64 + 144;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	// lwz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// ldx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827775A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827775b4
	if (!ctx.cr6.gt) goto loc_827775B4;
	// twi 31,r0,22
loc_827775B4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_827775B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827775c4
	if (!ctx.cr6.gt) goto loc_827775C4;
	// twi 31,r0,22
loc_827775C4:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82777614
	if (ctx.cr6.eq) goto loc_82777614;
	// blt cr6,0x827775d4
	if (ctx.cr6.lt) goto loc_827775D4;
	// twi 31,r0,22
loc_827775D4:
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// ld r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827775F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82777600
	if (ctx.cr6.lt) goto loc_82777600;
	// twi 31,r0,22
loc_82777600:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x827775b8
	goto loc_827775B8;
loc_8277760C:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
loc_82777614:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82777620
	if (!ctx.cr6.gt) goto loc_82777620;
	// twi 31,r0,22
loc_82777620:
	// mulli r9,r27,88
	ctx.r9.s64 = ctx.r27.s64 * 88;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82777630:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277763c
	if (!ctx.cr6.gt) goto loc_8277763C;
	// twi 31,r0,22
loc_8277763C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82777684
	if (ctx.cr6.eq) goto loc_82777684;
	// blt cr6,0x8277764c
	if (ctx.cr6.lt) goto loc_8277764C;
	// twi 31,r0,22
loc_8277764C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,10796(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10796);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827776d0
	ctx.lr = 0x82777660;
	sub_827776D0(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82777670
	if (ctx.cr6.lt) goto loc_82777670;
	// twi 31,r0,22
loc_82777670:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// b 0x82777630
	goto loc_82777630;
loc_82777684:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827776A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,10796(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 10796);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827776c4
	if (ctx.cr6.eq) goto loc_827776C4;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,10796(r25)
	PPC_STORE_U32(ctx.r25.u32 + 10796, ctx.r11.u32);
	// stw r10,10852(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10852, ctx.r10.u32);
loc_827776C4:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827776D0"))) PPC_WEAK_FUNC(sub_827776D0);
PPC_FUNC_IMPL(__imp__sub_827776D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x827776D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r24,10796(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10796);
	// beq cr6,0x827778a4
	if (ctx.cr6.eq) goto loc_827778A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x827778a4
	if (ctx.cr6.eq) goto loc_827778A4;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r29,548(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82777724
	if (ctx.cr6.eq) goto loc_82777724;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82777728
	if (!ctx.cr6.eq) goto loc_82777728;
loc_82777724:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82777728:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// bl 0x82a4cdf0
	ctx.lr = 0x8277773C;
	sub_82A4CDF0(ctx, base);
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r28.u32);
	// std r11,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// lwz r11,212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 212);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// beq cr6,0x827777c8
	if (ctx.cr6.eq) goto loc_827777C8;
	// stw r25,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r25.u32);
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
	// beq cr6,0x8277787c
	if (ctx.cr6.eq) goto loc_8277787C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r11,10884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10884);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8277787c
	if (ctx.cr6.eq) goto loc_8277787C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,6808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6808);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827777C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827777C0:
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// b 0x8277787c
	goto loc_8277787C;
loc_827777C8:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82777808
	if (!ctx.cr6.gt) goto loc_82777808;
	// lwz r9,148(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// ld r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
loc_827777EC:
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r6,r7
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82777858
	if (ctx.cr6.eq) goto loc_82777858;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x827777ec
	if (ctx.cr6.lt) goto loc_827777EC;
loc_82777808:
	// ld r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// bl 0x8276dd98
	ctx.lr = 0x82777810;
	sub_8276DD98(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
loc_82777814:
	// ld r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8276dd30
	ctx.lr = 0x82777820;
	sub_8276DD30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82777878
	if (!ctx.cr0.eq) goto loc_82777878;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8276dd98
	ctx.lr = 0x82777830;
	sub_8276DD98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82777878
	if (!ctx.cr0.eq) goto loc_82777878;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// ldx r4,r30,r28
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + ctx.r28.u32);
	// lwz r3,6808(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6808);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777854;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827777c0
	goto loc_827777C0;
loc_82777858:
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// add. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82777808
	if (ctx.cr0.eq) goto loc_82777808;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82777808
	if (!ctx.cr6.eq) goto loc_82777808;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x82777814
	goto loc_82777814;
loc_82777878:
	// stw r25,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r25.u32);
loc_8277787C:
	// lhz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 240);
	// sth r11,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r11.u16);
	// lhz r11,242(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 242);
	// sth r11,74(r31)
	PPC_STORE_U16(ctx.r31.u32 + 74, ctx.r11.u16);
	// lwz r11,244(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_827778A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827778B0"))) PPC_WEAK_FUNC(sub_827778B0);
PPC_FUNC_IMPL(__imp__sub_827778B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x827778B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r27,r11,6792
	ctx.r27.s64 = ctx.r11.s64 + 6792;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827778d8
	if (!ctx.cr6.gt) goto loc_827778D8;
	// twi 31,r0,22
loc_827778D8:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_827778DC:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827778e8
	if (!ctx.cr6.gt) goto loc_827778E8;
	// twi 31,r0,22
loc_827778E8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82777a2c
	if (ctx.cr6.eq) goto loc_82777A2C;
	// blt cr6,0x827778f8
	if (ctx.cr6.lt) goto loc_827778F8;
	// twi 31,r0,22
loc_827778F8:
	// lhz r29,240(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// lhz r28,242(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 242);
	// ble cr6,0x8277790c
	if (!ctx.cr6.gt) goto loc_8277790C;
	// twi 31,r0,22
loc_8277790C:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82777910:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8277791c
	if (!ctx.cr6.gt) goto loc_8277791C;
	// twi 31,r0,22
loc_8277791C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82777a18
	if (ctx.cr6.eq) goto loc_82777A18;
	// blt cr6,0x8277792c
	if (ctx.cr6.lt) goto loc_8277792C;
	// twi 31,r0,22
loc_8277792C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r6,128
	ctx.r6.s64 = 128;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// addi r5,r31,14
	ctx.r5.s64 = ctx.r31.s64 + 14;
	// lbz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// li r4,128
	ctx.r4.s64 = 128;
	// stb r11,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r11.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r12,83
	ctx.r12.s64 = 83;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// bl 0x82a4d1f8
	ctx.lr = 0x82777964;
	sub_82A4D1F8(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// bl 0x82a4d1f8
	ctx.lr = 0x82777978;
	sub_82A4D1F8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,176
	ctx.r5.s64 = ctx.r31.s64 + 176;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82a4d1f8
	ctx.lr = 0x8277798C;
	sub_82A4D1F8(ctx, base);
	// addi r4,r31,228
	ctx.r4.s64 = ctx.r31.s64 + 228;
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82a4ea80
	ctx.lr = 0x8277799C;
	sub_82A4EA80(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r5,252(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82a4d1f8
	ctx.lr = 0x827779B0;
	sub_82A4D1F8(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// beq cr6,0x827779e0
	if (ctx.cr6.eq) goto loc_827779E0;
	// lhz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 280);
	// clrlwi r8,r29,16
	ctx.r8.u64 = ctx.r29.u32 & 0xFFFF;
	// lhz r7,282(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 282);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r9,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, ctx.r9.u16);
	// sth r11,282(r1)
	PPC_STORE_U16(ctx.r1.u32 + 282, ctx.r11.u16);
loc_827779E0:
	// lwz r11,248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x827779FC;
	sub_8276B6B0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82777a0c
	if (ctx.cr6.lt) goto loc_82777A0C;
	// twi 31,r0,22
loc_82777A0C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x82777910
	goto loc_82777910;
loc_82777A18:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82777a24
	if (ctx.cr6.lt) goto loc_82777A24;
	// twi 31,r0,22
loc_82777A24:
	// addi r30,r30,256
	ctx.r30.s64 = ctx.r30.s64 + 256;
	// b 0x827778dc
	goto loc_827778DC;
loc_82777A2C:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82777A38"))) PPC_WEAK_FUNC(sub_82777A38);
PPC_FUNC_IMPL(__imp__sub_82777A38) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82777a98
	if (ctx.cr6.eq) goto loc_82777A98;
	// bl 0x82a6ed60
	ctx.lr = 0x82777A5C;
	sub_82A6ED60(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// blt 0x82777a90
	if (ctx.cr0.lt) goto loc_82777A90;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82777ad8
	goto loc_82777AD8;
loc_82777A90:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82777ad8
	goto loc_82777AD8;
loc_82777A98:
	// bl 0x82a6f310
	ctx.lr = 0x82777A9C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x82777ae0
	if (!ctx.cr6.gt) goto loc_82777AE0;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_82777AD8:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82777AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82777AF8"))) PPC_WEAK_FUNC(sub_82777AF8);
PPC_FUNC_IMPL(__imp__sub_82777AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82777B00;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82777fd4
	if (ctx.cr6.eq) goto loc_82777FD4;
	// bl 0x82a6ed60
	ctx.lr = 0x82777B1C;
	sub_82A6ED60(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// blt 0x82777f78
	if (ctx.cr0.lt) goto loc_82777F78;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// lis r26,-31954
	ctx.r26.s64 = -2094137344;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r8,9368(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9368);
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r30,220(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82777ba0
	if (!ctx.cr6.gt) goto loc_82777BA0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82777ba0
	if (ctx.cr6.eq) goto loc_82777BA0;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82777b9c
	if (ctx.cr6.eq) goto loc_82777B9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82777ba0
	goto loc_82777BA0;
loc_82777B9C:
	// bl 0x82332db8
	ctx.lr = 0x82777BA0;
	sub_82332DB8(ctx, base);
loc_82777BA0:
	// lwz r11,9368(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9368);
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// li r25,-1
	ctx.r25.s64 = -1;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// ble cr6,0x82777bcc
	if (!ctx.cr6.gt) goto loc_82777BCC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82777BCC:
	// li r10,-9
	ctx.r10.s64 = -9;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82777be0
	if (!ctx.cr6.gt) goto loc_82777BE0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82777BE0:
	// bl 0x82333900
	ctx.lr = 0x82777BE4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x82777c38
	if (ctx.cr0.eq) goto loc_82777C38;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// blt 0x82777c30
	if (ctx.cr0.lt) goto loc_82777C30;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r8,r8,-8032
	ctx.r8.s64 = ctx.r8.s64 + -8032;
loc_82777C0C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r28,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r28.u64);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// std r28,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r28.u64);
	// stw r28,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// stw r28,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bge 0x82777c0c
	if (!ctx.cr0.lt) goto loc_82777C0C;
loc_82777C30:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82777c3c
	goto loc_82777C3C;
loc_82777C38:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82777C3C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82777f58
	if (!ctx.cr6.gt) goto loc_82777F58;
	// lwz r10,9368(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9368);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82777C5C:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// ldx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r29.u32);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// ld r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_82777CC8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x82777cc8
	if (!ctx.cr0.eq) goto loc_82777CC8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r9,4095
	ctx.r9.s64 = 268369920;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ble cr6,0x82777d20
	if (!ctx.cr6.gt) goto loc_82777D20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82777D20:
	// bl 0x82333900
	ctx.lr = 0x82777D24;
	sub_82333900(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,9368(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 9368);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82777f40
	if (!ctx.cr6.gt) goto loc_82777F40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82777D54:
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r7,56(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lhzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82777edc
	if (ctx.cr6.eq) goto loc_82777EDC;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82777e94
	if (ctx.cr6.eq) goto loc_82777E94;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x82777e4c
	if (ctx.cr6.eq) goto loc_82777E4C;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82777e04
	if (ctx.cr6.eq) goto loc_82777E04;
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// bne cr6,0x82777f20
	if (!ctx.cr6.eq) goto loc_82777F20;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,56(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,56(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
	// b 0x82777f20
	goto loc_82777F20;
loc_82777E04:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,3
	ctx.r7.s64 = 3;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,56(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 + ctx.r7.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,56(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// b 0x82777f20
	goto loc_82777F20;
loc_82777E4C:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,56(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,56(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lfd f0,16(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// stfd f0,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.f0.u64);
	// b 0x82777f20
	goto loc_82777F20;
loc_82777E94:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,2
	ctx.r7.s64 = 2;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,56(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,56(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ld r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// std r8,8(r5)
	PPC_STORE_U64(ctx.r5.u32 + 8, ctx.r8.u64);
	// b 0x82777f20
	goto loc_82777F20;
loc_82777EDC:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,56(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r31,r8
	ctx.r5.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// add r7,r8,r29
	ctx.r7.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lwz r8,56(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,44(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
loc_82777F20:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,52(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82777d54
	if (ctx.cr6.lt) goto loc_82777D54;
loc_82777F40:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82777c5c
	if (ctx.cr6.lt) goto loc_82777C5C;
loc_82777F58:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777F74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82777fb0
	goto loc_82777FB0;
loc_82777F78:
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82777F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13024);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82777FB0:
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r3,17300(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 17300);
	// bl 0x82a6ed08
	ctx.lr = 0x82777FBC;
	sub_82A6ED08(ctx, base);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r11,17300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 17300, ctx.r11.u32);
	// stw r10,9228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 9228, ctx.r10.u32);
	// b 0x82778030
	goto loc_82778030;
loc_82777FD4:
	// bl 0x82a6f310
	ctx.lr = 0x82777FD8;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x82778030
	if (!ctx.cr6.gt) goto loc_82778030;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// lwz r8,912(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// lwz r10,220(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 220);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82778030:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778040"))) PPC_WEAK_FUNC(sub_82778040);
PPC_FUNC_IMPL(__imp__sub_82778040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82778048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827780b4
	if (ctx.cr0.eq) goto loc_827780B4;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r29,r31,-8
	ctx.r29.s64 = ctx.r31.s64 + -8;
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// blt 0x8277809c
	if (ctx.cr0.lt) goto loc_8277809C;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r28,r11,-8032
	ctx.r28.s64 = ctx.r11.s64 + -8032;
loc_8277807C:
	// addi r31,r31,-64
	ctx.r31.s64 = ctx.r31.s64 + -64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778094
	if (ctx.cr6.eq) goto loc_82778094;
	// bl 0x82332db8
	ctx.lr = 0x82778094;
	sub_82332DB8(ctx, base);
loc_82778094:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8277807c
	if (!ctx.cr0.lt) goto loc_8277807C;
loc_8277809C:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827780ac
	if (ctx.cr0.eq) goto loc_827780AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332db8
	ctx.lr = 0x827780AC;
	sub_82332DB8(ctx, base);
loc_827780AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x827780e4
	goto loc_827780E4;
loc_827780B4:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,-8032
	ctx.r11.s64 = ctx.r11.s64 + -8032;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x827780d0
	if (ctx.cr6.eq) goto loc_827780D0;
	// bl 0x82332db8
	ctx.lr = 0x827780D0;
	sub_82332DB8(ctx, base);
loc_827780D0:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827780e0
	if (ctx.cr0.eq) goto loc_827780E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x827780E0;
	sub_82332DB8(ctx, base);
loc_827780E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_827780E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827780F0"))) PPC_WEAK_FUNC(sub_827780F0);
PPC_FUNC_IMPL(__imp__sub_827780F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r30,r11,9500
	ctx.r30.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82778184
	if (ctx.cr6.eq) goto loc_82778184;
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// lwz r3,9216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 9216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778134
	if (ctx.cr6.eq) goto loc_82778134;
	// bl 0x82332db8
	ctx.lr = 0x8277812C;
	sub_82332DB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,9216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9216, ctx.r11.u32);
loc_82778134:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,10832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10832);
	// stw r11,10824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10824, ctx.r11.u32);
	// bl 0x82a6ed60
	ctx.lr = 0x8277814C;
	sub_82A6ED60(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// blt 0x8277817c
	if (ctx.cr0.lt) goto loc_8277817C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8276cbf0
	ctx.lr = 0x82778178;
	sub_8276CBF0(ctx, base);
	// b 0x827781cc
	goto loc_827781CC;
loc_8277817C:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x827781c4
	goto loc_827781C4;
loc_82778184:
	// bl 0x82a6f310
	ctx.lr = 0x82778188;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x827781cc
	if (!ctx.cr6.gt) goto loc_827781CC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_827781C4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827781CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827781CC:
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

__attribute__((alias("__imp__sub_827781E8"))) PPC_WEAK_FUNC(sub_827781E8);
PPC_FUNC_IMPL(__imp__sub_827781E8) {
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
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r3,r11,9500
	ctx.r3.s64 = ctx.r11.s64 + 9500;
	// lwz r11,9500(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9500);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82778248
	if (ctx.cr6.eq) goto loc_82778248;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,10832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10832);
	// stw r11,10824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10824, ctx.r11.u32);
	// bl 0x82a6ed60
	ctx.lr = 0x8277821C;
	sub_82A6ED60(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// blt 0x82778240
	if (ctx.cr0.lt) goto loc_82778240;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82778288
	goto loc_82778288;
loc_82778240:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x82778288
	goto loc_82778288;
loc_82778248:
	// bl 0x82a6f310
	ctx.lr = 0x8277824C;
	sub_82A6F310(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10868);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,5000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5000, ctx.xer);
	// ble cr6,0x82778290
	if (!ctx.cr6.gt) goto loc_82778290;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,10832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10832);
	// lwz r3,912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	// stw r10,10824(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10824, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
loc_82778288:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82778290:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827782A8"))) PPC_WEAK_FUNC(sub_827782A8);
PPC_FUNC_IMPL(__imp__sub_827782A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,9
	ctx.r11.s64 = 9;
	// li r5,301
	ctx.r5.s64 = 301;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// bl 0x82a455d0
	ctx.lr = 0x827782D4;
	sub_82A455D0(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lis r10,-31948
	ctx.r10.s64 = -2093744128;
	// addi r4,r1,83
	ctx.r4.s64 = ctx.r1.s64 + 83;
	// addi r3,r10,6808
	ctx.r3.s64 = ctx.r10.s64 + 6808;
	// ld r11,6280(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 6280);
	// li r12,83
	ctx.r12.s64 = 83;
	// stdx r11,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r11.u64);
	// bl 0x82773cc8
	ctx.lr = 0x827782F4;
	sub_82773CC8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10804);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82778330
	if (!ctx.cr6.eq) goto loc_82778330;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6536
	ctx.r11.s64 = ctx.r11.s64 + 6536;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x82778318;
	sub_8276B6B0(ctx, base);
loc_82778318:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82778330:
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// addi r30,r11,6792
	ctx.r30.s64 = ctx.r11.s64 + 6792;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277834c
	if (!ctx.cr6.gt) goto loc_8277834C;
	// twi 31,r0,22
loc_8277834C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82778350:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8277835c
	if (!ctx.cr6.gt) goto loc_8277835C;
	// twi 31,r0,22
loc_8277835C:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82778318
	if (ctx.cr6.eq) goto loc_82778318;
	// blt cr6,0x8277836c
	if (ctx.cr6.lt) goto loc_8277836C;
	// twi 31,r0,22
loc_8277836C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8276b6b0
	ctx.lr = 0x82778378;
	sub_8276B6B0(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82778388
	if (ctx.cr6.lt) goto loc_82778388;
	// twi 31,r0,22
loc_82778388:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// b 0x82778350
	goto loc_82778350;
}

__attribute__((alias("__imp__sub_82778398"))) PPC_WEAK_FUNC(sub_82778398);
PPC_FUNC_IMPL(__imp__sub_82778398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,23132
	ctx.r3.s64 = ctx.r11.s64 + 23132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827783A8"))) PPC_WEAK_FUNC(sub_827783A8);
PPC_FUNC_IMPL(__imp__sub_827783A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827783e0
	if (ctx.cr6.eq) goto loc_827783E0;
	// bl 0x82778f50
	ctx.lr = 0x827783D0;
	sub_82778F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827783e0
	if (!ctx.cr6.eq) goto loc_827783E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827783ec
	goto loc_827783EC;
loc_827783E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827783EC;
	sub_82333C70(ctx, base);
loc_827783EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778408"))) PPC_WEAK_FUNC(sub_82778408);
PPC_FUNC_IMPL(__imp__sub_82778408) {
	PPC_FUNC_PROLOGUE();
	// b 0x82778f50
	sub_82778F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778410"))) PPC_WEAK_FUNC(sub_82778410);
PPC_FUNC_IMPL(__imp__sub_82778410) {
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
	ctx.lr = 0x8277842C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82778494
	if (ctx.cr0.eq) goto loc_82778494;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23176
	ctx.r9.s64 = ctx.r9.s64 + 23176;
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
	// b 0x82778498
	goto loc_82778498;
loc_82778494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82778498:
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

__attribute__((alias("__imp__sub_827784B0"))) PPC_WEAK_FUNC(sub_827784B0);
PPC_FUNC_IMPL(__imp__sub_827784B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82778f50
	ctx.lr = 0x827784D0;
	sub_82778F50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827784e4
	if (ctx.cr6.eq) goto loc_827784E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827784E4;
	sub_82333B08(ctx, base);
loc_827784E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778500"))) PPC_WEAK_FUNC(sub_82778500);
PPC_FUNC_IMPL(__imp__sub_82778500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8277854c
	if (ctx.cr6.eq) goto loc_8277854C;
	// bl 0x824096c0
	ctx.lr = 0x8277852C;
	sub_824096C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x8277853C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277859c
	if (ctx.cr0.eq) goto loc_8277859C;
	// li r9,27
	ctx.r9.s64 = 27;
	// b 0x8277856c
	goto loc_8277856C;
loc_8277854C:
	// bl 0x824096c0
	ctx.lr = 0x82778550;
	sub_824096C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r31,24(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x82778560;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277859c
	if (ctx.cr0.eq) goto loc_8277859C;
	// li r9,28
	ctx.r9.s64 = 28;
loc_8277856C:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,13160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13160);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x827785a0
	goto loc_827785A0;
loc_8277859C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_827785A0:
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x827785B4;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827785D0"))) PPC_WEAK_FUNC(sub_827785D0);
PPC_FUNC_IMPL(__imp__sub_827785D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,1548
	ctx.r3.s64 = ctx.r11.s64 + 1548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827785E0"))) PPC_WEAK_FUNC(sub_827785E0);
PPC_FUNC_IMPL(__imp__sub_827785E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82778618
	if (ctx.cr6.eq) goto loc_82778618;
	// bl 0x82408eb8
	ctx.lr = 0x82778608;
	sub_82408EB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82778618
	if (!ctx.cr6.eq) goto loc_82778618;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82778624
	goto loc_82778624;
loc_82778618:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338a88
	ctx.lr = 0x82778624;
	sub_82338A88(ctx, base);
loc_82778624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778640"))) PPC_WEAK_FUNC(sub_82778640);
PPC_FUNC_IMPL(__imp__sub_82778640) {
	PPC_FUNC_PROLOGUE();
	// b 0x82408eb8
	sub_82408EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778648"))) PPC_WEAK_FUNC(sub_82778648);
PPC_FUNC_IMPL(__imp__sub_82778648) {
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
	// li r3,456
	ctx.r3.s64 = 456;
	// bl 0x82833108
	ctx.lr = 0x82778668;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x827786f0
	if (ctx.cr0.eq) goto loc_827786F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823393a0
	ctx.lr = 0x8277867C;
	sub_823393A0(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,23280
	ctx.r11.s64 = ctx.r11.s64 + 23280;
	// addi r10,r10,23536
	ctx.r10.s64 = ctx.r10.s64 + 23536;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r30,408
	ctx.r4.s64 = ctx.r30.s64 + 408;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// lwz r11,404(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// stw r11,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x827786B8;
	sub_823339B8(ctx, base);
	// lfs f0,432(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,436(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,444(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,448(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// b 0x827786f4
	goto loc_827786F4;
loc_827786F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827786F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778710"))) PPC_WEAK_FUNC(sub_82778710);
PPC_FUNC_IMPL(__imp__sub_82778710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82408eb8
	ctx.lr = 0x82778730;
	sub_82408EB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82778744
	if (ctx.cr6.eq) goto loc_82778744;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82338858
	ctx.lr = 0x82778744;
	sub_82338858(ctx, base);
loc_82778744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778760"))) PPC_WEAK_FUNC(sub_82778760);
PPC_FUNC_IMPL(__imp__sub_82778760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x827787b0
	ctx.lr = 0x82778780;
	sub_827787B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82778790
	if (ctx.cr0.eq) goto loc_82778790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82778790;
	sub_82332DB8(ctx, base);
loc_82778790:
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

__attribute__((alias("__imp__sub_827787B0"))) PPC_WEAK_FUNC(sub_827787B0);
PPC_FUNC_IMPL(__imp__sub_827787B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x827787B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,23280
	ctx.r11.s64 = ctx.r11.s64 + 23280;
	// addi r10,r10,23536
	ctx.r10.s64 = ctx.r10.s64 + 23536;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bl 0x82778de0
	ctx.lr = 0x827787DC;
	sub_82778DE0(ctx, base);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82778804
	if (ctx.cr6.eq) goto loc_82778804;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82778824
	goto loc_82778824;
loc_82778804:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778820
	if (ctx.cr6.eq) goto loc_82778820;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82778820:
	// stw r27,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r27.u32);
loc_82778824:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82833108
	ctx.lr = 0x8277882C;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// beq 0x827788a8
	if (ctx.cr0.eq) goto loc_827788A8;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82778850
	if (ctx.cr0.eq) goto loc_82778850;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82778854
	goto loc_82778854;
loc_82778850:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82778854:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82778864
	if (ctx.cr0.eq) goto loc_82778864;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82778868
	goto loc_82778868;
loc_82778864:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82778868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,444(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x82833180
	ctx.lr = 0x82778874;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,23176
	ctx.r11.s64 = ctx.r11.s64 + 23176;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// b 0x827788ac
	goto loc_827788AC;
loc_827788A8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_827788AC:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x827788B8;
	sub_82833A30(ctx, base);
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// bl 0x82333960
	ctx.lr = 0x827788C0;
	sub_82333960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bcf90
	ctx.lr = 0x827788C8;
	sub_829BCF90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827788D0"))) PPC_WEAK_FUNC(sub_827788D0);
PPC_FUNC_IMPL(__imp__sub_827788D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82778928
	if (ctx.cr6.eq) goto loc_82778928;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82778924
	if (ctx.cr6.eq) goto loc_82778924;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82778914
	if (ctx.cr6.eq) goto loc_82778914;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82778920
	if (ctx.cr6.eq) goto loc_82778920;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82778910
	if (ctx.cr6.eq) goto loc_82778910;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// blr 
	return;
loc_82778910:
	// b 0x82778de0
	sub_82778DE0(ctx, base);
	return;
loc_82778914:
	// lfs f0,436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 436, temp.u32);
loc_82778920:
	// b 0x82778d38
	sub_82778D38(ctx, base);
	return;
loc_82778924:
	// b 0x82778c28
	sub_82778C28(ctx, base);
	return;
loc_82778928:
	// b 0x82778b70
	sub_82778B70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778930"))) PPC_WEAK_FUNC(sub_82778930);
PPC_FUNC_IMPL(__imp__sub_82778930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82778938;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r26,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r26.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x827789ac
	if (ctx.cr6.eq) goto loc_827789AC;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r11,7312
	ctx.r3.s64 = ctx.r11.s64 + 7312;
	// bl 0x82816528
	ctx.lr = 0x8277896C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82846e98
	ctx.lr = 0x82778980;
	sub_82846E98(ctx, base);
	// lwz r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8233a258
	ctx.lr = 0x82778998;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,408
	ctx.r3.s64 = ctx.r30.s64 + 408;
	// bl 0x82400b48
	ctx.lr = 0x827789A4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x827789AC;
	sub_82333960(ctx, base);
loc_827789AC:
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x827789C0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x82778a44
	if (ctx.cr0.eq) goto loc_82778A44;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827789e4
	if (ctx.cr0.eq) goto loc_827789E4;
	// lwz r28,80(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827789e8
	goto loc_827789E8;
loc_827789E4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_827789E8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827789f8
	if (ctx.cr0.eq) goto loc_827789F8;
	// lwz r29,80(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x827789fc
	goto loc_827789FC;
loc_827789F8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_827789FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,444(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 444);
	// bl 0x82833180
	ctx.lr = 0x82778A08;
	sub_82833180(ctx, base);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r11,r11,23176
	ctx.r11.s64 = ctx.r11.s64 + 23176;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r24,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r24.u32);
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
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82778a48
	goto loc_82778A48;
loc_82778A44:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82778A48:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82778A54;
	sub_82833A30(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82333900
	ctx.lr = 0x82778A5C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82778a94
	if (ctx.cr0.eq) goto loc_82778A94;
	// lwz r11,152(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 152);
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,23588
	ctx.r10.s64 = ctx.r10.s64 + 23588;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x82778a98
	goto loc_82778A98;
loc_82778A94:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82778A98:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8248c5f8
	ctx.lr = 0x82778AA0;
	sub_8248C5F8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778AA8"))) PPC_WEAK_FUNC(sub_82778AA8);
PPC_FUNC_IMPL(__imp__sub_82778AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82778AB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x8286b328
	ctx.lr = 0x82778AC4;
	sub_8286B328(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x82778ACC;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82778b1c
	if (ctx.cr0.eq) goto loc_82778B1C;
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82778aec
	if (ctx.cr6.eq) goto loc_82778AEC;
	// lwz r4,420(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 420);
	// b 0x82778af4
	goto loc_82778AF4;
loc_82778AEC:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82778AF4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82409058
	ctx.lr = 0x82778AFC;
	sub_82409058(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,132(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// bl 0x827796a8
	ctx.lr = 0x82778B14;
	sub_827796A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82778b20
	goto loc_82778B20;
loc_82778B1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82778B20:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82778b44
	if (ctx.cr0.eq) goto loc_82778B44;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82778b44
	if (ctx.cr6.eq) goto loc_82778B44;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778b44
	if (ctx.cr6.eq) goto loc_82778B44;
	// bl 0x82332db8
	ctx.lr = 0x82778B44;
	sub_82332DB8(ctx, base);
loc_82778B44:
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778B50"))) PPC_WEAK_FUNC(sub_82778B50);
PPC_FUNC_IMPL(__imp__sub_82778B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82778b68
	if (ctx.cr6.eq) goto loc_82778B68;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
loc_82778B68:
	// b 0x829bdba0
	sub_829BDBA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778B70"))) PPC_WEAK_FUNC(sub_82778B70);
PPC_FUNC_IMPL(__imp__sub_82778B70) {
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
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82778b98
	if (!ctx.cr6.eq) goto loc_82778B98;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82778B98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82778c0c
	if (ctx.cr6.eq) goto loc_82778C0C;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,72(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82778c08
	if (!ctx.cr6.eq) goto loc_82778C08;
	// lis r11,-32136
	ctx.r11.s64 = -2106064896;
	// lwz r6,396(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r5,r11,-21584
	ctx.r5.s64 = ctx.r11.s64 + -21584;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a6ed50
	ctx.lr = 0x82778BE8;
	sub_82A6ED50(ctx, base);
	// stw r3,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82a48718
	ctx.lr = 0x82778BF4;
	sub_82A48718(ctx, base);
	// li r4,-2
	ctx.r4.s64 = -2;
	// lwz r3,452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// bl 0x82a485c8
	ctx.lr = 0x82778C00;
	sub_82A485C8(ctx, base);
	// lwz r3,452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// bl 0x82a6f5b8
	ctx.lr = 0x82778C08;
	sub_82A6F5B8(ctx, base);
loc_82778C08:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82778C0C:
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82778C28"))) PPC_WEAK_FUNC(sub_82778C28);
PPC_FUNC_IMPL(__imp__sub_82778C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82778C30;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82778d2c
	if (ctx.cr0.eq) goto loc_82778D2C;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82778C5C;
	sub_82333900(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82778cd4
	if (ctx.cr0.eq) goto loc_82778CD4;
	// lwz r29,396(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r28,444(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r27,20(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,96(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x8277aeb8
	ctx.lr = 0x82778CCC;
	sub_8277AEB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82778cd8
	goto loc_82778CD8;
loc_82778CD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82778CD8:
	// stw r4,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r4.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,2428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	// bl 0x82979850
	ctx.lr = 0x82778CF0;
	sub_82979850(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f1,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 432, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// bl 0x82778d38
	ctx.lr = 0x82778D2C;
	sub_82778D38(ctx, base);
loc_82778D2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778D38"))) PPC_WEAK_FUNC(sub_82778D38);
PPC_FUNC_IMPL(__imp__sub_82778D38) {
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
	// lfs f0,436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82a4cf18
	ctx.lr = 0x82778D5C;
	sub_82A4CF18(ctx, base);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,404(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r8,440(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,1444(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1444);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// stw r9,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r9.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82778dc8
	if (ctx.cr0.eq) goto loc_82778DC8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
loc_82778DC8:
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

__attribute__((alias("__imp__sub_82778DE0"))) PPC_WEAK_FUNC(sub_82778DE0);
PPC_FUNC_IMPL(__imp__sub_82778DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82778e40
	if (ctx.cr6.eq) goto loc_82778E40;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r3,2428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2428);
	// bl 0x829798f0
	ctx.lr = 0x82778E1C;
	sub_829798F0(ctx, base);
	// lwz r3,404(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778e3c
	if (ctx.cr6.eq) goto loc_82778E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778E3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82778E3C:
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
loc_82778E40:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82778e68
	if (ctx.cr6.eq) goto loc_82778E68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778E5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// b 0x82778e6c
	goto loc_82778E6C;
loc_82778E68:
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
loc_82778E6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82778E88"))) PPC_WEAK_FUNC(sub_82778E88);
PPC_FUNC_IMPL(__imp__sub_82778E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82778e9c
	if (ctx.cr6.eq) goto loc_82778E9C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82778ea4
	if (!ctx.cr6.eq) goto loc_82778EA4;
loc_82778E9C:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
loc_82778EA4:
	// b 0x829bd4c0
	sub_829BD4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778EA8"))) PPC_WEAK_FUNC(sub_82778EA8);
PPC_FUNC_IMPL(__imp__sub_82778EA8) {
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
	// lwz r11,23404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23404);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82778ee8
	if (!ctx.cr0.eq) goto loc_82778EE8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// stw r11,23404(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23404, ctx.r11.u32);
	// addi r3,r9,23132
	ctx.r3.s64 = ctx.r9.s64 + 23132;
	// bl 0x82816528
	ctx.lr = 0x82778EE0;
	sub_82816528(ctx, base);
	// stw r3,23400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23400, ctx.r3.u32);
	// b 0x82778eec
	goto loc_82778EEC;
loc_82778EE8:
	// lwz r3,23400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23400);
loc_82778EEC:
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

__attribute__((alias("__imp__sub_82778F00"))) PPC_WEAK_FUNC(sub_82778F00);
PPC_FUNC_IMPL(__imp__sub_82778F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82778f50
	ctx.lr = 0x82778F20;
	sub_82778F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82778F34;
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

__attribute__((alias("__imp__sub_82778F50"))) PPC_WEAK_FUNC(sub_82778F50);
PPC_FUNC_IMPL(__imp__sub_82778F50) {
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
	// addi r31,r11,14064
	ctx.r31.s64 = ctx.r11.s64 + 14064;
	// lwz r11,14060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14060);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82778f98
	if (!ctx.cr0.eq) goto loc_82778F98;
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,23256
	ctx.r9.s64 = ctx.r9.s64 + 23256;
	// stw r11,14060(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14060, ctx.r11.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,-27864
	ctx.r3.s64 = ctx.r11.s64 + -27864;
	// bl 0x82a4c758
	ctx.lr = 0x82778F98;
	sub_82A4C758(ctx, base);
loc_82778F98:
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

__attribute__((alias("__imp__sub_82778FB0"))) PPC_WEAK_FUNC(sub_82778FB0);
PPC_FUNC_IMPL(__imp__sub_82778FB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-6760
	ctx.r10.s64 = -443023360;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ori r10,r10,11236
	ctx.r10.u64 = ctx.r10.u64 | 11236;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82778fdc
	if (!ctx.cr6.eq) goto loc_82778FDC;
	// lis r9,-31944
	ctx.r9.s64 = -2093481984;
	// lwz r10,14068(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14068);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,14068(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14068, ctx.r10.u32);
loc_82778FDC:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82778ff0
	sub_82778FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82778FF0"))) PPC_WEAK_FUNC(sub_82778FF0);
PPC_FUNC_IMPL(__imp__sub_82778FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82778FF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31944
	ctx.r31.s64 = -2093481984;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,23396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23396);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lis r29,-31944
	ctx.r29.s64 = -2093481984;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82779070
	if (!ctx.cr0.eq) goto loc_82779070;
	// lis r30,-31944
	ctx.r30.s64 = -2093481984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,23396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23396, ctx.r11.u32);
	// lwz r3,14072(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82779068
	if (!ctx.cr6.eq) goto loc_82779068;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r4,r11,-24392
	ctx.r4.s64 = ctx.r11.s64 + -24392;
	// addi r3,r10,-26256
	ctx.r3.s64 = ctx.r10.s64 + -26256;
	// bl 0x82a4c7d8
	ctx.lr = 0x82779050;
	sub_82A4C7D8(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82a4ca90
	ctx.lr = 0x82779058;
	sub_82A4CA90(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82816528
	ctx.lr = 0x82779060;
	sub_82816528(ctx, base);
	// lwz r11,23396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23396);
	// stw r3,14072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14072, ctx.r3.u32);
loc_82779068:
	// stw r3,23392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 23392, ctx.r3.u32);
	// b 0x82779074
	goto loc_82779074;
loc_82779070:
	// lwz r3,23392(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 23392);
loc_82779074:
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,23388
	ctx.r10.s64 = ctx.r10.s64 + 23388;
	// bne 0x82779098
	if (!ctx.cr0.eq) goto loc_82779098;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// addi r9,r9,14428
	ctx.r9.s64 = ctx.r9.s64 + 14428;
	// stw r11,23396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23396, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82779098:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828552a0
	ctx.lr = 0x827790C8;
	sub_828552A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x827790e0
	if (ctx.cr0.eq) goto loc_827790E0;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// b 0x82779114
	goto loc_82779114;
loc_827790E0:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x828553e8
	ctx.lr = 0x827790F4;
	sub_828553E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82779114:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779120"))) PPC_WEAK_FUNC(sub_82779120);
PPC_FUNC_IMPL(__imp__sub_82779120) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82778710
	sub_82778710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779128"))) PPC_WEAK_FUNC(sub_82779128);
PPC_FUNC_IMPL(__imp__sub_82779128) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82778760
	sub_82778760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779130"))) PPC_WEAK_FUNC(sub_82779130);
PPC_FUNC_IMPL(__imp__sub_82779130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,23596
	ctx.r3.s64 = ctx.r11.s64 + 23596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779140"))) PPC_WEAK_FUNC(sub_82779140);
PPC_FUNC_IMPL(__imp__sub_82779140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82779178
	if (ctx.cr6.eq) goto loc_82779178;
	// bl 0x8277a520
	ctx.lr = 0x82779168;
	sub_8277A520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82779178
	if (!ctx.cr6.eq) goto loc_82779178;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82779184
	goto loc_82779184;
loc_82779178:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8277ab58
	ctx.lr = 0x82779184;
	sub_8277AB58(ctx, base);
loc_82779184:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827791A0"))) PPC_WEAK_FUNC(sub_827791A0);
PPC_FUNC_IMPL(__imp__sub_827791A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8277a520
	sub_8277A520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827791A8"))) PPC_WEAK_FUNC(sub_827791A8);
PPC_FUNC_IMPL(__imp__sub_827791A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8277aa50
	sub_8277AA50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827791B0"))) PPC_WEAK_FUNC(sub_827791B0);
PPC_FUNC_IMPL(__imp__sub_827791B0) {
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
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x82833108
	ctx.lr = 0x827791CC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82779284
	if (ctx.cr0.eq) goto loc_82779284;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// addi r11,r11,14104
	ctx.r11.s64 = ctx.r11.s64 + 14104;
	// addi r10,r10,24088
	ctx.r10.s64 = ctx.r10.s64 + 24088;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,23672
	ctx.r11.s64 = ctx.r11.s64 + 23672;
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
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// b 0x82779288
	goto loc_82779288;
loc_82779284:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82779288:
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

__attribute__((alias("__imp__sub_827792A0"))) PPC_WEAK_FUNC(sub_827792A0);
PPC_FUNC_IMPL(__imp__sub_827792A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a520
	ctx.lr = 0x827792C0;
	sub_8277A520(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827792d4
	if (ctx.cr6.eq) goto loc_827792D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8277a9f0
	ctx.lr = 0x827792D4;
	sub_8277A9F0(ctx, base);
loc_827792D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827792F0"))) PPC_WEAK_FUNC(sub_827792F0);
PPC_FUNC_IMPL(__imp__sub_827792F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779308"))) PPC_WEAK_FUNC(sub_82779308);
PPC_FUNC_IMPL(__imp__sub_82779308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779310"))) PPC_WEAK_FUNC(sub_82779310);
PPC_FUNC_IMPL(__imp__sub_82779310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82779830
	ctx.lr = 0x82779330;
	sub_82779830(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82779340
	if (ctx.cr0.eq) goto loc_82779340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82779340;
	sub_82332DB8(ctx, base);
loc_82779340:
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

__attribute__((alias("__imp__sub_82779360"))) PPC_WEAK_FUNC(sub_82779360);
PPC_FUNC_IMPL(__imp__sub_82779360) {
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,23820
	ctx.r11.s64 = ctx.r11.s64 + 23820;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8277938c
	if (ctx.cr0.eq) goto loc_8277938C;
	// bl 0x82332db8
	ctx.lr = 0x8277938C;
	sub_82332DB8(ctx, base);
loc_8277938C:
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

__attribute__((alias("__imp__sub_827793A8"))) PPC_WEAK_FUNC(sub_827793A8);
PPC_FUNC_IMPL(__imp__sub_827793A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// addi r11,r11,23844
	ctx.r11.s64 = ctx.r11.s64 + 23844;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// beq cr6,0x827793e4
	if (ctx.cr6.eq) goto loc_827793E4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x827446d8
	ctx.lr = 0x827793E4;
	sub_827446D8(ctx, base);
loc_827793E4:
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x827793f8
	if (ctx.cr6.eq) goto loc_827793F8;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x827446d8
	ctx.lr = 0x827793F8;
	sub_827446D8(ctx, base);
loc_827793F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a4e530
	ctx.lr = 0x82779418;
	sub_82A4E530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779438"))) PPC_WEAK_FUNC(sub_82779438);
PPC_FUNC_IMPL(__imp__sub_82779438) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779448"))) PPC_WEAK_FUNC(sub_82779448);
PPC_FUNC_IMPL(__imp__sub_82779448) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779458"))) PPC_WEAK_FUNC(sub_82779458);
PPC_FUNC_IMPL(__imp__sub_82779458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8298f278
	ctx.lr = 0x82779478;
	sub_8298F278(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82779488
	if (ctx.cr0.eq) goto loc_82779488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82779488;
	sub_82332DB8(ctx, base);
loc_82779488:
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

__attribute__((alias("__imp__sub_827794A8"))) PPC_WEAK_FUNC(sub_827794A8);
PPC_FUNC_IMPL(__imp__sub_827794A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// addi r3,r11,23612
	ctx.r3.s64 = ctx.r11.s64 + 23612;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827794B8"))) PPC_WEAK_FUNC(sub_827794B8);
PPC_FUNC_IMPL(__imp__sub_827794B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x827794f0
	if (ctx.cr6.eq) goto loc_827794F0;
	// bl 0x8277a628
	ctx.lr = 0x827794E0;
	sub_8277A628(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x827794f0
	if (!ctx.cr6.eq) goto loc_827794F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x827794fc
	goto loc_827794FC;
loc_827794F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x827794FC;
	sub_82333C70(ctx, base);
loc_827794FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779518"))) PPC_WEAK_FUNC(sub_82779518);
PPC_FUNC_IMPL(__imp__sub_82779518) {
	PPC_FUNC_PROLOGUE();
	// b 0x8277a628
	sub_8277A628(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82779520"))) PPC_WEAK_FUNC(sub_82779520);
PPC_FUNC_IMPL(__imp__sub_82779520) {
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
	ctx.lr = 0x8277953C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8277959c
	if (ctx.cr0.eq) goto loc_8277959C;
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
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,23872
	ctx.r9.s64 = ctx.r9.s64 + 23872;
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
	// b 0x827795a0
	goto loc_827795A0;
loc_8277959C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_827795A0:
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

__attribute__((alias("__imp__sub_827795B8"))) PPC_WEAK_FUNC(sub_827795B8);
PPC_FUNC_IMPL(__imp__sub_827795B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8277a628
	ctx.lr = 0x827795D8;
	sub_8277A628(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x827795ec
	if (ctx.cr6.eq) goto loc_827795EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x827795EC;
	sub_82333B08(ctx, base);
loc_827795EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82779608"))) PPC_WEAK_FUNC(sub_82779608);
PPC_FUNC_IMPL(__imp__sub_82779608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x824096c0
	ctx.lr = 0x82779628;
	sub_824096C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82333900
	ctx.lr = 0x82779638;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82779674
	if (ctx.cr0.eq) goto loc_82779674;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r10,13160(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13160);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82779678
	goto loc_82779678;
loc_82779674:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82779678:
	// stw r30,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,13156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// bl 0x8281abd8
	ctx.lr = 0x8277968C;
	sub_8281ABD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

