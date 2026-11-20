#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825310F8"))) PPC_WEAK_FUNC(sub_825310F8);
PPC_FUNC_IMPL(__imp__sub_825310F8) {
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
	// li r3,2112
	ctx.r3.s64 = 2112;
	// bl 0x82833108
	ctx.lr = 0x82531114;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253112c
	if (ctx.cr0.eq) goto loc_8253112C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82531298
	ctx.lr = 0x82531128;
	sub_82531298(ctx, base);
	// b 0x82531130
	goto loc_82531130;
loc_8253112C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82531130:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531144
	if (ctx.cr6.eq) goto loc_82531144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82531144:
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

__attribute__((alias("__imp__sub_82531158"))) PPC_WEAK_FUNC(sub_82531158);
PPC_FUNC_IMPL(__imp__sub_82531158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82531188
	if (ctx.cr6.eq) goto loc_82531188;
	// bl 0x823af650
	ctx.lr = 0x82531180;
	sub_823AF650(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x825311e4
	if (ctx.cr6.eq) goto loc_825311E4;
loc_82531188:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dc48
	ctx.lr = 0x8253119C;
	sub_8252DC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825311e4
	if (!ctx.cr0.eq) goto loc_825311E4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x825311B8;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825311e4
	if (!ctx.cr0.eq) goto loc_825311E4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b850
	ctx.lr = 0x825311D8;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x825311e8
	if (ctx.cr0.eq) goto loc_825311E8;
loc_825311E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825311E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531200"))) PPC_WEAK_FUNC(sub_82531200);
PPC_FUNC_IMPL(__imp__sub_82531200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823af650
	ctx.lr = 0x82531220;
	sub_823AF650(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82531230
	if (!ctx.cr6.eq) goto loc_82531230;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82531280
	goto loc_82531280;
loc_82531230:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dd10
	ctx.lr = 0x82531244;
	sub_8252DD10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82531280
	if (!ctx.cr0.eq) goto loc_82531280;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x82531260;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82531280
	if (!ctx.cr0.eq) goto loc_82531280;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x8234b8c8
	ctx.lr = 0x82531280;
	sub_8234B8C8(ctx, base);
loc_82531280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531298"))) PPC_WEAK_FUNC(sub_82531298);
PPC_FUNC_IMPL(__imp__sub_82531298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825312A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82531308
	if (!ctx.cr6.eq) goto loc_82531308;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531314
	goto loc_82531314;
loc_82531308:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82531314:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x8253131C;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8253132c
	if (!ctx.cr6.eq) goto loc_8253132C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531338
	goto loc_82531338;
loc_8253132C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82531338:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x82531344;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,7984
	ctx.r11.s64 = ctx.r11.s64 + 7984;
	// addi r10,r10,9556
	ctx.r10.s64 = ctx.r10.s64 + 9556;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x825313a8
	if (!ctx.cr6.eq) goto loc_825313A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825313b4
	goto loc_825313B4;
loc_825313A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825313B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x825313C0;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x825313d0
	if (!ctx.cr6.eq) goto loc_825313D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825313dc
	goto loc_825313DC;
loc_825313D0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_825313DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x8234c128
	ctx.lr = 0x825313E8;
	sub_8234C128(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,14304
	ctx.r11.s64 = ctx.r11.s64 + 14304;
	// addi r10,r10,15876
	ctx.r10.s64 = ctx.r10.s64 + 15876;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// addi r8,r8,15928
	ctx.r8.s64 = ctx.r8.s64 + 15928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531478"))) PPC_WEAK_FUNC(sub_82531478);
PPC_FUNC_IMPL(__imp__sub_82531478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16500
	ctx.r3.s64 = ctx.r11.s64 + -16500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531488"))) PPC_WEAK_FUNC(sub_82531488);
PPC_FUNC_IMPL(__imp__sub_82531488) {
	PPC_FUNC_PROLOGUE();
	// b 0x823afa60
	sub_823AFA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531490"))) PPC_WEAK_FUNC(sub_82531490);
PPC_FUNC_IMPL(__imp__sub_82531490) {
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
	// li r3,236
	ctx.r3.s64 = 236;
	// bl 0x82833108
	ctx.lr = 0x825314AC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825314c4
	if (ctx.cr0.eq) goto loc_825314C4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x825316f8
	ctx.lr = 0x825314C0;
	sub_825316F8(ctx, base);
	// b 0x825314c8
	goto loc_825314C8;
loc_825314C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825314C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825314dc
	if (ctx.cr6.eq) goto loc_825314DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825314DC:
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

__attribute__((alias("__imp__sub_825314F0"))) PPC_WEAK_FUNC(sub_825314F0);
PPC_FUNC_IMPL(__imp__sub_825314F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82531520
	if (ctx.cr6.eq) goto loc_82531520;
	// bl 0x823afa60
	ctx.lr = 0x82531518;
	sub_823AFA60(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82531564
	if (ctx.cr6.eq) goto loc_82531564;
loc_82531520:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823628f0
	ctx.lr = 0x82531538;
	sub_823628F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82531564
	if (!ctx.cr0.eq) goto loc_82531564;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8234bcc8
	ctx.lr = 0x82531558;
	sub_8234BCC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82531568
	if (ctx.cr0.eq) goto loc_82531568;
loc_82531564:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82531568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531580"))) PPC_WEAK_FUNC(sub_82531580);
PPC_FUNC_IMPL(__imp__sub_82531580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afa60
	ctx.lr = 0x825315A0;
	sub_823AFA60(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825315b0
	if (!ctx.cr6.eq) goto loc_825315B0;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// b 0x825315e8
	goto loc_825315E8;
loc_825315B0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82362998
	ctx.lr = 0x825315C8;
	sub_82362998(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825315e8
	if (!ctx.cr0.eq) goto loc_825315E8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8234bd58
	ctx.lr = 0x825315E8;
	sub_8234BD58(ctx, base);
loc_825315E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531600"))) PPC_WEAK_FUNC(sub_82531600);
PPC_FUNC_IMPL(__imp__sub_82531600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d96a0
	sub_824D96A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531618"))) PPC_WEAK_FUNC(sub_82531618);
PPC_FUNC_IMPL(__imp__sub_82531618) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82531f28
	sub_82531F28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531630"))) PPC_WEAK_FUNC(sub_82531630);
PPC_FUNC_IMPL(__imp__sub_82531630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531658"))) PPC_WEAK_FUNC(sub_82531658);
PPC_FUNC_IMPL(__imp__sub_82531658) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -120);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d9930
	sub_824D9930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531670"))) PPC_WEAK_FUNC(sub_82531670);
PPC_FUNC_IMPL(__imp__sub_82531670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -120);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d9998
	sub_824D9998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531688"))) PPC_WEAK_FUNC(sub_82531688);
PPC_FUNC_IMPL(__imp__sub_82531688) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -120);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r11,-116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -116);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -128);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825316B0"))) PPC_WEAK_FUNC(sub_825316B0);
PPC_FUNC_IMPL(__imp__sub_825316B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d9bc8
	sub_824D9BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825316C8"))) PPC_WEAK_FUNC(sub_825316C8);
PPC_FUNC_IMPL(__imp__sub_825316C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -184);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// b 0x824d9fb0
	sub_824D9FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825316E0"))) PPC_WEAK_FUNC(sub_825316E0);
PPC_FUNC_IMPL(__imp__sub_825316E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -184);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-184
	ctx.r3.s64 = ctx.r11.s64 + -184;
	// b 0x824d9830
	sub_824D9830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825316F8"))) PPC_WEAK_FUNC(sub_825316F8);
PPC_FUNC_IMPL(__imp__sub_825316F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82531700;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,16308
	ctx.r11.s64 = ctx.r11.s64 + 16308;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// addi r10,r7,13180
	ctx.r10.s64 = ctx.r7.s64 + 13180;
	// addi r9,r6,-23092
	ctx.r9.s64 = ctx.r6.s64 + -23092;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lis r4,-32230
	ctx.r4.s64 = -2112225280;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lis r3,-32230
	ctx.r3.s64 = -2112225280;
	// addi r11,r5,16360
	ctx.r11.s64 = ctx.r5.s64 + 16360;
	// addi r10,r4,16384
	ctx.r10.s64 = ctx.r4.s64 + 16384;
	// addi r9,r3,16404
	ctx.r9.s64 = ctx.r3.s64 + 16404;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r29,-32230
	ctx.r29.s64 = -2112225280;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lis r28,-32230
	ctx.r28.s64 = -2112225280;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// lis r27,-32230
	ctx.r27.s64 = -2112225280;
	// addi r11,r29,16440
	ctx.r11.s64 = ctx.r29.s64 + 16440;
	// addi r10,r28,16460
	ctx.r10.s64 = ctx.r28.s64 + 16460;
	// addi r9,r27,16484
	ctx.r9.s64 = ctx.r27.s64 + 16484;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// addi r27,r31,140
	ctx.r27.s64 = ctx.r31.s64 + 140;
	// addi r26,r31,148
	ctx.r26.s64 = ctx.r31.s64 + 148;
	// addi r25,r31,156
	ctx.r25.s64 = ctx.r31.s64 + 156;
	// addi r24,r31,176
	ctx.r24.s64 = ctx.r31.s64 + 176;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825317c4
	if (!ctx.cr6.eq) goto loc_825317C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825317d0
	goto loc_825317D0;
loc_825317C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825317D0:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82404518
	ctx.lr = 0x825317D8;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825317e8
	if (!ctx.cr6.eq) goto loc_825317E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825317f4
	goto loc_825317F4;
loc_825317E8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825317F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x82531800;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531810
	if (!ctx.cr6.eq) goto loc_82531810;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253181c
	goto loc_8253181C;
loc_82531810:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8253181C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82404350
	ctx.lr = 0x82531828;
	sub_82404350(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531838
	if (!ctx.cr6.eq) goto loc_82531838;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531844
	goto loc_82531844;
loc_82531838:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82531844:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82404100
	ctx.lr = 0x82531850;
	sub_82404100(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531860
	if (!ctx.cr6.eq) goto loc_82531860;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253186c
	goto loc_8253186C;
loc_82531860:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8253186C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x8234baa0
	ctx.lr = 0x82531878;
	sub_8234BAA0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531888
	if (!ctx.cr6.eq) goto loc_82531888;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531894
	goto loc_82531894;
loc_82531888:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82531894:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823513c8
	ctx.lr = 0x825318A0;
	sub_823513C8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825318b0
	if (!ctx.cr6.eq) goto loc_825318B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825318bc
	goto loc_825318BC;
loc_825318B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825318BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823623d8
	ctx.lr = 0x825318C8;
	sub_823623D8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825318d8
	if (!ctx.cr6.eq) goto loc_825318D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825318e4
	goto loc_825318E4;
loc_825318D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825318E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82347120
	ctx.lr = 0x825318F0;
	sub_82347120(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531900
	if (!ctx.cr6.eq) goto loc_82531900;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253190c
	goto loc_8253190C;
loc_82531900:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8253190C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82362a30
	ctx.lr = 0x82531918;
	sub_82362A30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531928
	if (!ctx.cr6.eq) goto loc_82531928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531934
	goto loc_82531934;
loc_82531928:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82531934:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x823fedf0
	ctx.lr = 0x82531940;
	sub_823FEDF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531950
	if (!ctx.cr6.eq) goto loc_82531950;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253195c
	goto loc_8253195C;
loc_82531950:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8253195C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823fe900
	ctx.lr = 0x82531968;
	sub_823FE900(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82531978
	if (!ctx.cr6.eq) goto loc_82531978;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82531984
	goto loc_82531984;
loc_82531978:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82531984:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x8234bdf0
	ctx.lr = 0x82531990;
	sub_8234BDF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// addi r10,r10,16136
	ctx.r10.s64 = ctx.r10.s64 + 16136;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,16192
	ctx.r9.s64 = ctx.r9.s64 + 16192;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// addi r7,r7,-23712
	ctx.r7.s64 = ctx.r7.s64 + -23712;
	// addi r6,r6,16260
	ctx.r6.s64 = ctx.r6.s64 + 16260;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32230
	ctx.r4.s64 = -2112225280;
	// addi r5,r5,17568
	ctx.r5.s64 = ctx.r5.s64 + 17568;
	// addi r4,r4,16272
	ctx.r4.s64 = ctx.r4.s64 + 16272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r4,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531A80"))) PPC_WEAK_FUNC(sub_82531A80);
PPC_FUNC_IMPL(__imp__sub_82531A80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82531A88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r10,r7,-12364
	ctx.r10.s64 = ctx.r7.s64 + -12364;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r10,2068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2068, ctx.r10.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x82531AE0;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x82531AEC;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e180
	ctx.lr = 0x82531AF8;
	sub_8252E180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x82531B04;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2064
	ctx.r3.s64 = ctx.r31.s64 + 2064;
	// bl 0x824d8ef8
	ctx.lr = 0x82531B10;
	sub_824D8EF8(ctx, base);
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r7,-18328
	ctx.r3.s64 = ctx.r7.s64 + -18328;
	// addi r11,r11,14304
	ctx.r11.s64 = ctx.r11.s64 + 14304;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,15876
	ctx.r10.s64 = ctx.r10.s64 + 15876;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r8,r8,15928
	ctx.r8.s64 = ctx.r8.s64 + 15928;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
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
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2064
	ctx.r11.s64 = ctx.r11.s64 + -2064;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// bl 0x82816528
	ctx.lr = 0x82531B9C;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82531bcc
	if (ctx.cr6.eq) goto loc_82531BCC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82531BCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531BD8"))) PPC_WEAK_FUNC(sub_82531BD8);
PPC_FUNC_IMPL(__imp__sub_82531BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x82531C00;
	sub_82501810(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x82531C10;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x824d8f88
	ctx.lr = 0x82531C24;
	sub_824D8F88(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,268
	ctx.xer.ca = ctx.r11.u32 > 4294967027;
	ctx.r11.s64 = ctx.r11.s64 + 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82531c50
	if (ctx.cr0.eq) goto loc_82531C50;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82531c50
	if (ctx.cr6.eq) goto loc_82531C50;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82531c54
	goto loc_82531C54;
loc_82531C50:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82531C54:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16548
	ctx.r3.s64 = ctx.r11.s64 + -16548;
	// bl 0x82816528
	ctx.lr = 0x82531C60;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x82531C70;
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
	ctx.lr = 0x82531C84;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16500
	ctx.r3.s64 = ctx.r11.s64 + -16500;
	// bl 0x82816528
	ctx.lr = 0x82531C90;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x82531CA0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82531CB0;
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

__attribute__((alias("__imp__sub_82531CC8"))) PPC_WEAK_FUNC(sub_82531CC8);
PPC_FUNC_IMPL(__imp__sub_82531CC8) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ccaf0
	ctx.lr = 0x82531CF0;
	sub_824CCAF0(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dfb0
	ctx.lr = 0x82531D00;
	sub_8252DFB0(ctx, base);
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

__attribute__((alias("__imp__sub_82531D18"))) PPC_WEAK_FUNC(sub_82531D18);
PPC_FUNC_IMPL(__imp__sub_82531D18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-2060(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,2780(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2780);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x8284da30
	sub_8284DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531D30"))) PPC_WEAK_FUNC(sub_82531D30);
PPC_FUNC_IMPL(__imp__sub_82531D30) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-2064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2064);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,-2060(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2064
	ctx.r3.s64 = ctx.r11.s64 + -2064;
	// bl 0x824d90c0
	ctx.lr = 0x82531D68;
	sub_824D90C0(ctx, base);
	// lwz r9,3424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3424);
	// lwz r11,3340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,3472(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3472);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,120(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1108(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1108);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f31,148(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f30,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82531DAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,1516(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1516, temp.u32);
	// stfs f30,1504(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1504, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

__attribute__((alias("__imp__sub_82531DD8"))) PPC_WEAK_FUNC(sub_82531DD8);
PPC_FUNC_IMPL(__imp__sub_82531DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6516);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1616(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1616, temp.u32);
	// stw r9,1640(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1640, ctx.r9.u32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r11,1424(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1424, ctx.r11.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 1620, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531E18"))) PPC_WEAK_FUNC(sub_82531E18);
PPC_FUNC_IMPL(__imp__sub_82531E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,-2060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2060);
	// lwz r11,3424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3424);
	// lfs f1,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531E28"))) PPC_WEAK_FUNC(sub_82531E28);
PPC_FUNC_IMPL(__imp__sub_82531E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x82531E58;
	sub_824CE338(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82531e88
	if (ctx.cr6.eq) goto loc_82531E88;
	// bl 0x823af4f0
	ctx.lr = 0x82531E64;
	sub_823AF4F0(ctx, base);
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
	ctx.lr = 0x82531E7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne 0x82531e8c
	if (!ctx.cr0.eq) goto loc_82531E8C;
loc_82531E88:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531E8C:
	// stw r11,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531EA8"))) PPC_WEAK_FUNC(sub_82531EA8);
PPC_FUNC_IMPL(__imp__sub_82531EA8) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x825325c8
	ctx.lr = 0x82531ED0;
	sub_825325C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82531f10
	if (ctx.cr6.eq) goto loc_82531F10;
	// lwz r3,1756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531F10:
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

__attribute__((alias("__imp__sub_82531F28"))) PPC_WEAK_FUNC(sub_82531F28);
PPC_FUNC_IMPL(__imp__sub_82531F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824d9280
	ctx.lr = 0x82531F58;
	sub_824D9280(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x82531F6C;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252de58
	ctx.lr = 0x82531F80;
	sub_8252DE58(ctx, base);
	// bl 0x823af650
	ctx.lr = 0x82531F84;
	sub_823AF650(ctx, base);
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
	ctx.lr = 0x82531F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82531FB8"))) PPC_WEAK_FUNC(sub_82531FB8);
PPC_FUNC_IMPL(__imp__sub_82531FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82531FC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r11,16308
	ctx.r11.s64 = ctx.r11.s64 + 16308;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// addi r10,r7,13180
	ctx.r10.s64 = ctx.r7.s64 + 13180;
	// addi r9,r6,-23092
	ctx.r9.s64 = ctx.r6.s64 + -23092;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// lis r4,-32230
	ctx.r4.s64 = -2112225280;
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lis r3,-32230
	ctx.r3.s64 = -2112225280;
	// addi r11,r5,16360
	ctx.r11.s64 = ctx.r5.s64 + 16360;
	// addi r9,r3,16404
	ctx.r9.s64 = ctx.r3.s64 + 16404;
	// addi r10,r4,16384
	ctx.r10.s64 = ctx.r4.s64 + 16384;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r30,-32230
	ctx.r30.s64 = -2112225280;
	// stw r9,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r9.u32);
	// lis r29,-32230
	ctx.r29.s64 = -2112225280;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lis r28,-32230
	ctx.r28.s64 = -2112225280;
	// addi r11,r30,16440
	ctx.r11.s64 = ctx.r30.s64 + 16440;
	// addi r10,r29,16460
	ctx.r10.s64 = ctx.r29.s64 + 16460;
	// addi r9,r28,16484
	ctx.r9.s64 = ctx.r28.s64 + 16484;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r10,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r9,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r9.u32);
	// addi r30,r31,132
	ctx.r30.s64 = ctx.r31.s64 + 132;
	// addi r29,r31,140
	ctx.r29.s64 = ctx.r31.s64 + 140;
	// addi r28,r31,148
	ctx.r28.s64 = ctx.r31.s64 + 148;
	// addi r27,r31,156
	ctx.r27.s64 = ctx.r31.s64 + 156;
	// addi r26,r31,176
	ctx.r26.s64 = ctx.r31.s64 + 176;
	// bl 0x823e9df8
	ctx.lr = 0x82532074;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x82532080;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x8253208C;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x82532098;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823d5000
	ctx.lr = 0x825320A4;
	sub_823D5000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d6648
	ctx.lr = 0x825320B0;
	sub_823D6648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da7f8
	ctx.lr = 0x825320BC;
	sub_823DA7F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3848
	ctx.lr = 0x825320C8;
	sub_823D3848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823da920
	ctx.lr = 0x825320D4;
	sub_823DA920(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x823e8be8
	ctx.lr = 0x825320E0;
	sub_823E8BE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823e8630
	ctx.lr = 0x825320EC;
	sub_823E8630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// bl 0x824d92e8
	ctx.lr = 0x825320F8;
	sub_824D92E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,15960
	ctx.r11.s64 = ctx.r11.s64 + 15960;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,16136
	ctx.r10.s64 = ctx.r10.s64 + 16136;
	// addi r9,r9,16192
	ctx.r9.s64 = ctx.r9.s64 + 16192;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// addi r7,r7,-23712
	ctx.r7.s64 = ctx.r7.s64 + -23712;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// addi r6,r6,16260
	ctx.r6.s64 = ctx.r6.s64 + 16260;
	// lis r4,-32215
	ctx.r4.s64 = -2111242240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,912(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r5,17568
	ctx.r11.s64 = ctx.r5.s64 + 17568;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r10,r5,16272
	ctx.r10.s64 = ctx.r5.s64 + 16272;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stwx r7,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stwx r6,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-72
	ctx.r11.s64 = ctx.r11.s64 + -72;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-120
	ctx.r11.s64 = ctx.r11.s64 + -120;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-184
	ctx.r11.s64 = ctx.r11.s64 + -184;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532210"))) PPC_WEAK_FUNC(sub_82532210);
PPC_FUNC_IMPL(__imp__sub_82532210) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x824d94e8
	ctx.lr = 0x82532238;
	sub_824D94E8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253228c
	if (!ctx.cr6.eq) goto loc_8253228C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,1588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// lwz r10,3472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3472);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_8253228C:
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

__attribute__((alias("__imp__sub_825322A0"))) PPC_WEAK_FUNC(sub_825322A0);
PPC_FUNC_IMPL(__imp__sub_825322A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8253253c
	if (ctx.cr6.eq) goto loc_8253253C;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8253234c
	if (ctx.cr6.eq) goto loc_8253234C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,255
	ctx.r10.s64 = 255;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82532344
	if (ctx.cr6.lt) goto loc_82532344;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x8253234c
	goto loc_8253234C;
loc_82532344:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8253234C:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82532380
	if (ctx.cr6.lt) goto loc_82532380;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253238c
	goto loc_8253238C;
loc_82532380:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253238C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253253c
	if (ctx.cr0.eq) goto loc_8253253C;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x825325c8
	ctx.lr = 0x825323B8;
	sub_825325C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825324fc
	if (ctx.cr0.eq) goto loc_825324FC;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825324fc
	if (ctx.cr6.eq) goto loc_825324FC;
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825324fc
	if (ctx.cr6.eq) goto loc_825324FC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82532404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825324fc
	if (ctx.cr0.eq) goto loc_825324FC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253242c
	if (!ctx.cr6.eq) goto loc_8253242C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82532448
	goto loc_82532448;
loc_8253242C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82532448:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x82532470;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82532474;
	sub_82333A20(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825324AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82532500
	if (ctx.cr0.eq) goto loc_82532500;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825324D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825324F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82532510
	goto loc_82532510;
loc_825324FC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_82532500:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x82532510;
	sub_829E3DA8(ctx, base);
loc_82532510:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r9.u32);
loc_8253253C:
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

__attribute__((alias("__imp__sub_82532558"))) PPC_WEAK_FUNC(sub_82532558);
PPC_FUNC_IMPL(__imp__sub_82532558) {
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
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x825325c8
	ctx.lr = 0x82532590;
	sub_825325C8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825325A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x825325B4;
	sub_82347478(ctx, base);
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

__attribute__((alias("__imp__sub_825325C8"))) PPC_WEAK_FUNC(sub_825325C8);
PPC_FUNC_IMPL(__imp__sub_825325C8) {
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
	// bl 0x823af4f0
	ctx.lr = 0x825325E0;
	sub_823AF4F0(ctx, base);
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
	ctx.lr = 0x825325F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82532608
	if (!ctx.cr0.eq) goto loc_82532608;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82532608:
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

__attribute__((alias("__imp__sub_82532620"))) PPC_WEAK_FUNC(sub_82532620);
PPC_FUNC_IMPL(__imp__sub_82532620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825314f0
	sub_825314F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532630"))) PPC_WEAK_FUNC(sub_82532630);
PPC_FUNC_IMPL(__imp__sub_82532630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531e28
	sub_82531E28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532640"))) PPC_WEAK_FUNC(sub_82532640);
PPC_FUNC_IMPL(__imp__sub_82532640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531dd8
	sub_82531DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532650"))) PPC_WEAK_FUNC(sub_82532650);
PPC_FUNC_IMPL(__imp__sub_82532650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825310e0
	sub_825310E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532660"))) PPC_WEAK_FUNC(sub_82532660);
PPC_FUNC_IMPL(__imp__sub_82532660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531488
	sub_82531488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532670"))) PPC_WEAK_FUNC(sub_82532670);
PPC_FUNC_IMPL(__imp__sub_82532670) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531618
	sub_82531618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532680"))) PPC_WEAK_FUNC(sub_82532680);
PPC_FUNC_IMPL(__imp__sub_82532680) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531cc8
	sub_82531CC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532690"))) PPC_WEAK_FUNC(sub_82532690);
PPC_FUNC_IMPL(__imp__sub_82532690) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825310f0
	sub_825310F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326A0"))) PPC_WEAK_FUNC(sub_825326A0);
PPC_FUNC_IMPL(__imp__sub_825326A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82362888
	sub_82362888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326B0"))) PPC_WEAK_FUNC(sub_825326B0);
PPC_FUNC_IMPL(__imp__sub_825326B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531658
	sub_82531658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326C0"))) PPC_WEAK_FUNC(sub_825326C0);
PPC_FUNC_IMPL(__imp__sub_825326C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531d30
	sub_82531D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326D0"))) PPC_WEAK_FUNC(sub_825326D0);
PPC_FUNC_IMPL(__imp__sub_825326D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82531200
	sub_82531200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326E0"))) PPC_WEAK_FUNC(sub_825326E0);
PPC_FUNC_IMPL(__imp__sub_825326E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531200
	sub_82531200(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825326F0"))) PPC_WEAK_FUNC(sub_825326F0);
PPC_FUNC_IMPL(__imp__sub_825326F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82532210
	sub_82532210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532700"))) PPC_WEAK_FUNC(sub_82532700);
PPC_FUNC_IMPL(__imp__sub_82532700) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825316c8
	sub_825316C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532710"))) PPC_WEAK_FUNC(sub_82532710);
PPC_FUNC_IMPL(__imp__sub_82532710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531688
	sub_82531688(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532720"))) PPC_WEAK_FUNC(sub_82532720);
PPC_FUNC_IMPL(__imp__sub_82532720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531d18
	sub_82531D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532730"))) PPC_WEAK_FUNC(sub_82532730);
PPC_FUNC_IMPL(__imp__sub_82532730) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531bd8
	sub_82531BD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532740"))) PPC_WEAK_FUNC(sub_82532740);
PPC_FUNC_IMPL(__imp__sub_82532740) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531e18
	sub_82531E18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532750"))) PPC_WEAK_FUNC(sub_82532750);
PPC_FUNC_IMPL(__imp__sub_82532750) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825316e0
	sub_825316E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532760"))) PPC_WEAK_FUNC(sub_82532760);
PPC_FUNC_IMPL(__imp__sub_82532760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531630
	sub_82531630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532770"))) PPC_WEAK_FUNC(sub_82532770);
PPC_FUNC_IMPL(__imp__sub_82532770) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825310f8
	sub_825310F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532780"))) PPC_WEAK_FUNC(sub_82532780);
PPC_FUNC_IMPL(__imp__sub_82532780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531ea8
	sub_82531EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532790"))) PPC_WEAK_FUNC(sub_82532790);
PPC_FUNC_IMPL(__imp__sub_82532790) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531490
	sub_82531490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327A0"))) PPC_WEAK_FUNC(sub_825327A0);
PPC_FUNC_IMPL(__imp__sub_825327A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825316b0
	sub_825316B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327B0"))) PPC_WEAK_FUNC(sub_825327B0);
PPC_FUNC_IMPL(__imp__sub_825327B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82531580
	sub_82531580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327C0"))) PPC_WEAK_FUNC(sub_825327C0);
PPC_FUNC_IMPL(__imp__sub_825327C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531600
	sub_82531600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327D0"))) PPC_WEAK_FUNC(sub_825327D0);
PPC_FUNC_IMPL(__imp__sub_825327D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531478
	sub_82531478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327E0"))) PPC_WEAK_FUNC(sub_825327E0);
PPC_FUNC_IMPL(__imp__sub_825327E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531580
	sub_82531580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825327F0"))) PPC_WEAK_FUNC(sub_825327F0);
PPC_FUNC_IMPL(__imp__sub_825327F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531158
	sub_82531158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532800"))) PPC_WEAK_FUNC(sub_82532800);
PPC_FUNC_IMPL(__imp__sub_82532800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82531670
	sub_82531670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532810"))) PPC_WEAK_FUNC(sub_82532810);
PPC_FUNC_IMPL(__imp__sub_82532810) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-22056
	ctx.r31.s64 = ctx.r11.s64 + -22056;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82532848;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532874
	if (ctx.cr0.eq) goto loc_82532874;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_82532874:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82532898
	if (ctx.cr6.eq) goto loc_82532898;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82532898;
	sub_82332C38(ctx, base);
loc_82532898:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_825328B0"))) PPC_WEAK_FUNC(sub_825328B0);
PPC_FUNC_IMPL(__imp__sub_825328B0) {
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
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
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
	// ble cr6,0x8253291c
	if (!ctx.cr6.gt) goto loc_8253291C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825328EC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253290c
	if (ctx.cr6.eq) goto loc_8253290C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825328ec
	if (ctx.cr6.lt) goto loc_825328EC;
	// b 0x8253291c
	goto loc_8253291C;
loc_8253290C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8253291C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532944
	if (ctx.cr6.eq) goto loc_82532944;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253293C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82532948
	goto loc_82532948;
loc_82532944:
	// bl 0x8253e3c8
	ctx.lr = 0x82532948;
	sub_8253E3C8(ctx, base);
loc_82532948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532958"))) PPC_WEAK_FUNC(sub_82532958);
PPC_FUNC_IMPL(__imp__sub_82532958) {
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
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825329b8
	if (!ctx.cr6.gt) goto loc_825329B8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82532984:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825329a4
	if (ctx.cr6.eq) goto loc_825329A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82532984
	if (ctx.cr6.lt) goto loc_82532984;
	// b 0x825329b8
	goto loc_825329B8;
loc_825329A4:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825329c0
	if (!ctx.cr6.eq) goto loc_825329C0;
loc_825329B8:
	// bl 0x8253e470
	ctx.lr = 0x825329BC;
	sub_8253E470(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825329C0:
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

__attribute__((alias("__imp__sub_825329D8"))) PPC_WEAK_FUNC(sub_825329D8);
PPC_FUNC_IMPL(__imp__sub_825329D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-22056
	ctx.r11.s64 = ctx.r11.s64 + -22056;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82532a58
	if (!ctx.cr6.gt) goto loc_82532A58;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82532A14:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82532a34
	if (ctx.cr6.eq) goto loc_82532A34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82532a14
	if (ctx.cr6.lt) goto loc_82532A14;
	// b 0x82532a58
	goto loc_82532A58;
loc_82532A34:
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
	ctx.lr = 0x82532A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82532a64
	if (!ctx.cr0.eq) goto loc_82532A64;
loc_82532A58:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253e4f0
	ctx.lr = 0x82532A64;
	sub_8253E4F0(ctx, base);
loc_82532A64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532A80"))) PPC_WEAK_FUNC(sub_82532A80);
PPC_FUNC_IMPL(__imp__sub_82532A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82532A88;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253e598
	ctx.lr = 0x82532A98;
	sub_8253E598(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,-20008
	ctx.r11.s64 = ctx.r11.s64 + -20008;
	// addi r10,r10,-17560
	ctx.r10.s64 = ctx.r10.s64 + -17560;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-16620
	ctx.r3.s64 = ctx.r11.s64 + -16620;
	// bl 0x82816528
	ctx.lr = 0x82532AC8;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,16708
	ctx.r3.s64 = ctx.r11.s64 + 16708;
	// bl 0x82816528
	ctx.lr = 0x82532AD8;
	sub_82816528(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r26.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r26,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r26.u32);
	// beq cr6,0x82532afc
	if (ctx.cr6.eq) goto loc_82532AFC;
	// stw r29,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r29.u32);
loc_82532AFC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r29,6572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6572, ctx.r29.u32);
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// addi r28,r11,-32764
	ctx.r28.s64 = ctx.r11.s64 + -32764;
	// addi r8,r10,30248
	ctx.r8.s64 = ctx.r10.s64 + 30248;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f13,30248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30248);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5524);
	ctx.f0.f64 = double(temp.f32);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// lfs f11,3436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3436);
	ctx.f11.f64 = double(temp.f32);
	// li r9,10000
	ctx.r9.s64 = 10000;
	// lfs f10,23968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f10.f64 = double(temp.f32);
	// li r11,16384
	ctx.r11.s64 = 16384;
	// li r8,50
	ctx.r8.s64 = 50;
	// stw r10,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r10.u32);
	// li r6,150
	ctx.r6.s64 = 150;
	// stw r10,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r10.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stfs f13,6744(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6744, temp.u32);
	// stfs f12,1696(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r9,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r9.u32);
	// stfs f11,3108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
	// stw r7,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r7.u32);
	// stfs f10,6936(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
	// stfs f0,6740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6740, temp.u32);
	// stw r8,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r8.u32);
	// stfs f0,6736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
	// stw r6,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r6.u32);
	// stfs f13,6732(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6732, temp.u32);
	// stw r27,6576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6576, ctx.r27.u32);
	// stw r5,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r5.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r27,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r27.u32);
	// addi r25,r10,16748
	ctx.r25.s64 = ctx.r10.s64 + 16748;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532BA0;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r31,2768
	ctx.r30.s64 = ctx.r31.s64 + 2768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82532BB4;
	sub_82410060(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532BBC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82532BCC;
	sub_82410060(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532BD4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82532BE4;
	sub_82410060(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532BEC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82532BFC;
	sub_82410060(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532C04;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82532C14;
	sub_82410060(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x82532C1C;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82532C2C;
	sub_82410060(ctx, base);
	// stw r27,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r27.u32);
	// stw r27,6952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6952, ctx.r27.u32);
	// stw r29,5628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5628, ctx.r29.u32);
	// stw r29,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r29.u32);
	// stw r29,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r29.u32);
	// stw r26,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r26.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r26,3708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3708, ctx.r26.u32);
	// addi r3,r11,16764
	ctx.r3.s64 = ctx.r11.s64 + 16764;
	// bl 0x82816528
	ctx.lr = 0x82532C54;
	sub_82816528(ctx, base);
	// stw r3,3712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3712, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,16792
	ctx.r3.s64 = ctx.r11.s64 + 16792;
	// bl 0x82816528
	ctx.lr = 0x82532C64;
	sub_82816528(ctx, base);
	// stw r3,3716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3716, ctx.r3.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r30,-1
	ctx.r30.s64 = -1;
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// lis r5,15870
	ctx.r5.s64 = 1040056320;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// ori r5,r5,3771
	ctx.r5.u64 = ctx.r5.u64 | 3771;
	// addi r4,r31,6956
	ctx.r4.s64 = ctx.r31.s64 + 6956;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x82532C94;
	sub_824091A0(ctx, base);
	// addi r11,r28,420
	ctx.r11.s64 = ctx.r28.s64 + 420;
	// addi r10,r31,6960
	ctx.r10.s64 = ctx.r31.s64 + 6960;
loc_82532C9C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r28,420
	ctx.r9.s64 = ctx.r28.s64 + 420;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x82532c9c
	if (ctx.cr6.lt) goto loc_82532C9C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r10,16824
	ctx.r3.s64 = ctx.r10.s64 + 16824;
	// addi r27,r11,1268
	ctx.r27.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82532CD0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,3368
	ctx.r4.s64 = ctx.r31.s64 + 3368;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x82532CE8;
	sub_823CF190(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r27,r11,16892
	ctx.r27.s64 = ctx.r11.s64 + 16892;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82532CF8;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r3,3384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3384, ctx.r3.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r3,r9,16908
	ctx.r3.s64 = ctx.r9.s64 + 16908;
	// addi r29,r11,1268
	ctx.r29.s64 = ctx.r11.s64 + 1268;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,3380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3380, ctx.r11.u32);
	// stw r9,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r9.u32);
	// stw r10,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x82532D3C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,3388
	ctx.r4.s64 = ctx.r31.s64 + 3388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823cf190
	ctx.lr = 0x82532D54;
	sub_823CF190(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x82532D5C;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,3408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3408, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,17060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17060);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,3812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3812, ctx.r10.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r26,3816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3816, ctx.r26.u32);
	// stw r9,3396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3396, ctx.r9.u32);
	// stw r8,3404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3404, ctx.r8.u32);
	// stw r11,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532DB0"))) PPC_WEAK_FUNC(sub_82532DB0);
PPC_FUNC_IMPL(__imp__sub_82532DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,16616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16616);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16612);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,2380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532df4
	if (ctx.cr6.eq) goto loc_82532DF4;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,2384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82532DF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532E00"))) PPC_WEAK_FUNC(sub_82532E00);
PPC_FUNC_IMPL(__imp__sub_82532E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82532E08;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61748
	ctx.lr = 0x82532E10;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x82532E1C;
	sub_824DD5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x82532E24;
	sub_829BED50(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r28.u32);
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r28.u32);
	// lfs f13,19580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19580);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// beq cr6,0x82532e60
	if (ctx.cr6.eq) goto loc_82532E60;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82532E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x82532E68;
	sub_829C2520(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f28,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82532ECC:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82532ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82532ECC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,22763
	ctx.r4.s64 = 1491795968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,37495
	ctx.r4.u64 = ctx.r4.u64 | 37495;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82532EFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x82532F08;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82532f30
	if (ctx.cr0.eq) goto loc_82532F30;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82532F28;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82532f34
	goto loc_82532F34;
loc_82532F30:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82532F34:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532f58
	if (!ctx.cr6.eq) goto loc_82532F58;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532f58
	if (ctx.cr6.eq) goto loc_82532F58;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82532F58:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82532F78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f30,-28800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28800);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532f94
	if (ctx.cr6.eq) goto loc_82532F94;
	// lfs f0,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_82532F94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-19521
	ctx.r4.s64 = -1279328256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,23324
	ctx.r4.u64 = ctx.r4.u64 | 23324;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82532FB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x82532FBC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82532fe4
	if (ctx.cr0.eq) goto loc_82532FE4;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82532FDC;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82532fe8
	goto loc_82532FE8;
loc_82532FE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82532FE8:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253300c
	if (!ctx.cr6.eq) goto loc_8253300C;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253300c
	if (ctx.cr6.eq) goto loc_8253300C;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_8253300C:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253302C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// lfs f0,-31124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16588);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82533064
	if (ctx.cr6.eq) goto loc_82533064;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82533064:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825330B4:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x825330b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825330B4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x82816528
	ctx.lr = 0x825330D8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825330EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x825330F8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533120
	if (ctx.cr0.eq) goto loc_82533120;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82533118;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82533124
	goto loc_82533124;
loc_82533120:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82533124:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82533148
	if (!ctx.cr6.eq) goto loc_82533148;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533148
	if (ctx.cr6.eq) goto loc_82533148;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82533148:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61794
	ctx.lr = 0x82533174;
	__restfpr_28(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533178"))) PPC_WEAK_FUNC(sub_82533178);
PPC_FUNC_IMPL(__imp__sub_82533178) {
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
	// bl 0x82540e00
	ctx.lr = 0x82533190;
	sub_82540E00(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,16972
	ctx.r5.s64 = ctx.r11.s64 + 16972;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,6552
	ctx.r4.s64 = ctx.r31.s64 + 6552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x825331AC;
	sub_824115B8(ctx, base);
	// lwz r11,-396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825331C0;
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

__attribute__((alias("__imp__sub_825331D8"))) PPC_WEAK_FUNC(sub_825331D8);
PPC_FUNC_IMPL(__imp__sub_825331D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82540ea0
	ctx.lr = 0x825331F4;
	sub_82540EA0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82533224
	if (!ctx.cr6.eq) goto loc_82533224;
	// addi r11,r31,6948
	ctx.r11.s64 = ctx.r31.s64 + 6948;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x82533218;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82533224:
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

__attribute__((alias("__imp__sub_82533240"))) PPC_WEAK_FUNC(sub_82533240);
PPC_FUNC_IMPL(__imp__sub_82533240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82533248;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82540f58
	ctx.lr = 0x82533258;
	sub_82540F58(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825332dc
	if (!ctx.cr6.eq) goto loc_825332DC;
	// addi r30,r31,6948
	ctx.r30.s64 = ctx.r31.s64 + 6948;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82533280;
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
	ctx.lr = 0x825332A4;
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
	ctx.lr = 0x825332B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825332dc
	if (!ctx.cr0.eq) goto loc_825332DC;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825332D0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_825332DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825332E8"))) PPC_WEAK_FUNC(sub_825332E8);
PPC_FUNC_IMPL(__imp__sub_825332E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// lwz r8,3332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6920(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r11.u32);
	// lwz r9,6924(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6924);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6912(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6912);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6916(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82533338"))) PPC_WEAK_FUNC(sub_82533338);
PPC_FUNC_IMPL(__imp__sub_82533338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82533340;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16996
	ctx.r4.s64 = ctx.r11.s64 + 16996;
	// bl 0x8233a258
	ctx.lr = 0x82533358;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4296
	ctx.r3.s64 = ctx.r31.s64 + 4296;
	// bl 0x82400b48
	ctx.lr = 0x82533364;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8253336C;
	sub_82333960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17012
	ctx.r4.s64 = ctx.r11.s64 + 17012;
	// bl 0x8233a258
	ctx.lr = 0x8253337C;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4320
	ctx.r3.s64 = ctx.r31.s64 + 4320;
	// bl 0x82400b48
	ctx.lr = 0x82533388;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82533390;
	sub_82333960(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-808
	ctx.r28.s64 = ctx.r11.s64 + -808;
	// addi r27,r31,4344
	ctx.r27.s64 = ctx.r31.s64 + 4344;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825333A4:
	// bl 0x825357f8
	ctx.lr = 0x825333A8;
	sub_825357F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x825333B8;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x824ef870
	ctx.lr = 0x825333D4;
	sub_824EF870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x825333E4;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x825357f8
	ctx.lr = 0x825333EC;
	sub_825357F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823339b8
	ctx.lr = 0x825333FC;
	sub_823339B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x82333960
	ctx.lr = 0x82533408;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535798
	ctx.lr = 0x82533414;
	sub_82535798(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82333960
	ctx.lr = 0x8253341C;
	sub_82333960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r11,r28,168
	ctx.r11.s64 = ctx.r28.s64 + 168;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825333a4
	if (ctx.cr6.lt) goto loc_825333A4;
	// lwz r10,4360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82533478
	if (!ctx.cr6.gt) goto loc_82533478;
	// addi r10,r31,4408
	ctx.r10.s64 = ctx.r31.s64 + 4408;
loc_82533460:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82533460
	if (ctx.cr6.lt) goto loc_82533460;
loc_82533478:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533480"))) PPC_WEAK_FUNC(sub_82533480);
PPC_FUNC_IMPL(__imp__sub_82533480) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x824dd3f8
	ctx.lr = 0x825334A0;
	sub_824DD3F8(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// lfs f0,480(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825334C8"))) PPC_WEAK_FUNC(sub_825334C8);
PPC_FUNC_IMPL(__imp__sub_825334C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d8
	ctx.lr = 0x825334D0;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a61728
	ctx.lr = 0x825334D8;
	__savefpr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x825334E4;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r22,-32243
	ctx.r22.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r28,r22,-29292
	ctx.r28.s64 = ctx.r22.s64 + -29292;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f0,19844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19844);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r11,14244
	ctx.r3.s64 = ctx.r11.s64 + 14244;
	// lfs f30,19548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19548);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,1992(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1992);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f28,4652(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4652);
	ctx.f28.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f26,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,19828(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19828);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f31,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f28,192(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,5352(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f29,588(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r30,5352(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253355C;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// bl 0x82816528
	ctx.lr = 0x8253356C;
	sub_82816528(ctx, base);
	// ld r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rldicr r9,r26,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825335B0;
	sub_824E5590(ctx, base);
	// stw r3,5360(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5360, ctx.r3.u32);
	// stfs f26,456(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 456, temp.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r10,6852(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// stfs f29,588(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,5360(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r4,5360(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533600;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r27,r11,14264
	ctx.r27.s64 = ctx.r11.s64 + 14264;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,19564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19564);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,5352(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// lfs f13,16572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16572);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,16664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16664);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,17960(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17960);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,19820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19820);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,19816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19816);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f10,172(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533668;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,-5628
	ctx.r3.s64 = ctx.r11.s64 + -5628;
	// bl 0x82816528
	ctx.lr = 0x82533678;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// rldicr r9,r24,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825336BC;
	sub_824E5590(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,5356(r23)
	PPC_STORE_U32(ctx.r23.u32 + 5356, ctx.r10.u32);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5356(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r4,5356(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825336FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// addi r20,r21,-32760
	ctx.r20.s64 = ctx.r21.s64 + -32760;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r7,22763
	ctx.r7.s64 = 1491795968;
	// lfs f25,19684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r8,9772
	ctx.r3.s64 = ctx.r8.s64 + 9772;
	// lfs f24,-31124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,19792(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19792);
	ctx.f23.f64 = double(temp.f32);
	// ori r30,r7,37495
	ctx.r30.u64 = ctx.r7.u64 | 37495;
	// lfs f27,-4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + -4);
	ctx.f27.f64 = double(temp.f32);
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f24,156(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,176(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r29,5352(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253375C;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r25,160(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r25,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825337A0;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r30.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825337D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,9784
	ctx.r3.s64 = ctx.r11.s64 + 9784;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r29,r10,23324
	ctx.r29.u64 = ctx.r10.u64 | 23324;
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f24,156(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f23,176(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r26,5352(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82533810;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533854;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,9796
	ctx.r3.s64 = ctx.r11.s64 + 9796;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r11,16364
	ctx.r11.s64 = 1072431104;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r26,5352(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ori r25,r11,28383
	ctx.r25.u64 = ctx.r11.u64 | 28383;
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825338C4;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533908;
	sub_824E5590(ctx, base);
	// lwz r10,6852(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253393C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r26,r10,14532
	ctx.r26.u64 = ctx.r10.u64 | 14532;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r25,5352(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82533978;
	sub_82816528(ctx, base);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// bl 0x824e5590
	ctx.lr = 0x825339BC;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825339F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lfs f25,4648(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4648);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r11,9820
	ctx.r3.s64 = ctx.r11.s64 + 9820;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ori r29,r10,42004
	ctx.r29.u64 = ctx.r10.u64 | 42004;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r26,5352(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82533A30;
	sub_82816528(ctx, base);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533A74;
	sub_824E5590(ctx, base);
	// lwz r10,6852(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r29.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,9836
	ctx.r3.s64 = ctx.r11.s64 + 9836;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ori r26,r10,53749
	ctx.r26.u64 = ctx.r10.u64 | 53749;
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,156(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,176(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r25,5352(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82533AE8;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r24,192(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r19,160(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r19,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533B2C;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r31,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r31.u32);
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// stw r31,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r31.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,1964(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1964);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-11265
	ctx.r8.s64 = -738263040;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r9,9852
	ctx.r3.s64 = ctx.r9.s64 + 9852;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f0,19812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// ori r26,r8,44068
	ctx.r26.u64 = ctx.r8.u64 | 44068;
	// lfs f28,19204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19204);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533BAC;
	sub_82816528(ctx, base);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533BF0;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533C20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r9,24284
	ctx.r9.s64 = 1591476224;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r10,9868
	ctx.r3.s64 = ctx.r10.s64 + 9868;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// ori r26,r9,32798
	ctx.r26.u64 = ctx.r9.u64 | 32798;
	// lfs f0,19728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,168(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533C60;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r25,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r25.u64);
	// bl 0x824e5590
	ctx.lr = 0x82533CA4;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r31,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r31.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,5916(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5916);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,16612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16612);
	ctx.f26.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f26,156(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r28,5352(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82533D18;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,17028
	ctx.r3.s64 = ctx.r11.s64 + 17028;
	// bl 0x82816528
	ctx.lr = 0x82533D28;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x82533D6C;
	sub_824E5590(ctx, base);
	// lwz r10,6852(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6852);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r9,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533D9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f12,244(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// addi r19,r10,17040
	ctx.r19.s64 = ctx.r10.s64 + 17040;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f13,16816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533E0C;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r17,r11,17052
	ctx.r17.s64 = ctx.r11.s64 + 17052;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// ori r28,r11,8
	ctx.r28.u64 = ctx.r11.u64 | 8;
	// bl 0x82816528
	ctx.lr = 0x82533E28;
	sub_82816528(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ld r16,184(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r27,168(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r26,176(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// ld r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r8,r26,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// std r16,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r16.u64);
	// rldicr r10,r24,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82533E78;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r3,6932(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6932, ctx.r3.u32);
	// lfs f29,908(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// bl 0x82331120
	ctx.lr = 0x82533ED4;
	sub_82331120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6932(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6932);
	// bl 0x8281d650
	ctx.lr = 0x82533EE0;
	sub_8281D650(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533EF4;
	sub_82816528(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82816528
	ctx.lr = 0x82533F00;
	sub_82816528(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// rldicr r8,r26,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// rldicr r10,r24,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82533F40;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r3,6928(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6928, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82533F94;
	sub_82331120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6928(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6928);
	// bl 0x8281d650
	ctx.lr = 0x82533FA0;
	sub_8281D650(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f23,144(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 144);
	ctx.f23.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f24,19800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19800);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r7,17060
	ctx.r3.s64 = ctx.r7.s64 + 17060;
	// lfs f22,19644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19644);
	ctx.f22.f64 = double(temp.f32);
	// lfs f28,18284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18284);
	ctx.f28.f64 = double(temp.f32);
	// lfs f21,17120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17120);
	ctx.f21.f64 = double(temp.f32);
	// stfs f24,152(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f22,168(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f21,176(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82533FF4;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,17076
	ctx.r3.s64 = ctx.r11.s64 + 17076;
	// bl 0x82816528
	ctx.lr = 0x82534004;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// li r5,392
	ctx.r5.s64 = 392;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x8253404C;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r3,6920(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6920, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,3332(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3332);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x825340A0;
	sub_82331120(ctx, base);
	// lwz r11,6920(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6920);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r4,6928(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6928);
	// lwz r3,6920(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6920);
	// bl 0x8281d468
	ctx.lr = 0x825340B8;
	sub_8281D468(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,-29292(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lfs f25,18516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18516);
	ctx.f25.f64 = double(temp.f32);
	// lfs f20,-32760(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -32760);
	ctx.f20.f64 = double(temp.f32);
	// addi r3,r9,17084
	ctx.r3.s64 = ctx.r9.s64 + 17084;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f13,19596(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f20,152(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f25,168(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82534100;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,17104
	ctx.r3.s64 = ctx.r11.s64 + 17104;
	// bl 0x82816528
	ctx.lr = 0x82534110;
	sub_82816528(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,392
	ctx.r5.s64 = 392;
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,160(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82534158;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r3,6924(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6924, ctx.r3.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,3332(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3332);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x825341AC;
	sub_82331120(ctx, base);
	// lwz r11,6924(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6924);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r4,6928(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6928);
	// lwz r3,6924(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6924);
	// bl 0x8281d468
	ctx.lr = 0x825341C4;
	sub_8281D468(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f24,152(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f22,168(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f21,176(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825341F4;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// bl 0x82816528
	ctx.lr = 0x82534204;
	sub_82816528(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r5,392
	ctx.r5.s64 = 392;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x8253424C;
	sub_824E4120(ctx, base);
	// stfs f31,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,3332(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3332);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r29,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// stw r3,6912(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6912, ctx.r3.u32);
	// bl 0x82331120
	ctx.lr = 0x825342A0;
	sub_82331120(ctx, base);
	// lwz r11,6912(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6912);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r3,6912(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6912);
	// lwz r4,6932(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6932);
	// bl 0x8281d468
	ctx.lr = 0x825342B8;
	sub_8281D468(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f20,152(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,156(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f25,168(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f28,172(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f25,176(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825342E8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,17132
	ctx.r3.s64 = ctx.r11.s64 + 17132;
	// bl 0x82816528
	ctx.lr = 0x825342F8;
	sub_82816528(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r5,392
	ctx.r5.s64 = 392;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x824e4120
	ctx.lr = 0x82534340;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r3,6916(r23)
	PPC_STORE_U32(ctx.r23.u32 + 6916, ctx.r3.u32);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r4,3332(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82534394;
	sub_82331120(ctx, base);
	// lwz r11,6916(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6916);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r3,6916(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6916);
	// lwz r4,6932(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 6932);
	// bl 0x8281d468
	ctx.lr = 0x825343AC;
	sub_8281D468(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x82a61774
	ctx.lr = 0x825343B8;
	__restfpr_20(ctx, base);
	// b 0x82a4ea28
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825343C0"))) PPC_WEAK_FUNC(sub_825343C0);
PPC_FUNC_IMPL(__imp__sub_825343C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825343C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r11,17140
	ctx.r3.s64 = ctx.r11.s64 + 17140;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x825343E4;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824cacf0
	ctx.lr = 0x825343F4;
	sub_824CACF0(ctx, base);
	// addi r31,r31,2912
	ctx.r31.s64 = ctx.r31.s64 + 2912;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82534420
	if (ctx.cr6.eq) goto loc_82534420;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c38
	ctx.lr = 0x82534420;
	sub_82332C38(ctx, base);
loc_82534420:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17188
	ctx.r3.s64 = ctx.r11.s64 + 17188;
	// bl 0x82816528
	ctx.lr = 0x8253442C;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,17216
	ctx.r28.s64 = ctx.r11.s64 + 17216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82534440;
	sub_82816528(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x824cac78
	ctx.lr = 0x8253445C;
	sub_824CAC78(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17228
	ctx.r3.s64 = ctx.r11.s64 + 17228;
	// bl 0x82816528
	ctx.lr = 0x82534468;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x82534474;
	sub_82816528(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824cac78
	ctx.lr = 0x8253448C;
	sub_824CAC78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534498"))) PPC_WEAK_FUNC(sub_82534498);
PPC_FUNC_IMPL(__imp__sub_82534498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825344A0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r30,r31,6976
	ctx.r30.s64 = ctx.r31.s64 + 6976;
	// addi r29,r31,6964
	ctx.r29.s64 = ctx.r31.s64 + 6964;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,128
	ctx.r27.s64 = 128;
loc_825344C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82534550
	if (!ctx.cr6.eq) goto loc_82534550;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x825344DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825344f0
	if (ctx.cr0.eq) goto loc_825344F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x825344EC;
	sub_82712BA0(ctx, base);
	// b 0x825344f4
	goto loc_825344F4;
loc_825344F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825344F4:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,6956(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stb r27,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r27.u8);
	// stb r27,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r27.u8);
	// bl 0x82914788
	ctx.lr = 0x82534538;
	sub_82914788(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82534550:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x825344c8
	if (!ctx.cr0.eq) goto loc_825344C8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534580"))) PPC_WEAK_FUNC(sub_82534580);
PPC_FUNC_IMPL(__imp__sub_82534580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,6976
	ctx.r31.s64 = ctx.r3.s64 + 6976;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8253459C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825345ac
	if (ctx.cr6.eq) goto loc_825345AC;
	// bl 0x82978ed0
	ctx.lr = 0x825345AC;
	sub_82978ED0(ctx, base);
loc_825345AC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8253459c
	if (!ctx.cr0.eq) goto loc_8253459C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825345D0"))) PPC_WEAK_FUNC(sub_825345D0);
PPC_FUNC_IMPL(__imp__sub_825345D0) {
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
	// lwz r4,5480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82534608
	if (!ctx.cr6.gt) goto loc_82534608;
	// bl 0x824df020
	ctx.lr = 0x825345F4;
	sub_824DF020(ctx, base);
	// lwz r10,3424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82534610
	goto loc_82534610;
loc_82534608:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
loc_82534610:
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

__attribute__((alias("__imp__sub_82534628"))) PPC_WEAK_FUNC(sub_82534628);
PPC_FUNC_IMPL(__imp__sub_82534628) {
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
	// lwz r4,5480(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82534660
	if (!ctx.cr6.gt) goto loc_82534660;
	// bl 0x824df020
	ctx.lr = 0x8253464C;
	sub_824DF020(ctx, base);
	// lwz r10,3424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82534668
	goto loc_82534668;
loc_82534660:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
loc_82534668:
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

__attribute__((alias("__imp__sub_82534680"))) PPC_WEAK_FUNC(sub_82534680);
PPC_FUNC_IMPL(__imp__sub_82534680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825346A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fb50
	ctx.lr = 0x825346B0;
	sub_8253FB50(ctx, base);
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r30,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r30.u32);
	// ble cr6,0x82534700
	if (!ctx.cr6.gt) goto loc_82534700;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82534700
	if (ctx.cr6.eq) goto loc_82534700;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r9,6948(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825346f8
	if (ctx.cr6.eq) goto loc_825346F8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82534700
	if (!ctx.cr6.eq) goto loc_82534700;
loc_825346F8:
	// lwz r11,6948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// stw r11,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r11.u32);
loc_82534700:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253471C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// blt cr6,0x82534700
	if (ctx.cr6.lt) goto loc_82534700;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534740"))) PPC_WEAK_FUNC(sub_82534740);
PPC_FUNC_IMPL(__imp__sub_82534740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82534748;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8253fcd8
	ctx.lr = 0x8253475C;
	sub_8253FCD8(ctx, base);
	// lwz r11,5728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534770
	if (ctx.cr6.eq) goto loc_82534770;
	// lwz r4,5724(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5724);
	// b 0x82534778
	goto loc_82534778;
loc_82534770:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82534778:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82409058
	ctx.lr = 0x82534780;
	sub_82409058(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825347a4
	if (ctx.cr6.eq) goto loc_825347A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825347a4
	if (ctx.cr6.eq) goto loc_825347A4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x825347A4;
	sub_82332DB8(ctx, base);
loc_825347A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82534af0
	if (ctx.cr6.eq) goto loc_82534AF0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534af0
	if (ctx.cr6.eq) goto loc_82534AF0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,17252
	ctx.r4.s64 = ctx.r10.s64 + 17252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825347D8;
	sub_829E6978(ctx, base);
	// li r11,6948
	ctx.r11.s64 = 6948;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x82507af0
	ctx.lr = 0x825347EC;
	sub_82507AF0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15280
	ctx.r4.s64 = ctx.r11.s64 + 15280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534804;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253482C;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82534854;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534870;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253488C;
	sub_829E6978(ctx, base);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r28,r29,3412
	ctx.r28.s64 = ctx.r29.s64 + 3412;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x825348A0;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825348B8;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825348E0;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82534908;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534924;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534940;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253495C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82534984;
	sub_829E6978(ctx, base);
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x82534994;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825349AC;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x825349D4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15956
	ctx.r4.s64 = ctx.r11.s64 + 15956;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x825349FC;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r11,17268
	ctx.r4.s64 = ctx.r11.s64 + 17268;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534A18;
	sub_829E6978(ctx, base);
	// stfs f1,6940(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6940, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534A34;
	sub_829E6978(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82534a48
	if (!ctx.cr6.lt) goto loc_82534A48;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82534A48:
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x82534A58;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,17284
	ctx.r4.s64 = ctx.r11.s64 + 17284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534A70;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r11,-16256
	ctx.r4.s64 = ctx.r11.s64 + -16256;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534A8C;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82534aac
	if (!ctx.cr6.gt) goto loc_82534AAC;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_82534AAC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534AC4;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r11,-16228
	ctx.r4.s64 = ctx.r11.s64 + -16228;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82534AE0;
	sub_829E6978(ctx, base);
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,3460
	ctx.r3.s64 = ctx.r29.s64 + 3460;
	// bl 0x82516c70
	ctx.lr = 0x82534AF0;
	sub_82516C70(ctx, base);
loc_82534AF0:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534b44
	if (ctx.cr6.eq) goto loc_82534B44;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,3436
	ctx.r31.s64 = ctx.r29.s64 + 3436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x82534B20;
	sub_82522580(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82522580
	ctx.lr = 0x82534B30;
	sub_82522580(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x82534B44;
	sub_82522580(ctx, base);
loc_82534B44:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534b6c
	if (ctx.cr6.eq) goto loc_82534B6C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r29,3436
	ctx.r3.s64 = ctx.r29.s64 + 3436;
	// bl 0x82522580
	ctx.lr = 0x82534B6C;
	sub_82522580(ctx, base);
loc_82534B6C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534B78"))) PPC_WEAK_FUNC(sub_82534B78);
PPC_FUNC_IMPL(__imp__sub_82534B78) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,436(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 436);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82534bc8
	if (!ctx.cr6.eq) goto loc_82534BC8;
	// lwz r11,4356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,6948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,4356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82534BC8:
	// b 0x8253eb60
	sub_8253EB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534BD0"))) PPC_WEAK_FUNC(sub_82534BD0);
PPC_FUNC_IMPL(__imp__sub_82534BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8253fe78
	ctx.lr = 0x82534BF0;
	sub_8253FE78(ctx, base);
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
loc_82534BFC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82534c1c
	if (ctx.cr6.eq) goto loc_82534C1C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// ble cr6,0x82534bfc
	if (!ctx.cr6.gt) goto loc_82534BFC;
	// b 0x82534c34
	goto loc_82534C34;
loc_82534C1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82534C34:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82534c84
	if (!ctx.cr6.gt) goto loc_82534C84;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82534c84
	if (!ctx.cr6.eq) goto loc_82534C84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534c84
	if (ctx.cr6.eq) goto loc_82534C84;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,6948(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82534c7c
	if (ctx.cr6.eq) goto loc_82534C7C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82534c84
	if (!ctx.cr6.eq) goto loc_82534C84;
loc_82534C7C:
	// lwz r11,6948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// stw r11,5180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5180, ctx.r11.u32);
loc_82534C84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534CA0"))) PPC_WEAK_FUNC(sub_82534CA0);
PPC_FUNC_IMPL(__imp__sub_82534CA0) {
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
	// lwz r11,3552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3552);
	// li r10,0
	ctx.r10.s64 = 0;
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82534cf8
	if (!ctx.cr6.gt) goto loc_82534CF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82534CC4:
	// lwz r9,3548(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3548);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,640(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 640);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82534ce4
	if (ctx.cr6.gt) goto loc_82534CE4;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// oris r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 524288;
	// stw r8,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
loc_82534CE4:
	// lwz r9,3552(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82534cc4
	if (ctx.cr6.lt) goto loc_82534CC4;
loc_82534CF8:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82540940
	ctx.lr = 0x82534D04;
	sub_82540940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534D18"))) PPC_WEAK_FUNC(sub_82534D18);
PPC_FUNC_IMPL(__imp__sub_82534D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82534D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,17292
	ctx.r3.s64 = ctx.r11.s64 + 17292;
	// lwz r29,64(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x82534D3C;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82534d64
	if (ctx.cr6.eq) goto loc_82534D64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17324
	ctx.r3.s64 = ctx.r11.s64 + 17324;
	// bl 0x82816528
	ctx.lr = 0x82534D50;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82534d64
	if (ctx.cr6.eq) goto loc_82534D64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r11.u32);
	// b 0x82534d70
	goto loc_82534D70;
loc_82534D64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r30.u32);
	// stw r11,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r11.u32);
loc_82534D70:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17356
	ctx.r3.s64 = ctx.r11.s64 + 17356;
	// bl 0x82816528
	ctx.lr = 0x82534D7C;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82534d98
	if (ctx.cr6.eq) goto loc_82534D98;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17384
	ctx.r3.s64 = ctx.r11.s64 + 17384;
	// bl 0x82816528
	ctx.lr = 0x82534D90;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82534da4
	if (!ctx.cr6.eq) goto loc_82534DA4;
loc_82534D98:
	// lwz r11,3472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
loc_82534DA4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534DB8"))) PPC_WEAK_FUNC(sub_82534DB8);
PPC_FUNC_IMPL(__imp__sub_82534DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5412, temp.u32);
	// b 0x824e8298
	sub_824E8298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534DC8"))) PPC_WEAK_FUNC(sub_82534DC8);
PPC_FUNC_IMPL(__imp__sub_82534DC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6920);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6924);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534DF0"))) PPC_WEAK_FUNC(sub_82534DF0);
PPC_FUNC_IMPL(__imp__sub_82534DF0) {
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
	// lwz r11,6952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82534e28
	if (!ctx.cr6.eq) goto loc_82534E28;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// bl 0x8281d650
	ctx.lr = 0x82534E1C;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// bl 0x8281d650
	ctx.lr = 0x82534E28;
	sub_8281D650(ctx, base);
loc_82534E28:
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

__attribute__((alias("__imp__sub_82534E40"))) PPC_WEAK_FUNC(sub_82534E40);
PPC_FUNC_IMPL(__imp__sub_82534E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6912);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534E68"))) PPC_WEAK_FUNC(sub_82534E68);
PPC_FUNC_IMPL(__imp__sub_82534E68) {
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
	// lwz r3,6912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// bl 0x8281d650
	ctx.lr = 0x82534E88;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// bl 0x8281d650
	ctx.lr = 0x82534E94;
	sub_8281D650(ctx, base);
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

__attribute__((alias("__imp__sub_82534EA8"))) PPC_WEAK_FUNC(sub_82534EA8);
PPC_FUNC_IMPL(__imp__sub_82534EA8) {
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
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// bl 0x82332928
	ctx.lr = 0x82534EC4;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534ee0
	if (ctx.cr0.eq) goto loc_82534EE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534EE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82534EE0:
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82534F38"))) PPC_WEAK_FUNC(sub_82534F38);
PPC_FUNC_IMPL(__imp__sub_82534F38) {
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
	// lwz r3,1780(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1780);
	// bl 0x82332928
	ctx.lr = 0x82534F54;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534f6c
	if (ctx.cr0.eq) goto loc_82534F6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534F6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82534F6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82534580
	ctx.lr = 0x82534F78;
	sub_82534580(ctx, base);
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

__attribute__((alias("__imp__sub_82534F90"))) PPC_WEAK_FUNC(sub_82534F90);
PPC_FUNC_IMPL(__imp__sub_82534F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// lfs f13,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// lfs f12,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,3424(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3424);
	// lfs f0,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534FC8"))) PPC_WEAK_FUNC(sub_82534FC8);
PPC_FUNC_IMPL(__imp__sub_82534FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,3424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// lwz r11,3340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3340);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r5,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82534FE0"))) PPC_WEAK_FUNC(sub_82534FE0);
PPC_FUNC_IMPL(__imp__sub_82534FE0) {
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
	// bl 0x824df308
	ctx.lr = 0x82534FF0;
	sub_824DF308(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535010"))) PPC_WEAK_FUNC(sub_82535010);
PPC_FUNC_IMPL(__imp__sub_82535010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82535018;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r11.u32);
	// bl 0x8253fab8
	ctx.lr = 0x82535038;
	sub_8253FAB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824116b0
	ctx.lr = 0x82535040;
	sub_824116B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824116b0
	ctx.lr = 0x8253504C;
	sub_824116B0(ctx, base);
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825350bc
	if (!ctx.cr6.eq) goto loc_825350BC;
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x825350bc
	if (!ctx.cr6.gt) goto loc_825350BC;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825350bc
	if (ctx.cr6.eq) goto loc_825350BC;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x825350bc
	if (ctx.cr6.gt) goto loc_825350BC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,448(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82535098;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8253509C;
	sub_82333A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825350BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825350BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825350C8"))) PPC_WEAK_FUNC(sub_825350C8);
PPC_FUNC_IMPL(__imp__sub_825350C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540a58
	sub_82540A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825350D0"))) PPC_WEAK_FUNC(sub_825350D0);
PPC_FUNC_IMPL(__imp__sub_825350D0) {
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
	// bl 0x8253f550
	ctx.lr = 0x825350EC;
	sub_8253F550(ctx, base);
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82535124
	if (ctx.cr6.gt) goto loc_82535124;
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82535124
	if (!ctx.cr6.gt) goto loc_82535124;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535124
	if (ctx.cr6.eq) goto loc_82535124;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// li r10,99
	ctx.r10.s64 = 99;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
loc_82535124:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82535144
	if (!ctx.cr6.eq) goto loc_82535144;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82535150
	if (ctx.cr6.lt) goto loc_82535150;
loc_82535144:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825351e8
	if (!ctx.cr6.eq) goto loc_825351E8;
loc_82535150:
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825351e8
	if (ctx.cr6.eq) goto loc_825351E8;
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825351e8
	if (!ctx.cr6.gt) goto loc_825351E8;
	// bl 0x823ea118
	ctx.lr = 0x8253516C;
	sub_823EA118(ctx, base);
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
	ctx.lr = 0x82535184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825351e8
	if (ctx.cr0.eq) goto loc_825351E8;
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x825351e8
	if (!ctx.cr6.gt) goto loc_825351E8;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825351e8
	if (!ctx.cr6.eq) goto loc_825351E8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,2244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x825351c8
	if (ctx.cr6.gt) goto loc_825351C8;
	// lwz r11,1708(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825351e8
	if (!ctx.cr6.eq) goto loc_825351E8;
loc_825351C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825351E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825351E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535200"))) PPC_WEAK_FUNC(sub_82535200);
PPC_FUNC_IMPL(__imp__sub_82535200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e8
	ctx.lr = 0x82535208;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x82540248
	ctx.lr = 0x82535220;
	sub_82540248(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// li r20,1
	ctx.r20.s64 = 1;
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 5, ctx.xer);
	// beq cr6,0x8253542c
	if (ctx.cr6.eq) goto loc_8253542C;
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// bne cr6,0x825355bc
	if (!ctx.cr6.eq) goto loc_825355BC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm. r10,r21,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82535300
	if (ctx.cr0.eq) goto loc_82535300;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,3452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// stfs f31,2244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2244, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r20,6952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6952, ctx.r20.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2240, temp.u32);
	// ble cr6,0x825352b0
	if (!ctx.cr6.gt) goto loc_825352B0;
	// lwz r11,3448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3448);
loc_82535278:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x8253529c
	if (ctx.cr6.eq) goto loc_8253529C;
	// lwz r10,3452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82535278
	if (ctx.cr6.lt) goto loc_82535278;
	// b 0x825352b0
	goto loc_825352B0;
loc_8253529C:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,3436
	ctx.r3.s64 = ctx.r31.s64 + 3436;
	// bl 0x82332ca8
	ctx.lr = 0x825352B0;
	sub_82332CA8(ctx, base);
loc_825352B0:
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825352fc
	if (!ctx.cr6.gt) goto loc_825352FC;
	// lwz r11,3448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3448);
loc_825352C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x825352e8
	if (ctx.cr6.eq) goto loc_825352E8;
	// lwz r10,3452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825352c4
	if (ctx.cr6.lt) goto loc_825352C4;
	// b 0x825352fc
	goto loc_825352FC;
loc_825352E8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,3436
	ctx.r3.s64 = ctx.r31.s64 + 3436;
	// bl 0x82332ca8
	ctx.lr = 0x825352FC;
	sub_82332CA8(ctx, base);
loc_825352FC:
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
loc_82535300:
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535560
	if (ctx.cr0.eq) goto loc_82535560;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,24284
	ctx.r4.s64 = 1591476224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32798
	ctx.r4.u64 = ctx.r4.u64 | 32798;
	// lwz r11,1060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82535324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253533C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825353a0
	if (ctx.cr6.eq) goto loc_825353A0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x8253536C;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x825353A0;
	sub_8282B1E0(ctx, base);
loc_825353A0:
	// lwz r11,6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535560
	if (ctx.cr6.eq) goto loc_82535560;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x825353D0;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6828(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x82535404;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535560
	if (ctx.cr0.eq) goto loc_82535560;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r4,24284
	ctx.r4.s64 = 1591476224;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r4,r4,32798
	ctx.r4.u64 = ctx.r4.u64 | 32798;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,284(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// b 0x82535538
	goto loc_82535538;
loc_8253542C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// rlwinm. r10,r21,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x82535464
	if (ctx.cr0.eq) goto loc_82535464;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,5356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stfs f31,2244(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2244, temp.u32);
	// stw r20,6952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6952, ctx.r20.u32);
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// ori r9,r9,1535
	ctx.r9.u64 = ctx.r9.u64 | 1535;
	// lfs f0,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2240(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2240, temp.u32);
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
loc_82535464:
	// clrlwi. r11,r21,31
	ctx.r11.u64 = ctx.r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535560
	if (ctx.cr0.eq) goto loc_82535560;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17412
	ctx.r3.s64 = ctx.r11.s64 + 17412;
	// bl 0x82816528
	ctx.lr = 0x82535478;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// bl 0x8284da30
	ctx.lr = 0x825354A8;
	sub_8284DA30(ctx, base);
	// lwz r5,6820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ld r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// beq cr6,0x825354e8
	if (ctx.cr6.eq) goto loc_825354E8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r10,r27,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r29,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8282b1e0
	ctx.lr = 0x825354E8;
	sub_8282B1E0(ctx, base);
loc_825354E8:
	// lwz r5,6828(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82535560
	if (ctx.cr6.eq) goto loc_82535560;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r10,r27,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rldicr r8,r29,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8282b1e0
	ctx.lr = 0x82535518;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535560
	if (ctx.cr0.eq) goto loc_82535560;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
loc_82535538:
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82535560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82535560:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x825355bc
	if (ctx.cr6.eq) goto loc_825355BC;
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825355bc
	if (ctx.cr6.eq) goto loc_825355BC;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82535590
	if (!ctx.cr6.eq) goto loc_82535590;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8253559c
	if (ctx.cr6.lt) goto loc_8253559C;
loc_82535590:
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825355bc
	if (!ctx.cr6.eq) goto loc_825355BC;
loc_8253559C:
	// bl 0x823ea118
	ctx.lr = 0x825355A0;
	sub_823EA118(ctx, base);
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
	ctx.lr = 0x825355B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r20,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r20.u32);
loc_825355BC:
	// rlwinm. r11,r21,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535628
	if (ctx.cr0.eq) goto loc_82535628;
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 5, ctx.xer);
	// beq cr6,0x825355d4
	if (ctx.cr6.eq) goto loc_825355D4;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// bne cr6,0x82535628
	if (!ctx.cr6.eq) goto loc_82535628;
loc_825355D4:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82535628
	if (!ctx.cr6.gt) goto loc_82535628;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r10,188(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82535628
	if (!ctx.cr6.eq) goto loc_82535628;
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82535628
	if (!ctx.cr6.eq) goto loc_82535628;
	// lwz r11,5628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535618
	if (ctx.cr6.eq) goto loc_82535618;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535618
	if (!ctx.cr6.eq) goto loc_82535618;
	// stw r20,5632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5632, ctx.r20.u32);
loc_82535618:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82535628;
	sub_82409BE0(ctx, base);
loc_82535628:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82a4ea38
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535638"))) PPC_WEAK_FUNC(sub_82535638);
PPC_FUNC_IMPL(__imp__sub_82535638) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82534580
	ctx.lr = 0x82535654;
	sub_82534580(ctx, base);
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6912);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82540718
	ctx.lr = 0x8253569C;
	sub_82540718(ctx, base);
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

__attribute__((alias("__imp__sub_825356B0"))) PPC_WEAK_FUNC(sub_825356B0);
PPC_FUNC_IMPL(__imp__sub_825356B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825356B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,17424
	ctx.r3.s64 = ctx.r11.s64 + 17424;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82816528
	ctx.lr = 0x825356D4;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82535724
	if (ctx.cr6.eq) goto loc_82535724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,17456
	ctx.r3.s64 = ctx.r11.s64 + 17456;
	// bl 0x82816528
	ctx.lr = 0x825356EC;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82535724
	if (ctx.cr6.eq) goto loc_82535724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r29,64(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,17492
	ctx.r3.s64 = ctx.r11.s64 + 17492;
	// bl 0x82816528
	ctx.lr = 0x82535704;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82535724
	if (ctx.cr6.eq) goto loc_82535724;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r3,r11,17324
	ctx.r3.s64 = ctx.r11.s64 + 17324;
	// bl 0x82816528
	ctx.lr = 0x8253571C;
	sub_82816528(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82535750
	if (!ctx.cr6.eq) goto loc_82535750;
loc_82535724:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82535738;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82535750;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82535750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535758"))) PPC_WEAK_FUNC(sub_82535758);
PPC_FUNC_IMPL(__imp__sub_82535758) {
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
	// bl 0x824ea480
	ctx.lr = 0x82535768;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535788"))) PPC_WEAK_FUNC(sub_82535788);
PPC_FUNC_IMPL(__imp__sub_82535788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535798"))) PPC_WEAK_FUNC(sub_82535798);
PPC_FUNC_IMPL(__imp__sub_82535798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825357A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332d50
	ctx.lr = 0x825357BC;
	sub_82332D50(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825357e8
	if (ctx.cr0.eq) goto loc_825357E8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823339b8
	ctx.lr = 0x825357E0;
	sub_823339B8(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_825357E8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825357F8"))) PPC_WEAK_FUNC(sub_825357F8);
PPC_FUNC_IMPL(__imp__sub_825357F8) {
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
	// addi r31,r11,12076
	ctx.r31.s64 = ctx.r11.s64 + 12076;
	// lwz r11,12080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12080);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82535840
	if (!ctx.cr0.eq) goto loc_82535840;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,17624
	ctx.r9.s64 = ctx.r9.s64 + 17624;
	// stw r11,12080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12080, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,19744
	ctx.r3.s64 = ctx.r11.s64 + 19744;
	// bl 0x82a4c758
	ctx.lr = 0x82535840;
	sub_82A4C758(ctx, base);
loc_82535840:
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

__attribute__((alias("__imp__sub_82535858"))) PPC_WEAK_FUNC(sub_82535858);
PPC_FUNC_IMPL(__imp__sub_82535858) {
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82535870;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82535894
	if (ctx.cr0.eq) goto loc_82535894;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c008
	ctx.lr = 0x82535880;
	sub_8248C008(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17552
	ctx.r11.s64 = ctx.r11.s64 + 17552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82535898
	goto loc_82535898;
loc_82535894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82535898:
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

__attribute__((alias("__imp__sub_825358B0"))) PPC_WEAK_FUNC(sub_825358B0);
PPC_FUNC_IMPL(__imp__sub_825358B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825357f8
	ctx.lr = 0x825358D0;
	sub_825357F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825358e4
	if (ctx.cr6.eq) goto loc_825358E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8248c1c0
	ctx.lr = 0x825358E4;
	sub_8248C1C0(ctx, base);
loc_825358E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535900"))) PPC_WEAK_FUNC(sub_82535900);
PPC_FUNC_IMPL(__imp__sub_82535900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82535938
	if (ctx.cr6.eq) goto loc_82535938;
	// bl 0x825357f8
	ctx.lr = 0x82535928;
	sub_825357F8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82535938
	if (!ctx.cr6.eq) goto loc_82535938;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82535944
	goto loc_82535944;
loc_82535938:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8248c220
	ctx.lr = 0x82535944;
	sub_8248C220(ctx, base);
loc_82535944:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535960"))) PPC_WEAK_FUNC(sub_82535960);
PPC_FUNC_IMPL(__imp__sub_82535960) {
	PPC_FUNC_PROLOGUE();
	// b 0x825357f8
	sub_825357F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535968"))) PPC_WEAK_FUNC(sub_82535968);
PPC_FUNC_IMPL(__imp__sub_82535968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,408
	ctx.r3.s64 = 408;
	// bl 0x82833108
	ctx.lr = 0x82535988;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825359b0
	if (ctx.cr0.eq) goto loc_825359B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8248c2c8
	ctx.lr = 0x8253599C;
	sub_8248C2C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,17552
	ctx.r11.s64 = ctx.r11.s64 + 17552;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825359b4
	goto loc_825359B4;
loc_825359B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825359B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825359D0"))) PPC_WEAK_FUNC(sub_825359D0);
PPC_FUNC_IMPL(__imp__sub_825359D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825359E0"))) PPC_WEAK_FUNC(sub_825359E0);
PPC_FUNC_IMPL(__imp__sub_825359E0) {
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
	// lwz r11,25904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25904);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82535a20
	if (!ctx.cr0.eq) goto loc_82535A20;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,25904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25904, ctx.r11.u32);
	// addi r3,r9,17528
	ctx.r3.s64 = ctx.r9.s64 + 17528;
	// bl 0x82816528
	ctx.lr = 0x82535A18;
	sub_82816528(ctx, base);
	// stw r3,25900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25900, ctx.r3.u32);
	// b 0x82535a24
	goto loc_82535A24;
loc_82535A20:
	// lwz r3,25900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25900);
loc_82535A24:
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

__attribute__((alias("__imp__sub_82535A38"))) PPC_WEAK_FUNC(sub_82535A38);
PPC_FUNC_IMPL(__imp__sub_82535A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825357f8
	ctx.lr = 0x82535A58;
	sub_825357F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82535A6C;
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

__attribute__((alias("__imp__sub_82535A88"))) PPC_WEAK_FUNC(sub_82535A88);
PPC_FUNC_IMPL(__imp__sub_82535A88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82535ac4
	if (ctx.cr6.eq) goto loc_82535AC4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535ab4
	if (!ctx.cr6.eq) goto loc_82535AB4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535ab4
	if (ctx.cr6.eq) goto loc_82535AB4;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82535AB4:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
loc_82535AC4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535AF0"))) PPC_WEAK_FUNC(sub_82535AF0);
PPC_FUNC_IMPL(__imp__sub_82535AF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16428
	ctx.r3.s64 = ctx.r11.s64 + -16428;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535B00"))) PPC_WEAK_FUNC(sub_82535B00);
PPC_FUNC_IMPL(__imp__sub_82535B00) {
	PPC_FUNC_PROLOGUE();
	// b 0x823afd00
	sub_823AFD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535B08"))) PPC_WEAK_FUNC(sub_82535B08);
PPC_FUNC_IMPL(__imp__sub_82535B08) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x82535B24;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535b3c
	if (ctx.cr0.eq) goto loc_82535B3C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82535c78
	ctx.lr = 0x82535B38;
	sub_82535C78(ctx, base);
	// b 0x82535b40
	goto loc_82535B40;
loc_82535B3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82535B40:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535b54
	if (ctx.cr6.eq) goto loc_82535B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82535B54:
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

__attribute__((alias("__imp__sub_82535B68"))) PPC_WEAK_FUNC(sub_82535B68);
PPC_FUNC_IMPL(__imp__sub_82535B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82535b98
	if (ctx.cr6.eq) goto loc_82535B98;
	// bl 0x823afd00
	ctx.lr = 0x82535B90;
	sub_823AFD00(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82535bd4
	if (ctx.cr6.eq) goto loc_82535BD4;
loc_82535B98:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dc48
	ctx.lr = 0x82535BAC;
	sub_8252DC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82535bd4
	if (!ctx.cr0.eq) goto loc_82535BD4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x82535BC8;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82535bd8
	if (ctx.cr0.eq) goto loc_82535BD8;
loc_82535BD4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82535BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535BF0"))) PPC_WEAK_FUNC(sub_82535BF0);
PPC_FUNC_IMPL(__imp__sub_82535BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afd00
	ctx.lr = 0x82535C10;
	sub_823AFD00(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82535c20
	if (!ctx.cr6.eq) goto loc_82535C20;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x82535c50
	goto loc_82535C50;
loc_82535C20:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dd10
	ctx.lr = 0x82535C34;
	sub_8252DD10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82535c50
	if (!ctx.cr0.eq) goto loc_82535C50;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x82535C50;
	sub_82346ED0(ctx, base);
loc_82535C50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535C68"))) PPC_WEAK_FUNC(sub_82535C68);
PPC_FUNC_IMPL(__imp__sub_82535C68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8252dec0
	sub_8252DEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535C78"))) PPC_WEAK_FUNC(sub_82535C78);
PPC_FUNC_IMPL(__imp__sub_82535C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82535C80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,11656
	ctx.r11.s64 = ctx.r11.s64 + 11656;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82535cdc
	if (!ctx.cr6.eq) goto loc_82535CDC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82535ce8
	goto loc_82535CE8;
loc_82535CDC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82535CE8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x82535CF0;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82535d00
	if (!ctx.cr6.eq) goto loc_82535D00;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82535d0c
	goto loc_82535D0C;
loc_82535D00:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82535D0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x82535D18;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,7984
	ctx.r11.s64 = ctx.r11.s64 + 7984;
	// addi r10,r10,9556
	ctx.r10.s64 = ctx.r10.s64 + 9556;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x82535d7c
	if (!ctx.cr6.eq) goto loc_82535D7C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82535d88
	goto loc_82535D88;
loc_82535D7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82535D88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x82535D94;
	sub_82346F30(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,17648
	ctx.r11.s64 = ctx.r11.s64 + 17648;
	// addi r10,r10,19220
	ctx.r10.s64 = ctx.r10.s64 + 19220;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535DF8"))) PPC_WEAK_FUNC(sub_82535DF8);
PPC_FUNC_IMPL(__imp__sub_82535DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82535E00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r11,11656
	ctx.r11.s64 = ctx.r11.s64 + 11656;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x82535E4C;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x82535E58;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e180
	ctx.lr = 0x82535E64;
	sub_8252E180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x82535E70;
	sub_825BA650(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,17648
	ctx.r11.s64 = ctx.r11.s64 + 17648;
	// addi r10,r10,19220
	ctx.r10.s64 = ctx.r10.s64 + 19220;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,1956(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1956, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535EE8"))) PPC_WEAK_FUNC(sub_82535EE8);
PPC_FUNC_IMPL(__imp__sub_82535EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x82535F10;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x82535F20;
	sub_82501810(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,268
	ctx.xer.ca = ctx.r11.u32 > 4294967027;
	ctx.r11.s64 = ctx.r11.s64 + 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535f4c
	if (ctx.cr0.eq) goto loc_82535F4C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82535f4c
	if (ctx.cr6.eq) goto loc_82535F4C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82535f50
	goto loc_82535F50;
loc_82535F4C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82535F50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16356
	ctx.r3.s64 = ctx.r11.s64 + -16356;
	// bl 0x82816528
	ctx.lr = 0x82535F5C;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x82535F6C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x82535F7C;
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

__attribute__((alias("__imp__sub_82535F98"))) PPC_WEAK_FUNC(sub_82535F98);
PPC_FUNC_IMPL(__imp__sub_82535F98) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x825369f8
	ctx.lr = 0x82535FC0;
	sub_825369F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535ff8
	if (ctx.cr0.eq) goto loc_82535FF8;
	// lwz r11,6992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535ff8
	if (ctx.cr6.eq) goto loc_82535FF8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x82535FE0;
	sub_82816528(ctx, base);
	// lwz r10,-32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r3,1584(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1584, ctx.r3.u32);
	// b 0x82536010
	goto loc_82536010;
loc_82535FF8:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824cfd40
	ctx.lr = 0x8253600C;
	sub_824CFD40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82536010:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82536028"))) PPC_WEAK_FUNC(sub_82536028);
PPC_FUNC_IMPL(__imp__sub_82536028) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x825ba7d0
	sub_825BA7D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536038"))) PPC_WEAK_FUNC(sub_82536038);
PPC_FUNC_IMPL(__imp__sub_82536038) {
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
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x825369f8
	ctx.lr = 0x82536058;
	sub_825369F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6972, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536070"))) PPC_WEAK_FUNC(sub_82536070);
PPC_FUNC_IMPL(__imp__sub_82536070) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x825369f8
	ctx.lr = 0x8253609C;
	sub_825369F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825360B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6972(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6972);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825360c8
	if (ctx.cr6.eq) goto loc_825360C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r11.u32);
	// b 0x825360e0
	goto loc_825360E0;
loc_825360C8:
	// lwz r10,6980(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6980);
	// lwz r11,6976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6976);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r10.u32);
	// stw r11,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r11.u32);
loc_825360E0:
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82536110
	if (ctx.cr6.eq) goto loc_82536110;
	// lwz r3,1756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82536110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82536110:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536128"))) PPC_WEAK_FUNC(sub_82536128);
PPC_FUNC_IMPL(__imp__sub_82536128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82536130;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824cf588
	ctx.lr = 0x82536154;
	sub_824CF588(ctx, base);
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x825369f8
	ctx.lr = 0x82536168;
	sub_825369F8(ctx, base);
	// addic. r11,r30,-32
	ctx.xer.ca = ctx.r30.u32 > 31;
	ctx.r11.s64 = ctx.r30.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bne 0x82536180
	if (!ctx.cr0.eq) goto loc_82536180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82536190
	goto loc_82536190;
loc_82536180:
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
loc_82536190:
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,1896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1896);
	// bl 0x824d77f8
	ctx.lr = 0x825361A8;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825361AC;
	sub_82333A20(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825362bc
	if (ctx.cr0.eq) goto loc_825362BC;
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x825361F0;
	sub_82817280(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x82819da0
	ctx.lr = 0x82536220;
	sub_82819DA0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82536234
	if (ctx.cr6.eq) goto loc_82536234;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r10.u32);
loc_82536234:
	// lwz r10,5400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5400);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r10.u32);
	// bge cr6,0x82536248
	if (!ctx.cr6.lt) goto loc_82536248;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82536248:
	// cmpwi cr6,r3,18000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18000, ctx.xer);
	// blt cr6,0x825362b0
	if (ctx.cr6.lt) goto loc_825362B0;
	// lfs f0,6984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6984);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,6984(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82536288
	if (!ctx.cr6.lt) goto loc_82536288;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x825362bc
	if (!ctx.cr6.gt) goto loc_825362BC;
	// lwz r10,6992(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825362bc
	if (ctx.cr6.eq) goto loc_825362BC;
loc_82536288:
	// lwz r10,3424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r10,196(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x825362bc
	if (ctx.cr6.eq) goto loc_825362BC;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r10.u32);
	// beq cr6,0x825362bc
	if (ctx.cr6.eq) goto loc_825362BC;
	// stw r29,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r29.u32);
	// b 0x825362bc
	goto loc_825362BC;
loc_825362B0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
loc_825362BC:
	// lwz r11,-32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,196(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 196);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,192(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 192);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,1376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1376);
	// blt cr6,0x825362f4
	if (ctx.cr6.lt) goto loc_825362F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82536308
	if (ctx.cr6.eq) goto loc_82536308;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// lfs f0,30356(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82536304
	goto loc_82536304;
loc_825362F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82536308
	if (ctx.cr6.eq) goto loc_82536308;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,-32488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32488);
	ctx.f0.f64 = double(temp.f32);
loc_82536304:
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
loc_82536308:
	// lwz r11,3984(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3984);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536324
	if (ctx.cr6.eq) goto loc_82536324;
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536324
	if (!ctx.cr6.eq) goto loc_82536324;
	// stw r29,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r29.u32);
loc_82536324:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536330"))) PPC_WEAK_FUNC(sub_82536330);
PPC_FUNC_IMPL(__imp__sub_82536330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82536338;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825363f8
	if (ctx.cr6.eq) goto loc_825363F8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-16324
	ctx.r11.s64 = ctx.r11.s64 + -16324;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r10,r7,9308
	ctx.r10.s64 = ctx.r7.s64 + 9308;
	// addi r9,r6,-22652
	ctx.r9.s64 = ctx.r6.s64 + -22652;
	// addi r11,r5,-23092
	ctx.r11.s64 = ctx.r5.s64 + -23092;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// addi r28,r31,136
	ctx.r28.s64 = ctx.r31.s64 + 136;
	// bl 0x823e9df8
	ctx.lr = 0x825363B0;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x823e9cf0
	ctx.lr = 0x825363BC;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823e98b8
	ctx.lr = 0x825363C8;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x824d2430
	ctx.lr = 0x825363D4;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d6648
	ctx.lr = 0x825363E0;
	sub_823D6648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da7f8
	ctx.lr = 0x825363EC;
	sub_823DA7F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3848
	ctx.lr = 0x825363F8;
	sub_823D3848(ctx, base);
loc_825363F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,-16552
	ctx.r10.s64 = ctx.r10.s64 + -16552;
	// addi r9,r9,-16376
	ctx.r9.s64 = ctx.r9.s64 + -16376;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,11296
	ctx.r8.s64 = ctx.r8.s64 + 11296;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825364B0"))) PPC_WEAK_FUNC(sub_825364B0);
PPC_FUNC_IMPL(__imp__sub_825364B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x825364DC;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252de58
	ctx.lr = 0x825364F0;
	sub_8252DE58(ctx, base);
	// bl 0x823afd00
	ctx.lr = 0x825364F4;
	sub_823AFD00(ctx, base);
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
	ctx.lr = 0x8253650C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536528"))) PPC_WEAK_FUNC(sub_82536528);
PPC_FUNC_IMPL(__imp__sub_82536528) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825367d0
	if (ctx.cr6.eq) goto loc_825367D0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,251
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 251, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x825365d4
	if (ctx.cr6.eq) goto loc_825365D4;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,251
	ctx.r10.s64 = 251;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x825365cc
	if (ctx.cr6.lt) goto loc_825365CC;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x825365d4
	goto loc_825365D4;
loc_825365CC:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_825365D4:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82536608
	if (ctx.cr6.lt) goto loc_82536608;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82536614
	goto loc_82536614;
loc_82536608:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82536614:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825367d0
	if (ctx.cr0.eq) goto loc_825367D0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x825369f8
	ctx.lr = 0x82536640;
	sub_825369F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82536790
	if (ctx.cr0.eq) goto loc_82536790;
	// lwz r11,924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82536790
	if (ctx.cr6.eq) goto loc_82536790;
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536790
	if (ctx.cr6.eq) goto loc_82536790;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253668C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82536790
	if (ctx.cr0.eq) goto loc_82536790;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825366b4
	if (!ctx.cr6.eq) goto loc_825366B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825366d0
	goto loc_825366D0;
loc_825366B4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825366D0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x825366F8;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825366FC;
	sub_82333A20(ctx, base);
	// lwz r11,6992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6992);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536748
	if (!ctx.cr6.eq) goto loc_82536748;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82536740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82536790
	if (ctx.cr0.eq) goto loc_82536790;
loc_82536748:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253676C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253678C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825367a4
	goto loc_825367A4;
loc_82536790:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825367A4;
	sub_829E3DA8(ctx, base);
loc_825367A4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r9.u32);
loc_825367D0:
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

__attribute__((alias("__imp__sub_825367F0"))) PPC_WEAK_FUNC(sub_825367F0);
PPC_FUNC_IMPL(__imp__sub_825367F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825367F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x825369f8
	ctx.lr = 0x82536824;
	sub_825369F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82536964
	if (!ctx.cr6.gt) goto loc_82536964;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,6984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6984);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82536868
	if (!ctx.cr6.lt) goto loc_82536868;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82536880
	if (!ctx.cr6.gt) goto loc_82536880;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536880
	if (ctx.cr6.eq) goto loc_82536880;
loc_82536868:
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536880
	if (ctx.cr6.eq) goto loc_82536880;
	// li r29,7
	ctx.r29.s64 = 7;
	// b 0x825368b0
	goto loc_825368B0;
loc_82536880:
	// lwz r11,6980(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6980);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x82536898
	if (!ctx.cr6.lt) goto loc_82536898;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825368b8
	if (ctx.cr6.eq) goto loc_825368B8;
loc_82536898:
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825368b8
	if (ctx.cr6.eq) goto loc_825368B8;
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r28,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r28.u32);
loc_825368B0:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x825368e8
	goto loc_825368E8;
loc_825368B8:
	// lwz r11,6976(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6976);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82536970
	if (ctx.cr6.lt) goto loc_82536970;
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536970
	if (ctx.cr6.eq) goto loc_82536970;
	// stw r28,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539e00
	ctx.lr = 0x825368E0;
	sub_82539E00(ctx, base);
	// li r29,5
	ctx.r29.s64 = 5;
	// li r4,2
	ctx.r4.s64 = 2;
loc_825368E8:
	// lwz r10,-136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// lwz r9,3424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-132(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -132);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82536920;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253694C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82536964;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82536964:
	// stw r28,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r28.u32);
loc_82536968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82536970:
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-136
	ctx.r3.s64 = ctx.r11.s64 + -136;
	// bl 0x825baab8
	ctx.lr = 0x82536984;
	sub_825BAAB8(ctx, base);
	// b 0x82536968
	goto loc_82536968;
}

__attribute__((alias("__imp__sub_82536988"))) PPC_WEAK_FUNC(sub_82536988);
PPC_FUNC_IMPL(__imp__sub_82536988) {
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
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x825369f8
	ctx.lr = 0x825369C0;
	sub_825369F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825369D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x825369E4;
	sub_82347478(ctx, base);
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

__attribute__((alias("__imp__sub_825369F8"))) PPC_WEAK_FUNC(sub_825369F8);
PPC_FUNC_IMPL(__imp__sub_825369F8) {
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
	// bl 0x823afba8
	ctx.lr = 0x82536A10;
	sub_823AFBA8(ctx, base);
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
	ctx.lr = 0x82536A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82536a38
	if (!ctx.cr0.eq) goto loc_82536A38;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82536A38:
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

__attribute__((alias("__imp__sub_82536A50"))) PPC_WEAK_FUNC(sub_82536A50);
PPC_FUNC_IMPL(__imp__sub_82536A50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535af0
	sub_82535AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536A60"))) PPC_WEAK_FUNC(sub_82536A60);
PPC_FUNC_IMPL(__imp__sub_82536A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82536128
	sub_82536128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536A70"))) PPC_WEAK_FUNC(sub_82536A70);
PPC_FUNC_IMPL(__imp__sub_82536A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82536028
	sub_82536028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536A80"))) PPC_WEAK_FUNC(sub_82536A80);
PPC_FUNC_IMPL(__imp__sub_82536A80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535b00
	sub_82535B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536A90"))) PPC_WEAK_FUNC(sub_82536A90);
PPC_FUNC_IMPL(__imp__sub_82536A90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535c68
	sub_82535C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AA0"))) PPC_WEAK_FUNC(sub_82536AA0);
PPC_FUNC_IMPL(__imp__sub_82536AA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535ee8
	sub_82535EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AB0"))) PPC_WEAK_FUNC(sub_82536AB0);
PPC_FUNC_IMPL(__imp__sub_82536AB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82536070
	sub_82536070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AC0"))) PPC_WEAK_FUNC(sub_82536AC0);
PPC_FUNC_IMPL(__imp__sub_82536AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535f98
	sub_82535F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AD0"))) PPC_WEAK_FUNC(sub_82536AD0);
PPC_FUNC_IMPL(__imp__sub_82536AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82535bf0
	sub_82535BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AE0"))) PPC_WEAK_FUNC(sub_82536AE0);
PPC_FUNC_IMPL(__imp__sub_82536AE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535bf0
	sub_82535BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536AF0"))) PPC_WEAK_FUNC(sub_82536AF0);
PPC_FUNC_IMPL(__imp__sub_82536AF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535b68
	sub_82535B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536B00"))) PPC_WEAK_FUNC(sub_82536B00);
PPC_FUNC_IMPL(__imp__sub_82536B00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82536038
	sub_82536038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536B10"))) PPC_WEAK_FUNC(sub_82536B10);
PPC_FUNC_IMPL(__imp__sub_82536B10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82535b08
	sub_82535B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536B20"))) PPC_WEAK_FUNC(sub_82536B20);
PPC_FUNC_IMPL(__imp__sub_82536B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16452
	ctx.r3.s64 = ctx.r11.s64 + -16452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536B30"))) PPC_WEAK_FUNC(sub_82536B30);
PPC_FUNC_IMPL(__imp__sub_82536B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82536b68
	if (ctx.cr6.eq) goto loc_82536B68;
	// bl 0x823afba8
	ctx.lr = 0x82536B58;
	sub_823AFBA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82536b68
	if (!ctx.cr6.eq) goto loc_82536B68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82536b74
	goto loc_82536B74;
loc_82536B68:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361d18
	ctx.lr = 0x82536B74;
	sub_82361D18(ctx, base);
loc_82536B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536B90"))) PPC_WEAK_FUNC(sub_82536B90);
PPC_FUNC_IMPL(__imp__sub_82536B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x823afba8
	sub_823AFBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536B98"))) PPC_WEAK_FUNC(sub_82536B98);
PPC_FUNC_IMPL(__imp__sub_82536B98) {
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
	// li r3,7008
	ctx.r3.s64 = 7008;
	// bl 0x82833108
	ctx.lr = 0x82536BB4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82536bc8
	if (ctx.cr0.eq) goto loc_82536BC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82536cf0
	ctx.lr = 0x82536BC4;
	sub_82536CF0(ctx, base);
	// b 0x82536bcc
	goto loc_82536BCC;
loc_82536BC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82536BCC:
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

__attribute__((alias("__imp__sub_82536BE0"))) PPC_WEAK_FUNC(sub_82536BE0);
PPC_FUNC_IMPL(__imp__sub_82536BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823afba8
	ctx.lr = 0x82536C00;
	sub_823AFBA8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82536c14
	if (ctx.cr6.eq) goto loc_82536C14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x82536C14;
	sub_82361DC8(ctx, base);
loc_82536C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536C30"))) PPC_WEAK_FUNC(sub_82536C30);
PPC_FUNC_IMPL(__imp__sub_82536C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,19296
	ctx.r3.s64 = ctx.r11.s64 + 19296;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536C40"))) PPC_WEAK_FUNC(sub_82536C40);
PPC_FUNC_IMPL(__imp__sub_82536C40) {
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
	// lwz r11,12084(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82536c80
	if (!ctx.cr0.eq) goto loc_82536C80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,12084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12084, ctx.r11.u32);
	// addi r3,r9,19356
	ctx.r3.s64 = ctx.r9.s64 + 19356;
	// bl 0x82816528
	ctx.lr = 0x82536C78;
	sub_82816528(ctx, base);
	// stw r3,12088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12088, ctx.r3.u32);
	// b 0x82536c84
	goto loc_82536C84;
loc_82536C80:
	// lwz r3,12088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12088);
loc_82536C84:
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

__attribute__((alias("__imp__sub_82536C98"))) PPC_WEAK_FUNC(sub_82536C98);
PPC_FUNC_IMPL(__imp__sub_82536C98) {
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
	// lwz r11,12092(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12092);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82536cd8
	if (!ctx.cr0.eq) goto loc_82536CD8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,12092(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12092, ctx.r11.u32);
	// addi r3,r9,19380
	ctx.r3.s64 = ctx.r9.s64 + 19380;
	// bl 0x82816528
	ctx.lr = 0x82536CD0;
	sub_82816528(ctx, base);
	// stw r3,12096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12096, ctx.r3.u32);
	// b 0x82536cdc
	goto loc_82536CDC;
loc_82536CD8:
	// lwz r3,12096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12096);
loc_82536CDC:
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

__attribute__((alias("__imp__sub_82536CF0"))) PPC_WEAK_FUNC(sub_82536CF0);
PPC_FUNC_IMPL(__imp__sub_82536CF0) {
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
	// bl 0x82361e40
	ctx.lr = 0x82536D10;
	sub_82361E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,20152
	ctx.r11.s64 = ctx.r11.s64 + 20152;
	// addi r10,r10,22600
	ctx.r10.s64 = ctx.r10.s64 + 22600;
	// addi r9,r9,22652
	ctx.r9.s64 = ctx.r9.s64 + 22652;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// lwz r11,6916(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6916);
	// stw r11,6916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6916, ctx.r11.u32);
	// lwz r11,6920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6920);
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// lwz r11,6924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// stw r11,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r11.u32);
	// lwz r11,6928(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6928);
	// stw r11,6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// lwz r11,6932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6932);
	// stw r11,6932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6932, ctx.r11.u32);
	// lwz r11,6936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	// stw r11,6936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6936, ctx.r11.u32);
	// lwz r11,6940(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6940);
	// stw r11,6940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6940, ctx.r11.u32);
	// lwz r11,6944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6944);
	// stw r11,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r11.u32);
	// lwz r11,6948(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6948);
	// stw r11,6948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6948, ctx.r11.u32);
	// lwz r11,6952(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6952);
	// stw r11,6952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6952, ctx.r11.u32);
	// lwz r11,6956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	// stw r11,6956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6956, ctx.r11.u32);
	// lwz r11,6960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6960);
	// stw r11,6960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6960, ctx.r11.u32);
	// lwz r11,6964(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6964);
	// stw r11,6964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6964, ctx.r11.u32);
	// lwz r11,6968(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	// stw r11,6968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6968, ctx.r11.u32);
	// lwz r11,6972(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6972);
	// stw r11,6972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6972, ctx.r11.u32);
	// lwz r11,6976(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	// stw r11,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r11.u32);
	// lwz r11,6980(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6980);
	// stw r11,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r11.u32);
	// lfs f0,6984(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6984);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// lfs f0,6988(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6988);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6988, temp.u32);
	// lwz r11,6992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6992);
	// stw r11,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536DF8"))) PPC_WEAK_FUNC(sub_82536DF8);
PPC_FUNC_IMPL(__imp__sub_82536DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,20152
	ctx.r11.s64 = ctx.r11.s64 + 20152;
	// addi r10,r10,22600
	ctx.r10.s64 = ctx.r10.s64 + 22600;
	// addi r9,r9,22652
	ctx.r9.s64 = ctx.r9.s64 + 22652;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// bl 0x82361ff0
	ctx.lr = 0x82536E3C;
	sub_82361FF0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536e4c
	if (ctx.cr0.eq) goto loc_82536E4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82536E4C;
	sub_82332DB8(ctx, base);
loc_82536E4C:
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

__attribute__((alias("__imp__sub_82536E68"))) PPC_WEAK_FUNC(sub_82536E68);
PPC_FUNC_IMPL(__imp__sub_82536E68) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-22032
	ctx.r31.s64 = ctx.r11.s64 + -22032;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82536EA0;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536ecc
	if (ctx.cr0.eq) goto loc_82536ECC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_82536ECC:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82536ef0
	if (ctx.cr6.eq) goto loc_82536EF0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82536EF0;
	sub_82332C38(ctx, base);
loc_82536EF0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82536F08"))) PPC_WEAK_FUNC(sub_82536F08);
PPC_FUNC_IMPL(__imp__sub_82536F08) {
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
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
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
	// ble cr6,0x82536f74
	if (!ctx.cr6.gt) goto loc_82536F74;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82536F44:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82536f64
	if (ctx.cr6.eq) goto loc_82536F64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82536f44
	if (ctx.cr6.lt) goto loc_82536F44;
	// b 0x82536f74
	goto loc_82536F74;
loc_82536F64:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82536F74:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82536f9c
	if (ctx.cr6.eq) goto loc_82536F9C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82536F94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82536fa0
	goto loc_82536FA0;
loc_82536F9C:
	// bl 0x8253e3c8
	ctx.lr = 0x82536FA0;
	sub_8253E3C8(ctx, base);
loc_82536FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82536FB0"))) PPC_WEAK_FUNC(sub_82536FB0);
PPC_FUNC_IMPL(__imp__sub_82536FB0) {
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
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82537010
	if (!ctx.cr6.gt) goto loc_82537010;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82536FDC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82536ffc
	if (ctx.cr6.eq) goto loc_82536FFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82536fdc
	if (ctx.cr6.lt) goto loc_82536FDC;
	// b 0x82537010
	goto loc_82537010;
loc_82536FFC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82537018
	if (!ctx.cr6.eq) goto loc_82537018;
loc_82537010:
	// bl 0x8253e470
	ctx.lr = 0x82537014;
	sub_8253E470(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82537018:
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

__attribute__((alias("__imp__sub_82537030"))) PPC_WEAK_FUNC(sub_82537030);
PPC_FUNC_IMPL(__imp__sub_82537030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-22032
	ctx.r11.s64 = ctx.r11.s64 + -22032;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825370b0
	if (!ctx.cr6.gt) goto loc_825370B0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253706C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8253708c
	if (ctx.cr6.eq) goto loc_8253708C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253706c
	if (ctx.cr6.lt) goto loc_8253706C;
	// b 0x825370b0
	goto loc_825370B0;
loc_8253708C:
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
	ctx.lr = 0x825370A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825370bc
	if (!ctx.cr0.eq) goto loc_825370BC;
loc_825370B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253e4f0
	ctx.lr = 0x825370BC;
	sub_8253E4F0(ctx, base);
loc_825370BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825370D8"))) PPC_WEAK_FUNC(sub_825370D8);
PPC_FUNC_IMPL(__imp__sub_825370D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825370E0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253e598
	ctx.lr = 0x825370F0;
	sub_8253E598(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,20152
	ctx.r11.s64 = ctx.r11.s64 + 20152;
	// addi r10,r10,22600
	ctx.r10.s64 = ctx.r10.s64 + 22600;
	// addi r9,r9,22652
	ctx.r9.s64 = ctx.r9.s64 + 22652;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-16428
	ctx.r3.s64 = ctx.r11.s64 + -16428;
	// bl 0x82816528
	ctx.lr = 0x82537120;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,19804
	ctx.r3.s64 = ctx.r11.s64 + 19804;
	// bl 0x82816528
	ctx.lr = 0x82537130;
	sub_82816528(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r29,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r29.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r9.u32);
	// stw r8,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r29,6692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6692, ctx.r29.u32);
	// beq cr6,0x8253716c
	if (ctx.cr6.eq) goto loc_8253716C;
	// stw r28,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r28.u32);
loc_8253716C:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stw r29,1976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1976, ctx.r29.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r29,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,5628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5628, ctx.r29.u32);
	// li r7,10000
	ctx.r7.s64 = 10000;
	// stw r28,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r28.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// li r5,50
	ctx.r5.s64 = 50;
	// lfs f0,20516(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r5,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r5.u32);
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// stfs f31,6984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// stw r7,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r7.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// stw r6,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r6.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r10,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r10.u32);
	// lis r5,-10742
	ctx.r5.s64 = -703987712;
	// stw r29,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r29.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r29,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// ori r5,r5,61860
	ctx.r5.u64 = ctx.r5.u64 | 61860;
	// addi r4,r31,6836
	ctx.r4.s64 = ctx.r31.s64 + 6836;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825371F0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,19377
	ctx.r5.s64 = 1269891072;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,13284
	ctx.r5.u64 = ctx.r5.u64 | 13284;
	// addi r4,r31,6840
	ctx.r4.s64 = ctx.r31.s64 + 6840;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82537210;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,31492
	ctx.r5.s64 = 2063859712;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,57583
	ctx.r5.u64 = ctx.r5.u64 | 57583;
	// addi r4,r31,6844
	ctx.r4.s64 = ctx.r31.s64 + 6844;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82537230;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-22165
	ctx.r5.s64 = -1452605440;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,27776
	ctx.r5.u64 = ctx.r5.u64 | 27776;
	// addi r4,r31,6964
	ctx.r4.s64 = ctx.r31.s64 + 6964;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82537250;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-1393
	ctx.r5.s64 = -91291648;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,11365
	ctx.r5.u64 = ctx.r5.u64 | 11365;
	// addi r4,r31,6968
	ctx.r4.s64 = ctx.r31.s64 + 6968;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82537270;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-23060
	ctx.r5.s64 = -1511260160;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,16363
	ctx.r5.u64 = ctx.r5.u64 | 16363;
	// addi r4,r31,6816
	ctx.r4.s64 = ctx.r31.s64 + 6816;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82537290;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,-20865
	ctx.r5.s64 = -1367408640;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,18469
	ctx.r5.u64 = ctx.r5.u64 | 18469;
	// addi r4,r31,6820
	ctx.r4.s64 = ctx.r31.s64 + 6820;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825372B0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,18666
	ctx.r5.s64 = 1223294976;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,11663
	ctx.r5.u64 = ctx.r5.u64 | 11663;
	// addi r4,r31,6824
	ctx.r4.s64 = ctx.r31.s64 + 6824;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825372D0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lis r5,29187
	ctx.r5.s64 = 1912799232;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,5415
	ctx.r5.u64 = ctx.r5.u64 | 5415;
	// addi r4,r31,6828
	ctx.r4.s64 = ctx.r31.s64 + 6828;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825372F0;
	sub_823CF190(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,6988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6988, temp.u32);
	// lis r9,13652
	ctx.r9.s64 = 894697472;
	// stw r29,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r29.u32);
	// lis r8,12560
	ctx.r8.s64 = 823132160;
	// stw r28,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r28.u32);
	// lis r7,11603
	ctx.r7.s64 = 760414208;
	// lfs f0,-11424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r9,33869
	ctx.r9.u64 = ctx.r9.u64 | 33869;
	// lfs f13,16620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16620);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r8,18372
	ctx.r11.u64 = ctx.r8.u64 | 18372;
	// ori r10,r7,47369
	ctx.r10.u64 = ctx.r7.u64 | 47369;
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// stfs f13,6908(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6908, temp.u32);
	// stw r9,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// stw r10,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82537348"))) PPC_WEAK_FUNC(sub_82537348);
PPC_FUNC_IMPL(__imp__sub_82537348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82537350;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8253fcd8
	ctx.lr = 0x82537364;
	sub_8253FCD8(ctx, base);
	// lwz r11,5728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82537378
	if (ctx.cr6.eq) goto loc_82537378;
	// lwz r4,5724(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// b 0x82537380
	goto loc_82537380;
loc_82537378:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82537380:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x82537388;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825373ac
	if (ctx.cr6.eq) goto loc_825373AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825373ac
	if (ctx.cr6.eq) goto loc_825373AC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x825373AC;
	sub_82332DB8(ctx, base);
loc_825373AC:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82537800
	if (ctx.cr6.eq) goto loc_82537800;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82537800
	if (ctx.cr6.eq) goto loc_82537800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x825373CC;
	sub_82507AF0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x825373EC;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82537414;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253743C;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82537464;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82537480;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253749C;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825374B8;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r29,r28,3412
	ctx.r29.s64 = ctx.r28.s64 + 3412;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507928
	ctx.lr = 0x825374CC;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825374E4;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253750C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82537534;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253755C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82537578;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82537594;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825375B0;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82507928
	ctx.lr = 0x825375C0;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825375D8;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82537600;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18776
	ctx.r4.s64 = ctx.r11.s64 + 18776;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82537628;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82537650;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253766C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82537688;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825376A4;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82507928
	ctx.lr = 0x825376B4;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-12260
	ctx.r4.s64 = ctx.r11.s64 + -12260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825376CC;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x825376F4;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253771C;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-12124
	ctx.r4.s64 = ctx.r11.s64 + -12124;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x82537744;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r11,-12104
	ctx.r4.s64 = ctx.r11.s64 + -12104;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82537760;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,-12084
	ctx.r4.s64 = ctx.r11.s64 + -12084;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253777C;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,19836
	ctx.r4.s64 = ctx.r11.s64 + 19836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82537798;
	sub_829E6978(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82507928
	ctx.lr = 0x825377A8;
	sub_82507928(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,32748(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82507928
	ctx.lr = 0x825377C4;
	sub_82507928(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,1684
	ctx.r29.s64 = ctx.r11.s64 + 1684;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x829e6a48
	ctx.lr = 0x825377D8;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825377fc
	if (ctx.cr0.eq) goto loc_825377FC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825377F4;
	sub_829E6978(ctx, base);
	// stfs f1,6988(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6988, temp.u32);
	// b 0x82537800
	goto loc_82537800;
loc_825377FC:
	// stfs f31,6988(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6988, temp.u32);
loc_82537800:
	// lwz r11,3424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3424);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253783c
	if (ctx.cr6.eq) goto loc_8253783C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r28,3436
	ctx.r31.s64 = ctx.r28.s64 + 3436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8253782C;
	sub_82522580(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8253783C;
	sub_82522580(ctx, base);
loc_8253783C:
	// lwz r11,3424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3424);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253787c
	if (ctx.cr6.eq) goto loc_8253787C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r31,r28,3436
	ctx.r31.s64 = ctx.r28.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x82537868;
	sub_82522580(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8253787C;
	sub_82522580(ctx, base);
loc_8253787C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82537888"))) PPC_WEAK_FUNC(sub_82537888);
PPC_FUNC_IMPL(__imp__sub_82537888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82537890;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x8253fe78
	ctx.lr = 0x825378A0;
	sub_8253FE78(ctx, base);
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// li r30,5
	ctx.r30.s64 = 5;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
loc_825378AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x825378cc
	if (ctx.cr6.eq) goto loc_825378CC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x825378ac
	if (!ctx.cr6.gt) goto loc_825378AC;
	// b 0x825378f4
	goto loc_825378F4;
loc_825378CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825378E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82537900
	ctx.lr = 0x825378F4;
	sub_82537900(ctx, base);
loc_825378F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82537900"))) PPC_WEAK_FUNC(sub_82537900);
PPC_FUNC_IMPL(__imp__sub_82537900) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// blt cr6,0x82537960
	if (ctx.cr6.lt) goto loc_82537960;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bgt cr6,0x82537960
	if (ctx.cr6.gt) goto loc_82537960;
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,6764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r11,788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253794c
	if (ctx.cr6.eq) goto loc_8253794C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8253794C:
	// addi r11,r4,1290
	ctx.r11.s64 = ctx.r4.s64 + 1290;
	// lwz r10,6764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
loc_82537960:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,160
	ctx.r10.s64 = 160;
	// addi r9,r3,5180
	ctx.r9.s64 = ctx.r3.s64 + 5180;
	// lwz r8,13024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_82537970:
	// lwz r11,4356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825379a8
	if (ctx.cr6.eq) goto loc_825379A8;
	// lwz r7,6764(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lwz r11,788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825379a0
	if (ctx.cr6.eq) goto loc_825379A0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825379a8
	if (!ctx.cr6.eq) goto loc_825379A8;
loc_825379A0:
	// lwz r11,6764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_825379A8:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x82537970
	if (!ctx.cr6.gt) goto loc_82537970;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825379C0"))) PPC_WEAK_FUNC(sub_825379C0);
PPC_FUNC_IMPL(__imp__sub_825379C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// lwz r8,3332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6932(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r11.u32);
	// lwz r9,6936(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6940(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6940);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6944(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6944);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6948(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6952(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6952);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6956(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6956);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// lwz r9,6960(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// stw r11,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r11.u32);
	// stw r10,592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 592, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537A40"))) PPC_WEAK_FUNC(sub_82537A40);
PPC_FUNC_IMPL(__imp__sub_82537A40) {
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
	// bl 0x82540e00
	ctx.lr = 0x82537A58;
	sub_82540E00(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,19852
	ctx.r5.s64 = ctx.r11.s64 + 19852;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,6516
	ctx.r4.s64 = ctx.r31.s64 + 6516;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82537A74;
	sub_824115B8(ctx, base);
	// lwz r11,-396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537A88;
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

__attribute__((alias("__imp__sub_82537AA0"))) PPC_WEAK_FUNC(sub_82537AA0);
PPC_FUNC_IMPL(__imp__sub_82537AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82540ea0
	ctx.lr = 0x82537ABC;
	sub_82540EA0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82537af8
	if (!ctx.cr6.eq) goto loc_82537AF8;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82537af8
	if (!ctx.cr6.eq) goto loc_82537AF8;
	// addi r11,r31,6912
	ctx.r11.s64 = ctx.r31.s64 + 6912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,424
	ctx.r3.s64 = ctx.r31.s64 + 424;
	// bl 0x82838fd0
	ctx.lr = 0x82537AEC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82537AF8:
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

__attribute__((alias("__imp__sub_82537B18"))) PPC_WEAK_FUNC(sub_82537B18);
PPC_FUNC_IMPL(__imp__sub_82537B18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82537B20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82540f58
	ctx.lr = 0x82537B30;
	sub_82540F58(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82537bc0
	if (!ctx.cr6.eq) goto loc_82537BC0;
	// lwz r11,1116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82537bc0
	if (!ctx.cr6.eq) goto loc_82537BC0;
	// addi r30,r31,6912
	ctx.r30.s64 = ctx.r31.s64 + 6912;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82537B64;
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
	ctx.lr = 0x82537B88;
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
	ctx.lr = 0x82537B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82537bc0
	if (!ctx.cr0.eq) goto loc_82537BC0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82537BB4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
loc_82537BC0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82537BD0"))) PPC_WEAK_FUNC(sub_82537BD0);
PPC_FUNC_IMPL(__imp__sub_82537BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-32516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32516);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82537BF0"))) PPC_WEAK_FUNC(sub_82537BF0);
PPC_FUNC_IMPL(__imp__sub_82537BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82537BF8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19904
	ctx.r4.s64 = ctx.r11.s64 + 19904;
	// bl 0x8233a258
	ctx.lr = 0x82537C10;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4296
	ctx.r3.s64 = ctx.r31.s64 + 4296;
	// bl 0x82400b48
	ctx.lr = 0x82537C1C;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82537C24;
	sub_82333960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19920
	ctx.r4.s64 = ctx.r11.s64 + 19920;
	// bl 0x8233a258
	ctx.lr = 0x82537C34;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4320
	ctx.r3.s64 = ctx.r31.s64 + 4320;
	// bl 0x82400b48
	ctx.lr = 0x82537C40;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82537C48;
	sub_82333960(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-624
	ctx.r28.s64 = ctx.r11.s64 + -624;
	// addi r27,r31,4344
	ctx.r27.s64 = ctx.r31.s64 + 4344;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82537C5C:
	// bl 0x825357f8
	ctx.lr = 0x82537C60;
	sub_825357F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82537C70;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x824ef870
	ctx.lr = 0x82537C8C;
	sub_824EF870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82537C9C;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x825357f8
	ctx.lr = 0x82537CA4;
	sub_825357F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823339b8
	ctx.lr = 0x82537CB4;
	sub_823339B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x82333960
	ctx.lr = 0x82537CC0;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535798
	ctx.lr = 0x82537CCC;
	sub_82535798(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82333960
	ctx.lr = 0x82537CD4;
	sub_82333960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r11,r28,216
	ctx.r11.s64 = ctx.r28.s64 + 216;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82537c5c
	if (ctx.cr6.lt) goto loc_82537C5C;
	// lwz r10,4360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82537d30
	if (!ctx.cr6.gt) goto loc_82537D30;
	// addi r10,r31,4408
	ctx.r10.s64 = ctx.r31.s64 + 4408;
loc_82537D18:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82537d18
	if (ctx.cr6.lt) goto loc_82537D18;
loc_82537D30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82537D38"))) PPC_WEAK_FUNC(sub_82537D38);
PPC_FUNC_IMPL(__imp__sub_82537D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82537D40;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61748
	ctx.lr = 0x82537D48;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x82537D54;
	sub_824DD5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x82537D5C;
	sub_829BED50(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r28.u32);
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r28.u32);
	// lfs f13,16604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16604);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// beq cr6,0x82537d98
	if (ctx.cr6.eq) goto loc_82537D98;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82537D98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x82537DA0;
	sub_829C2520(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f28,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82537E04:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82537e04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82537E04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-19521
	ctx.r4.s64 = -1279328256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,23324
	ctx.r4.u64 = ctx.r4.u64 | 23324;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x82537E40;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82537e68
	if (ctx.cr0.eq) goto loc_82537E68;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82537E60;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82537e6c
	goto loc_82537E6C;
loc_82537E68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82537E6C:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82537e90
	if (!ctx.cr6.eq) goto loc_82537E90;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82537e90
	if (ctx.cr6.eq) goto loc_82537E90;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82537E90:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,22763
	ctx.r4.s64 = 1491795968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,37495
	ctx.r4.u64 = ctx.r4.u64 | 37495;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x82537ED8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82537f00
	if (ctx.cr0.eq) goto loc_82537F00;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82537EF8;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82537f04
	goto loc_82537F04;
loc_82537F00:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82537F04:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82537f28
	if (!ctx.cr6.eq) goto loc_82537F28;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82537f28
	if (ctx.cr6.eq) goto loc_82537F28;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82537F28:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537F48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16588);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82537f78
	if (ctx.cr6.eq) goto loc_82537F78;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_82537F78:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82537FC8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82537fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82537FC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-13035
	ctx.r4.s64 = -854261760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,53749
	ctx.r4.u64 = ctx.r4.u64 | 53749;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82537FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x82538004;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253802c
	if (ctx.cr0.eq) goto loc_8253802C;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x82538024;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82538030
	goto loc_82538030;
loc_8253802C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82538030:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82538054
	if (!ctx.cr6.eq) goto loc_82538054;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82538054
	if (ctx.cr6.eq) goto loc_82538054;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_82538054:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,30100
	ctx.r4.s64 = 1972633600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,42004
	ctx.r4.u64 = ctx.r4.u64 | 42004;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538090;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x8253809C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825380c4
	if (ctx.cr0.eq) goto loc_825380C4;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x825380BC;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825380c8
	goto loc_825380C8;
loc_825380C4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_825380C8:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825380ec
	if (!ctx.cr6.eq) goto loc_825380EC;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825380ec
	if (ctx.cr6.eq) goto loc_825380EC;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_825380EC:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253810C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// lfs f0,19200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24008);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82538144
	if (ctx.cr6.eq) goto loc_82538144;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82538144:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82538194:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82538194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82538194;
	// stfs f30,6908(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6908, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x82816528
	ctx.lr = 0x825381BC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825381D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x825381DC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82538204
	if (ctx.cr0.eq) goto loc_82538204;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x825381FC;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82538208
	goto loc_82538208;
loc_82538204:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82538208:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253822c
	if (!ctx.cr6.eq) goto loc_8253822C;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253822c
	if (ctx.cr6.eq) goto loc_8253822C;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_8253822C:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253824C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61794
	ctx.lr = 0x82538258;
	__restfpr_28(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82538260"))) PPC_WEAK_FUNC(sub_82538260);
PPC_FUNC_IMPL(__imp__sub_82538260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f0
	ctx.lr = 0x82538268;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61728
	ctx.lr = 0x82538270;
	__savefpr_20(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x8253827C;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r25,-32243
	ctx.r25.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r24,r25,-11424
	ctx.r24.s64 = ctx.r25.s64 + -11424;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lfs f0,19840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19840);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// lfs f13,18016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18016);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,-15876(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -15876);
	ctx.f29.f64 = double(temp.f32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// addi r6,r29,-32764
	ctx.r6.s64 = ctx.r29.s64 + -32764;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f23,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f23.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r10,14244
	ctx.r3.s64 = ctx.r10.s64 + 14244;
	// lfs f12,-28788(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28788);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,23596(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23596);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f23,152(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,5352(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,588(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r30,5352(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82538304;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// bl 0x82816528
	ctx.lr = 0x82538314;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r23,184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r9,r23,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82538358;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,5360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5360, ctx.r11.u32);
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,5360(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825383A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f26,-11952(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -11952);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// lfs f0,19564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19564);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,16572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16572);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// lfs f12,16664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16664);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r8,14264
	ctx.r3.s64 = ctx.r8.s64 + 14264;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f11,19132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,19816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19816);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538404;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,-5628
	ctx.r3.s64 = ctx.r11.s64 + -5628;
	// bl 0x82816528
	ctx.lr = 0x82538414;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r23,184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r22,152(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r22,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82538458;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,5356(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5356, ctx.r11.u32);
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,5356(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// lfs f25,19684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,22763
	ctx.r11.s64 = 1491795968;
	// lfs f24,-31124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	ctx.f24.f64 = double(temp.f32);
	// addi r3,r6,9772
	ctx.r3.s64 = ctx.r6.s64 + 9772;
	// lfs f0,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,18284(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18284);
	ctx.f28.f64 = double(temp.f32);
	// ori r30,r11,37495
	ctx.r30.u64 = ctx.r11.u64 | 37495;
	// lfs f30,19548(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19548);
	ctx.f30.f64 = double(temp.f32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f24,148(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825384FC;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r23,152(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r23,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82538540;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538574;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lfs f27,-32764(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -32764);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-19521
	ctx.r9.s64 = -1279328256;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r10,9784
	ctx.r3.s64 = ctx.r10.s64 + 9784;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r29,r9,23324
	ctx.r29.u64 = ctx.r9.u64 | 23324;
	// lfs f0,17848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17848);
	ctx.f0.f64 = double(temp.f32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f24,148(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825385BC;
	sub_82816528(ctx, base);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x824e5590
	ctx.lr = 0x82538600;
	sub_824E5590(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f28,-13216(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -13216);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// addi r3,r11,9796
	ctx.r3.s64 = ctx.r11.s64 + 9796;
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ori r27,r10,28383
	ctx.r27.u64 = ctx.r10.u64 | 28383;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538674;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r23,184(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r23,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x825386B8;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r30,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r30.u32);
	// stw r30,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825386EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r28,r10,14532
	ctx.r28.u64 = ctx.r10.u64 | 14532;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r27,5352(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x82538728;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r23,176(r1)
	ctx.r23.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r23,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r23.u64);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253876C;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825387A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lfs f27,-13220(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -13220);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r11,9820
	ctx.r3.s64 = ctx.r11.s64 + 9820;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r29,r10,42004
	ctx.r29.u64 = ctx.r10.u64 | 42004;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825387E0;
	sub_82816528(ctx, base);
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r27,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82538824;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// stw r3,6916(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6916, ctx.r3.u32);
	// li r27,8
	ctx.r27.s64 = 8;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,6916(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6916);
	// stw r27,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r27.u32);
	// lwz r11,6916(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6916);
	// stw r28,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r28.u32);
	// lwz r11,6916(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6916);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,6916(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6916);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9836
	ctx.r3.s64 = ctx.r11.s64 + 9836;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r29,r10,53749
	ctx.r29.u64 = ctx.r10.u64 | 53749;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r23,5352(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825388A4;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825388E8;
	sub_824E5590(ctx, base);
	// stw r3,6920(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6920, ctx.r3.u32);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// li r29,6
	ctx.r29.s64 = 6;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,6920(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6920);
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// lwz r11,6920(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6920);
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// lwz r11,6920(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6920);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,6920(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6920);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538928;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f30,-15904(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + -15904);
	ctx.f30.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r24,r11,14280
	ctx.r24.s64 = ctx.r11.s64 + 14280;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,19812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,19204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19204);
	ctx.f28.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538970;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r3,r11,9852
	ctx.r3.s64 = ctx.r11.s64 + 9852;
	// bl 0x82816528
	ctx.lr = 0x82538980;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825389C4;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,6924(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6924, ctx.r10.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,6924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6924);
	// stw r27,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r27.u32);
	// lwz r11,6924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6924);
	// stw r28,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r28.u32);
	// lwz r11,6924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6924);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,6924(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6924);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,6924(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6924);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r27,5352(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,24284
	ctx.r9.s64 = 1591476224;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r10,9868
	ctx.r3.s64 = ctx.r10.s64 + 9868;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// ori r28,r9,32798
	ctx.r28.u64 = ctx.r9.u64 | 32798;
	// lfs f0,19728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f28,164(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f28,168(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538A50;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e5590
	ctx.lr = 0x82538A94;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,6928(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6928, ctx.r10.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,6928(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// lwz r11,6928(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// lwz r11,6928(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,6928(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,6928(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82538ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f28,-11424(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + -11424);
	ctx.f28.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r8,17060
	ctx.r3.s64 = ctx.r8.s64 + 17060;
	// lfs f22,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,19604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19604);
	ctx.f23.f64 = double(temp.f32);
	// lfs f30,19660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19660);
	ctx.f30.f64 = double(temp.f32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f22,148(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538B28;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,19936
	ctx.r3.s64 = ctx.r11.s64 + 19936;
	// bl 0x82816528
	ctx.lr = 0x82538B38;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r28,176(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// bl 0x824e4120
	ctx.lr = 0x82538B80;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r29,184(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r3,6932(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6932, ctx.r3.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lfs f29,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82538BDC;
	sub_82331120(ctx, base);
	// lwz r11,6932(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6932);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f28,144(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stfs f22,148(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82538C10;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,19944
	ctx.r3.s64 = ctx.r11.s64 + 19944;
	// bl 0x82816528
	ctx.lr = 0x82538C20;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e4120
	ctx.lr = 0x82538C68;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r3,6936(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6936, ctx.r3.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x82538CBC;
	sub_82331120(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r29,r11,19952
	ctx.r29.s64 = ctx.r11.s64 + 19952;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f25,148(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f22,16548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16548);
	ctx.f22.f64 = double(temp.f32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f22,144(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,6936(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6936);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x82538D00;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,19964
	ctx.r3.s64 = ctx.r11.s64 + 19964;
	// bl 0x82816528
	ctx.lr = 0x82538D10;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r28,184(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82538D58;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r3,6940(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6940, ctx.r3.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82331120
	ctx.lr = 0x82538DAC;
	sub_82331120(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r28,r11,19972
	ctx.r28.s64 = ctx.r11.s64 + 19972;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f22,144(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f24,148(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,160(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r11,6940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6940);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x82538DE8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,19984
	ctx.r3.s64 = ctx.r11.s64 + 19984;
	// bl 0x82816528
	ctx.lr = 0x82538DF8;
	sub_82816528(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82538E40;
	sub_824E4120(ctx, base);
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r3,6944(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6944, ctx.r3.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82538E94;
	sub_82331120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f21,17116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17116);
	ctx.f21.f64 = double(temp.f32);
	// addi r3,r8,19992
	ctx.r3.s64 = ctx.r8.s64 + 19992;
	// lfs f20,17120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17120);
	ctx.f20.f64 = double(temp.f32);
	// lfs f23,18508(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18508);
	ctx.f23.f64 = double(temp.f32);
	// stfs f21,144(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f20,160(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,164(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f23,168(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,6944(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6944);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x82538EE4;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,20008
	ctx.r3.s64 = ctx.r11.s64 + 20008;
	// bl 0x82816528
	ctx.lr = 0x82538EF4;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e4120
	ctx.lr = 0x82538F3C;
	sub_824E4120(ctx, base);
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r3,6948(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6948, ctx.r3.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x82538F90;
	sub_82331120(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f21,144(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f28,152(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f20,160(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,164(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f23,168(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,6948(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6948);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// bl 0x82816528
	ctx.lr = 0x82538FC8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,20032
	ctx.r3.s64 = ctx.r11.s64 + 20032;
	// bl 0x82816528
	ctx.lr = 0x82538FD8;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r25,152(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r25,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e4120
	ctx.lr = 0x82539020;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r3,6952(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6952, ctx.r3.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82539074;
	sub_82331120(ctx, base);
	// lwz r11,6952(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6952);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// bl 0x82539e00
	ctx.lr = 0x82539084;
	sub_82539E00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f22,144(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f25,148(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825390B0;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,20040
	ctx.r3.s64 = ctx.r11.s64 + 20040;
	// bl 0x82816528
	ctx.lr = 0x825390C0;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x82539108;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r3,6956(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6956, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8253915C;
	sub_82331120(ctx, base);
	// lwz r11,6956(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6956);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f22,144(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// stfs f24,148(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f26,160(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,164(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82539190;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,20052
	ctx.r3.s64 = ctx.r11.s64 + 20052;
	// bl 0x82816528
	ctx.lr = 0x825391A0;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x825391E8;
	sub_824E4120(ctx, base);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r3,6960(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6960, ctx.r3.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x8253923C;
	sub_82331120(ctx, base);
	// lwz r11,6960(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6960);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82a61774
	ctx.lr = 0x82539250;
	__restfpr_20(ctx, base);
	// b 0x82a4ea40
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539258"))) PPC_WEAK_FUNC(sub_82539258);
PPC_FUNC_IMPL(__imp__sub_82539258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82539260;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c2520
	ctx.lr = 0x8253926C;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82539298
	if (ctx.cr0.eq) goto loc_82539298;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,6912
	ctx.r29.s64 = ctx.r31.s64 + 6912;
	// addi r3,r11,20064
	ctx.r3.s64 = ctx.r11.s64 + 20064;
	// bl 0x82816528
	ctx.lr = 0x82539284;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x824e7350
	ctx.lr = 0x82539298;
	sub_824E7350(ctx, base);
loc_82539298:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825392AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fb50
	ctx.lr = 0x825392B4;
	sub_8253FB50(ctx, base);
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r30.u32);
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// beq cr6,0x825392d4
	if (ctx.cr6.eq) goto loc_825392D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,3984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3984, ctx.r11.u32);
loc_825392D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825392F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 9, ctx.xer);
	// blt cr6,0x825392d4
	if (ctx.cr6.lt) goto loc_825392D4;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,160
	ctx.r10.s64 = 160;
	// addi r9,r31,5180
	ctx.r9.s64 = ctx.r31.s64 + 5180;
	// lwz r8,13024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_8253930C:
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539344
	if (ctx.cr6.eq) goto loc_82539344;
	// lwz r7,6764(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6764);
	// stw r7,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r7.u32);
	// lwz r11,788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253933c
	if (ctx.cr6.eq) goto loc_8253933C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82539344
	if (!ctx.cr6.eq) goto loc_82539344;
loc_8253933C:
	// lwz r11,6764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6764);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82539344:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// ble cr6,0x8253930c
	if (!ctx.cr6.gt) goto loc_8253930C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539360"))) PPC_WEAK_FUNC(sub_82539360);
PPC_FUNC_IMPL(__imp__sub_82539360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6940);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539378"))) PPC_WEAK_FUNC(sub_82539378);
PPC_FUNC_IMPL(__imp__sub_82539378) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6940(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6940);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539388"))) PPC_WEAK_FUNC(sub_82539388);
PPC_FUNC_IMPL(__imp__sub_82539388) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6944(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6944);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539398"))) PPC_WEAK_FUNC(sub_82539398);
PPC_FUNC_IMPL(__imp__sub_82539398) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825393B0"))) PPC_WEAK_FUNC(sub_825393B0);
PPC_FUNC_IMPL(__imp__sub_825393B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6932(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825393C0"))) PPC_WEAK_FUNC(sub_825393C0);
PPC_FUNC_IMPL(__imp__sub_825393C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6936(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825393D8"))) PPC_WEAK_FUNC(sub_825393D8);
PPC_FUNC_IMPL(__imp__sub_825393D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6936(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825393E8"))) PPC_WEAK_FUNC(sub_825393E8);
PPC_FUNC_IMPL(__imp__sub_825393E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6948(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825393F8"))) PPC_WEAK_FUNC(sub_825393F8);
PPC_FUNC_IMPL(__imp__sub_825393F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6952);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539410"))) PPC_WEAK_FUNC(sub_82539410);
PPC_FUNC_IMPL(__imp__sub_82539410) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6952(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6952);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539420"))) PPC_WEAK_FUNC(sub_82539420);
PPC_FUNC_IMPL(__imp__sub_82539420) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6956);
	// lis r10,12560
	ctx.r10.s64 = 823132160;
	// ori r10,r10,18372
	ctx.r10.u64 = ctx.r10.u64 | 18372;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,2608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2608, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539450"))) PPC_WEAK_FUNC(sub_82539450);
PPC_FUNC_IMPL(__imp__sub_82539450) {
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
	// lwz r3,6956(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// bl 0x8281d650
	ctx.lr = 0x82539470;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6960(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	// bl 0x8281d650
	ctx.lr = 0x8253947C;
	sub_8281D650(ctx, base);
	// lis r11,1545
	ctx.r11.s64 = 101253120;
	// ori r11,r11,5564
	ctx.r11.u64 = ctx.r11.u64 | 5564;
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825394A0"))) PPC_WEAK_FUNC(sub_825394A0);
PPC_FUNC_IMPL(__imp__sub_825394A0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,19972
	ctx.r3.s64 = ctx.r11.s64 + 19972;
	// bl 0x82816528
	ctx.lr = 0x825394C0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539520
	ctx.lr = 0x825394CC;
	sub_82539520(ctx, base);
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

__attribute__((alias("__imp__sub_825394E0"))) PPC_WEAK_FUNC(sub_825394E0);
PPC_FUNC_IMPL(__imp__sub_825394E0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,19952
	ctx.r3.s64 = ctx.r11.s64 + 19952;
	// bl 0x82816528
	ctx.lr = 0x82539500;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539520
	ctx.lr = 0x8253950C;
	sub_82539520(ctx, base);
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

__attribute__((alias("__imp__sub_82539520"))) PPC_WEAK_FUNC(sub_82539520);
PPC_FUNC_IMPL(__imp__sub_82539520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82539528;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539540;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539558;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f12,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f0,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r10,-32676
	ctx.r8.s64 = ctx.r10.s64 + -32676;
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f11,160(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lfs f0,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f10,-32676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32676);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f13,908(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x82539644;
	sub_82825330(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,112
	ctx.r4.s64 = 112;
	// lfs f0,-12104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r11,5480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5480);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bne cr6,0x8253969c
	if (!ctx.cr6.eq) goto loc_8253969C;
	// lwz r5,6968(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82539698;
	sub_8282B1E0(ctx, base);
	// b 0x825396a8
	goto loc_825396A8;
loc_8253969C:
	// lwz r5,6964(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6964);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x825396A8;
	sub_8282B1E0(ctx, base);
loc_825396A8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825396B0"))) PPC_WEAK_FUNC(sub_825396B0);
PPC_FUNC_IMPL(__imp__sub_825396B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825396B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r29,r10,1535
	ctx.r29.u64 = ctx.r10.u64 | 1535;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm. r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825396e0
	if (ctx.cr0.eq) goto loc_825396E0;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x825396ec
	if (!ctx.cr6.eq) goto loc_825396EC;
loc_825396E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fab8
	ctx.lr = 0x825396EC;
	sub_8253FAB8(ctx, base);
loc_825396EC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,1128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x825397cc
	if (!ctx.cr6.gt) goto loc_825397CC;
	// lfs f0,6988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x825397cc
	if (!ctx.cr6.gt) goto loc_825397CC;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825397cc
	if (ctx.cr0.eq) goto loc_825397CC;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x825397cc
	if (ctx.cr6.eq) goto loc_825397CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6988(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e5358
	ctx.lr = 0x82539740;
	sub_824E5358(ctx, base);
	// lwz r10,6940(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6940);
	// lis r11,12560
	ctx.r11.s64 = 823132160;
	// ori r11,r11,18372
	ctx.r11.u64 = ctx.r11.u64 | 18372;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6932(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6932);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6936);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6948(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6952);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// lwz r10,6960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
loc_825397CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825397D8"))) PPC_WEAK_FUNC(sub_825397D8);
PPC_FUNC_IMPL(__imp__sub_825397D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6972(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6972, ctx.r11.u32);
	// b 0x82540a58
	sub_82540A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825397E8"))) PPC_WEAK_FUNC(sub_825397E8);
PPC_FUNC_IMPL(__imp__sub_825397E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f4
	ctx.lr = 0x825397F0;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x82540248
	ctx.lr = 0x82539810;
	sub_82540248(ctx, base);
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82539858
	if (!ctx.cr6.eq) goto loc_82539858;
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539af0
	if (ctx.cr0.eq) goto loc_82539AF0;
	// lwz r11,5628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253984c
	if (ctx.cr6.eq) goto loc_8253984C;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253984c
	if (!ctx.cr6.eq) goto loc_8253984C;
	// stw r23,5632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5632, ctx.r23.u32);
loc_8253984C:
	// lwz r11,10548(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x82539858;
	sub_82409BE0(ctx, base);
loc_82539858:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82539998
	if (ctx.cr6.eq) goto loc_82539998;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x825398bc
	if (ctx.cr6.eq) goto loc_825398BC;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// beq cr6,0x825398a0
	if (ctx.cr6.eq) goto loc_825398A0;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// bne cr6,0x82539af0
	if (!ctx.cr6.eq) goto loc_82539AF0;
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539894
	if (ctx.cr0.eq) goto loc_82539894;
	// lwz r10,6916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
	// lwz r10,6924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
loc_82539894:
	// lis r28,30100
	ctx.r28.s64 = 1972633600;
	// ori r28,r28,42004
	ctx.r28.u64 = ctx.r28.u64 | 42004;
	// b 0x825398e0
	goto loc_825398E0;
loc_825398A0:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539894
	if (ctx.cr0.eq) goto loc_82539894;
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// stw r23,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r23.u32);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// stw r23,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r23.u32);
	// b 0x82539894
	goto loc_82539894;
loc_825398BC:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825398d8
	if (ctx.cr0.eq) goto loc_825398D8;
	// lwz r10,6920(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
	// lwz r10,6928(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// stw r11,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r11.u32);
loc_825398D8:
	// lis r28,-13035
	ctx.r28.s64 = -854261760;
	// ori r28,r28,53749
	ctx.r28.u64 = ctx.r28.u64 | 53749;
loc_825398E0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825398F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82539920:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82539920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82539920;
	// lfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm. r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f29.f64 = double(temp.f32);
	// beq 0x825399e8
	if (ctx.cr0.eq) goto loc_825399E8;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,10628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825399e8
	if (ctx.cr6.eq) goto loc_825399E8;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82833108
	ctx.lr = 0x82539960;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825399d0
	if (ctx.cr0.eq) goto loc_825399D0;
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825399b4
	if (ctx.cr6.eq) goto loc_825399B4;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8253998C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82539990;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825399b8
	goto loc_825399B8;
loc_82539998:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825398d8
	if (ctx.cr0.eq) goto loc_825398D8;
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// stw r27,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r27.u32);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// stw r27,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r27.u32);
	// b 0x825398d8
	goto loc_825398D8;
loc_825399B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_825399B8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b0548
	ctx.lr = 0x825399C8;
	sub_826B0548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825399d4
	goto loc_825399D4;
loc_825399D0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_825399D4:
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825399E0;
	sub_82833A30(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10628, ctx.r11.u32);
loc_825399E8:
	// clrlwi. r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539af0
	if (ctx.cr0.eq) goto loc_82539AF0;
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539a48
	if (ctx.cr6.eq) goto loc_82539A48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x82539A14;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82539A48;
	sub_8282B1E0(ctx, base);
loc_82539A48:
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539af0
	if (ctx.cr6.eq) goto loc_82539AF0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x82539A6C;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6824(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82539AA0;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82539af0
	if (ctx.cr0.eq) goto loc_82539AF0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,284(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 284);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r27,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82539AF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82539AF0:
	// rlwinm. r11,r26,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82539ba0
	if (ctx.cr0.eq) goto loc_82539BA0;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82539ba0
	if (!ctx.cr6.eq) goto loc_82539BA0;
	// stw r23,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r23.u32);
	// lis r4,-20251
	ctx.r4.s64 = -1327169536;
	// lwz r11,10548(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 10548);
	// ori r4,r4,32937
	ctx.r4.u64 = ctx.r4.u64 | 32937;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x82539B1C;
	sub_829B98F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82539b4c
	if (ctx.cr0.eq) goto loc_82539B4C;
	// bl 0x823354d0
	ctx.lr = 0x82539B28;
	sub_823354D0(ctx, base);
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
	ctx.lr = 0x82539B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne 0x82539b50
	if (!ctx.cr0.eq) goto loc_82539B50;
loc_82539B4C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82539B50:
	// lwz r10,1816(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1816);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82539b64
	if (!ctx.cr6.gt) goto loc_82539B64;
	// lwz r11,1812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1812);
	// b 0x82539b68
	goto loc_82539B68;
loc_82539B64:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82539B68:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r3,r9,20084
	ctx.r3.s64 = ctx.r9.s64 + 20084;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x82539B80;
	sub_82816528(ctx, base);
	// lwz r11,13024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282bf00
	ctx.lr = 0x82539BA0;
	sub_8282BF00(ctx, base);
loc_82539BA0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82a4ea44
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539BB8"))) PPC_WEAK_FUNC(sub_82539BB8);
PPC_FUNC_IMPL(__imp__sub_82539BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4356);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
loc_82539BDC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82539bfc
	if (!ctx.cr6.eq) goto loc_82539BFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// blt cr6,0x82539bdc
	if (ctx.cr6.lt) goto loc_82539BDC;
	// b 0x82539cd8
	goto loc_82539CD8;
loc_82539BFC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82539C00:
	// bl 0x82a4cd78
	ctx.lr = 0x82539C04;
	sub_82A4CD78(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
	// lwz r11,4356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4356);
	// divw r10,r3,r10
	ctx.r10.s32 = ctx.r3.s32 / ctx.r10.s32;
	// mulli r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 * 9;
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82539cd0
	if (ctx.cr6.eq) goto loc_82539CD0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82539c54
	if (!ctx.cr6.eq) goto loc_82539C54;
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82539c68
	if (!ctx.cr6.eq) goto loc_82539C68;
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539cb0
	if (ctx.cr6.eq) goto loc_82539CB0;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x82539cb0
	goto loc_82539CB0;
loc_82539C54:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82539c70
	if (!ctx.cr6.eq) goto loc_82539C70;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539cb0
	if (ctx.cr6.eq) goto loc_82539CB0;
loc_82539C68:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82539cb0
	goto loc_82539CB0;
loc_82539C70:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82539c98
	if (!ctx.cr6.eq) goto loc_82539C98;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82539cac
	if (!ctx.cr6.eq) goto loc_82539CAC;
	// lwz r11,252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539cb0
	if (ctx.cr6.eq) goto loc_82539CB0;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x82539cb0
	goto loc_82539CB0;
loc_82539C98:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x82539cb0
	if (!ctx.cr6.eq) goto loc_82539CB0;
	// lwz r11,284(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82539cb0
	if (ctx.cr6.eq) goto loc_82539CB0;
loc_82539CAC:
	// li r4,8
	ctx.r4.s64 = 8;
loc_82539CB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539CCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,1
	ctx.r31.s64 = 1;
loc_82539CD0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82539c00
	if (ctx.cr6.eq) goto loc_82539C00;
loc_82539CD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539CF0"))) PPC_WEAK_FUNC(sub_82539CF0);
PPC_FUNC_IMPL(__imp__sub_82539CF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6940);
	// lis r10,12560
	ctx.r10.s64 = 823132160;
	// ori r10,r10,18372
	ctx.r10.u64 = ctx.r10.u64 | 18372;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6944);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6932);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6936(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6936);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6952);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6956(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6956);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// stw r10,2608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2608, ctx.r10.u32);
	// b 0x82540718
	sub_82540718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539D80"))) PPC_WEAK_FUNC(sub_82539D80);
PPC_FUNC_IMPL(__imp__sub_82539D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r30,64(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,20112
	ctx.r3.s64 = ctx.r11.s64 + 20112;
	// bl 0x82816528
	ctx.lr = 0x82539DA8;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82539de4
	if (!ctx.cr6.eq) goto loc_82539DE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539DC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82539DDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
loc_82539DE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82539E00"))) PPC_WEAK_FUNC(sub_82539E00);
PPC_FUNC_IMPL(__imp__sub_82539E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82539E08;
	__savegprlr_27(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f0,-11424(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82539e48
	if (ctx.cr6.lt) goto loc_82539E48;
	// beq cr6,0x82539e40
	if (ctx.cr6.eq) goto loc_82539E40;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82539e48
	if (!ctx.cr6.lt) goto loc_82539E48;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,32748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32748);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82539e48
	goto loc_82539E48;
loc_82539E40:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f0,16816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
loc_82539E48:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f11,-76(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// stfs f11,-72(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r7,-76(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r4,-76(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f0,-60(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lwz r9,-60(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lfs f12,17120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17120);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-72(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r6,-80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lfs f13,17116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,6948(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r5,-80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f0,-72(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r31,-72(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lwz r8,-56(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lwz r30,-80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// stfs f11,-76(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lwz r29,-76(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// stfs f11,-72(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// lwz r28,-72(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lwz r27,-64(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r27,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r27.u32);
	// stw r9,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r9.u32);
	// stw r8,336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 336, ctx.r8.u32);
	// stw r6,316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 316, ctx.r6.u32);
	// stw r7,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r7.u32);
	// stw r11,324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 324, ctx.r11.u32);
	// lwz r11,6952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6952);
	// stw r30,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r30.u32);
	// stw r29,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r29.u32);
	// stw r28,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r28.u32);
	// stw r5,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r5.u32);
	// stw r4,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r4.u32);
	// stw r31,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r31.u32);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539EF8"))) PPC_WEAK_FUNC(sub_82539EF8);
PPC_FUNC_IMPL(__imp__sub_82539EF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82539F00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82539f3c
	if (!ctx.cr6.eq) goto loc_82539F3C;
	// lwz r11,2740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82539f94
	if (ctx.cr6.eq) goto loc_82539F94;
	// b 0x82539f4c
	goto loc_82539F4C;
loc_82539F3C:
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// bl 0x82332988
	ctx.lr = 0x82539F44;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82539f58
	if (!ctx.cr0.eq) goto loc_82539F58;
loc_82539F4C:
	// lwz r11,2740(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82539f94
	if (ctx.cr6.eq) goto loc_82539F94;
loc_82539F58:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e2080
	ctx.lr = 0x82539F94;
	sub_824E2080(ctx, base);
loc_82539F94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82539FA0"))) PPC_WEAK_FUNC(sub_82539FA0);
PPC_FUNC_IMPL(__imp__sub_82539FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82539FA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,3552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253a008
	if (!ctx.cr6.gt) goto loc_8253A008;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82539FD4:
	// lwz r9,3548(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3548);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,640(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 640);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x82539ff4
	if (ctx.cr6.gt) goto loc_82539FF4;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// oris r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 524288;
	// stw r8,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
loc_82539FF4:
	// lwz r9,3552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3552);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82539fd4
	if (ctx.cr6.lt) goto loc_82539FD4;
loc_8253A008:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10644);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253a0b0
	if (ctx.cr6.eq) goto loc_8253A0B0;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x8253A020;
	sub_82833108(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// beq 0x8253a080
	if (ctx.cr0.eq) goto loc_8253A080;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8253a050
	if (ctx.cr6.eq) goto loc_8253A050;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8253A044;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8253A048;
	sub_82409C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8253a054
	goto loc_8253A054;
loc_8253A050:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8253A054:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253A068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826ae0e0
	ctx.lr = 0x8253A078;
	sub_826AE0E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253a084
	goto loc_8253A084;
loc_8253A080:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8253A084:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r9,r10,-32456
	ctx.r9.s64 = ctx.r10.s64 + -32456;
	// lfs f0,-32456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f0,-372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -372);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -332);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,100(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// stfs f13,104(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// bl 0x82833a30
	ctx.lr = 0x8253A0B0;
	sub_82833A30(ctx, base);
loc_8253A0B0:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82540940
	ctx.lr = 0x8253A0CC;
	sub_82540940(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A0D8"))) PPC_WEAK_FUNC(sub_8253A0D8);
PPC_FUNC_IMPL(__imp__sub_8253A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253A0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x824116b0
	ctx.lr = 0x8253A0F8;
	sub_824116B0(ctx, base);
	// lwz r11,436(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8253a110
	if (!ctx.cr6.eq) goto loc_8253A110;
	// lwz r11,2284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8253a174
	if (ctx.cr6.eq) goto loc_8253A174;
loc_8253A110:
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8253a134
	if (!ctx.cr6.eq) goto loc_8253A134;
	// lwz r10,464(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253a174
	if (ctx.cr6.eq) goto loc_8253A174;
loc_8253A134:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8253a170
	if (ctx.cr6.eq) goto loc_8253A170;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8253a168
	if (ctx.cr6.eq) goto loc_8253A168;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8253a170
	if (ctx.cr6.eq) goto loc_8253A170;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8253a168
	if (ctx.cr6.eq) goto loc_8253A168;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f4498
	ctx.lr = 0x8253A160;
	sub_824F4498(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8253a174
	goto loc_8253A174;
loc_8253A168:
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x8253a174
	goto loc_8253A174;
loc_8253A170:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8253A174:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A180"))) PPC_WEAK_FUNC(sub_8253A180);
PPC_FUNC_IMPL(__imp__sub_8253A180) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x8253a268
	if (ctx.cr6.eq) goto loc_8253A268;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8253a210
	if (ctx.cr6.eq) goto loc_8253A210;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8253a1d0
	if (ctx.cr6.eq) goto loc_8253A1D0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253ebe0
	ctx.lr = 0x8253A1B0;
	sub_8253EBE0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// b 0x8253a2b0
	goto loc_8253A2B0;
loc_8253A1D0:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,17824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17820);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8253a254
	goto loc_8253A254;
loc_8253A210:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,17816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,17812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
loc_8253A254:
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r11.u32);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// b 0x8253a2b4
	goto loc_8253A2B4;
loc_8253A268:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f13,-32724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_8253A2B0:
	// stw r8,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r8.u32);
loc_8253A2B4:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A2C8"))) PPC_WEAK_FUNC(sub_8253A2C8);
PPC_FUNC_IMPL(__imp__sub_8253A2C8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8253a334
	if (ctx.cr6.eq) goto loc_8253A334;
	// lwz r10,436(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 436);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8253a334
	if (ctx.cr6.eq) goto loc_8253A334;
	// lwz r9,4356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253a334
	if (ctx.cr6.eq) goto loc_8253A334;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x8253a334
	if (ctx.cr6.lt) goto loc_8253A334;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgt cr6,0x8253a334
	if (ctx.cr6.gt) goto loc_8253A334;
	// lwz r10,6764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8253A334:
	// b 0x8253eb60
	sub_8253EB60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A338"))) PPC_WEAK_FUNC(sub_8253A338);
PPC_FUNC_IMPL(__imp__sub_8253A338) {
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
	// bl 0x824ea480
	ctx.lr = 0x8253A348;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A368"))) PPC_WEAK_FUNC(sub_8253A368);
PPC_FUNC_IMPL(__imp__sub_8253A368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A378"))) PPC_WEAK_FUNC(sub_8253A378);
PPC_FUNC_IMPL(__imp__sub_8253A378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82536df8
	sub_82536DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A380"))) PPC_WEAK_FUNC(sub_8253A380);
PPC_FUNC_IMPL(__imp__sub_8253A380) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82536be0
	sub_82536BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A388"))) PPC_WEAK_FUNC(sub_8253A388);
PPC_FUNC_IMPL(__imp__sub_8253A388) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82536df8
	sub_82536DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A390"))) PPC_WEAK_FUNC(sub_8253A390);
PPC_FUNC_IMPL(__imp__sub_8253A390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A3A0"))) PPC_WEAK_FUNC(sub_8253A3A0);
PPC_FUNC_IMPL(__imp__sub_8253A3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b0248
	sub_823B0248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A3A8"))) PPC_WEAK_FUNC(sub_8253A3A8);
PPC_FUNC_IMPL(__imp__sub_8253A3A8) {
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
	// li r3,2048
	ctx.r3.s64 = 2048;
	// bl 0x82833108
	ctx.lr = 0x8253A3C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253a3dc
	if (ctx.cr0.eq) goto loc_8253A3DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8253a508
	ctx.lr = 0x8253A3D8;
	sub_8253A508(ctx, base);
	// b 0x8253a3e0
	goto loc_8253A3E0;
loc_8253A3DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253A3E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253a3f4
	if (ctx.cr6.eq) goto loc_8253A3F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8253A3F4:
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

__attribute__((alias("__imp__sub_8253A408"))) PPC_WEAK_FUNC(sub_8253A408);
PPC_FUNC_IMPL(__imp__sub_8253A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8253a438
	if (ctx.cr6.eq) goto loc_8253A438;
	// bl 0x823b0248
	ctx.lr = 0x8253A430;
	sub_823B0248(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8253a474
	if (ctx.cr6.eq) goto loc_8253A474;
loc_8253A438:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dc48
	ctx.lr = 0x8253A44C;
	sub_8252DC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8253a474
	if (!ctx.cr0.eq) goto loc_8253A474;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x8253A468;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8253a478
	if (ctx.cr0.eq) goto loc_8253A478;
loc_8253A474:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8253A478:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A490"))) PPC_WEAK_FUNC(sub_8253A490);
PPC_FUNC_IMPL(__imp__sub_8253A490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b0248
	ctx.lr = 0x8253A4B0;
	sub_823B0248(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8253a4c0
	if (!ctx.cr6.eq) goto loc_8253A4C0;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x8253a4f0
	goto loc_8253A4F0;
loc_8253A4C0:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252dd10
	ctx.lr = 0x8253A4D4;
	sub_8252DD10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253a4f0
	if (!ctx.cr0.eq) goto loc_8253A4F0;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x8253A4F0;
	sub_82346ED0(ctx, base);
loc_8253A4F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253A508"))) PPC_WEAK_FUNC(sub_8253A508);
PPC_FUNC_IMPL(__imp__sub_8253A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8253A510;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,11656
	ctx.r11.s64 = ctx.r11.s64 + 11656;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r27,r31,2000
	ctx.r27.s64 = ctx.r31.s64 + 2000;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r26,r31,2032
	ctx.r26.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8253a56c
	if (!ctx.cr6.eq) goto loc_8253A56C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253a578
	goto loc_8253A578;
loc_8253A56C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8253A578:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x8253A580;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8253a590
	if (!ctx.cr6.eq) goto loc_8253A590;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253a59c
	goto loc_8253A59C;
loc_8253A590:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8253A59C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x8253A5A8;
	sub_823511C8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,7984
	ctx.r11.s64 = ctx.r11.s64 + 7984;
	// addi r10,r10,9556
	ctx.r10.s64 = ctx.r10.s64 + 9556;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// bne cr6,0x8253a60c
	if (!ctx.cr6.eq) goto loc_8253A60C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8253a618
	goto loc_8253A618;
loc_8253A60C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8253A618:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82346f30
	ctx.lr = 0x8253A624;
	sub_82346F30(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,22680
	ctx.r11.s64 = ctx.r11.s64 + 22680;
	// addi r10,r10,24252
	ctx.r10.s64 = ctx.r10.s64 + 24252;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A688"))) PPC_WEAK_FUNC(sub_8253A688);
PPC_FUNC_IMPL(__imp__sub_8253A688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253A690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r11,11656
	ctx.r11.s64 = ctx.r11.s64 + 11656;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-16684
	ctx.r9.s64 = ctx.r9.s64 + -16684;
	// addi r11,r8,-16672
	ctx.r11.s64 = ctx.r8.s64 + -16672;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x8253A6DC;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x8253A6E8;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e180
	ctx.lr = 0x8253A6F4;
	sub_8252E180(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825ba650
	ctx.lr = 0x8253A700;
	sub_825BA650(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,22680
	ctx.r11.s64 = ctx.r11.s64 + 22680;
	// addi r10,r10,24252
	ctx.r10.s64 = ctx.r10.s64 + 24252;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,19272
	ctx.r9.s64 = ctx.r9.s64 + 19272;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r9.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253A768"))) PPC_WEAK_FUNC(sub_8253A768);
PPC_FUNC_IMPL(__imp__sub_8253A768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x8253A790;
	sub_825BA700(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82501810
	ctx.lr = 0x8253A7A0;
	sub_82501810(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,268
	ctx.xer.ca = ctx.r11.u32 > 4294967027;
	ctx.r11.s64 = ctx.r11.s64 + 268;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253a7cc
	if (ctx.cr0.eq) goto loc_8253A7CC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253a7cc
	if (ctx.cr6.eq) goto loc_8253A7CC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8253a7d0
	goto loc_8253A7D0;
loc_8253A7CC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8253A7D0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x82816528
	ctx.lr = 0x8253A7DC;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x8253A7EC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x828d0cb0
	ctx.lr = 0x8253A7FC;
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

__attribute__((alias("__imp__sub_8253A818"))) PPC_WEAK_FUNC(sub_8253A818);
PPC_FUNC_IMPL(__imp__sub_8253A818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253A820;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x8253b2a8
	ctx.lr = 0x8253A84C;
	sub_8253B2A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8253a948
	if (ctx.cr6.eq) goto loc_8253A948;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253a948
	if (ctx.cr6.eq) goto loc_8253A948;
	// lwz r11,3452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253a948
	if (ctx.cr6.eq) goto loc_8253A948;
	// lfs f30,3120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3120);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8253A878;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f29,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8253A888;
	sub_829BED50(ctx, base);
	// lfs f13,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f12,f11,f29
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8253a940
	if (ctx.cr6.gt) goto loc_8253A940;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253a8e4
	if (!ctx.cr6.gt) goto loc_8253A8E4;
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253a920
	if (!ctx.cr6.eq) goto loc_8253A920;
loc_8253A8E4:
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lfs f12,3120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8253a928
	if (ctx.cr6.gt) goto loc_8253A928;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8253a920
	if (!ctx.cr6.eq) goto loc_8253A920;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253a920
	if (!ctx.cr6.eq) goto loc_8253A920;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8253a940
	goto loc_8253A940;
loc_8253A920:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x8253a940
	goto loc_8253A940;
loc_8253A928:
	// lfs f11,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8253a940
	if (ctx.cr6.gt) goto loc_8253A940;
	// lwz r29,28(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
loc_8253A940:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8253a94c
	goto loc_8253A94C;
loc_8253A948:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253A94C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8253A960"))) PPC_WEAK_FUNC(sub_8253A960);
PPC_FUNC_IMPL(__imp__sub_8253A960) {
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	// bl 0x8253b2a8
	ctx.lr = 0x8253A988;
	sub_8253B2A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253A998;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-32
	ctx.r4.s64 = ctx.r11.s64 + -32;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253a9c8
	if (ctx.cr6.eq) goto loc_8253A9C8;
	// lwz r3,1756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253A9C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253A9C8:
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

__attribute__((alias("__imp__sub_8253A9E0"))) PPC_WEAK_FUNC(sub_8253A9E0);
PPC_FUNC_IMPL(__imp__sub_8253A9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253A9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8253aaa8
	if (ctx.cr6.eq) goto loc_8253AAA8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// addi r11,r11,-16324
	ctx.r11.s64 = ctx.r11.s64 + -16324;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// addi r10,r7,9308
	ctx.r10.s64 = ctx.r7.s64 + 9308;
	// addi r9,r6,-22652
	ctx.r9.s64 = ctx.r6.s64 + -22652;
	// addi r11,r5,-23092
	ctx.r11.s64 = ctx.r5.s64 + -23092;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// addi r28,r31,136
	ctx.r28.s64 = ctx.r31.s64 + 136;
	// bl 0x823e9df8
	ctx.lr = 0x8253AA60;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x823e9cf0
	ctx.lr = 0x8253AA6C;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x823e98b8
	ctx.lr = 0x8253AA78;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x824d2430
	ctx.lr = 0x8253AA84;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d6648
	ctx.lr = 0x8253AA90;
	sub_823D6648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823da7f8
	ctx.lr = 0x8253AA9C;
	sub_823DA7F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d3848
	ctx.lr = 0x8253AAA8;
	sub_823D3848(ctx, base);
loc_8253AAA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r10,r10,-13256
	ctx.r10.s64 = ctx.r10.s64 + -13256;
	// addi r9,r9,-13080
	ctx.r9.s64 = ctx.r9.s64 + -13080;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r8,r8,11296
	ctx.r8.s64 = ctx.r8.s64 + 11296;
	// addi r7,r7,31532
	ctx.r7.s64 = ctx.r7.s64 + 31532;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r10,r6,-23712
	ctx.r10.s64 = ctx.r6.s64 + -23712;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,904(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-76
	ctx.r11.s64 = ctx.r11.s64 + -76;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253AB60"))) PPC_WEAK_FUNC(sub_8253AB60);
PPC_FUNC_IMPL(__imp__sub_8253AB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x8253AB8C;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8252de58
	ctx.lr = 0x8253ABA0;
	sub_8252DE58(ctx, base);
	// bl 0x823b0248
	ctx.lr = 0x8253ABA4;
	sub_823B0248(ctx, base);
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
	ctx.lr = 0x8253ABBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253ABD8"))) PPC_WEAK_FUNC(sub_8253ABD8);
PPC_FUNC_IMPL(__imp__sub_8253ABD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8253aed0
	if (ctx.cr6.eq) goto loc_8253AED0;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,189
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 189, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8253acb0
	if (ctx.cr6.eq) goto loc_8253ACB0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,189
	ctx.r10.s64 = 189;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8253aca8
	if (ctx.cr6.lt) goto loc_8253ACA8;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x8253acb0
	goto loc_8253ACB0;
loc_8253ACA8:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_8253ACB0:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8253ace4
	if (ctx.cr6.lt) goto loc_8253ACE4;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8253acf0
	goto loc_8253ACF0;
loc_8253ACE4:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253ACF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253aed0
	if (ctx.cr0.eq) goto loc_8253AED0;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f31,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8253b2a8
	ctx.lr = 0x8253AD4C;
	sub_8253B2A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253ae90
	if (ctx.cr0.eq) goto loc_8253AE90;
	// lwz r11,924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253ae90
	if (ctx.cr6.eq) goto loc_8253AE90;
	// lwz r11,1504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253ae90
	if (ctx.cr6.eq) goto loc_8253AE90;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1412);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253AD98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8253ae90
	if (ctx.cr0.eq) goto loc_8253AE90;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253adc0
	if (!ctx.cr6.eq) goto loc_8253ADC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8253addc
	goto loc_8253ADDC;
loc_8253ADC0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8253ADDC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8253AE04;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8253AE08;
	sub_82333A20(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253AE40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8253ae94
	if (ctx.cr0.eq) goto loc_8253AE94;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1180);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253AE6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253AE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8253aea4
	goto loc_8253AEA4;
loc_8253AE90:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
loc_8253AE94:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x8253AEA4;
	sub_829E3DA8(ctx, base);
loc_8253AEA4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r9,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r9.u32);
loc_8253AED0:
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

__attribute__((alias("__imp__sub_8253AEF0"))) PPC_WEAK_FUNC(sub_8253AEF0);
PPC_FUNC_IMPL(__imp__sub_8253AEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8253AEF8;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8253b2a8
	ctx.lr = 0x8253AF2C;
	sub_8253B2A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,3452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// ble cr6,0x8253b218
	if (!ctx.cr6.gt) goto loc_8253B218;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253af5c
	if (!ctx.cr6.eq) goto loc_8253AF5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8253af78
	goto loc_8253AF78;
loc_8253AF5C:
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8253AF78:
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x8253AFA0;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8253AFA4;
	sub_82333A20(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8253b214
	if (ctx.cr0.eq) goto loc_8253B214;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,3120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3120);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x829bed50
	ctx.lr = 0x8253AFBC;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8253AFCC;
	sub_829BED50(ctx, base);
	// lfs f13,620(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,400(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fadds f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmadds f13,f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8253b188
	if (ctx.cr6.gt) goto loc_8253B188;
	// lwz r11,5288(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253b028
	if (!ctx.cr6.gt) goto loc_8253B028;
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253b02c
	if (!ctx.cr6.eq) goto loc_8253B02C;
loc_8253B028:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8253B02C:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lfs f12,3120(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8253b0d8
	if (ctx.cr6.gt) goto loc_8253B0D8;
	// lwz r9,140(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8253b0ec
	if (ctx.cr6.eq) goto loc_8253B0EC;
	// li r28,3
	ctx.r28.s64 = 3;
	// b 0x8253b188
	goto loc_8253B188;
loc_8253B05C:
	// bl 0x82a4cd78
	ctx.lr = 0x8253B060;
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
	// beq 0x8253b08c
	if (ctx.cr0.eq) goto loc_8253B08C;
loc_8253B074:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8253b188
	goto loc_8253B188;
loc_8253B07C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253b074
	if (!ctx.cr6.eq) goto loc_8253B074;
loc_8253B084:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253b188
	if (ctx.cr6.eq) goto loc_8253B188;
loc_8253B08C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r28,2
	ctx.r28.s64 = 2;
	// lwz r11,10588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253b188
	if (ctx.cr6.eq) goto loc_8253B188;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x8253B0A8;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// beq 0x8253b178
	if (ctx.cr0.eq) goto loc_8253B178;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8253b160
	if (ctx.cr6.eq) goto loc_8253B160;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8253B0CC;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8253B0D0;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253b164
	goto loc_8253B164;
loc_8253B0D8:
	// lfs f11,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x8253b104
	if (ctx.cr6.gt) goto loc_8253B104;
loc_8253B0EC:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253b084
	if (ctx.cr6.eq) goto loc_8253B084;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8253b05c
	if (!ctx.cr6.eq) goto loc_8253B05C;
	// b 0x8253b07c
	goto loc_8253B07C;
loc_8253B104:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253b188
	if (ctx.cr6.eq) goto loc_8253B188;
	// lfs f11,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8253b08c
	if (!ctx.cr6.gt) goto loc_8253B08C;
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253b08c
	if (ctx.cr6.eq) goto loc_8253B08C;
	// lwz r11,2536(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253b08c
	if (!ctx.cr6.eq) goto loc_8253B08C;
	// bl 0x82a4cd78
	ctx.lr = 0x8253B13C;
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
	// beq 0x8253b08c
	if (ctx.cr0.eq) goto loc_8253B08C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,4
	ctx.r28.s64 = 4;
	// stw r11,6912(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6912, ctx.r11.u32);
	// b 0x8253b188
	goto loc_8253B188;
loc_8253B160:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8253B164:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826b0960
	ctx.lr = 0x8253B170;
	sub_826B0960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253b17c
	goto loc_8253B17C;
loc_8253B178:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8253B17C:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8253B188;
	sub_82833A30(ctx, base);
loc_8253B188:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253B1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8253b218
	if (ctx.cr6.eq) goto loc_8253B218;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253B1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// mulli r10,r28,56
	ctx.r10.s64 = ctx.r28.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r28,-1
	ctx.r4.s64 = ctx.r28.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,1612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1612);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253B210;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8253b228
	goto loc_8253B228;
loc_8253B214:
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
loc_8253B218:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// bl 0x829e3da8
	ctx.lr = 0x8253B228;
	sub_829E3DA8(ctx, base);
loc_8253B228:
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

__attribute__((alias("__imp__sub_8253B238"))) PPC_WEAK_FUNC(sub_8253B238);
PPC_FUNC_IMPL(__imp__sub_8253B238) {
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
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8253b2a8
	ctx.lr = 0x8253B270;
	sub_8253B2A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253B280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x8253B294;
	sub_82347478(ctx, base);
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

__attribute__((alias("__imp__sub_8253B2A8"))) PPC_WEAK_FUNC(sub_8253B2A8);
PPC_FUNC_IMPL(__imp__sub_8253B2A8) {
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
	// bl 0x823b00f0
	ctx.lr = 0x8253B2C0;
	sub_823B00F0(ctx, base);
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
	ctx.lr = 0x8253B2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8253b2e8
	if (!ctx.cr0.eq) goto loc_8253B2E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8253B2E8:
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

__attribute__((alias("__imp__sub_8253B300"))) PPC_WEAK_FUNC(sub_8253B300);
PPC_FUNC_IMPL(__imp__sub_8253B300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8253a490
	sub_8253A490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B310"))) PPC_WEAK_FUNC(sub_8253B310);
PPC_FUNC_IMPL(__imp__sub_8253B310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a490
	sub_8253A490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B320"))) PPC_WEAK_FUNC(sub_8253B320);
PPC_FUNC_IMPL(__imp__sub_8253B320) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a408
	sub_8253A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B330"))) PPC_WEAK_FUNC(sub_8253B330);
PPC_FUNC_IMPL(__imp__sub_8253B330) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a960
	sub_8253A960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B340"))) PPC_WEAK_FUNC(sub_8253B340);
PPC_FUNC_IMPL(__imp__sub_8253B340) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a3a8
	sub_8253A3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B350"))) PPC_WEAK_FUNC(sub_8253B350);
PPC_FUNC_IMPL(__imp__sub_8253B350) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a390
	sub_8253A390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B360"))) PPC_WEAK_FUNC(sub_8253B360);
PPC_FUNC_IMPL(__imp__sub_8253B360) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a3a0
	sub_8253A3A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B370"))) PPC_WEAK_FUNC(sub_8253B370);
PPC_FUNC_IMPL(__imp__sub_8253B370) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a818
	sub_8253A818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B380"))) PPC_WEAK_FUNC(sub_8253B380);
PPC_FUNC_IMPL(__imp__sub_8253B380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8253a768
	sub_8253A768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B390"))) PPC_WEAK_FUNC(sub_8253B390);
PPC_FUNC_IMPL(__imp__sub_8253B390) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r31,r11,-21960
	ctx.r31.s64 = ctx.r11.s64 + -21960;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8253B3C8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253b3f4
	if (ctx.cr0.eq) goto loc_8253B3F4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r10,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
loc_8253B3F4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8253b418
	if (ctx.cr6.eq) goto loc_8253B418;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x8253B418;
	sub_82332C38(ctx, base);
loc_8253B418:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8253B430"))) PPC_WEAK_FUNC(sub_8253B430);
PPC_FUNC_IMPL(__imp__sub_8253B430) {
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
	// addi r11,r11,-21960
	ctx.r11.s64 = ctx.r11.s64 + -21960;
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
	// ble cr6,0x8253b49c
	if (!ctx.cr6.gt) goto loc_8253B49C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253B46C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253b48c
	if (ctx.cr6.eq) goto loc_8253B48C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253b46c
	if (ctx.cr6.lt) goto loc_8253B46C;
	// b 0x8253b49c
	goto loc_8253B49C;
loc_8253B48C:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8253B49C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253b4c4
	if (ctx.cr6.eq) goto loc_8253B4C4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253B4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8253b4c8
	goto loc_8253B4C8;
loc_8253B4C4:
	// bl 0x8253e3c8
	ctx.lr = 0x8253B4C8;
	sub_8253E3C8(ctx, base);
loc_8253B4C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B4D8"))) PPC_WEAK_FUNC(sub_8253B4D8);
PPC_FUNC_IMPL(__imp__sub_8253B4D8) {
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
	// addi r11,r11,-21960
	ctx.r11.s64 = ctx.r11.s64 + -21960;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8253b538
	if (!ctx.cr6.gt) goto loc_8253B538;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253B504:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253b524
	if (ctx.cr6.eq) goto loc_8253B524;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253b504
	if (ctx.cr6.lt) goto loc_8253B504;
	// b 0x8253b538
	goto loc_8253B538;
loc_8253B524:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253b540
	if (!ctx.cr6.eq) goto loc_8253B540;
loc_8253B538:
	// bl 0x8253e470
	ctx.lr = 0x8253B53C;
	sub_8253E470(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253B540:
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

__attribute__((alias("__imp__sub_8253B558"))) PPC_WEAK_FUNC(sub_8253B558);
PPC_FUNC_IMPL(__imp__sub_8253B558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21960
	ctx.r11.s64 = ctx.r11.s64 + -21960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8253b5d8
	if (!ctx.cr6.gt) goto loc_8253B5D8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253B594:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8253b5b4
	if (ctx.cr6.eq) goto loc_8253B5B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253b594
	if (ctx.cr6.lt) goto loc_8253B594;
	// b 0x8253b5d8
	goto loc_8253B5D8;
loc_8253B5B4:
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
	ctx.lr = 0x8253B5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253b5e4
	if (!ctx.cr0.eq) goto loc_8253B5E4;
loc_8253B5D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253e4f0
	ctx.lr = 0x8253B5E4;
	sub_8253E4F0(ctx, base);
loc_8253B5E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253B600"))) PPC_WEAK_FUNC(sub_8253B600);
PPC_FUNC_IMPL(__imp__sub_8253B600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8253B608;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253e598
	ctx.lr = 0x8253B614;
	sub_8253E598(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,-15824
	ctx.r11.s64 = ctx.r11.s64 + -15824;
	// addi r10,r10,-13376
	ctx.r10.s64 = ctx.r10.s64 + -13376;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r3,r11,-16152
	ctx.r3.s64 = ctx.r11.s64 + -16152;
	// bl 0x82816528
	ctx.lr = 0x8253B644;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// bl 0x82816528
	ctx.lr = 0x8253B654;
	sub_82816528(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r25,2
	ctx.r25.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r25,3800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3800, ctx.r25.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r30,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r30.u32);
	// lfs f0,-29292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6720(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6720, temp.u32);
	// beq cr6,0x8253b688
	if (ctx.cr6.eq) goto loc_8253B688;
	// stw r29,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r29.u32);
loc_8253B688:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r30,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r30.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,6580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6580, ctx.r29.u32);
	// li r9,10000
	ctx.r9.s64 = 10000;
	// stw r30,6576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6576, ctx.r30.u32);
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// lfs f0,-32488(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// stfs f0,2384(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2384, temp.u32);
	// stw r9,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r9.u32);
	// stw r8,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r8.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r7,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r7.u32);
	// addi r28,r10,-32488
	ctx.r28.s64 = ctx.r10.s64 + -32488;
	// stw r30,6572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6572, ctx.r30.u32);
	// addi r3,r11,24656
	ctx.r3.s64 = ctx.r11.s64 + 24656;
	// stw r29,6988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6988, ctx.r29.u32);
	// stw r30,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r30.u32);
	// stw r25,3708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3708, ctx.r25.u32);
	// bl 0x82816528
	ctx.lr = 0x8253B6E8;
	sub_82816528(ctx, base);
	// stw r3,3712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3712, ctx.r3.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,24688
	ctx.r3.s64 = ctx.r11.s64 + 24688;
	// bl 0x82816528
	ctx.lr = 0x8253B6F8;
	sub_82816528(ctx, base);
	// stw r3,3716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3716, ctx.r3.u32);
	// stw r30,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r30.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r27,-1
	ctx.r27.s64 = -1;
	// lis r5,-19168
	ctx.r5.s64 = -1256194048;
	// addi r4,r31,6924
	ctx.r4.s64 = ctx.r31.s64 + 6924;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r5,r5,50668
	ctx.r5.u64 = ctx.r5.u64 | 50668;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253B728;
	sub_823CF190(ctx, base);
	// stw r29,5628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5628, ctx.r29.u32);
	// stw r30,6940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6940, ctx.r30.u32);
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// stw r29,4232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4232, ctx.r29.u32);
	// lis r5,-5535
	ctx.r5.s64 = -362741760;
	// stw r30,4240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4240, ctx.r30.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r25,4244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4244, ctx.r25.u32);
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// ori r5,r5,21857
	ctx.r5.u64 = ctx.r5.u64 | 21857;
	// addi r4,r31,7004
	ctx.r4.s64 = ctx.r31.s64 + 7004;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8253B760;
	sub_824091A0(ctx, base);
	// addi r11,r28,124
	ctx.r11.s64 = ctx.r28.s64 + 124;
	// addi r10,r31,7008
	ctx.r10.s64 = ctx.r31.s64 + 7008;
loc_8253B768:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r28,124
	ctx.r9.s64 = ctx.r28.s64 + 124;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x8253b768
	if (ctx.cr6.lt) goto loc_8253B768;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lis r5,-2694
	ctx.r5.s64 = -176553984;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r5,r5,12156
	ctx.r5.u64 = ctx.r5.u64 | 12156;
	// addi r4,r31,6836
	ctx.r4.s64 = ctx.r31.s64 + 6836;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253B7A8;
	sub_823CF190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253B7B8"))) PPC_WEAK_FUNC(sub_8253B7B8);
PPC_FUNC_IMPL(__imp__sub_8253B7B8) {
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
	// bl 0x82540e00
	ctx.lr = 0x8253B7D0;
	sub_82540E00(ctx, base);
	// lwz r11,-396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253B7E4;
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

__attribute__((alias("__imp__sub_8253B7F8"))) PPC_WEAK_FUNC(sub_8253B7F8);
PPC_FUNC_IMPL(__imp__sub_8253B7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8253B800;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8253fcd8
	ctx.lr = 0x8253B814;
	sub_8253FCD8(ctx, base);
	// lwz r11,5728(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253b828
	if (ctx.cr6.eq) goto loc_8253B828;
	// lwz r4,5724(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5724);
	// b 0x8253b830
	goto loc_8253B830;
loc_8253B828:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8253B830:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82409058
	ctx.lr = 0x8253B838;
	sub_82409058(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8253b85c
	if (ctx.cr6.eq) goto loc_8253B85C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253b85c
	if (ctx.cr6.eq) goto loc_8253B85C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8253B85C;
	sub_82332DB8(ctx, base);
loc_8253B85C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253bd94
	if (ctx.cr6.eq) goto loc_8253BD94;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253bd94
	if (ctx.cr6.eq) goto loc_8253BD94;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82507af0
	ctx.lr = 0x8253B878;
	sub_82507AF0(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,15280
	ctx.r4.s64 = ctx.r10.s64 + 15280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253B898;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253B8C0;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15872
	ctx.r4.s64 = ctx.r11.s64 + 15872;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253B8E8;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253B904;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253B920;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253B93C;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253B958;
	sub_829E6978(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253B980;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r28,r29,3412
	ctx.r28.s64 = ctx.r29.s64 + 3412;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8253B994;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253B9AC;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253B9D4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,24012
	ctx.r4.s64 = ctx.r11.s64 + 24012;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253B9FC;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BA18;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BA34;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,15904
	ctx.r4.s64 = ctx.r11.s64 + 15904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BA50;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BA6C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253BA94;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8253BAA4;
	sub_82507928(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BABC;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253BAE4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,24028
	ctx.r4.s64 = ctx.r11.s64 + 24028;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253BB0C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,15956
	ctx.r27.s64 = ctx.r11.s64 + 15956;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8253BB24;
	sub_829E6A48(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,-25080
	ctx.r26.s64 = ctx.r11.s64 + -25080;
	// beq 0x8253bb50
	if (ctx.cr0.eq) goto loc_8253BB50;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BB48;
	sub_829E6978(ctx, base);
	// stfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// b 0x8253bb58
	goto loc_8253BB58;
loc_8253BB50:
	// lfs f0,13656(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 13656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_8253BB58:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BB70;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BB8C;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r11,24044
	ctx.r4.s64 = ctx.r11.s64 + 24044;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BBA8;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,18776
	ctx.r4.s64 = ctx.r11.s64 + 18776;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BBC4;
	sub_829E6978(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253BBEC;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8253BBFC;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-12260
	ctx.r4.s64 = ctx.r11.s64 + -12260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BC14;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253BC3C;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,24728
	ctx.r4.s64 = ctx.r11.s64 + 24728;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253BC64;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r11,-12104
	ctx.r4.s64 = ctx.r11.s64 + -12104;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BC80;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r4,r11,-12084
	ctx.r4.s64 = ctx.r11.s64 + -12084;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BC9C;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f1,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,19836
	ctx.r4.s64 = ctx.r11.s64 + 19836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BCB8;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BCD4;
	sub_829E6978(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r4,r11,-12124
	ctx.r4.s64 = ctx.r11.s64 + -12124;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253BCFC;
	sub_829E6978(ctx, base);
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82507928
	ctx.lr = 0x8253BD0C;
	sub_82507928(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,24744
	ctx.r4.s64 = ctx.r11.s64 + 24744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253BD24;
	sub_829E6978(ctx, base);
	// li r11,6932
	ctx.r11.s64 = 6932;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,24764
	ctx.r4.s64 = ctx.r10.s64 + 24764;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253BD48;
	sub_829E6978(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,13624(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 13624);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f12,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,6972(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6972, ctx.r10.u32);
	// lfs f0,20380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20380);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f1,6976(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6976, temp.u32);
	// stw r10,6968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6968, ctx.r10.u32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,6980(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6980, temp.u32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f0,6984(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 6984, temp.u32);
	// stw r11,6964(r29)
	PPC_STORE_U32(ctx.r29.u32 + 6964, ctx.r11.u32);
loc_8253BD94:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253bdbc
	if (ctx.cr6.eq) goto loc_8253BDBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r29,3436
	ctx.r3.s64 = ctx.r29.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x8253BDBC;
	sub_82522580(ctx, base);
loc_8253BDBC:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253bde4
	if (ctx.cr6.eq) goto loc_8253BDE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r29,3436
	ctx.r3.s64 = ctx.r29.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x8253BDE4;
	sub_82522580(ctx, base);
loc_8253BDE4:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253be0c
	if (ctx.cr6.eq) goto loc_8253BE0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r29,3436
	ctx.r3.s64 = ctx.r29.s64 + 3436;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82522580
	ctx.lr = 0x8253BE0C;
	sub_82522580(ctx, base);
loc_8253BE0C:
	// lwz r11,3424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3424);
	// lwz r11,196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253be4c
	if (ctx.cr6.eq) goto loc_8253BE4C;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r31,r29,3436
	ctx.r31.s64 = ctx.r29.s64 + 3436;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8253BE38;
	sub_82522580(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82522580
	ctx.lr = 0x8253BE4C;
	sub_82522580(ctx, base);
loc_8253BE4C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253BE58"))) PPC_WEAK_FUNC(sub_8253BE58);
PPC_FUNC_IMPL(__imp__sub_8253BE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8253fe78
	ctx.lr = 0x8253BE78;
	sub_8253FE78(ctx, base);
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8253bea4
	if (!ctx.cr6.eq) goto loc_8253BEA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253BEA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253BEA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BEC0"))) PPC_WEAK_FUNC(sub_8253BEC0);
PPC_FUNC_IMPL(__imp__sub_8253BEC0) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20512);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20508(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20508);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,6888(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6888, temp.u32);
	// stfs f13,6892(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6892, temp.u32);
	// stfs f12,6896(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6896, temp.u32);
	// stfs f11,6900(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6900, temp.u32);
	// bl 0x82540ae8
	ctx.lr = 0x8253BF0C;
	sub_82540AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BF20"))) PPC_WEAK_FUNC(sub_8253BF20);
PPC_FUNC_IMPL(__imp__sub_8253BF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r6,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r6.u64);
	// lfs f12,52(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// std r7,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r7.u64);
	// lfs f11,56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6520(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253BF58"))) PPC_WEAK_FUNC(sub_8253BF58);
PPC_FUNC_IMPL(__imp__sub_8253BF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253BF60;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61748
	ctx.lr = 0x8253BF68;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x8253BF74;
	sub_824DD5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bed50
	ctx.lr = 0x8253BF7C;
	sub_829BED50(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r28.u32);
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r28.u32);
	// lfs f13,19580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19580);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// beq cr6,0x8253bfb8
	if (ctx.cr6.eq) goto loc_8253BFB8;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_8253BFB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c2520
	ctx.lr = 0x8253BFC0;
	sub_829C2520(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f28,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f28.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8253C024:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8253c024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C024;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-19521
	ctx.r4.s64 = -1279328256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,23324
	ctx.r4.u64 = ctx.r4.u64 | 23324;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C054;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x8253C060;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253c088
	if (ctx.cr0.eq) goto loc_8253C088;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x8253C080;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253c08c
	goto loc_8253C08C;
loc_8253C088:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8253C08C:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253c0b0
	if (!ctx.cr6.eq) goto loc_8253C0B0;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c0b0
	if (ctx.cr6.eq) goto loc_8253C0B0;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_8253C0B0:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C0D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,22763
	ctx.r4.s64 = 1491795968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,37495
	ctx.r4.u64 = ctx.r4.u64 | 37495;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C0EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x8253C0F8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253c120
	if (ctx.cr0.eq) goto loc_8253C120;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x8253C118;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253c124
	goto loc_8253C124;
loc_8253C120:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8253C124:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253c148
	if (!ctx.cr6.eq) goto loc_8253C148;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c148
	if (ctx.cr6.eq) goto loc_8253C148;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_8253C148:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f31.f64;
	// lfs f0,-31124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16588);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253c1a0
	if (ctx.cr6.eq) goto loc_8253C1A0;
	// lfs f12,2384(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f12,f13
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_8253C1A0:
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f28,100(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f28,120(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8253C1F0:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8253c1f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253C1F0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x82816528
	ctx.lr = 0x8253C214;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82833108
	ctx.lr = 0x8253C234;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253c25c
	if (ctx.cr0.eq) goto loc_8253C25C;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x828d4f20
	ctx.lr = 0x8253C254;
	sub_828D4F20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8253c260
	goto loc_8253C260;
loc_8253C25C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8253C260:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253c284
	if (!ctx.cr6.eq) goto loc_8253C284;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253c284
	if (ctx.cr6.eq) goto loc_8253C284;
	// lwz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
loc_8253C284:
	// lwz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C2A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82a61794
	ctx.lr = 0x8253C2B0;
	__restfpr_28(ctx, base);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253C2B8"))) PPC_WEAK_FUNC(sub_8253C2B8);
PPC_FUNC_IMPL(__imp__sub_8253C2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8253C2C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24784
	ctx.r4.s64 = ctx.r11.s64 + 24784;
	// bl 0x8233a258
	ctx.lr = 0x8253C2D8;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4296
	ctx.r3.s64 = ctx.r31.s64 + 4296;
	// bl 0x82400b48
	ctx.lr = 0x8253C2E4;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8253C2EC;
	sub_82333960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,24796
	ctx.r4.s64 = ctx.r11.s64 + 24796;
	// bl 0x8233a258
	ctx.lr = 0x8253C2FC;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4320
	ctx.r3.s64 = ctx.r31.s64 + 4320;
	// bl 0x82400b48
	ctx.lr = 0x8253C308;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x8253C310;
	sub_82333960(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-392
	ctx.r28.s64 = ctx.r11.s64 + -392;
	// addi r27,r31,4344
	ctx.r27.s64 = ctx.r31.s64 + 4344;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8253C324:
	// bl 0x825357f8
	ctx.lr = 0x8253C328;
	sub_825357F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x8253C338;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x824ef870
	ctx.lr = 0x8253C354;
	sub_824EF870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x8253C364;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x825357f8
	ctx.lr = 0x8253C36C;
	sub_825357F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823339b8
	ctx.lr = 0x8253C37C;
	sub_823339B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x82333960
	ctx.lr = 0x8253C388;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535798
	ctx.lr = 0x8253C394;
	sub_82535798(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82333960
	ctx.lr = 0x8253C39C;
	sub_82333960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r11,r28,144
	ctx.r11.s64 = ctx.r28.s64 + 144;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8253c324
	if (ctx.cr6.lt) goto loc_8253C324;
	// lwz r10,4360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8253c3f8
	if (!ctx.cr6.gt) goto loc_8253C3F8;
	// addi r10,r31,4408
	ctx.r10.s64 = ctx.r31.s64 + 4408;
loc_8253C3E0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253c3e0
	if (ctx.cr6.lt) goto loc_8253C3E0;
loc_8253C3F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253C400"))) PPC_WEAK_FUNC(sub_8253C400);
PPC_FUNC_IMPL(__imp__sub_8253C400) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540ea0
	sub_82540EA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253C408"))) PPC_WEAK_FUNC(sub_8253C408);
PPC_FUNC_IMPL(__imp__sub_8253C408) {
	PPC_FUNC_PROLOGUE();
	// b 0x82540f58
	sub_82540F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253C410"))) PPC_WEAK_FUNC(sub_8253C410);
PPC_FUNC_IMPL(__imp__sub_8253C410) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,3424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r11,r4,56
	ctx.r11.s64 = ctx.r4.s64 * 56;
	// lwz r8,3332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6944(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6944);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r9.u32);
	// lwz r8,3332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6948(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// lwz r9,3424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// stw r9,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r9.u32);
	// lwz r9,3332(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3332);
	// lwz r7,6960(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// lwz r8,3424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,592(r7)
	PPC_STORE_U32(ctx.r7.u32 + 592, ctx.r10.u32);
	// stw r11,452(r7)
	PPC_STORE_U32(ctx.r7.u32 + 452, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253C480"))) PPC_WEAK_FUNC(sub_8253C480);
PPC_FUNC_IMPL(__imp__sub_8253C480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x8253C488;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61734
	ctx.lr = 0x8253C490;
	__savefpr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x8253C49C;
	sub_824DF418(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r10,r28,-24644
	ctx.r10.s64 = ctx.r28.s64 + -24644;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,19836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19836);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f13,19832(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19832);
	ctx.f13.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f29,-2656(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2656);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r6,14244
	ctx.r3.s64 = ctx.r6.s64 + 14244;
	// lfs f27,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lfs f12,19828(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19828);
	ctx.f12.f64 = double(temp.f32);
	// lfs f26,-2684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2684);
	ctx.f26.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f27,176(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f27,184(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,5352(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,588(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r30,5352(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253C510;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,9760
	ctx.r3.s64 = ctx.r11.s64 + 9760;
	// bl 0x82816528
	ctx.lr = 0x8253C520;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r27,152(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r25,184(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// rldicr r9,r25,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253C564;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,5360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5360, ctx.r11.u32);
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,5360(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,5360(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5360);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C5B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r25,r11,14264
	ctx.r25.s64 = ctx.r11.s64 + 14264;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r29,5352(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// lfs f0,19564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19564);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,16572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16572);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f12,19824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19824);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,17960(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17960);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f10,19820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19820);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,19816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19816);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253C618;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,-5628
	ctx.r3.s64 = ctx.r11.s64 + -5628;
	// bl 0x82816528
	ctx.lr = 0x8253C628;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r24,184(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r23,152(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rldicr r9,r23,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253C66C;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,5356(r26)
	PPC_STORE_U32(ctx.r26.u32 + 5356, ctx.r11.u32);
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,5356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,5356(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5356);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r24,-32243
	ctx.r24.s64 = -2113077248;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// addi r23,r24,32760
	ctx.r23.s64 = ctx.r24.s64 + 32760;
	// lfs f24,19684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19684);
	ctx.f24.f64 = double(temp.f32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stfs f24,144(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r11,22763
	ctx.r11.s64 = 1491795968;
	// lfs f28,-31124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31124);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r7,9772
	ctx.r3.s64 = ctx.r7.s64 + 9772;
	// lfs f30,19548(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19548);
	ctx.f30.f64 = double(temp.f32);
	// lfs f23,19792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19792);
	ctx.f23.f64 = double(temp.f32);
	// ori r30,r11,37495
	ctx.r30.u64 = ctx.r11.u64 | 37495;
	// lfs f25,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f23,168(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r29,5352(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253C714;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r22,152(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r9,r22,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253C758;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9784
	ctx.r3.s64 = ctx.r11.s64 + 9784;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r29,r10,23324
	ctx.r29.u64 = ctx.r10.u64 | 23324;
	// stfs f24,144(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f28,148(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f25,152(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f23,168(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r27,5352(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253C7C8;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r11,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x824e5590
	ctx.lr = 0x8253C80C;
	sub_824E5590(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,16364
	ctx.r10.s64 = 1072431104;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r11,9796
	ctx.r3.s64 = ctx.r11.s64 + 9796;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r27,r10,28383
	ctx.r27.u64 = ctx.r10.u64 | 28383;
	// lwz r22,5352(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253C87C;
	sub_82816528(ctx, base);
	// ld r21,176(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r21,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r21.u64);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253C8C0;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r30,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r30.u32);
	// stw r30,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C8F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,599
	ctx.r10.s64 = 39256064;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9808
	ctx.r3.s64 = ctx.r11.s64 + 9808;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r27,r10,14532
	ctx.r27.u64 = ctx.r10.u64 | 14532;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r22,5352(r26)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253C930;
	sub_82816528(ctx, base);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r21,176(r1)
	ctx.r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r21,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r21.u64);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253C974;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// stw r29,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r29.u32);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253C9A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,30100
	ctx.r10.s64 = 1972633600;
	// lfs f25,-24644(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -24644);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r11,9820
	ctx.r3.s64 = ctx.r11.s64 + 9820;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ori r29,r10,42004
	ctx.r29.u64 = ctx.r10.u64 | 42004;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r28,5352(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253C9E8;
	sub_82816528(ctx, base);
	// ld r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253CA2C;
	sub_824E5590(ctx, base);
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r31,400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 400, ctx.r31.u32);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253CA64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-13035
	ctx.r10.s64 = -854261760;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9836
	ctx.r3.s64 = ctx.r11.s64 + 9836;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r28,r10,53749
	ctx.r28.u64 = ctx.r10.u64 | 53749;
	// stfs f25,144(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f27,148(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f27,152(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,160(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r27,5352(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x8253CAA0;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253CAE4;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r31,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r31.u32);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253CB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r7,-11265
	ctx.r7.s64 = -738263040;
	// stfs f26,148(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r8,9852
	ctx.r3.s64 = ctx.r8.s64 + 9852;
	// lfs f27,19812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f25.f64 = double(temp.f32);
	// ori r28,r7,44068
	ctx.r28.u64 = ctx.r7.u64 | 44068;
	// lfs f30,19204(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19204);
	ctx.f30.f64 = double(temp.f32);
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CB68;
	sub_82816528(ctx, base);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253CBAC;
	sub_824E5590(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,6852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// stfs f29,588(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 588, temp.u32);
	// stw r29,436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 436, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 468, ctx.r29.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253CBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,24284
	ctx.r10.s64 = 1591476224;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r11,9868
	ctx.r3.s64 = ctx.r11.s64 + 9868;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// ori r28,r10,32798
	ctx.r28.u64 = ctx.r10.u64 | 32798;
	// stfs f27,144(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f26,148(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f26,152(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f25,160(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CC14;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// bl 0x824e5590
	ctx.lr = 0x8253CC58;
	sub_824E5590(ctx, base);
	// lwz r10,6852(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6852);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f29,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// stw r31,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r31.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253CC88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lfs f12,19808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19808);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,17060
	ctx.r3.s64 = ctx.r7.s64 + 17060;
	// lfs f0,16540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,19804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,17848(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17848);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CCD8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,24808
	ctx.r3.s64 = ctx.r11.s64 + 24808;
	// bl 0x82816528
	ctx.lr = 0x8253CCE8;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,184(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r22,152(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r22,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x8253CD30;
	sub_824E4120(ctx, base);
	// stfs f28,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f28,180(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// li r28,100
	ctx.r28.s64 = 100;
	// lwz r4,6928(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6928);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// ld r27,176(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stw r3,6944(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6944, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r27.u64);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82331120
	ctx.lr = 0x8253CD90;
	sub_82331120(ctx, base);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r3,r7,24816
	ctx.r3.s64 = ctx.r7.s64 + 24816;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r9,r11,-21972
	ctx.r9.s64 = ctx.r11.s64 + -21972;
	// addi r8,r10,-21984
	ctx.r8.s64 = ctx.r10.s64 + -21984;
	// lwz r7,6944(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6944);
	// stw r31,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r31.u32);
	// lwz r11,-21972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21972);
	// lwz r10,-21984(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21984);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r22,8(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CDE8;
	sub_82816528(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r5,648
	ctx.r5.s64 = 648;
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r8,r22,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x824e4120
	ctx.lr = 0x8253CE28;
	sub_824E4120(ctx, base);
	// stfs f28,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r3,6956(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6956, ctx.r3.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,6932(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6932);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82331120
	ctx.lr = 0x8253CE7C;
	sub_82331120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,160(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lfs f0,19800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19800);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r6,14280
	ctx.r3.s64 = ctx.r6.s64 + 14280;
	// lfs f12,19644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,18284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 18284);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,6956(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6956);
	// stw r31,56(r7)
	PPC_STORE_U32(ctx.r7.u32 + 56, ctx.r31.u32);
	// lfs f27,17120(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17120);
	ctx.f27.f64 = double(temp.f32);
	// stfs f26,148(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f27,168(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CED8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r11,14296
	ctx.r3.s64 = ctx.r11.s64 + 14296;
	// bl 0x82816528
	ctx.lr = 0x8253CEE8;
	sub_82816528(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r22,184(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x8253CF30;
	sub_824E4120(ctx, base);
	// lfs f29,248(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 248);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r27,1000
	ctx.r27.s64 = 1000;
	// stfs f29,180(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r22,184(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r3,6948(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6948, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82331120
	ctx.lr = 0x8253CF8C;
	sub_82331120(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r10,19992
	ctx.r3.s64 = ctx.r10.s64 + 19992;
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,160(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,17116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r11,6948(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6948);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r11,3424(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3424);
	// lfs f0,148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8253CFD8;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r11,24832
	ctx.r3.s64 = ctx.r11.s64 + 24832;
	// bl 0x82816528
	ctx.lr = 0x8253CFE8;
	sub_82816528(ctx, base);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r22,176(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r22,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r22.u64);
	// bl 0x824e4120
	ctx.lr = 0x8253D030;
	sub_824E4120(ctx, base);
	// stfs f29,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stfs f29,176(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// lwz r4,3332(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 3332);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,6960(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6960, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// bl 0x82331120
	ctx.lr = 0x8253D088;
	sub_82331120(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,260(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r9,r11,13868
	ctx.r9.s64 = ctx.r11.s64 + 13868;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,32760(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 32760);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,19596(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19596);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r10,6960(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6960);
	// stw r31,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r31.u32);
	// lwz r11,13868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13868);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x8253D0E4;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r11,24848
	ctx.r3.s64 = ctx.r11.s64 + 24848;
	// bl 0x82816528
	ctx.lr = 0x8253D0F4;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bl 0x824e4120
	ctx.lr = 0x8253D138;
	sub_824E4120(ctx, base);
	// stfs f28,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,180(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r3,6856(r26)
	PPC_STORE_U32(ctx.r26.u32 + 6856, ctx.r3.u32);
	// stfs f28,184(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lwz r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82331120
	ctx.lr = 0x8253D18C;
	sub_82331120(ctx, base);
	// lwz r11,6856(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6856);
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
	// lwz r11,6856(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6856);
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// lwz r11,6856(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 6856);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82a61780
	ctx.lr = 0x8253D1B8;
	__restfpr_23(ctx, base);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D1C0"))) PPC_WEAK_FUNC(sub_8253D1C0);
PPC_FUNC_IMPL(__imp__sub_8253D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253D1C8;
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
	// bl 0x829c2520
	ctx.lr = 0x8253D1D8;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8253d204
	if (ctx.cr0.eq) goto loc_8253D204;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,6912
	ctx.r29.s64 = ctx.r31.s64 + 6912;
	// addi r3,r11,24856
	ctx.r3.s64 = ctx.r11.s64 + 24856;
	// bl 0x82816528
	ctx.lr = 0x8253D1F0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x824e7350
	ctx.lr = 0x8253D204;
	sub_824E7350(ctx, base);
loc_8253D204:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fb50
	ctx.lr = 0x8253D220;
	sub_8253FB50(ctx, base);
	// lis r4,-12150
	ctx.r4.s64 = -796262400;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,1199
	ctx.r4.u64 = ctx.r4.u64 | 1199;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8253D234;
	sub_829BD828(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r3,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,24868
	ctx.r29.s64 = ctx.r11.s64 + 24868;
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq 0x8253d29c
	if (ctx.cr0.eq) goto loc_8253D29C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8253D270;
	sub_82816528(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x829c7118
	ctx.lr = 0x8253D290;
	sub_829C7118(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,6920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// bl 0x82978d98
	ctx.lr = 0x8253D29C;
	sub_82978D98(ctx, base);
loc_8253D29C:
	// lis r4,-22100
	ctx.r4.s64 = -1448345600;
	// li r5,48
	ctx.r5.s64 = 48;
	// ori r4,r4,14712
	ctx.r4.u64 = ctx.r4.u64 | 14712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd828
	ctx.lr = 0x8253D2B0;
	sub_829BD828(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,6916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6916, ctx.r3.u32);
	// beq 0x8253d300
	if (ctx.cr0.eq) goto loc_8253D300;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// bl 0x82816528
	ctx.lr = 0x8253D2D8;
	sub_82816528(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x829c7118
	ctx.lr = 0x8253D2F8;
	sub_829C7118(ctx, base);
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// bl 0x82978ed0
	ctx.lr = 0x8253D300;
	sub_82978ED0(ctx, base);
loc_8253D300:
	// stfs f31,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
loc_8253D304:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,6560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x8253d304
	if (ctx.cr6.lt) goto loc_8253D304;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D338"))) PPC_WEAK_FUNC(sub_8253D338);
PPC_FUNC_IMPL(__imp__sub_8253D338) {
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
	// lwz r30,64(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// stw r4,6728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6728, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,6712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6712, ctx.r10.u32);
	// beq cr6,0x8253d38c
	if (ctx.cr6.eq) goto loc_8253D38C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,24884
	ctx.r3.s64 = ctx.r11.s64 + 24884;
	// bl 0x82816528
	ctx.lr = 0x8253D378;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253d38c
	if (!ctx.cr6.eq) goto loc_8253D38C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// bl 0x8281d650
	ctx.lr = 0x8253D38C;
	sub_8281D650(ctx, base);
loc_8253D38C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5416, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D3B0"))) PPC_WEAK_FUNC(sub_8253D3B0);
PPC_FUNC_IMPL(__imp__sub_8253D3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253D3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// lwz r29,64(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253d3f8
	if (ctx.cr6.eq) goto loc_8253D3F8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,24884
	ctx.r3.s64 = ctx.r11.s64 + 24884;
	// bl 0x82816528
	ctx.lr = 0x8253D3E0;
	sub_82816528(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253d3f8
	if (!ctx.cr6.eq) goto loc_8253D3F8;
	// lwz r11,6856(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8253D3F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e8298
	ctx.lr = 0x8253D404;
	sub_824E8298(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D410"))) PPC_WEAK_FUNC(sub_8253D410);
PPC_FUNC_IMPL(__imp__sub_8253D410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6944);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

