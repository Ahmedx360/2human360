#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82551158"))) PPC_WEAK_FUNC(sub_82551158);
PPC_FUNC_IMPL(__imp__sub_82551158) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f0b8
	sub_8239F0B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551160"))) PPC_WEAK_FUNC(sub_82551160);
PPC_FUNC_IMPL(__imp__sub_82551160) {
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
	// li r3,2128
	ctx.r3.s64 = 2128;
	// bl 0x82833108
	ctx.lr = 0x8255117C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82551194
	if (ctx.cr0.eq) goto loc_82551194;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82551310
	ctx.lr = 0x82551190;
	sub_82551310(ctx, base);
	// b 0x82551198
	goto loc_82551198;
loc_82551194:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551198:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825511ac
	if (ctx.cr6.eq) goto loc_825511AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_825511AC:
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

__attribute__((alias("__imp__sub_825511C0"))) PPC_WEAK_FUNC(sub_825511C0);
PPC_FUNC_IMPL(__imp__sub_825511C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825511f0
	if (ctx.cr6.eq) goto loc_825511F0;
	// bl 0x8239f0b8
	ctx.lr = 0x825511E8;
	sub_8239F0B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82551250
	if (ctx.cr6.eq) goto loc_82551250;
loc_825511F0:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82346e08
	ctx.lr = 0x82551208;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82551250
	if (!ctx.cr0.eq) goto loc_82551250;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x823510a0
	ctx.lr = 0x82551228;
	sub_823510A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82551250
	if (!ctx.cr0.eq) goto loc_82551250;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8234b850
	ctx.lr = 0x82551244;
	sub_8234B850(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82551254
	if (ctx.cr0.eq) goto loc_82551254;
loc_82551250:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82551254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551270"))) PPC_WEAK_FUNC(sub_82551270);
PPC_FUNC_IMPL(__imp__sub_82551270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239f0b8
	ctx.lr = 0x82551290;
	sub_8239F0B8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x825512a0
	if (!ctx.cr6.eq) goto loc_825512A0;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// b 0x825512f4
	goto loc_825512F4;
loc_825512A0:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82346ed0
	ctx.lr = 0x825512B8;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825512f4
	if (!ctx.cr0.eq) goto loc_825512F4;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82351168
	ctx.lr = 0x825512D8;
	sub_82351168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825512f4
	if (!ctx.cr0.eq) goto loc_825512F4;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8234b8c8
	ctx.lr = 0x825512F4;
	sub_8234B8C8(ctx, base);
loc_825512F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551310"))) PPC_WEAK_FUNC(sub_82551310);
PPC_FUNC_IMPL(__imp__sub_82551310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82551318;
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
	// addi r11,r11,-9324
	ctx.r11.s64 = ctx.r11.s64 + -9324;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// addi r11,r8,-9304
	ctx.r11.s64 = ctx.r8.s64 + -9304;
	// stw r10,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r9.u32);
	// addi r28,r31,2032
	ctx.r28.s64 = ctx.r31.s64 + 2032;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// addi r27,r31,2048
	ctx.r27.s64 = ctx.r31.s64 + 2048;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82551370
	if (!ctx.cr6.eq) goto loc_82551370;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8255137c
	goto loc_8255137C;
loc_82551370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255137C:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x823ff1a0
	ctx.lr = 0x82551384;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82551394
	if (!ctx.cr6.eq) goto loc_82551394;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825513a0
	goto loc_825513A0;
loc_82551394:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825513A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82346f30
	ctx.lr = 0x825513AC;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825513bc
	if (!ctx.cr6.eq) goto loc_825513BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825513c8
	goto loc_825513C8;
loc_825513BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825513C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x825513D4;
	sub_823511C8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825513e4
	if (!ctx.cr6.eq) goto loc_825513E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x825513f0
	goto loc_825513F0;
loc_825513E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825513F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,2080
	ctx.r3.s64 = ctx.r31.s64 + 2080;
	// bl 0x8234c128
	ctx.lr = 0x825513FC;
	sub_8234C128(ctx, base);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r11,r10,-10976
	ctx.r11.s64 = ctx.r10.s64 + -10976;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// addi r10,r10,-9404
	ctx.r10.s64 = ctx.r10.s64 + -9404;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r9,r9,11368
	ctx.r9.s64 = ctx.r9.s64 + 11368;
	// addi r8,r8,-9352
	ctx.r8.s64 = ctx.r8.s64 + -9352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825514C8"))) PPC_WEAK_FUNC(sub_825514C8);
PPC_FUNC_IMPL(__imp__sub_825514C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825514D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r11,r11,-9324
	ctx.r11.s64 = ctx.r11.s64 + -9324;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// addi r11,r8,-9304
	ctx.r11.s64 = ctx.r8.s64 + -9304;
	// stw r10,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r10.u32);
	// stw r9,2048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2048, ctx.r9.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,2032
	ctx.r29.s64 = ctx.r31.s64 + 2032;
	// addi r28,r31,2048
	ctx.r28.s64 = ctx.r31.s64 + 2048;
	// bl 0x824cbb48
	ctx.lr = 0x8255151C;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba650
	ctx.lr = 0x82551528;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82501770
	ctx.lr = 0x82551534;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2080
	ctx.r3.s64 = ctx.r31.s64 + 2080;
	// bl 0x824d8ef8
	ctx.lr = 0x82551540;
	sub_824D8EF8(ctx, base);
	// lis r29,-32244
	ctx.r29.s64 = -2113142784;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-10976
	ctx.r11.s64 = ctx.r11.s64 + -10976;
	// addi r7,r10,-9404
	ctx.r7.s64 = ctx.r10.s64 + -9404;
	// lfs f12,30996(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r6,r10,11368
	ctx.r6.s64 = ctx.r10.s64 + 11368;
	// addi r5,r9,-9352
	ctx.r5.s64 = ctx.r9.s64 + -9352;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r4,-32244
	ctx.r4.s64 = -2113142784;
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// addi r3,r4,30356
	ctx.r3.s64 = ctx.r4.s64 + 30356;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lis r28,-32216
	ctx.r28.s64 = -2111307776;
	// lfs f13,-5632(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -5632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9940(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -9940);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r6,396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 396, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-2080
	ctx.r11.s64 = ctx.r11.s64 + -2080;
	// stw r11,-4(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 928, ctx.r10.u32);
	// stw r9,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r9.u32);
	// stw r8,936(r11)
	PPC_STORE_U32(ctx.r11.u32 + 936, ctx.r8.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f13,7852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7852);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lfs f0,-12104(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,30356(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 30356);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r3,r10,-18392
	ctx.r3.s64 = ctx.r10.s64 + -18392;
	// bl 0x82816528
	ctx.lr = 0x82551654;
	sub_82816528(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lfs f0,23968(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23968);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825516A0"))) PPC_WEAK_FUNC(sub_825516A0);
PPC_FUNC_IMPL(__imp__sub_825516A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825ba700
	ctx.lr = 0x825516CC;
	sub_825BA700(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x82501810
	ctx.lr = 0x825516E0;
	sub_82501810(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d8f88
	ctx.lr = 0x825516F0;
	sub_824D8F88(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,236
	ctx.xer.ca = ctx.r11.u32 > 4294967059;
	ctx.r11.s64 = ctx.r11.s64 + 236;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255171c
	if (ctx.cr0.eq) goto loc_8255171C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255171c
	if (ctx.cr6.eq) goto loc_8255171C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82551720
	goto loc_82551720;
loc_8255171C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82551720:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-25984
	ctx.r3.s64 = ctx.r11.s64 + -25984;
	// bl 0x82816528
	ctx.lr = 0x8255172C;
	sub_82816528(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,25636
	ctx.r3.s64 = ctx.r11.s64 + 25636;
	// bl 0x82816528
	ctx.lr = 0x8255173C;
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
	ctx.lr = 0x82551750;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26028
	ctx.r3.s64 = ctx.r11.s64 + -26028;
	// bl 0x82816528
	ctx.lr = 0x8255175C;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x8255176C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8255177C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// bl 0x82816528
	ctx.lr = 0x82551788;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-17724
	ctx.r3.s64 = ctx.r11.s64 + -17724;
	// bl 0x82816528
	ctx.lr = 0x82551798;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825517A8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-25904
	ctx.r3.s64 = ctx.r11.s64 + -25904;
	// bl 0x82816528
	ctx.lr = 0x825517B4;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19576
	ctx.r3.s64 = ctx.r11.s64 + -19576;
	// bl 0x82816528
	ctx.lr = 0x825517C4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x825517D4;
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

__attribute__((alias("__imp__sub_825517F0"))) PPC_WEAK_FUNC(sub_825517F0);
PPC_FUNC_IMPL(__imp__sub_825517F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,-2036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2036);
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

__attribute__((alias("__imp__sub_82551808"))) PPC_WEAK_FUNC(sub_82551808);
PPC_FUNC_IMPL(__imp__sub_82551808) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-2080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -2080);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-2080
	ctx.r3.s64 = ctx.r11.s64 + -2080;
	// b 0x824d90c0
	sub_824D90C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551820"))) PPC_WEAK_FUNC(sub_82551820);
PPC_FUNC_IMPL(__imp__sub_82551820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824ce338
	ctx.lr = 0x82551850;
	sub_824CE338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f65f8
	ctx.lr = 0x82551858;
	sub_824F65F8(ctx, base);
	// stw r3,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551878"))) PPC_WEAK_FUNC(sub_82551878);
PPC_FUNC_IMPL(__imp__sub_82551878) {
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824ccaf0
	ctx.lr = 0x825518A0;
	sub_824CCAF0(ctx, base);
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// lfs f0,6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -48, temp.u32);
	// lfs f0,6940(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -52, temp.u32);
	// lfs f0,6936(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -56, temp.u32);
	// lfs f0,6952(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -40, temp.u32);
	// lfs f0,6948(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -44, temp.u32);
	// lfs f0,7008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -32, temp.u32);
	// lfs f0,7032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -28, temp.u32);
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

__attribute__((alias("__imp__sub_825518F0"))) PPC_WEAK_FUNC(sub_825518F0);
PPC_FUNC_IMPL(__imp__sub_825518F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824d9028
	ctx.lr = 0x82551918;
	sub_824D9028(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x825ba7d0
	ctx.lr = 0x8255192C;
	sub_825BA7D0(ctx, base);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x824cc238
	ctx.lr = 0x82551940;
	sub_824CC238(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-44
	ctx.r30.s64 = ctx.r11.s64 + -44;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255198c
	if (!ctx.cr6.gt) goto loc_8255198C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82551970:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82551994
	if (ctx.cr6.eq) goto loc_82551994;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82551970
	if (ctx.cr6.lt) goto loc_82551970;
loc_8255198C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82410060
	ctx.lr = 0x82551994;
	sub_82410060(ctx, base);
loc_82551994:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825519d8
	if (!ctx.cr6.gt) goto loc_825519D8;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_825519BC:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825519e0
	if (ctx.cr6.eq) goto loc_825519E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x825519bc
	if (ctx.cr6.lt) goto loc_825519BC;
loc_825519D8:
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x825519E0;
	sub_82410060(ctx, base);
loc_825519E0:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1868
	ctx.r3.s64 = ctx.r11.s64 + 1868;
	// lwz r11,1884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82551a24
	if (!ctx.cr6.gt) goto loc_82551A24;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
loc_82551A08:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82551a2c
	if (ctx.cr6.eq) goto loc_82551A2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82551a08
	if (ctx.cr6.lt) goto loc_82551A08;
loc_82551A24:
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// bl 0x82410060
	ctx.lr = 0x82551A2C;
	sub_82410060(ctx, base);
loc_82551A2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551A48"))) PPC_WEAK_FUNC(sub_82551A48);
PPC_FUNC_IMPL(__imp__sub_82551A48) {
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
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1520);
	// bl 0x82551d80
	ctx.lr = 0x82551A70;
	sub_82551D80(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,2436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82551A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// lwz r11,1692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82551ab0
	if (ctx.cr6.eq) goto loc_82551AB0;
	// lwz r3,1756(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1756);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82551AB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82551AB0:
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

__attribute__((alias("__imp__sub_82551AC8"))) PPC_WEAK_FUNC(sub_82551AC8);
PPC_FUNC_IMPL(__imp__sub_82551AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82551AD0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// beq cr6,0x82551c8c
	if (ctx.cr6.eq) goto loc_82551C8C;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x82817280
	ctx.lr = 0x82551B2C;
	sub_82817280(ctx, base);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r9,656(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// lwz r8,660(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 664);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82819da0
	ctx.lr = 0x82551B60;
	sub_82819DA0(ctx, base);
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82551bac
	if (ctx.cr6.gt) goto loc_82551BAC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x82551b84
	if (!ctx.cr6.lt) goto loc_82551B84;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82551B84:
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// bgt cr6,0x82551b94
	if (ctx.cr6.gt) goto loc_82551B94;
	// li r29,11
	ctx.r29.s64 = 11;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551B94:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551BAC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82551bf4
	if (!ctx.cr6.gt) goto loc_82551BF4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82551bcc
	if (!ctx.cr6.lt) goto loc_82551BCC;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82551BCC:
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// bgt cr6,0x82551bdc
	if (ctx.cr6.gt) goto loc_82551BDC;
	// li r29,17
	ctx.r29.s64 = 17;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551BDC:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551BF4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82551c00
	if (!ctx.cr6.lt) goto loc_82551C00;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82551C00:
	// cmpwi cr6,r11,1536
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1536, ctx.xer);
	// bgt cr6,0x82551c78
	if (ctx.cr6.gt) goto loc_82551C78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332988
	ctx.lr = 0x82551C10;
	sub_82332988(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-31948
	ctx.r9.s64 = -2093744128;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,-44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -44);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r10,1616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1616);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82551c70
	if (!ctx.cr6.eq) goto loc_82551C70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82551c70
	if (!ctx.cr6.eq) goto loc_82551C70;
	// bl 0x82a4cd78
	ctx.lr = 0x82551C3C;
	sub_82A4CD78(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82551c70
	if (ctx.cr6.lt) goto loc_82551C70;
	// beq cr6,0x82551c68
	if (ctx.cr6.eq) goto loc_82551C68;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82551c8c
	if (!ctx.cr6.lt) goto loc_82551C8C;
	// li r29,7
	ctx.r29.s64 = 7;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551C68:
	// li r29,6
	ctx.r29.s64 = 6;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551C70:
	// li r29,14
	ctx.r29.s64 = 14;
	// b 0x82551c8c
	goto loc_82551C8C;
loc_82551C78:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,15
	ctx.r29.s64 = ctx.r11.s64 + 15;
loc_82551C8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551CA0"))) PPC_WEAK_FUNC(sub_82551CA0);
PPC_FUNC_IMPL(__imp__sub_82551CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82333a20
	ctx.lr = 0x82551CC0;
	sub_82333A20(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82551d3c
	if (ctx.cr0.eq) goto loc_82551D3C;
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// lwz r11,-64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// lwz r11,1084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1084);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82551CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82551d3c
	if (ctx.cr0.eq) goto loc_82551D3C;
	// addic. r11,r31,-64
	ctx.xer.ca = ctx.r31.u32 > 63;
	ctx.r11.s64 = ctx.r31.s64 + -64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82551d04
	if (!ctx.cr0.eq) goto loc_82551D04;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82551d14
	goto loc_82551D14;
loc_82551D04:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
loc_82551D14:
	// lwz r11,-64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,1864(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1864);
	// bl 0x824d77f8
	ctx.lr = 0x82551D2C;
	sub_824D77F8(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82551d3c
	if (ctx.cr6.eq) goto loc_82551D3C;
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r11.u32);
loc_82551D3C:
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

__attribute__((alias("__imp__sub_82551D58"))) PPC_WEAK_FUNC(sub_82551D58);
PPC_FUNC_IMPL(__imp__sub_82551D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// lwz r3,7100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7100);
	// b 0x829c35d8
	sub_829C35D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551D68"))) PPC_WEAK_FUNC(sub_82551D68);
PPC_FUNC_IMPL(__imp__sub_82551D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// lwz r11,7100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7100);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551D80"))) PPC_WEAK_FUNC(sub_82551D80);
PPC_FUNC_IMPL(__imp__sub_82551D80) {
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
	// bl 0x8239eb50
	ctx.lr = 0x82551D98;
	sub_8239EB50(ctx, base);
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
	ctx.lr = 0x82551DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82551dc0
	if (!ctx.cr0.eq) goto loc_82551DC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551DC0:
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

__attribute__((alias("__imp__sub_82551DD8"))) PPC_WEAK_FUNC(sub_82551DD8);
PPC_FUNC_IMPL(__imp__sub_82551DD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825516a0
	sub_825516A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551DE8"))) PPC_WEAK_FUNC(sub_82551DE8);
PPC_FUNC_IMPL(__imp__sub_82551DE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82551270
	sub_82551270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551DF8"))) PPC_WEAK_FUNC(sub_82551DF8);
PPC_FUNC_IMPL(__imp__sub_82551DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551270
	sub_82551270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E08"))) PPC_WEAK_FUNC(sub_82551E08);
PPC_FUNC_IMPL(__imp__sub_82551E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825511c0
	sub_825511C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E18"))) PPC_WEAK_FUNC(sub_82551E18);
PPC_FUNC_IMPL(__imp__sub_82551E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551ca0
	sub_82551CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E28"))) PPC_WEAK_FUNC(sub_82551E28);
PPC_FUNC_IMPL(__imp__sub_82551E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551820
	sub_82551820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E38"))) PPC_WEAK_FUNC(sub_82551E38);
PPC_FUNC_IMPL(__imp__sub_82551E38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551a48
	sub_82551A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E48"))) PPC_WEAK_FUNC(sub_82551E48);
PPC_FUNC_IMPL(__imp__sub_82551E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551160
	sub_82551160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E58"))) PPC_WEAK_FUNC(sub_82551E58);
PPC_FUNC_IMPL(__imp__sub_82551E58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551d68
	sub_82551D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E68"))) PPC_WEAK_FUNC(sub_82551E68);
PPC_FUNC_IMPL(__imp__sub_82551E68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551808
	sub_82551808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E78"))) PPC_WEAK_FUNC(sub_82551E78);
PPC_FUNC_IMPL(__imp__sub_82551E78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551878
	sub_82551878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E88"))) PPC_WEAK_FUNC(sub_82551E88);
PPC_FUNC_IMPL(__imp__sub_82551E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551158
	sub_82551158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551E98"))) PPC_WEAK_FUNC(sub_82551E98);
PPC_FUNC_IMPL(__imp__sub_82551E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825518f0
	sub_825518F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551EA8"))) PPC_WEAK_FUNC(sub_82551EA8);
PPC_FUNC_IMPL(__imp__sub_82551EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551d58
	sub_82551D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551EB8"))) PPC_WEAK_FUNC(sub_82551EB8);
PPC_FUNC_IMPL(__imp__sub_82551EB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551148
	sub_82551148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551EC8"))) PPC_WEAK_FUNC(sub_82551EC8);
PPC_FUNC_IMPL(__imp__sub_82551EC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825517f0
	sub_825517F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551ED8"))) PPC_WEAK_FUNC(sub_82551ED8);
PPC_FUNC_IMPL(__imp__sub_82551ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-25948
	ctx.r3.s64 = ctx.r11.s64 + -25948;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551EE8"))) PPC_WEAK_FUNC(sub_82551EE8);
PPC_FUNC_IMPL(__imp__sub_82551EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239f618
	sub_8239F618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82551EF0"))) PPC_WEAK_FUNC(sub_82551EF0);
PPC_FUNC_IMPL(__imp__sub_82551EF0) {
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
	// li r3,228
	ctx.r3.s64 = 228;
	// bl 0x82833108
	ctx.lr = 0x82551F0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82551f24
	if (ctx.cr0.eq) goto loc_82551F24;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82552128
	ctx.lr = 0x82551F20;
	sub_82552128(ctx, base);
	// b 0x82551f28
	goto loc_82551F28;
loc_82551F24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82551F28:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82551f3c
	if (ctx.cr6.eq) goto loc_82551F3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82551F3C:
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

__attribute__((alias("__imp__sub_82551F50"))) PPC_WEAK_FUNC(sub_82551F50);
PPC_FUNC_IMPL(__imp__sub_82551F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82551f80
	if (ctx.cr6.eq) goto loc_82551F80;
	// bl 0x8239f618
	ctx.lr = 0x82551F78;
	sub_8239F618(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82551fc4
	if (ctx.cr6.eq) goto loc_82551FC4;
loc_82551F80:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82351908
	ctx.lr = 0x82551F98;
	sub_82351908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82551fc4
	if (!ctx.cr0.eq) goto loc_82551FC4;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8234bcc8
	ctx.lr = 0x82551FB8;
	sub_8234BCC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82551fc8
	if (ctx.cr0.eq) goto loc_82551FC8;
loc_82551FC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82551FC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82551FE0"))) PPC_WEAK_FUNC(sub_82551FE0);
PPC_FUNC_IMPL(__imp__sub_82551FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239f618
	ctx.lr = 0x82552000;
	sub_8239F618(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82552010
	if (!ctx.cr6.eq) goto loc_82552010;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// b 0x82552048
	goto loc_82552048;
loc_82552010:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823519b0
	ctx.lr = 0x82552028;
	sub_823519B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82552048
	if (!ctx.cr0.eq) goto loc_82552048;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x8234bd58
	ctx.lr = 0x82552048;
	sub_8234BD58(ctx, base);
loc_82552048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552060"))) PPC_WEAK_FUNC(sub_82552060);
PPC_FUNC_IMPL(__imp__sub_82552060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d96a0
	sub_824D96A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552078"))) PPC_WEAK_FUNC(sub_82552078);
PPC_FUNC_IMPL(__imp__sub_82552078) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x82552478
	sub_82552478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552090"))) PPC_WEAK_FUNC(sub_82552090);
PPC_FUNC_IMPL(__imp__sub_82552090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
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

__attribute__((alias("__imp__sub_825520B8"))) PPC_WEAK_FUNC(sub_825520B8);
PPC_FUNC_IMPL(__imp__sub_825520B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -136);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x824d9930
	sub_824D9930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825520D0"))) PPC_WEAK_FUNC(sub_825520D0);
PPC_FUNC_IMPL(__imp__sub_825520D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -136);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// b 0x824d9998
	sub_824D9998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825520E8"))) PPC_WEAK_FUNC(sub_825520E8);
PPC_FUNC_IMPL(__imp__sub_825520E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -136);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
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

__attribute__((alias("__imp__sub_82552110"))) PPC_WEAK_FUNC(sub_82552110);
PPC_FUNC_IMPL(__imp__sub_82552110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -72);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// b 0x824d9bc8
	sub_824D9BC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552128"))) PPC_WEAK_FUNC(sub_82552128);
PPC_FUNC_IMPL(__imp__sub_82552128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82552130;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-8948
	ctx.r11.s64 = ctx.r11.s64 + -8948;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// addi r10,r7,9308
	ctx.r10.s64 = ctx.r7.s64 + 9308;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// addi r9,r6,4108
	ctx.r9.s64 = ctx.r6.s64 + 4108;
	// addi r11,r5,21704
	ctx.r11.s64 = ctx.r5.s64 + 21704;
	// addi r10,r4,-8900
	ctx.r10.s64 = ctx.r4.s64 + -8900;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// addi r11,r29,-8848
	ctx.r11.s64 = ctx.r29.s64 + -8848;
	// addi r10,r28,-8824
	ctx.r10.s64 = ctx.r28.s64 + -8824;
	// addi r9,r3,-8868
	ctx.r9.s64 = ctx.r3.s64 + -8868;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// addi r29,r31,116
	ctx.r29.s64 = ctx.r31.s64 + 116;
	// addi r27,r31,124
	ctx.r27.s64 = ctx.r31.s64 + 124;
	// addi r26,r31,148
	ctx.r26.s64 = ctx.r31.s64 + 148;
	// addi r25,r31,168
	ctx.r25.s64 = ctx.r31.s64 + 168;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825521e4
	if (!ctx.cr6.eq) goto loc_825521E4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825521f0
	goto loc_825521F0;
loc_825521E4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825521F0:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82404518
	ctx.lr = 0x825521F8;
	sub_82404518(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552208
	if (!ctx.cr6.eq) goto loc_82552208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82552214
	goto loc_82552214;
loc_82552208:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82552214:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82404460
	ctx.lr = 0x82552220;
	sub_82404460(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552230
	if (!ctx.cr6.eq) goto loc_82552230;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255223c
	goto loc_8255223C;
loc_82552230:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255223C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82404350
	ctx.lr = 0x82552248;
	sub_82404350(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552258
	if (!ctx.cr6.eq) goto loc_82552258;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82552264
	goto loc_82552264;
loc_82552258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82552264:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82404100
	ctx.lr = 0x82552270;
	sub_82404100(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552280
	if (!ctx.cr6.eq) goto loc_82552280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255228c
	goto loc_8255228C;
loc_82552280:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255228C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82347120
	ctx.lr = 0x82552298;
	sub_82347120(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825522a8
	if (!ctx.cr6.eq) goto loc_825522A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825522b4
	goto loc_825522B4;
loc_825522A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825522B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823513c8
	ctx.lr = 0x825522C0;
	sub_823513C8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825522d0
	if (!ctx.cr6.eq) goto loc_825522D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825522dc
	goto loc_825522DC;
loc_825522D0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_825522DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x8234baa0
	ctx.lr = 0x825522E8;
	sub_8234BAA0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x825522f8
	if (!ctx.cr6.eq) goto loc_825522F8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82552304
	goto loc_82552304;
loc_825522F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82552304:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82351a48
	ctx.lr = 0x82552310;
	sub_82351A48(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552320
	if (!ctx.cr6.eq) goto loc_82552320;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255232c
	goto loc_8255232C;
loc_82552320:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255232C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x823fedf0
	ctx.lr = 0x82552338;
	sub_823FEDF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552348
	if (!ctx.cr6.eq) goto loc_82552348;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82552354
	goto loc_82552354;
loc_82552348:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82552354:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823fe900
	ctx.lr = 0x82552360;
	sub_823FE900(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82552370
	if (!ctx.cr6.eq) goto loc_82552370;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255237c
	goto loc_8255237C;
loc_82552370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255237C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x8234bdf0
	ctx.lr = 0x82552388;
	sub_8234BDF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-9296
	ctx.r11.s64 = ctx.r11.s64 + -9296;
	// addi r10,r10,-9120
	ctx.r10.s64 = ctx.r10.s64 + -9120;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r9,r9,-9064
	ctx.r9.s64 = ctx.r9.s64 + -9064;
	// addi r8,r8,31532
	ctx.r8.s64 = ctx.r8.s64 + 31532;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// addi r7,r7,-23712
	ctx.r7.s64 = ctx.r7.s64 + -23712;
	// addi r6,r6,-8996
	ctx.r6.s64 = ctx.r6.s64 + -8996;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// addi r5,r5,17568
	ctx.r5.s64 = ctx.r5.s64 + 17568;
	// addi r4,r4,-8984
	ctx.r4.s64 = ctx.r4.s64 + -8984;
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stwx r6,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r6.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552478"))) PPC_WEAK_FUNC(sub_82552478);
PPC_FUNC_IMPL(__imp__sub_82552478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x824d9280
	ctx.lr = 0x825524A8;
	sub_824D9280(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba8c0
	ctx.lr = 0x825524BC;
	sub_825BA8C0(ctx, base);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825018b0
	ctx.lr = 0x825524D0;
	sub_825018B0(ctx, base);
	// bl 0x8239f0b8
	ctx.lr = 0x825524D4;
	sub_8239F0B8(ctx, base);
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
	ctx.lr = 0x825524EC;
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

__attribute__((alias("__imp__sub_82552508"))) PPC_WEAK_FUNC(sub_82552508);
PPC_FUNC_IMPL(__imp__sub_82552508) {
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
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,1584(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552550;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// lwz r31,1428(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x82552578;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82965458
	ctx.lr = 0x82552590;
	sub_82965458(ctx, base);
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

__attribute__((alias("__imp__sub_825525A8"))) PPC_WEAK_FUNC(sub_825525A8);
PPC_FUNC_IMPL(__imp__sub_825525A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825525B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
	// beq cr6,0x82552934
	if (ctx.cr6.eq) goto loc_82552934;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82552678
	if (ctx.cr6.eq) goto loc_82552678;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,125
	ctx.r10.s64 = 125;
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
	// blt cr6,0x82552670
	if (ctx.cr6.lt) goto loc_82552670;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x82552678
	goto loc_82552678;
loc_82552670:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82552678:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r28,0
	ctx.r28.s64 = 0;
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
	// blt cr6,0x825526b0
	if (ctx.cr6.lt) goto loc_825526B0;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825526bc
	goto loc_825526BC;
loc_825526B0:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_825526BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82552934
	if (ctx.cr0.eq) goto loc_82552934;
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
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
	// bl 0x82551d80
	ctx.lr = 0x82552718;
	sub_82551D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825528e4
	if (ctx.cr0.eq) goto loc_825528E4;
	// lwz r11,924(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825528e4
	if (ctx.cr6.eq) goto loc_825528E4;
	// lwz r11,1504(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825528e4
	if (ctx.cr6.eq) goto loc_825528E4;
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
	ctx.lr = 0x82552764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82552788
	if (!ctx.cr0.eq) goto loc_82552788;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825528e4
	if (ctx.cr6.eq) goto loc_825528E4;
loc_82552788:
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825528e4
	if (ctx.cr6.eq) goto loc_825528E4;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825527b8
	if (ctx.cr6.eq) goto loc_825527B8;
	// bl 0x829c35d8
	ctx.lr = 0x825527B4;
	sub_829C35D8(ctx, base);
	// b 0x82552810
	goto loc_82552810;
loc_825527B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825527c8
	if (!ctx.cr6.eq) goto loc_825527C8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x825527e4
	goto loc_825527E4;
loc_825527C8:
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
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825527E4:
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
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82552810:
	// bl 0x82333a20
	ctx.lr = 0x82552814;
	sub_82333A20(ctx, base);
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82552870
	if (ctx.cr6.eq) goto loc_82552870;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82552870
	if (ctx.cr6.eq) goto loc_82552870;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82552870
	if (ctx.cr6.eq) goto loc_82552870;
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
	ctx.lr = 0x82552868;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825528e4
	if (ctx.cr0.eq) goto loc_825528E4;
loc_82552870:
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
	ctx.lr = 0x82552894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825528C0;
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
	ctx.lr = 0x825528E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825528f8
	goto loc_825528F8;
loc_825528E4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825528F8;
	sub_829E3DA8(ctx, base);
loc_825528F8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r28,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r28.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r10.u32);
loc_82552934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552940"))) PPC_WEAK_FUNC(sub_82552940);
PPC_FUNC_IMPL(__imp__sub_82552940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82552948;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// bl 0x82551d80
	ctx.lr = 0x82552978;
	sub_82551D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82552c54
	if (ctx.cr0.eq) goto loc_82552C54;
	// lwz r11,5492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82552c54
	if (!ctx.cr6.gt) goto loc_82552C54;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825529ac
	if (!ctx.cr6.eq) goto loc_825529AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825529c8
	goto loc_825529C8;
loc_825529AC:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825529C8:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825529F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82333a20
	ctx.lr = 0x825529F8;
	sub_82333A20(ctx, base);
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r29,7168(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82552a2c
	if (ctx.cr6.eq) goto loc_82552A2C;
	// bl 0x829c35d8
	ctx.lr = 0x82552A20;
	sub_829C35D8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x82552A24;
	sub_82333A20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82552a30
	goto loc_82552A30;
loc_82552A2C:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82552A30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82552c54
	if (ctx.cr6.eq) goto loc_82552C54;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82552c18
	if (ctx.cr6.lt) goto loc_82552C18;
	// beq cr6,0x82552c10
	if (ctx.cr6.eq) goto loc_82552C10;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82552a6c
	if (ctx.cr6.lt) goto loc_82552A6C;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// beq cr6,0x82552a64
	if (ctx.cr6.eq) goto loc_82552A64;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bne cr6,0x82552c34
	if (!ctx.cr6.eq) goto loc_82552C34;
	// li r26,20
	ctx.r26.s64 = 20;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552A64:
	// li r26,8
	ctx.r26.s64 = 8;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552A6C:
	// lfs f11,620(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,620(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f13,624(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r28,620
	ctx.r29.s64 = ctx.r28.s64 + 620;
	// lfs f10,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,628(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
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
	ctx.lr = 0x82552AAC;
	sub_82817280(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,656(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,660(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r8,664(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
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
	ctx.lr = 0x82552ADC;
	sub_82819DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge 0x82552aec
	if (!ctx.cr0.lt) goto loc_82552AEC;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82552AEC:
	// cmpwi cr6,r11,12288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12288, ctx.xer);
	// bgt cr6,0x82552b48
	if (ctx.cr6.gt) goto loc_82552B48;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82552b24
	if (!ctx.cr6.gt) goto loc_82552B24;
	// bl 0x82a4cd78
	ctx.lr = 0x82552B00;
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
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,9
	ctx.r11.u64 = ctx.r11.u64 & 9;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82552B1C:
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552B24:
	// bl 0x82a4cd78
	ctx.lr = 0x82552B28;
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
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// b 0x82552b1c
	goto loc_82552B1C;
loc_82552B48:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x82552b58
	if (!ctx.cr6.lt) goto loc_82552B58;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82552B58:
	// cmpwi cr6,r11,24576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24576, ctx.xer);
	// blt cr6,0x82552b68
	if (ctx.cr6.lt) goto loc_82552B68;
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552B68:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82552b88
	if (!ctx.cr6.lt) goto loc_82552B88;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82552b80
	if (ctx.cr6.eq) goto loc_82552B80;
	// li r26,9
	ctx.r26.s64 = 9;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552B80:
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x82552b9c
	goto loc_82552B9C;
loc_82552B88:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82552b98
	if (ctx.cr6.eq) goto loc_82552B98;
	// li r26,10
	ctx.r26.s64 = 10;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552B98:
	// li r26,3
	ctx.r26.s64 = 3;
loc_82552B9C:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552BCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,192(r10)
	PPC_STORE_U8(ctx.r10.u32 + 192, ctx.r11.u8);
	// b 0x82552c34
	goto loc_82552C34;
loc_82552C10:
	// li r26,5
	ctx.r26.s64 = 5;
	// b 0x82552c34
	goto loc_82552C34;
loc_82552C18:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// bl 0x82551ac8
	ctx.lr = 0x82552C30;
	sub_82551AC8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82552C34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552C4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82552c6c
	if (!ctx.cr6.eq) goto loc_82552C6C;
loc_82552C54:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// bl 0x829e3da8
	ctx.lr = 0x82552C68;
	sub_829E3DA8(ctx, base);
	// b 0x82552ca0
	goto loc_82552CA0;
loc_82552C6C:
	// cmpwi cr6,r26,20
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 20, ctx.xer);
	// beq cr6,0x82552c7c
	if (ctx.cr6.eq) goto loc_82552C7C;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// bne cr6,0x82552ca0
	if (!ctx.cr6.eq) goto loc_82552CA0;
loc_82552C7C:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lfs f0,6968(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82552CA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82552CA8"))) PPC_WEAK_FUNC(sub_82552CA8);
PPC_FUNC_IMPL(__imp__sub_82552CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82551d80
	ctx.lr = 0x82552CE4;
	sub_82551D80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,2436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2436);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,5408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 5408, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 656);
	// lwz r10,660(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 660);
	// lwz r9,664(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 664);
	// stw r11,668(r30)
	PPC_STORE_U32(ctx.r30.u32 + 668, ctx.r11.u32);
	// stw r10,672(r30)
	PPC_STORE_U32(ctx.r30.u32 + 672, ctx.r10.u32);
	// stw r9,676(r30)
	PPC_STORE_U32(ctx.r30.u32 + 676, ctx.r9.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x82552D44;
	sub_82347478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552D60"))) PPC_WEAK_FUNC(sub_82552D60);
PPC_FUNC_IMPL(__imp__sub_82552D60) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
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
	// lwz r11,1292(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552DB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x82551d80
	ctx.lr = 0x82552DD8;
	sub_82551D80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7516, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82552DF8"))) PPC_WEAK_FUNC(sub_82552DF8);
PPC_FUNC_IMPL(__imp__sub_82552DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825ba8c0
	ctx.lr = 0x82552E38;
	sub_825BA8C0(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82552478
	ctx.lr = 0x82552E50;
	sub_82552478(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552E68"))) PPC_WEAK_FUNC(sub_82552E68);
PPC_FUNC_IMPL(__imp__sub_82552E68) {
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
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
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
	// bl 0x82551d80
	ctx.lr = 0x82552EA0;
	sub_82551D80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552EB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82552ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,16440
	ctx.r3.s64 = ctx.r11.s64 + 16440;
	// lwz r30,1428(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1428);
	// bl 0x82816528
	ctx.lr = 0x82552EE0;
	sub_82816528(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f1,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82965458
	ctx.lr = 0x82552EF8;
	sub_82965458(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7516, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82552F18"))) PPC_WEAK_FUNC(sub_82552F18);
PPC_FUNC_IMPL(__imp__sub_82552F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82552F20;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
	// beq cr6,0x825531f8
	if (ctx.cr6.eq) goto loc_825531F8;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// cmpwi cr6,r11,434
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 434, ctx.xer);
	// lfs f31,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82552fe8
	if (ctx.cr6.eq) goto loc_82552FE8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,434
	ctx.r10.s64 = 434;
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
	// blt cr6,0x82552fe0
	if (ctx.cr6.lt) goto loc_82552FE0;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x82552fe8
	goto loc_82552FE8;
loc_82552FE0:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
loc_82552FE8:
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
	// blt cr6,0x8255301c
	if (ctx.cr6.lt) goto loc_8255301C;
	// stfs f31,52(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82553028
	goto loc_82553028;
loc_8255301C:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82553028:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825531f8
	if (ctx.cr0.eq) goto loc_825531F8;
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
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
	// bl 0x82551d80
	ctx.lr = 0x82553084;
	sub_82551D80(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r28,-1
	ctx.r28.s64 = -1;
	// beq 0x825531bc
	if (ctx.cr0.eq) goto loc_825531BC;
	// lwz r11,924(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 924);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825531bc
	if (ctx.cr6.eq) goto loc_825531BC;
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825531bc
	if (ctx.cr6.eq) goto loc_825531BC;
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
	ctx.lr = 0x825530D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825531bc
	if (ctx.cr0.eq) goto loc_825531BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82559868
	ctx.lr = 0x825530E4;
	sub_82559868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825531bc
	if (ctx.cr0.eq) goto loc_825531BC;
	// lwz r11,7168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825531bc
	if (ctx.cr6.eq) goto loc_825531BC;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82553118
	if (!ctx.cr6.eq) goto loc_82553118;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82553134
	goto loc_82553134;
loc_82553118:
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
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82553134:
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
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82333a20
	ctx.lr = 0x82553164;
	sub_82333A20(ctx, base);
	// lwz r11,7168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82553204
	if (ctx.cr6.eq) goto loc_82553204;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
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
	ctx.lr = 0x825531A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82553204
	if (!ctx.cr0.eq) goto loc_82553204;
	// lwz r11,7168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// stw r28,7168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7168, ctx.r28.u32);
	// stw r11,7164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7164, ctx.r11.u32);
loc_825531BC:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x829e3da8
	ctx.lr = 0x825531D0;
	sub_829E3DA8(ctx, base);
loc_825531D0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r10,0
	ctx.r10.s64 = 0;
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
	// stw r28,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r28.u32);
loc_825531F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
loc_82553204:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
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
	ctx.lr = 0x82553228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553254;
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
	ctx.lr = 0x82553274;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825531d0
	goto loc_825531D0;
}

__attribute__((alias("__imp__sub_82553278"))) PPC_WEAK_FUNC(sub_82553278);
PPC_FUNC_IMPL(__imp__sub_82553278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82553280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// bl 0x82551d80
	ctx.lr = 0x825532AC;
	sub_82551D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x825533ec
	if (ctx.cr0.eq) goto loc_825533EC;
	// lwz r11,5492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825533ec
	if (!ctx.cr6.gt) goto loc_825533EC;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825532e0
	if (!ctx.cr6.eq) goto loc_825532E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825532fc
	goto loc_825532FC;
loc_825532E0:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_825532FC:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
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
	// lwz r11,1408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82553328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82333a20
	ctx.lr = 0x8255332C;
	sub_82333A20(ctx, base);
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// bl 0x82551ac8
	ctx.lr = 0x82553344;
	sub_82551AC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82553380
	if (ctx.cr0.eq) goto loc_82553380;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82553394
	if (!ctx.cr6.eq) goto loc_82553394;
	// lwz r11,7164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82553394
	if (!ctx.cr6.eq) goto loc_82553394;
	// lwz r11,7052(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7052);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82553394
	if (!ctx.cr6.eq) goto loc_82553394;
loc_82553380:
	// lwz r11,7168(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7168);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r30,20
	ctx.r30.s64 = 20;
	// stw r10,7168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7168, ctx.r10.u32);
	// stw r11,7164(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7164, ctx.r11.u32);
loc_82553394:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825533AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bne cr6,0x825533ec
	if (!ctx.cr6.eq) goto loc_825533EC;
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// lfs f0,6968(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6968);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -132);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_825533EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825533F8"))) PPC_WEAK_FUNC(sub_825533F8);
PPC_FUNC_IMPL(__imp__sub_825533F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82553400;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r11,-8948
	ctx.r11.s64 = ctx.r11.s64 + -8948;
	// addi r10,r10,24096
	ctx.r10.s64 = ctx.r10.s64 + 24096;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r11,r8,22500
	ctx.r11.s64 = ctx.r8.s64 + 22500;
	// addi r9,r9,-3040
	ctx.r9.s64 = ctx.r9.s64 + -3040;
	// addi r10,r7,9308
	ctx.r10.s64 = ctx.r7.s64 + 9308;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// addi r9,r6,4108
	ctx.r9.s64 = ctx.r6.s64 + 4108;
	// addi r11,r5,21704
	ctx.r11.s64 = ctx.r5.s64 + 21704;
	// addi r10,r4,-8900
	ctx.r10.s64 = ctx.r4.s64 + -8900;
	// stw r9,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r9.u32);
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// lis r30,-32229
	ctx.r30.s64 = -2112159744;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// addi r9,r3,-8868
	ctx.r9.s64 = ctx.r3.s64 + -8868;
	// addi r11,r30,-8848
	ctx.r11.s64 = ctx.r30.s64 + -8848;
	// addi r10,r29,-8824
	ctx.r10.s64 = ctx.r29.s64 + -8824;
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// addi r30,r31,116
	ctx.r30.s64 = ctx.r31.s64 + 116;
	// addi r29,r31,124
	ctx.r29.s64 = ctx.r31.s64 + 124;
	// addi r28,r31,148
	ctx.r28.s64 = ctx.r31.s64 + 148;
	// addi r27,r31,168
	ctx.r27.s64 = ctx.r31.s64 + 168;
	// bl 0x823e9df8
	ctx.lr = 0x825534A4;
	sub_823E9DF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x823e9cf0
	ctx.lr = 0x825534B0;
	sub_823E9CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x823e98b8
	ctx.lr = 0x825534BC;
	sub_823E98B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x824d2430
	ctx.lr = 0x825534C8;
	sub_824D2430(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3848
	ctx.lr = 0x825534D4;
	sub_823D3848(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d6648
	ctx.lr = 0x825534E0;
	sub_823D6648(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823d5000
	ctx.lr = 0x825534EC;
	sub_823D5000(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823d68d0
	ctx.lr = 0x825534F8;
	sub_823D68D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x823e8be8
	ctx.lr = 0x82553504;
	sub_823E8BE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823e8630
	ctx.lr = 0x82553510;
	sub_823E8630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x824d92e8
	ctx.lr = 0x8255351C;
	sub_824D92E8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-9296
	ctx.r11.s64 = ctx.r11.s64 + -9296;
	// addi r10,r10,-9120
	ctx.r10.s64 = ctx.r10.s64 + -9120;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r10,r10,-9064
	ctx.r10.s64 = ctx.r10.s64 + -9064;
	// addi r9,r9,31532
	ctx.r9.s64 = ctx.r9.s64 + 31532;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r8,r8,-23712
	ctx.r8.s64 = ctx.r8.s64 + -23712;
	// addi r7,r7,-8984
	ctx.r7.s64 = ctx.r7.s64 + -8984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,-8996
	ctx.r11.s64 = ctx.r11.s64 + -8996;
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,17568
	ctx.r10.s64 = ctx.r10.s64 + 17568;
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stwx r8,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r8.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// stwx r11,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stwx r7,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u32);
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-136
	ctx.r11.s64 = ctx.r11.s64 + -136;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,-176
	ctx.r11.s64 = ctx.r11.s64 + -176;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553638"))) PPC_WEAK_FUNC(sub_82553638);
PPC_FUNC_IMPL(__imp__sub_82553638) {
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
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x824d94e8
	ctx.lr = 0x82553664;
	sub_824D94E8(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
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
	// bl 0x82551d80
	ctx.lr = 0x8255369C;
	sub_82551D80(ctx, base);
	// stw r30,6904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6904, ctx.r30.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,10840
	ctx.r11.s64 = ctx.r11.s64 + 10840;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82553890
	ctx.lr = 0x825536D8;
	sub_82553890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825536F0"))) PPC_WEAK_FUNC(sub_825536F0);
PPC_FUNC_IMPL(__imp__sub_825536F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -172);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x82551d80
	ctx.lr = 0x8255372C;
	sub_82551D80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,6824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82553754
	if (ctx.cr6.eq) goto loc_82553754;
	// lwz r11,-176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-140(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -140);
	// bl 0x829e3da8
	ctx.lr = 0x82553750;
	sub_829E3DA8(ctx, base);
	// b 0x82553790
	goto loc_82553790;
loc_82553754:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,7512(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7512, ctx.r11.u32);
	// bl 0x8255b198
	ctx.lr = 0x82553764;
	sub_8255B198(ctx, base);
	// lwz r11,-176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -172);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,6076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6076, ctx.r8.u32);
loc_82553790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825537A8"))) PPC_WEAK_FUNC(sub_825537A8);
PPC_FUNC_IMPL(__imp__sub_825537A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + -8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825537B8"))) PPC_WEAK_FUNC(sub_825537B8);
PPC_FUNC_IMPL(__imp__sub_825537B8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r30,1584(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82553874
	if (ctx.cr6.eq) goto loc_82553874;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f24d8
	ctx.lr = 0x825537FC;
	sub_824F24D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82553808
	if (!ctx.cr0.lt) goto loc_82553808;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82553808:
	// lwz r11,5392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5392);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82553854
	if (ctx.cr6.lt) goto loc_82553854;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82553868
	if (ctx.cr6.lt) goto loc_82553868;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x82551d80
	ctx.lr = 0x8255384C;
	sub_82551D80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7508, ctx.r11.u32);
loc_82553854:
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x829e3da8
	ctx.lr = 0x82553868;
	sub_829E3DA8(ctx, base);
loc_82553868:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
loc_82553874:
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

__attribute__((alias("__imp__sub_82553890"))) PPC_WEAK_FUNC(sub_82553890);
PPC_FUNC_IMPL(__imp__sub_82553890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82553898;
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
	ctx.lr = 0x825538C0;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82553958
	if (!ctx.cr0.eq) goto loc_82553958;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x825538e0
	if (!ctx.cr6.eq) goto loc_825538E0;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_825538E0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8239eb50
	ctx.lr = 0x825538E8;
	sub_8239EB50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825538FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x82553908;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82553944
	if (ctx.cr0.eq) goto loc_82553944;
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
	// b 0x82553948
	goto loc_82553948;
loc_82553944:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82553948:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82553954;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82553958:
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
	ctx.lr = 0x82553974;
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

__attribute__((alias("__imp__sub_82553988"))) PPC_WEAK_FUNC(sub_82553988);
PPC_FUNC_IMPL(__imp__sub_82553988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551f50
	sub_82551F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553998"))) PPC_WEAK_FUNC(sub_82553998);
PPC_FUNC_IMPL(__imp__sub_82553998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552090
	sub_82552090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539A8"))) PPC_WEAK_FUNC(sub_825539A8);
PPC_FUNC_IMPL(__imp__sub_825539A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551ef0
	sub_82551EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539B8"))) PPC_WEAK_FUNC(sub_825539B8);
PPC_FUNC_IMPL(__imp__sub_825539B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551ee8
	sub_82551EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539C8"))) PPC_WEAK_FUNC(sub_825539C8);
PPC_FUNC_IMPL(__imp__sub_825539C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825520d0
	sub_825520D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539D8"))) PPC_WEAK_FUNC(sub_825539D8);
PPC_FUNC_IMPL(__imp__sub_825539D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825536f0
	sub_825536F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539E8"))) PPC_WEAK_FUNC(sub_825539E8);
PPC_FUNC_IMPL(__imp__sub_825539E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82551fe0
	sub_82551FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825539F8"))) PPC_WEAK_FUNC(sub_825539F8);
PPC_FUNC_IMPL(__imp__sub_825539F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552060
	sub_82552060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A08"))) PPC_WEAK_FUNC(sub_82553A08);
PPC_FUNC_IMPL(__imp__sub_82553A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551fe0
	sub_82551FE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A18"))) PPC_WEAK_FUNC(sub_82553A18);
PPC_FUNC_IMPL(__imp__sub_82553A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552078
	sub_82552078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A28"))) PPC_WEAK_FUNC(sub_82553A28);
PPC_FUNC_IMPL(__imp__sub_82553A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825520b8
	sub_825520B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A38"))) PPC_WEAK_FUNC(sub_82553A38);
PPC_FUNC_IMPL(__imp__sub_82553A38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82551ed8
	sub_82551ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A48"))) PPC_WEAK_FUNC(sub_82553A48);
PPC_FUNC_IMPL(__imp__sub_82553A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82552110
	sub_82552110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A58"))) PPC_WEAK_FUNC(sub_82553A58);
PPC_FUNC_IMPL(__imp__sub_82553A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825520e8
	sub_825520E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A68"))) PPC_WEAK_FUNC(sub_82553A68);
PPC_FUNC_IMPL(__imp__sub_82553A68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82553638
	sub_82553638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553A78"))) PPC_WEAK_FUNC(sub_82553A78);
PPC_FUNC_IMPL(__imp__sub_82553A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26216
	ctx.r3.s64 = ctx.r11.s64 + -26216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553A88"))) PPC_WEAK_FUNC(sub_82553A88);
PPC_FUNC_IMPL(__imp__sub_82553A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82553ac0
	if (ctx.cr6.eq) goto loc_82553AC0;
	// bl 0x8239eb50
	ctx.lr = 0x82553AB0;
	sub_8239EB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82553ac0
	if (!ctx.cr6.eq) goto loc_82553AC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82553acc
	goto loc_82553ACC;
loc_82553AC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ff548
	ctx.lr = 0x82553ACC;
	sub_824FF548(ctx, base);
loc_82553ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553AE8"))) PPC_WEAK_FUNC(sub_82553AE8);
PPC_FUNC_IMPL(__imp__sub_82553AE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239eb50
	sub_8239EB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82553AF0"))) PPC_WEAK_FUNC(sub_82553AF0);
PPC_FUNC_IMPL(__imp__sub_82553AF0) {
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
	// li r3,7536
	ctx.r3.s64 = 7536;
	// bl 0x82833108
	ctx.lr = 0x82553B0C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82553b20
	if (ctx.cr0.eq) goto loc_82553B20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82553bb8
	ctx.lr = 0x82553B1C;
	sub_82553BB8(ctx, base);
	// b 0x82553b24
	goto loc_82553B24;
loc_82553B20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82553B24:
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

__attribute__((alias("__imp__sub_82553B38"))) PPC_WEAK_FUNC(sub_82553B38);
PPC_FUNC_IMPL(__imp__sub_82553B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8239eb50
	ctx.lr = 0x82553B58;
	sub_8239EB50(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82553b6c
	if (ctx.cr6.eq) goto loc_82553B6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824ff5f8
	ctx.lr = 0x82553B6C;
	sub_824FF5F8(ctx, base);
loc_82553B6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553B88"))) PPC_WEAK_FUNC(sub_82553B88);
PPC_FUNC_IMPL(__imp__sub_82553B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553B98"))) PPC_WEAK_FUNC(sub_82553B98);
PPC_FUNC_IMPL(__imp__sub_82553B98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 7204);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82553BB8"))) PPC_WEAK_FUNC(sub_82553BB8);
PPC_FUNC_IMPL(__imp__sub_82553BB8) {
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
	// bl 0x824ff678
	ctx.lr = 0x82553BD8;
	sub_824FF678(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-6072
	ctx.r11.s64 = ctx.r11.s64 + -6072;
	// addi r10,r10,-3632
	ctx.r10.s64 = ctx.r10.s64 + -3632;
	// addi r9,r9,-3580
	ctx.r9.s64 = ctx.r9.s64 + -3580;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r11,r31,6888
	ctx.r11.s64 = ctx.r31.s64 + 6888;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6784);
	// stw r11,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r11.u32);
	// lwz r11,6788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6788);
	// stw r11,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r11.u32);
	// lwz r11,6792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6792);
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// lwz r11,6796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6796);
	// stw r11,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r11.u32);
	// lwz r11,6800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6800);
	// stw r11,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r11.u32);
	// lwz r11,6804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6804);
	// stw r11,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r11.u32);
	// lwz r11,6808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6808);
	// stw r11,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r11.u32);
	// lwz r11,6812(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6812);
	// stw r11,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r11.u32);
	// lwz r11,6816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6816);
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// lwz r11,6820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
	// stw r11,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r11.u32);
	// lwz r11,6824(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6824);
	// stw r11,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r11.u32);
	// lwz r11,6828(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6828);
	// stw r11,6828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6828, ctx.r11.u32);
	// lwz r11,6832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	// stw r11,6832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6832, ctx.r11.u32);
	// lwz r11,6836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6836);
	// stw r11,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r11.u32);
	// lwz r11,6840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6840);
	// stw r11,6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// lwz r11,6844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6844);
	// stw r11,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r11.u32);
	// lwz r11,6848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6848);
	// stw r11,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r11.u32);
	// lwz r11,6852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6852);
	// stw r11,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r11.u32);
	// lwz r11,6856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6856);
	// stw r11,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// lwz r11,6860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6860);
	// stw r11,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// lwz r11,6864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6864);
	// stw r11,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r11.u32);
	// lwz r11,6868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6868);
	// stw r11,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r11.u32);
	// lwz r11,6872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6872);
	// stw r11,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r11.u32);
	// lwz r11,6876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6876);
	// stw r11,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r11.u32);
	// lwz r11,6880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6880);
	// stw r11,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r11.u32);
	// lwz r11,6884(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6884);
	// stw r11,6884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6884, ctx.r11.u32);
	// ld r11,6888(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6888);
	// std r11,6888(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6888, ctx.r11.u64);
	// ld r11,6896(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 6896);
	// std r11,6896(r31)
	PPC_STORE_U64(ctx.r31.u32 + 6896, ctx.r11.u64);
	// lwz r11,6904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6904);
	// stw r11,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r11.u32);
	// lwz r11,6908(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
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
	// lfs f0,6932(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// addi r11,r31,7276
	ctx.r11.s64 = ctx.r31.s64 + 7276;
	// lfs f0,6936(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6936(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// lfs f0,6940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lfs f0,6944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// lfs f0,6948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// lfs f0,6952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// lwz r10,6956(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	// stw r10,6956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6956, ctx.r10.u32);
	// lfs f0,6960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// lfs f0,6964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// lfs f0,6968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// lfs f0,6972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// lfs f0,6976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6976, temp.u32);
	// lfs f0,6980(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6980);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6980, temp.u32);
	// lfs f0,6984(r30)
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
	// lfs f0,6992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// lfs f0,6996(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// lfs f0,7000(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// lfs f0,7004(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// lfs f0,7008(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7008, temp.u32);
	// lfs f0,7012(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
	// lwz r10,7016(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7016);
	// stw r10,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r10.u32);
	// lwz r10,7020(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7020);
	// stw r10,7020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7020, ctx.r10.u32);
	// lwz r10,7024(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7024);
	// stw r10,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r10.u32);
	// lfs f0,7028(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7028);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7028, temp.u32);
	// lfs f0,7032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7032, temp.u32);
	// lfs f0,7036(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7036, temp.u32);
	// lwz r10,7040(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7040);
	// stw r10,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r10.u32);
	// lwz r10,7044(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7044);
	// stw r10,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r10.u32);
	// lwz r10,7048(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7048);
	// stw r10,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r10.u32);
	// lwz r10,7052(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7052);
	// stw r10,7052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7052, ctx.r10.u32);
	// lwz r10,7056(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7056);
	// stw r10,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r10.u32);
	// lwz r10,7060(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7060);
	// stw r10,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r10.u32);
	// lwz r10,7064(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7064);
	// stw r10,7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7064, ctx.r10.u32);
	// lfs f0,7068(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
	// lfs f0,7072(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7072, temp.u32);
	// lwz r10,7076(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7076);
	// stw r10,7076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7076, ctx.r10.u32);
	// lwz r10,7080(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7080);
	// stw r10,7080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7080, ctx.r10.u32);
	// lwz r10,7084(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7084);
	// stw r10,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r10.u32);
	// lwz r10,7088(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7088);
	// addi r11,r31,7292
	ctx.r11.s64 = ctx.r31.s64 + 7292;
	// addi r11,r31,7308
	ctx.r11.s64 = ctx.r31.s64 + 7308;
	// addi r11,r31,7324
	ctx.r11.s64 = ctx.r31.s64 + 7324;
	// addi r11,r31,7340
	ctx.r11.s64 = ctx.r31.s64 + 7340;
	// addi r3,r31,7356
	ctx.r3.s64 = ctx.r31.s64 + 7356;
	// stw r10,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r10.u32);
	// addi r4,r30,7356
	ctx.r4.s64 = ctx.r30.s64 + 7356;
	// lfs f0,7092(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7092);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7092, temp.u32);
	// lfs f0,7096(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7096);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7096, temp.u32);
	// lwz r10,7100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7100);
	// stw r10,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r10.u32);
	// lwz r10,7104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7104);
	// stw r10,7104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7104, ctx.r10.u32);
	// lfs f0,7108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7108, temp.u32);
	// lwz r10,7112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7112);
	// stw r10,7112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7112, ctx.r10.u32);
	// lwz r10,7116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7116);
	// stw r10,7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7116, ctx.r10.u32);
	// lwz r10,7120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7120);
	// stw r10,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r10.u32);
	// lfs f0,7124(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7124, temp.u32);
	// lwz r10,7128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7128);
	// stw r10,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r10.u32);
	// lwz r10,7132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7132);
	// stw r10,7132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7132, ctx.r10.u32);
	// lwz r10,7136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7136);
	// stw r10,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r10.u32);
	// lwz r10,7140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7140);
	// stw r10,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r10.u32);
	// lwz r10,7144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7144);
	// stw r10,7144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7144, ctx.r10.u32);
	// lwz r10,7148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7148);
	// stw r10,7148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7148, ctx.r10.u32);
	// lwz r10,7152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7152);
	// stw r10,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r10.u32);
	// lwz r10,7156(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7156);
	// stw r10,7156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7156, ctx.r10.u32);
	// lwz r10,7160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7160);
	// stw r10,7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7160, ctx.r10.u32);
	// lwz r10,7164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7164);
	// stw r10,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r10.u32);
	// lwz r10,7168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// stw r10,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r10.u32);
	// lwz r10,7172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7172);
	// stw r10,7172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7172, ctx.r10.u32);
	// lwz r10,7176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7176);
	// stw r10,7176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7176, ctx.r10.u32);
	// lwz r10,7180(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7180);
	// stw r10,7180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7180, ctx.r10.u32);
	// lwz r10,7184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7184);
	// stw r10,7184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7184, ctx.r10.u32);
	// lwz r10,7188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7188);
	// stw r10,7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7188, ctx.r10.u32);
	// lwz r10,7192(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7192);
	// stw r10,7192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7192, ctx.r10.u32);
	// lwz r10,7196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7196);
	// stw r10,7196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7196, ctx.r10.u32);
	// lwz r10,7200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7200);
	// stw r10,7200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7200, ctx.r10.u32);
	// lwz r10,7204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7204);
	// stw r10,7204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7204, ctx.r10.u32);
	// lwz r10,7208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7208);
	// stw r10,7208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7208, ctx.r10.u32);
	// lwz r10,7212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7212);
	// stw r10,7212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7212, ctx.r10.u32);
	// lwz r10,7216(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7216);
	// stw r10,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r10.u32);
	// lwz r10,7220(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// stw r10,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r10.u32);
	// lwz r10,7224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7224);
	// stw r10,7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7224, ctx.r10.u32);
	// lwz r10,7228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7228);
	// stw r10,7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7228, ctx.r10.u32);
	// lwz r10,7232(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7232);
	// stw r10,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r10.u32);
	// lwz r11,7236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7236);
	// stw r11,7236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7236, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r11,7240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7240);
	// stw r11,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r11.u32);
	// lwz r11,7244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7244);
	// stw r11,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r11.u32);
	// lwz r11,7248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7248);
	// stw r11,7248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7248, ctx.r11.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// stw r11,7252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7252, ctx.r11.u32);
	// lwz r11,7256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7256);
	// stw r11,7256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7256, ctx.r11.u32);
	// lwz r11,7260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7260);
	// stw r11,7260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7260, ctx.r11.u32);
	// lwz r11,7264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7264);
	// stw r11,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r11.u32);
	// lwz r11,7268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7268);
	// stw r11,7268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7268, ctx.r11.u32);
	// lwz r11,7272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7272);
	// stw r11,7272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7272, ctx.r11.u32);
	// lwz r11,7276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7276);
	// stw r11,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r11.u32);
	// lwz r11,7280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7280);
	// stw r11,7280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7280, ctx.r11.u32);
	// lwz r11,7284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7284);
	// stw r11,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r11.u32);
	// lwz r11,7288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7288);
	// stw r11,7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7288, ctx.r11.u32);
	// lwz r11,7292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7292);
	// stw r11,7292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7292, ctx.r11.u32);
	// lwz r11,7296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7296);
	// stw r11,7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7296, ctx.r11.u32);
	// lwz r11,7300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7300);
	// stw r11,7300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7300, ctx.r11.u32);
	// lwz r11,7304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7304);
	// stw r11,7304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7304, ctx.r11.u32);
	// lwz r11,7308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7308);
	// stw r11,7308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7308, ctx.r11.u32);
	// lwz r11,7312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7312);
	// stw r11,7312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7312, ctx.r11.u32);
	// lwz r11,7316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7316);
	// stw r11,7316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7316, ctx.r11.u32);
	// lwz r11,7320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7320);
	// stw r11,7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7320, ctx.r11.u32);
	// lwz r11,7324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7324);
	// stw r11,7324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7324, ctx.r11.u32);
	// lwz r11,7328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7328);
	// stw r11,7328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7328, ctx.r11.u32);
	// lwz r11,7332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7332);
	// stw r11,7332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7332, ctx.r11.u32);
	// lwz r11,7336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7336);
	// stw r11,7336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7336, ctx.r11.u32);
	// lwz r11,7340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7340);
	// stw r11,7340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7340, ctx.r11.u32);
	// lwz r11,7344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7344);
	// stw r11,7344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7344, ctx.r11.u32);
	// lwz r11,7348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7348);
	// stw r11,7348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7348, ctx.r11.u32);
	// lwz r11,7352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7352);
	// stw r11,7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7352, ctx.r11.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8255408C;
	sub_82A4EA80(ctx, base);
	// lfs f0,7404(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7404);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7404, temp.u32);
	// lfs f0,7408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7408);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7408, temp.u32);
	// lfs f0,7412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7412, temp.u32);
	// lfs f0,7416(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7416, temp.u32);
	// lfs f0,7420(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7420, temp.u32);
	// lfs f0,7424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7424, temp.u32);
	// lfs f0,7428(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7428, temp.u32);
	// lfs f0,7432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7432, temp.u32);
	// lfs f0,7436(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7436, temp.u32);
	// lfs f0,7440(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7440);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7440, temp.u32);
	// lfs f0,7444(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,7444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7444, temp.u32);
	// lfs f0,7448(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7448);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7448, temp.u32);
	// lfs f0,7452(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7452);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7452, temp.u32);
	// lfs f0,7456(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7456);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7456, temp.u32);
	// lfs f0,7460(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7460);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7460, temp.u32);
	// lfs f0,7464(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7464);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7464, temp.u32);
	// lfs f0,7468(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7468);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7468, temp.u32);
	// lfs f0,7472(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7472);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7472, temp.u32);
	// lfs f0,7476(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7476);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7476, temp.u32);
	// lfs f0,7480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7480);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7480, temp.u32);
	// lfs f0,7484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7484, temp.u32);
	// lfs f0,7488(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7488, temp.u32);
	// lwz r11,7492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7492);
	// stw r11,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r11.u32);
	// lwz r11,7496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7496);
	// stw r11,7496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7496, ctx.r11.u32);
	// lwz r11,7500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7500);
	// stw r11,7500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7500, ctx.r11.u32);
	// lfs f0,7504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7504);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7504, temp.u32);
	// lwz r11,7508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7508);
	// stw r11,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r11.u32);
	// lwz r11,7512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7512);
	// stw r11,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r11.u32);
	// lwz r11,7516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7516);
	// stw r11,7516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7516, ctx.r11.u32);
	// lwz r11,7520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7520);
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
	// lwz r11,7524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7524);
	// stw r11,7524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7524, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825541A0"))) PPC_WEAK_FUNC(sub_825541A0);
PPC_FUNC_IMPL(__imp__sub_825541A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825541A8;
	__savegprlr_28(ctx, base);
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,7496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// addi r11,r11,-6072
	ctx.r11.s64 = ctx.r11.s64 + -6072;
	// addi r10,r10,-3632
	ctx.r10.s64 = ctx.r10.s64 + -3632;
	// addi r9,r9,-3580
	ctx.r9.s64 = ctx.r9.s64 + -3580;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825541fc
	if (ctx.cr6.eq) goto loc_825541FC;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x825541F8;
	sub_829BB1F8(ctx, base);
	// stw r29,7496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7496, ctx.r29.u32);
loc_825541FC:
	// lwz r4,7500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82554218
	if (ctx.cr6.eq) goto loc_82554218;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829bb1f8
	ctx.lr = 0x82554214;
	sub_829BB1F8(ctx, base);
	// stw r29,7500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7500, ctx.r29.u32);
loc_82554218:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff7c8
	ctx.lr = 0x82554220;
	sub_824FF7C8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554230
	if (ctx.cr0.eq) goto loc_82554230;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x82554230;
	sub_82332DB8(ctx, base);
loc_82554230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554240"))) PPC_WEAK_FUNC(sub_82554240);
PPC_FUNC_IMPL(__imp__sub_82554240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-8744
	ctx.r3.s64 = ctx.r11.s64 + -8744;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554250"))) PPC_WEAK_FUNC(sub_82554250);
PPC_FUNC_IMPL(__imp__sub_82554250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82554288
	if (ctx.cr6.eq) goto loc_82554288;
	// bl 0x8255b9b0
	ctx.lr = 0x82554278;
	sub_8255B9B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82554288
	if (!ctx.cr6.eq) goto loc_82554288;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82554294
	goto loc_82554294;
loc_82554288:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x82554294;
	sub_82333C70(ctx, base);
loc_82554294:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825542B0"))) PPC_WEAK_FUNC(sub_825542B0);
PPC_FUNC_IMPL(__imp__sub_825542B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255b9b0
	sub_8255B9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825542B8"))) PPC_WEAK_FUNC(sub_825542B8);
PPC_FUNC_IMPL(__imp__sub_825542B8) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x825542D4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255432c
	if (ctx.cr0.eq) goto loc_8255432C;
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
	// addi r9,r9,-3552
	ctx.r9.s64 = ctx.r9.s64 + -3552;
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
	// b 0x82554330
	goto loc_82554330;
loc_8255432C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82554330:
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

__attribute__((alias("__imp__sub_82554348"))) PPC_WEAK_FUNC(sub_82554348);
PPC_FUNC_IMPL(__imp__sub_82554348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255b9b0
	ctx.lr = 0x82554368;
	sub_8255B9B0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255437c
	if (ctx.cr6.eq) goto loc_8255437C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8255437C;
	sub_82333B08(ctx, base);
loc_8255437C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554398"))) PPC_WEAK_FUNC(sub_82554398);
PPC_FUNC_IMPL(__imp__sub_82554398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-8708
	ctx.r3.s64 = ctx.r11.s64 + -8708;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825543A8"))) PPC_WEAK_FUNC(sub_825543A8);
PPC_FUNC_IMPL(__imp__sub_825543A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825543e0
	if (ctx.cr6.eq) goto loc_825543E0;
	// bl 0x8255bab8
	ctx.lr = 0x825543D0;
	sub_8255BAB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825543e0
	if (!ctx.cr6.eq) goto loc_825543E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825543ec
	goto loc_825543EC;
loc_825543E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x825543EC;
	sub_82333C70(ctx, base);
loc_825543EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554408"))) PPC_WEAK_FUNC(sub_82554408);
PPC_FUNC_IMPL(__imp__sub_82554408) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255bab8
	sub_8255BAB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554410"))) PPC_WEAK_FUNC(sub_82554410);
PPC_FUNC_IMPL(__imp__sub_82554410) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8255442C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82554484
	if (ctx.cr0.eq) goto loc_82554484;
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
	// addi r9,r9,-3448
	ctx.r9.s64 = ctx.r9.s64 + -3448;
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
	// b 0x82554488
	goto loc_82554488;
loc_82554484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82554488:
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

__attribute__((alias("__imp__sub_825544A0"))) PPC_WEAK_FUNC(sub_825544A0);
PPC_FUNC_IMPL(__imp__sub_825544A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bab8
	ctx.lr = 0x825544C0;
	sub_8255BAB8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825544d4
	if (ctx.cr6.eq) goto loc_825544D4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x825544D4;
	sub_82333B08(ctx, base);
loc_825544D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825544F0"))) PPC_WEAK_FUNC(sub_825544F0);
PPC_FUNC_IMPL(__imp__sub_825544F0) {
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
	// addi r31,r11,-21704
	ctx.r31.s64 = ctx.r11.s64 + -21704;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x82554528;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82554554
	if (ctx.cr0.eq) goto loc_82554554;
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
loc_82554554:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82554578
	if (ctx.cr6.eq) goto loc_82554578;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82554578;
	sub_82332C38(ctx, base);
loc_82554578:
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

__attribute__((alias("__imp__sub_82554590"))) PPC_WEAK_FUNC(sub_82554590);
PPC_FUNC_IMPL(__imp__sub_82554590) {
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
	// addi r11,r11,-21704
	ctx.r11.s64 = ctx.r11.s64 + -21704;
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
	// ble cr6,0x825545fc
	if (!ctx.cr6.gt) goto loc_825545FC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825545CC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825545ec
	if (ctx.cr6.eq) goto loc_825545EC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825545cc
	if (ctx.cr6.lt) goto loc_825545CC;
	// b 0x825545fc
	goto loc_825545FC;
loc_825545EC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_825545FC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82554624
	if (ctx.cr6.eq) goto loc_82554624;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8255461C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82554628
	goto loc_82554628;
loc_82554624:
	// bl 0x824daf88
	ctx.lr = 0x82554628;
	sub_824DAF88(ctx, base);
loc_82554628:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554638"))) PPC_WEAK_FUNC(sub_82554638);
PPC_FUNC_IMPL(__imp__sub_82554638) {
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
	// addi r11,r11,-21704
	ctx.r11.s64 = ctx.r11.s64 + -21704;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82554698
	if (!ctx.cr6.gt) goto loc_82554698;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82554664:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82554684
	if (ctx.cr6.eq) goto loc_82554684;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82554664
	if (ctx.cr6.lt) goto loc_82554664;
	// b 0x82554698
	goto loc_82554698;
loc_82554684:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825546a0
	if (!ctx.cr6.eq) goto loc_825546A0;
loc_82554698:
	// bl 0x824db030
	ctx.lr = 0x8255469C;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825546A0:
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

__attribute__((alias("__imp__sub_825546B8"))) PPC_WEAK_FUNC(sub_825546B8);
PPC_FUNC_IMPL(__imp__sub_825546B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21704
	ctx.r11.s64 = ctx.r11.s64 + -21704;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82554738
	if (!ctx.cr6.gt) goto loc_82554738;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825546F4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82554714
	if (ctx.cr6.eq) goto loc_82554714;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825546f4
	if (ctx.cr6.lt) goto loc_825546F4;
	// b 0x82554738
	goto loc_82554738;
loc_82554714:
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
	ctx.lr = 0x82554730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82554744
	if (!ctx.cr0.eq) goto loc_82554744;
loc_82554738:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x82554744;
	sub_824DB0B0(ctx, base);
loc_82554744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82554760"))) PPC_WEAK_FUNC(sub_82554760);
PPC_FUNC_IMPL(__imp__sub_82554760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82554768;
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
	// bl 0x824ff818
	ctx.lr = 0x82554778;
	sub_824FF818(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stw r10,7164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7164, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,7168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7168, ctx.r10.u32);
	// addi r10,r8,-3632
	ctx.r10.s64 = ctx.r8.s64 + -3632;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r11,3800
	ctx.r11.s64 = 3800;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r29.u32);
	// addi r9,r9,-6072
	ctx.r9.s64 = ctx.r9.s64 + -6072;
	// stw r11,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r11.u32);
	// addi r8,r7,-3580
	ctx.r8.s64 = ctx.r7.s64 + -3580;
	// stw r11,7132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7132, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r8,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r8.u32);
	// stw r29,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r29.u32);
	// addi r3,r10,-8052
	ctx.r3.s64 = ctx.r10.s64 + -8052;
	// stw r29,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r29.u32);
	// stw r30,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r30.u32);
	// stw r30,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r30.u32);
	// stw r29,7524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7524, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x825547E0;
	sub_82816528(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r3.u32);
	// addi r25,r11,32716
	ctx.r25.s64 = ctx.r11.s64 + 32716;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r30,6744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6744, ctx.r30.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-26092
	ctx.r3.s64 = ctx.r11.s64 + -26092;
	// lfs f0,288(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2732, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82554808;
	sub_82816528(ctx, base);
	// li r9,50
	ctx.r9.s64 = 50;
	// lis r11,-2537
	ctx.r11.s64 = -166264832;
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// stw r9,1972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1972, ctx.r9.u32);
	// li r8,100
	ctx.r8.s64 = 100;
	// ori r11,r11,19839
	ctx.r11.u64 = ctx.r11.u64 | 19839;
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// stw r11,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// stw r29,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r29.u32);
	// stw r29,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r29.u32);
	// stw r30,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r30.u32);
	// stw r29,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r29.u32);
	// stw r8,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r8.u32);
	// stw r30,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r30.u32);
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r9.u32);
	// beq cr6,0x82554864
	if (ctx.cr6.eq) goto loc_82554864;
	// stw r29,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r29.u32);
loc_82554864:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,288(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,6972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,7076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7076, ctx.r30.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r30,7080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7080, ctx.r30.u32);
	// addi r28,r10,-25080
	ctx.r28.s64 = ctx.r10.s64 + -25080;
	// stw r30,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r30.u32);
	// lfs f12,912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lfs f31,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r11,3072
	ctx.r11.s64 = 3072;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// lfs f9,24088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24088);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// lis r7,-32244
	ctx.r7.s64 = -2113142784;
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// stw r9,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r9.u32);
	// stw r9,6916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6916, ctx.r9.u32);
	// lfs f0,908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,18304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18304);
	ctx.f11.f64 = double(temp.f32);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// lfs f13,-20040(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -20040);
	ctx.f13.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f10,-2220(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -2220);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,-15732(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -15732);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r4.u32);
	// lfs f7,30996(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30996);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r8.u32);
	// lfs f6,-12104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -12104);
	ctx.f6.f64 = double(temp.f32);
	// stw r30,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r30.u32);
	// lfs f5,-2248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -2248);
	ctx.f5.f64 = double(temp.f32);
	// stw r30,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r30.u32);
	// stfs f11,5404(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// stw r30,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// stfs f31,7068(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
	// stw r30,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r30.u32);
	// stfs f31,7072(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7072, temp.u32);
	// stw r6,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r6.u32);
	// stfs f10,7404(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7404, temp.u32);
	// stw r29,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r29.u32);
	// stfs f31,7504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7504, temp.u32);
	// stw r30,6956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6956, ctx.r30.u32);
	// stfs f9,6932(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// stw r30,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r30.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f8,6936(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f7,6940(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,6944(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// stfs f13,6948(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// stw r30,7516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7516, ctx.r30.u32);
	// stfs f13,6952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// stw r11,7112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7112, ctx.r11.u32);
	// stfs f31,6964(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// stfs f31,6968(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// stw r10,7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7116, ctx.r10.u32);
	// stfs f0,6976(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6976, temp.u32);
	// stw r9,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r9.u32);
	// stfs f0,6980(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6980, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f0,6984(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// stfs f0,6988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6988, temp.u32);
	// addi r3,r11,-8044
	ctx.r3.s64 = ctx.r11.s64 + -8044;
	// stfs f0,6992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// stfs f0,6996(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stfs f0,7004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// stfs f6,7008(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7008, temp.u32);
	// stfs f5,7032(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7032, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825549A8;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2768
	ctx.r3.s64 = ctx.r31.s64 + 2768;
	// bl 0x82410060
	ctx.lr = 0x825549B8;
	sub_82410060(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stfs f31,7108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7108, temp.u32);
	// stw r30,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r30.u32);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,24000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r10,-8032
	ctx.r3.s64 = ctx.r10.s64 + -8032;
	// stfs f0,7092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7092, temp.u32);
	// stfs f0,7096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7096, temp.u32);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// addi r27,r11,1268
	ctx.r27.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x825549E8;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82509750
	ctx.lr = 0x82554A00;
	sub_82509750(ctx, base);
	// addi r11,r31,7340
	ctx.r11.s64 = ctx.r31.s64 + 7340;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82554A08:
	// stw r30,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82554a08
	if (!ctx.cr0.eq) goto loc_82554A08;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,7324
	ctx.r11.s64 = ctx.r31.s64 + 7324;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82554A28:
	// stfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82554a28
	if (!ctx.cr0.eq) goto loc_82554A28;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r10.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82554a68
	if (!ctx.cr6.eq) goto loc_82554A68;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82554a68
	if (!ctx.cr6.lt) goto loc_82554A68;
	// stw r30,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r30.u32);
	// b 0x82554a6c
	goto loc_82554A6C;
loc_82554A68:
	// stw r29,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r29.u32);
loc_82554A6C:
	// lis r11,20769
	ctx.r11.s64 = 1361117184;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,4466
	ctx.r10.s64 = 292683776;
	// stfs f0,3560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// ori r11,r11,54808
	ctx.r11.u64 = ctx.r11.u64 | 54808;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// ori r10,r10,51556
	ctx.r10.u64 = ctx.r10.u64 | 51556;
	// lis r9,8476
	ctx.r9.s64 = 555483136;
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// lis r8,11842
	ctx.r8.s64 = 776077312;
	// stw r10,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r10.u32);
	// lis r7,11608
	ctx.r7.s64 = 760741888;
	// ori r9,r9,53431
	ctx.r9.u64 = ctx.r9.u64 | 53431;
	// ori r11,r8,29626
	ctx.r11.u64 = ctx.r8.u64 | 29626;
	// ori r10,r7,57188
	ctx.r10.u64 = ctx.r7.u64 | 57188;
	// stw r9,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r9.u32);
	// stw r11,2604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2604, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554AC8"))) PPC_WEAK_FUNC(sub_82554AC8);
PPC_FUNC_IMPL(__imp__sub_82554AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82554AD0;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825008f0
	ctx.lr = 0x82554ADC;
	sub_825008F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-7996
	ctx.r5.s64 = ctx.r11.s64 + -7996;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,6708
	ctx.r4.s64 = ctx.r31.s64 + 6708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9968
	ctx.lr = 0x82554AF8;
	sub_824F9968(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-7956
	ctx.r5.s64 = ctx.r11.s64 + -7956;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,6772
	ctx.r4.s64 = ctx.r31.s64 + 6772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82554B14;
	sub_824115B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-7924
	ctx.r5.s64 = ctx.r11.s64 + -7924;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,6656
	ctx.r4.s64 = ctx.r31.s64 + 6656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x82554B30;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-7900
	ctx.r5.s64 = ctx.r11.s64 + -7900;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r31,6660
	ctx.r4.s64 = ctx.r31.s64 + 6660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416240
	ctx.lr = 0x82554B4C;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r11,-7860
	ctx.r5.s64 = ctx.r11.s64 + -7860;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r31,6668
	ctx.r4.s64 = ctx.r31.s64 + 6668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f9968
	ctx.lr = 0x82554B68;
	sub_824F9968(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r8,r31,6960
	ctx.r8.s64 = ctx.r31.s64 + 6960;
	// addi r24,r11,7896
	ctx.r24.s64 = ctx.r11.s64 + 7896;
	// addi r26,r10,-25660
	ctx.r26.s64 = ctx.r10.s64 + -25660;
	// addi r25,r9,-7828
	ctx.r25.s64 = ctx.r9.s64 + -7828;
loc_82554B88:
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
loc_82554B90:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x828168f0
	ctx.lr = 0x82554B9C;
	sub_828168F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8233a258
	ctx.lr = 0x82554BAC;
	sub_8233A258(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82554bc4
	if (ctx.cr6.eq) goto loc_82554BC4;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82554bc8
	goto loc_82554BC8;
loc_82554BC4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554BC8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82419348
	ctx.lr = 0x82554BD0;
	sub_82419348(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8233a258
	ctx.lr = 0x82554BDC;
	sub_8233A258(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82554bf0
	if (ctx.cr6.eq) goto loc_82554BF0;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82554bf4
	goto loc_82554BF4;
loc_82554BF0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554BF4:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82419348
	ctx.lr = 0x82554C00;
	sub_82419348(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828168f0
	ctx.lr = 0x82554C0C;
	sub_828168F0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82554c20
	if (ctx.cr6.eq) goto loc_82554C20;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82554c24
	goto loc_82554C24;
loc_82554C20:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554C24:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419348
	ctx.lr = 0x82554C30;
	sub_82419348(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82333960
	ctx.lr = 0x82554C38;
	sub_82333960(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82333960
	ctx.lr = 0x82554C40;
	sub_82333960(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82333960
	ctx.lr = 0x82554C48;
	sub_82333960(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82333960
	ctx.lr = 0x82554C50;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82554C58;
	sub_82333960(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82554C60;
	sub_82333960(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554c74
	if (!ctx.cr6.eq) goto loc_82554C74;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554C74:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82554C88;
	sub_824115B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82554C90;
	sub_82333960(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x82554b90
	if (ctx.cr6.lt) goto loc_82554B90;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x82554b88
	if (ctx.cr6.lt) goto loc_82554B88;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r31,6492
	ctx.r28.s64 = ctx.r31.s64 + 6492;
	// addi r27,r11,-7788
	ctx.r27.s64 = ctx.r11.s64 + -7788;
loc_82554CC0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x828168f0
	ctx.lr = 0x82554CCC;
	sub_828168F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x82554CDC;
	sub_8233A258(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82554cf4
	if (ctx.cr6.eq) goto loc_82554CF4;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x82554cf8
	goto loc_82554CF8;
loc_82554CF4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554CF8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82419348
	ctx.lr = 0x82554D00;
	sub_82419348(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82333960
	ctx.lr = 0x82554D08;
	sub_82333960(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82333960
	ctx.lr = 0x82554D10;
	sub_82333960(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82554d24
	if (!ctx.cr6.eq) goto loc_82554D24;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_82554D24:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82554D38;
	sub_824115B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82554D40;
	sub_82333960(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82554cc0
	if (ctx.cr6.lt) goto loc_82554CC0;
	// lwz r11,-396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -396);
	// addi r3,r31,-396
	ctx.r3.s64 = ctx.r31.s64 + -396;
	// lwz r11,2164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554D64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554D70"))) PPC_WEAK_FUNC(sub_82554D70);
PPC_FUNC_IMPL(__imp__sub_82554D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82554D78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825009c8
	ctx.lr = 0x82554D84;
	sub_825009C8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82554ea4
	if (!ctx.cr6.eq) goto loc_82554EA4;
	// addi r11,r31,7104
	ctx.r11.s64 = ctx.r31.s64 + 7104;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554DAC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7168
	ctx.r10.s64 = ctx.r31.s64 + 7168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82554DCC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7052
	ctx.r10.s64 = ctx.r31.s64 + 7052;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82554DEC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7056
	ctx.r10.s64 = ctx.r31.s64 + 7056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82554E0C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7064
	ctx.r10.s64 = ctx.r31.s64 + 7064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bl 0x82838fd0
	ctx.lr = 0x82554E2C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r31,7356
	ctx.r28.s64 = ctx.r31.s64 + 7356;
	// li r26,4
	ctx.r26.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82554E40:
	// li r27,3
	ctx.r27.s64 = 3;
loc_82554E44:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554E54;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82554e44
	if (!ctx.cr0.eq) goto loc_82554E44;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82554e40
	if (!ctx.cr0.eq) goto loc_82554E40;
	// addi r28,r31,6888
	ctx.r28.s64 = ctx.r31.s64 + 6888;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82554E7C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554E8C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82554e7c
	if (!ctx.cr0.eq) goto loc_82554E7C;
loc_82554EA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82554EB0"))) PPC_WEAK_FUNC(sub_82554EB0);
PPC_FUNC_IMPL(__imp__sub_82554EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82554EB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// bl 0x82500ac0
	ctx.lr = 0x82554EC8;
	sub_82500AC0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82555218
	if (!ctx.cr6.eq) goto loc_82555218;
	// addi r28,r31,7104
	ctx.r28.s64 = ctx.r31.s64 + 7104;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554EF0;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82554f4c
	if (!ctx.cr0.eq) goto loc_82554F4C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554F40;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82554F4C:
	// addi r28,r31,7168
	ctx.r28.s64 = ctx.r31.s64 + 7168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554F60;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82554fbc
	if (!ctx.cr0.eq) goto loc_82554FBC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554FB0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82554FBC:
	// addi r28,r31,7052
	ctx.r28.s64 = ctx.r31.s64 + 7052;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82554FD0;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82554FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255502c
	if (!ctx.cr0.eq) goto loc_8255502C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555020;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8255502C:
	// addi r28,r31,7056
	ctx.r28.s64 = ctx.r31.s64 + 7056;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555040;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555064;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555078;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255509c
	if (!ctx.cr0.eq) goto loc_8255509C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555090;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8255509C:
	// addi r28,r31,7064
	ctx.r28.s64 = ctx.r31.s64 + 7064;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825550B0;
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
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825550D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825550E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255510c
	if (!ctx.cr0.eq) goto loc_8255510C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555100;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8255510C:
	// addi r28,r31,7356
	ctx.r28.s64 = ctx.r31.s64 + 7356;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82555114:
	// li r27,3
	ctx.r27.s64 = 3;
loc_82555118:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555128;
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
	// lwz r24,0(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255514C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82555184
	if (!ctx.cr0.eq) goto loc_82555184;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555178;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82555184:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82555118
	if (!ctx.cr0.eq) goto loc_82555118;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82555114
	if (!ctx.cr0.eq) goto loc_82555114;
	// addi r28,r31,6888
	ctx.r28.s64 = ctx.r31.s64 + 6888;
	// li r27,4
	ctx.r27.s64 = 4;
loc_825551A0:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825551B0;
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
	ctx.lr = 0x825551D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r25
	ctx.r4.u64 = ctx.r3.u64 + ctx.r25.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825551E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255520c
	if (!ctx.cr0.eq) goto loc_8255520C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82555200;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8255520C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x825551a0
	if (!ctx.cr0.eq) goto loc_825551A0;
loc_82555218:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555228"))) PPC_WEAK_FUNC(sub_82555228);
PPC_FUNC_IMPL(__imp__sub_82555228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82505418
	ctx.lr = 0x82555248;
	sub_82505418(ctx, base);
	// lis r11,9946
	ctx.r11.s64 = 651821056;
	// ori r11,r11,57360
	ctx.r11.u64 = ctx.r11.u64 | 57360;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82555288
	if (ctx.cr6.eq) goto loc_82555288;
	// lis r11,-30006
	ctx.r11.s64 = -1966473216;
	// ori r11,r11,29146
	ctx.r11.u64 = ctx.r11.u64 | 29146;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825552a4
	if (!ctx.cr6.eq) goto loc_825552A4;
	// lwz r11,7064(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255527c
	if (ctx.cr6.eq) goto loc_8255527C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82555280
	goto loc_82555280;
loc_8255527C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82555280:
	// stw r11,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r11.u32);
	// b 0x825552a4
	goto loc_825552A4;
loc_82555288:
	// lwz r11,7104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255529c
	if (ctx.cr6.eq) goto loc_8255529C;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x825552a0
	goto loc_825552A0;
loc_8255529C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825552A0:
	// stw r11,7100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7100, ctx.r11.u32);
loc_825552A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825552C0"))) PPC_WEAK_FUNC(sub_825552C0);
PPC_FUNC_IMPL(__imp__sub_825552C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825552C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7772
	ctx.r4.s64 = ctx.r11.s64 + -7772;
	// bl 0x8233a258
	ctx.lr = 0x825552E0;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4296
	ctx.r3.s64 = ctx.r31.s64 + 4296;
	// bl 0x82400b48
	ctx.lr = 0x825552EC;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x825552F4;
	sub_82333960(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7760
	ctx.r4.s64 = ctx.r11.s64 + -7760;
	// bl 0x8233a258
	ctx.lr = 0x82555304;
	sub_8233A258(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4320
	ctx.r3.s64 = ctx.r31.s64 + 4320;
	// bl 0x82400b48
	ctx.lr = 0x82555310;
	sub_82400B48(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82333960
	ctx.lr = 0x82555318;
	sub_82333960(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r28,r11,0
	ctx.r28.s64 = ctx.r11.s64 + 0;
	// stw r10,4396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4396, ctx.r10.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r27,r31,4344
	ctx.r27.s64 = ctx.r31.s64 + 4344;
loc_82555334:
	// bl 0x825357f8
	ctx.lr = 0x82555338;
	sub_825357F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82555348;
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
	ctx.lr = 0x82555364;
	sub_824EF870(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823339b8
	ctx.lr = 0x82555374;
	sub_823339B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x825357f8
	ctx.lr = 0x8255537C;
	sub_825357F8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823339b8
	ctx.lr = 0x8255538C;
	sub_823339B8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// bl 0x82333960
	ctx.lr = 0x82555398;
	sub_82333960(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535798
	ctx.lr = 0x825553A4;
	sub_82535798(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82333960
	ctx.lr = 0x825553AC;
	sub_82333960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825553C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r11,r28,192
	ctx.r11.s64 = ctx.r28.s64 + 192;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82555334
	if (ctx.cr6.lt) goto loc_82555334;
	// lwz r10,4360(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82555408
	if (!ctx.cr6.gt) goto loc_82555408;
	// addi r10,r31,4408
	ctx.r10.s64 = ctx.r31.s64 + 4408;
loc_825553F0:
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
	// blt cr6,0x825553f0
	if (ctx.cr6.lt) goto loc_825553F0;
loc_82555408:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555410"))) PPC_WEAK_FUNC(sub_82555410);
PPC_FUNC_IMPL(__imp__sub_82555410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-7748
	ctx.r3.s64 = ctx.r11.s64 + -7748;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555420"))) PPC_WEAK_FUNC(sub_82555420);
PPC_FUNC_IMPL(__imp__sub_82555420) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r11,-7720
	ctx.r3.s64 = ctx.r11.s64 + -7720;
	// bl 0x82816528
	ctx.lr = 0x82555440;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82410060
	ctx.lr = 0x82555450;
	sub_82410060(ctx, base);
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

__attribute__((alias("__imp__sub_82555468"))) PPC_WEAK_FUNC(sub_82555468);
PPC_FUNC_IMPL(__imp__sub_82555468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x82816528
	sub_82816528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555478"))) PPC_WEAK_FUNC(sub_82555478);
PPC_FUNC_IMPL(__imp__sub_82555478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,16600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16600);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16800);
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

__attribute__((alias("__imp__sub_82555498"))) PPC_WEAK_FUNC(sub_82555498);
PPC_FUNC_IMPL(__imp__sub_82555498) {
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
	// lwz r3,7216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7216);
	// bl 0x8281d650
	ctx.lr = 0x825554B8;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7220);
	// bl 0x8281d650
	ctx.lr = 0x825554C4;
	sub_8281D650(ctx, base);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825554E8"))) PPC_WEAK_FUNC(sub_825554E8);
PPC_FUNC_IMPL(__imp__sub_825554E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,7216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7216);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7220);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,7520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555528"))) PPC_WEAK_FUNC(sub_82555528);
PPC_FUNC_IMPL(__imp__sub_82555528) {
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
	// lwz r3,7224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7224);
	// bl 0x8281d650
	ctx.lr = 0x82555548;
	sub_8281D650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// bl 0x8281d650
	ctx.lr = 0x82555554;
	sub_8281D650(ctx, base);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82555578"))) PPC_WEAK_FUNC(sub_82555578);
PPC_FUNC_IMPL(__imp__sub_82555578) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e8fb8
	sub_824E8FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555580"))) PPC_WEAK_FUNC(sub_82555580);
PPC_FUNC_IMPL(__imp__sub_82555580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,7224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7224);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7228);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,7520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825555C0"))) PPC_WEAK_FUNC(sub_825555C0);
PPC_FUNC_IMPL(__imp__sub_825555C0) {
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
	// lwz r11,7236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r3,7236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// bl 0x8281d650
	ctx.lr = 0x825555F0;
	sub_8281D650(ctx, base);
	// lwz r11,7240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r3,7240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// bl 0x8281d650
	ctx.lr = 0x8255560C;
	sub_8281D650(ctx, base);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82555630"))) PPC_WEAK_FUNC(sub_82555630);
PPC_FUNC_IMPL(__imp__sub_82555630) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,7236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7236);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7240);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,7520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555670"))) PPC_WEAK_FUNC(sub_82555670);
PPC_FUNC_IMPL(__imp__sub_82555670) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7052, ctx.r11.u32);
	// stw r11,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r11.u32);
	// stw r11,7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7064, ctx.r11.u32);
	// stw r11,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// lwz r10,7516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// beq cr6,0x825556b4
	if (ctx.cr6.eq) goto loc_825556B4;
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// b 0x825556b8
	goto loc_825556B8;
loc_825556B4:
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
loc_825556B8:
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// bl 0x8281d650
	ctx.lr = 0x825556C8;
	sub_8281D650(ctx, base);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825556dc
	if (!ctx.cr0.eq) goto loc_825556DC;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
loc_825556DC:
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

__attribute__((alias("__imp__sub_825556F0"))) PPC_WEAK_FUNC(sub_825556F0);
PPC_FUNC_IMPL(__imp__sub_825556F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7232);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,7232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7232);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7520);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,7520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555730"))) PPC_WEAK_FUNC(sub_82555730);
PPC_FUNC_IMPL(__imp__sub_82555730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82555738;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,7060(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7060);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82555870
	if (ctx.cr6.eq) goto loc_82555870;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82555760;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82555764;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82555870
	if (ctx.cr0.eq) goto loc_82555870;
	// bl 0x82332278
	ctx.lr = 0x82555770;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x82555788;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82555870
	if (!ctx.cr0.eq) goto loc_82555870;
	// lwz r11,7056(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82555870
	if (ctx.cr6.eq) goto loc_82555870;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82833108
	ctx.lr = 0x825557A4;
	sub_82833108(ctx, base);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ori r30,r11,47806
	ctx.r30.u64 = ctx.r11.u64 | 47806;
	// beq 0x8255580c
	if (ctx.cr0.eq) goto loc_8255580C;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r26,80(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// addi r3,r11,-13540
	ctx.r3.s64 = ctx.r11.s64 + -13540;
	// bl 0x82816528
	ctx.lr = 0x825557C4;
	sub_82816528(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x825557D0;
	sub_82833180(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-2537
	ctx.r10.s64 = -166264832;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r11,r11,-9024
	ctx.r11.s64 = ctx.r11.s64 + -9024;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// ori r10,r10,19839
	ctx.r10.u64 = ctx.r10.u64 | 19839;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r25,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// b 0x82555810
	goto loc_82555810;
loc_8255580C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82555810:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255581C;
	sub_82833A30(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x82555824;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82555860
	if (ctx.cr0.eq) goto loc_82555860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82555838;
	sub_82833180(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// addi r11,r11,-9128
	ctx.r11.s64 = ctx.r11.s64 + -9128;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x82555864
	goto loc_82555864;
loc_82555860:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82555864:
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82555870;
	sub_82833A30(ctx, base);
loc_82555870:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555878"))) PPC_WEAK_FUNC(sub_82555878);
PPC_FUNC_IMPL(__imp__sub_82555878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82555880;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,7060(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7060);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825559a4
	if (ctx.cr6.eq) goto loc_825559A4;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825558A8;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x825558AC;
	sub_82416348(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825559a4
	if (ctx.cr0.eq) goto loc_825559A4;
	// bl 0x82332278
	ctx.lr = 0x825558B8;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x825558D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825559a4
	if (!ctx.cr0.eq) goto loc_825559A4;
	// lwz r11,7056(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7056);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255599c
	if (ctx.cr6.eq) goto loc_8255599C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x825558F0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82555930
	if (ctx.cr0.eq) goto loc_82555930;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,80(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x82555904;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r11,r11,-3264
	ctx.r11.s64 = ctx.r11.s64 + -3264;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// b 0x82555934
	goto loc_82555934;
loc_82555930:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82555934:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82555940;
	sub_82833A30(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82833108
	ctx.lr = 0x82555948;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255598c
	if (ctx.cr0.eq) goto loc_8255598C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r4,80(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lis r6,-6866
	ctx.r6.s64 = -449970176;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r6,r6,31988
	ctx.r6.u64 = ctx.r6.u64 | 31988;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8255bb90
	ctx.lr = 0x82555984;
	sub_8255BB90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82555990
	goto loc_82555990;
loc_8255598C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82555990:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255599C;
	sub_82833A30(ctx, base);
loc_8255599C:
	// stw r27,7060(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7060, ctx.r27.u32);
	// stw r27,7064(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7064, ctx.r27.u32);
loc_825559A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825559B0"))) PPC_WEAK_FUNC(sub_825559B0);
PPC_FUNC_IMPL(__imp__sub_825559B0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6852);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82555a70
	if (ctx.cr6.eq) goto loc_82555A70;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// bl 0x82816528
	ctx.lr = 0x825559E4;
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
	ctx.lr = 0x825559F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555A10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x82555A34;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r5,6852(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6852);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x82555A70;
	sub_8282B1E0(ctx, base);
loc_82555A70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82555A88"))) PPC_WEAK_FUNC(sub_82555A88);
PPC_FUNC_IMPL(__imp__sub_82555A88) {
	PPC_FUNC_PROLOGUE();
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82555aa0
	sub_82555AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555A90"))) PPC_WEAK_FUNC(sub_82555A90);
PPC_FUNC_IMPL(__imp__sub_82555A90) {
	PPC_FUNC_PROLOGUE();
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x82555aa0
	sub_82555AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555A98"))) PPC_WEAK_FUNC(sub_82555A98);
PPC_FUNC_IMPL(__imp__sub_82555A98) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,7040(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7040);
	// b 0x82555aa0
	sub_82555AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555AA0"))) PPC_WEAK_FUNC(sub_82555AA0);
PPC_FUNC_IMPL(__imp__sub_82555AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82555AA8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r11,960(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82555f04
	if (!ctx.cr6.eq) goto loc_82555F04;
	// lwz r3,7100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7100);
	// bl 0x829c35d8
	ctx.lr = 0x82555AD0;
	sub_829C35D8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82555f04
	if (!ctx.cr6.gt) goto loc_82555F04;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// lfs f31,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// addi r23,r11,-7660
	ctx.r23.s64 = ctx.r11.s64 + -7660;
	// addi r25,r10,-18392
	ctx.r25.s64 = ctx.r10.s64 + -18392;
	// addi r22,r9,-8044
	ctx.r22.s64 = ctx.r9.s64 + -8044;
loc_82555B08:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82555B0C:
	// lbzx r10,r11,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r22.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82555b0c
	if (!ctx.cr0.eq) goto loc_82555B0C;
	// srawi r11,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 2;
	// li r6,10
	ctx.r6.s64 = 10;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r5,3
	ctx.r5.s64 = 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82a4e510
	ctx.lr = 0x82555B48;
	sub_82A4E510(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82409058
	ctx.lr = 0x82555B54;
	sub_82409058(ctx, base);
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_82555B5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82555b5c
	if (!ctx.cr6.eq) goto loc_82555B5C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82555B70:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82555b70
	if (!ctx.cr6.eq) goto loc_82555B70;
	// lwz r3,420(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// addi r11,r1,292
	ctx.r11.s64 = ctx.r1.s64 + 292;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82555ba4
	if (ctx.cr6.eq) goto loc_82555BA4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82555ba4
	if (ctx.cr6.eq) goto loc_82555BA4;
	// bl 0x82332db8
	ctx.lr = 0x82555BA4;
	sub_82332DB8(ctx, base);
loc_82555BA4:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r31,r1,256
	ctx.r31.s64 = ctx.r1.s64 + 256;
	// addi r30,r1,168
	ctx.r30.s64 = ctx.r1.s64 + 168;
	// bl 0x82816528
	ctx.lr = 0x82555BB4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8284da30
	ctx.lr = 0x82555BC8;
	sub_8284DA30(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r31,r1,256
	ctx.r31.s64 = ctx.r1.s64 + 256;
	// addi r30,r1,168
	ctx.r30.s64 = ctx.r1.s64 + 168;
	// bl 0x82816528
	ctx.lr = 0x82555BD8;
	sub_82816528(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x82555C14;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x82555C18;
	sub_824CA610(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82555ef8
	if (ctx.cr0.eq) goto loc_82555EF8;
	// lwa r11,6924(r29)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r29.u32 + 6924));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r11.u64);
	// lfd f0,232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// cmpwi cr6,r24,8
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 8, ctx.xer);
	// lwz r10,664(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r31,660(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x82555d40
	if (ctx.cr6.eq) goto loc_82555D40;
	// cmpwi cr6,r24,10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 10, ctx.xer);
	// beq cr6,0x82555ca0
	if (ctx.cr6.eq) goto loc_82555CA0;
	// lwz r20,7048(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7048);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// neg r3,r20
	ctx.r3.s64 = -ctx.r20.s64;
	// bl 0x82825ab8
	ctx.lr = 0x82555C80;
	sub_82825AB8(ctx, base);
	// rlwinm r11,r20,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,7044(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 7044);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r20,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r20.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CA0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82555cb0
	if (!ctx.cr6.eq) goto loc_82555CB0;
	// addi r11,r31,16000
	ctx.r11.s64 = ctx.r31.s64 + 16000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CB0:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82555cc0
	if (!ctx.cr6.eq) goto loc_82555CC0;
	// addi r11,r31,-16000
	ctx.r11.s64 = ctx.r31.s64 + -16000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CC0:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82555cd0
	if (!ctx.cr6.eq) goto loc_82555CD0;
	// addi r11,r31,2000
	ctx.r11.s64 = ctx.r31.s64 + 2000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CD0:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82555ce0
	if (!ctx.cr6.eq) goto loc_82555CE0;
	// addi r11,r31,-2000
	ctx.r11.s64 = ctx.r31.s64 + -2000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CE0:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82555cf0
	if (!ctx.cr6.eq) goto loc_82555CF0;
	// addi r11,r31,7500
	ctx.r11.s64 = ctx.r31.s64 + 7500;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555CF0:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x82555d00
	if (!ctx.cr6.eq) goto loc_82555D00;
	// addi r11,r31,-7500
	ctx.r11.s64 = ctx.r31.s64 + -7500;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D00:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x82555d10
	if (!ctx.cr6.eq) goto loc_82555D10;
	// addi r11,r31,10500
	ctx.r11.s64 = ctx.r31.s64 + 10500;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D10:
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// bne cr6,0x82555d20
	if (!ctx.cr6.eq) goto loc_82555D20;
	// addi r11,r31,-10500
	ctx.r11.s64 = ctx.r31.s64 + -10500;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D20:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x82555d30
	if (!ctx.cr6.eq) goto loc_82555D30;
	// addi r11,r31,5000
	ctx.r11.s64 = ctx.r31.s64 + 5000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D30:
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 9, ctx.xer);
	// bne cr6,0x82555dc0
	if (!ctx.cr6.eq) goto loc_82555DC0;
	// addi r11,r31,-5000
	ctx.r11.s64 = ctx.r31.s64 + -5000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D40:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82555d50
	if (!ctx.cr6.eq) goto loc_82555D50;
	// addi r11,r31,6000
	ctx.r11.s64 = ctx.r31.s64 + 6000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D50:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82555d60
	if (!ctx.cr6.eq) goto loc_82555D60;
	// addi r11,r31,-6000
	ctx.r11.s64 = ctx.r31.s64 + -6000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D60:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x82555d70
	if (!ctx.cr6.eq) goto loc_82555D70;
	// addi r11,r31,3000
	ctx.r11.s64 = ctx.r31.s64 + 3000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D70:
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bne cr6,0x82555d80
	if (!ctx.cr6.eq) goto loc_82555D80;
	// addi r11,r31,-3000
	ctx.r11.s64 = ctx.r31.s64 + -3000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D80:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x82555d90
	if (!ctx.cr6.eq) goto loc_82555D90;
	// addi r11,r31,12000
	ctx.r11.s64 = ctx.r31.s64 + 12000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555D90:
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bne cr6,0x82555da0
	if (!ctx.cr6.eq) goto loc_82555DA0;
	// addi r11,r31,-12000
	ctx.r11.s64 = ctx.r31.s64 + -12000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555DA0:
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// bne cr6,0x82555db0
	if (!ctx.cr6.eq) goto loc_82555DB0;
	// addi r11,r31,9000
	ctx.r11.s64 = ctx.r31.s64 + 9000;
	// b 0x82555dbc
	goto loc_82555DBC;
loc_82555DB0:
	// cmpwi cr6,r28,7
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 7, ctx.xer);
	// bne cr6,0x82555dc0
	if (!ctx.cr6.eq) goto loc_82555DC0;
	// addi r11,r31,-9000
	ctx.r11.s64 = ctx.r31.s64 + -9000;
loc_82555DBC:
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_82555DC0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f30,3108(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 3108);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82817bb8
	ctx.lr = 0x82555DD0;
	sub_82817BB8(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lfs f0,620(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lfs f12,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x82555e1c
	if (ctx.cr6.eq) goto loc_82555E1C;
	// lfs f0,628(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82555E1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82555E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,7036(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1504, temp.u32);
	// lwz r5,6872(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 6872);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82555e88
	if (ctx.cr6.eq) goto loc_82555E88;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,168(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// rldicr r10,r27,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82555E88;
	sub_8282B1E0(ctx, base);
loc_82555E88:
	// lwz r11,1660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1660);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,1664(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1664);
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,1648(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1648);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r8,1652(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1652);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r31,1668(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1668);
	// lwz r20,1656(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1656);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stw r8,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r8.u32);
	// bl 0x82816528
	ctx.lr = 0x82555EC4;
	sub_82816528(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r19,152(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rldicr r7,r20,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r20.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r31,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// bl 0x826b9ff8
	ctx.lr = 0x82555EF8;
	sub_826B9FF8(ctx, base);
loc_82555EF8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82555b08
	if (ctx.cr6.lt) goto loc_82555B08;
loc_82555F04:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82555F18"))) PPC_WEAK_FUNC(sub_82555F18);
PPC_FUNC_IMPL(__imp__sub_82555F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82555F20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,-7644
	ctx.r3.s64 = ctx.r10.s64 + -7644;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82555F5C;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x82555F74;
	sub_8284DA30(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6876(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6876);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x82555FA8;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82555ff0
	if (ctx.cr0.eq) goto loc_82555FF0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r9,r31,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82555FF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82555FF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82556000"))) PPC_WEAK_FUNC(sub_82556000);
PPC_FUNC_IMPL(__imp__sub_82556000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82556008;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r10,-7628
	ctx.r3.s64 = ctx.r10.s64 + -7628;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556044;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x8255605C;
	sub_8284DA30(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6880(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6880);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x82556090;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825560d8
	if (ctx.cr0.eq) goto loc_825560D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r9,r31,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825560D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825560D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825560E8"))) PPC_WEAK_FUNC(sub_825560E8);
PPC_FUNC_IMPL(__imp__sub_825560E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825560F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7612
	ctx.r3.s64 = ctx.r11.s64 + -7612;
	// bl 0x82816528
	ctx.lr = 0x82556104;
	sub_82816528(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556138;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x8255615C;
	sub_82817E08(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,6884(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6884);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x82556194;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825561e4
	if (ctx.cr0.eq) goto loc_825561E4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
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
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825561E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825561E4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825561F0"))) PPC_WEAK_FUNC(sub_825561F0);
PPC_FUNC_IMPL(__imp__sub_825561F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825561F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-7596
	ctx.r3.s64 = ctx.r11.s64 + -7596;
	// bl 0x82816528
	ctx.lr = 0x8255620C;
	sub_82816528(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,1060(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x82556264;
	sub_82817E08(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,6884(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6884);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8255629C;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825562ec
	if (ctx.cr0.eq) goto loc_825562EC;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
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
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r9,r29,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825562EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825562EC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825562F8"))) PPC_WEAK_FUNC(sub_825562F8);
PPC_FUNC_IMPL(__imp__sub_825562F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,5480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5480);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8255630c
	if (ctx.cr6.eq) goto loc_8255630C;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8255630C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,6964(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6964);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,6960(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6960, temp.u32);
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,6956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6956, ctx.r10.u32);
	// lfs f0,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5412, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556340"))) PPC_WEAK_FUNC(sub_82556340);
PPC_FUNC_IMPL(__imp__sub_82556340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6956, ctx.r10.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5412, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82556358"))) PPC_WEAK_FUNC(sub_82556358);
PPC_FUNC_IMPL(__imp__sub_82556358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82556360;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a61710
	ctx.lr = 0x82556368;
	__savefpr_14(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x824df418
	ctx.lr = 0x82556374;
	sub_824DF418(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r26,-32243
	ctx.r26.s64 = -2113077248;
	// addi r24,r11,9748
	ctx.r24.s64 = ctx.r11.s64 + 9748;
	// addi r25,r26,-29292
	ctx.r25.s64 = ctx.r26.s64 + -29292;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lfs f30,1992(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 1992);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lis r5,-32215
	ctx.r5.s64 = -2111242240;
	// lfs f20,19696(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19696);
	ctx.f20.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f29,16540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16540);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f18,-28788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -28788);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,19548(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19548);
	ctx.f17.f64 = double(temp.f32);
	// lfs f25,17848(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17848);
	ctx.f25.f64 = double(temp.f32);
	// lfs f19,4652(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4652);
	ctx.f19.f64 = double(temp.f32);
	// stfs f20,184(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,5352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stfs f19,216(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f18,220(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f29,224(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f17,200(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f25,204(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f30,588(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r30,5352(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// stfs f25,208(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825563F8;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-7580
	ctx.r3.s64 = ctx.r11.s64 + -7580;
	// bl 0x82816528
	ctx.lr = 0x82556408;
	sub_82816528(ctx, base);
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r23,224(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rldicr r9,r23,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x8255644C;
	sub_824E5590(ctx, base);
	// stw r3,7172(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7172, ctx.r3.u32);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,7172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7172);
	// stw r31,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r31.u32);
	// lwz r11,7172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7172);
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// lwz r11,7172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7172);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7172(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7172);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r23,r10,-5640
	ctx.r23.s64 = ctx.r10.s64 + -5640;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f16,19692(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19692);
	ctx.f16.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stfs f16,216(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f15,19688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19688);
	ctx.f15.f64 = double(temp.f32);
	// lfs f22,19684(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19684);
	ctx.f22.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f14,16580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16580);
	ctx.f14.f64 = double(temp.f32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// stfs f15,220(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f22,184(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f0,19680(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f21,19676(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19676);
	ctx.f21.f64 = double(temp.f32);
	// lfs f13,19672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19672);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19668(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19668);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f14,188(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f21,200(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556500;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-7572
	ctx.r3.s64 = ctx.r11.s64 + -7572;
	// bl 0x82816528
	ctx.lr = 0x82556510;
	sub_82816528(ctx, base);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r29,224(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,192(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rldicr r9,r28,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556554;
	sub_824E5590(ctx, base);
	// stw r3,7180(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7180, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,7180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7180);
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// lwz r11,7180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7180);
	// stw r29,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r29.u32);
	// lwz r11,7180(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7180);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7180(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7180);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f24,4648(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4648);
	ctx.f24.f64 = double(temp.f32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f24,184(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r21,r22,-32764
	ctx.r21.s64 = ctx.r22.s64 + -32764;
	// lfs f0,16616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16616);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f13,19664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19664);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lfs f27,248(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 248);
	ctx.f27.f64 = double(temp.f32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,19656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lfs f13,-12(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f23,19660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19660);
	ctx.f23.f64 = double(temp.f32);
	// stfs f27,188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r10,7180(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7180);
	// lwz r8,52(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// oris r11,r8,8
	ctx.r11.u64 = ctx.r8.u64 | 524288;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f23,200(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556610;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-7564
	ctx.r3.s64 = ctx.r11.s64 + -7564;
	// bl 0x82816528
	ctx.lr = 0x82556620;
	sub_82816528(ctx, base);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r20,192(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rldicr r9,r20,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556664;
	sub_824E5590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,7176(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7176, ctx.r11.u32);
	// lwz r10,1740(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// li r30,2
	ctx.r30.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,7176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7176);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,7176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7176);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,7176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7176);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7176(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7176);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825566A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfs f0,4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f28,5916(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5916);
	ctx.f28.f64 = double(temp.f32);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f0,19652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f12,19644(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19640(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19640);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,19648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19648);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19636(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 19636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,-28800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28800);
	ctx.f26.f64 = double(temp.f32);
	// stfs f28,220(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f26,184(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8255671C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7556
	ctx.r3.s64 = ctx.r11.s64 + -7556;
	// bl 0x82816528
	ctx.lr = 0x8255672C;
	sub_82816528(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r20,216(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// std r20,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r20.u64);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556770;
	sub_824E5590(ctx, base);
	// stw r3,7184(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7184, ctx.r3.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,7184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7184);
	// stw r28,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r28.u32);
	// lwz r11,7184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7184);
	// stw r28,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r28.u32);
	// lwz r11,7184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7184);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7184(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7184);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825567B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f20,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f29,220(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f19,184(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f18,188(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f17,200(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f25,204(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f25,208(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lwz r24,5352(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 5352);
	// bl 0x82816528
	ctx.lr = 0x825567E0;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r3,r11,-7548
	ctx.r3.s64 = ctx.r11.s64 + -7548;
	// bl 0x82816528
	ctx.lr = 0x825567F0;
	sub_82816528(ctx, base);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r19,224(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r18,192(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r9,r18,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556834;
	sub_824E5590(ctx, base);
	// lwz r10,1740(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r11,7188(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7188, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r11,7188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7188);
	// stw r31,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r31.u32);
	// lwz r11,7188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7188);
	// stw r31,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r31.u32);
	// lwz r11,7188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7188);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7188(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7188);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556874;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f25,19632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19632);
	ctx.f25.f64 = double(temp.f32);
	// lwz r11,7188(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7188);
	// lfs f20,19628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19628);
	ctx.f20.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f16,216(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f15,220(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f22,184(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stfs f14,188(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f21,200(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f20,208(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825568C4;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r11,-7528
	ctx.r3.s64 = ctx.r11.s64 + -7528;
	// bl 0x82816528
	ctx.lr = 0x825568D4;
	sub_82816528(ctx, base);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// rldicr r7,r8,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556918;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// stw r3,7196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7196, ctx.r3.u32);
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,7196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7196);
	// stw r29,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r29.u32);
	// lwz r11,7196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7196);
	// stw r29,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r29.u32);
	// lwz r11,7196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7196);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7196(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7196);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7196);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f13,220(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stfs f24,184(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f23,200(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f20,208(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x8255699C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r11,-7508
	ctx.r3.s64 = ctx.r11.s64 + -7508;
	// bl 0x82816528
	ctx.lr = 0x825569AC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r20,224(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r9,r19,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x825569F0;
	sub_824E5590(ctx, base);
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,7192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7192, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,7192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7192);
	// stw r30,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r30.u32);
	// lwz r11,7192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7192);
	// stw r30,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r30.u32);
	// lwz r11,7192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7192);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7192(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7192);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556A30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7192(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7192);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f28,220(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f26,184(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f20,208(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556A7C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r11,-7488
	ctx.r3.s64 = ctx.r11.s64 + -7488;
	// bl 0x82816528
	ctx.lr = 0x82556A8C;
	sub_82816528(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// rldicr r9,r6,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556AD0;
	sub_824E5590(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r10,7200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7200, ctx.r10.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,1740(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1740);
	// stw r11,444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 444, ctx.r11.u32);
	// lwz r11,7200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7200);
	// stw r28,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r28.u32);
	// lwz r11,7200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7200);
	// stw r28,468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 468, ctx.r28.u32);
	// lwz r11,7200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7200);
	// stfs f30,588(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 588, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,7200(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7200);
	// lwz r11,2124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stfs f27,188(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,17148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,19624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19624);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r7,14264
	ctx.r3.s64 = ctx.r7.s64 + 14264;
	// lfs f12,19620(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19620);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19616(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19616);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lwz r11,7200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7200);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82816528
	ctx.lr = 0x82556B70;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7468
	ctx.r3.s64 = ctx.r11.s64 + -7468;
	// bl 0x82816528
	ctx.lr = 0x82556B80;
	sub_82816528(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r8,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x824e5590
	ctx.lr = 0x82556BC4;
	sub_824E5590(ctx, base);
	// stw r3,7208(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7208, ctx.r3.u32);
	// stw r31,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r31.u32);
	// li r11,99
	ctx.r11.s64 = 99;
	// lfs f0,17868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 17868);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,7208(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7208);
	// stw r11,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stfs f0,3948(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 3948, temp.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,7172(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7172);
	// stw r10,7204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7204, ctx.r10.u32);
	// lwz r11,408(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82556C04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lfs f13,-64(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// addi r24,r11,17040
	ctx.r24.s64 = ctx.r11.s64 + 17040;
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556C4C;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,17052
	ctx.r3.s64 = ctx.r11.s64 + 17052;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r23,r11,8
	ctx.r23.u64 = ctx.r11.u64 | 8;
	// bl 0x82816528
	ctx.lr = 0x82556C64;
	sub_82816528(ctx, base);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r9,208(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// bl 0x824e4120
	ctx.lr = 0x82556CAC;
	sub_824E4120(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r3,7212(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7212, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f30,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x82331120
	ctx.lr = 0x82556D08;
	sub_82331120(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7212(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7212);
	// bl 0x8281d650
	ctx.lr = 0x82556D14;
	sub_8281D650(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stfs f26,188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f25,16664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r7,17060
	ctx.r3.s64 = ctx.r7.s64 + 17060;
	// lfs f19,19612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19612);
	ctx.f19.f64 = double(temp.f32);
	// lfs f18,19608(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19608);
	ctx.f18.f64 = double(temp.f32);
	// lfs f17,19604(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19604);
	ctx.f17.f64 = double(temp.f32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f19,200(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f18,204(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f17,208(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556D64;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7448
	ctx.r3.s64 = ctx.r11.s64 + -7448;
	// bl 0x82816528
	ctx.lr = 0x82556D74;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// li r5,392
	ctx.r5.s64 = 392;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x824e4120
	ctx.lr = 0x82556DBC;
	sub_824E4120(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r3,7216(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7216, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r10,4099
	ctx.r10.s64 = 4099;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
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
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82556E10;
	sub_82331120(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r11,-26268
	ctx.r23.s64 = ctx.r11.s64 + -26268;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,7216(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7216);
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82556E28;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7216(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7216);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x82556E3C;
	sub_82410060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,7212(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7212);
	// lwz r3,7216(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7216);
	// bl 0x8281d468
	ctx.lr = 0x82556E4C;
	sub_8281D468(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r11,-7440
	ctx.r3.s64 = ctx.r11.s64 + -7440;
	// stfs f26,188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f16,19600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19600);
	ctx.f16.f64 = double(temp.f32);
	// lfs f20,19596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19596);
	ctx.f20.f64 = double(temp.f32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f16,200(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f20,204(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f28,208(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556E8C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7424
	ctx.r3.s64 = ctx.r11.s64 + -7424;
	// bl 0x82816528
	ctx.lr = 0x82556E9C;
	sub_82816528(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r5,392
	ctx.r5.s64 = 392;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x824e4120
	ctx.lr = 0x82556EE4;
	sub_824E4120(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r3,7220(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7220, ctx.r3.u32);
	// li r10,4099
	ctx.r10.s64 = 4099;
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
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
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x82556F38;
	sub_82331120(ctx, base);
	// lwz r11,7220(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7220);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82556F48;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7220(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7220);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x82556F5C;
	sub_82410060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,7212(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7212);
	// lwz r3,7220(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7220);
	// bl 0x8281d468
	ctx.lr = 0x82556F6C;
	sub_8281D468(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f25,184(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f26,188(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f29,192(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f19,200(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f18,204(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f17,208(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82556F9C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7412
	ctx.r3.s64 = ctx.r11.s64 + -7412;
	// bl 0x82816528
	ctx.lr = 0x82556FAC;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,392
	ctx.r5.s64 = 392;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x824e4120
	ctx.lr = 0x82556FF4;
	sub_824E4120(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r3,7224(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7224, ctx.r3.u32);
	// li r10,4099
	ctx.r10.s64 = 4099;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82557048;
	sub_82331120(ctx, base);
	// lwz r11,7224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7224);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82557058;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7224(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7224);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x8255706C;
	sub_82410060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,7212(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7212);
	// lwz r3,7224(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7224);
	// bl 0x8281d468
	ctx.lr = 0x8255707C;
	sub_8281D468(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,-32764(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -32764);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r10,-7400
	ctx.r3.s64 = ctx.r10.s64 + -7400;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f0,19592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f16,200(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f20,204(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f28,208(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825570B8;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// bl 0x82816528
	ctx.lr = 0x825570C8;
	sub_82816528(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r5,392
	ctx.r5.s64 = 392;
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x824e4120
	ctx.lr = 0x82557110;
	sub_824E4120(ctx, base);
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r3,7228(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7228, ctx.r3.u32);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r10,4099
	ctx.r10.s64 = 4099;
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
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82331120
	ctx.lr = 0x82557164;
	sub_82331120(ctx, base);
	// lwz r11,7228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7228);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82557174;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7228);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x82557188;
	sub_82410060(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,7212(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7212);
	// lwz r3,7228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7228);
	// bl 0x8281d468
	ctx.lr = 0x82557198;
	sub_8281D468(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f29,-29292(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -29292);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r3,r10,-13540
	ctx.r3.s64 = ctx.r10.s64 + -13540;
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f0,19588(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f22,188(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f25,192(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f21,204(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f20,208(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825571D4;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7372
	ctx.r3.s64 = ctx.r11.s64 + -7372;
	// bl 0x82816528
	ctx.lr = 0x825571E4;
	sub_82816528(ctx, base);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,136
	ctx.r5.s64 = 136;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x8255722C;
	sub_824E4120(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stw r3,7232(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7232, ctx.r3.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r10,4097
	ctx.r10.s64 = 4097;
	// lwz r4,6916(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6916);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// ld r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r28,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// bl 0x82331120
	ctx.lr = 0x82557280;
	sub_82331120(ctx, base);
	// lwz r11,7232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7232);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x82557290;
	sub_82816528(ctx, base);
	// lwz r11,7232(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7232);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x825572A4;
	sub_82410060(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,17868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 17868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r10,-7364
	ctx.r3.s64 = ctx.r10.s64 + -7364;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f27,19584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19584);
	ctx.f27.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f24,192(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f28,204(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f23,208(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825572E0;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7344
	ctx.r3.s64 = ctx.r11.s64 + -7344;
	// bl 0x82816528
	ctx.lr = 0x825572F0;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// bl 0x824e4120
	ctx.lr = 0x82557338;
	sub_824E4120(ctx, base);
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r3,7236(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7236, ctx.r3.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// li r10,4099
	ctx.r10.s64 = 4099;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
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
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lwz r28,224(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bl 0x82331120
	ctx.lr = 0x8255738C;
	sub_82331120(ctx, base);
	// lwz r11,7236(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7236);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x8255739C;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7236(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7236);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x825573B0;
	sub_82410060(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,17868(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 17868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r3,r11,-7336
	ctx.r3.s64 = ctx.r11.s64 + -7336;
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f29,188(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f24,192(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f28,204(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f23,208(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825573E4;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r11,-7316
	ctx.r3.s64 = ctx.r11.s64 + -7316;
	// bl 0x82816528
	ctx.lr = 0x825573F4;
	sub_82816528(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r28,216(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r5,136
	ctx.r5.s64 = 136;
	// li r6,2
	ctx.r6.s64 = 2;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// std r28,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r28.u64);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// bl 0x824e4120
	ctx.lr = 0x8255743C;
	sub_824E4120(ctx, base);
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r3,7240(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7240, ctx.r3.u32);
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r10,4099
	ctx.r10.s64 = 4099;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,6912(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6912);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82331120
	ctx.lr = 0x82557490;
	sub_82331120(ctx, base);
	// lwz r11,7240(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7240);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x825574A0;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7240(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7240);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x825574B4;
	sub_82410060(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stfs f31,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x825574C8;
	sub_82816528(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r9,r11,-21716
	ctx.r9.s64 = ctx.r11.s64 + -21716;
	// addi r8,r10,-21728
	ctx.r8.s64 = ctx.r10.s64 + -21728;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-21716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21716);
	// addi r3,r7,-7304
	ctx.r3.s64 = ctx.r7.s64 + -7304;
	// lwz r10,-21728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21728);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r26,8(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r25,8(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// stw r6,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r6.u32);
	// bl 0x82816528
	ctx.lr = 0x82557510;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// li r5,136
	ctx.r5.s64 = 136;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// rldicr r8,r25,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// rldicr r10,r26,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// bl 0x824e4120
	ctx.lr = 0x82557550;
	sub_824E4120(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r28,100
	ctx.r28.s64 = 100;
	// stw r3,7244(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7244, ctx.r3.u32);
	// lfs f29,-31124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31124);
	ctx.f29.f64 = double(temp.f32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stfs f29,224(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f29,220(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f29,216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,6928(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6928);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// ld r26,216(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r26,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// bl 0x82331120
	ctx.lr = 0x825575B0;
	sub_82331120(ctx, base);
	// lwz r11,7244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7244);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x825575C0;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7244(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7244);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x825575D4;
	sub_82410060(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f13,208(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// bl 0x82816528
	ctx.lr = 0x82557608;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// ori r25,r11,136
	ctx.r25.u64 = ctx.r11.u64 | 136;
	// bl 0x82816528
	ctx.lr = 0x82557620;
	sub_82816528(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r9,184(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x824e4120
	ctx.lr = 0x82557668;
	sub_824E4120(ctx, base);
	// stfs f29,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r3,7248(r27)
	PPC_STORE_U32(ctx.r27.u32 + 7248, ctx.r3.u32);
	// stfs f29,216(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stfs f29,220(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// ld r31,216(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82331120
	ctx.lr = 0x825576BC;
	sub_82331120(ctx, base);
	// lwz r11,7248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7248);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r29,560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 560, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x825576CC;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7248);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x825576E0;
	sub_82410060(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-27376
	ctx.r3.s64 = ctx.r11.s64 + -27376;
	// bl 0x82816528
	ctx.lr = 0x825576EC;
	sub_82816528(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// lwz r11,7248(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 7248);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r11,564
	ctx.r3.s64 = ctx.r11.s64 + 564;
	// bl 0x82410060
	ctx.lr = 0x82557700;
	sub_82410060(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82a6175c
	ctx.lr = 0x8255770C;
	__restfpr_14(ctx, base);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557710"))) PPC_WEAK_FUNC(sub_82557710);
PPC_FUNC_IMPL(__imp__sub_82557710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82557718;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x824dd5b0
	ctx.lr = 0x82557724;
	sub_824DD5B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829bed50
	ctx.lr = 0x8255772C;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r27.u32);
	// stw r27,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r27.u32);
	// stw r29,808(r30)
	PPC_STORE_U32(ctx.r30.u32 + 808, ctx.r29.u32);
	// bl 0x829c2520
	ctx.lr = 0x8255774C;
	sub_829C2520(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,17060
	ctx.r3.s64 = ctx.r11.s64 + 17060;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8255775C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557770;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r9,r11,-23376
	ctx.r9.s64 = ctx.r11.s64 + -23376;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// li r3,480
	ctx.r3.s64 = 480;
	// lfs f10,-23376(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23376);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,16816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-4428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4428);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,17148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82833108
	ctx.lr = 0x825577B8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825577dc
	if (ctx.cr0.eq) goto loc_825577DC;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x828d59e8
	ctx.lr = 0x825577D4;
	sub_828D59E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825577e0
	goto loc_825577E0;
loc_825577DC:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_825577E0:
	// stw r11,7252(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7252, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// stw r29,224(r11)
	PPC_STORE_U32(ctx.r11.u32 + 224, ctx.r29.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// stw r29,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,7252(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82557850
	if (!ctx.cr6.eq) goto loc_82557850;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82557850
	if (ctx.cr6.eq) goto loc_82557850;
	// lwz r9,168(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
loc_82557850:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r9,96
	ctx.r9.s64 = 96;
	// lis r4,-23022
	ctx.r4.s64 = -1508769792;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r4,r4,52136
	ctx.r4.u64 = ctx.r4.u64 | 52136;
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// stw r9,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// li r31,-1
	ctx.r31.s64 = -1;
	// lis r5,-13007
	ctx.r5.s64 = -852426752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// ori r5,r5,20307
	ctx.r5.u64 = ctx.r5.u64 | 20307;
	// addi r4,r30,6828
	ctx.r4.s64 = ctx.r30.s64 + 6828;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825578AC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-8969
	ctx.r5.s64 = -587792384;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,48071
	ctx.r5.u64 = ctx.r5.u64 | 48071;
	// addi r4,r30,6832
	ctx.r4.s64 = ctx.r30.s64 + 6832;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825578CC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,19324
	ctx.r5.s64 = 1266417664;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,24038
	ctx.r5.u64 = ctx.r5.u64 | 24038;
	// addi r4,r30,6836
	ctx.r4.s64 = ctx.r30.s64 + 6836;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825578EC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-21915
	ctx.r5.s64 = -1436221440;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,21120
	ctx.r5.u64 = ctx.r5.u64 | 21120;
	// addi r4,r30,6840
	ctx.r4.s64 = ctx.r30.s64 + 6840;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255790C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-17170
	ctx.r5.s64 = -1125253120;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,4680
	ctx.r5.u64 = ctx.r5.u64 | 4680;
	// addi r4,r30,6844
	ctx.r4.s64 = ctx.r30.s64 + 6844;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255792C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,2198
	ctx.r5.s64 = 144048128;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,15692
	ctx.r5.u64 = ctx.r5.u64 | 15692;
	// addi r4,r30,6848
	ctx.r4.s64 = ctx.r30.s64 + 6848;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255794C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-31032
	ctx.r5.s64 = -2033713152;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,21351
	ctx.r5.u64 = ctx.r5.u64 | 21351;
	// addi r4,r30,6852
	ctx.r4.s64 = ctx.r30.s64 + 6852;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255796C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-9830
	ctx.r5.s64 = -644218880;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,18478
	ctx.r5.u64 = ctx.r5.u64 | 18478;
	// addi r4,r30,6856
	ctx.r4.s64 = ctx.r30.s64 + 6856;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8255798C;
	sub_823CF190(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-205
	ctx.r5.s64 = -13434880;
	// addi r4,r30,6860
	ctx.r4.s64 = ctx.r30.s64 + 6860;
	// ori r5,r5,33057
	ctx.r5.u64 = ctx.r5.u64 | 33057;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825579AC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-17718
	ctx.r5.s64 = -1161166848;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,8688
	ctx.r5.u64 = ctx.r5.u64 | 8688;
	// addi r4,r30,6864
	ctx.r4.s64 = ctx.r30.s64 + 6864;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825579CC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-3521
	ctx.r5.s64 = -230752256;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,25615
	ctx.r5.u64 = ctx.r5.u64 | 25615;
	// addi r4,r30,6868
	ctx.r4.s64 = ctx.r30.s64 + 6868;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x825579EC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-24857
	ctx.r5.s64 = -1629028352;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,38531
	ctx.r5.u64 = ctx.r5.u64 | 38531;
	// addi r4,r30,6872
	ctx.r4.s64 = ctx.r30.s64 + 6872;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82557A0C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,7634
	ctx.r5.s64 = 500301824;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,20139
	ctx.r5.u64 = ctx.r5.u64 | 20139;
	// addi r4,r30,6876
	ctx.r4.s64 = ctx.r30.s64 + 6876;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82557A2C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,-17618
	ctx.r5.s64 = -1154613248;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,7678
	ctx.r5.u64 = ctx.r5.u64 | 7678;
	// addi r4,r30,6880
	ctx.r4.s64 = ctx.r30.s64 + 6880;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82557A4C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,29332
	ctx.r5.s64 = 1922301952;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,51667
	ctx.r5.u64 = ctx.r5.u64 | 51667;
	// addi r4,r30,6884
	ctx.r4.s64 = ctx.r30.s64 + 6884;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x82557A6C;
	sub_823CF190(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lis r5,9664
	ctx.r5.s64 = 633339904;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,37855
	ctx.r5.u64 = ctx.r5.u64 | 37855;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336bf8
	ctx.lr = 0x82557A90;
	sub_82336BF8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82557ac0
	if (ctx.cr6.eq) goto loc_82557AC0;
	// li r3,964
	ctx.r3.s64 = 964;
	// bl 0x82833108
	ctx.lr = 0x82557AA4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82557ab8
	if (ctx.cr0.eq) goto loc_82557AB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82855c68
	ctx.lr = 0x82557AB4;
	sub_82855C68(ctx, base);
	// b 0x82557abc
	goto loc_82557ABC;
loc_82557AB8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82557ABC:
	// stw r3,7496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7496, ctx.r3.u32);
loc_82557AC0:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r5,30522
	ctx.r5.s64 = 2000289792;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ori r5,r5,33025
	ctx.r5.u64 = ctx.r5.u64 | 33025;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x82336bf8
	ctx.lr = 0x82557AE4;
	sub_82336BF8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82557b14
	if (ctx.cr6.eq) goto loc_82557B14;
	// li r3,964
	ctx.r3.s64 = 964;
	// bl 0x82833108
	ctx.lr = 0x82557AF8;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82557b0c
	if (ctx.cr0.eq) goto loc_82557B0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82855c68
	ctx.lr = 0x82557B08;
	sub_82855C68(ctx, base);
	// b 0x82557b10
	goto loc_82557B10;
loc_82557B0C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82557B10:
	// stw r3,7500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 7500, ctx.r3.u32);
loc_82557B14:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557B20"))) PPC_WEAK_FUNC(sub_82557B20);
PPC_FUNC_IMPL(__imp__sub_82557B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82557B28;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c2520
	ctx.lr = 0x82557B34;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x82557c30
	if (ctx.cr0.eq) goto loc_82557C30;
	// stw r29,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r29.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r28,r31,6804
	ctx.r28.s64 = ctx.r31.s64 + 6804;
	// addi r3,r11,19296
	ctx.r3.s64 = ctx.r11.s64 + 19296;
	// bl 0x82816528
	ctx.lr = 0x82557B54;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557B68;
	sub_824E7350(ctx, base);
	// stw r29,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r31,6808
	ctx.r28.s64 = ctx.r31.s64 + 6808;
	// addi r3,r11,-7248
	ctx.r3.s64 = ctx.r11.s64 + -7248;
	// bl 0x82816528
	ctx.lr = 0x82557B7C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557B90;
	sub_824E7350(ctx, base);
	// stw r29,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r31,6812
	ctx.r28.s64 = ctx.r31.s64 + 6812;
	// addi r3,r11,-7224
	ctx.r3.s64 = ctx.r11.s64 + -7224;
	// bl 0x82816528
	ctx.lr = 0x82557BA4;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557BB8;
	sub_824E7350(ctx, base);
	// stw r29,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r31,6816
	ctx.r28.s64 = ctx.r31.s64 + 6816;
	// addi r3,r11,-7208
	ctx.r3.s64 = ctx.r11.s64 + -7208;
	// bl 0x82816528
	ctx.lr = 0x82557BCC;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557BE0;
	sub_824E7350(ctx, base);
	// stw r29,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r31,6820
	ctx.r28.s64 = ctx.r31.s64 + 6820;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// bl 0x82816528
	ctx.lr = 0x82557BF4;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557C08;
	sub_824E7350(ctx, base);
	// stw r29,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r31,6824
	ctx.r28.s64 = ctx.r31.s64 + 6824;
	// addi r3,r11,-7180
	ctx.r3.s64 = ctx.r11.s64 + -7180;
	// bl 0x82816528
	ctx.lr = 0x82557C1C;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x824e7350
	ctx.lr = 0x82557C30;
	sub_824E7350(ctx, base);
loc_82557C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502d10
	ctx.lr = 0x82557C38;
	sub_82502D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff970
	ctx.lr = 0x82557C40;
	sub_824FF970(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r25,5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5272, ctx.r25.u32);
	// bne cr6,0x82557c58
	if (!ctx.cr6.eq) goto loc_82557C58;
	// stw r29,2112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2112, ctx.r29.u32);
loc_82557C58:
	// addi r26,r31,5276
	ctx.r26.s64 = ctx.r31.s64 + 5276;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r30,r31,7356
	ctx.r30.s64 = ctx.r31.s64 + 7356;
	// addi r27,r31,5200
	ctx.r27.s64 = ctx.r31.s64 + 5200;
loc_82557C68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82410060
	ctx.lr = 0x82557C74;
	sub_82410060(ctx, base);
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82557c90
	if (!ctx.cr6.eq) goto loc_82557C90;
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82557C90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x82557CB8;
	sub_8289F1A8(ctx, base);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// blt cr6,0x82557c68
	if (ctx.cr6.lt) goto loc_82557C68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f45f0
	ctx.lr = 0x82557CEC;
	sub_824F45F0(ctx, base);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f0,6976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6976);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lfs f13,6980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6980);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,6984(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6984);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,6988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,6992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// stfs f13,6996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stfs f12,7000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// lwz r11,1400(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1400);
	// stfs f11,7004(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82557D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82557da8
	if (!ctx.cr6.eq) goto loc_82557DA8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r9,r31,5160
	ctx.r9.s64 = ctx.r31.s64 + 5160;
	// lwz r7,13024(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_82557D50:
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82557da8
	if (!ctx.cr6.gt) goto loc_82557DA8;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557d94
	if (ctx.cr6.eq) goto loc_82557D94;
	// stw r25,244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 244, ctx.r25.u32);
	// lwz r10,1728(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1728);
	// stw r10,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82557d90
	if (ctx.cr6.eq) goto loc_82557D90;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82557d94
	if (!ctx.cr6.eq) goto loc_82557D94;
loc_82557D90:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82557D94:
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 128, ctx.xer);
	// blt cr6,0x82557d50
	if (ctx.cr6.lt) goto loc_82557D50;
loc_82557DA8:
	// lwz r9,7016(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lwz r7,7020(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// lwz r6,7044(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7044);
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r5,7040(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7040);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f0,908(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// divw r8,r7,r9
	ctx.r8.s32 = ctx.r7.s32 / ctx.r9.s32;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// twllei r9,0
	// stw r8,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r8.u32);
	// divw r9,r6,r5
	ctx.r9.s32 = ctx.r6.s32 / ctx.r5.s32;
	// andc r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// twllei r5,0
	// stw r9,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r9.u32);
	// twlgei r11,-1
	// twlgei r10,-1
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,7028(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7028, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82557E20"))) PPC_WEAK_FUNC(sub_82557E20);
PPC_FUNC_IMPL(__imp__sub_82557E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82557E28;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x824ffb80
	ctx.lr = 0x82557E3C;
	sub_824FFB80(ctx, base);
	// lwz r11,5728(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82557e50
	if (ctx.cr6.eq) goto loc_82557E50;
	// lwz r4,5724(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5724);
	// b 0x82557e58
	goto loc_82557E58;
loc_82557E50:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82557E58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82409058
	ctx.lr = 0x82557E60;
	sub_82409058(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82557e84
	if (ctx.cr6.eq) goto loc_82557E84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82557e84
	if (ctx.cr6.eq) goto loc_82557E84;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82557E84;
	sub_82332DB8(ctx, base);
loc_82557E84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825583ac
	if (ctx.cr6.eq) goto loc_825583AC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825583ac
	if (ctx.cr6.eq) goto loc_825583AC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-7172
	ctx.r4.s64 = ctx.r10.s64 + -7172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82557EB8;
	sub_829E6978(ctx, base);
	// li r11,6888
	ctx.r11.s64 = 6888;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,-7164
	ctx.r4.s64 = ctx.r10.s64 + -7164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82557EDC;
	sub_829E6978(ctx, base);
	// li r11,6892
	ctx.r11.s64 = 6892;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-7152
	ctx.r4.s64 = ctx.r10.s64 + -7152;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82557F00;
	sub_829E6978(ctx, base);
	// li r11,6896
	ctx.r11.s64 = 6896;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-7144
	ctx.r4.s64 = ctx.r10.s64 + -7144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82557F24;
	sub_829E6978(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,6900
	ctx.r10.s64 = 6900;
	// lfs f13,3108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f1
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lfs f0,-27804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27804);
	ctx.f0.f64 = double(temp.f32);
	// stfiwx f12,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f12.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82557f50
	if (ctx.cr6.gt) goto loc_82557F50;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,17528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17528);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3108, temp.u32);
loc_82557F50:
	// lwz r11,3340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// lfs f0,3108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-7132
	ctx.r4.s64 = ctx.r10.s64 + -7132;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82557F78;
	sub_829E6978(ctx, base);
	// stfs f1,7008(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7008, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7112
	ctx.r28.s64 = ctx.r11.s64 + -7112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x82557F90;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82557fb4
	if (ctx.cr0.eq) goto loc_82557FB4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82557FAC;
	sub_829E6978(ctx, base);
	// stfs f1,7012(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
	// b 0x82557fc0
	goto loc_82557FC0;
loc_82557FB4:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
loc_82557FC0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7096
	ctx.r28.s64 = ctx.r11.s64 + -7096;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x82557FD4;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82558000
	if (ctx.cr0.eq) goto loc_82558000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82557FF0;
	sub_829E6978(ctx, base);
	// li r11,7020
	ctx.r11.s64 = 7020;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82558008
	goto loc_82558008;
loc_82558000:
	// li r11,12000
	ctx.r11.s64 = 12000;
	// stw r11,7020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7020, ctx.r11.u32);
loc_82558008:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7076
	ctx.r28.s64 = ctx.r11.s64 + -7076;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8255801C;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82558048
	if (ctx.cr0.eq) goto loc_82558048;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558038;
	sub_829E6978(ctx, base);
	// li r11,7016
	ctx.r11.s64 = 7016;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82558050
	goto loc_82558050;
loc_82558048:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
loc_82558050:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-7060
	ctx.r4.s64 = ctx.r11.s64 + -7060;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558068;
	sub_829E6978(ctx, base);
	// li r11,6924
	ctx.r11.s64 = 6924;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-7040
	ctx.r4.s64 = ctx.r10.s64 + -7040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8255808C;
	sub_829E6978(ctx, base);
	// stfs f1,7032(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7032, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7020
	ctx.r28.s64 = ctx.r11.s64 + -7020;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x825580A4;
	sub_829E6A48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,-32676
	ctx.r26.s64 = ctx.r11.s64 + -32676;
	// beq 0x825580d0
	if (ctx.cr0.eq) goto loc_825580D0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825580C8;
	sub_829E6978(ctx, base);
	// stfs f1,7036(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7036, temp.u32);
	// b 0x825580d8
	goto loc_825580D8;
loc_825580D0:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7036, temp.u32);
loc_825580D8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-7000
	ctx.r28.s64 = ctx.r11.s64 + -7000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x825580EC;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82558118
	if (ctx.cr0.eq) goto loc_82558118;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558108;
	sub_829E6978(ctx, base);
	// li r11,7044
	ctx.r11.s64 = 7044;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82558120
	goto loc_82558120;
loc_82558118:
	// li r11,20000
	ctx.r11.s64 = 20000;
	// stw r11,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r11.u32);
loc_82558120:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-6980
	ctx.r28.s64 = ctx.r11.s64 + -6980;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x82558134;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82558160
	if (ctx.cr0.eq) goto loc_82558160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558150;
	sub_829E6978(ctx, base);
	// li r11,7040
	ctx.r11.s64 = 7040;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// b 0x82558168
	goto loc_82558168;
loc_82558160:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r11.u32);
loc_82558168:
	// lwz r11,3332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3332);
	// lfs f0,148(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7124, temp.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-6964
	ctx.r4.s64 = ctx.r10.s64 + -6964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,6928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6928, ctx.r11.u32);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// bl 0x829e6978
	ctx.lr = 0x82558194;
	sub_829E6978(ctx, base);
	// li r11,6916
	ctx.r11.s64 = 6916;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-6952
	ctx.r4.s64 = ctx.r10.s64 + -6952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfiwx f0,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x825581B8;
	sub_829E6978(ctx, base);
	// stfs f1,6936(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6936, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6936
	ctx.r4.s64 = ctx.r11.s64 + -6936;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825581D4;
	sub_829E6978(ctx, base);
	// stfs f1,6944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6920
	ctx.r4.s64 = ctx.r11.s64 + -6920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825581F0;
	sub_829E6978(ctx, base);
	// stfs f1,6948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6900
	ctx.r4.s64 = ctx.r11.s64 + -6900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255820C;
	sub_829E6978(ctx, base);
	// stfs f1,6952(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6876
	ctx.r4.s64 = ctx.r11.s64 + -6876;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558228;
	sub_829E6978(ctx, base);
	// stfs f1,6940(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6860
	ctx.r4.s64 = ctx.r11.s64 + -6860;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558244;
	sub_829E6978(ctx, base);
	// stfs f1,6964(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6848
	ctx.r4.s64 = ctx.r11.s64 + -6848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558260;
	sub_829E6978(ctx, base);
	// stfs f1,6968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6832
	ctx.r4.s64 = ctx.r11.s64 + -6832;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255827C;
	sub_829E6978(ctx, base);
	// stfs f1,6976(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6976, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6816
	ctx.r4.s64 = ctx.r11.s64 + -6816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x82558298;
	sub_829E6978(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stfs f1,6980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6980, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-6796
	ctx.r4.s64 = ctx.r11.s64 + -6796;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825582B4;
	sub_829E6978(ctx, base);
	// stfs f1,6984(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6984, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-6776
	ctx.r4.s64 = ctx.r11.s64 + -6776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x825582D0;
	sub_829E6978(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f1,6988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6988, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825582EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// srawi r10,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-6760
	ctx.r4.s64 = ctx.r11.s64 + -6760;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bl 0x829e6978
	ctx.lr = 0x8255830C;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// addi r4,r11,-6744
	ctx.r4.s64 = ctx.r11.s64 + -6744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addze r27,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	// bl 0x829e6978
	ctx.lr = 0x82558338;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r31,7360
	ctx.r11.s64 = ctx.r31.s64 + 7360;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82558354:
	// stw r28,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r28.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bne 0x82558354
	if (!ctx.cr0.eq) goto loc_82558354;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-6728
	ctx.r28.s64 = ctx.r11.s64 + -6728;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x82558380;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825583a4
	if (ctx.cr0.eq) goto loc_825583A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829e6978
	ctx.lr = 0x8255839C;
	sub_829E6978(ctx, base);
	// stfs f1,6972(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// b 0x825583ac
	goto loc_825583AC;
loc_825583A4:
	// lfs f0,144(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
loc_825583AC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825583B8"))) PPC_WEAK_FUNC(sub_825583B8);
PPC_FUNC_IMPL(__imp__sub_825583B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,4360(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4360);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825583CC:
	// cmpwi cr6,r10,128
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 128, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825583f0
	if (ctx.cr6.eq) goto loc_825583F0;
	// lwz r9,4356(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,28(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82558404
	if (ctx.cr6.eq) goto loc_82558404;
loc_825583F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x825583cc
	if (ctx.cr6.lt) goto loc_825583CC;
	// blr 
	return;
loc_82558404:
	// addi r10,r11,1831
	ctx.r10.s64 = ctx.r11.s64 + 1831;
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r11,1722
	ctx.r8.s64 = ctx.r11.s64 + 1722;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,13024(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13024);
	// stwx r10,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r10.u32);
	// stw r10,244(r4)
	PPC_STORE_U32(ctx.r4.u32 + 244, ctx.r10.u32);
	// lwzx r10,r8,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r10,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r10.u32);
	// lwz r9,788(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 788);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82558444
	if (ctx.cr6.eq) goto loc_82558444;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82558444:
	// addi r11,r11,1290
	ctx.r11.s64 = ctx.r11.s64 + 1290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82558458"))) PPC_WEAK_FUNC(sub_82558458);
PPC_FUNC_IMPL(__imp__sub_82558458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e0
	ctx.lr = 0x82558460;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x824116b0
	ctx.lr = 0x82558484;
	sub_824116B0(ctx, base);
	// lis r24,-31949
	ctx.r24.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255849C;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825584A0;
	sub_82333A20(ctx, base);
	// bl 0x82332988
	ctx.lr = 0x825584A4;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82558f1c
	if (ctx.cr0.eq) goto loc_82558F1C;
	// lwz r11,7524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558f1c
	if (ctx.cr6.eq) goto loc_82558F1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824116b0
	ctx.lr = 0x825584C0;
	sub_824116B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8281d7f0
	ctx.lr = 0x825584D0;
	sub_8281D7F0(ctx, base);
	// lwz r11,7208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7208);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825585a8
	if (!ctx.cr6.eq) goto loc_825585A8;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// andi. r11,r11,99
	ctx.r11.u64 = ctx.r11.u64 & 99;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825585a8
	if (ctx.cr0.eq) goto loc_825585A8;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825585a8
	if (!ctx.cr6.eq) goto loc_825585A8;
	// lwz r11,7524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825585a8
	if (ctx.cr6.eq) goto loc_825585A8;
	// lwz r11,460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825585a8
	if (!ctx.cr0.eq) goto loc_825585A8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x825585a8
	if (!ctx.cr6.eq) goto loc_825585A8;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x82558520;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82558560
	if (ctx.cr0.eq) goto loc_82558560;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f1,6524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6524);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,6516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6516);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,20416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82505970
	ctx.lr = 0x82558544;
	sub_82505970(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-25072
	ctx.r11.s64 = ctx.r11.s64 + -25072;
	// stw r10,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r10.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82558564
	goto loc_82558564;
loc_82558560:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82558564:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8271d1c8
	ctx.lr = 0x8255858C;
	sub_8271D1C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825585A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82558f1c
	goto loc_82558F1C;
loc_825585A8:
	// lwz r11,468(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 468);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825585d8
	if (!ctx.cr6.eq) goto loc_825585D8;
	// lwz r10,7288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82558f1c
	if (ctx.cr6.eq) goto loc_82558F1C;
	// lwz r10,7284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82558f1c
	if (ctx.cr6.eq) goto loc_82558F1C;
	// lwz r10,7276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82558f1c
	if (ctx.cr6.eq) goto loc_82558F1C;
loc_825585D8:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// andi. r10,r10,99
	ctx.r10.u64 = ctx.r10.u64 & 99;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825585fc
	if (ctx.cr0.eq) goto loc_825585FC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x825585fc
	if (ctx.cr6.eq) goto loc_825585FC;
	// stw r11,2280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2280, ctx.r11.u32);
	// lwz r11,436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// stw r11,2284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2284, ctx.r11.u32);
loc_825585FC:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504bf8
	ctx.lr = 0x82558610;
	sub_82504BF8(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addi r25,r11,-25640
	ctx.r25.s64 = ctx.r11.s64 + -25640;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32244
	ctx.r10.s64 = -2113142784;
	// li r22,1
	ctx.r22.s64 = 1;
	// lfs f31,904(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r20,3
	ctx.r20.s64 = 3;
	// lis r23,-31949
	ctx.r23.s64 = -2093809664;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// addi r21,r10,15834
	ctx.r21.s64 = ctx.r10.s64 + 15834;
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558798
	if (!ctx.cr6.eq) goto loc_82558798;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558798
	if (!ctx.cr6.eq) goto loc_82558798;
	// lwz r11,10632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825586c8
	if (ctx.cr6.eq) goto loc_825586C8;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x8255866C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x825586b8
	if (ctx.cr0.eq) goto loc_825586B8;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82558698
	if (ctx.cr6.eq) goto loc_82558698;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255868C;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82558690;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8255869c
	goto loc_8255869C;
loc_82558698:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_8255869C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8098
	ctx.lr = 0x825586A8;
	sub_827E8098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r20,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r20.u32);
	// b 0x825586bc
	goto loc_825586BC;
loc_825586B8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_825586BC:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825586C8;
	sub_82833A30(ctx, base);
loc_825586C8:
	// stfs f31,7320(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7320, temp.u32);
	// stw r22,7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7288, ctx.r22.u32);
	// stfs f31,6992(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,6996(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stfs f31,7000(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stfs f31,7004(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// bl 0x8255b408
	ctx.lr = 0x825586EC;
	sub_8255B408(ctx, base);
	// lwz r11,7184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7200);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x8233a258
	ctx.lr = 0x82558718;
	sub_8233A258(ctx, base);
	// lis r4,7534
	ctx.r4.s64 = 493748224;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,372
	ctx.r4.u64 = ctx.r4.u64 | 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8255872C;
	sub_829C3740(ctx, base);
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558798
	if (ctx.cr6.eq) goto loc_82558798;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-6716
	ctx.r3.s64 = ctx.r11.s64 + -6716;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// bl 0x82816528
	ctx.lr = 0x8255874C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x82558760;
	sub_8284DA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558798
	if (ctx.cr0.eq) goto loc_82558798;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r5,6848(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82558798;
	sub_8282B1E0(ctx, base);
loc_82558798:
	// lwz r10,7284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r26,-32244
	ctx.r26.s64 = -2113142784;
	// addi r27,r11,-32488
	ctx.r27.s64 = ctx.r11.s64 + -32488;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82558b14
	if (!ctx.cr6.eq) goto loc_82558B14;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558b14
	if (!ctx.cr6.eq) goto loc_82558B14;
	// lwz r11,10632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558834
	if (ctx.cr6.eq) goto loc_82558834;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x825587D4;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82558824
	if (ctx.cr0.eq) goto loc_82558824;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82558800
	if (ctx.cr6.eq) goto loc_82558800;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825587F4;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x825587F8;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82558804
	goto loc_82558804;
loc_82558800:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558804:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8098
	ctx.lr = 0x82558810;
	sub_827E8098(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// b 0x82558828
	goto loc_82558828;
loc_82558824:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558828:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82558834;
	sub_82833A30(ctx, base);
loc_82558834:
	// stfs f31,7316(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7316, temp.u32);
	// stw r22,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x82558848;
	sub_8233A258(ctx, base);
	// lis r4,10989
	ctx.r4.s64 = 720175104;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,56055
	ctx.r4.u64 = ctx.r4.u64 | 56055;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8255885C;
	sub_829C3740(ctx, base);
	// lwa r11,7132(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 7132));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f12,30996(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,7132
	ctx.r12.s64 = 7132;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// bne cr6,0x825588c0
	if (!ctx.cr6.eq) goto loc_825588C0;
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8239f0b8
	ctx.lr = 0x82558898;
	sub_8239F0B8(ctx, base);
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
	ctx.lr = 0x825588B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,30996(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 30996);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f0,f12,f0
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
loc_825588C0:
	// lwz r11,7216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7216);
	// lfs f0,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7220);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7224);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwz r11,7240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// lwa r10,452(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 452));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stw r29,592(r11)
	PPC_STORE_U32(ctx.r11.u32 + 592, ctx.r29.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// li r12,452
	ctx.r12.s64 = 452;
	// stfiwx f11,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f11.u32);
	// lwa r11,6924(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 6924));
	// lfs f11,7000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	ctx.f11.f64 = double(temp.f32);
	// lwa r10,6920(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 6920));
	// lfs f10,7004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,6996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,6992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	ctx.f8.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,7000(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,6992(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f9,6996(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f13,7004(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fmadds f13,f6,f0,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsp f11,f7
	ctx.f11.f64 = double(float(ctx.f7.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// stw r11,3340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3340, ctx.r11.u32);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,6924
	ctx.r12.s64 = 6924;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// bl 0x8255b408
	ctx.lr = 0x82558A88;
	sub_8255B408(ctx, base);
	// lwz r11,7176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7176);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558b14
	if (ctx.cr6.eq) goto loc_82558B14;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-6704
	ctx.r3.s64 = ctx.r11.s64 + -6704;
	// addi r18,r1,96
	ctx.r18.s64 = ctx.r1.s64 + 96;
	// bl 0x82816528
	ctx.lr = 0x82558AC8;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x82558ADC;
	sub_8284DA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558b14
	if (ctx.cr0.eq) goto loc_82558B14;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r5,6844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6844);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82558B14;
	sub_8282B1E0(ctx, base);
loc_82558B14:
	// lwz r11,7276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558d10
	if (!ctx.cr6.eq) goto loc_82558D10;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558d10
	if (!ctx.cr6.eq) goto loc_82558D10;
	// lwz r11,10632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558ba0
	if (ctx.cr6.eq) goto loc_82558BA0;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82558B44;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82558b90
	if (ctx.cr0.eq) goto loc_82558B90;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82558b70
	if (ctx.cr6.eq) goto loc_82558B70;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82558B64;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82558B68;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82558b74
	goto loc_82558B74;
loc_82558B70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558B74:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8098
	ctx.lr = 0x82558B80;
	sub_827E8098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// b 0x82558b94
	goto loc_82558B94;
loc_82558B90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558B94:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82558BA0;
	sub_82833A30(ctx, base);
loc_82558BA0:
	// stfs f31,7308(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7308, temp.u32);
	// stw r22,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x82558BB4;
	sub_8233A258(ctx, base);
	// lis r4,13869
	ctx.r4.s64 = 908918784;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,43133
	ctx.r4.u64 = ctx.r4.u64 | 43133;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82558BC8;
	sub_829C3740(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82558c44
	if (!ctx.cr6.eq) goto loc_82558C44;
	// lwz r30,1608(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8239f0b8
	ctx.lr = 0x82558BDC;
	sub_8239F0B8(ctx, base);
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
	ctx.lr = 0x82558BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwa r11,7132(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 7132));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfs f0,30996(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 30996);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,7132
	ctx.r12.s64 = 7132;
	// stfiwx f13,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f13.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fadds f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_82558C44:
	// lfs f13,7004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,7172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7172);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,7004(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7004, temp.u32);
	// lfs f13,6996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	ctx.f13.f64 = double(temp.f32);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lfs f12,6992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,7000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,6992(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6992, temp.u32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// stfs f13,6996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6996, temp.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7188);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x8255b408
	ctx.lr = 0x82558CA4;
	sub_8255B408(ctx, base);
	// lwz r11,6836(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558d10
	if (ctx.cr6.eq) goto loc_82558D10;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-6692
	ctx.r3.s64 = ctx.r11.s64 + -6692;
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// bl 0x82816528
	ctx.lr = 0x82558CC4;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x82558CD8;
	sub_8284DA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558d10
	if (ctx.cr0.eq) goto loc_82558D10;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r5,6836(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82558D10;
	sub_8282B1E0(ctx, base);
loc_82558D10:
	// lwz r11,7280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558e58
	if (!ctx.cr6.eq) goto loc_82558E58;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558e58
	if (!ctx.cr6.eq) goto loc_82558E58;
	// lwz r11,10632(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558da0
	if (ctx.cr6.eq) goto loc_82558DA0;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82558D44;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82558d90
	if (ctx.cr0.eq) goto loc_82558D90;
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82558d70
	if (ctx.cr6.eq) goto loc_82558D70;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82558D64;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82558D68;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82558d74
	goto loc_82558D74;
loc_82558D70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558D74:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8098
	ctx.lr = 0x82558D80;
	sub_827E8098(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r22,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r22.u32);
	// b 0x82558d94
	goto loc_82558D94;
loc_82558D90:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82558D94:
	// lwz r11,13024(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82558DA0;
	sub_82833A30(ctx, base);
loc_82558DA0:
	// stfs f31,7312(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7312, temp.u32);
	// stw r22,7280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7280, ctx.r22.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a258
	ctx.lr = 0x82558DB4;
	sub_8233A258(ctx, base);
	// lis r4,8952
	ctx.r4.s64 = 586678272;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,6615
	ctx.r4.u64 = ctx.r4.u64 | 6615;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x82558DC8;
	sub_829C3740(ctx, base);
	// lwz r11,7180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7196);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6840);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82558e58
	if (ctx.cr6.eq) goto loc_82558E58;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-6680
	ctx.r3.s64 = ctx.r11.s64 + -6680;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// bl 0x82816528
	ctx.lr = 0x82558E0C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8284da30
	ctx.lr = 0x82558E20;
	sub_8284DA30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82558e58
	if (ctx.cr0.eq) goto loc_82558E58;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r5,6840(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6840);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82558E58;
	sub_8282B1E0(ctx, base);
loc_82558E58:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82558ec4
	if (ctx.cr6.eq) goto loc_82558EC4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82558eac
	if (!ctx.cr6.eq) goto loc_82558EAC;
	// lwz r11,7276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558eac
	if (ctx.cr6.eq) goto loc_82558EAC;
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558eac
	if (ctx.cr6.eq) goto loc_82558EAC;
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558eac
	if (ctx.cr6.eq) goto loc_82558EAC;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82558ea4
	if (!ctx.cr6.eq) goto loc_82558EA4;
	// lwz r3,7180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// b 0x82558ea8
	goto loc_82558EA8;
loc_82558EA4:
	// lwz r3,7196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7196);
loc_82558EA8:
	// bl 0x8281d650
	ctx.lr = 0x82558EAC;
	sub_8281D650(ctx, base);
loc_82558EAC:
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82558ec4
	if (ctx.cr6.eq) goto loc_82558EC4;
	// stfs f31,7504(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7504, temp.u32);
	// stw r20,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r20.u32);
	// stw r22,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r22.u32);
loc_82558EC4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x824116b0
	ctx.lr = 0x82558ECC;
	sub_824116B0(ctx, base);
	// stw r29,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r29.u32);
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82558ee0
	if (!ctx.cr6.eq) goto loc_82558EE0;
	// stw r29,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r29.u32);
loc_82558EE0:
	// lfs f30,6764(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6764);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x82558f1c
	if (!ctx.cr6.gt) goto loc_82558F1C;
	// lwz r11,64(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 64);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82558f1c
	if (ctx.cr0.eq) goto loc_82558F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1724);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82558F10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x824e5358
	ctx.lr = 0x82558F1C;
	sub_824E5358(ctx, base);
loc_82558F1C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82a4ea30
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82558F30"))) PPC_WEAK_FUNC(sub_82558F30);
PPC_FUNC_IMPL(__imp__sub_82558F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9e4
	ctx.lr = 0x82558F38;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x824116b0
	ctx.lr = 0x82558F58;
	sub_824116B0(ctx, base);
	// lwz r11,24(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,28(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,32(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x8281d960
	ctx.lr = 0x82558F7C;
	sub_8281D960(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82558fa0
	if (ctx.cr0.eq) goto loc_82558FA0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82558F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82558fa4
	goto loc_82558FA4;
loc_82558FA0:
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82558FA4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332988
	ctx.lr = 0x82558FAC;
	sub_82332988(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,7216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7216);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7220);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7224);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8255900c
	if (ctx.cr6.eq) goto loc_8255900C;
	// lwz r11,7240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82559010
	if (!ctx.cr6.eq) goto loc_82559010;
loc_8255900C:
	// stfs f31,7092(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7092, temp.u32);
loc_82559010:
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8255905c
	if (ctx.cr6.eq) goto loc_8255905C;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255905c
	if (!ctx.cr6.eq) goto loc_8255905C;
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// stw r23,7052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7052, ctx.r23.u32);
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r27,7064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7064, ctx.r27.u32);
	// stw r10,7060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7060, ctx.r10.u32);
	// bne cr6,0x8255905c
	if (!ctx.cr6.eq) goto loc_8255905C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824395b8
	ctx.lr = 0x8255904C;
	sub_824395B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82331078
	ctx.lr = 0x82559058;
	sub_82331078(ctx, base);
	// stw r3,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r3.u32);
loc_8255905C:
	// lwz r11,7076(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7076);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255912c
	if (!ctx.cr6.eq) goto loc_8255912C;
	// lfs f0,7068(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7068);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255912c
	if (ctx.cr6.gt) goto loc_8255912C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8255912c
	if (ctx.cr6.eq) goto loc_8255912C;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8255912c
	if (!ctx.cr6.eq) goto loc_8255912C;
	// lwz r11,7492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255912c
	if (ctx.cr6.eq) goto loc_8255912C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6668
	ctx.r3.s64 = ctx.r11.s64 + -6668;
	// bl 0x82816528
	ctx.lr = 0x825590A4;
	sub_82816528(ctx, base);
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x825590B4;
	sub_829B98F8(ctx, base);
	// bl 0x824f6598
	ctx.lr = 0x825590B8;
	sub_824F6598(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8255912c
	if (ctx.cr0.eq) goto loc_8255912C;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x825590C8;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255910c
	if (ctx.cr0.eq) goto loc_8255910C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r24,80(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x825590E0;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// addi r11,r11,-3552
	ctx.r11.s64 = ctx.r11.s64 + -3552;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// b 0x82559110
	goto loc_82559110;
loc_8255910C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82559110:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255911C;
	sub_82833A30(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r23,7076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7076, ctx.r23.u32);
	// lfs f0,-12104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
loc_8255912C:
	// lwz r11,460(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 460);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82559470
	if (ctx.cr0.eq) goto loc_82559470;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82559470
	if (ctx.cr6.eq) goto loc_82559470;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x824f6598
	ctx.lr = 0x82559148;
	sub_824F6598(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8239b148
	ctx.lr = 0x82559150;
	sub_8239B148(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bne 0x82559178
	if (!ctx.cr0.eq) goto loc_82559178;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82559178:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8255bb18
	ctx.lr = 0x82559180;
	sub_8255BB18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x825591a4
	if (!ctx.cr6.eq) goto loc_825591A4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x825591a4
	if (!ctx.cr6.eq) goto loc_825591A4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x825591a4
	if (!ctx.cr6.eq) goto loc_825591A4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82559468
	if (ctx.cr6.eq) goto loc_82559468;
loc_825591A4:
	// lwz r11,6864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559204
	if (ctx.cr6.eq) goto loc_82559204;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x825591c0
	if (!ctx.cr6.eq) goto loc_825591C0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82559204
	if (ctx.cr6.eq) goto loc_82559204;
loc_825591C0:
	// addi r4,r22,16
	ctx.r4.s64 = ctx.r22.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x825591CC;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6864(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6864);
	// ld r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r22.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82559200;
	sub_8282B1E0(ctx, base);
	// b 0x82559260
	goto loc_82559260;
loc_82559204:
	// lwz r11,6868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82559260
	if (ctx.cr6.eq) goto loc_82559260;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82559220
	if (!ctx.cr6.eq) goto loc_82559220;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82559260
	if (ctx.cr6.eq) goto loc_82559260;
loc_82559220:
	// addi r4,r22,16
	ctx.r4.s64 = ctx.r22.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x8255922C;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6868(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6868);
	// ld r7,4(r22)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r22.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82559260;
	sub_8282B1E0(ctx, base);
loc_82559260:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82559798
	ctx.lr = 0x82559268;
	sub_82559798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82559458
	if (ctx.cr6.eq) goto loc_82559458;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82559284
	if (ctx.cr6.eq) goto loc_82559284;
	// lfs f0,6992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825592b0
	goto loc_825592B0;
loc_82559284:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82559294
	if (ctx.cr6.eq) goto loc_82559294;
	// lfs f0,6996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825592b0
	goto loc_825592B0;
loc_82559294:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x825592a4
	if (ctx.cr6.eq) goto loc_825592A4;
	// lfs f0,7004(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825592b0
	goto loc_825592B0;
loc_825592A4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x825592c4
	if (ctx.cr6.eq) goto loc_825592C4;
	// lfs f0,7000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
loc_825592B0:
	// addi r11,r30,1827
	ctx.r11.s64 = ctx.r30.s64 + 1827;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_825592C4:
	// addi r11,r30,1827
	ctx.r11.s64 = ctx.r30.s64 + 1827;
	// addi r10,r30,1823
	ctx.r10.s64 = ctx.r30.s64 + 1823;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82559458
	if (ctx.cr6.lt) goto loc_82559458;
	// bl 0x825357f8
	ctx.lr = 0x825592E8;
	sub_825357F8(ctx, base);
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// mulli r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 * 24;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823339b8
	ctx.lr = 0x82559304;
	sub_823339B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x824ef870
	ctx.lr = 0x82559320;
	sub_824EF870(ctx, base);
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// bl 0x82335650
	ctx.lr = 0x82559340;
	sub_82335650(ctx, base);
	// stw r23,244(r28)
	PPC_STORE_U32(ctx.r28.u32 + 244, ctx.r23.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559360;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,1722
	ctx.r11.s64 = ctx.r30.s64 + 1722;
	// lwz r10,13024(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// stw r11,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r11.u32);
	// lwz r10,788(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 788);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82559388
	if (ctx.cr6.eq) goto loc_82559388;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82559394
	if (!ctx.cr6.eq) goto loc_82559394;
loc_82559388:
	// addi r10,r30,1290
	ctx.r10.s64 = ctx.r30.s64 + 1290;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_82559394:
	// addi r11,r30,1835
	ctx.r11.s64 = ctx.r30.s64 + 1835;
	// stfsx f31,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x825593b4
	if (!ctx.cr6.lt) goto loc_825593B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r28,r31
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r11.u32);
loc_825593B4:
	// addi r10,r30,613
	ctx.r10.s64 = ctx.r30.s64 + 613;
	// lwzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r27,r30,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// lwz r8,5288(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r9,1112(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1112);
	// lwzx r26,r27,r8
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r29,r11,r31
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x825593F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r26,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r26.s64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x82559400;
	sub_8289F1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r10,r28,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// mulli r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 * 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,1838
	ctx.r11.s64 = ctx.r11.s64 + 1838;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f45f0
	ctx.lr = 0x82559438;
	sub_824F45F0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82559458
	if (!ctx.cr6.eq) goto loc_82559458;
	// addi r11,r30,1300
	ctx.r11.s64 = ctx.r30.s64 + 1300;
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r27,r10
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r29,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r29.u32);
loc_82559458:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82559470
	if (!ctx.cr6.eq) goto loc_82559470;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82559470
	if (!ctx.cr6.eq) goto loc_82559470;
loc_82559468:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82559484
	goto loc_82559484;
loc_82559470:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504e58
	ctx.lr = 0x82559484;
	sub_82504E58(ctx, base);
loc_82559484:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82a4ea34
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559490"))) PPC_WEAK_FUNC(sub_82559490);
PPC_FUNC_IMPL(__imp__sub_82559490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82559498;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,7244(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825595b0
	if (ctx.cr6.eq) goto loc_825595B0;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x825594BC;
	sub_82A4EA80(ctx, base);
	// lfs f0,7112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7112);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f13,7116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7120);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fadds f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fadds f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// lfs f8,7124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7124);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r31,7112
	ctx.r11.s64 = ctx.r31.s64 + 7112;
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r25,100(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// blt cr6,0x82559594
	if (ctx.cr6.lt) goto loc_82559594;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// addi r8,r10,-21728
	ctx.r8.s64 = ctx.r10.s64 + -21728;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// addi r7,r9,-21716
	ctx.r7.s64 = ctx.r9.s64 + -21716;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r29,-21728(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21728);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-27504
	ctx.r4.s64 = ctx.r11.s64 + -27504;
	// lwz r26,-21716(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21716);
	// lwz r28,4(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r27,8(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r25,4(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r24,8(r7)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82559594:
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// stw r29,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r29.u32);
	// stw r28,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r28.u32);
	// stw r27,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r27.u32);
	// stw r26,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r26.u32);
	// stw r25,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r25.u32);
	// stw r24,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r24.u32);
loc_825595B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825595B8"))) PPC_WEAK_FUNC(sub_825595B8);
PPC_FUNC_IMPL(__imp__sub_825595B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x825595C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x824f01f0
	ctx.lr = 0x825595D4;
	sub_824F01F0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82559610
	if (ctx.cr6.lt) goto loc_82559610;
	// beq cr6,0x82559604
	if (ctx.cr6.eq) goto loc_82559604;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x825595f8
	if (ctx.cr6.lt) goto loc_825595F8;
	// bne cr6,0x82559790
	if (!ctx.cr6.eq) goto loc_82559790;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6604
	ctx.r3.s64 = ctx.r11.s64 + -6604;
	// b 0x82559618
	goto loc_82559618;
loc_825595F8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6624
	ctx.r3.s64 = ctx.r11.s64 + -6624;
	// b 0x82559618
	goto loc_82559618;
loc_82559604:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6644
	ctx.r3.s64 = ctx.r11.s64 + -6644;
	// b 0x82559618
	goto loc_82559618;
loc_82559610:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
loc_82559618:
	// bl 0x82816528
	ctx.lr = 0x8255961C;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm. r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// beq 0x825596ac
	if (ctx.cr0.eq) goto loc_825596AC;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10636(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10636);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825596ac
	if (ctx.cr6.eq) goto loc_825596AC;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82833108
	ctx.lr = 0x82559648;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255969c
	if (ctx.cr0.eq) goto loc_8255969C;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82559674
	if (ctx.cr6.eq) goto loc_82559674;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82559668;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255966C;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82559678
	goto loc_82559678;
loc_82559674:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82559678:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827e8098
	ctx.lr = 0x82559684;
	sub_827E8098(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-25824
	ctx.r11.s64 = ctx.r11.s64 + -25824;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x825596a0
	goto loc_825596A0;
loc_8255969C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_825596A0:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x825596AC;
	sub_82833A30(ctx, base);
loc_825596AC:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255974c
	if (ctx.cr0.eq) goto loc_8255974C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8284da30
	ctx.lr = 0x825596C8;
	sub_8284DA30(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82559714
	if (ctx.cr6.lt) goto loc_82559714;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bge cr6,0x8255974c
	if (!ctx.cr6.lt) goto loc_8255974C;
	// lwz r5,6832(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6832);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255974c
	if (ctx.cr6.eq) goto loc_8255974C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,16
	ctx.r4.s64 = 16;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x82559710;
	sub_8282B1E0(ctx, base);
	// b 0x8255974c
	goto loc_8255974C;
loc_82559714:
	// lwz r5,6828(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6828);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255974c
	if (ctx.cr6.eq) goto loc_8255974C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,16
	ctx.r4.s64 = 16;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8255974C;
	sub_8282B1E0(ctx, base);
loc_8255974C:
	// rlwinm. r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82559790
	if (ctx.cr0.eq) goto loc_82559790;
	// lwz r11,6824(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559768
	if (!ctx.cr6.eq) goto loc_82559768;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82559774
	goto loc_82559774;
loc_82559768:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,7508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 7508, ctx.r10.u32);
loc_82559774:
	// stw r11,6824(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6824, ctx.r11.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7504(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 7504, temp.u32);
	// bl 0x8255afe0
	ctx.lr = 0x82559790;
	sub_8255AFE0(ctx, base);
loc_82559790:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559798"))) PPC_WEAK_FUNC(sub_82559798);
PPC_FUNC_IMPL(__imp__sub_82559798) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4344
	ctx.r4.s64 = ctx.r31.s64 + 4344;
	// li r30,-1
	ctx.r30.s64 = -1;
	// bl 0x82332f10
	ctx.lr = 0x825597C0;
	sub_82332F10(ctx, base);
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82559840
	if (!ctx.cr6.eq) goto loc_82559840;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825597e4
	if (!ctx.cr6.eq) goto loc_825597E4;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82559840
	goto loc_82559840;
loc_825597E4:
	// lwz r10,7280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82559804
	if (!ctx.cr6.eq) goto loc_82559804;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82559804
	if (!ctx.cr6.eq) goto loc_82559804;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82559840
	goto loc_82559840;
loc_82559804:
	// lwz r10,7284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82559824
	if (!ctx.cr6.eq) goto loc_82559824;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82559824
	if (!ctx.cr6.eq) goto loc_82559824;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82559840
	goto loc_82559840;
loc_82559824:
	// lwz r10,7276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82559840
	if (!ctx.cr6.eq) goto loc_82559840;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559840
	if (!ctx.cr6.eq) goto loc_82559840;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82559840:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332e90
	ctx.lr = 0x82559848;
	sub_82332E90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82559868"))) PPC_WEAK_FUNC(sub_82559868);
PPC_FUNC_IMPL(__imp__sub_82559868) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825598f8
	if (!ctx.cr6.eq) goto loc_825598F8;
	// addi r4,r31,4344
	ctx.r4.s64 = ctx.r31.s64 + 4344;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332f10
	ctx.lr = 0x8255989C;
	sub_82332F10(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze. r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x825598f0
	if (!ctx.cr0.gt) goto loc_825598F0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r31,7276
	ctx.r11.s64 = ctx.r31.s64 + 7276;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
loc_825598B8:
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x825598e0
	if (ctx.cr6.eq) goto loc_825598E0;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x825598e0
	if (!ctx.cr6.eq) goto loc_825598E0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x825598e0
	if (!ctx.cr6.eq) goto loc_825598E0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825598E0:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// bne 0x825598b8
	if (!ctx.cr0.eq) goto loc_825598B8;
loc_825598F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332e90
	ctx.lr = 0x825598F8;
	sub_82332E90(ctx, base);
loc_825598F8:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f13,6992(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82559928
	if (ctx.cr6.gt) goto loc_82559928;
	// lfs f13,7000(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82559928
	if (ctx.cr6.gt) goto loc_82559928;
	// lfs f13,7004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8255992c
	if (!ctx.cr6.gt) goto loc_8255992C;
loc_82559928:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8255992C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82559940
	if (ctx.cr6.eq) goto loc_82559940;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82559944
	if (!ctx.cr6.eq) goto loc_82559944;
loc_82559940:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82559944:
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

__attribute__((alias("__imp__sub_82559960"))) PPC_WEAK_FUNC(sub_82559960);
PPC_FUNC_IMPL(__imp__sub_82559960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82559968;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r30,64(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-6584
	ctx.r3.s64 = ctx.r11.s64 + -6584;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82816528
	ctx.lr = 0x82559984;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559a5c
	if (!ctx.cr6.eq) goto loc_82559A5C;
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82559a04
	if (!ctx.cr6.eq) goto loc_82559A04;
	// lwz r3,7100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// bl 0x829c35d8
	ctx.lr = 0x825599A0;
	sub_829C35D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255b4b0
	ctx.lr = 0x825599AC;
	sub_8255B4B0(ctx, base);
	// lwz r11,7128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7128);
	// cmpwi cr6,r11,950
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 950, ctx.xer);
	// beq cr6,0x825599d8
	if (ctx.cr6.eq) goto loc_825599D8;
	// cmpwi cr6,r11,1900
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1900, ctx.xer);
	// beq cr6,0x825599d0
	if (ctx.cr6.eq) goto loc_825599D0;
	// cmpwi cr6,r11,3800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3800, ctx.xer);
	// bne cr6,0x825599d8
	if (!ctx.cr6.eq) goto loc_825599D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825599dc
	goto loc_825599DC;
loc_825599D0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825599dc
	goto loc_825599DC;
loc_825599D8:
	// li r11,3
	ctx.r11.s64 = 3;
loc_825599DC:
	// stw r11,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r11.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r11,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r11.u32);
	// stw r9,7144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7144, ctx.r9.u32);
	// stw r8,7148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7148, ctx.r8.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559A04:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82559a20
	if (ctx.cr6.eq) goto loc_82559A20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
loc_82559A20:
	// lwz r3,7100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// bl 0x829c35d8
	ctx.lr = 0x82559A28;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82559ef4
	if (ctx.cr0.eq) goto loc_82559EF4;
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r11,1492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lwz r10,620(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// lwz r9,624(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r8,628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r10,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
	// stw r8,176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 176, ctx.r8.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559A5C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6552
	ctx.r3.s64 = ctx.r11.s64 + -6552;
	// bl 0x82816528
	ctx.lr = 0x82559A68;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559dc0
	if (ctx.cr6.eq) goto loc_82559DC0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6524
	ctx.r3.s64 = ctx.r11.s64 + -6524;
	// bl 0x82816528
	ctx.lr = 0x82559A7C;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559dc0
	if (ctx.cr6.eq) goto loc_82559DC0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6496
	ctx.r3.s64 = ctx.r11.s64 + -6496;
	// bl 0x82816528
	ctx.lr = 0x82559A90;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559dc0
	if (ctx.cr6.eq) goto loc_82559DC0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6468
	ctx.r3.s64 = ctx.r11.s64 + -6468;
	// bl 0x82816528
	ctx.lr = 0x82559AA4;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559b28
	if (!ctx.cr6.eq) goto loc_82559B28;
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r10.u32);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lwz r11,7056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lwz r4,7060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7060);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82559AE8;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82559AEC;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82559b20
	if (ctx.cr0.eq) goto loc_82559B20;
	// bl 0x82332278
	ctx.lr = 0x82559AF8;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x82559B10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82559b20
	if (!ctx.cr0.eq) goto loc_82559B20;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r11.u32);
loc_82559B20:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82559ef0
	goto loc_82559EF0;
loc_82559B28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6432
	ctx.r3.s64 = ctx.r11.s64 + -6432;
	// bl 0x82816528
	ctx.lr = 0x82559B34;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559bb4
	if (!ctx.cr6.eq) goto loc_82559BB4;
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r10.u32);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lwz r11,7056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lwz r4,7060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7060);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82559b20
	if (ctx.cr6.eq) goto loc_82559B20;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82559B78;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82559B7C;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82559b20
	if (ctx.cr0.eq) goto loc_82559B20;
	// bl 0x82332278
	ctx.lr = 0x82559B88;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x82559BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82559b20
	if (!ctx.cr0.eq) goto loc_82559B20;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// b 0x82559b20
	goto loc_82559B20;
loc_82559BB4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6396
	ctx.r3.s64 = ctx.r11.s64 + -6396;
	// bl 0x82816528
	ctx.lr = 0x82559BC0;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559d60
	if (ctx.cr6.eq) goto loc_82559D60;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6364
	ctx.r3.s64 = ctx.r11.s64 + -6364;
	// bl 0x82816528
	ctx.lr = 0x82559BD4;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559d60
	if (ctx.cr6.eq) goto loc_82559D60;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6332
	ctx.r3.s64 = ctx.r11.s64 + -6332;
	// bl 0x82816528
	ctx.lr = 0x82559BE8;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559d20
	if (ctx.cr6.eq) goto loc_82559D20;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6296
	ctx.r3.s64 = ctx.r11.s64 + -6296;
	// bl 0x82816528
	ctx.lr = 0x82559BFC;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559d20
	if (ctx.cr6.eq) goto loc_82559D20;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6264
	ctx.r3.s64 = ctx.r11.s64 + -6264;
	// bl 0x82816528
	ctx.lr = 0x82559C10;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559ce0
	if (ctx.cr6.eq) goto loc_82559CE0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6228
	ctx.r3.s64 = ctx.r11.s64 + -6228;
	// bl 0x82816528
	ctx.lr = 0x82559C24;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82559ce0
	if (ctx.cr6.eq) goto loc_82559CE0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6196
	ctx.r3.s64 = ctx.r11.s64 + -6196;
	// bl 0x82816528
	ctx.lr = 0x82559C38;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559c4c
	if (!ctx.cr6.eq) goto loc_82559C4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r11.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559C4C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6168
	ctx.r3.s64 = ctx.r11.s64 + -6168;
	// bl 0x82816528
	ctx.lr = 0x82559C58;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559c94
	if (!ctx.cr6.eq) goto loc_82559C94;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82559c94
	if (!ctx.cr6.eq) goto loc_82559C94;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255afe0
	ctx.lr = 0x82559C80;
	sub_8255AFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255b408
	ctx.lr = 0x82559C88;
	sub_8255B408(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82559cd8
	goto loc_82559CD8;
loc_82559C94:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6140
	ctx.r3.s64 = ctx.r11.s64 + -6140;
	// bl 0x82816528
	ctx.lr = 0x82559CA0;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82559ef4
	if (!ctx.cr6.eq) goto loc_82559EF4;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82559ef4
	if (!ctx.cr6.eq) goto loc_82559EF4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255afe0
	ctx.lr = 0x82559CC8;
	sub_8255AFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255b408
	ctx.lr = 0x82559CD0;
	sub_8255B408(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,-11424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11424);
	ctx.f0.f64 = double(temp.f32);
loc_82559CD8:
	// stfs f0,3948(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559CE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559CF4;
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
	ctx.lr = 0x82559D0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r10.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559D20:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559D34;
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
	ctx.lr = 0x82559D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,6812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6812, ctx.r10.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559D60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559D74;
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
	ctx.lr = 0x82559D8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,7168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82559dac
	if (!ctx.cr6.eq) goto loc_82559DAC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r11.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559DAC:
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82559ef4
	if (ctx.cr6.eq) goto loc_82559EF4;
	// stw r11,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r11.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559DC0:
	// lwz r11,7168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7168);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82559eec
	if (!ctx.cr6.eq) goto loc_82559EEC;
	// lwz r11,7052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7052);
	// li r29,4
	ctx.r29.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r29.u32);
	// beq cr6,0x82559e40
	if (ctx.cr6.eq) goto loc_82559E40;
	// lwz r11,7056(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7056);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82559e40
	if (ctx.cr6.eq) goto loc_82559E40;
	// lwz r4,7060(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7060);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82559e40
	if (ctx.cr6.eq) goto loc_82559E40;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82559E08;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82559E0C;
	sub_82416348(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82559e40
	if (ctx.cr0.eq) goto loc_82559E40;
	// bl 0x82332278
	ctx.lr = 0x82559E18;
	sub_82332278(ctx, base);
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
	ctx.lr = 0x82559E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82559e40
	if (!ctx.cr0.eq) goto loc_82559E40;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r11.u32);
loc_82559E40:
	// lfs f0,620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f13,7140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7140);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,7144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7144);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-32516
	ctx.r11.s64 = ctx.r11.s64 + -32516;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,-272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -272);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82559e84
	if (ctx.cr6.lt) goto loc_82559E84;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r11.u32);
	// b 0x82559ee4
	goto loc_82559EE4;
loc_82559E84:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,7100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// stw r11,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r11.u32);
	// bl 0x829c35d8
	ctx.lr = 0x82559E94;
	sub_829C35D8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82559eb8
	if (ctx.cr0.eq) goto loc_82559EB8;
	// lwz r11,620(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 620);
	// stw r11,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r11.u32);
	// lwz r11,624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// stw r11,7156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7156, ctx.r11.u32);
	// lwz r11,628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// stw r11,7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7160, ctx.r11.u32);
	// b 0x82559ee4
	goto loc_82559EE4;
loc_82559EB8:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r11.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,7160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7160, ctx.r9.u32);
	// stw r10,7156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7156, ctx.r10.u32);
loc_82559EE4:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// b 0x82559ef4
	goto loc_82559EF4;
loc_82559EEC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82559EF0:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82559EF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82559F00"))) PPC_WEAK_FUNC(sub_82559F00);
PPC_FUNC_IMPL(__imp__sub_82559F00) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6908, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82559F10"))) PPC_WEAK_FUNC(sub_82559F10);
PPC_FUNC_IMPL(__imp__sub_82559F10) {
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
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82500890
	ctx.lr = 0x82559F34;
	sub_82500890(ctx, base);
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,2732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 2732);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,27704
	ctx.r11.s64 = ctx.r11.s64 + 27704;
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
	// bl 0x824f64a0
	ctx.lr = 0x82559F60;
	sub_824F64A0(ctx, base);
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

__attribute__((alias("__imp__sub_82559F78"))) PPC_WEAK_FUNC(sub_82559F78);
PPC_FUNC_IMPL(__imp__sub_82559F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82559F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
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
loc_82559FA8:
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8255a00c
	if (!ctx.cr6.lt) goto loc_8255A00C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82541150
	ctx.lr = 0x82559FC0;
	sub_82541150(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82559fd0
	if (!ctx.cr0.eq) goto loc_82559FD0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x82559fa8
	goto loc_82559FA8;
loc_82559FD0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82541150
	ctx.lr = 0x82559FD8;
	sub_82541150(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,136(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82559FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_8255A00C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255A018"))) PPC_WEAK_FUNC(sub_8255A018);
PPC_FUNC_IMPL(__imp__sub_8255A018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8255A020;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x824ffa88
	ctx.lr = 0x8255A03C;
	sub_824FFA88(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,7068(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7068);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a058
	if (!ctx.cr6.gt) goto loc_8255A058;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
loc_8255A058:
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r27,-32216
	ctx.r27.s64 = -2111307776;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8255a15c
	if (!ctx.cr6.eq) goto loc_8255A15C;
	// lwz r10,432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x8255a15c
	if (!ctx.cr6.lt) goto loc_8255A15C;
	// lwz r10,7080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7080);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255a15c
	if (ctx.cr6.eq) goto loc_8255A15C;
	// lfs f0,7072(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7072);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f0,-12104(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,7072(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7072, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8255a0b0
	if (!ctx.cr6.lt) goto loc_8255A0B0;
	// lwz r10,7088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7088);
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// blt cr6,0x8255a15c
	if (ctx.cr6.lt) goto loc_8255A15C;
loc_8255A0B0:
	// stfs f31,7072(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7072, temp.u32);
	// stw r25,7080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7080, ctx.r25.u32);
	// stw r25,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r25.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r25,7084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7084, ctx.r25.u32);
	// addi r3,r11,-6668
	ctx.r3.s64 = ctx.r11.s64 + -6668;
	// bl 0x82816528
	ctx.lr = 0x8255A0CC;
	sub_82816528(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b98f8
	ctx.lr = 0x8255A0DC;
	sub_829B98F8(ctx, base);
	// bl 0x824f6598
	ctx.lr = 0x8255A0E0;
	sub_824F6598(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8255A0EC;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255a140
	if (ctx.cr0.eq) goto loc_8255A140;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8255a104
	if (ctx.cr6.eq) goto loc_8255A104;
	// lwz r29,80(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// b 0x8255a108
	goto loc_8255A108;
loc_8255A104:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8255A108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,80(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82833180
	ctx.lr = 0x8255A114;
	sub_82833180(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// addi r11,r11,-3448
	ctx.r11.s64 = ctx.r11.s64 + -3448;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// b 0x8255a144
	goto loc_8255A144;
loc_8255A140:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8255A144:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255A150;
	sub_82833A30(ctx, base);
	// lfs f0,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// stfs f0,7068(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7068, temp.u32);
loc_8255A15C:
	// lfs f0,7108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a174
	if (!ctx.cr6.gt) goto loc_8255A174;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7108, temp.u32);
	// b 0x8255a19c
	goto loc_8255A19C;
loc_8255A174:
	// lfs f0,7092(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8255a188
	if (ctx.cr6.lt) goto loc_8255A188;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,7092(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7092, temp.u32);
loc_8255A188:
	// lfs f0,7096(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7096);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8255a19c
	if (ctx.cr6.lt) goto loc_8255A19C;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,7096(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7096, temp.u32);
loc_8255A19C:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,7492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7492);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f29,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// bne cr6,0x8255ac54
	if (!ctx.cr6.eq) goto loc_8255AC54;
	// lfs f0,7404(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7404);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a2a8
	if (!ctx.cr6.gt) goto loc_8255A2A8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7404, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r26,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r26.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-32720
	ctx.r10.s64 = ctx.r10.s64 + -32720;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f0,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7408, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255A1FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255afe0
	ctx.lr = 0x8255A208;
	sub_8255AFE0(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255a228
	if (ctx.cr6.eq) goto loc_8255A228;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255A220;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255A224;
	sub_82409C40(ctx, base);
	// b 0x8255a22c
	goto loc_8255A22C;
loc_8255A228:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8255A22C:
	// bl 0x82438430
	ctx.lr = 0x8255A230;
	sub_82438430(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255a23c
	if (ctx.cr0.eq) goto loc_8255A23C;
	// bl 0x82628f68
	ctx.lr = 0x8255A23C;
	sub_82628F68(ctx, base);
loc_8255A23C:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82833108
	ctx.lr = 0x8255A244;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255a294
	if (ctx.cr0.eq) goto loc_8255A294;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255a270
	if (ctx.cr6.eq) goto loc_8255A270;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8255A264;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8255A268;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8255a274
	goto loc_8255A274;
loc_8255A270:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8255A274:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827e8098
	ctx.lr = 0x8255A280;
	sub_827E8098(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-25448
	ctx.r11.s64 = ctx.r11.s64 + -25448;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8255a298
	goto loc_8255A298;
loc_8255A294:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8255A298:
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8255A2A4;
	sub_82833A30(ctx, base);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A2A8:
	// lfs f0,7408(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7408);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a2f4
	if (!ctx.cr6.gt) goto loc_8255A2F4;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7408(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7408, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r4,512
	ctx.r4.s64 = 512;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r11,r10,-29284
	ctx.r11.s64 = ctx.r10.s64 + -29284;
	// lfs f1,-11528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11528);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829badb0
	ctx.lr = 0x8255A2E0;
	sub_829BADB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-32720
	ctx.r11.s64 = ctx.r11.s64 + -32720;
	// lfs f0,156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7412, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A2F4:
	// lfs f0,7412(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a388
	if (!ctx.cr6.gt) goto loc_8255A388;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7412, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A31C;
	sub_82816528(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r10,-32720
	ctx.r30.s64 = ctx.r10.s64 + -32720;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A340;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A34C;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f3,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,20376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A36C;
	sub_82980630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,7496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A37C;
	sub_8255ACC8(ctx, base);
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7416, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A388:
	// lfs f0,7416(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a460
	if (!ctx.cr6.gt) goto loc_8255A460;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7416(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7416, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A3B0;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f2,20372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20372);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A3D4;
	sub_82980630(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A3E0;
	sub_82816528(ctx, base);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f1,-32720(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A400;
	sub_82980630(ctx, base);
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a454
	if (ctx.cr6.eq) goto loc_8255A454;
	// lwz r30,56(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8255a454
	if (!ctx.cr6.gt) goto loc_8255A454;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,-6092
	ctx.r28.s64 = ctx.r11.s64 + -6092;
loc_8255A428:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r24,0(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8255A434;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x8255A448;
	sub_82965458(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8255a428
	if (!ctx.cr0.eq) goto loc_8255A428;
loc_8255A454:
	// lfs f0,-32720(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7420, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A460:
	// lfs f0,7420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a4a0
	if (!ctx.cr6.gt) goto loc_8255A4A0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7420, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r5,7500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A48C;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-32720
	ctx.r11.s64 = ctx.r11.s64 + -32720;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7424, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A4A0:
	// lfs f0,7424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a588
	if (!ctx.cr6.gt) goto loc_8255A588;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7424, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A4C8;
	sub_82816528(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r30,r11,-29284
	ctx.r30.s64 = ctx.r11.s64 + -29284;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f3,20372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A4F0;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A4FC;
	sub_82816528(ctx, base);
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x8255A518;
	sub_82980630(ctx, base);
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255a56c
	if (ctx.cr6.eq) goto loc_8255A56C;
	// lwz r29,56(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r28,52(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8255a56c
	if (!ctx.cr6.gt) goto loc_8255A56C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r27,r11,-6092
	ctx.r27.s64 = ctx.r11.s64 + -6092;
loc_8255A540:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r24,0(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82816528
	ctx.lr = 0x8255A54C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x82965458
	ctx.lr = 0x8255A560;
	sub_82965458(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8255a540
	if (!ctx.cr0.eq) goto loc_8255A540;
loc_8255A56C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A57C;
	sub_8255ACC8(ctx, base);
	// lfs f0,-15836(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7428, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A588:
	// lfs f0,7428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7428);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a5c4
	if (!ctx.cr6.gt) goto loc_8255A5C4;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7428, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A5B4;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7432, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A5C4:
	// lfs f0,7432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7432);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a658
	if (!ctx.cr6.gt) goto loc_8255A658;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7432, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A5EC;
	sub_82816528(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r10,-32720
	ctx.r30.s64 = ctx.r10.s64 + -32720;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A610;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A61C;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f3,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,20376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A63C;
	sub_82980630(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,7496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A64C;
	sub_8255ACC8(ctx, base);
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7436, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A658:
	// lfs f0,7436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a6dc
	if (!ctx.cr6.gt) goto loc_8255A6DC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7436, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A680;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f2,20372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20372);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A6A4;
	sub_82980630(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A6B0;
	sub_82816528(ctx, base);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f1,-32720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A6D0;
	sub_82980630(ctx, base);
	// lfs f0,-32720(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7440, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A6DC:
	// lfs f0,7440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a71c
	if (!ctx.cr6.gt) goto loc_8255A71C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7440, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r5,7500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A708;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-32720
	ctx.r11.s64 = ctx.r11.s64 + -32720;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7444, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A71C:
	// lfs f0,7444(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a7b0
	if (!ctx.cr6.gt) goto loc_8255A7B0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7444, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A744;
	sub_82816528(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// addi r30,r10,-29284
	ctx.r30.s64 = ctx.r10.s64 + -29284;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f3,20372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A76C;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A778;
	sub_82816528(ctx, base);
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x8255A794;
	sub_82980630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A7A4;
	sub_8255ACC8(ctx, base);
	// lfs f0,-15836(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7448, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A7B0:
	// lfs f0,7448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a7ec
	if (!ctx.cr6.gt) goto loc_8255A7EC;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7448, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A7DC;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7472, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A7EC:
	// lfs f0,7472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7472);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a880
	if (!ctx.cr6.gt) goto loc_8255A880;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7472, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A814;
	sub_82816528(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r10,-32720
	ctx.r30.s64 = ctx.r10.s64 + -32720;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A838;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A844;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f3,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,20376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A864;
	sub_82980630(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,7496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A874;
	sub_8255ACC8(ctx, base);
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7476, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A880:
	// lfs f0,7476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a904
	if (!ctx.cr6.gt) goto loc_8255A904;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7476, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A8A8;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f2,20372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20372);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A8CC;
	sub_82980630(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255A8D8;
	sub_82816528(ctx, base);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f1,-32720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A8F8;
	sub_82980630(ctx, base);
	// lfs f0,-32720(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7480, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A904:
	// lfs f0,7480(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7480);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a944
	if (!ctx.cr6.gt) goto loc_8255A944;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7480, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,7500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A930;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-32720
	ctx.r11.s64 = ctx.r11.s64 + -32720;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7484, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A944:
	// lfs f0,7484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255a9d8
	if (!ctx.cr6.gt) goto loc_8255A9D8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7484, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255A96C;
	sub_82816528(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// addi r30,r10,-29284
	ctx.r30.s64 = ctx.r10.s64 + -29284;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f3,20372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255A994;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255A9A0;
	sub_82816528(ctx, base);
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x8255A9BC;
	sub_82980630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255A9CC;
	sub_8255ACC8(ctx, base);
	// lfs f0,-15836(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7488, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255A9D8:
	// lfs f0,7488(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255aa14
	if (!ctx.cr6.gt) goto loc_8255AA14;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7488, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255AA04;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7452, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255AA14:
	// lfs f0,7452(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255aaa8
	if (!ctx.cr6.gt) goto loc_8255AAA8;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7452, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255AA3C;
	sub_82816528(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r30,r10,-32720
	ctx.r30.s64 = ctx.r10.s64 + -32720;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255AA60;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255AA6C;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f3,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,20376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20376);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255AA8C;
	sub_82980630(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,7496(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255AA9C;
	sub_8255ACC8(ctx, base);
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7456, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255AAA8:
	// lfs f0,7456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255ab2c
	if (!ctx.cr6.gt) goto loc_8255AB2C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7456(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7456, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255AAD0;
	sub_82816528(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f2,20372(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20372);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-29284(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255AAF4;
	sub_82980630(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6112
	ctx.r3.s64 = ctx.r11.s64 + -6112;
	// bl 0x82816528
	ctx.lr = 0x8255AB00;
	sub_82816528(ctx, base);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f1,-32720(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255AB20;
	sub_82980630(ctx, base);
	// lfs f0,-32720(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -32720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7460, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255AB2C:
	// lfs f0,7460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255ab6c
	if (!ctx.cr6.gt) goto loc_8255AB6C;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7460(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7460, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r5,7500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7500);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255AB58;
	sub_8255ACC8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,-32720
	ctx.r11.s64 = ctx.r11.s64 + -32720;
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7464, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255AB6C:
	// lfs f0,7464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255ac00
	if (!ctx.cr6.gt) goto loc_8255AC00;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7464(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7464, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-6104
	ctx.r3.s64 = ctx.r11.s64 + -6104;
	// bl 0x82816528
	ctx.lr = 0x8255AB94;
	sub_82816528(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// addi r30,r10,-29284
	ctx.r30.s64 = ctx.r10.s64 + -29284;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f3,20372(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20372);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82980630
	ctx.lr = 0x8255ABBC;
	sub_82980630(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r11,15096
	ctx.r3.s64 = ctx.r11.s64 + 15096;
	// bl 0x82816528
	ctx.lr = 0x8255ABC8;
	sub_82816528(ctx, base);
	// lwz r11,7496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f2,-12104(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -12104);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// lfs f1,-15836(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82980630
	ctx.lr = 0x8255ABE4;
	sub_82980630(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255ABF4;
	sub_8255ACC8(ctx, base);
	// lfs f0,-15836(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -15836);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7468, temp.u32);
	// b 0x8255ac54
	goto loc_8255AC54;
loc_8255AC00:
	// lfs f0,7468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7468);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8255ac54
	if (!ctx.cr6.gt) goto loc_8255AC54;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,7468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7468, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255ac54
	if (ctx.cr6.gt) goto loc_8255AC54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255acc8
	ctx.lr = 0x8255AC2C;
	sub_8255ACC8(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255AC44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255afe0
	ctx.lr = 0x8255AC50;
	sub_8255AFE0(ctx, base);
	// stw r26,7492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7492, ctx.r26.u32);
loc_8255AC54:
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255ac88
	if (ctx.cr6.eq) goto loc_8255AC88;
	// lfs f0,7504(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7504);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f13,6972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6972);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,7504(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7504, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8255ac88
	if (ctx.cr6.lt) goto loc_8255AC88;
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,7504(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7504, temp.u32);
	// stw r26,7508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7508, ctx.r26.u32);
	// stw r11,6824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6824, ctx.r11.u32);
loc_8255AC88:
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255acb0
	if (ctx.cr6.eq) goto loc_8255ACB0;
	// lfs f0,6960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f0,6960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8255acb0
	if (ctx.cr6.gt) goto loc_8255ACB0;
	// stfs f29,5412(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// stw r25,6956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6956, ctx.r25.u32);
loc_8255ACB0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
}

__attribute__((alias("__imp__sub_8255ACC8"))) PPC_WEAK_FUNC(sub_8255ACC8);
PPC_FUNC_IMPL(__imp__sub_8255ACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255ACD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,28(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// beq cr6,0x8255ad18
	if (ctx.cr6.eq) goto loc_8255AD18;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x8255AD04;
	sub_8233A258(ctx, base);
	// lis r4,8660
	ctx.r4.s64 = 567541760;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,33469
	ctx.r4.u64 = ctx.r4.u64 | 33469;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x8255AD18;
	sub_829C3740(ctx, base);
loc_8255AD18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8255ad44
	if (ctx.cr6.eq) goto loc_8255AD44;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255ad44
	if (!ctx.cr6.gt) goto loc_8255AD44;
loc_8255AD30:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r29,368(r9)
	PPC_STORE_U32(ctx.r9.u32 + 368, ctx.r29.u32);
	// bne 0x8255ad30
	if (!ctx.cr0.eq) goto loc_8255AD30;
loc_8255AD44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AD50"))) PPC_WEAK_FUNC(sub_8255AD50);
PPC_FUNC_IMPL(__imp__sub_8255AD50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8255AD58;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r28,252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r9,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r9.u64);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r7,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,2180(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// bl 0x82500498
	ctx.lr = 0x8255AD98;
	sub_82500498(ctx, base);
	// stw r27,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r27.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8255add4
	if (!ctx.cr6.gt) goto loc_8255ADD4;
	// lwz r11,7080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7080);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255add4
	if (ctx.cr6.eq) goto loc_8255ADD4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8255add4
	if (ctx.cr6.eq) goto loc_8255ADD4;
	// lwz r3,1412(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// bl 0x82332988
	ctx.lr = 0x8255ADC0;
	sub_82332988(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255add4
	if (ctx.cr0.eq) goto loc_8255ADD4;
	// lwz r11,7088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7088);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,7088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7088, ctx.r11.u32);
loc_8255ADD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255ADE0"))) PPC_WEAK_FUNC(sub_8255ADE0);
PPC_FUNC_IMPL(__imp__sub_8255ADE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8255ae2c
	if (ctx.cr6.eq) goto loc_8255AE2C;
	// lwz r11,468(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 468);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,5288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5288);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,1835
	ctx.r10.s64 = ctx.r11.s64 + 1835;
	// addi r11,r11,613
	ctx.r11.s64 = ctx.r11.s64 + 613;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwzx r11,r7,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8255AE2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AE40"))) PPC_WEAK_FUNC(sub_8255AE40);
PPC_FUNC_IMPL(__imp__sub_8255AE40) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8255ae88
	if (ctx.cr6.eq) goto loc_8255AE88;
	// lwz r10,436(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 436);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8255ae88
	if (ctx.cr6.eq) goto loc_8255AE88;
	// lwz r11,4356(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255ae88
	if (ctx.cr6.eq) goto loc_8255AE88;
	// addi r10,r10,1722
	ctx.r10.s64 = ctx.r10.s64 + 1722;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8255AE88:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255AEA0"))) PPC_WEAK_FUNC(sub_8255AEA0);
PPC_FUNC_IMPL(__imp__sub_8255AEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8255AEA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// lwz r9,620(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lfs f0,16816(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16816);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,624(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r5,6860(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6860);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// ld r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// beq cr6,0x8255af24
	if (ctx.cr6.eq) goto loc_8255AF24;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// rldicr r8,r28,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8255AF24;
	sub_8282B1E0(ctx, base);
loc_8255AF24:
	// lwz r10,7168(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// addi r26,r11,-25080
	ctx.r26.s64 = ctx.r11.s64 + -25080;
	// bne cr6,0x8255afc0
	if (!ctx.cr6.eq) goto loc_8255AFC0;
	// lwz r5,6856(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6856);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255af70
	if (ctx.cr6.eq) goto loc_8255AF70;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// rldicr r8,r28,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8282b1e0
	ctx.lr = 0x8255AF70;
	sub_8282B1E0(ctx, base);
loc_8255AF70:
	// lwz r3,7244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255afc0
	if (ctx.cr6.eq) goto loc_8255AFC0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x8255AF84;
	sub_8281D650(ctx, base);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,7244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7244);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-27504
	ctx.r11.s64 = ctx.r11.s64 + -27504;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-20040(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -20040);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,7232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7232);
	// lwz r11,460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 460, ctx.r11.u32);
	// bl 0x82553890
	ctx.lr = 0x8255AFC0;
	sub_82553890(ctx, base);
loc_8255AFC0:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,23968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23968);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8255b700
	ctx.lr = 0x8255AFD4;
	sub_8255B700(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255AFE0"))) PPC_WEAK_FUNC(sub_8255AFE0);
PPC_FUNC_IMPL(__imp__sub_8255AFE0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8255b0d4
	if (ctx.cr6.eq) goto loc_8255B0D4;
	// lwz r11,7276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b028
	if (!ctx.cr6.eq) goto loc_8255B028;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b020
	if (!ctx.cr6.eq) goto loc_8255B020;
	// lwz r3,7172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7172);
	// b 0x8255b024
	goto loc_8255B024;
loc_8255B020:
	// lwz r3,7188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7188);
loc_8255B024:
	// bl 0x8281d650
	ctx.lr = 0x8255B028;
	sub_8281D650(ctx, base);
loc_8255B028:
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b054
	if (!ctx.cr6.eq) goto loc_8255B054;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b04c
	if (!ctx.cr6.eq) goto loc_8255B04C;
	// lwz r3,7176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7176);
	// b 0x8255b050
	goto loc_8255B050;
loc_8255B04C:
	// lwz r3,7192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7192);
loc_8255B050:
	// bl 0x8281d650
	ctx.lr = 0x8255B054;
	sub_8281D650(ctx, base);
loc_8255B054:
	// lwz r11,7280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b0a4
	if (!ctx.cr6.eq) goto loc_8255B0A4;
	// lwz r11,7276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255b0a4
	if (ctx.cr6.eq) goto loc_8255B0A4;
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255b0a4
	if (ctx.cr6.eq) goto loc_8255B0A4;
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8255b0a4
	if (ctx.cr6.eq) goto loc_8255B0A4;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b09c
	if (!ctx.cr6.eq) goto loc_8255B09C;
	// lwz r3,7180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// b 0x8255b0a0
	goto loc_8255B0A0;
loc_8255B09C:
	// lwz r3,7196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7196);
loc_8255B0A0:
	// bl 0x8281d650
	ctx.lr = 0x8255B0A4;
	sub_8281D650(ctx, base);
loc_8255B0A4:
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b154
	if (!ctx.cr6.eq) goto loc_8255B154;
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b0c8
	if (!ctx.cr6.eq) goto loc_8255B0C8;
	// lwz r3,7184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// b 0x8255b0cc
	goto loc_8255B0CC;
loc_8255B0C8:
	// lwz r3,7200(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7200);
loc_8255B0CC:
	// bl 0x8281d650
	ctx.lr = 0x8255B0D0;
	sub_8281D650(ctx, base);
	// b 0x8255b154
	goto loc_8255B154;
loc_8255B0D4:
	// lwz r11,7172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7172);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7188);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7176);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7192);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7180);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7196);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7184);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7200);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8255B154:
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b170
	if (!ctx.cr6.eq) goto loc_8255B170;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,7208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7208);
	// bl 0x8281d650
	ctx.lr = 0x8255B16C;
	sub_8281D650(ctx, base);
	// b 0x8255b180
	goto loc_8255B180;
loc_8255B170:
	// lwz r11,7208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7208);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8255B180:
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

__attribute__((alias("__imp__sub_8255B198"))) PPC_WEAK_FUNC(sub_8255B198);
PPC_FUNC_IMPL(__imp__sub_8255B198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8255B1A0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,7100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7100);
	// bl 0x829c35d8
	ctx.lr = 0x8255B1B4;
	sub_829C35D8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r26,7512(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7512);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r11,-8044
	ctx.r3.s64 = ctx.r11.s64 + -8044;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// bl 0x82816528
	ctx.lr = 0x8255B1D0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8284da30
	ctx.lr = 0x8255B1E4;
	sub_8284DA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,-18392
	ctx.r3.s64 = ctx.r11.s64 + -18392;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// bl 0x82816528
	ctx.lr = 0x8255B1F8;
	sub_82816528(ctx, base);
	// lis r25,-31949
	ctx.r25.s64 = -2093809664;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x8255B238;
	sub_828250B0(ctx, base);
	// bl 0x824ca610
	ctx.lr = 0x8255B23C;
	sub_824CA610(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8255b37c
	if (ctx.cr0.eq) goto loc_8255B37C;
	// lwa r11,6920(r31)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 6920));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1108);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r10,664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lwz r24,7024(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// lwz r28,660(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// neg r3,r24
	ctx.r3.s64 = -ctx.r24.s64;
	// bl 0x82825ab8
	ctx.lr = 0x8255B290;
	sub_82825AB8(ctx, base);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,7020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// beq cr6,0x8255b2f0
	if (ctx.cr6.eq) goto loc_8255B2F0;
	// lfs f13,628(r31)
	ctx.fpscr.disableFlushMode();
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
	// b 0x8255b2f4
	goto loc_8255B2F4;
loc_8255B2F0:
	// lfs f31,3108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3108);
	ctx.f31.f64 = double(temp.f32);
loc_8255B2F4:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82817bb8
	ctx.lr = 0x8255B300;
	sub_82817BB8(ctx, base);
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f0,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x8255b34c
	if (ctx.cr6.eq) goto loc_8255B34C;
	// lfs f0,628(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8255B34C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B374;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,7012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1504(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1504, temp.u32);
loc_8255B37C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8255b3c0
	if (!ctx.cr6.eq) goto loc_8255B3C0;
	// lwz r5,6872(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8255b3c0
	if (ctx.cr6.eq) goto loc_8255B3C0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,13024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// rldicr r10,r27,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x8282b1e0
	ctx.lr = 0x8255B3C0;
	sub_8282B1E0(ctx, base);
loc_8255B3C0:
	// lwz r10,7016(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8255b3fc
	if (!ctx.cr6.lt) goto loc_8255B3FC;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,7512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7512, ctx.r11.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,7028(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7028);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,-20072
	ctx.r11.s64 = ctx.r11.s64 + -20072;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82553890
	ctx.lr = 0x8255B3FC;
	sub_82553890(ctx, base);
loc_8255B3FC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B408"))) PPC_WEAK_FUNC(sub_8255B408);
PPC_FUNC_IMPL(__imp__sub_8255B408) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,7276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b430
	if (!ctx.cr6.eq) goto loc_8255B430;
	// lwz r11,6824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b428
	if (!ctx.cr6.eq) goto loc_8255B428;
	// lwz r11,7172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7172);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B428:
	// lwz r11,7188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7188);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B430:
	// lwz r11,7284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b458
	if (!ctx.cr6.eq) goto loc_8255B458;
	// lwz r11,6824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b450
	if (!ctx.cr6.eq) goto loc_8255B450;
	// lwz r11,7176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7176);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B450:
	// lwz r11,7192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7192);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B458:
	// lwz r11,7288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b480
	if (!ctx.cr6.eq) goto loc_8255B480;
	// lwz r11,6824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b478
	if (!ctx.cr6.eq) goto loc_8255B478;
	// lwz r11,7184(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7184);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B478:
	// lwz r11,7200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7200);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B480:
	// lwz r11,7280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,6824(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6824);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255b4a0
	if (!ctx.cr6.eq) goto loc_8255B4A0;
	// lwz r11,7180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7180);
	// b 0x8255b4a4
	goto loc_8255B4A4;
loc_8255B4A0:
	// lwz r11,7196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7196);
loc_8255B4A4:
	// stw r11,7204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7204, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B4B0"))) PPC_WEAK_FUNC(sub_8255B4B0);
PPC_FUNC_IMPL(__imp__sub_8255B4B0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8255b5b0
	if (ctx.cr6.eq) goto loc_8255B5B0;
	// lwz r11,624(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 624);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// lwz r9,620(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// lwz r8,620(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r7,628(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f31,f0
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x829bed50
	ctx.lr = 0x8255B534;
	sub_829BED50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x829bed50
	ctx.lr = 0x8255B544;
	sub_829BED50(ctx, base);
	// lwz r11,7132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7132);
	// lfs f0,400(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,950
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 950, ctx.xer);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// bgt cr6,0x8255b560
	if (ctx.cr6.gt) goto loc_8255B560;
loc_8255B558:
	// li r11,950
	ctx.r11.s64 = 950;
	// b 0x8255b5ac
	goto loc_8255B5AC;
loc_8255B560:
	// cmpwi cr6,r11,1900
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1900, ctx.xer);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,18024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18024);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x8255b584
	if (ctx.cr6.gt) goto loc_8255B584;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8255b558
	if (!ctx.cr6.gt) goto loc_8255B558;
	// li r11,1900
	ctx.r11.s64 = 1900;
	// b 0x8255b5ac
	goto loc_8255B5AC;
loc_8255B584:
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x8255b558
	if (!ctx.cr6.gt) goto loc_8255B558;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f13,18020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18020);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1900
	ctx.r11.s64 = 1900;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8255b5ac
	if (!ctx.cr6.gt) goto loc_8255B5AC;
	// li r11,3800
	ctx.r11.s64 = 3800;
loc_8255B5AC:
	// stw r11,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r11.u32);
loc_8255B5B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_8255B5D0"))) PPC_WEAK_FUNC(sub_8255B5D0);
PPC_FUNC_IMPL(__imp__sub_8255B5D0) {
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
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b61c
	if (ctx.cr0.eq) goto loc_8255B61C;
	// lwz r11,7216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7216);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7220);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
loc_8255B61C:
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b654
	if (ctx.cr0.eq) goto loc_8255B654;
	// lwz r11,7224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7224);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7228);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
loc_8255B654:
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b68c
	if (ctx.cr0.eq) goto loc_8255B68C;
	// lwz r11,7236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7236);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7240);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
loc_8255B68C:
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r10,r10,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r10.u32);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255b6c8
	if (ctx.cr0.eq) goto loc_8255B6C8;
	// lwz r11,7232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7232);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,7520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7520);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,7520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7520, ctx.r11.u32);
loc_8255B6C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82555878
	ctx.lr = 0x8255B6D4;
	sub_82555878(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6956, ctx.r10.u32);
	// lfs f0,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
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

__attribute__((alias("__imp__sub_8255B700"))) PPC_WEAK_FUNC(sub_8255B700);
PPC_FUNC_IMPL(__imp__sub_8255B700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255B708;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827dff88
	ctx.lr = 0x8255B718;
	sub_827DFF88(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// addi r28,r29,-27300
	ctx.r28.s64 = ctx.r29.s64 + -27300;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f2,23968(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23968);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2220(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2220);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,15844(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 15844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2660(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2660);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// lfs f0,-27300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,32716
	ctx.r8.s64 = ctx.r10.s64 + 32716;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// lfs f12,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f11,16816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16816);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f9,304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// lfs f8,204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f13,912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lfs f7,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-12104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f10,16408(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16408);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f10,212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stfs f6,172(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x8255B818;
	sub_82A4EA80(ctx, base);
	// lwz r11,1028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// ld r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255B850"))) PPC_WEAK_FUNC(sub_8255B850);
PPC_FUNC_IMPL(__imp__sub_8255B850) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x824f4548
	ctx.lr = 0x8255B868;
	sub_824F4548(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_8255B888"))) PPC_WEAK_FUNC(sub_8255B888);
PPC_FUNC_IMPL(__imp__sub_8255B888) {
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
	// bl 0x82551d80
	ctx.lr = 0x8255B89C;
	sub_82551D80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255b8b4
	if (ctx.cr0.eq) goto loc_8255B8B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,7076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7076, ctx.r11.u32);
	// stw r10,7080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7080, ctx.r10.u32);
loc_8255B8B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B8C8"))) PPC_WEAK_FUNC(sub_8255B8C8);
PPC_FUNC_IMPL(__imp__sub_8255B8C8) {
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
	ctx.lr = 0x8255B8D8;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 100);
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

__attribute__((alias("__imp__sub_8255B8F8"))) PPC_WEAK_FUNC(sub_8255B8F8);
PPC_FUNC_IMPL(__imp__sub_8255B8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255B908"))) PPC_WEAK_FUNC(sub_8255B908);
PPC_FUNC_IMPL(__imp__sub_8255B908) {
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
	// lwz r11,25788(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25788);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255b948
	if (!ctx.cr0.eq) goto loc_8255B948;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25788(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25788, ctx.r11.u32);
	// addi r3,r9,-8744
	ctx.r3.s64 = ctx.r9.s64 + -8744;
	// bl 0x82816528
	ctx.lr = 0x8255B940;
	sub_82816528(ctx, base);
	// stw r3,25784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25784, ctx.r3.u32);
	// b 0x8255b94c
	goto loc_8255B94C;
loc_8255B948:
	// lwz r3,25784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25784);
loc_8255B94C:
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

__attribute__((alias("__imp__sub_8255B960"))) PPC_WEAK_FUNC(sub_8255B960);
PPC_FUNC_IMPL(__imp__sub_8255B960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255b9b0
	ctx.lr = 0x8255B980;
	sub_8255B9B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255B994;
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

__attribute__((alias("__imp__sub_8255B9B0"))) PPC_WEAK_FUNC(sub_8255B9B0);
PPC_FUNC_IMPL(__imp__sub_8255B9B0) {
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
	// addi r31,r11,12180
	ctx.r31.s64 = ctx.r11.s64 + 12180;
	// lwz r11,12176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12176);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255b9f8
	if (!ctx.cr0.eq) goto loc_8255B9F8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-3472
	ctx.r9.s64 = ctx.r9.s64 + -3472;
	// stw r11,12176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12176, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21080
	ctx.r3.s64 = ctx.r11.s64 + 21080;
	// bl 0x82a4c758
	ctx.lr = 0x8255B9F8;
	sub_82A4C758(ctx, base);
loc_8255B9F8:
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

__attribute__((alias("__imp__sub_8255BA10"))) PPC_WEAK_FUNC(sub_8255BA10);
PPC_FUNC_IMPL(__imp__sub_8255BA10) {
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
	// lwz r11,25780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25780);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255ba50
	if (!ctx.cr0.eq) goto loc_8255BA50;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25780(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25780, ctx.r11.u32);
	// addi r3,r9,-8708
	ctx.r3.s64 = ctx.r9.s64 + -8708;
	// bl 0x82816528
	ctx.lr = 0x8255BA48;
	sub_82816528(ctx, base);
	// stw r3,25776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25776, ctx.r3.u32);
	// b 0x8255ba54
	goto loc_8255BA54;
loc_8255BA50:
	// lwz r3,25776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25776);
loc_8255BA54:
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

__attribute__((alias("__imp__sub_8255BA68"))) PPC_WEAK_FUNC(sub_8255BA68);
PPC_FUNC_IMPL(__imp__sub_8255BA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bab8
	ctx.lr = 0x8255BA88;
	sub_8255BAB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255BA9C;
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

__attribute__((alias("__imp__sub_8255BAB8"))) PPC_WEAK_FUNC(sub_8255BAB8);
PPC_FUNC_IMPL(__imp__sub_8255BAB8) {
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
	// addi r31,r11,12188
	ctx.r31.s64 = ctx.r11.s64 + 12188;
	// lwz r11,12184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12184);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255bb00
	if (!ctx.cr0.eq) goto loc_8255BB00;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-3368
	ctx.r9.s64 = ctx.r9.s64 + -3368;
	// stw r11,12184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12184, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21056
	ctx.r3.s64 = ctx.r11.s64 + 21056;
	// bl 0x82a4c758
	ctx.lr = 0x8255BB00;
	sub_82A4C758(ctx, base);
loc_8255BB00:
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

__attribute__((alias("__imp__sub_8255BB18"))) PPC_WEAK_FUNC(sub_8255BB18);
PPC_FUNC_IMPL(__imp__sub_8255BB18) {
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
	// beq cr6,0x8255bb5c
	if (ctx.cr6.eq) goto loc_8255BB5C;
	// bl 0x823b2f50
	ctx.lr = 0x8255BB38;
	sub_823B2F50(ctx, base);
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
	ctx.lr = 0x8255BB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8255bb60
	if (!ctx.cr0.eq) goto loc_8255BB60;
loc_8255BB5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255BB60:
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

__attribute__((alias("__imp__sub_8255BB78"))) PPC_WEAK_FUNC(sub_8255BB78);
PPC_FUNC_IMPL(__imp__sub_8255BB78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82553b38
	sub_82553B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255BB80"))) PPC_WEAK_FUNC(sub_8255BB80);
PPC_FUNC_IMPL(__imp__sub_8255BB80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x825541a0
	sub_825541A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255BB88"))) PPC_WEAK_FUNC(sub_8255BB88);
PPC_FUNC_IMPL(__imp__sub_8255BB88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x825541a0
	sub_825541A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255BB90"))) PPC_WEAK_FUNC(sub_8255BB90);
PPC_FUNC_IMPL(__imp__sub_8255BB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255BB98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82833180
	ctx.lr = 0x8255BBB4;
	sub_82833180(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r7,-8531
	ctx.r7.s64 = -559087616;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r5,-6866
	ctx.r5.s64 = -449970176;
	// ori r7,r7,47806
	ctx.r7.u64 = ctx.r7.u64 | 47806;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r9,r9,-3160
	ctx.r9.s64 = ctx.r9.s64 + -3160;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// ori r5,r5,31988
	ctx.r5.u64 = ctx.r5.u64 | 31988;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255BC10"))) PPC_WEAK_FUNC(sub_8255BC10);
PPC_FUNC_IMPL(__imp__sub_8255BC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bc60
	ctx.lr = 0x8255BC30;
	sub_8255BC60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255bc44
	if (ctx.cr6.eq) goto loc_8255BC44;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8255BC44;
	sub_82333B08(ctx, base);
loc_8255BC44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BC60"))) PPC_WEAK_FUNC(sub_8255BC60);
PPC_FUNC_IMPL(__imp__sub_8255BC60) {
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
	// addi r31,r11,12160
	ctx.r31.s64 = ctx.r11.s64 + 12160;
	// lwz r11,12164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12164);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255bca8
	if (!ctx.cr0.eq) goto loc_8255BCA8;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-3080
	ctx.r9.s64 = ctx.r9.s64 + -3080;
	// stw r11,12164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12164, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21104
	ctx.r3.s64 = ctx.r11.s64 + 21104;
	// bl 0x82a4c758
	ctx.lr = 0x8255BCA8;
	sub_82A4C758(ctx, base);
loc_8255BCA8:
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

__attribute__((alias("__imp__sub_8255BCC0"))) PPC_WEAK_FUNC(sub_8255BCC0);
PPC_FUNC_IMPL(__imp__sub_8255BCC0) {
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
	// lwz r11,25772(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25772);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255bd00
	if (!ctx.cr0.eq) goto loc_8255BD00;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25772(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25772, ctx.r11.u32);
	// addi r3,r9,-3308
	ctx.r3.s64 = ctx.r9.s64 + -3308;
	// bl 0x82816528
	ctx.lr = 0x8255BCF8;
	sub_82816528(ctx, base);
	// stw r3,25768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25768, ctx.r3.u32);
	// b 0x8255bd04
	goto loc_8255BD04;
loc_8255BD00:
	// lwz r3,25768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25768);
loc_8255BD04:
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

__attribute__((alias("__imp__sub_8255BD18"))) PPC_WEAK_FUNC(sub_8255BD18);
PPC_FUNC_IMPL(__imp__sub_8255BD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bc60
	ctx.lr = 0x8255BD38;
	sub_8255BC60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255BD4C;
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

__attribute__((alias("__imp__sub_8255BD68"))) PPC_WEAK_FUNC(sub_8255BD68);
PPC_FUNC_IMPL(__imp__sub_8255BD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255bda0
	if (ctx.cr6.eq) goto loc_8255BDA0;
	// bl 0x8255bc60
	ctx.lr = 0x8255BD90;
	sub_8255BC60(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255bda0
	if (!ctx.cr6.eq) goto loc_8255BDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255bdac
	goto loc_8255BDAC;
loc_8255BDA0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8255BDAC;
	sub_82333C70(ctx, base);
loc_8255BDAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BDC8"))) PPC_WEAK_FUNC(sub_8255BDC8);
PPC_FUNC_IMPL(__imp__sub_8255BDC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255bc60
	sub_8255BC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255BDD0"))) PPC_WEAK_FUNC(sub_8255BDD0);
PPC_FUNC_IMPL(__imp__sub_8255BDD0) {
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
	ctx.lr = 0x8255BDEC;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255be64
	if (ctx.cr0.eq) goto loc_8255BE64;
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
	// addi r9,r9,-3160
	ctx.r9.s64 = ctx.r9.s64 + -3160;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// b 0x8255be68
	goto loc_8255BE68;
loc_8255BE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255BE68:
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

__attribute__((alias("__imp__sub_8255BE80"))) PPC_WEAK_FUNC(sub_8255BE80);
PPC_FUNC_IMPL(__imp__sub_8255BE80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-3308
	ctx.r3.s64 = ctx.r11.s64 + -3308;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BE90"))) PPC_WEAK_FUNC(sub_8255BE90);
PPC_FUNC_IMPL(__imp__sub_8255BE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bee0
	ctx.lr = 0x8255BEB0;
	sub_8255BEE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255bec4
	if (ctx.cr6.eq) goto loc_8255BEC4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8255BEC4;
	sub_82333B08(ctx, base);
loc_8255BEC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255BEE0"))) PPC_WEAK_FUNC(sub_8255BEE0);
PPC_FUNC_IMPL(__imp__sub_8255BEE0) {
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
	// addi r31,r11,12168
	ctx.r31.s64 = ctx.r11.s64 + 12168;
	// lwz r11,12172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12172);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255bf28
	if (!ctx.cr0.eq) goto loc_8255BF28;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-3184
	ctx.r9.s64 = ctx.r9.s64 + -3184;
	// stw r11,12172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12172, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21128
	ctx.r3.s64 = ctx.r11.s64 + 21128;
	// bl 0x82a4c758
	ctx.lr = 0x8255BF28;
	sub_82A4C758(ctx, base);
loc_8255BF28:
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

__attribute__((alias("__imp__sub_8255BF40"))) PPC_WEAK_FUNC(sub_8255BF40);
PPC_FUNC_IMPL(__imp__sub_8255BF40) {
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
	// lwz r11,25764(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25764);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255bf80
	if (!ctx.cr0.eq) goto loc_8255BF80;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,25764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25764, ctx.r11.u32);
	// addi r3,r9,-3348
	ctx.r3.s64 = ctx.r9.s64 + -3348;
	// bl 0x82816528
	ctx.lr = 0x8255BF78;
	sub_82816528(ctx, base);
	// stw r3,25760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25760, ctx.r3.u32);
	// b 0x8255bf84
	goto loc_8255BF84;
loc_8255BF80:
	// lwz r3,25760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25760);
loc_8255BF84:
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

__attribute__((alias("__imp__sub_8255BF98"))) PPC_WEAK_FUNC(sub_8255BF98);
PPC_FUNC_IMPL(__imp__sub_8255BF98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x8255bee0
	ctx.lr = 0x8255BFB8;
	sub_8255BEE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255BFCC;
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

__attribute__((alias("__imp__sub_8255BFE8"))) PPC_WEAK_FUNC(sub_8255BFE8);
PPC_FUNC_IMPL(__imp__sub_8255BFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255c020
	if (ctx.cr6.eq) goto loc_8255C020;
	// bl 0x8255bee0
	ctx.lr = 0x8255C010;
	sub_8255BEE0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255c020
	if (!ctx.cr6.eq) goto loc_8255C020;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255c02c
	goto loc_8255C02C;
loc_8255C020:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x8255C02C;
	sub_82333C70(ctx, base);
loc_8255C02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C048"))) PPC_WEAK_FUNC(sub_8255C048);
PPC_FUNC_IMPL(__imp__sub_8255C048) {
	PPC_FUNC_PROLOGUE();
	// b 0x8255bee0
	sub_8255BEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C050"))) PPC_WEAK_FUNC(sub_8255C050);
PPC_FUNC_IMPL(__imp__sub_8255C050) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8255C06C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255c0c4
	if (ctx.cr0.eq) goto loc_8255C0C4;
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
	// addi r9,r9,-3264
	ctx.r9.s64 = ctx.r9.s64 + -3264;
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
	// b 0x8255c0c8
	goto loc_8255C0C8;
loc_8255C0C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255C0C8:
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

__attribute__((alias("__imp__sub_8255C0E0"))) PPC_WEAK_FUNC(sub_8255C0E0);
PPC_FUNC_IMPL(__imp__sub_8255C0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-3348
	ctx.r3.s64 = ctx.r11.s64 + -3348;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C0F0"))) PPC_WEAK_FUNC(sub_8255C0F0);
PPC_FUNC_IMPL(__imp__sub_8255C0F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10172
	ctx.r3.s64 = ctx.r11.s64 + -10172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C100"))) PPC_WEAK_FUNC(sub_8255C100);
PPC_FUNC_IMPL(__imp__sub_8255C100) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9548
	sub_823B9548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C108"))) PPC_WEAK_FUNC(sub_8255C108);
PPC_FUNC_IMPL(__imp__sub_8255C108) {
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
	// li r3,2032
	ctx.r3.s64 = 2032;
	// bl 0x82833108
	ctx.lr = 0x8255C124;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255c13c
	if (ctx.cr0.eq) goto loc_8255C13C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x8255c268
	ctx.lr = 0x8255C138;
	sub_8255C268(ctx, base);
	// b 0x8255c140
	goto loc_8255C140;
loc_8255C13C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255C140:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8255c154
	if (ctx.cr6.eq) goto loc_8255C154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8255C154:
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

__attribute__((alias("__imp__sub_8255C168"))) PPC_WEAK_FUNC(sub_8255C168);
PPC_FUNC_IMPL(__imp__sub_8255C168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255c198
	if (ctx.cr6.eq) goto loc_8255C198;
	// bl 0x823b9548
	ctx.lr = 0x8255C190;
	sub_823B9548(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8255c1d4
	if (ctx.cr6.eq) goto loc_8255C1D4;
loc_8255C198:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823510a0
	ctx.lr = 0x8255C1AC;
	sub_823510A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8255c1d4
	if (!ctx.cr0.eq) goto loc_8255C1D4;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346e08
	ctx.lr = 0x8255C1C8;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x8255c1d8
	if (ctx.cr0.eq) goto loc_8255C1D8;
loc_8255C1D4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8255C1D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C1F0"))) PPC_WEAK_FUNC(sub_8255C1F0);
PPC_FUNC_IMPL(__imp__sub_8255C1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9548
	ctx.lr = 0x8255C210;
	sub_823B9548(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8255c220
	if (!ctx.cr6.eq) goto loc_8255C220;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// b 0x8255c250
	goto loc_8255C250;
loc_8255C220:
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82351168
	ctx.lr = 0x8255C234;
	sub_82351168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8255c250
	if (!ctx.cr0.eq) goto loc_8255C250;
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82346ed0
	ctx.lr = 0x8255C250;
	sub_82346ED0(ctx, base);
loc_8255C250:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C268"))) PPC_WEAK_FUNC(sub_8255C268);
PPC_FUNC_IMPL(__imp__sub_8255C268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8255C270;
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
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r29,r31,2000
	ctx.r29.s64 = ctx.r31.s64 + 2000;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r27,r31,2016
	ctx.r27.s64 = ctx.r31.s64 + 2016;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8255c2bc
	if (!ctx.cr6.eq) goto loc_8255C2BC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255c2c8
	goto loc_8255C2C8;
loc_8255C2BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255C2C8:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823ff1a0
	ctx.lr = 0x8255C2D0;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8255c2e0
	if (!ctx.cr6.eq) goto loc_8255C2E0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255c2ec
	goto loc_8255C2EC;
loc_8255C2E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255C2EC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823511c8
	ctx.lr = 0x8255C2F8;
	sub_823511C8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8255c308
	if (!ctx.cr6.eq) goto loc_8255C308;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x8255c314
	goto loc_8255C314;
loc_8255C308:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_8255C314:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82346f30
	ctx.lr = 0x8255C320;
	sub_82346F30(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
	// addi r10,r10,-1484
	ctx.r10.s64 = ctx.r10.s64 + -1484;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-1432
	ctx.r9.s64 = ctx.r9.s64 + -1432;
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
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C388"))) PPC_WEAK_FUNC(sub_8255C388);
PPC_FUNC_IMPL(__imp__sub_8255C388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,-32
	ctx.r31.s64 = ctx.r3.s64 + -32;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// addi r9,r9,-1484
	ctx.r9.s64 = ctx.r9.s64 + -1484;
	// addi r8,r8,-1432
	ctx.r8.s64 = ctx.r8.s64 + -1432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,364(r11)
	PPC_STORE_U32(ctx.r11.u32 + 364, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r11,-36(r10)
	PPC_STORE_U32(ctx.r10.u32 + -36, ctx.r11.u32);
	// bl 0x823ff098
	ctx.lr = 0x8255C408;
	sub_823FF098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255c418
	if (ctx.cr0.eq) goto loc_8255C418;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8255C418;
	sub_82332DB8(ctx, base);
loc_8255C418:
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

__attribute__((alias("__imp__sub_8255C438"))) PPC_WEAK_FUNC(sub_8255C438);
PPC_FUNC_IMPL(__imp__sub_8255C438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255C440;
	__savegprlr_29(ctx, base);
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
	// addi r11,r11,-1408
	ctx.r11.s64 = ctx.r11.s64 + -1408;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r10.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stw r9,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r9.u32);
	// addi r30,r31,2000
	ctx.r30.s64 = ctx.r31.s64 + 2000;
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// bl 0x824cbb48
	ctx.lr = 0x8255C47C;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82501770
	ctx.lr = 0x8255C488;
	sub_82501770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825ba650
	ctx.lr = 0x8255C494;
	sub_825BA650(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
	// addi r10,r10,-1484
	ctx.r10.s64 = ctx.r10.s64 + -1484;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// addi r9,r9,-1432
	ctx.r9.s64 = ctx.r9.s64 + -1432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,23968(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23968);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
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
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1628(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1628, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f13,1820(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1820, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C538"))) PPC_WEAK_FUNC(sub_8255C538);
PPC_FUNC_IMPL(__imp__sub_8255C538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8255C560;
	sub_82501810(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba700
	ctx.lr = 0x8255C570;
	sub_825BA700(ctx, base);
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
	// beq 0x8255c59c
	if (ctx.cr0.eq) goto loc_8255C59C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8255c59c
	if (ctx.cr6.eq) goto loc_8255C59C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8255c5a0
	goto loc_8255C5A0;
loc_8255C59C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8255C5A0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10112
	ctx.r3.s64 = ctx.r11.s64 + -10112;
	// bl 0x82816528
	ctx.lr = 0x8255C5AC;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x8255C5BC;
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
	ctx.lr = 0x8255C5D0;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10072
	ctx.r3.s64 = ctx.r11.s64 + -10072;
	// bl 0x82816528
	ctx.lr = 0x8255C5DC;
	sub_82816528(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-19756
	ctx.r3.s64 = ctx.r11.s64 + -19756;
	// bl 0x82816528
	ctx.lr = 0x8255C5EC;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x8255C5FC;
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

__attribute__((alias("__imp__sub_8255C618"))) PPC_WEAK_FUNC(sub_8255C618);
PPC_FUNC_IMPL(__imp__sub_8255C618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// bl 0x824ce338
	ctx.lr = 0x8255C648;
	sub_824CE338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255cef8
	ctx.lr = 0x8255C650;
	sub_8255CEF8(ctx, base);
	// stw r3,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C670"))) PPC_WEAK_FUNC(sub_8255C670);
PPC_FUNC_IMPL(__imp__sub_8255C670) {
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
	// bl 0x824cc238
	ctx.lr = 0x8255C698;
	sub_824CC238(ctx, base);
	// lwz r11,-32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825ba7d0
	ctx.lr = 0x8255C6A8;
	sub_825BA7D0(ctx, base);
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

__attribute__((alias("__imp__sub_8255C6C0"))) PPC_WEAK_FUNC(sub_8255C6C0);
PPC_FUNC_IMPL(__imp__sub_8255C6C0) {
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
	// bl 0x82333a20
	ctx.lr = 0x8255C6D4;
	sub_82333A20(ctx, base);
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

__attribute__((alias("__imp__sub_8255C6E8"))) PPC_WEAK_FUNC(sub_8255C6E8);
PPC_FUNC_IMPL(__imp__sub_8255C6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8255c700
	if (ctx.cr6.eq) goto loc_8255C700;
	// lwz r11,6876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6876);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8255C700:
	// lwz r11,-32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-32
	ctx.r3.s64 = ctx.r11.s64 + -32;
	// b 0x824cdea0
	sub_824CDEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C714"))) PPC_WEAK_FUNC(sub_8255C714);
PPC_FUNC_IMPL(__imp__sub_8255C714) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C718"))) PPC_WEAK_FUNC(sub_8255C718);
PPC_FUNC_IMPL(__imp__sub_8255C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x825018b0
	ctx.lr = 0x8255C744;
	sub_825018B0(ctx, base);
	// bl 0x823b9548
	ctx.lr = 0x8255C748;
	sub_823B9548(ctx, base);
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
	ctx.lr = 0x8255C760;
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

__attribute__((alias("__imp__sub_8255C780"))) PPC_WEAK_FUNC(sub_8255C780);
PPC_FUNC_IMPL(__imp__sub_8255C780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -100);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-100
	ctx.r10.s64 = ctx.r11.s64 + -100;
	// lwz r3,-92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1544);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8255C7A8"))) PPC_WEAK_FUNC(sub_8255C7A8);
PPC_FUNC_IMPL(__imp__sub_8255C7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8255c718
	ctx.lr = 0x8255C7D8;
	sub_8255C718(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825ba8c0
	ctx.lr = 0x8255C7F0;
	sub_825BA8C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255C808"))) PPC_WEAK_FUNC(sub_8255C808);
PPC_FUNC_IMPL(__imp__sub_8255C808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255C810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r30,-136
	ctx.r29.s64 = ctx.r30.s64 + -136;
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,1584(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8255c988
	if (ctx.cr6.eq) goto loc_8255C988;
	// lwz r11,5492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8255c974
	if (ctx.cr6.lt) goto loc_8255C974;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255cef8
	ctx.lr = 0x8255C858;
	sub_8255CEF8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8255c974
	if (ctx.cr0.eq) goto loc_8255C974;
	// lwz r11,7376(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7376);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x8255c974
	if (ctx.cr6.gt) goto loc_8255C974;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-30840
	ctx.r12.s64 = ctx.r12.s64 + -30840;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32170
	ctx.r12.s64 = -2108293120;
	// addi r12,r12,-14184
	ctx.r12.s64 = ctx.r12.s64 + -14184;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_8255C898;
	case 1:
		goto loc_8255C8DC;
	case 2:
		goto loc_8255C8BC;
	case 3:
		goto loc_8255C8CC;
	case 4:
		goto loc_8255C8D4;
	case 5:
		goto loc_8255C8E4;
	case 6:
		goto loc_8255C944;
	case 7:
		goto loc_8255C96C;
	default:
		__builtin_unreachable();
	}
loc_8255C898:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8255c990
	ctx.lr = 0x8255C8A4;
	sub_8255C990(ctx, base);
	// lwz r11,1600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1600);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8255C8AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8255C8B0:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255C8B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8255c988
	goto loc_8255C988;
loc_8255C8BC:
	// li r4,5
	ctx.r4.s64 = 5;
loc_8255C8C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// b 0x8255c8ac
	goto loc_8255C8AC;
loc_8255C8CC:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8255c8c0
	goto loc_8255C8C0;
loc_8255C8D4:
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8255c8c0
	goto loc_8255C8C0;
loc_8255C8DC:
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8255c8c0
	goto loc_8255C8C0;
loc_8255C8E4:
	// lwz r11,7276(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// beq cr6,0x8255c93c
	if (ctx.cr6.eq) goto loc_8255C93C;
	// li r4,9
	ctx.r4.s64 = 9;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255C908;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-2720
	ctx.r10.s64 = ctx.r10.s64 + -2720;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// lfs f1,24724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24724);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8255cf58
	ctx.lr = 0x8255C938;
	sub_8255CF58(ctx, base);
	// b 0x8255c988
	goto loc_8255C988;
loc_8255C93C:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8255c8b0
	goto loc_8255C8B0;
loc_8255C944:
	// lwz r11,7288(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7288);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// beq cr6,0x8255c964
	if (ctx.cr6.eq) goto loc_8255C964;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8255c8b0
	goto loc_8255C8B0;
loc_8255C964:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8255c8b0
	goto loc_8255C8B0;
loc_8255C96C:
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x8255c8c0
	goto loc_8255C8C0;
loc_8255C974:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r3,-100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -100);
	// bl 0x829e3da8
	ctx.lr = 0x8255C988;
	sub_829E3DA8(ctx, base);
loc_8255C988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255C990"))) PPC_WEAK_FUNC(sub_8255C990);
PPC_FUNC_IMPL(__imp__sub_8255C990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8255C998;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,1584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// bl 0x8255cef8
	ctx.lr = 0x8255C9C4;
	sub_8255CEF8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// beq 0x8255cbb4
	if (ctx.cr0.eq) goto loc_8255CBB4;
	// lwz r11,5492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255cbb4
	if (!ctx.cr6.gt) goto loc_8255CBB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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
	ctx.lr = 0x8255CA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255cbb4
	if (ctx.cr0.eq) goto loc_8255CBB4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bne cr6,0x8255ca4c
	if (!ctx.cr6.eq) goto loc_8255CA4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x8255ca64
	goto loc_8255CA64;
loc_8255CA4C:
	// lwz r11,36(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8255CA64:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d77f8
	ctx.lr = 0x8255CA6C;
	sub_824D77F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,84
	ctx.r10.s64 = 84;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824cf958
	ctx.lr = 0x8255CAB0;
	sub_824CF958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8255cb70
	if (!ctx.cr0.gt) goto loc_8255CB70;
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r29,620
	ctx.r30.s64 = ctx.r29.s64 + 620;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8255CAC4:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r31,620
	ctx.r5.s64 = ctx.r31.s64 + 620;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lfs f11,624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f11,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,620(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// beq cr6,0x8255cb64
	if (ctx.cr6.eq) goto loc_8255CB64;
	// lwz r11,2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8255cb64
	if (!ctx.cr6.gt) goto loc_8255CB64;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8255cb64
	if (!ctx.cr0.eq) goto loc_8255CB64;
	// lfs f13,6824(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 6824);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8255cb34
	if (!ctx.cr6.gt) goto loc_8255CB34;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8255cb64
	if (!ctx.cr6.eq) goto loc_8255CB64;
loc_8255CB34:
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824cb778
	ctx.lr = 0x8255CB58;
	sub_824CB778(ctx, base);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255cb64
	if (!ctx.cr6.eq) goto loc_8255CB64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8255CB64:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// bne 0x8255cac4
	if (!ctx.cr0.eq) goto loc_8255CAC4;
loc_8255CB70:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8255cba4
	if (!ctx.cr6.eq) goto loc_8255CBA4;
	// lwz r11,656(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 656);
	// addi r5,r28,620
	ctx.r5.s64 = ctx.r28.s64 + 620;
	// lwz r10,660(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 660);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,664(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	// addi r3,r29,620
	ctx.r3.s64 = ctx.r29.s64 + 620;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x824cb778
	ctx.lr = 0x8255CBA0;
	sub_824CB778(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8255CBA4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ff140
	ctx.lr = 0x8255CBAC;
	sub_823FF140(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8255cbb8
	if (!ctx.cr6.eq) goto loc_8255CBB8;
loc_8255CBB4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8255CBB8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255CBC8"))) PPC_WEAK_FUNC(sub_8255CBC8);
PPC_FUNC_IMPL(__imp__sub_8255CBC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,7376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7376);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8255cc84
	if (!ctx.cr6.eq) goto loc_8255CC84;
	// lwz r11,7244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255cc5c
	if (!ctx.cr6.eq) goto loc_8255CC5C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r11.u32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// stw r10,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r10.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r4,r11,-2720
	ctx.r4.s64 = ctx.r11.s64 + -2720;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CC58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8255cd40
	goto loc_8255CD40;
loc_8255CC5C:
	// lwz r11,7276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255cd40
	if (!ctx.cr6.eq) goto loc_8255CD40;
	// li r4,10
	ctx.r4.s64 = 10;
loc_8255CC6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8255cd14
	goto loc_8255CD14;
loc_8255CC84:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8255cd04
	if (!ctx.cr6.eq) goto loc_8255CD04;
	// lwz r11,7284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255ccf0
	if (!ctx.cr6.eq) goto loc_8255CCF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1600);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CCB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lfs f1,7040(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7040);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// addi r10,r10,11088
	ctx.r10.s64 = ctx.r10.s64 + 11088;
	// stw r11,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,7016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7016);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
	// bl 0x8255cf58
	ctx.lr = 0x8255CCEC;
	sub_8255CF58(ctx, base);
	// b 0x8255cd40
	goto loc_8255CD40;
loc_8255CCF0:
	// lwz r11,7288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8255cd40
	if (!ctx.cr6.eq) goto loc_8255CD40;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x8255cc6c
	goto loc_8255CC6C;
loc_8255CD04:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8255cd14
	if (ctx.cr6.eq) goto loc_8255CD14;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8255cd40
	if (!ctx.cr6.eq) goto loc_8255CD40;
loc_8255CD14:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
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
	// lwz r11,1388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1388);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8255CD40:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x825bb460
	ctx.lr = 0x8255CD58;
	sub_825BB460(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8255CD78"))) PPC_WEAK_FUNC(sub_8255CD78);
PPC_FUNC_IMPL(__imp__sub_8255CD78) {
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
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r10,-92(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,7376(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7376);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x8255cde8
	if (ctx.cr6.eq) goto loc_8255CDE8;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x8255cde8
	if (ctx.cr6.eq) goto loc_8255CDE8;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-96
	ctx.r10.s64 = ctx.r11.s64 + -96;
	// lwz r3,-88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CDD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,-60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// bl 0x829e3da8
	ctx.lr = 0x8255CDE8;
	sub_829E3DA8(ctx, base);
loc_8255CDE8:
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

__attribute__((alias("__imp__sub_8255CE00"))) PPC_WEAK_FUNC(sub_8255CE00);
PPC_FUNC_IMPL(__imp__sub_8255CE00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8255c718
	ctx.lr = 0x8255CE30;
	sub_8255C718(ctx, base);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x824d2540
	ctx.lr = 0x8255CE48;
	sub_824D2540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255CE60"))) PPC_WEAK_FUNC(sub_8255CE60);
PPC_FUNC_IMPL(__imp__sub_8255CE60) {
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
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,7372(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7372);
	// bl 0x8281d650
	ctx.lr = 0x8255CE94;
	sub_8281D650(ctx, base);
	// lwz r11,-116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -116);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// bl 0x824d0af0
	ctx.lr = 0x8255CEA8;
	sub_824D0AF0(ctx, base);
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

__attribute__((alias("__imp__sub_8255CEC0"))) PPC_WEAK_FUNC(sub_8255CEC0);
PPC_FUNC_IMPL(__imp__sub_8255CEC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,7372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7372);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x824d0680
	sub_824D0680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255CEF8"))) PPC_WEAK_FUNC(sub_8255CEF8);
PPC_FUNC_IMPL(__imp__sub_8255CEF8) {
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
	// beq cr6,0x8255cf3c
	if (ctx.cr6.eq) goto loc_8255CF3C;
	// bl 0x823b8fc0
	ctx.lr = 0x8255CF18;
	sub_823B8FC0(ctx, base);
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
	ctx.lr = 0x8255CF30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x8255cf40
	if (!ctx.cr0.eq) goto loc_8255CF40;
loc_8255CF3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255CF40:
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

__attribute__((alias("__imp__sub_8255CF58"))) PPC_WEAK_FUNC(sub_8255CF58);
PPC_FUNC_IMPL(__imp__sub_8255CF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255CF60;
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
	ctx.lr = 0x8255CF88;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8255d020
	if (!ctx.cr0.eq) goto loc_8255D020;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8255cfa8
	if (!ctx.cr6.eq) goto loc_8255CFA8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_8255CFA8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b8fc0
	ctx.lr = 0x8255CFB0;
	sub_823B8FC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8255CFC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8255CFD0;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8255d00c
	if (ctx.cr0.eq) goto loc_8255D00C;
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
	// b 0x8255d010
	goto loc_8255D010;
loc_8255D00C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8255D010:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8255D01C;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8255D020:
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
	ctx.lr = 0x8255D03C;
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

__attribute__((alias("__imp__sub_8255D050"))) PPC_WEAK_FUNC(sub_8255D050);
PPC_FUNC_IMPL(__imp__sub_8255D050) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c618
	sub_8255C618(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D060"))) PPC_WEAK_FUNC(sub_8255D060);
PPC_FUNC_IMPL(__imp__sub_8255D060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c6c0
	sub_8255C6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D070"))) PPC_WEAK_FUNC(sub_8255D070);
PPC_FUNC_IMPL(__imp__sub_8255D070) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c538
	sub_8255C538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D080"))) PPC_WEAK_FUNC(sub_8255D080);
PPC_FUNC_IMPL(__imp__sub_8255D080) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c100
	sub_8255C100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D090"))) PPC_WEAK_FUNC(sub_8255D090);
PPC_FUNC_IMPL(__imp__sub_8255D090) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c6e8
	sub_8255C6E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0A0"))) PPC_WEAK_FUNC(sub_8255D0A0);
PPC_FUNC_IMPL(__imp__sub_8255D0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c0f0
	sub_8255C0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0B0"))) PPC_WEAK_FUNC(sub_8255D0B0);
PPC_FUNC_IMPL(__imp__sub_8255D0B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c168
	sub_8255C168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0C0"))) PPC_WEAK_FUNC(sub_8255D0C0);
PPC_FUNC_IMPL(__imp__sub_8255D0C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c108
	sub_8255C108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0D0"))) PPC_WEAK_FUNC(sub_8255D0D0);
PPC_FUNC_IMPL(__imp__sub_8255D0D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x8255c388
	sub_8255C388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0E0"))) PPC_WEAK_FUNC(sub_8255D0E0);
PPC_FUNC_IMPL(__imp__sub_8255D0E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255c1f0
	sub_8255C1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D0F0"))) PPC_WEAK_FUNC(sub_8255D0F0);
PPC_FUNC_IMPL(__imp__sub_8255D0F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8255c388
	sub_8255C388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D100"))) PPC_WEAK_FUNC(sub_8255D100);
PPC_FUNC_IMPL(__imp__sub_8255D100) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c670
	sub_8255C670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D110"))) PPC_WEAK_FUNC(sub_8255D110);
PPC_FUNC_IMPL(__imp__sub_8255D110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c1f0
	sub_8255C1F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D120"))) PPC_WEAK_FUNC(sub_8255D120);
PPC_FUNC_IMPL(__imp__sub_8255D120) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x8255c388
	sub_8255C388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D130"))) PPC_WEAK_FUNC(sub_8255D130);
PPC_FUNC_IMPL(__imp__sub_8255D130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255D138;
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
	// beq cr6,0x8255d194
	if (ctx.cr6.eq) goto loc_8255D194;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12196
	ctx.r31.s64 = ctx.r11.s64 + 12196;
	// lwz r11,12192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255d184
	if (!ctx.cr0.eq) goto loc_8255D184;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,708
	ctx.r9.s64 = ctx.r9.s64 + 708;
	// stw r11,12192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// bl 0x82a4c758
	ctx.lr = 0x8255D184;
	sub_82A4C758(ctx, base);
loc_8255D184:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8255d194
	if (!ctx.cr6.eq) goto loc_8255D194;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255d1a0
	goto loc_8255D1A0;
loc_8255D194:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x8255D1A0;
	sub_82339EE8(ctx, base);
loc_8255D1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D1A8"))) PPC_WEAK_FUNC(sub_8255D1A8);
PPC_FUNC_IMPL(__imp__sub_8255D1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8255D1B0;
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
	// addi r31,r11,12196
	ctx.r31.s64 = ctx.r11.s64 + 12196;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12192(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12192);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8255d1f4
	if (!ctx.cr0.eq) goto loc_8255D1F4;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,708
	ctx.r9.s64 = ctx.r9.s64 + 708;
	// stw r11,12192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12192, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,21288
	ctx.r3.s64 = ctx.r11.s64 + 21288;
	// bl 0x82a4c758
	ctx.lr = 0x8255D1F4;
	sub_82A4C758(ctx, base);
loc_8255D1F4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x8255d208
	if (ctx.cr6.eq) goto loc_8255D208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x8255D208;
	sub_82339D80(ctx, base);
loc_8255D208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D210"))) PPC_WEAK_FUNC(sub_8255D210);
PPC_FUNC_IMPL(__imp__sub_8255D210) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,676
	ctx.r10.s64 = ctx.r10.s64 + 676;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x8255d278
	if (ctx.cr6.eq) goto loc_8255D278;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82332c38
	ctx.lr = 0x8255D278;
	sub_82332C38(ctx, base);
loc_8255D278:
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

__attribute__((alias("__imp__sub_8255D290"))) PPC_WEAK_FUNC(sub_8255D290);
PPC_FUNC_IMPL(__imp__sub_8255D290) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x825640b8
	ctx.lr = 0x8255D2AC;
	sub_825640B8(ctx, base);
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

__attribute__((alias("__imp__sub_8255D2C0"))) PPC_WEAK_FUNC(sub_8255D2C0);
PPC_FUNC_IMPL(__imp__sub_8255D2C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x82400f38
	ctx.lr = 0x8255D2E4;
	sub_82400F38(ctx, base);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16980
	ctx.r11.s64 = ctx.r11.s64 + 16980;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8255d300
	if (ctx.cr0.eq) goto loc_8255D300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8255D300;
	sub_82332DB8(ctx, base);
loc_8255D300:
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

__attribute__((alias("__imp__sub_8255D320"))) PPC_WEAK_FUNC(sub_8255D320);
PPC_FUNC_IMPL(__imp__sub_8255D320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10304
	ctx.r3.s64 = ctx.r11.s64 + -10304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D330"))) PPC_WEAK_FUNC(sub_8255D330);
PPC_FUNC_IMPL(__imp__sub_8255D330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255d368
	if (ctx.cr6.eq) goto loc_8255D368;
	// bl 0x823b8fc0
	ctx.lr = 0x8255D358;
	sub_823B8FC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255d368
	if (!ctx.cr6.eq) goto loc_8255D368;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255d374
	goto loc_8255D374;
loc_8255D368:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ff548
	ctx.lr = 0x8255D374;
	sub_824FF548(ctx, base);
loc_8255D374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D390"))) PPC_WEAK_FUNC(sub_8255D390);
PPC_FUNC_IMPL(__imp__sub_8255D390) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b8fc0
	sub_823B8FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D398"))) PPC_WEAK_FUNC(sub_8255D398);
PPC_FUNC_IMPL(__imp__sub_8255D398) {
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
	// li r3,7392
	ctx.r3.s64 = 7392;
	// bl 0x82833108
	ctx.lr = 0x8255D3B4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8255d3c8
	if (ctx.cr0.eq) goto loc_8255D3C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8255d440
	ctx.lr = 0x8255D3C4;
	sub_8255D440(ctx, base);
	// b 0x8255d3cc
	goto loc_8255D3CC;
loc_8255D3C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255D3CC:
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

__attribute__((alias("__imp__sub_8255D3E0"))) PPC_WEAK_FUNC(sub_8255D3E0);
PPC_FUNC_IMPL(__imp__sub_8255D3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b8fc0
	ctx.lr = 0x8255D400;
	sub_823B8FC0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255d414
	if (ctx.cr6.eq) goto loc_8255D414;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824ff5f8
	ctx.lr = 0x8255D414;
	sub_824FF5F8(ctx, base);
loc_8255D414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D430"))) PPC_WEAK_FUNC(sub_8255D430);
PPC_FUNC_IMPL(__imp__sub_8255D430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-1384
	ctx.r3.s64 = ctx.r11.s64 + -1384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D440"))) PPC_WEAK_FUNC(sub_8255D440);
PPC_FUNC_IMPL(__imp__sub_8255D440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8255D448;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ff678
	ctx.lr = 0x8255D458;
	sub_824FF678(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// addi r10,r10,3164
	ctx.r10.s64 = ctx.r10.s64 + 3164;
	// addi r9,r9,3216
	ctx.r9.s64 = ctx.r9.s64 + 3216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r4,r30,6976
	ctx.r4.s64 = ctx.r30.s64 + 6976;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6784);
	// stw r11,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r11.u32);
	// lwz r11,6788(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6788);
	// stw r11,6788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6788, ctx.r11.u32);
	// lwz r11,6792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6792);
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// lwz r11,6796(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6796);
	// stw r11,6796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6796, ctx.r11.u32);
	// lwz r11,6800(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6800);
	// stw r11,6800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6800, ctx.r11.u32);
	// lwz r11,6804(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6804);
	// stw r11,6804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6804, ctx.r11.u32);
	// lwz r11,6808(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6808);
	// stw r11,6808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6808, ctx.r11.u32);
	// lfs f0,6812(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6812);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6812, temp.u32);
	// lwz r11,6816(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6816);
	// stw r11,6816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6816, ctx.r11.u32);
	// lwz r11,6820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6820);
	// stw r11,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r11.u32);
	// lfs f0,6824(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6824, temp.u32);
	// lfs f0,6828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6828);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6828(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6828, temp.u32);
	// lwz r11,6832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	// stw r11,6832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6832, ctx.r11.u32);
	// lwz r11,6836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6836);
	// stw r11,6836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6836, ctx.r11.u32);
	// lwz r11,6840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6840);
	// stw r11,6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// lwz r11,6844(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6844);
	// stw r11,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r11.u32);
	// lwz r11,6848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6848);
	// stw r11,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r11.u32);
	// lwz r11,6852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6852);
	// stw r11,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r11.u32);
	// lwz r11,6856(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6856);
	// stw r11,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r11.u32);
	// lwz r11,6860(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6860);
	// stw r11,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// lwz r11,6864(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6864);
	// stw r11,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r11.u32);
	// lwz r11,6868(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6868);
	// stw r11,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r11.u32);
	// lwz r11,6872(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6872);
	// stw r11,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r11.u32);
	// lwz r11,6876(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6876);
	// stw r11,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r11.u32);
	// lwz r11,6880(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6880);
	// stw r11,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r11.u32);
	// lfs f0,6884(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6884);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6884(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6884, temp.u32);
	// lwz r11,6888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6888);
	// stw r11,6888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6888, ctx.r11.u32);
	// lfs f0,6892(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6892);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6892(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6892, temp.u32);
	// lwz r11,6896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6896);
	// stw r11,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r11.u32);
	// lfs f0,6900(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6900(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6900, temp.u32);
	// lwz r11,6904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6904);
	// stw r11,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r11.u32);
	// lfs f0,6908(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6908);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6908(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6908, temp.u32);
	// lwz r11,6912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6912);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// lfs f0,6916(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6916);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6916(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6916, temp.u32);
	// lwz r11,6920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6920);
	// addi r3,r31,6976
	ctx.r3.s64 = ctx.r31.s64 + 6976;
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
	// lfs f0,6932(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6932);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6932(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6932, temp.u32);
	// lwz r11,6936(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6936);
	// stw r11,6936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6936, ctx.r11.u32);
	// lfs f0,6940(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6940);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6940(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6940, temp.u32);
	// lfs f0,6944(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6944);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6944(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6944, temp.u32);
	// lfs f0,6948(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6948, temp.u32);
	// lfs f0,6952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6952);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6952(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6952, temp.u32);
	// lfs f0,6956(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6956(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6956, temp.u32);
	// lfs f0,6960(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6960);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6960, temp.u32);
	// lfs f0,6964(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6964);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6964, temp.u32);
	// lfs f0,6968(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6968);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6968(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6968, temp.u32);
	// lfs f0,6972(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6972);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6972, temp.u32);
	// bl 0x82873b58
	ctx.lr = 0x8255D608;
	sub_82873B58(ctx, base);
	// lfs f0,7000(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7000(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7000, temp.u32);
	// addi r4,r30,7084
	ctx.r4.s64 = ctx.r30.s64 + 7084;
	// addi r3,r31,7084
	ctx.r3.s64 = ctx.r31.s64 + 7084;
	// lwz r11,7004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7004);
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
	// lwz r11,7008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7008);
	// stw r11,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r11.u32);
	// lwz r11,7012(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7012);
	// stw r11,7012(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7012, ctx.r11.u32);
	// lwz r11,7016(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7016);
	// stw r11,7016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7016, ctx.r11.u32);
	// lwz r11,7020(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7020);
	// stw r11,7020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7020, ctx.r11.u32);
	// lwz r11,7024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7024);
	// stw r11,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r11.u32);
	// lwz r11,7028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7028);
	// stw r11,7028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7028, ctx.r11.u32);
	// lfs f0,7032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7032);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7032(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7032, temp.u32);
	// lwz r11,7036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7036);
	// stw r11,7036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7036, ctx.r11.u32);
	// lfs f0,7040(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7040);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7040(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7040, temp.u32);
	// lwz r11,7044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7044);
	// stw r11,7044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7044, ctx.r11.u32);
	// lwz r11,7048(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7048);
	// stw r11,7048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7048, ctx.r11.u32);
	// lwz r11,7052(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7052);
	// stw r11,7052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7052, ctx.r11.u32);
	// lwz r11,7056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7056);
	// stw r11,7056(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7056, ctx.r11.u32);
	// lfs f0,7060(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7060);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7060(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7060, temp.u32);
	// lfs f0,7064(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7064);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7064(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7064, temp.u32);
	// lwz r11,7068(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7068);
	// stw r11,7068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7068, ctx.r11.u32);
	// lwz r11,7072(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7072);
	// stw r11,7072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7072, ctx.r11.u32);
	// lwz r11,7076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7076);
	// stw r11,7076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7076, ctx.r11.u32);
	// lfs f0,7080(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7080(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7080, temp.u32);
	// bl 0x8282f630
	ctx.lr = 0x8255D6BC;
	sub_8282F630(ctx, base);
	// lwz r9,7108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7108);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,7112
	ctx.r29.s64 = ctx.r31.s64 + 7112;
	// addi r28,r30,7112
	ctx.r28.s64 = ctx.r30.s64 + 7112;
	// stw r9,7108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7108, ctx.r9.u32);
	// stw r10,7116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7116, ctx.r10.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// stw r11,7120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7120, ctx.r11.u32);
	// stw r11,7124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7124, ctx.r11.u32);
	// stw r11,7128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7128, ctx.r11.u32);
	// stw r11,7132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7132, ctx.r11.u32);
	// stw r11,7112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7112, ctx.r11.u32);
	// beq cr6,0x8255d73c
	if (ctx.cr6.eq) goto loc_8255D73C;
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8255d73c
	if (!ctx.cr6.gt) goto loc_8255D73C;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8255d720
	if (ctx.cr0.eq) goto loc_8255D720;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x8255D720;
	sub_82332C38(ctx, base);
loc_8255D720:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82a45878
	ctx.lr = 0x8255D734;
	sub_82A45878(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
loc_8255D73C:
	// lwz r11,7136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7136);
	// stw r11,7136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7136, ctx.r11.u32);
	// lwz r11,7140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7140);
	// stw r11,7140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7140, ctx.r11.u32);
	// lfs f0,7144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7144, temp.u32);
	// lfs f0,7148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7148, temp.u32);
	// lwz r11,7152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7152);
	// stw r11,7152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7152, ctx.r11.u32);
	// lwz r11,7156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7156);
	// stw r11,7156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7156, ctx.r11.u32);
	// lfs f0,7160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7160, temp.u32);
	// lfs f0,7164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7164, temp.u32);
	// lfs f0,7168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7168, temp.u32);
	// lwz r11,7172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7172);
	// stw r11,7172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7172, ctx.r11.u32);
	// lwz r11,7176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7176);
	// stw r11,7176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7176, ctx.r11.u32);
	// lfs f0,7180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7180, temp.u32);
	// lfs f0,7184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7184, temp.u32);
	// lwz r11,7188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7188);
	// stw r11,7188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7188, ctx.r11.u32);
	// lfs f0,7192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7192, temp.u32);
	// lwz r11,7196(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7196);
	// stw r11,7196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7196, ctx.r11.u32);
	// lfs f0,7200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7200, temp.u32);
	// lfs f0,7204(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7204, temp.u32);
	// lwz r11,7208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7208);
	// stw r11,7208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7208, ctx.r11.u32);
	// lwz r11,7212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7212);
	// stw r11,7212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7212, ctx.r11.u32);
	// lwz r11,7216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7216);
	// stw r11,7216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7216, ctx.r11.u32);
	// lwz r11,7220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7220);
	// stw r11,7220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7220, ctx.r11.u32);
	// lwz r11,7224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7224);
	// stw r11,7224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7224, ctx.r11.u32);
	// lwz r11,7228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7228);
	// stw r11,7228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7228, ctx.r11.u32);
	// lwz r11,7232(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7232);
	// stw r11,7232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7232, ctx.r11.u32);
	// lwz r11,7236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7236);
	// stw r11,7236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7236, ctx.r11.u32);
	// lwz r11,7240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7240);
	// stw r11,7240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7240, ctx.r11.u32);
	// lwz r11,7244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7244);
	// stw r11,7244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7244, ctx.r11.u32);
	// lwz r11,7248(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7248);
	// stw r11,7248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7248, ctx.r11.u32);
	// lwz r11,7252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7252);
	// stw r11,7252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7252, ctx.r11.u32);
	// lfs f0,7256(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7256(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7256, temp.u32);
	// lwz r11,7260(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7260);
	// stw r11,7260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7260, ctx.r11.u32);
	// lwz r11,7264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7264);
	// stw r11,7264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7264, ctx.r11.u32);
	// lwz r11,7268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7268);
	// stw r11,7268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7268, ctx.r11.u32);
	// lwz r11,7272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7272);
	// stw r11,7272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7272, ctx.r11.u32);
	// lwz r11,7276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7276);
	// stw r11,7276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7276, ctx.r11.u32);
	// lwz r11,7280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7280);
	// stw r11,7280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7280, ctx.r11.u32);
	// lwz r11,7284(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7284);
	// stw r11,7284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7284, ctx.r11.u32);
	// lwz r11,7288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7288);
	// stw r11,7288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7288, ctx.r11.u32);
	// lwz r11,7292(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7292);
	// stw r11,7292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7292, ctx.r11.u32);
	// lwz r11,7296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7296);
	// stw r11,7296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7296, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,7300(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7300);
	// stw r11,7300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7300, ctx.r11.u32);
	// ld r11,7304(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 7304);
	// std r11,7304(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7304, ctx.r11.u64);
	// lwz r11,7312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7312);
	// stw r11,7312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7312, ctx.r11.u32);
	// lwz r11,7316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7316);
	// stw r11,7316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7316, ctx.r11.u32);
	// lwz r11,7320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7320);
	// stw r11,7320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7320, ctx.r11.u32);
	// lwz r11,7324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7324);
	// stw r11,7324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7324, ctx.r11.u32);
	// ld r11,7328(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 7328);
	// std r11,7328(r31)
	PPC_STORE_U64(ctx.r31.u32 + 7328, ctx.r11.u64);
	// lwz r11,7336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7336);
	// stw r11,7336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7336, ctx.r11.u32);
	// lwz r11,7340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7340);
	// stw r11,7340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7340, ctx.r11.u32);
	// lwz r11,7344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7344);
	// stw r11,7344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7344, ctx.r11.u32);
	// lwz r11,7348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7348);
	// stw r11,7348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7348, ctx.r11.u32);
	// lwz r11,7352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7352);
	// stw r11,7352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7352, ctx.r11.u32);
	// lwz r11,7356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7356);
	// stw r11,7356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7356, ctx.r11.u32);
	// lwz r11,7360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7360);
	// stw r11,7360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7360, ctx.r11.u32);
	// lwz r11,7364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7364);
	// stw r11,7364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7364, ctx.r11.u32);
	// lwz r11,7368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7368);
	// stw r11,7368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7368, ctx.r11.u32);
	// lwz r11,7372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7372);
	// stw r11,7372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7372, ctx.r11.u32);
	// lwz r11,7376(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7376);
	// stw r11,7376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7376, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255D920"))) PPC_WEAK_FUNC(sub_8255D920);
PPC_FUNC_IMPL(__imp__sub_8255D920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,728
	ctx.r11.s64 = ctx.r11.s64 + 728;
	// addi r10,r10,3164
	ctx.r10.s64 = ctx.r10.s64 + 3164;
	// addi r9,r9,3216
	ctx.r9.s64 = ctx.r9.s64 + 3216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r3,r31,7112
	ctx.r3.s64 = ctx.r31.s64 + 7112;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8239d768
	ctx.lr = 0x8255D968;
	sub_8239D768(ctx, base);
	// addi r3,r31,7084
	ctx.r3.s64 = ctx.r31.s64 + 7084;
	// bl 0x82400f38
	ctx.lr = 0x8255D970;
	sub_82400F38(ctx, base);
	// addi r3,r31,6976
	ctx.r3.s64 = ctx.r31.s64 + 6976;
	// bl 0x8239d768
	ctx.lr = 0x8255D978;
	sub_8239D768(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff7c8
	ctx.lr = 0x8255D980;
	sub_824FF7C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8255d990
	if (ctx.cr0.eq) goto loc_8255D990;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332db8
	ctx.lr = 0x8255D990;
	sub_82332DB8(ctx, base);
loc_8255D990:
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

__attribute__((alias("__imp__sub_8255D9B0"))) PPC_WEAK_FUNC(sub_8255D9B0);
PPC_FUNC_IMPL(__imp__sub_8255D9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-1336
	ctx.r3.s64 = ctx.r11.s64 + -1336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255D9C0"))) PPC_WEAK_FUNC(sub_8255D9C0);
PPC_FUNC_IMPL(__imp__sub_8255D9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255d9f8
	if (ctx.cr6.eq) goto loc_8255D9F8;
	// bl 0x82564058
	ctx.lr = 0x8255D9E8;
	sub_82564058(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255d9f8
	if (!ctx.cr6.eq) goto loc_8255D9F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255da04
	goto loc_8255DA04;
loc_8255D9F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ecc8
	ctx.lr = 0x8255DA04;
	sub_8233ECC8(ctx, base);
loc_8255DA04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DA20"))) PPC_WEAK_FUNC(sub_8255DA20);
PPC_FUNC_IMPL(__imp__sub_8255DA20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82564058
	sub_82564058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DA28"))) PPC_WEAK_FUNC(sub_8255DA28);
PPC_FUNC_IMPL(__imp__sub_8255DA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x8255DA48;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255da88
	if (ctx.cr0.eq) goto loc_8255DA88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8255DA5C;
	sub_8233EDC0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,3240
	ctx.r11.s64 = ctx.r11.s64 + 3240;
	// addi r10,r10,4428
	ctx.r10.s64 = ctx.r10.s64 + 4428;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8255da8c
	goto loc_8255DA8C;
loc_8255DA88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255DA8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DAA8"))) PPC_WEAK_FUNC(sub_8255DAA8);
PPC_FUNC_IMPL(__imp__sub_8255DAA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82564058
	ctx.lr = 0x8255DAC8;
	sub_82564058(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255dad8
	if (!ctx.cr6.eq) goto loc_8255DAD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8255daf0
	goto loc_8255DAF0;
loc_8255DAD8:
	// bl 0x82394fc8
	ctx.lr = 0x8255DADC;
	sub_82394FC8(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255daf0
	if (ctx.cr6.eq) goto loc_8255DAF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233eba0
	ctx.lr = 0x8255DAF0;
	sub_8233EBA0(ctx, base);
loc_8255DAF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DB08"))) PPC_WEAK_FUNC(sub_8255DB08);
PPC_FUNC_IMPL(__imp__sub_8255DB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10288
	ctx.r3.s64 = ctx.r11.s64 + -10288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DB18"))) PPC_WEAK_FUNC(sub_8255DB18);
PPC_FUNC_IMPL(__imp__sub_8255DB18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255db50
	if (ctx.cr6.eq) goto loc_8255DB50;
	// bl 0x823b9100
	ctx.lr = 0x8255DB40;
	sub_823B9100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255db50
	if (!ctx.cr6.eq) goto loc_8255DB50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255db5c
	goto loc_8255DB5C;
loc_8255DB50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d9c0
	ctx.lr = 0x8255DB5C;
	sub_8255D9C0(ctx, base);
loc_8255DB5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DB78"))) PPC_WEAK_FUNC(sub_8255DB78);
PPC_FUNC_IMPL(__imp__sub_8255DB78) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b9100
	sub_823B9100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8255DB80"))) PPC_WEAK_FUNC(sub_8255DB80);
PPC_FUNC_IMPL(__imp__sub_8255DB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,3216
	ctx.r3.s64 = 3216;
	// bl 0x82833108
	ctx.lr = 0x8255DBA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8255dbe0
	if (ctx.cr0.eq) goto loc_8255DBE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edc0
	ctx.lr = 0x8255DBB4;
	sub_8233EDC0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,4528
	ctx.r11.s64 = ctx.r11.s64 + 4528;
	// addi r10,r10,5716
	ctx.r10.s64 = ctx.r10.s64 + 5716;
	// addi r9,r9,4480
	ctx.r9.s64 = ctx.r9.s64 + 4480;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8255dbe4
	goto loc_8255DBE4;
loc_8255DBE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8255DBE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DC00"))) PPC_WEAK_FUNC(sub_8255DC00);
PPC_FUNC_IMPL(__imp__sub_8255DC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b9100
	ctx.lr = 0x8255DC20;
	sub_823B9100(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8255dc34
	if (ctx.cr6.eq) goto loc_8255DC34;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8255daa8
	ctx.lr = 0x8255DC34;
	sub_8255DAA8(ctx, base);
loc_8255DC34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DC50"))) PPC_WEAK_FUNC(sub_8255DC50);
PPC_FUNC_IMPL(__imp__sub_8255DC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10244
	ctx.r3.s64 = ctx.r11.s64 + -10244;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8255DC60"))) PPC_WEAK_FUNC(sub_8255DC60);
PPC_FUNC_IMPL(__imp__sub_8255DC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x8255dc98
	if (ctx.cr6.eq) goto loc_8255DC98;
	// bl 0x823b9248
	ctx.lr = 0x8255DC88;
	sub_823B9248(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8255dc98
	if (!ctx.cr6.eq) goto loc_8255DC98;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8255dca4
	goto loc_8255DCA4;
loc_8255DC98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8255d9c0
	ctx.lr = 0x8255DCA4;
	sub_8255D9C0(ctx, base);
loc_8255DCA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

