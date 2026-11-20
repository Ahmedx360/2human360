#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8253D428"))) PPC_WEAK_FUNC(sub_8253D428);
PPC_FUNC_IMPL(__imp__sub_8253D428) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D438"))) PPC_WEAK_FUNC(sub_8253D438);
PPC_FUNC_IMPL(__imp__sub_8253D438) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6940, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D448"))) PPC_WEAK_FUNC(sub_8253D448);
PPC_FUNC_IMPL(__imp__sub_8253D448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6948(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6948);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D460"))) PPC_WEAK_FUNC(sub_8253D460);
PPC_FUNC_IMPL(__imp__sub_8253D460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8253D468;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,7004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253d548
	if (ctx.cr6.eq) goto loc_8253D548;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// addi r30,r31,6996
	ctx.r30.s64 = ctx.r31.s64 + 6996;
	// addi r29,r31,7012
	ctx.r29.s64 = ctx.r31.s64 + 7012;
	// li r26,2
	ctx.r26.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// li r27,128
	ctx.r27.s64 = 128;
loc_8253D49C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253d524
	if (!ctx.cr6.eq) goto loc_8253D524;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8253D4B0;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253d4c4
	if (ctx.cr0.eq) goto loc_8253D4C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x8253D4C0;
	sub_82712BA0(ctx, base);
	// b 0x8253d4c8
	goto loc_8253D4C8;
loc_8253D4C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8253D4C8:
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
	// lwz r6,7004(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
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
	ctx.lr = 0x8253D50C;
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
	ctx.lr = 0x8253D524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253D524:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8253d49c
	if (!ctx.cr0.eq) goto loc_8253D49C;
loc_8253D548:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D558"))) PPC_WEAK_FUNC(sub_8253D558);
PPC_FUNC_IMPL(__imp__sub_8253D558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,6996
	ctx.r31.s64 = ctx.r3.s64 + 6996;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8253D574:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253d584
	if (ctx.cr6.eq) goto loc_8253D584;
	// bl 0x82978ed0
	ctx.lr = 0x8253D584;
	sub_82978ED0(ctx, base);
loc_8253D584:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8253d574
	if (!ctx.cr0.eq) goto loc_8253D574;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D5A8"))) PPC_WEAK_FUNC(sub_8253D5A8);
PPC_FUNC_IMPL(__imp__sub_8253D5A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6916(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// li r4,64
	ctx.r4.s64 = 64;
	// b 0x82978d98
	sub_82978D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D5B8"))) PPC_WEAK_FUNC(sub_8253D5B8);
PPC_FUNC_IMPL(__imp__sub_8253D5B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6916(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6916);
	// b 0x82978ed0
	sub_82978ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D5C0"))) PPC_WEAK_FUNC(sub_8253D5C0);
PPC_FUNC_IMPL(__imp__sub_8253D5C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,6960(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8281d650
	sub_8281D650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D5D0"))) PPC_WEAK_FUNC(sub_8253D5D0);
PPC_FUNC_IMPL(__imp__sub_8253D5D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6960);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D5E8"))) PPC_WEAK_FUNC(sub_8253D5E8);
PPC_FUNC_IMPL(__imp__sub_8253D5E8) {
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
	ctx.lr = 0x8253D604;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253d620
	if (ctx.cr0.eq) goto loc_8253D620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,1624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1624);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253D620:
	// lwz r11,6960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,6960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
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

__attribute__((alias("__imp__sub_8253D678"))) PPC_WEAK_FUNC(sub_8253D678);
PPC_FUNC_IMPL(__imp__sub_8253D678) {
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
	ctx.lr = 0x8253D694;
	sub_82332928(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253d6ac
	if (ctx.cr0.eq) goto loc_8253D6AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253D6AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d558
	ctx.lr = 0x8253D6B8;
	sub_8253D558(ctx, base);
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

__attribute__((alias("__imp__sub_8253D6D0"))) PPC_WEAK_FUNC(sub_8253D6D0);
PPC_FUNC_IMPL(__imp__sub_8253D6D0) {
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
	// lwz r11,6952(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6952);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,6948(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6948);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8253d70c
	if (!ctx.cr6.eq) goto loc_8253D70C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,580(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8253d720
	goto loc_8253D720;
loc_8253D70C:
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
loc_8253D720:
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

__attribute__((alias("__imp__sub_8253D738"))) PPC_WEAK_FUNC(sub_8253D738);
PPC_FUNC_IMPL(__imp__sub_8253D738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8253D740;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,6956(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8253d8a0
	if (ctx.cr6.eq) goto loc_8253D8A0;
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82a4ea80
	ctx.lr = 0x8253D764;
	sub_82A4EA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f12,6980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6980);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-32368(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8253d78c
	if (!ctx.cr6.gt) goto loc_8253D78C;
	// lwz r11,460(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 460);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 460, ctx.r11.u32);
loc_8253D78C:
	// lfs f12,6984(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6984);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x8253d7a4
	if (ctx.cr6.gt) goto loc_8253D7A4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8253D7A4:
	// lfs f11,6976(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6976);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,6988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6988, ctx.r11.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f11,6972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6972);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,6964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6964);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,6964
	ctx.r11.s64 = ctx.r31.s64 + 6964;
	// lfs f8,6968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6968);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,6972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6972);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,6964(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6964);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f12,6968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6968);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,104(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// blt cr6,0x8253d884
	if (ctx.cr6.lt) goto loc_8253D884;
	// lwz r10,6956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// addi r4,r11,-10440
	ctx.r4.s64 = ctx.r11.s64 + -10440;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// addi r7,r9,-21984
	ctx.r7.s64 = ctx.r9.s64 + -21984;
	// lwz r5,52(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r6,r8,-21972
	ctx.r6.s64 = ctx.r8.s64 + -21972;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// oris r11,r5,8
	ctx.r11.u64 = ctx.r5.u64 | 524288;
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,-21984(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + -21984);
	// lwz r29,4(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r28,8(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r27,-21972(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + -21972);
	// lwz r25,8(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253D884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253D884:
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// stw r30,316(r11)
	PPC_STORE_U32(ctx.r11.u32 + 316, ctx.r30.u32);
	// stw r29,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r29.u32);
	// stw r28,324(r11)
	PPC_STORE_U32(ctx.r11.u32 + 324, ctx.r28.u32);
	// stw r27,328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 328, ctx.r27.u32);
	// stw r26,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r26.u32);
	// stw r25,336(r11)
	PPC_STORE_U32(ctx.r11.u32 + 336, ctx.r25.u32);
loc_8253D8A0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253D8A8"))) PPC_WEAK_FUNC(sub_8253D8A8);
PPC_FUNC_IMPL(__imp__sub_8253D8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// lwz r30,460(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 460);
	// bl 0x824e8938
	ctx.lr = 0x8253D8CC;
	sub_824E8938(ctx, base);
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// stw r30,460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 460, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253D8F0"))) PPC_WEAK_FUNC(sub_8253D8F0);
PPC_FUNC_IMPL(__imp__sub_8253D8F0) {
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
	ctx.lr = 0x8253D900;
	sub_824DF308(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
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

__attribute__((alias("__imp__sub_8253D920"))) PPC_WEAK_FUNC(sub_8253D920);
PPC_FUNC_IMPL(__imp__sub_8253D920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8253D928;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x824116b0
	ctx.lr = 0x8253D944;
	sub_824116B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824116b0
	ctx.lr = 0x8253D950;
	sub_824116B0(ctx, base);
	// lwz r11,5480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8253d990
	if (!ctx.cr6.eq) goto loc_8253D990;
	// lis r10,22763
	ctx.r10.s64 = 1491795968;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// ori r10,r10,37495
	ctx.r10.u64 = ctx.r10.u64 | 37495;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8253d984
	if (ctx.cr6.eq) goto loc_8253D984;
	// lis r10,-19521
	ctx.r10.s64 = -1279328256;
	// ori r10,r10,23324
	ctx.r10.u64 = ctx.r10.u64 | 23324;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8253d990
	if (!ctx.cr6.eq) goto loc_8253D990;
loc_8253D984:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253da14
	if (!ctx.cr0.eq) goto loc_8253DA14;
loc_8253D990:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253fab8
	ctx.lr = 0x8253D9A4;
	sub_8253FAB8(ctx, base);
	// lwz r11,468(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253da14
	if (!ctx.cr6.eq) goto loc_8253DA14;
	// lwz r11,4360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4360);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8253da14
	if (!ctx.cr6.gt) goto loc_8253DA14;
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253da14
	if (ctx.cr6.eq) goto loc_8253DA14;
	// lwz r11,5288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8253da14
	if (ctx.cr6.gt) goto loc_8253DA14;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r4,448(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 448);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x8253D9F0;
	sub_829B9720(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x8253D9F4;
	sub_82333A20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253DA14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253DA14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253DA20"))) PPC_WEAK_FUNC(sub_8253DA20);
PPC_FUNC_IMPL(__imp__sub_8253DA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x8253DA28;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253da70
	if (ctx.cr6.eq) goto loc_8253DA70;
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253da70
	if (ctx.cr6.eq) goto loc_8253DA70;
	// lwz r11,6960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253daec
	if (!ctx.cr6.eq) goto loc_8253DAEC;
	// lwz r11,6580(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253daec
	if (ctx.cr6.eq) goto loc_8253DAEC;
loc_8253DA70:
	// lwz r11,6956(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6956);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253da88
	if (!ctx.cr6.eq) goto loc_8253DA88;
	// lwz r11,6988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253daec
	if (ctx.cr6.eq) goto loc_8253DAEC;
loc_8253DA88:
	// lwz r11,6136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6136);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253daec
	if (!ctx.cr6.gt) goto loc_8253DAEC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
loc_8253DAA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,6132(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6132);
	// bl 0x82411708
	ctx.lr = 0x8253DAB0;
	sub_82411708(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82411708
	ctx.lr = 0x8253DABC;
	sub_82411708(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwzx r3,r27,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8271d1c8
	ctx.lr = 0x8253DAD8;
	sub_8271D1C8(ctx, base);
	// lwz r11,6136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6136);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8253daa4
	if (ctx.cr6.lt) goto loc_8253DAA4;
loc_8253DAEC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x824116b0
	ctx.lr = 0x8253DAF4;
	sub_824116B0(ctx, base);
	// stw r3,6952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6952, ctx.r3.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82540a58
	ctx.lr = 0x8253DB0C;
	sub_82540A58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253DB18"))) PPC_WEAK_FUNC(sub_8253DB18);
PPC_FUNC_IMPL(__imp__sub_8253DB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253DB20;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82540248
	ctx.lr = 0x8253DB34;
	sub_82540248(ctx, base);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x8253dcc8
	if (ctx.cr6.eq) goto loc_8253DCC8;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8253dd00
	if (!ctx.cr6.eq) goto loc_8253DD00;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dd00
	if (ctx.cr0.eq) goto loc_8253DD00;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,24284
	ctx.r4.s64 = 1591476224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32798
	ctx.r4.u64 = ctx.r4.u64 | 32798;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253DB68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253DB80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dbec
	if (ctx.cr6.eq) goto loc_8253DBEC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
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
	ctx.lr = 0x8253DBB8;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8253DBEC;
	sub_8282B1E0(ctx, base);
loc_8253DBEC:
	// lwz r11,6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dca4
	if (ctx.cr6.eq) goto loc_8253DCA4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
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
	ctx.lr = 0x8253DC1C;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6828(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8253DC50;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253dca4
	if (ctx.cr0.eq) goto loc_8253DCA4;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r4,24284
	ctx.r4.s64 = 1591476224;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r4,r4,32798
	ctx.r4.u64 = ctx.r4.u64 | 32798;
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
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253DCA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253DCA4:
	// lwz r3,6920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253dcb4
	if (ctx.cr6.eq) goto loc_8253DCB4;
	// bl 0x82978ed0
	ctx.lr = 0x8253DCB4;
	sub_82978ED0(ctx, base);
loc_8253DCB4:
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253dd00
	if (ctx.cr6.eq) goto loc_8253DD00;
	// bl 0x82978ed0
	ctx.lr = 0x8253DCC4;
	sub_82978ED0(ctx, base);
	// b 0x8253dd00
	goto loc_8253DD00;
loc_8253DCC8:
	// rlwinm. r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253dd00
	if (ctx.cr0.eq) goto loc_8253DD00;
	// lwz r11,5628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253dcf0
	if (ctx.cr6.eq) goto loc_8253DCF0;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253dcf0
	if (!ctx.cr6.eq) goto loc_8253DCF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5632, ctx.r11.u32);
loc_8253DCF0:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8253DD00;
	sub_82409BE0(ctx, base);
loc_8253DD00:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253DD08"))) PPC_WEAK_FUNC(sub_8253DD08);
PPC_FUNC_IMPL(__imp__sub_8253DD08) {
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
	ctx.lr = 0x8253DD18;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
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

__attribute__((alias("__imp__sub_8253DD38"))) PPC_WEAK_FUNC(sub_8253DD38);
PPC_FUNC_IMPL(__imp__sub_8253DD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253DD48"))) PPC_WEAK_FUNC(sub_8253DD48);
PPC_FUNC_IMPL(__imp__sub_8253DD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8253DD50;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4360(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4360);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x8253dfe0
	if (!ctx.cr6.gt) goto loc_8253DFE0;
	// lwz r11,4356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4356);
	// lwz r11,188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253dfe0
	if (ctx.cr6.eq) goto loc_8253DFE0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,24912
	ctx.r3.s64 = ctx.r11.s64 + 24912;
	// bl 0x82816528
	ctx.lr = 0x8253DD8C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253DDA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq 0x8253ddfc
	if (ctx.cr0.eq) goto loc_8253DDFC;
	// addi r4,r27,112
	ctx.r4.s64 = ctx.r27.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82a4ea80
	ctx.lr = 0x8253DDCC;
	sub_82A4EA80(ctx, base);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_8253DDFC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r29,r11,-32676
	ctx.r29.s64 = ctx.r11.s64 + -32676;
	// lfs f0,-32676(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32676);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r26.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,628(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f30,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stfs f30,132(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// li r8,24710
	ctx.r8.s64 = 24710;
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// lwz r25,120(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x8253DEE8;
	sub_82825330(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// ld r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,13024(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r5,6924(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfs f0,-12104(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r28,168(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rldicr r8,r28,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8253DF30;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253df6c
	if (ctx.cr0.eq) goto loc_8253DF6C;
	// lfs f13,6976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6976);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-28874
	ctx.r4.s64 = -1892286464;
	// lfs f0,308(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,1408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1408);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ori r4,r4,34311
	ctx.r4.u64 = ctx.r4.u64 | 34311;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82979140
	ctx.lr = 0x8253DF6C;
	sub_82979140(ctx, base);
loc_8253DF6C:
	// lwz r3,6956(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r29,r11,-27300
	ctx.r29.s64 = ctx.r11.s64 + -27300;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253dfd0
	if (ctx.cr6.eq) goto loc_8253DFD0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8253dfd0
	if (ctx.cr6.eq) goto loc_8253DFD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8281d650
	ctx.lr = 0x8253DF90;
	sub_8281D650(ctx, base);
	// lwz r11,6956(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6956);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r10,-10440
	ctx.r10.s64 = ctx.r10.s64 + -10440;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,-17820(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -17820);
	ctx.f1.f64 = double(temp.f32);
	// stw r28,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// stw r8,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r8.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8253e258
	ctx.lr = 0x8253DFD0;
	sub_8253E258(ctx, base);
loc_8253DFD0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82540000
	ctx.lr = 0x8253DFE0;
	sub_82540000(ctx, base);
loc_8253DFE0:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253DFF0"))) PPC_WEAK_FUNC(sub_8253DFF0);
PPC_FUNC_IMPL(__imp__sub_8253DFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r3,r11,24928
	ctx.r3.s64 = ctx.r11.s64 + 24928;
	// bl 0x82816528
	ctx.lr = 0x8253E018;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253e054
	if (!ctx.cr6.eq) goto loc_8253E054;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253E034;
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
	ctx.lr = 0x8253E04C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
loc_8253E054:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E070"))) PPC_WEAK_FUNC(sub_8253E070);
PPC_FUNC_IMPL(__imp__sub_8253E070) {
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
	// lwz r11,2288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2288);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253E094;
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
	ctx.lr = 0x8253E0AC;
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

__attribute__((alias("__imp__sub_8253E0C0"))) PPC_WEAK_FUNC(sub_8253E0C0);
PPC_FUNC_IMPL(__imp__sub_8253E0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,7024(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7024);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,5480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253e0f0
	if (!ctx.cr6.gt) goto loc_8253E0F0;
	// lwz r10,3424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3424);
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f1,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
loc_8253E0F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,7024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 7024, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E100"))) PPC_WEAK_FUNC(sub_8253E100);
PPC_FUNC_IMPL(__imp__sub_8253E100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82a4cd78
	ctx.lr = 0x8253E124;
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8253e160
	if (!ctx.cr6.eq) goto loc_8253E160;
	// lwz r11,5480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253e158
	if (!ctx.cr6.gt) goto loc_8253E158;
	// lwz r10,3424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// mulli r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 * 56;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f31,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f31.f64 = double(temp.f32);
loc_8253E158:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7024, ctx.r11.u32);
loc_8253E160:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E180"))) PPC_WEAK_FUNC(sub_8253E180);
PPC_FUNC_IMPL(__imp__sub_8253E180) {
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
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// lwz r11,6948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6948);
	// stw r10,6940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6940, ctx.r10.u32);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x8253d558
	ctx.lr = 0x8253E1C4;
	sub_8253D558(ctx, base);
	// lwz r3,6916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// bl 0x82978ed0
	ctx.lr = 0x8253E1CC;
	sub_82978ED0(ctx, base);
	// lwz r11,6960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6960);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// bl 0x82540718
	ctx.lr = 0x8253E1E4;
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

__attribute__((alias("__imp__sub_8253E1F8"))) PPC_WEAK_FUNC(sub_8253E1F8);
PPC_FUNC_IMPL(__imp__sub_8253E1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8253E218;
	sub_82505418(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,24972
	ctx.r3.s64 = ctx.r11.s64 + 24972;
	// bl 0x82816528
	ctx.lr = 0x8253E224;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253e240
	if (!ctx.cr6.eq) goto loc_8253E240;
	// lwz r11,5484(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5484);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8253e240
	if (!ctx.cr6.eq) goto loc_8253E240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
loc_8253E240:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E258"))) PPC_WEAK_FUNC(sub_8253E258);
PPC_FUNC_IMPL(__imp__sub_8253E258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x8253E260;
	__savegprlr_29(ctx, base);
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
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x829c80b8
	ctx.lr = 0x8253E278;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253e300
	if (!ctx.cr0.eq) goto loc_8253E300;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823b00f0
	ctx.lr = 0x8253E288;
	sub_823B00F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253E29C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8253E2A8;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8253e2ec
	if (ctx.cr0.eq) goto loc_8253E2EC;
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
	// b 0x8253e2f0
	goto loc_8253E2F0;
loc_8253E2EC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8253E2F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x8253E2FC;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8253E300:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253E320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253E328"))) PPC_WEAK_FUNC(sub_8253E328);
PPC_FUNC_IMPL(__imp__sub_8253E328) {
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
	// addi r31,r11,-21936
	ctx.r31.s64 = ctx.r11.s64 + -21936;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x8253E360;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e38c
	if (ctx.cr0.eq) goto loc_8253E38C;
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
loc_8253E38C:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8253e3b0
	if (ctx.cr6.eq) goto loc_8253E3B0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x8253E3B0;
	sub_82332C38(ctx, base);
loc_8253E3B0:
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

__attribute__((alias("__imp__sub_8253E3C8"))) PPC_WEAK_FUNC(sub_8253E3C8);
PPC_FUNC_IMPL(__imp__sub_8253E3C8) {
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
	// addi r11,r11,-21936
	ctx.r11.s64 = ctx.r11.s64 + -21936;
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
	// ble cr6,0x8253e434
	if (!ctx.cr6.gt) goto loc_8253E434;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253E404:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253e424
	if (ctx.cr6.eq) goto loc_8253E424;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253e404
	if (ctx.cr6.lt) goto loc_8253E404;
	// b 0x8253e434
	goto loc_8253E434;
loc_8253E424:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_8253E434:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253e45c
	if (ctx.cr6.eq) goto loc_8253E45C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8253E454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8253e460
	goto loc_8253E460;
loc_8253E45C:
	// bl 0x824daf88
	ctx.lr = 0x8253E460;
	sub_824DAF88(ctx, base);
loc_8253E460:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E470"))) PPC_WEAK_FUNC(sub_8253E470);
PPC_FUNC_IMPL(__imp__sub_8253E470) {
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
	// addi r11,r11,-21936
	ctx.r11.s64 = ctx.r11.s64 + -21936;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8253e4d0
	if (!ctx.cr6.gt) goto loc_8253E4D0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253E49C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253e4bc
	if (ctx.cr6.eq) goto loc_8253E4BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253e49c
	if (ctx.cr6.lt) goto loc_8253E49C;
	// b 0x8253e4d0
	goto loc_8253E4D0;
loc_8253E4BC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253e4d8
	if (!ctx.cr6.eq) goto loc_8253E4D8;
loc_8253E4D0:
	// bl 0x824db030
	ctx.lr = 0x8253E4D4;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8253E4D8:
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

__attribute__((alias("__imp__sub_8253E4F0"))) PPC_WEAK_FUNC(sub_8253E4F0);
PPC_FUNC_IMPL(__imp__sub_8253E4F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21936
	ctx.r11.s64 = ctx.r11.s64 + -21936;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8253e570
	if (!ctx.cr6.gt) goto loc_8253E570;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8253E52C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8253e54c
	if (ctx.cr6.eq) goto loc_8253E54C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8253e52c
	if (ctx.cr6.lt) goto loc_8253E52C;
	// b 0x8253e570
	goto loc_8253E570;
loc_8253E54C:
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
	ctx.lr = 0x8253E568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8253e57c
	if (!ctx.cr0.eq) goto loc_8253E57C;
loc_8253E570:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x8253E57C;
	sub_824DB0B0(ctx, base);
loc_8253E57C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253E598"))) PPC_WEAK_FUNC(sub_8253E598);
PPC_FUNC_IMPL(__imp__sub_8253E598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x8253E5A0;
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
	// bl 0x82502288
	ctx.lr = 0x8253E5B0;
	sub_82502288(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,17632
	ctx.r11.s64 = ctx.r11.s64 + 17632;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,20080
	ctx.r10.s64 = ctx.r10.s64 + 20080;
	// addi r9,r9,20132
	ctx.r9.s64 = ctx.r9.s64 + 20132;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// li r7,25
	ctx.r7.s64 = 25;
	// stw r29,6872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6872, ctx.r29.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,6868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6868, ctx.r11.u32);
	// stw r29,6876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6876, ctx.r29.u32);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stw r29,6880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6880, ctx.r29.u32);
	// lfs f0,20436(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20436);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,6884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6884, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,6864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6864, ctx.r29.u32);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stw r7,6560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6560, ctx.r7.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r6,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r6.u32);
	// stfs f0,52(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// stw r10,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r10.u32);
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// lwz r4,1492(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lis r6,-32215
	ctx.r6.s64 = -2111242240;
	// stw r11,928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 928, ctx.r11.u32);
	// lis r5,-31963
	ctx.r5.s64 = -2094727168;
	// stw r9,936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 936, ctx.r9.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r29,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r29.u32);
	// lfs f0,18376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 18376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,1492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// addi r3,r10,11908
	ctx.r3.s64 = ctx.r10.s64 + 11908;
	// stw r27,96(r9)
	PPC_STORE_U32(ctx.r9.u32 + 96, ctx.r27.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f13,17148(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17148);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r27.u32);
	// lfs f12,23720(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23720);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r29.u32);
	// stfs f0,72(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lfs f0,24000(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24000);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stfs f0,1824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1824, temp.u32);
	// stw r27,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r27.u32);
	// stfs f13,6760(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6760, temp.u32);
	// stw r27,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r27.u32);
	// stfs f12,6756(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6756, temp.u32);
	// stw r27,3608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3608, ctx.r27.u32);
	// stw r27,2392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2392, ctx.r27.u32);
	// stw r27,4084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4084, ctx.r27.u32);
	// stw r27,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r27.u32);
	// stw r27,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r27.u32);
	// stw r27,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r27.u32);
	// bl 0x82816528
	ctx.lr = 0x8253E6B0;
	sub_82816528(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r28,-31949
	ctx.r28.s64 = -2093809664;
	// stw r3,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r3.u32);
	// addi r26,r11,-32516
	ctx.r26.s64 = ctx.r11.s64 + -32516;
	// stw r29,3724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3724, ctx.r29.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r29,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r29.u32);
	// stw r29,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r29.u32);
	// addi r3,r11,25200
	ctx.r3.s64 = ctx.r11.s64 + 25200;
	// stw r29,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r29.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lfs f0,-312(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -312);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r29.u32);
	// stfs f0,3988(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stw r29,6604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6604, ctx.r29.u32);
	// addi r25,r11,1268
	ctx.r25.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x8253E6F4;
	sub_82816528(ctx, base);
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,6852
	ctx.r4.s64 = ctx.r31.s64 + 6852;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82509750
	ctx.lr = 0x8253E710;
	sub_82509750(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,56(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1024
	ctx.r11.s64 = 1024;
	// stfs f0,6752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6752, temp.u32);
	// stw r27,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r27.u32);
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// lfs f0,18304(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18304);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// stfs f0,6748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6748, temp.u32);
	// stw r27,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r27.u32);
	// stfs f0,5404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// addi r3,r9,25236
	ctx.r3.s64 = ctx.r9.s64 + 25236;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82816528
	ctx.lr = 0x8253E754;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r11,25244
	ctx.r3.s64 = ctx.r11.s64 + 25244;
	// bl 0x82816528
	ctx.lr = 0x8253E764;
	sub_82816528(ctx, base);
	// addi r11,r31,4196
	ctx.r11.s64 = ctx.r31.s64 + 4196;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332d50
	ctx.lr = 0x8253E780;
	sub_82332D50(ctx, base);
	// lwz r11,4208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4208);
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253e7b4
	if (ctx.cr0.eq) goto loc_8253E7B4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
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
loc_8253E7B4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,6908(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6908, temp.u32);
	// stw r27,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r27.u32);
	// addi r26,r11,-11444
	ctx.r26.s64 = ctx.r11.s64 + -11444;
	// stw r29,5380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5380, ctx.r29.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,7637
	ctx.r5.s64 = 500498432;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,12041
	ctx.r5.u64 = ctx.r5.u64 | 12041;
	// lfs f0,-15856(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -15856);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,6816
	ctx.r4.s64 = ctx.r31.s64 + 6816;
	// lfs f13,-13636(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -13636);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// lfs f12,-13200(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -13200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,6740(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6740, temp.u32);
	// stfs f13,6744(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6744, temp.u32);
	// stfs f13,6732(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6732, temp.u32);
	// stfs f0,6736(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
	// stfs f12,6904(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6904, temp.u32);
	// bl 0x823cf190
	ctx.lr = 0x8253E80C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,29118
	ctx.r5.s64 = 1908277248;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,55883
	ctx.r5.u64 = ctx.r5.u64 | 55883;
	// addi r4,r31,6820
	ctx.r4.s64 = ctx.r31.s64 + 6820;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E82C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,16110
	ctx.r5.s64 = 1055784960;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,64205
	ctx.r5.u64 = ctx.r5.u64 | 64205;
	// addi r4,r31,6824
	ctx.r4.s64 = ctx.r31.s64 + 6824;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E84C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,4440
	ctx.r5.s64 = 290979840;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,35884
	ctx.r5.u64 = ctx.r5.u64 | 35884;
	// addi r4,r31,6828
	ctx.r4.s64 = ctx.r31.s64 + 6828;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E86C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,19920
	ctx.r5.s64 = 1305477120;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ori r5,r5,61314
	ctx.r5.u64 = ctx.r5.u64 | 61314;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,6832
	ctx.r4.s64 = ctx.r31.s64 + 6832;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E88C;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,7272
	ctx.r5.s64 = 476577792;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,17542
	ctx.r5.u64 = ctx.r5.u64 | 17542;
	// addi r4,r31,6844
	ctx.r4.s64 = ctx.r31.s64 + 6844;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E8AC;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// addi r25,r31,6836
	ctx.r25.s64 = ctx.r31.s64 + 6836;
	// lis r5,-2694
	ctx.r5.s64 = -176553984;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,12156
	ctx.r5.u64 = ctx.r5.u64 | 12156;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E8D0;
	sub_823CF190(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,18983
	ctx.r5.s64 = 1244069888;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,14265
	ctx.r5.u64 = ctx.r5.u64 | 14265;
	// addi r4,r31,6840
	ctx.r4.s64 = ctx.r31.s64 + 6840;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E8F0;
	sub_823CF190(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r5,19920
	ctx.r5.s64 = 1305477120;
	// addi r4,r31,6848
	ctx.r4.s64 = ctx.r31.s64 + 6848;
	// ori r5,r5,61314
	ctx.r5.u64 = ctx.r5.u64 | 61314;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x823cf190
	ctx.lr = 0x8253E910;
	sub_823CF190(ctx, base);
	// stw r27,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r27.u32);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lis r6,-1408
	ctx.r6.s64 = -92274688;
	// lis r5,15870
	ctx.r5.s64 = 1040056320;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ori r6,r6,17377
	ctx.r6.u64 = ctx.r6.u64 | 17377;
	// ori r5,r5,3771
	ctx.r5.u64 = ctx.r5.u64 | 3771;
	// addi r4,r31,6776
	ctx.r4.s64 = ctx.r31.s64 + 6776;
	// addi r3,r11,1268
	ctx.r3.s64 = ctx.r11.s64 + 1268;
	// bl 0x824091a0
	ctx.lr = 0x8253E938;
	sub_824091A0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r9,r31,6780
	ctx.r9.s64 = ctx.r31.s64 + 6780;
	// addi r11,r11,-32392
	ctx.r11.s64 = ctx.r11.s64 + -32392;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8253E948:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,24
	ctx.r7.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x8253e948
	if (ctx.cr6.lt) goto loc_8253E948;
	// stw r27,5784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5784, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// bl 0x8253ea70
	ctx.lr = 0x8253E974;
	sub_8253EA70(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r11,25304
	ctx.r30.s64 = ctx.r11.s64 + 25304;
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253e9b0
	if (ctx.cr6.eq) goto loc_8253E9B0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,25256
	ctx.r5.s64 = ctx.r11.s64 + 25256;
	// addi r6,r31,4224
	ctx.r6.s64 = ctx.r31.s64 + 4224;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8253E9AC;
	sub_828C5740(ctx, base);
	// lwz r11,13024(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13024);
loc_8253E9B0:
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253e9dc
	if (ctx.cr6.eq) goto loc_8253E9DC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,25372
	ctx.r5.s64 = ctx.r11.s64 + 25372;
	// addi r6,r31,4220
	ctx.r6.s64 = ctx.r31.s64 + 4220;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x828c5740
	ctx.lr = 0x8253E9DC;
	sub_828C5740(ctx, base);
loc_8253E9DC:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// stfs f0,6896(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6896, temp.u32);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// stfs f31,3948(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// lis r8,14204
	ctx.r8.s64 = 930873344;
	// stw r27,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r27.u32);
	// lis r7,7352
	ctx.r7.s64 = 481820672;
	// stw r27,3156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3156, ctx.r27.u32);
	// lfs f0,16364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16364);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,2248
	ctx.r6.s64 = 147324928;
	// lfs f13,20504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20504);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,13084
	ctx.r11.s64 = 857473024;
	// lfs f12,19544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19544);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,771
	ctx.r10.s64 = 50528256;
	// ori r9,r8,50081
	ctx.r9.u64 = ctx.r8.u64 | 50081;
	// stfs f0,6888(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6888, temp.u32);
	// ori r8,r7,52560
	ctx.r8.u64 = ctx.r7.u64 | 52560;
	// stfs f13,6892(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6892, temp.u32);
	// ori r7,r6,45756
	ctx.r7.u64 = ctx.r6.u64 | 45756;
	// stfs f12,6900(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6900, temp.u32);
	// ori r11,r11,62496
	ctx.r11.u64 = ctx.r11.u64 | 62496;
	// stw r9,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r9.u32);
	// ori r10,r10,55230
	ctx.r10.u64 = ctx.r10.u64 | 55230;
	// stw r8,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,2616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2616, ctx.r7.u32);
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// stw r10,2620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2620, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253EA60"))) PPC_WEAK_FUNC(sub_8253EA60);
PPC_FUNC_IMPL(__imp__sub_8253EA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,16608(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16608);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253EA70"))) PPC_WEAK_FUNC(sub_8253EA70);
PPC_FUNC_IMPL(__imp__sub_8253EA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253EA78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// addi r30,r31,5708
	ctx.r30.s64 = ctx.r31.s64 + 5708;
	// bl 0x82816528
	ctx.lr = 0x8253EA90;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cacf0
	ctx.lr = 0x8253EAA0;
	sub_824CACF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,25464
	ctx.r3.s64 = ctx.r11.s64 + 25464;
	// bl 0x82816528
	ctx.lr = 0x8253EAAC;
	sub_82816528(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r30,5708(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5708);
	// addi r28,r11,25488
	ctx.r28.s64 = ctx.r11.s64 + 25488;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x8253EAC4;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r30,r31,5964
	ctx.r30.s64 = ctx.r31.s64 + 5964;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cac78
	ctx.lr = 0x8253EAE0;
	sub_824CAC78(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,25500
	ctx.r3.s64 = ctx.r11.s64 + 25500;
	// bl 0x82816528
	ctx.lr = 0x8253EAEC;
	sub_82816528(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,5708(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5708);
	// bl 0x82816528
	ctx.lr = 0x8253EAFC;
	sub_82816528(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824cac78
	ctx.lr = 0x8253EB14;
	sub_824CAC78(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253EB20"))) PPC_WEAK_FUNC(sub_8253EB20);
PPC_FUNC_IMPL(__imp__sub_8253EB20) {
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
	// lwz r11,468(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 468);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,5288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5288);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,6860(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6860);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253EB60"))) PPC_WEAK_FUNC(sub_8253EB60);
PPC_FUNC_IMPL(__imp__sub_8253EB60) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,436(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 436);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blt cr6,0x8253ebd0
	if (ctx.cr6.lt) goto loc_8253EBD0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8253ebc8
	if (ctx.cr6.lt) goto loc_8253EBC8;
	// beq cr6,0x8253ebc0
	if (ctx.cr6.eq) goto loc_8253EBC0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_8253EBC0:
	// lwz r11,6772(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6772);
	// b 0x8253ebd4
	goto loc_8253EBD4;
loc_8253EBC8:
	// lwz r11,6768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6768);
	// b 0x8253ebd4
	goto loc_8253EBD4;
loc_8253EBD0:
	// lwz r11,6764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
loc_8253EBD4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253EBE0"))) PPC_WEAK_FUNC(sub_8253EBE0);
PPC_FUNC_IMPL(__imp__sub_8253EBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// beq cr6,0x8253ec3c
	if (ctx.cr6.eq) goto loc_8253EC3C;
	// addi r11,r11,-32724
	ctx.r11.s64 = ctx.r11.s64 + -32724;
	// lfs f11,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stfs f11,-4(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f0,420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
loc_8253EC3C:
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f13,-32724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253EC88"))) PPC_WEAK_FUNC(sub_8253EC88);
PPC_FUNC_IMPL(__imp__sub_8253EC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x8253ECA8;
	sub_824DD3F8(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// stw r11,6080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6080, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253ECC8"))) PPC_WEAK_FUNC(sub_8253ECC8);
PPC_FUNC_IMPL(__imp__sub_8253ECC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9d0
	ctx.lr = 0x8253ECD0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61748
	ctx.lr = 0x8253ECD8;
	__savefpr_28(ctx, base);
	// stwu r1,-3424(r1)
	ea = -3424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r29,3444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3444, ctx.r29.u32);
	// addi r4,r11,5052
	ctx.r4.s64 = ctx.r11.s64 + 5052;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82414568
	ctx.lr = 0x8253ECFC;
	sub_82414568(ctx, base);
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253ed10
	if (ctx.cr6.eq) goto loc_8253ED10;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// b 0x8253ed18
	goto loc_8253ED18;
loc_8253ED10:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8253ED18:
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82409058
	ctx.lr = 0x8253ED20;
	sub_82409058(ctx, base);
	// lwz r11,1220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// addi r10,r1,1092
	ctx.r10.s64 = ctx.r1.s64 + 1092;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8253ed44
	if (ctx.cr6.eq) goto loc_8253ED44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253ed44
	if (ctx.cr6.eq) goto loc_8253ED44;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8253ED44;
	sub_82332DB8(ctx, base);
loc_8253ED44:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// beq cr6,0x8253f530
	if (ctx.cr6.eq) goto loc_8253F530;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f530
	if (ctx.cr6.eq) goto loc_8253F530;
	// lwz r11,4360(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4360);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8253f530
	if (!ctx.cr6.lt) goto loc_8253F530;
	// lwz r10,4356(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4356);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x8253f530
	if (ctx.cr6.eq) goto loc_8253F530;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253f530
	if (!ctx.cr6.gt) goto loc_8253F530;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,-32232
	ctx.r5.s64 = -2112356352;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r17,-32232
	ctx.r17.s64 = -2112356352;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r25,r17,5624
	ctx.r25.s64 = ctx.r17.s64 + 5624;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r28,-32232
	ctx.r28.s64 = -2112356352;
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r7,r6,5552
	ctx.r7.s64 = ctx.r6.s64 + 5552;
	// addi r6,r4,5528
	ctx.r6.s64 = ctx.r4.s64 + 5528;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r29,5504
	ctx.r5.s64 = ctx.r29.s64 + 5504;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r27,5484
	ctx.r4.s64 = ctx.r27.s64 + 5484;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r10,r10,5608
	ctx.r10.s64 = ctx.r10.s64 + 5608;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r9,r9,5596
	ctx.r9.s64 = ctx.r9.s64 + 5596;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r8,5576
	ctx.r8.s64 = ctx.r8.s64 + 5576;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lis r15,-32215
	ctx.r15.s64 = -2111242240;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r18,-32232
	ctx.r18.s64 = -2112356352;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lis r19,-32232
	ctx.r19.s64 = -2112356352;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// lis r20,-32232
	ctx.r20.s64 = -2112356352;
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// lis r21,-32232
	ctx.r21.s64 = -2112356352;
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// lis r22,-32232
	ctx.r22.s64 = -2112356352;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r23,-32232
	ctx.r23.s64 = -2112356352;
	// lis r24,-32232
	ctx.r24.s64 = -2112356352;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// lis r25,-32232
	ctx.r25.s64 = -2112356352;
	// lis r26,-32232
	ctx.r26.s64 = -2112356352;
	// lis r27,-32232
	ctx.r27.s64 = -2112356352;
	// lis r28,-32232
	ctx.r28.s64 = -2112356352;
	// lis r29,-32232
	ctx.r29.s64 = -2112356352;
	// lis r3,-32232
	ctx.r3.s64 = -2112356352;
	// lis r4,-32232
	ctx.r4.s64 = -2112356352;
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
	// lis r17,-32215
	ctx.r17.s64 = -2111242240;
	// lis r14,-32244
	ctx.r14.s64 = -2113142784;
	// addi r16,r16,5464
	ctx.r16.s64 = ctx.r16.s64 + 5464;
	// addi r15,r28,-12728
	ctx.r15.s64 = ctx.r28.s64 + -12728;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// std r3,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r3.u64);
	// addi r9,r9,-13048
	ctx.r9.s64 = ctx.r9.s64 + -13048;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r10,-12968
	ctx.r10.s64 = ctx.r10.s64 + -12968;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r6,r6,-12868
	ctx.r6.s64 = ctx.r6.s64 + -12868;
	// addi r11,r11,-12996
	ctx.r11.s64 = ctx.r11.s64 + -12996;
	// std r31,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r31.u64);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r28,r8,-13072
	ctx.r28.s64 = ctx.r8.s64 + -13072;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f29,908(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 908);
	ctx.f29.f64 = double(temp.f32);
	// std r28,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r28.u64);
	// addi r7,r7,-12896
	ctx.r7.s64 = ctx.r7.s64 + -12896;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r4,-12920
	ctx.r4.s64 = ctx.r4.s64 + -12920;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r17,104(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r5,-12840
	ctx.r5.s64 = ctx.r5.s64 + -12840;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// addi r6,r6,-13024
	ctx.r6.s64 = ctx.r6.s64 + -13024;
	// lwz r17,100(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r9,-13092
	ctx.r9.s64 = ctx.r9.s64 + -13092;
	// std r30,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r30.u64);
	// addi r10,r10,-13112
	ctx.r10.s64 = ctx.r10.s64 + -13112;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-13132
	ctx.r11.s64 = ctx.r11.s64 + -13132;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// std r15,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r15.u64);
	// lfs f28,30996(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 30996);
	ctx.f28.f64 = double(temp.f32);
	// stw r17,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r17.u32);
	// addi r8,r8,-13152
	ctx.r8.s64 = ctx.r8.s64 + -13152;
	// lwz r17,96(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f31,904(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r29,-12760
	ctx.r14.s64 = ctx.r29.s64 + -12760;
	// addi r17,r17,5440
	ctx.r17.s64 = ctx.r17.s64 + 5440;
	// stw r16,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r18,r18,5276
	ctx.r18.s64 = ctx.r18.s64 + 5276;
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r17.u32);
	// addi r17,r15,5360
	ctx.r17.s64 = ctx.r15.s64 + 5360;
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// addi r7,r30,5392
	ctx.r7.s64 = ctx.r30.s64 + 5392;
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// addi r19,r19,5248
	ctx.r19.s64 = ctx.r19.s64 + 5248;
	// lwz r17,84(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r20,r20,5224
	ctx.r20.s64 = ctx.r20.s64 + 5224;
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// addi r16,r31,5416
	ctx.r16.s64 = ctx.r31.s64 + 5416;
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r16,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r16.u32);
	// addi r16,r3,5332
	ctx.r16.s64 = ctx.r3.s64 + 5332;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r21,r21,5204
	ctx.r21.s64 = ctx.r21.s64 + 5204;
	// stw r17,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r17.u32);
	// addi r22,r22,5180
	ctx.r22.s64 = ctx.r22.s64 + 5180;
	// stw r16,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// addi r16,r27,-12696
	ctx.r16.s64 = ctx.r27.s64 + -12696;
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// addi r23,r23,5156
	ctx.r23.s64 = ctx.r23.s64 + 5156;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r24,r24,5132
	ctx.r24.s64 = ctx.r24.s64 + 5132;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r25,r25,-12812
	ctx.r25.s64 = ctx.r25.s64 + -12812;
	// lwz r17,92(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r17,r17,5304
	ctx.r17.s64 = ctx.r17.s64 + 5304;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// addi r26,r26,-12788
	ctx.r26.s64 = ctx.r26.s64 + -12788;
	// ld r31,240(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// addi r27,r7,5080
	ctx.r27.s64 = ctx.r7.s64 + 5080;
	// ld r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// addi r29,r3,5104
	ctx.r29.s64 = ctx.r3.s64 + 5104;
	// ld r15,232(r1)
	ctx.r15.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r28,248(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
loc_8253F044:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f080
	if (ctx.cr6.eq) goto loc_8253F080;
	// lwz r11,3444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3444);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,4356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4356);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82411cb0
	ctx.lr = 0x8253F07C;
	sub_82411CB0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_8253F080:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f0ac
	if (ctx.cr6.eq) goto loc_8253F0AC;
	// lwz r11,3444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3444);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r11,4356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4356);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_8253F0AC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f508
	if (ctx.cr6.eq) goto loc_8253F508;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253f508
	if (ctx.cr6.eq) goto loc_8253F508;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F0D8;
	sub_829E6978(ctx, base);
	// stfs f1,1632(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1632, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F0F0;
	sub_829E6978(ctx, base);
	// stfs f1,1636(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1636, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F108;
	sub_829E6978(ctx, base);
	// stfs f1,1640(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1640, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82816528
	ctx.lr = 0x8253F114;
	sub_82816528(ctx, base);
	// stw r3,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r3.u32);
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
	ctx.lr = 0x8253F12C;
	sub_829E6978(ctx, base);
	// stfs f1,688(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F138;
	sub_82816528(ctx, base);
	// stw r3,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F150;
	sub_829E6978(ctx, base);
	// stfs f1,1648(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1648, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F168;
	sub_829E6978(ctx, base);
	// stfs f1,1652(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1652, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F180;
	sub_829E6978(ctx, base);
	// stfs f1,1656(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1656, temp.u32);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82816528
	ctx.lr = 0x8253F18C;
	sub_82816528(ctx, base);
	// stw r3,1236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1236, ctx.r3.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F1A4;
	sub_829E6978(ctx, base);
	// stfs f1,692(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F1B0;
	sub_82816528(ctx, base);
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
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
	ctx.lr = 0x8253F1C8;
	sub_829E6978(ctx, base);
	// stfs f1,1664(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1664, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F1E0;
	sub_829E6978(ctx, base);
	// stfs f1,1668(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1668, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F1F8;
	sub_829E6978(ctx, base);
	// stfs f1,1672(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1672, temp.u32);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82816528
	ctx.lr = 0x8253F204;
	sub_82816528(ctx, base);
	// stw r3,1240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1240, ctx.r3.u32);
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
	ctx.lr = 0x8253F21C;
	sub_829E6978(ctx, base);
	// stfs f1,696(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F228;
	sub_82816528(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F240;
	sub_829E6978(ctx, base);
	// stfs f1,1680(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1680, temp.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F258;
	sub_829E6978(ctx, base);
	// stfs f1,1684(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1684, temp.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F270;
	sub_829E6978(ctx, base);
	// stfs f1,1688(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1688, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F27C;
	sub_82816528(ctx, base);
	// stw r3,1244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1244, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F294;
	sub_829E6978(ctx, base);
	// stfs f1,700(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 700, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F2A0;
	sub_82816528(ctx, base);
	// stw r3,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F2B8;
	sub_829E6978(ctx, base);
	// stfs f1,1696(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1696, temp.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F2D0;
	sub_829E6978(ctx, base);
	// stfs f1,1700(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1700, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F2E8;
	sub_829E6978(ctx, base);
	// stfs f1,1704(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1704, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F2F4;
	sub_82816528(ctx, base);
	// stw r3,1248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1248, ctx.r3.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F30C;
	sub_829E6978(ctx, base);
	// stfs f1,704(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82816528
	ctx.lr = 0x8253F318;
	sub_82816528(ctx, base);
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F330;
	sub_829E6978(ctx, base);
	// stfs f1,1712(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1712, temp.u32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F348;
	sub_829E6978(ctx, base);
	// stfs f1,1716(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1716, temp.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253F360;
	sub_829E6978(ctx, base);
	// stfs f1,1720(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1720, temp.u32);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82816528
	ctx.lr = 0x8253F36C;
	sub_82816528(ctx, base);
	// stw r3,1252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1252, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F384;
	sub_829E6978(ctx, base);
	// stfs f1,708(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82816528
	ctx.lr = 0x8253F390;
	sub_82816528(ctx, base);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F3A8;
	sub_829E6978(ctx, base);
	// stfs f1,1728(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1728, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F3C0;
	sub_829E6978(ctx, base);
	// stfs f1,1732(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1732, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F3D8;
	sub_829E6978(ctx, base);
	// stfs f1,1736(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1736, temp.u32);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82816528
	ctx.lr = 0x8253F3E4;
	sub_82816528(ctx, base);
	// stw r3,1256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1256, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F3FC;
	sub_829E6978(ctx, base);
	// stfs f1,712(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82816528
	ctx.lr = 0x8253F408;
	sub_82816528(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F420;
	sub_829E6978(ctx, base);
	// stfs f1,1744(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1744, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F438;
	sub_829E6978(ctx, base);
	// stfs f1,1748(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1748, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F450;
	sub_829E6978(ctx, base);
	// stfs f1,1752(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1752, temp.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82816528
	ctx.lr = 0x8253F45C;
	sub_82816528(ctx, base);
	// stw r3,1260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1260, ctx.r3.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253F474;
	sub_829E6978(ctx, base);
	// stfs f1,716(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 716, temp.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x82816528
	ctx.lr = 0x8253F480;
	sub_82816528(ctx, base);
	// lwz r11,3444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3444);
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// lwz r11,6640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6640);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8253f4b0
	if (ctx.cr6.eq) goto loc_8253F4B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// beq cr6,0x8253f4a8
	if (ctx.cr6.eq) goto loc_8253F4A8;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// b 0x8253f4b8
	goto loc_8253F4B8;
loc_8253F4A8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x8253f4b8
	goto loc_8253F4B8;
loc_8253F4B0:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_8253F4B8:
	// stfs f0,720(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x82816528
	ctx.lr = 0x8253F4C4;
	sub_82816528(ctx, base);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// stfs f30,724(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82816528
	ctx.lr = 0x8253F4D4;
	sub_82816528(ctx, base);
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,1632
	ctx.r5.s64 = ctx.r1.s64 + 1632;
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// bl 0x829654f0
	ctx.lr = 0x8253F4F0;
	sub_829654F0(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x82965678
	ctx.lr = 0x8253F508;
	sub_82965678(ctx, base);
loc_8253F508:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8253f044
	if (ctx.cr6.lt) goto loc_8253F044;
loc_8253F530:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82333960
	ctx.lr = 0x8253F538;
	sub_82333960(ctx, base);
	// addi r1,r1,3424
	ctx.r1.s64 = ctx.r1.s64 + 3424;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82a61794
	ctx.lr = 0x8253F544;
	__restfpr_28(ctx, base);
	// b 0x82a4ea20
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253F548"))) PPC_WEAK_FUNC(sub_8253F548);
PPC_FUNC_IMPL(__imp__sub_8253F548) {
	PPC_FUNC_PROLOGUE();
	// b 0x824df418
	sub_824DF418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253F550"))) PPC_WEAK_FUNC(sub_8253F550);
PPC_FUNC_IMPL(__imp__sub_8253F550) {
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
	// bl 0x82502ca8
	ctx.lr = 0x8253F574;
	sub_82502CA8(ctx, base);
	// lwz r11,5628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253f59c
	if (ctx.cr6.eq) goto loc_8253F59C;
	// lwz r11,2380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253f59c
	if (!ctx.cr6.eq) goto loc_8253F59C;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lwz r3,1316(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// bl 0x82409be0
	ctx.lr = 0x8253F59C;
	sub_82409BE0(ctx, base);
loc_8253F59C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,6716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6716);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,908(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x8253f5e0
	if (ctx.cr6.eq) goto loc_8253F5E0;
	// lfs f12,6736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6736);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f12,6736(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8253f5e0
	if (ctx.cr6.gt) goto loc_8253F5E0;
	// lfs f12,6740(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6740);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,6716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6716, ctx.r30.u32);
	// stfs f12,6736(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
	// stfs f13,5412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
loc_8253F5E0:
	// lwz r11,6708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6708);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253f610
	if (ctx.cr6.eq) goto loc_8253F610;
	// lfs f12,6732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6732);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// stfs f12,6732(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6732, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8253f610
	if (ctx.cr6.gt) goto loc_8253F610;
	// lfs f0,6744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6744);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r30.u32);
	// stfs f0,6732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6732, temp.u32);
	// stfs f13,5412(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
loc_8253F610:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253f634
	if (ctx.cr6.eq) goto loc_8253F634;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253f634
	if (ctx.cr6.eq) goto loc_8253F634;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8253f6b4
	if (!ctx.cr6.eq) goto loc_8253F6B4;
loc_8253F634:
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// li r11,5
	ctx.r11.s64 = 5;
loc_8253F63C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// bne 0x8253f63c
	if (!ctx.cr0.eq) goto loc_8253F63C;
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
	ctx.lr = 0x8253F668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x8253f6b4
	if (!ctx.cr6.gt) goto loc_8253F6B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289f1a8
	ctx.lr = 0x8253F67C;
	sub_8289F1A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x8253f6b4
	if (ctx.cr0.gt) goto loc_8253F6B4;
	// lwz r11,628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r6,620(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82897388
	ctx.lr = 0x8253F6B4;
	sub_82897388(ctx, base);
loc_8253F6B4:
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

__attribute__((alias("__imp__sub_8253F6D0"))) PPC_WEAK_FUNC(sub_8253F6D0);
PPC_FUNC_IMPL(__imp__sub_8253F6D0) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,25524
	ctx.r3.s64 = ctx.r11.s64 + 25524;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828165a8
	ctx.lr = 0x8253F6F8;
	sub_828165A8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253f710
	if (!ctx.cr6.eq) goto loc_8253F710;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8253f734
	goto loc_8253F734;
loc_8253F710:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,25560
	ctx.r3.s64 = ctx.r11.s64 + 25560;
	// bl 0x828165a8
	ctx.lr = 0x8253F71C;
	sub_828165A8(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8253f73c
	if (!ctx.cr6.eq) goto loc_8253F73C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f2,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-11456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f1.f64 = double(temp.f32);
loc_8253F734:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82540000
	ctx.lr = 0x8253F73C;
	sub_82540000(ctx, base);
loc_8253F73C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F758"))) PPC_WEAK_FUNC(sub_8253F758);
PPC_FUNC_IMPL(__imp__sub_8253F758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x8253F760;
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
	// li r26,3
	ctx.r26.s64 = 3;
	// addi r30,r31,6804
	ctx.r30.s64 = ctx.r31.s64 + 6804;
	// addi r29,r31,6784
	ctx.r29.s64 = ctx.r31.s64 + 6784;
	// lfs f31,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,128
	ctx.r27.s64 = 128;
loc_8253F788:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253f810
	if (!ctx.cr6.eq) goto loc_8253F810;
	// li r3,1664
	ctx.r3.s64 = 1664;
	// bl 0x82833108
	ctx.lr = 0x8253F79C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8253f7b0
	if (ctx.cr0.eq) goto loc_8253F7B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82712ba0
	ctx.lr = 0x8253F7AC;
	sub_82712BA0(ctx, base);
	// b 0x8253f7b4
	goto loc_8253F7B4;
loc_8253F7B0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8253F7B4:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r4,1656(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1656);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,6776(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6776);
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
	ctx.lr = 0x8253F7F8;
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
	ctx.lr = 0x8253F810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8253F810:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8253f788
	if (!ctx.cr0.eq) goto loc_8253F788;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253F840"))) PPC_WEAK_FUNC(sub_8253F840);
PPC_FUNC_IMPL(__imp__sub_8253F840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,6804
	ctx.r31.s64 = ctx.r3.s64 + 6804;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8253F85C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253f86c
	if (ctx.cr6.eq) goto loc_8253F86C;
	// bl 0x82978ed0
	ctx.lr = 0x8253F86C;
	sub_82978ED0(ctx, base);
loc_8253F86C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8253f85c
	if (!ctx.cr0.eq) goto loc_8253F85C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253F890"))) PPC_WEAK_FUNC(sub_8253F890);
PPC_FUNC_IMPL(__imp__sub_8253F890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6708, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8253F8A8"))) PPC_WEAK_FUNC(sub_8253F8A8);
PPC_FUNC_IMPL(__imp__sub_8253F8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6716, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8253F8C0"))) PPC_WEAK_FUNC(sub_8253F8C0);
PPC_FUNC_IMPL(__imp__sub_8253F8C0) {
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
	// addi r3,r11,19992
	ctx.r3.s64 = ctx.r11.s64 + 19992;
	// bl 0x82816528
	ctx.lr = 0x8253F8E0;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f940
	ctx.lr = 0x8253F8EC;
	sub_8253F940(ctx, base);
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

__attribute__((alias("__imp__sub_8253F900"))) PPC_WEAK_FUNC(sub_8253F900);
PPC_FUNC_IMPL(__imp__sub_8253F900) {
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
	// addi r3,r11,20016
	ctx.r3.s64 = ctx.r11.s64 + 20016;
	// bl 0x82816528
	ctx.lr = 0x8253F920;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f940
	ctx.lr = 0x8253F92C;
	sub_8253F940(ctx, base);
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

__attribute__((alias("__imp__sub_8253F940"))) PPC_WEAK_FUNC(sub_8253F940);
PPC_FUNC_IMPL(__imp__sub_8253F940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8253F948;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,6836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253faac
	if (ctx.cr6.eq) goto loc_8253FAAC;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F96C;
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
	ctx.lr = 0x8253F984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lfs f11,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f11.f64 = double(temp.f32);
	// lis r28,-32215
	ctx.r28.s64 = -2111242240;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r8,24708
	ctx.r8.s64 = 24708;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// lfs f12,-32676(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -32676);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// lfs f13,908(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 908);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f0,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,280(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// bl 0x82825330
	ctx.lr = 0x8253FA64;
	sub_82825330(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r5,6836(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6836);
	// lfs f0,-12104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// ld r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rldicr r10,r31,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rldicr r8,r11,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x8253FAAC;
	sub_8282B1E0(ctx, base);
loc_8253FAAC:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253FAB8"))) PPC_WEAK_FUNC(sub_8253FAB8);
PPC_FUNC_IMPL(__imp__sub_8253FAB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253FAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82504bf8
	ctx.lr = 0x8253FAD4;
	sub_82504BF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824116b0
	ctx.lr = 0x8253FADC;
	sub_824116B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8253fb34
	if (!ctx.cr6.gt) goto loc_8253FB34;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x8253FAFC;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,6832(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r9,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x8253FB34;
	sub_8282B1E0(ctx, base);
loc_8253FB34:
	// stw r28,3148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 3148, ctx.r28.u32);
	// lwz r11,392(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8253fb48
	if (!ctx.cr6.eq) goto loc_8253FB48;
	// stw r28,392(r29)
	PPC_STORE_U32(ctx.r29.u32 + 392, ctx.r28.u32);
loc_8253FB48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253FB50"))) PPC_WEAK_FUNC(sub_8253FB50);
PPC_FUNC_IMPL(__imp__sub_8253FB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x8253FB58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829c2520
	ctx.lr = 0x8253FB64;
	sub_829C2520(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8253fb90
	if (ctx.cr0.eq) goto loc_8253FB90;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,2428
	ctx.r29.s64 = ctx.r31.s64 + 2428;
	// addi r3,r11,25592
	ctx.r3.s64 = ctx.r11.s64 + 25592;
	// bl 0x82816528
	ctx.lr = 0x8253FB7C;
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
	ctx.lr = 0x8253FB90;
	sub_824E7350(ctx, base);
loc_8253FB90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502d10
	ctx.lr = 0x8253FB98;
	sub_82502D10(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r28,r31,6860
	ctx.r28.s64 = ctx.r31.s64 + 6860;
	// stw r11,5272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5272, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,1456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253FBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r11.u32);
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,1456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1456);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253FBDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mulli r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 * 5;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x8253fbf0
	if (!ctx.cr6.lt) goto loc_8253FBF0;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8253FBF0:
	// addi r27,r31,5276
	ctx.r27.s64 = ctx.r31.s64 + 5276;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r31,5200
	ctx.r29.s64 = ctx.r31.s64 + 5200;
loc_8253FBFC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82410060
	ctx.lr = 0x8253FC08;
	sub_82410060(ctx, base);
	// lwz r10,960(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8253fc24
	if (!ctx.cr6.eq) goto loc_8253FC24;
	// lwz r10,5288(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5288);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8253FC24:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 20, ctx.xer);
	// blt cr6,0x8253fbfc
	if (ctx.cr6.lt) goto loc_8253FBFC;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// lwz r7,13024(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_8253FC58:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8253fc80
	if (ctx.cr6.lt) goto loc_8253FC80;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x8253fc78
	if (ctx.cr6.lt) goto loc_8253FC78;
	// bne cr6,0x8253fc84
	if (!ctx.cr6.eq) goto loc_8253FC84;
	// lwz r9,6772(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6772);
	// b 0x8253fc84
	goto loc_8253FC84;
loc_8253FC78:
	// lwz r9,6768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// b 0x8253fc84
	goto loc_8253FC84;
loc_8253FC80:
	// lwz r9,6764(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6764);
loc_8253FC84:
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fcc0
	if (ctx.cr6.eq) goto loc_8253FCC0;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253fcb4
	if (ctx.cr6.eq) goto loc_8253FCB4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8253fcc0
	if (!ctx.cr6.eq) goto loc_8253FCC0;
loc_8253FCB4:
	// addi r11,r8,1290
	ctx.r11.s64 = ctx.r8.s64 + 1290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
loc_8253FCC0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8253fc58
	if (ctx.cr6.lt) goto loc_8253FC58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253FCD8"))) PPC_WEAK_FUNC(sub_8253FCD8);
PPC_FUNC_IMPL(__imp__sub_8253FCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x8253FCE0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82503ca8
	ctx.lr = 0x8253FCF4;
	sub_82503CA8(ctx, base);
	// lwz r11,5728(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253fd08
	if (ctx.cr6.eq) goto loc_8253FD08;
	// lwz r4,5724(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5724);
	// b 0x8253fd10
	goto loc_8253FD10;
loc_8253FD08:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_8253FD10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82409058
	ctx.lr = 0x8253FD18;
	sub_82409058(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8253fd3c
	if (ctx.cr6.eq) goto loc_8253FD3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fd3c
	if (ctx.cr6.eq) goto loc_8253FD3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x8253FD3C;
	sub_82332DB8(ctx, base);
loc_8253FD3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253fe68
	if (ctx.cr6.eq) goto loc_8253FE68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fe68
	if (ctx.cr6.eq) goto loc_8253FE68;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r10,25608
	ctx.r4.s64 = ctx.r10.s64 + 25608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x8253FD70;
	sub_829E6978(ctx, base);
	// stfs f1,6748(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6748, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stfs f1,5404(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 5404, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,25628
	ctx.r4.s64 = ctx.r11.s64 + 25628;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253FD90;
	sub_829E6978(ctx, base);
	// stfs f1,6752(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6752, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,25648
	ctx.r4.s64 = ctx.r11.s64 + 25648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253FDAC;
	sub_829E6978(ctx, base);
	// li r11,6764
	ctx.r11.s64 = 6764;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,25660
	ctx.r4.s64 = ctx.r10.s64 + 25660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253FDD0;
	sub_829E6978(ctx, base);
	// li r11,6768
	ctx.r11.s64 = 6768;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,25672
	ctx.r4.s64 = ctx.r10.s64 + 25672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x8253FDF4;
	sub_829E6978(ctx, base);
	// li r10,6772
	ctx.r10.s64 = 6772;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,25684
	ctx.r28.s64 = ctx.r11.s64 + 25684;
	// stfiwx f0,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.f0.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8253FE14;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fe34
	if (ctx.cr0.eq) goto loc_8253FE34;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253FE30;
	sub_829E6978(ctx, base);
	// stfs f1,6756(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6756, temp.u32);
loc_8253FE34:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,25696
	ctx.r28.s64 = ctx.r11.s64 + 25696;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x829e6a48
	ctx.lr = 0x8253FE48;
	sub_829E6A48(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253fe68
	if (ctx.cr0.eq) goto loc_8253FE68;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8253FE64;
	sub_829E6978(ctx, base);
	// stfs f1,6760(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 6760, temp.u32);
loc_8253FE68:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253FE78"))) PPC_WEAK_FUNC(sub_8253FE78);
PPC_FUNC_IMPL(__imp__sub_8253FE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,4356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
loc_8253FE9C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8253febc
	if (ctx.cr6.eq) goto loc_8253FEBC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x8253fe9c
	if (!ctx.cr6.gt) goto loc_8253FE9C;
	// b 0x8253fee4
	goto loc_8253FEE4;
loc_8253FEBC:
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
	ctx.lr = 0x8253FED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ff00
	ctx.lr = 0x8253FEE4;
	sub_8253FF00(ctx, base);
loc_8253FEE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8253FF00"))) PPC_WEAK_FUNC(sub_8253FF00);
PPC_FUNC_IMPL(__imp__sub_8253FF00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bge cr6,0x8253ff7c
	if (!ctx.cr6.lt) goto loc_8253FF7C;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x8253ff30
	if (ctx.cr6.lt) goto loc_8253FF30;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x8253ff28
	if (ctx.cr6.lt) goto loc_8253FF28;
	// bne cr6,0x8253ff34
	if (!ctx.cr6.eq) goto loc_8253FF34;
	// lwz r9,6772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6772);
	// b 0x8253ff34
	goto loc_8253FF34;
loc_8253FF28:
	// lwz r9,6768(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6768);
	// b 0x8253ff34
	goto loc_8253FF34;
loc_8253FF30:
	// lwz r9,6764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
loc_8253FF34:
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
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r11,13024(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253ff6c
	if (ctx.cr6.eq) goto loc_8253FF6C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8253FF6C:
	// addi r11,r4,1290
	ctx.r11.s64 = ctx.r4.s64 + 1290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// blr 
	return;
loc_8253FF7C:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,13024(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
loc_8253FF88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x8253ffb0
	if (ctx.cr6.lt) goto loc_8253FFB0;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x8253ffa8
	if (ctx.cr6.lt) goto loc_8253FFA8;
	// bne cr6,0x8253ffb4
	if (!ctx.cr6.eq) goto loc_8253FFB4;
	// lwz r9,6772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6772);
	// b 0x8253ffb4
	goto loc_8253FFB4;
loc_8253FFA8:
	// lwz r9,6768(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6768);
	// b 0x8253ffb4
	goto loc_8253FFB4;
loc_8253FFB0:
	// lwz r9,6764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6764);
loc_8253FFB4:
	// lwz r10,4356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4356);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8253fff0
	if (ctx.cr6.eq) goto loc_8253FFF0;
	// stw r9,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r11,788(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8253ffe4
	if (ctx.cr6.eq) goto loc_8253FFE4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8253fff0
	if (!ctx.cr6.eq) goto loc_8253FFF0;
loc_8253FFE4:
	// addi r11,r8,1290
	ctx.r11.s64 = ctx.r8.s64 + 1290;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_8253FFF0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// blt cr6,0x8253ff88
	if (ctx.cr6.lt) goto loc_8253FF88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540000"))) PPC_WEAK_FUNC(sub_82540000);
PPC_FUNC_IMPL(__imp__sub_82540000) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827dff88
	ctx.lr = 0x82540024;
	sub_827DFF88(ctx, base);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lfs f31,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1024);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540050;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r8,r10,32716
	ctx.r8.s64 = ctx.r10.s64 + 32716;
	// addi r7,r9,-27300
	ctx.r7.s64 = ctx.r9.s64 + -27300;
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// lfs f12,32716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32716);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f4,-27300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27300);
	ctx.f4.f64 = double(temp.f32);
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lfs f9,304(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 304);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-31961
	ctx.r5.s64 = -2094596096;
	// lfs f8,204(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f11,16816(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16816);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lfs f13,912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 912);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12104(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,-28780(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -28780);
	ctx.f10.f64 = double(temp.f32);
	// li r5,32
	ctx.r5.s64 = 32;
	// lfs f6,15844(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 15844);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,2660(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2660);
	ctx.f5.f64 = double(temp.f32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f10,212(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lis r30,-32215
	ctx.r30.s64 = -2111242240;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lwz r8,628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f7,904(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 904);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r8,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f5,180(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,184(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lwz r31,96(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a4ea80
	ctx.lr = 0x8254011C;
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
	ctx.lr = 0x82540148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_82540168"))) PPC_WEAK_FUNC(sub_82540168);
PPC_FUNC_IMPL(__imp__sub_82540168) {
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
	// lwz r11,6712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825401b0
	if (!ctx.cr6.eq) goto loc_825401B0;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r9.u32);
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,2436(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2436);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825401AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,6732(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6732, temp.u32);
loc_825401B0:
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

__attribute__((alias("__imp__sub_825401C8"))) PPC_WEAK_FUNC(sub_825401C8);
PPC_FUNC_IMPL(__imp__sub_825401C8) {
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
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,6716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6716, ctx.r9.u32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// lwz r11,2440(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,6736(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6736, temp.u32);
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

__attribute__((alias("__imp__sub_82540218"))) PPC_WEAK_FUNC(sub_82540218);
PPC_FUNC_IMPL(__imp__sub_82540218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,6732(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6732);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540220"))) PPC_WEAK_FUNC(sub_82540220);
PPC_FUNC_IMPL(__imp__sub_82540220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,6736(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6736);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540228"))) PPC_WEAK_FUNC(sub_82540228);
PPC_FUNC_IMPL(__imp__sub_82540228) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540238"))) PPC_WEAK_FUNC(sub_82540238);
PPC_FUNC_IMPL(__imp__sub_82540238) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,5380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5380, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540248"))) PPC_WEAK_FUNC(sub_82540248);
PPC_FUNC_IMPL(__imp__sub_82540248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82540250;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// bl 0x824f01f0
	ctx.lr = 0x82540274;
	sub_824F01F0(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// blt cr6,0x825402f8
	if (ctx.cr6.lt) goto loc_825402F8;
	// beq cr6,0x825402ec
	if (ctx.cr6.eq) goto loc_825402EC;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// blt cr6,0x825402d0
	if (ctx.cr6.lt) goto loc_825402D0;
	// beq cr6,0x825402b4
	if (ctx.cr6.eq) goto loc_825402B4;
	// cmplwi cr6,r24,5
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 5, ctx.xer);
	// blt cr6,0x825402a8
	if (ctx.cr6.lt) goto loc_825402A8;
	// lwz r21,124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x82540300
	goto loc_82540300;
loc_825402A8:
	// lis r21,-6866
	ctx.r21.s64 = -449970176;
	// ori r21,r21,31988
	ctx.r21.u64 = ctx.r21.u64 | 31988;
	// b 0x82540300
	goto loc_82540300;
loc_825402B4:
	// lfs f0,5404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5404);
	ctx.f0.f64 = double(temp.f32);
	// lis r21,-19521
	ctx.r21.s64 = -1279328256;
	// lfs f13,6752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// ori r21,r21,23324
	ctx.r21.u64 = ctx.r21.u64 | 23324;
	// b 0x82540300
	goto loc_82540300;
loc_825402D0:
	// lfs f0,5404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5404);
	ctx.f0.f64 = double(temp.f32);
	// lis r21,22763
	ctx.r21.s64 = 1491795968;
	// lfs f13,6752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6752);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,5404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5404, temp.u32);
	// ori r21,r21,37495
	ctx.r21.u64 = ctx.r21.u64 | 37495;
	// b 0x82540300
	goto loc_82540300;
loc_825402EC:
	// lis r21,30100
	ctx.r21.s64 = 1972633600;
	// ori r21,r21,42004
	ctx.r21.u64 = ctx.r21.u64 | 42004;
	// b 0x82540300
	goto loc_82540300;
loc_825402F8:
	// lis r21,-13035
	ctx.r21.s64 = -854261760;
	// ori r21,r21,53749
	ctx.r21.u64 = ctx.r21.u64 | 53749;
loc_82540300:
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// beq 0x82540380
	if (ctx.cr0.eq) goto loc_82540380;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82540380
	if (ctx.cr6.eq) goto loc_82540380;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82833108
	ctx.lr = 0x8254031C;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82540370
	if (ctx.cr0.eq) goto loc_82540370;
	// lwz r28,80(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82540338
	if (ctx.cr6.eq) goto loc_82540338;
	// lwz r29,80(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x8254033c
	goto loc_8254033C;
loc_82540338:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8254033C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82833180
	ctx.lr = 0x82540344;
	sub_82833180(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// addi r11,r11,26000
	ctx.r11.s64 = ctx.r11.s64 + 26000;
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// ori r10,r10,47806
	ctx.r10.u64 = ctx.r10.u64 | 47806;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// b 0x82540374
	goto loc_82540374;
loc_82540370:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82540374:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82540380;
	sub_82833A30(ctx, base);
loc_82540380:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x825406a0
	if (ctx.cr6.eq) goto loc_825406A0;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1060(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825403A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825403B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_825403C8:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x825403c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825403C8;
	// lfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm. r11,r22,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f29.f64 = double(temp.f32);
	// beq 0x82540474
	if (ctx.cr0.eq) goto loc_82540474;
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,10628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82540474
	if (ctx.cr6.eq) goto loc_82540474;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82833108
	ctx.lr = 0x82540408;
	sub_82833108(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8254045c
	if (ctx.cr0.eq) goto loc_8254045C;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
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
	// beq cr6,0x82540440
	if (ctx.cr6.eq) goto loc_82540440;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82540434;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82540438;
	sub_82409C40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82540444
	goto loc_82540444;
loc_82540440:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82540444:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826b0548
	ctx.lr = 0x82540454;
	sub_826B0548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82540460
	goto loc_82540460;
loc_8254045C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82540460:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x8254046C;
	sub_82833A30(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r11,10628(r29)
	PPC_STORE_U32(ctx.r29.u32 + 10628, ctx.r11.u32);
loc_82540474:
	// clrlwi. r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825406a0
	if (ctx.cr0.eq) goto loc_825406A0;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x825405a0
	if (ctx.cr6.lt) goto loc_825405A0;
	// bne cr6,0x825406a0
	if (!ctx.cr6.eq) goto loc_825406A0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x824090e0
	ctx.lr = 0x82540490;
	sub_824090E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825404a0
	if (ctx.cr0.eq) goto loc_825404A0;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// stw r11,6724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6724, ctx.r11.u32);
loc_825404A0:
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825404f8
	if (ctx.cr6.eq) goto loc_825404F8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x825404C4;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6820(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
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
	ctx.lr = 0x825404F8;
	sub_8282B1E0(ctx, base);
loc_825404F8:
	// lwz r11,6828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825406a0
	if (ctx.cr6.eq) goto loc_825406A0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
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
	ctx.lr = 0x8254051C;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6828(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
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
	ctx.lr = 0x82540550;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825406a0
	if (ctx.cr0.eq) goto loc_825406A0;
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
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
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
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r9,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r9,r27,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8254069c
	goto loc_8254069C;
loc_825405A0:
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825405f8
	if (ctx.cr6.eq) goto loc_825405F8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x825405C4;
	sub_82817E08(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,6816(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// li r4,16
	ctx.r4.s64 = 16;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8282b1e0
	ctx.lr = 0x825405F8;
	sub_8282B1E0(ctx, base);
loc_825405F8:
	// lwz r11,6824(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825406a0
	if (ctx.cr6.eq) goto loc_825406A0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82817e08
	ctx.lr = 0x8254061C;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,13024(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
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
	ctx.lr = 0x82540650;
	sub_8282B1E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825406a0
	if (ctx.cr0.eq) goto loc_825406A0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rldicr r9,r27,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFF00000000;
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,284(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 284);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r7,r10,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8254069C:
	// bctrl 
	ctx.lr = 0x825406A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825406A0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825406B8"))) PPC_WEAK_FUNC(sub_825406B8);
PPC_FUNC_IMPL(__imp__sub_825406B8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x824dd7a8
	ctx.lr = 0x825406CC;
	sub_824DD7A8(ctx, base);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,2360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2360);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825406DC;
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

__attribute__((alias("__imp__sub_825406F0"))) PPC_WEAK_FUNC(sub_825406F0);
PPC_FUNC_IMPL(__imp__sub_825406F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,6188(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6188);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6640, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540718"))) PPC_WEAK_FUNC(sub_82540718);
PPC_FUNC_IMPL(__imp__sub_82540718) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8253f840
	ctx.lr = 0x82540734;
	sub_8253F840(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6716, ctx.r11.u32);
	// stw r11,6708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6708, ctx.r11.u32);
	// lfs f0,908(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
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

__attribute__((alias("__imp__sub_82540760"))) PPC_WEAK_FUNC(sub_82540760);
PPC_FUNC_IMPL(__imp__sub_82540760) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,5372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825407c4
	if (ctx.cr6.eq) goto loc_825407C4;
	// lwz r10,5364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,452(r10)
	PPC_STORE_U32(ctx.r10.u32 + 452, ctx.r11.u32);
	// stw r30,592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 592, ctx.r30.u32);
	// lwz r10,5368(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5368);
	// lwz r11,5364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5364);
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x824cac78
	ctx.lr = 0x825407C0;
	sub_824CAC78(ctx, base);
	// stw r30,5372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5372, ctx.r30.u32);
loc_825407C4:
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

__attribute__((alias("__imp__sub_825407E0"))) PPC_WEAK_FUNC(sub_825407E0);
PPC_FUNC_IMPL(__imp__sub_825407E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825407E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82540814
	if (ctx.cr6.eq) goto loc_82540814;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82540814
	if (ctx.cr6.eq) goto loc_82540814;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82540860
	if (!ctx.cr6.eq) goto loc_82540860;
loc_82540814:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8254081C:
	// lwz r11,4356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4356);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540850
	if (ctx.cr6.eq) goto loc_82540850;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540850;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82540850:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,160
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 160, ctx.xer);
	// blt cr6,0x8254081c
	if (ctx.cr6.lt) goto loc_8254081C;
loc_82540860:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540868"))) PPC_WEAK_FUNC(sub_82540868);
PPC_FUNC_IMPL(__imp__sub_82540868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825408a4
	if (ctx.cr6.eq) goto loc_825408A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825408a4
	if (ctx.cr6.eq) goto loc_825408A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82540928
	if (!ctx.cr6.eq) goto loc_82540928;
loc_825408A4:
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
loc_825408B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825408d0
	if (!ctx.cr6.eq) goto loc_825408D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x825408b0
	if (ctx.cr6.lt) goto loc_825408B0;
	// b 0x82540928
	goto loc_82540928;
loc_825408D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_825408D4:
	// bl 0x82a4cd78
	ctx.lr = 0x825408D8;
	sub_82A4CD78(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,4356(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4356);
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// subf r4,r11,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540920
	if (ctx.cr6.eq) goto loc_82540920;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254091C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82540920:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x825408d4
	if (ctx.cr6.eq) goto loc_825408D4;
loc_82540928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82540940"))) PPC_WEAK_FUNC(sub_82540940);
PPC_FUNC_IMPL(__imp__sub_82540940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82540948;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r7,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r7.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,-6866
	ctx.r4.s64 = -449970176;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r4,r4,31988
	ctx.r4.u64 = ctx.r4.u64 | 31988;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r11,1060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254097C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,852(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 852);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540994;
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
	ctx.lr = 0x825409B8;
	sub_82817E08(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// lwz r5,6844(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6844);
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
	ctx.lr = 0x825409F4;
	sub_8282B1E0(ctx, base);
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rldicr r7,r11,32,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e1bb0
	ctx.lr = 0x82540A10;
	sub_824E1BB0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540A18"))) PPC_WEAK_FUNC(sub_82540A18);
PPC_FUNC_IMPL(__imp__sub_82540A18) {
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
	// lwz r11,2424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502450
	ctx.lr = 0x82540A44;
	sub_82502450(ctx, base);
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

__attribute__((alias("__imp__sub_82540A58"))) PPC_WEAK_FUNC(sub_82540A58);
PPC_FUNC_IMPL(__imp__sub_82540A58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82540A60;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,6832(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540ac8
	if (ctx.cr6.eq) goto loc_82540AC8;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x82540A8C;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,6832(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 4);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,10548(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10548);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x82540AC8;
	sub_8282B1E0(ctx, base);
loc_82540AC8:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82504e58
	ctx.lr = 0x82540ADC;
	sub_82504E58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540AE8"))) PPC_WEAK_FUNC(sub_82540AE8);
PPC_FUNC_IMPL(__imp__sub_82540AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9f8
	ctx.lr = 0x82540AF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r6,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r6.u64);
	// lis r26,-31949
	ctx.r26.s64 = -2093809664;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r10,1492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1492);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// stw r29,1600(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1600, ctx.r29.u32);
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// lwz r10,788(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82540bec
	if (!ctx.cr6.eq) goto loc_82540BEC;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82540b4c
	if (ctx.cr6.eq) goto loc_82540B4C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82540B40;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82540B44;
	sub_82409C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82540b50
	goto loc_82540B50;
loc_82540B4C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82540B50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82540bec
	if (ctx.cr6.eq) goto loc_82540BEC;
	// lwz r3,1412(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82540bec
	if (ctx.cr6.eq) goto loc_82540BEC;
	// bl 0x824a0b58
	ctx.lr = 0x82540B68;
	sub_824A0B58(ctx, base);
	// lwz r11,11464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82540bec
	if (ctx.cr6.eq) goto loc_82540BEC;
	// lis r11,-32158
	ctx.r11.s64 = -2107506688;
	// lwz r28,80(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r3,40
	ctx.r3.s64 = 40;
	// lwz r27,80(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r11,r11,18088
	ctx.r11.s64 = ctx.r11.s64 + 18088;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82833108
	ctx.lr = 0x82540B94;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82540bdc
	if (ctx.cr0.eq) goto loc_82540BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82540BA4;
	sub_82833180(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// addi r10,r10,25808
	ctx.r10.s64 = ctx.r10.s64 + 25808;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// ori r9,r9,47806
	ctx.r9.u64 = ctx.r9.u64 | 47806;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// b 0x82540be0
	goto loc_82540BE0;
loc_82540BDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82540BE0:
	// lwz r11,13024(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82540BEC;
	sub_82833A30(ctx, base);
loc_82540BEC:
	// cmpwi cr6,r25,5
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 5, ctx.xer);
	// beq cr6,0x82540cc0
	if (ctx.cr6.eq) goto loc_82540CC0;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lfs f1,6888(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6888);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,3296
	ctx.r11.s64 = ctx.r11.s64 + 3296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825411c8
	ctx.lr = 0x82540C20;
	sub_825411C8(ctx, base);
	// bl 0x82a4cd78
	ctx.lr = 0x82540C24;
	sub_82A4CD78(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// divw r11,r3,r11
	ctx.r11.s32 = ctx.r3.s32 / ctx.r11.s32;
	// lfs f1,6892(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6892);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,3336
	ctx.r10.s64 = ctx.r10.s64 + 3336;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// bl 0x825411c8
	ctx.lr = 0x82540C60;
	sub_825411C8(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82540cc0
	if (!ctx.cr6.gt) goto loc_82540CC0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,6896(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6896);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,3328
	ctx.r11.s64 = ctx.r11.s64 + 3328;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825411c8
	ctx.lr = 0x82540C90;
	sub_825411C8(ctx, base);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82540cc0
	if (!ctx.cr6.gt) goto loc_82540CC0;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f1,6900(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6900);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,3344
	ctx.r11.s64 = ctx.r11.s64 + 3344;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x825411c8
	ctx.lr = 0x82540CC0;
	sub_825411C8(ctx, base);
loc_82540CC0:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e16a8
	ctx.lr = 0x82540CD8;
	sub_824E16A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea48
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540CE0"))) PPC_WEAK_FUNC(sub_82540CE0);
PPC_FUNC_IMPL(__imp__sub_82540CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82540D00"))) PPC_WEAK_FUNC(sub_82540D00);
PPC_FUNC_IMPL(__imp__sub_82540D00) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82540d18
	sub_82540D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540D08"))) PPC_WEAK_FUNC(sub_82540D08);
PPC_FUNC_IMPL(__imp__sub_82540D08) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82540d18
	sub_82540D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540D10"))) PPC_WEAK_FUNC(sub_82540D10);
PPC_FUNC_IMPL(__imp__sub_82540D10) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82540d18
	sub_82540D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540D18"))) PPC_WEAK_FUNC(sub_82540D18);
PPC_FUNC_IMPL(__imp__sub_82540D18) {
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
loc_82540D30:
	// bl 0x82a4cd78
	ctx.lr = 0x82540D34;
	sub_82A4CD78(ctx, base);
	// srawi r11,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 2;
	// lwz r9,6880(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6880);
	// li r10,0
	ctx.r10.s64 = 0;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// ble cr6,0x82540d78
	if (!ctx.cr6.gt) goto loc_82540D78;
	// lwz r11,6876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
loc_82540D5C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82540d30
	if (ctx.cr6.eq) goto loc_82540D30;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82540d5c
	if (ctx.cr6.lt) goto loc_82540D5C;
loc_82540D78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,6864
	ctx.r3.s64 = ctx.r31.s64 + 6864;
	// bl 0x82410060
	ctx.lr = 0x82540D84;
	sub_82410060(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2028);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82540DA4;
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

__attribute__((alias("__imp__sub_82540DC0"))) PPC_WEAK_FUNC(sub_82540DC0);
PPC_FUNC_IMPL(__imp__sub_82540DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82540DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x824f4548
	ctx.lr = 0x82540DDC;
	sub_824F4548(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82540dec
	if (ctx.cr6.eq) goto loc_82540DEC;
	// lfs f0,6908(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6908);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82540df0
	goto loc_82540DF0;
loc_82540DEC:
	// lfs f0,6904(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	ctx.f0.f64 = double(temp.f32);
loc_82540DF0:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540E00"))) PPC_WEAK_FUNC(sub_82540E00);
PPC_FUNC_IMPL(__imp__sub_82540E00) {
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
	// bl 0x82502f00
	ctx.lr = 0x82540E18;
	sub_82502F00(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6464
	ctx.r4.s64 = ctx.r31.s64 + 6464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25704
	ctx.r5.s64 = ctx.r11.s64 + 25704;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x82540E34;
	sub_824115B8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6368
	ctx.r4.s64 = ctx.r31.s64 + 6368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25744
	ctx.r5.s64 = ctx.r11.s64 + 25744;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x82540E50;
	sub_824115B8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6372
	ctx.r4.s64 = ctx.r31.s64 + 6372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,25764
	ctx.r5.s64 = ctx.r11.s64 + 25764;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824115b8
	ctx.lr = 0x82540E6C;
	sub_824115B8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6376
	ctx.r4.s64 = ctx.r31.s64 + 6376;
	// addi r5,r11,25784
	ctx.r5.s64 = ctx.r11.s64 + 25784;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82540E88;
	sub_824115B8(ctx, base);
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

__attribute__((alias("__imp__sub_82540EA0"))) PPC_WEAK_FUNC(sub_82540EA0);
PPC_FUNC_IMPL(__imp__sub_82540EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82540EA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82503038
	ctx.lr = 0x82540EB4;
	sub_82503038(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82540f48
	if (!ctx.cr6.eq) goto loc_82540F48;
	// addi r11,r31,6860
	ctx.r11.s64 = ctx.r31.s64 + 6860;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82540EDC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6764
	ctx.r10.s64 = ctx.r31.s64 + 6764;
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
	ctx.lr = 0x82540EFC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6768
	ctx.r10.s64 = ctx.r31.s64 + 6768;
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
	ctx.lr = 0x82540F1C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6772
	ctx.r10.s64 = ctx.r31.s64 + 6772;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x82540F3C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82540F48:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82540F58"))) PPC_WEAK_FUNC(sub_82540F58);
PPC_FUNC_IMPL(__imp__sub_82540F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82540F60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x825031a0
	ctx.lr = 0x82540F70;
	sub_825031A0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82541144
	if (!ctx.cr6.eq) goto loc_82541144;
	// addi r27,r31,6860
	ctx.r27.s64 = ctx.r31.s64 + 6860;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82540F98;
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
	ctx.lr = 0x82540FBC;
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
	ctx.lr = 0x82540FD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82540ff4
	if (!ctx.cr0.eq) goto loc_82540FF4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82540FE8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82540FF4:
	// addi r27,r31,6764
	ctx.r27.s64 = ctx.r31.s64 + 6764;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82541008;
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
	ctx.lr = 0x8254102C;
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
	ctx.lr = 0x82541040;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82541064
	if (!ctx.cr0.eq) goto loc_82541064;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82541058;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82541064:
	// addi r27,r31,6768
	ctx.r27.s64 = ctx.r31.s64 + 6768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82541078;
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
	ctx.lr = 0x8254109C;
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
	ctx.lr = 0x825410B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825410d4
	if (!ctx.cr0.eq) goto loc_825410D4;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825410C8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825410D4:
	// addi r27,r31,6772
	ctx.r27.s64 = ctx.r31.s64 + 6772;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825410E8;
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
	ctx.lr = 0x8254110C;
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
	ctx.lr = 0x82541120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82541144
	if (!ctx.cr0.eq) goto loc_82541144;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82541138;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82541144:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541150"))) PPC_WEAK_FUNC(sub_82541150);
PPC_FUNC_IMPL(__imp__sub_82541150) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x825411ac
	if (ctx.cr6.eq) goto loc_825411AC;
	// bl 0x825415f0
	ctx.lr = 0x82541180;
	sub_825415F0(ctx, base);
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
	ctx.lr = 0x82541198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825411a4
	if (!ctx.cr0.eq) goto loc_825411A4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825411A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x825411b0
	goto loc_825411B0;
loc_825411AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825411B0:
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

__attribute__((alias("__imp__sub_825411C8"))) PPC_WEAK_FUNC(sub_825411C8);
PPC_FUNC_IMPL(__imp__sub_825411C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825411D0;
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
	ctx.lr = 0x825411F4;
	sub_829C80B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8254128c
	if (!ctx.cr0.eq) goto loc_8254128C;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82541214
	if (!ctx.cr6.eq) goto loc_82541214;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f30,908(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f30.f64 = double(temp.f32);
loc_82541214:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823aecd0
	ctx.lr = 0x8254121C;
	sub_823AECD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541230;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82333900
	ctx.lr = 0x8254123C;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82541278
	if (ctx.cr0.eq) goto loc_82541278;
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
	// b 0x8254127c
	goto loc_8254127C;
loc_82541278:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8254127C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82410060
	ctx.lr = 0x82541288;
	sub_82410060(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8254128C:
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
	ctx.lr = 0x825412A8;
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

__attribute__((alias("__imp__sub_825412B8"))) PPC_WEAK_FUNC(sub_825412B8);
PPC_FUNC_IMPL(__imp__sub_825412B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825412f0
	if (ctx.cr6.eq) goto loc_825412F0;
	// bl 0x82541590
	ctx.lr = 0x825412E0;
	sub_82541590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825412f0
	if (!ctx.cr6.eq) goto loc_825412F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825412fc
	goto loc_825412FC;
loc_825412F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x825412FC;
	sub_82333C70(ctx, base);
loc_825412FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541318"))) PPC_WEAK_FUNC(sub_82541318);
PPC_FUNC_IMPL(__imp__sub_82541318) {
	PPC_FUNC_PROLOGUE();
	// b 0x82541590
	sub_82541590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541320"))) PPC_WEAK_FUNC(sub_82541320);
PPC_FUNC_IMPL(__imp__sub_82541320) {
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
	ctx.lr = 0x8254133C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825413ac
	if (ctx.cr0.eq) goto loc_825413AC;
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,25808
	ctx.r9.s64 = ctx.r9.s64 + 25808;
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
	// b 0x825413b0
	goto loc_825413B0;
loc_825413AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825413B0:
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

__attribute__((alias("__imp__sub_825413C8"))) PPC_WEAK_FUNC(sub_825413C8);
PPC_FUNC_IMPL(__imp__sub_825413C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82541590
	ctx.lr = 0x825413E8;
	sub_82541590(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825413fc
	if (ctx.cr6.eq) goto loc_825413FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x825413FC;
	sub_82333B08(ctx, base);
loc_825413FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541418"))) PPC_WEAK_FUNC(sub_82541418);
PPC_FUNC_IMPL(__imp__sub_82541418) {
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
	ctx.lr = 0x82541434;
	sub_82438430(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8254144C;
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

__attribute__((alias("__imp__sub_82541460"))) PPC_WEAK_FUNC(sub_82541460);
PPC_FUNC_IMPL(__imp__sub_82541460) {
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
	ctx.lr = 0x82541478;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825414cc
	if (ctx.cr0.eq) goto loc_825414CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82833180
	ctx.lr = 0x82541488;
	sub_82833180(ctx, base);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,25808
	ctx.r9.s64 = ctx.r9.s64 + 25808;
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
	// b 0x825414d0
	goto loc_825414D0;
loc_825414CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825414D0:
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

__attribute__((alias("__imp__sub_825414E8"))) PPC_WEAK_FUNC(sub_825414E8);
PPC_FUNC_IMPL(__imp__sub_825414E8) {
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
	// lwz r11,25888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25888);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541528
	if (!ctx.cr0.eq) goto loc_82541528;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,25888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25888, ctx.r11.u32);
	// addi r3,r9,4840
	ctx.r3.s64 = ctx.r9.s64 + 4840;
	// bl 0x82816528
	ctx.lr = 0x82541520;
	sub_82816528(ctx, base);
	// stw r3,25884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25884, ctx.r3.u32);
	// b 0x8254152c
	goto loc_8254152C;
loc_82541528:
	// lwz r3,25884(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25884);
loc_8254152C:
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

__attribute__((alias("__imp__sub_82541540"))) PPC_WEAK_FUNC(sub_82541540);
PPC_FUNC_IMPL(__imp__sub_82541540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82541590
	ctx.lr = 0x82541560;
	sub_82541590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541574;
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

__attribute__((alias("__imp__sub_82541590"))) PPC_WEAK_FUNC(sub_82541590);
PPC_FUNC_IMPL(__imp__sub_82541590) {
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
	// addi r31,r11,25892
	ctx.r31.s64 = ctx.r11.s64 + 25892;
	// lwz r11,25896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25896);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825415d8
	if (!ctx.cr0.eq) goto loc_825415D8;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25888
	ctx.r9.s64 = ctx.r9.s64 + 25888;
	// stw r11,25896(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25896, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20264
	ctx.r3.s64 = ctx.r11.s64 + 20264;
	// bl 0x82a4c758
	ctx.lr = 0x825415D8;
	sub_82A4C758(ctx, base);
loc_825415D8:
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

__attribute__((alias("__imp__sub_825415F0"))) PPC_WEAK_FUNC(sub_825415F0);
PPC_FUNC_IMPL(__imp__sub_825415F0) {
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
	// addi r31,r11,12100
	ctx.r31.s64 = ctx.r11.s64 + 12100;
	// lwz r11,12104(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12104);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541638
	if (!ctx.cr0.eq) goto loc_82541638;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,25980
	ctx.r9.s64 = ctx.r9.s64 + 25980;
	// stw r11,12104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12104, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20288
	ctx.r3.s64 = ctx.r11.s64 + 20288;
	// bl 0x82a4c758
	ctx.lr = 0x82541638;
	sub_82A4C758(ctx, base);
loc_82541638:
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

__attribute__((alias("__imp__sub_82541650"))) PPC_WEAK_FUNC(sub_82541650);
PPC_FUNC_IMPL(__imp__sub_82541650) {
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
	// li r3,400
	ctx.r3.s64 = 400;
	// bl 0x82833108
	ctx.lr = 0x82541664;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82541674
	if (ctx.cr0.eq) goto loc_82541674;
	// bl 0x828d4368
	ctx.lr = 0x82541670;
	sub_828D4368(ctx, base);
	// b 0x82541678
	goto loc_82541678;
loc_82541674:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541678:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541688"))) PPC_WEAK_FUNC(sub_82541688);
PPC_FUNC_IMPL(__imp__sub_82541688) {
	PPC_FUNC_PROLOGUE();
	// li r3,400
	ctx.r3.s64 = 400;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541690"))) PPC_WEAK_FUNC(sub_82541690);
PPC_FUNC_IMPL(__imp__sub_82541690) {
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
	// lwz r11,25880(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25880);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825416d0
	if (!ctx.cr0.eq) goto loc_825416D0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,25880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25880, ctx.r11.u32);
	// addi r3,r9,25908
	ctx.r3.s64 = ctx.r9.s64 + 25908;
	// bl 0x82816528
	ctx.lr = 0x825416C8;
	sub_82816528(ctx, base);
	// stw r3,25876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25876, ctx.r3.u32);
	// b 0x825416d4
	goto loc_825416D4;
loc_825416D0:
	// lwz r3,25876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25876);
loc_825416D4:
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

__attribute__((alias("__imp__sub_825416E8"))) PPC_WEAK_FUNC(sub_825416E8);
PPC_FUNC_IMPL(__imp__sub_825416E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x825415f0
	ctx.lr = 0x82541708;
	sub_825415F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254171C;
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

__attribute__((alias("__imp__sub_82541738"))) PPC_WEAK_FUNC(sub_82541738);
PPC_FUNC_IMPL(__imp__sub_82541738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82541788
	ctx.lr = 0x82541758;
	sub_82541788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8254176c
	if (ctx.cr6.eq) goto loc_8254176C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82333b08
	ctx.lr = 0x8254176C;
	sub_82333B08(ctx, base);
loc_8254176C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541788"))) PPC_WEAK_FUNC(sub_82541788);
PPC_FUNC_IMPL(__imp__sub_82541788) {
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
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,25872
	ctx.r31.s64 = ctx.r11.s64 + 25872;
	// lwz r11,-19320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19320);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x825417d0
	if (!ctx.cr0.eq) goto loc_825417D0;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,26080
	ctx.r9.s64 = ctx.r9.s64 + 26080;
	// stw r11,-19320(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19320, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20312
	ctx.r3.s64 = ctx.r11.s64 + 20312;
	// bl 0x82a4c758
	ctx.lr = 0x825417D0;
	sub_82A4C758(ctx, base);
loc_825417D0:
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

__attribute__((alias("__imp__sub_825417E8"))) PPC_WEAK_FUNC(sub_825417E8);
PPC_FUNC_IMPL(__imp__sub_825417E8) {
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
	// lwz r11,25868(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25868);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82541828
	if (!ctx.cr0.eq) goto loc_82541828;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,25868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25868, ctx.r11.u32);
	// addi r3,r9,25928
	ctx.r3.s64 = ctx.r9.s64 + 25928;
	// bl 0x82816528
	ctx.lr = 0x82541820;
	sub_82816528(ctx, base);
	// stw r3,25864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25864, ctx.r3.u32);
	// b 0x8254182c
	goto loc_8254182C;
loc_82541828:
	// lwz r3,25864(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25864);
loc_8254182C:
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

__attribute__((alias("__imp__sub_82541840"))) PPC_WEAK_FUNC(sub_82541840);
PPC_FUNC_IMPL(__imp__sub_82541840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x82541788
	ctx.lr = 0x82541860;
	sub_82541788(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82541874;
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

__attribute__((alias("__imp__sub_82541890"))) PPC_WEAK_FUNC(sub_82541890);
PPC_FUNC_IMPL(__imp__sub_82541890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825418c8
	if (ctx.cr6.eq) goto loc_825418C8;
	// bl 0x82541788
	ctx.lr = 0x825418B8;
	sub_82541788(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825418c8
	if (!ctx.cr6.eq) goto loc_825418C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825418d4
	goto loc_825418D4;
loc_825418C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333c70
	ctx.lr = 0x825418D4;
	sub_82333C70(ctx, base);
loc_825418D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825418F0"))) PPC_WEAK_FUNC(sub_825418F0);
PPC_FUNC_IMPL(__imp__sub_825418F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82541788
	sub_82541788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825418F8"))) PPC_WEAK_FUNC(sub_825418F8);
PPC_FUNC_IMPL(__imp__sub_825418F8) {
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
	ctx.lr = 0x82541914;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8254196c
	if (ctx.cr0.eq) goto loc_8254196C;
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
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r9,26000
	ctx.r9.s64 = ctx.r9.s64 + 26000;
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
	// b 0x82541970
	goto loc_82541970;
loc_8254196C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541970:
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

__attribute__((alias("__imp__sub_82541988"))) PPC_WEAK_FUNC(sub_82541988);
PPC_FUNC_IMPL(__imp__sub_82541988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541998"))) PPC_WEAK_FUNC(sub_82541998);
PPC_FUNC_IMPL(__imp__sub_82541998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-15456
	ctx.r3.s64 = ctx.r11.s64 + -15456;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825419A8"))) PPC_WEAK_FUNC(sub_825419A8);
PPC_FUNC_IMPL(__imp__sub_825419A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825419e0
	if (ctx.cr6.eq) goto loc_825419E0;
	// bl 0x823b1570
	ctx.lr = 0x825419D0;
	sub_823B1570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825419e0
	if (!ctx.cr6.eq) goto loc_825419E0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825419ec
	goto loc_825419EC;
loc_825419E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823625a8
	ctx.lr = 0x825419EC;
	sub_823625A8(ctx, base);
loc_825419EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541A08"))) PPC_WEAK_FUNC(sub_82541A08);
PPC_FUNC_IMPL(__imp__sub_82541A08) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b1570
	sub_823B1570(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541A10"))) PPC_WEAK_FUNC(sub_82541A10);
PPC_FUNC_IMPL(__imp__sub_82541A10) {
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
	// li r3,7024
	ctx.r3.s64 = 7024;
	// bl 0x82833108
	ctx.lr = 0x82541A30;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82541aa0
	if (ctx.cr0.eq) goto loc_82541AA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362798
	ctx.lr = 0x82541A44;
	sub_82362798(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// addi r10,r10,29000
	ctx.r10.s64 = ctx.r10.s64 + 29000;
	// addi r9,r9,29052
	ctx.r9.s64 = ctx.r9.s64 + 29052;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwz r11,6992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6992);
	// stw r11,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r11.u32);
	// lwz r11,6996(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6996);
	// stw r11,6996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6996, ctx.r11.u32);
	// lwz r11,7000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7000);
	// stw r11,7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7000, ctx.r11.u32);
	// lwz r11,7004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7004);
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
	// lwz r11,7008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7008);
	// stw r11,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r11.u32);
	// lfs f0,7012(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 7012);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
	// b 0x82541aa4
	goto loc_82541AA4;
loc_82541AA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541AA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541AC0"))) PPC_WEAK_FUNC(sub_82541AC0);
PPC_FUNC_IMPL(__imp__sub_82541AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1570
	ctx.lr = 0x82541AE0;
	sub_823B1570(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541af0
	if (!ctx.cr6.eq) goto loc_82541AF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82541b08
	goto loc_82541B08;
loc_82541AF0:
	// bl 0x823af4f0
	ctx.lr = 0x82541AF4;
	sub_823AF4F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82541b08
	if (ctx.cr6.eq) goto loc_82541B08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x82541B08;
	sub_82361DC8(ctx, base);
loc_82541B08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B20"))) PPC_WEAK_FUNC(sub_82541B20);
PPC_FUNC_IMPL(__imp__sub_82541B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26104
	ctx.r3.s64 = ctx.r11.s64 + 26104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B30"))) PPC_WEAK_FUNC(sub_82541B30);
PPC_FUNC_IMPL(__imp__sub_82541B30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-15396
	ctx.r3.s64 = ctx.r11.s64 + -15396;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541B40"))) PPC_WEAK_FUNC(sub_82541B40);
PPC_FUNC_IMPL(__imp__sub_82541B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82541b78
	if (ctx.cr6.eq) goto loc_82541B78;
	// bl 0x823b1870
	ctx.lr = 0x82541B68;
	sub_823B1870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541b78
	if (!ctx.cr6.eq) goto loc_82541B78;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82541b84
	goto loc_82541B84;
loc_82541B78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823625a8
	ctx.lr = 0x82541B84;
	sub_823625A8(ctx, base);
loc_82541B84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541BA0"))) PPC_WEAK_FUNC(sub_82541BA0);
PPC_FUNC_IMPL(__imp__sub_82541BA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b1870
	sub_823B1870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541BA8"))) PPC_WEAK_FUNC(sub_82541BA8);
PPC_FUNC_IMPL(__imp__sub_82541BA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823af4f0
	sub_823AF4F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541BB0"))) PPC_WEAK_FUNC(sub_82541BB0);
PPC_FUNC_IMPL(__imp__sub_82541BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,6992
	ctx.r3.s64 = 6992;
	// bl 0x82833108
	ctx.lr = 0x82541BD0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82541c10
	if (ctx.cr0.eq) goto loc_82541C10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362798
	ctx.lr = 0x82541BE4;
	sub_82362798(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,29080
	ctx.r11.s64 = ctx.r11.s64 + 29080;
	// addi r10,r10,31528
	ctx.r10.s64 = ctx.r10.s64 + 31528;
	// addi r9,r9,22740
	ctx.r9.s64 = ctx.r9.s64 + 22740;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82541c14
	goto loc_82541C14;
loc_82541C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541C14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C30"))) PPC_WEAK_FUNC(sub_82541C30);
PPC_FUNC_IMPL(__imp__sub_82541C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b1870
	ctx.lr = 0x82541C50;
	sub_823B1870(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541c60
	if (!ctx.cr6.eq) goto loc_82541C60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82541c78
	goto loc_82541C78;
loc_82541C60:
	// bl 0x823af4f0
	ctx.lr = 0x82541C64;
	sub_823AF4F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82541c78
	if (ctx.cr6.eq) goto loc_82541C78;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x82541C78;
	sub_82361DC8(ctx, base);
loc_82541C78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541C90"))) PPC_WEAK_FUNC(sub_82541C90);
PPC_FUNC_IMPL(__imp__sub_82541C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26184
	ctx.r3.s64 = ctx.r11.s64 + 26184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CA0"))) PPC_WEAK_FUNC(sub_82541CA0);
PPC_FUNC_IMPL(__imp__sub_82541CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14908
	ctx.r3.s64 = ctx.r11.s64 + -14908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541CB0"))) PPC_WEAK_FUNC(sub_82541CB0);
PPC_FUNC_IMPL(__imp__sub_82541CB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82541ce8
	if (ctx.cr6.eq) goto loc_82541CE8;
	// bl 0x823b2188
	ctx.lr = 0x82541CD8;
	sub_823B2188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541ce8
	if (!ctx.cr6.eq) goto loc_82541CE8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82541cf4
	goto loc_82541CF4;
loc_82541CE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363aa8
	ctx.lr = 0x82541CF4;
	sub_82363AA8(ctx, base);
loc_82541CF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D10"))) PPC_WEAK_FUNC(sub_82541D10);
PPC_FUNC_IMPL(__imp__sub_82541D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b2188
	sub_823B2188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541D18"))) PPC_WEAK_FUNC(sub_82541D18);
PPC_FUNC_IMPL(__imp__sub_82541D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x82541D38;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82541d78
	if (ctx.cr0.eq) goto loc_82541D78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c88
	ctx.lr = 0x82541D4C;
	sub_82363C88(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,31584
	ctx.r11.s64 = ctx.r11.s64 + 31584;
	// addi r10,r10,-31504
	ctx.r10.s64 = ctx.r10.s64 + -31504;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82541d7c
	goto loc_82541D7C;
loc_82541D78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541D7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541D98"))) PPC_WEAK_FUNC(sub_82541D98);
PPC_FUNC_IMPL(__imp__sub_82541D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2188
	ctx.lr = 0x82541DB8;
	sub_823B2188(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541dc8
	if (!ctx.cr6.eq) goto loc_82541DC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82541de0
	goto loc_82541DE0;
loc_82541DC8:
	// bl 0x823b00f0
	ctx.lr = 0x82541DCC;
	sub_823B00F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82541de0
	if (ctx.cr6.eq) goto loc_82541DE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x82541DE0;
	sub_82361DC8(ctx, base);
loc_82541DE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541DF8"))) PPC_WEAK_FUNC(sub_82541DF8);
PPC_FUNC_IMPL(__imp__sub_82541DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26264
	ctx.r3.s64 = ctx.r11.s64 + 26264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E08"))) PPC_WEAK_FUNC(sub_82541E08);
PPC_FUNC_IMPL(__imp__sub_82541E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14876
	ctx.r3.s64 = ctx.r11.s64 + -14876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E18"))) PPC_WEAK_FUNC(sub_82541E18);
PPC_FUNC_IMPL(__imp__sub_82541E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82541e50
	if (ctx.cr6.eq) goto loc_82541E50;
	// bl 0x823b2310
	ctx.lr = 0x82541E40;
	sub_823B2310(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541e50
	if (!ctx.cr6.eq) goto loc_82541E50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82541e5c
	goto loc_82541E5C;
loc_82541E50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363aa8
	ctx.lr = 0x82541E5C;
	sub_82363AA8(ctx, base);
loc_82541E5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541E78"))) PPC_WEAK_FUNC(sub_82541E78);
PPC_FUNC_IMPL(__imp__sub_82541E78) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b2310
	sub_823B2310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541E80"))) PPC_WEAK_FUNC(sub_82541E80);
PPC_FUNC_IMPL(__imp__sub_82541E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x82541EA0;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82541ee0
	if (ctx.cr0.eq) goto loc_82541EE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c88
	ctx.lr = 0x82541EB4;
	sub_82363C88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,-31448
	ctx.r11.s64 = ctx.r11.s64 + -31448;
	// addi r10,r10,-29000
	ctx.r10.s64 = ctx.r10.s64 + -29000;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x82541ee4
	goto loc_82541EE4;
loc_82541EE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82541EE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F00"))) PPC_WEAK_FUNC(sub_82541F00);
PPC_FUNC_IMPL(__imp__sub_82541F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2310
	ctx.lr = 0x82541F20;
	sub_823B2310(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541f30
	if (!ctx.cr6.eq) goto loc_82541F30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82541f48
	goto loc_82541F48;
loc_82541F30:
	// bl 0x823b00f0
	ctx.lr = 0x82541F34;
	sub_823B00F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82541f48
	if (ctx.cr6.eq) goto loc_82541F48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x82541F48;
	sub_82361DC8(ctx, base);
loc_82541F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F60"))) PPC_WEAK_FUNC(sub_82541F60);
PPC_FUNC_IMPL(__imp__sub_82541F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F70"))) PPC_WEAK_FUNC(sub_82541F70);
PPC_FUNC_IMPL(__imp__sub_82541F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-14528
	ctx.r3.s64 = ctx.r11.s64 + -14528;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541F80"))) PPC_WEAK_FUNC(sub_82541F80);
PPC_FUNC_IMPL(__imp__sub_82541F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82541fb8
	if (ctx.cr6.eq) goto loc_82541FB8;
	// bl 0x823b2968
	ctx.lr = 0x82541FA8;
	sub_823B2968(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82541fb8
	if (!ctx.cr6.eq) goto loc_82541FB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82541fc4
	goto loc_82541FC4;
loc_82541FB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363aa8
	ctx.lr = 0x82541FC4;
	sub_82363AA8(ctx, base);
loc_82541FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82541FE0"))) PPC_WEAK_FUNC(sub_82541FE0);
PPC_FUNC_IMPL(__imp__sub_82541FE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b2968
	sub_823B2968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82541FE8"))) PPC_WEAK_FUNC(sub_82541FE8);
PPC_FUNC_IMPL(__imp__sub_82541FE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// li r3,7040
	ctx.r3.s64 = 7040;
	// bl 0x82833108
	ctx.lr = 0x82542008;
	sub_82833108(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82542048
	if (ctx.cr0.eq) goto loc_82542048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363c88
	ctx.lr = 0x8254201C;
	sub_82363C88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// addi r9,r9,-13324
	ctx.r9.s64 = ctx.r9.s64 + -13324;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// b 0x8254204c
	goto loc_8254204C;
loc_82542048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8254204C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542068"))) PPC_WEAK_FUNC(sub_82542068);
PPC_FUNC_IMPL(__imp__sub_82542068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b2968
	ctx.lr = 0x82542088;
	sub_823B2968(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82542098
	if (!ctx.cr6.eq) goto loc_82542098;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x825420b0
	goto loc_825420B0;
loc_82542098:
	// bl 0x823b00f0
	ctx.lr = 0x8254209C;
	sub_823B00F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x825420b0
	if (ctx.cr6.eq) goto loc_825420B0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361dc8
	ctx.lr = 0x825420B0;
	sub_82361DC8(ctx, base);
loc_825420B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420C8"))) PPC_WEAK_FUNC(sub_825420C8);
PPC_FUNC_IMPL(__imp__sub_825420C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26424
	ctx.r3.s64 = ctx.r11.s64 + 26424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420D8"))) PPC_WEAK_FUNC(sub_825420D8);
PPC_FUNC_IMPL(__imp__sub_825420D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// b 0x82535010
	sub_82535010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825420E8"))) PPC_WEAK_FUNC(sub_825420E8);
PPC_FUNC_IMPL(__imp__sub_825420E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825420F0"))) PPC_WEAK_FUNC(sub_825420F0);
PPC_FUNC_IMPL(__imp__sub_825420F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x825420F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82534680
	ctx.lr = 0x82542104;
	sub_82534680(ctx, base);
	// lis r11,9930
	ctx.r11.s64 = 650772480;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r29,r11,31812
	ctx.r29.u64 = ctx.r11.u64 | 31812;
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82542168
	if (!ctx.cr6.eq) goto loc_82542168;
	// lwz r28,1608(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x8239c5f0
	ctx.lr = 0x82542124;
	sub_8239C5F0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254213C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82542168
	if (ctx.cr0.eq) goto loc_82542168;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,3424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
loc_82542168:
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825421f8
	if (!ctx.cr6.eq) goto loc_825421F8;
	// lwz r11,2780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2780);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8284da30
	ctx.lr = 0x82542190;
	sub_8284DA30(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828250b0
	ctx.lr = 0x825421CC;
	sub_828250B0(ctx, base);
	// bl 0x823329e8
	ctx.lr = 0x825421D0;
	sub_823329E8(ctx, base);
	// stw r3,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r3.u32);
	// lwz r11,960(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r31,1432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1432, ctx.r31.u32);
	// stw r28,1436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1436, ctx.r28.u32);
	// bne cr6,0x825421f8
	if (!ctx.cr6.eq) goto loc_825421F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,1008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1008);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825421F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825421F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542200"))) PPC_WEAK_FUNC(sub_82542200);
PPC_FUNC_IMPL(__imp__sub_82542200) {
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
	// bl 0x825350d0
	ctx.lr = 0x82542224;
	sub_825350D0(ctx, base);
	// lwz r11,7008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8254226c
	if (ctx.cr6.eq) goto loc_8254226C;
	// lwz r11,6996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82542268
	if (ctx.cr6.eq) goto loc_82542268;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7000, ctx.r10.u32);
	// beq cr6,0x8254225c
	if (ctx.cr6.eq) goto loc_8254225C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825422c0
	ctx.lr = 0x8254225C;
	sub_825422C0(ctx, base);
loc_8254225C:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// lfs f0,20416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
loc_82542268:
	// stw r30,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r30.u32);
loc_8254226C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,7012(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x825422a4
	if (!ctx.cr6.gt) goto loc_825422A4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,7012(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7012, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825422a4
	if (ctx.cr6.gt) goto loc_825422A4;
	// lwz r3,6992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825422a0
	if (ctx.cr6.eq) goto loc_825422A0;
	// bl 0x82715610
	ctx.lr = 0x825422A0;
	sub_82715610(ctx, base);
loc_825422A0:
	// stw r30,7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7000, ctx.r30.u32);
loc_825422A4:
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

__attribute__((alias("__imp__sub_825422C0"))) PPC_WEAK_FUNC(sub_825422C0);
PPC_FUNC_IMPL(__imp__sub_825422C0) {
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
	// lwz r11,6996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	// lwz r3,6992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82715f60
	ctx.lr = 0x825422F0;
	sub_82715F60(ctx, base);
	// lwz r11,6996(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6996);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,5356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5356);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8281d9b0
	ctx.lr = 0x8254231C;
	sub_8281D9B0(ctx, base);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,1460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1460, ctx.r8.u32);
	// stw r7,1464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1464, ctx.r7.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,1456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1456, ctx.r10.u32);
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r10,3340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3340);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stfs f0,1616(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1616, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stw r10,1424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1424, ctx.r10.u32);
	// stw r9,1640(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1640, ctx.r9.u32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,1620(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1620, temp.u32);
	// lwz r3,6992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82542388;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825423c8
	if (!ctx.cr6.eq) goto loc_825423C8;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r11,7004(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,13024(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// lfs f0,908(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 908);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,984(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 984);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,964(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 964, temp.u32);
	// bne 0x825423c8
	if (!ctx.cr0.eq) goto loc_825423C8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,7004(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7004, ctx.r11.u32);
loc_825423C8:
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

__attribute__((alias("__imp__sub_825423E0"))) PPC_WEAK_FUNC(sub_825423E0);
PPC_FUNC_IMPL(__imp__sub_825423E0) {
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
	// bl 0x82533178
	ctx.lr = 0x825423F8;
	sub_82533178(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6600
	ctx.r4.s64 = ctx.r31.s64 + 6600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-10204
	ctx.r5.s64 = ctx.r11.s64 + -10204;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x824f9968
	ctx.lr = 0x82542414;
	sub_824F9968(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r31,6608
	ctx.r4.s64 = ctx.r31.s64 + 6608;
	// addi r5,r11,26496
	ctx.r5.s64 = ctx.r11.s64 + 26496;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824115b8
	ctx.lr = 0x82542430;
	sub_824115B8(ctx, base);
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

__attribute__((alias("__imp__sub_82542448"))) PPC_WEAK_FUNC(sub_82542448);
PPC_FUNC_IMPL(__imp__sub_82542448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82542450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825331d8
	ctx.lr = 0x8254245C;
	sub_825331D8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825424b0
	if (!ctx.cr6.eq) goto loc_825424B0;
	// addi r11,r31,6996
	ctx.r11.s64 = ctx.r31.s64 + 6996;
	// addi r29,r31,424
	ctx.r29.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82542484;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,7004
	ctx.r10.s64 = ctx.r31.s64 + 7004;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x825424A4;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_825424B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825424C0"))) PPC_WEAK_FUNC(sub_825424C0);
PPC_FUNC_IMPL(__imp__sub_825424C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x825424C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82533240
	ctx.lr = 0x825424D8;
	sub_82533240(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x825425cc
	if (!ctx.cr6.eq) goto loc_825425CC;
	// addi r28,r31,6996
	ctx.r28.s64 = ctx.r31.s64 + 6996;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82542500;
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
	ctx.lr = 0x82542524;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82542538;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8254255c
	if (!ctx.cr0.eq) goto loc_8254255C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82542550;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8254255C:
	// addi r28,r31,7004
	ctx.r28.s64 = ctx.r31.s64 + 7004;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82542570;
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
	ctx.lr = 0x82542594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825425A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825425cc
	if (!ctx.cr0.eq) goto loc_825425CC;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825425C0;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_825425CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825425D8"))) PPC_WEAK_FUNC(sub_825425D8);
PPC_FUNC_IMPL(__imp__sub_825425D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x825425F8;
	sub_82505418(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,26532
	ctx.r3.s64 = ctx.r11.s64 + 26532;
	// bl 0x82816528
	ctx.lr = 0x82542604;
	sub_82816528(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82542614
	if (!ctx.cr6.eq) goto loc_82542614;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,7008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7008, ctx.r11.u32);
loc_82542614:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542630"))) PPC_WEAK_FUNC(sub_82542630);
PPC_FUNC_IMPL(__imp__sub_82542630) {
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
	// bl 0x82534680
	ctx.lr = 0x82542648;
	sub_82534680(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x82542650;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82542670
	if (ctx.cr0.eq) goto loc_82542670;
	// lwz r4,6516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6516);
	// lfs f2,6512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6512);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,6524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6524);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825137d0
	ctx.lr = 0x82542668;
	sub_825137D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82542674
	goto loc_82542674;
loc_82542670:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82542674:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,6112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825426b4
	if (!ctx.cr6.gt) goto loc_825426B4;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82542698:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825426bc
	if (ctx.cr6.eq) goto loc_825426BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82542698
	if (ctx.cr6.lt) goto loc_82542698;
loc_825426B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825426BC;
	sub_82410060(ctx, base);
loc_825426BC:
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

__attribute__((alias("__imp__sub_825426D0"))) PPC_WEAK_FUNC(sub_825426D0);
PPC_FUNC_IMPL(__imp__sub_825426D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82534680
	sub_82534680(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825426D8"))) PPC_WEAK_FUNC(sub_825426D8);
PPC_FUNC_IMPL(__imp__sub_825426D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825426E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6640);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82542700
	if (!ctx.cr6.eq) goto loc_82542700;
	// lwz r10,6664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6664);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82542708
	if (!ctx.cr6.eq) goto loc_82542708;
loc_82542700:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82542760
	if (!ctx.cr6.eq) goto loc_82542760;
loc_82542708:
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 624);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r10,-17232
	ctx.r3.s64 = ctx.r10.s64 + -17232;
	// lwz r29,628(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82542734;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rldicr r8,r29,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r10,r30,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// lwz r3,10548(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// bl 0x8242f058
	ctx.lr = 0x82542760;
	sub_8242F058(ctx, base);
loc_82542760:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542768"))) PPC_WEAK_FUNC(sub_82542768);
PPC_FUNC_IMPL(__imp__sub_82542768) {
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
	// bl 0x8253d1c0
	ctx.lr = 0x82542780;
	sub_8253D1C0(ctx, base);
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82833108
	ctx.lr = 0x82542788;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825427a8
	if (ctx.cr0.eq) goto loc_825427A8;
	// lwz r4,6516(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6516);
	// lfs f2,6512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6512);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,6524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6524);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82513860
	ctx.lr = 0x825427A0;
	sub_82513860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x825427ac
	goto loc_825427AC;
loc_825427A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825427AC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r31,6096
	ctx.r3.s64 = ctx.r31.s64 + 6096;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,6112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825427ec
	if (!ctx.cr6.gt) goto loc_825427EC;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_825427D0:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825427f4
	if (ctx.cr6.eq) goto loc_825427F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825427d0
	if (ctx.cr6.lt) goto loc_825427D0;
loc_825427EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x825427F4;
	sub_82410060(ctx, base);
loc_825427F4:
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

__attribute__((alias("__imp__sub_82542808"))) PPC_WEAK_FUNC(sub_82542808);
PPC_FUNC_IMPL(__imp__sub_82542808) {
	PPC_FUNC_PROLOGUE();
	// b 0x8253d1c0
	sub_8253D1C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542810"))) PPC_WEAK_FUNC(sub_82542810);
PPC_FUNC_IMPL(__imp__sub_82542810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82541ac0
	sub_82541AC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542818"))) PPC_WEAK_FUNC(sub_82542818);
PPC_FUNC_IMPL(__imp__sub_82542818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82541d98
	sub_82541D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542820"))) PPC_WEAK_FUNC(sub_82542820);
PPC_FUNC_IMPL(__imp__sub_82542820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82541f00
	sub_82541F00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542828"))) PPC_WEAK_FUNC(sub_82542828);
PPC_FUNC_IMPL(__imp__sub_82542828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82541c30
	sub_82541C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542830"))) PPC_WEAK_FUNC(sub_82542830);
PPC_FUNC_IMPL(__imp__sub_82542830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82542068
	sub_82542068(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542838"))) PPC_WEAK_FUNC(sub_82542838);
PPC_FUNC_IMPL(__imp__sub_82542838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11132
	ctx.r3.s64 = ctx.r11.s64 + -11132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542848"))) PPC_WEAK_FUNC(sub_82542848);
PPC_FUNC_IMPL(__imp__sub_82542848) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b7190
	sub_823B7190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542850"))) PPC_WEAK_FUNC(sub_82542850);
PPC_FUNC_IMPL(__imp__sub_82542850) {
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
	ctx.lr = 0x8254286C;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82542884
	if (ctx.cr0.eq) goto loc_82542884;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x825429c0
	ctx.lr = 0x82542880;
	sub_825429C0(ctx, base);
	// b 0x82542888
	goto loc_82542888;
loc_82542884:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82542888:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8254289c
	if (ctx.cr6.eq) goto loc_8254289C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8254289C:
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

__attribute__((alias("__imp__sub_825428B0"))) PPC_WEAK_FUNC(sub_825428B0);
PPC_FUNC_IMPL(__imp__sub_825428B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x825428e0
	if (ctx.cr6.eq) goto loc_825428E0;
	// bl 0x823b7190
	ctx.lr = 0x825428D8;
	sub_823B7190(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82542924
	if (ctx.cr6.eq) goto loc_82542924;
loc_825428E0:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82346e08
	ctx.lr = 0x825428F8;
	sub_82346E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82542924
	if (!ctx.cr0.eq) goto loc_82542924;
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x823510a0
	ctx.lr = 0x82542918;
	sub_823510A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82542928
	if (ctx.cr0.eq) goto loc_82542928;
loc_82542924:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82542928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542940"))) PPC_WEAK_FUNC(sub_82542940);
PPC_FUNC_IMPL(__imp__sub_82542940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7190
	ctx.lr = 0x82542960;
	sub_823B7190(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82542970
	if (!ctx.cr6.eq) goto loc_82542970;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// b 0x825429a8
	goto loc_825429A8;
loc_82542970:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82346ed0
	ctx.lr = 0x82542988;
	sub_82346ED0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x825429a8
	if (!ctx.cr0.eq) goto loc_825429A8;
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82351168
	ctx.lr = 0x825429A8;
	sub_82351168(ctx, base);
loc_825429A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825429C0"))) PPC_WEAK_FUNC(sub_825429C0);
PPC_FUNC_IMPL(__imp__sub_825429C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825429C8;
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
	// addi r11,r11,-24752
	ctx.r11.s64 = ctx.r11.s64 + -24752;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r10.u32);
	// addi r29,r31,2016
	ctx.r29.s64 = ctx.r31.s64 + 2016;
	// stw r9,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r9.u32);
	// addi r27,r31,2032
	ctx.r27.s64 = ctx.r31.s64 + 2032;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82542a14
	if (!ctx.cr6.eq) goto loc_82542A14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82542a20
	goto loc_82542A20;
loc_82542A14:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82542A20:
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823ff1a0
	ctx.lr = 0x82542A28;
	sub_823FF1A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82542a38
	if (!ctx.cr6.eq) goto loc_82542A38;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82542a44
	goto loc_82542A44;
loc_82542A38:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82542A44:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82346f30
	ctx.lr = 0x82542A50;
	sub_82346F30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82542a60
	if (!ctx.cr6.eq) goto loc_82542A60;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82542a6c
	goto loc_82542A6C;
loc_82542A60:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82542A6C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823511c8
	ctx.lr = 0x82542A78;
	sub_823511C8(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-26400
	ctx.r11.s64 = ctx.r11.s64 + -26400;
	// addi r10,r10,-24828
	ctx.r10.s64 = ctx.r10.s64 + -24828;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-24776
	ctx.r9.s64 = ctx.r9.s64 + -24776;
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
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542B10"))) PPC_WEAK_FUNC(sub_82542B10);
PPC_FUNC_IMPL(__imp__sub_82542B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ff098
	ctx.lr = 0x82542B30;
	sub_823FF098(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542b40
	if (ctx.cr0.eq) goto loc_82542B40;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// bl 0x82332db8
	ctx.lr = 0x82542B40;
	sub_82332DB8(ctx, base);
loc_82542B40:
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542B60"))) PPC_WEAK_FUNC(sub_82542B60);
PPC_FUNC_IMPL(__imp__sub_82542B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82542B68;
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
	// addi r11,r11,-24752
	ctx.r11.s64 = ctx.r11.s64 + -24752;
	// addi r10,r10,-19340
	ctx.r10.s64 = ctx.r10.s64 + -19340;
	// addi r9,r9,-1392
	ctx.r9.s64 = ctx.r9.s64 + -1392;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r10.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r9,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r9.u32);
	// addi r30,r31,2016
	ctx.r30.s64 = ctx.r31.s64 + 2016;
	// addi r29,r31,2032
	ctx.r29.s64 = ctx.r31.s64 + 2032;
	// bl 0x824cbb48
	ctx.lr = 0x82542BA4;
	sub_824CBB48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825ba650
	ctx.lr = 0x82542BB0;
	sub_825BA650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82501770
	ctx.lr = 0x82542BBC;
	sub_82501770(ctx, base);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-26400
	ctx.r11.s64 = ctx.r11.s64 + -26400;
	// addi r10,r10,-24828
	ctx.r10.s64 = ctx.r10.s64 + -24828;
	// lfs f0,904(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-24776
	ctx.r9.s64 = ctx.r9.s64 + -24776;
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
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stfs f0,1632(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1632, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82542C48"))) PPC_WEAK_FUNC(sub_82542C48);
PPC_FUNC_IMPL(__imp__sub_82542C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x825ba700
	ctx.lr = 0x82542C74;
	sub_825BA700(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x82501810
	ctx.lr = 0x82542C88;
	sub_82501810(ctx, base);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addic. r11,r11,252
	ctx.xer.ca = ctx.r11.u32 > 4294967043;
	ctx.r11.s64 = ctx.r11.s64 + 252;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82542cb4
	if (ctx.cr0.eq) goto loc_82542CB4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82542cb4
	if (ctx.cr6.eq) goto loc_82542CB4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82542cb8
	goto loc_82542CB8;
loc_82542CB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82542CB8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11064
	ctx.r3.s64 = ctx.r11.s64 + -11064;
	// bl 0x82816528
	ctx.lr = 0x82542CC4;
	sub_82816528(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,16396
	ctx.r3.s64 = ctx.r11.s64 + 16396;
	// bl 0x82816528
	ctx.lr = 0x82542CD4;
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
	ctx.lr = 0x82542CE8;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11020
	ctx.r3.s64 = ctx.r11.s64 + -11020;
	// bl 0x82816528
	ctx.lr = 0x82542CF4;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-26444
	ctx.r3.s64 = ctx.r11.s64 + -26444;
	// bl 0x82816528
	ctx.lr = 0x82542D04;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82542D14;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10892
	ctx.r3.s64 = ctx.r11.s64 + -10892;
	// bl 0x82816528
	ctx.lr = 0x82542D20;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-26432
	ctx.r3.s64 = ctx.r11.s64 + -26432;
	// bl 0x82816528
	ctx.lr = 0x82542D30;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82542D40;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10976
	ctx.r3.s64 = ctx.r11.s64 + -10976;
	// bl 0x82816528
	ctx.lr = 0x82542D4C;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-26420
	ctx.r3.s64 = ctx.r11.s64 + -26420;
	// bl 0x82816528
	ctx.lr = 0x82542D5C;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82542D6C;
	sub_828D0CB0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-10932
	ctx.r3.s64 = ctx.r11.s64 + -10932;
	// bl 0x82816528
	ctx.lr = 0x82542D78;
	sub_82816528(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,-26408
	ctx.r3.s64 = ctx.r11.s64 + -26408;
	// bl 0x82816528
	ctx.lr = 0x82542D88;
	sub_82816528(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828d0cb0
	ctx.lr = 0x82542D98;
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

__attribute__((alias("__imp__sub_82542DB0"))) PPC_WEAK_FUNC(sub_82542DB0);
PPC_FUNC_IMPL(__imp__sub_82542DB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x824ce338
	ctx.lr = 0x82542DE0;
	sub_824CE338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825438c8
	ctx.lr = 0x82542DE8;
	sub_825438C8(ctx, base);
	// stw r3,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82542E08"))) PPC_WEAK_FUNC(sub_82542E08);
PPC_FUNC_IMPL(__imp__sub_82542E08) {
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
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// bl 0x825ba7d0
	ctx.lr = 0x82542E30;
	sub_825BA7D0(ctx, base);
	// lis r11,30179
	ctx.r11.s64 = 1977810944;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r11,1459
	ctx.r10.u64 = ctx.r11.u64 | 1459;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82542e7c
	if (!ctx.cr6.gt) goto loc_82542E7C;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82542E60:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82542e84
	if (ctx.cr6.eq) goto loc_82542E84;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82542e60
	if (ctx.cr6.lt) goto loc_82542E60;
loc_82542E7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82542E84;
	sub_82410060(ctx, base);
loc_82542E84:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r10,-29704
	ctx.r10.s64 = -1946681344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,16239
	ctx.r10.u64 = ctx.r10.u64 | 16239;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82542ed0
	if (!ctx.cr6.gt) goto loc_82542ED0;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82542EB4:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82542ed8
	if (ctx.cr6.eq) goto loc_82542ED8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82542eb4
	if (ctx.cr6.lt) goto loc_82542EB4;
loc_82542ED0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82542ED8;
	sub_82410060(ctx, base);
loc_82542ED8:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r10,-9190
	ctx.r10.s64 = -602275840;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,35575
	ctx.r10.u64 = ctx.r10.u64 | 35575;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82542f24
	if (!ctx.cr6.gt) goto loc_82542F24;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82542F08:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82542f2c
	if (ctx.cr6.eq) goto loc_82542F2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82542f08
	if (ctx.cr6.lt) goto loc_82542F08;
loc_82542F24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82542F2C;
	sub_82410060(ctx, base);
loc_82542F2C:
	// lwz r11,-48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// lis r10,895
	ctx.r10.s64 = 58654720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,49282
	ctx.r10.u64 = ctx.r10.u64 | 49282;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,1884
	ctx.r3.s64 = ctx.r11.s64 + 1884;
	// lwz r11,1900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82542f78
	if (!ctx.cr6.gt) goto loc_82542F78;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_82542F5C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82542f80
	if (ctx.cr6.eq) goto loc_82542F80;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82542f5c
	if (ctx.cr6.lt) goto loc_82542F5C;
loc_82542F78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82410060
	ctx.lr = 0x82542F80;
	sub_82410060(ctx, base);
loc_82542F80:
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

__attribute__((alias("__imp__sub_82542F98"))) PPC_WEAK_FUNC(sub_82542F98);
PPC_FUNC_IMPL(__imp__sub_82542F98) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r30,-48
	ctx.r31.s64 = ctx.r30.s64 + -48;
	// lfs f30,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82543034
	if (!ctx.cr6.gt) goto loc_82543034;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543034
	if (ctx.cr6.eq) goto loc_82543034;
	// lwz r11,6792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543034
	if (ctx.cr0.eq) goto loc_82543034;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82543034
	if (ctx.cr6.lt) goto loc_82543034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82543288
	ctx.lr = 0x82543008;
	sub_82543288(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f30,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82543034
	if (ctx.cr6.lt) goto loc_82543034;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r10,6792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r10,6792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6792, ctx.r10.u32);
loc_82543034:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82543068
	if (!ctx.cr6.gt) goto loc_82543068;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543064
	if (ctx.cr6.eq) goto loc_82543064;
	// lwz r11,6792(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543064
	if (ctx.cr0.eq) goto loc_82543064;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x82543068
	goto loc_82543068;
loc_82543064:
	// stfs f30,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82543068:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// bl 0x824cf588
	ctx.lr = 0x82543080;
	sub_824CF588(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_825430A0"))) PPC_WEAK_FUNC(sub_825430A0);
PPC_FUNC_IMPL(__imp__sub_825430A0) {
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
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543120
	if (ctx.cr6.eq) goto loc_82543120;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825430d8
	if (ctx.cr6.eq) goto loc_825430D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x824cd328
	ctx.lr = 0x825430D8;
	sub_824CD328(ctx, base);
loc_825430D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lwz r9,6792(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// lfs f0,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r9,8
	ctx.r10.u64 = ctx.r9.u64 | 8;
	// stw r10,6792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6792, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,6796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6796);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// lfs f12,6800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6800);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82543120:
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

__attribute__((alias("__imp__sub_82543138"))) PPC_WEAK_FUNC(sub_82543138);
PPC_FUNC_IMPL(__imp__sub_82543138) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82333a20
	ctx.lr = 0x82543154;
	sub_82333A20(ctx, base);
	// lwz r8,-44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,6900(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825431ac
	if (!ctx.cr6.eq) goto loc_825431AC;
	// lwz r9,3500(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82543238
	if (!ctx.cr6.gt) goto loc_82543238;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,3496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3496);
	// lwz r7,-236(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -236);
loc_82543188:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82543238
	if (ctx.cr6.eq) goto loc_82543238;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82543188
	if (ctx.cr6.lt) goto loc_82543188;
	// b 0x82543238
	goto loc_82543238;
loc_825431AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82543238
	if (!ctx.cr6.eq) goto loc_82543238;
	// lwz r9,3500(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825431f4
	if (!ctx.cr6.gt) goto loc_825431F4;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,3496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3496);
	// lwz r7,-228(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -228);
loc_825431D4:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x825431f4
	if (ctx.cr6.eq) goto loc_825431F4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825431d4
	if (ctx.cr6.lt) goto loc_825431D4;
loc_825431F4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82543238
	if (!ctx.cr6.eq) goto loc_82543238;
	// lwz r9,3500(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3500);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82543238
	if (!ctx.cr6.gt) goto loc_82543238;
	// lis r7,-31948
	ctx.r7.s64 = -2093744128;
	// lwz r11,3496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 3496);
	// lwz r7,-232(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -232);
loc_82543218:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82543238
	if (ctx.cr6.eq) goto loc_82543238;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82543218
	if (ctx.cr6.lt) goto loc_82543218;
loc_82543238:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824e8c70
	ctx.lr = 0x82543248;
	sub_824E8C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble 0x82543258
	if (!ctx.cr0.gt) goto loc_82543258;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82543258:
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

__attribute__((alias("__imp__sub_82543270"))) PPC_WEAK_FUNC(sub_82543270);
PPC_FUNC_IMPL(__imp__sub_82543270) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -48);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// b 0x824cd328
	sub_824CD328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543288"))) PPC_WEAK_FUNC(sub_82543288);
PPC_FUNC_IMPL(__imp__sub_82543288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82543290;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r28,4(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x825432B4;
	sub_824D77F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82543344
	if (!ctx.cr0.eq) goto loc_82543344;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// lfs f12,24000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24000);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// lwz r10,1740(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1740);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82543344
	if (!ctx.cr6.gt) goto loc_82543344;
	// lwz r9,1736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1736);
loc_825432E4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543338
	if (ctx.cr6.eq) goto loc_82543338;
	// lfs f11,628(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 628);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f13,628(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f10,624(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 624);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f10,620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,620(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 620);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f13,f10,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// beq cr6,0x82543330
	if (ctx.cr6.eq) goto loc_82543330;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82543338
	if (!ctx.cr6.lt) goto loc_82543338;
loc_82543330:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82543338:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x825432e4
	if (!ctx.cr0.eq) goto loc_825432E4;
loc_82543344:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8254349c
	if (ctx.cr6.eq) goto loc_8254349C;
	// lwz r11,1708(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1708);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,1712(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1712);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r9,1716(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82817280
	ctx.lr = 0x8254337C;
	sub_82817280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-18284
	ctx.r3.s64 = ctx.r11.s64 + -18284;
	// addi r27,r28,620
	ctx.r27.s64 = ctx.r28.s64 + 620;
	// bl 0x82816528
	ctx.lr = 0x82543390;
	sub_82816528(ctx, base);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x828250b0
	ctx.lr = 0x825433CC;
	sub_828250B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825433f8
	if (ctx.cr0.eq) goto loc_825433F8;
	// bl 0x823ab088
	ctx.lr = 0x825433D8;
	sub_823AB088(ctx, base);
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
	ctx.lr = 0x825433F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825433fc
	if (!ctx.cr0.eq) goto loc_825433FC;
loc_825433F8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825433FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8254349c
	if (ctx.cr6.eq) goto loc_8254349C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,628(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicr r6,r10,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254342C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,628(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 628);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 620);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82543508
	ctx.lr = 0x82543444;
	sub_82543508(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,1716(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1716);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,1708(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1708);
	// rldicr r5,r10,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,1160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1160);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254347c
	if (ctx.cr0.eq) goto loc_8254347C;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82543480
	goto loc_82543480;
loc_8254347C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82543480:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829bd3a8
	ctx.lr = 0x82543488;
	sub_829BD3A8(ctx, base);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,3220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3220, ctx.r11.u32);
loc_8254349C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825434A8"))) PPC_WEAK_FUNC(sub_825434A8);
PPC_FUNC_IMPL(__imp__sub_825434A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823ab088
	ctx.lr = 0x825434C8;
	sub_823AB088(ctx, base);
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
	ctx.lr = 0x825434E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543508"))) PPC_WEAK_FUNC(sub_82543508);
PPC_FUNC_IMPL(__imp__sub_82543508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82543510;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82a4cd78
	ctx.lr = 0x82543524;
	sub_82A4CD78(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543538
	if (ctx.cr0.eq) goto loc_82543538;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f31,908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 908);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82543540
	goto loc_82543540;
loc_82543538:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lfs f31,24000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24000);
	ctx.f31.f64 = double(temp.f32);
loc_82543540:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,17112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,1148(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1148);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254355C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfs f2,-28792(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28792);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-28796(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28796);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82825a58
	ctx.lr = 0x82543574;
	sub_82825A58(ctx, base);
	// lis r29,-32243
	ctx.r29.s64 = -2113077248;
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r29,-27300
	ctx.r10.s64 = ctx.r29.s64 + -27300;
	// lfs f2,-28800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28800);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-1992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x82543590;
	sub_82825A58(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r10,1152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1152);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825435B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfs f2,-27300(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -27300);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-28784(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28784);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82825a58
	ctx.lr = 0x825435C4;
	sub_82825A58(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfs f2,-32764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32764);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-28788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28788);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82825a58
	ctx.lr = 0x825435DC;
	sub_82825A58(ctx, base);
	// lwz r11,1156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825435F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stfs f31,1860(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1860, temp.u32);
	// lfs f0,-28780(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28780);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1856(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1856, temp.u32);
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

__attribute__((alias("__imp__sub_82543618"))) PPC_WEAK_FUNC(sub_82543618);
PPC_FUNC_IMPL(__imp__sub_82543618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82543644;
	sub_825018B0(ctx, base);
	// bl 0x823b7190
	ctx.lr = 0x82543648;
	sub_823B7190(ctx, base);
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
	ctx.lr = 0x82543660;
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

__attribute__((alias("__imp__sub_82543680"))) PPC_WEAK_FUNC(sub_82543680);
PPC_FUNC_IMPL(__imp__sub_82543680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea08
	ctx.lr = 0x82543688;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,-132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,1824
	ctx.r4.s64 = ctx.r11.s64 + 1824;
	// bl 0x823ffc38
	ctx.lr = 0x825436BC;
	sub_823FFC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,-132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r29,-128(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -128);
	// bl 0x823ffc38
	ctx.lr = 0x825436E8;
	sub_823FFC38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x824d5a80
	ctx.lr = 0x825436FC;
	sub_824D5A80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f2,6832(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6832);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
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
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,-132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -132);
	// ld r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f1,904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// std r5,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r5.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r3,1928(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1928);
	// bl 0x824d7b70
	ctx.lr = 0x82543768;
	sub_824D7B70(ctx, base);
	// lwz r11,-132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -132);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x824cce58
	ctx.lr = 0x82543788;
	sub_824CCE58(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8239d768
	ctx.lr = 0x82543790;
	sub_8239D768(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8239d768
	ctx.lr = 0x82543798;
	sub_8239D768(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82a4ea58
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825437A0"))) PPC_WEAK_FUNC(sub_825437A0);
PPC_FUNC_IMPL(__imp__sub_825437A0) {
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
	// lwz r11,-152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -152);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -148);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a4cd78
	ctx.lr = 0x825437C8;
	sub_82A4CD78(ctx, base);
	// lwz r10,6836(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6836);
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r9,r3,r10
	ctx.r9.s32 = ctx.r3.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// twllei r10,0
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// addic. r11,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r11.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r10,-1
	// stw r11,6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// beq 0x82543804
	if (ctx.cr0.eq) goto loc_82543804;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,6844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6844, ctx.r11.u32);
	// stw r10,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r10.u32);
loc_82543804:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11192
	ctx.r3.s64 = ctx.r11.s64 + -11192;
	// bl 0x82816528
	ctx.lr = 0x82543810;
	sub_82816528(ctx, base);
	// lwz r10,3500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82543848
	if (!ctx.cr6.gt) goto loc_82543848;
	// lwz r10,3496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3496);
loc_82543824:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8254384c
	if (ctx.cr6.eq) goto loc_8254384C;
	// lwz r9,3500(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3500);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82543824
	if (ctx.cr6.lt) goto loc_82543824;
loc_82543848:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8254384C:
	// stw r11,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82543868"))) PPC_WEAK_FUNC(sub_82543868);
PPC_FUNC_IMPL(__imp__sub_82543868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lis r4,6171
	ctx.r4.s64 = 404422656;
	// ori r4,r4,48165
	ctx.r4.u64 = ctx.r4.u64 | 48165;
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825438A0"))) PPC_WEAK_FUNC(sub_825438A0);
PPC_FUNC_IMPL(__imp__sub_825438A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6171
	ctx.r11.s64 = 404422656;
	// ori r11,r11,48165
	ctx.r11.u64 = ctx.r11.u64 | 48165;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,-96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -96);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825438C4"))) PPC_WEAK_FUNC(sub_825438C4);
PPC_FUNC_IMPL(__imp__sub_825438C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825438C8"))) PPC_WEAK_FUNC(sub_825438C8);
PPC_FUNC_IMPL(__imp__sub_825438C8) {
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
	// beq cr6,0x8254390c
	if (ctx.cr6.eq) goto loc_8254390C;
	// bl 0x823b7038
	ctx.lr = 0x825438E8;
	sub_823B7038(ctx, base);
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
	ctx.lr = 0x82543900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82543910
	if (!ctx.cr0.eq) goto loc_82543910;
loc_8254390C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82543910:
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

__attribute__((alias("__imp__sub_82543928"))) PPC_WEAK_FUNC(sub_82543928);
PPC_FUNC_IMPL(__imp__sub_82543928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542db0
	sub_82542DB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543938"))) PPC_WEAK_FUNC(sub_82543938);
PPC_FUNC_IMPL(__imp__sub_82543938) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542f98
	sub_82542F98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543948"))) PPC_WEAK_FUNC(sub_82543948);
PPC_FUNC_IMPL(__imp__sub_82543948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-400(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -400);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-396
	ctx.r3.s64 = ctx.r3.s64 + -396;
	// b 0x82542b10
	sub_82542B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543958"))) PPC_WEAK_FUNC(sub_82543958);
PPC_FUNC_IMPL(__imp__sub_82543958) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82542b10
	sub_82542B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543968"))) PPC_WEAK_FUNC(sub_82543968);
PPC_FUNC_IMPL(__imp__sub_82543968) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542b10
	sub_82542B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543978"))) PPC_WEAK_FUNC(sub_82543978);
PPC_FUNC_IMPL(__imp__sub_82543978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825428b0
	sub_825428B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543988"))) PPC_WEAK_FUNC(sub_82543988);
PPC_FUNC_IMPL(__imp__sub_82543988) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542c48
	sub_82542C48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543998"))) PPC_WEAK_FUNC(sub_82543998);
PPC_FUNC_IMPL(__imp__sub_82543998) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542838
	sub_82542838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439A8"))) PPC_WEAK_FUNC(sub_825439A8);
PPC_FUNC_IMPL(__imp__sub_825439A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543270
	sub_82543270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439B8"))) PPC_WEAK_FUNC(sub_825439B8);
PPC_FUNC_IMPL(__imp__sub_825439B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542850
	sub_82542850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439C8"))) PPC_WEAK_FUNC(sub_825439C8);
PPC_FUNC_IMPL(__imp__sub_825439C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82542940
	sub_82542940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439D8"))) PPC_WEAK_FUNC(sub_825439D8);
PPC_FUNC_IMPL(__imp__sub_825439D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542940
	sub_82542940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439E8"))) PPC_WEAK_FUNC(sub_825439E8);
PPC_FUNC_IMPL(__imp__sub_825439E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542e08
	sub_82542E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825439F8"))) PPC_WEAK_FUNC(sub_825439F8);
PPC_FUNC_IMPL(__imp__sub_825439F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82543138
	sub_82543138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543A08"))) PPC_WEAK_FUNC(sub_82543A08);
PPC_FUNC_IMPL(__imp__sub_82543A08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x825434a8
	sub_825434A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543A18"))) PPC_WEAK_FUNC(sub_82543A18);
PPC_FUNC_IMPL(__imp__sub_82543A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// b 0x82542848
	sub_82542848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543A28"))) PPC_WEAK_FUNC(sub_82543A28);
PPC_FUNC_IMPL(__imp__sub_82543A28) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,-20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -20);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82543b18
	if (ctx.cr6.eq) goto loc_82543B18;
	// lwz r9,2112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82543b18
	if (!ctx.cr6.gt) goto loc_82543B18;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82543b18
	if (!ctx.cr0.eq) goto loc_82543B18;
	// lwz r9,6992(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6992);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82543b18
	if (ctx.cr6.eq) goto loc_82543B18;
	// lwz r9,6988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6988);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,-16(r3)
	PPC_STORE_U32(ctx.r3.u32 + -16, ctx.r8.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,-12(r3)
	PPC_STORE_U32(ctx.r3.u32 + -12, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,6804(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6804);
	// bne cr6,0x82543ac0
	if (!ctx.cr6.eq) goto loc_82543AC0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82543ab4
	if (ctx.cr6.eq) goto loc_82543AB4;
	// lwz r11,6812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82543ab4
	if (!ctx.cr6.eq) goto loc_82543AB4;
	// lis r11,21293
	ctx.r11.s64 = 1395458048;
	// ori r11,r11,17020
	ctx.r11.u64 = ctx.r11.u64 | 17020;
	// b 0x82543ae8
	goto loc_82543AE8;
loc_82543AB4:
	// lis r11,-20678
	ctx.r11.s64 = -1355153408;
	// ori r11,r11,2640
	ctx.r11.u64 = ctx.r11.u64 | 2640;
	// b 0x82543ae8
	goto loc_82543AE8;
loc_82543AC0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82543ae0
	if (ctx.cr6.eq) goto loc_82543AE0;
	// lwz r11,6812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82543ae0
	if (!ctx.cr6.eq) goto loc_82543AE0;
	// lis r11,-16745
	ctx.r11.s64 = -1097400320;
	// ori r11,r11,54025
	ctx.r11.u64 = ctx.r11.u64 | 54025;
	// b 0x82543ae8
	goto loc_82543AE8;
loc_82543AE0:
	// lis r11,3166
	ctx.r11.s64 = 207486976;
	// ori r11,r11,37513
	ctx.r11.u64 = ctx.r11.u64 | 37513;
loc_82543AE8:
	// stw r11,-8(r3)
	PPC_STORE_U32(ctx.r3.u32 + -8, ctx.r11.u32);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,-8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,1380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82543B18:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543B28"))) PPC_WEAK_FUNC(sub_82543B28);
PPC_FUNC_IMPL(__imp__sub_82543B28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -96);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,-108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -108);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,-72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -72);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543B48"))) PPC_WEAK_FUNC(sub_82543B48);
PPC_FUNC_IMPL(__imp__sub_82543B48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543B50"))) PPC_WEAK_FUNC(sub_82543B50);
PPC_FUNC_IMPL(__imp__sub_82543B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82543B58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -20);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82543c14
	if (ctx.cr6.eq) goto loc_82543C14;
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82543c14
	if (!ctx.cr6.gt) goto loc_82543C14;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r27,-31949
	ctx.r27.s64 = -2093809664;
loc_82543B94:
	// lwz r11,6988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	// lwz r10,-12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// ldx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82543c00
	if (!ctx.cr6.eq) goto loc_82543C00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543BD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,13024(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13024);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82543bf0
	if (ctx.cr6.eq) goto loc_82543BF0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82543c00
	if (!ctx.cr6.eq) goto loc_82543C00;
loc_82543BF0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546cc0
	ctx.lr = 0x82543C00;
	sub_82546CC0(ctx, base);
loc_82543C00:
	// lwz r11,6992(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82543b94
	if (ctx.cr6.lt) goto loc_82543B94;
loc_82543C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543C20"))) PPC_WEAK_FUNC(sub_82543C20);
PPC_FUNC_IMPL(__imp__sub_82543C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82543ce8
	if (ctx.cr6.eq) goto loc_82543CE8;
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82543ce8
	if (!ctx.cr6.gt) goto loc_82543CE8;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82543ce8
	if (!ctx.cr0.eq) goto loc_82543CE8;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
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
	// bne cr6,0x82543ca4
	if (!ctx.cr6.eq) goto loc_82543CA4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82543cc0
	goto loc_82543CC0;
loc_82543CA4:
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
loc_82543CC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d77f8
	ctx.lr = 0x82543CC8;
	sub_824D77F8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82543ce8
	if (ctx.cr0.eq) goto loc_82543CE8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,1384(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82543CE8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
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
	ctx.lr = 0x82543D28;
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

__attribute__((alias("__imp__sub_82543D40"))) PPC_WEAK_FUNC(sub_82543D40);
PPC_FUNC_IMPL(__imp__sub_82543D40) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82347478
	ctx.lr = 0x82543D6C;
	sub_82347478(ctx, base);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82543e30
	if (ctx.cr6.eq) goto loc_82543E30;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r9,664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// stw r10,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r10.u32);
	// stw r9,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r9.u32);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 668, ctx.r8.u32);
	// stw r7,672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 672, ctx.r7.u32);
	// stw r9,676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 676, ctx.r9.u32);
	// lwz r11,-96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -96);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,1384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82543E30:
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

__attribute__((alias("__imp__sub_82543E48"))) PPC_WEAK_FUNC(sub_82543E48);
PPC_FUNC_IMPL(__imp__sub_82543E48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -152);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -148);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,6900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82543e84
	if (!ctx.cr6.eq) goto loc_82543E84;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -204);
loc_82543E70:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82543E84:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82543e98
	if (!ctx.cr6.eq) goto loc_82543E98;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r11,-200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -200);
	// b 0x82543e70
	goto loc_82543E70;
loc_82543E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543EA0"))) PPC_WEAK_FUNC(sub_82543EA0);
PPC_FUNC_IMPL(__imp__sub_82543EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,6792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// lwz r9,6756(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6756);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// stw r10,6792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6792, ctx.r10.u32);
	// stw r9,6756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6756, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543ED8"))) PPC_WEAK_FUNC(sub_82543ED8);
PPC_FUNC_IMPL(__imp__sub_82543ED8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82543f00
	if (ctx.cr6.eq) goto loc_82543F00;
	// lwz r10,6792(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6792);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_82543F00:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x829e3da8
	sub_829E3DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543F10"))) PPC_WEAK_FUNC(sub_82543F10);
PPC_FUNC_IMPL(__imp__sub_82543F10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543F18"))) PPC_WEAK_FUNC(sub_82543F18);
PPC_FUNC_IMPL(__imp__sub_82543F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,-8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,6756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6756);
	// lwz r9,6792(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6792);
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,6756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6756, ctx.r10.u32);
	// stw r9,6792(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6792, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82543F50"))) PPC_WEAK_FUNC(sub_82543F50);
PPC_FUNC_IMPL(__imp__sub_82543F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82543F58;
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
	// beq cr6,0x82543fb4
	if (ctx.cr6.eq) goto loc_82543FB4;
	// lis r10,-31944
	ctx.r10.s64 = -2093481984;
	// lis r11,-31944
	ctx.r11.s64 = -2093481984;
	// addi r31,r11,12112
	ctx.r31.s64 = ctx.r11.s64 + 12112;
	// lwz r11,12108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82543fa4
	if (!ctx.cr0.eq) goto loc_82543FA4;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21160
	ctx.r9.s64 = ctx.r9.s64 + -21160;
	// stw r11,12108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12108, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// bl 0x82a4c758
	ctx.lr = 0x82543FA4;
	sub_82A4C758(ctx, base);
loc_82543FA4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82543fb4
	if (!ctx.cr6.eq) goto loc_82543FB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82543fc0
	goto loc_82543FC0;
loc_82543FB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82339ee8
	ctx.lr = 0x82543FC0;
	sub_82339EE8(ctx, base);
loc_82543FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82543FC8"))) PPC_WEAK_FUNC(sub_82543FC8);
PPC_FUNC_IMPL(__imp__sub_82543FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82543FD0;
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
	// addi r31,r11,12112
	ctx.r31.s64 = ctx.r11.s64 + 12112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,12108(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12108);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82544014
	if (!ctx.cr0.eq) goto loc_82544014;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r9,-21160
	ctx.r9.s64 = ctx.r9.s64 + -21160;
	// stw r11,12108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12108, ctx.r11.u32);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r11,20448
	ctx.r3.s64 = ctx.r11.s64 + 20448;
	// bl 0x82a4c758
	ctx.lr = 0x82544014;
	sub_82A4C758(ctx, base);
loc_82544014:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x82544028
	if (ctx.cr6.eq) goto loc_82544028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339d80
	ctx.lr = 0x82544028;
	sub_82339D80(ctx, base);
loc_82544028:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544030"))) PPC_WEAK_FUNC(sub_82544030);
PPC_FUNC_IMPL(__imp__sub_82544030) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,-11152
	ctx.r3.s64 = ctx.r11.s64 + -11152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544040"))) PPC_WEAK_FUNC(sub_82544040);
PPC_FUNC_IMPL(__imp__sub_82544040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// beq cr6,0x82544078
	if (ctx.cr6.eq) goto loc_82544078;
	// bl 0x823b7038
	ctx.lr = 0x82544068;
	sub_823B7038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82544078
	if (!ctx.cr6.eq) goto loc_82544078;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82544084
	goto loc_82544084;
loc_82544078:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824ff548
	ctx.lr = 0x82544084;
	sub_824FF548(ctx, base);
loc_82544084:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825440A0"))) PPC_WEAK_FUNC(sub_825440A0);
PPC_FUNC_IMPL(__imp__sub_825440A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823b7038
	sub_823B7038(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825440A8"))) PPC_WEAK_FUNC(sub_825440A8);
PPC_FUNC_IMPL(__imp__sub_825440A8) {
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
	// li r3,7056
	ctx.r3.s64 = 7056;
	// bl 0x82833108
	ctx.lr = 0x825440C4;
	sub_82833108(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825440d8
	if (ctx.cr0.eq) goto loc_825440D8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82544170
	ctx.lr = 0x825440D4;
	sub_82544170(ctx, base);
	// b 0x825440dc
	goto loc_825440DC;
loc_825440D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825440DC:
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

__attribute__((alias("__imp__sub_825440F0"))) PPC_WEAK_FUNC(sub_825440F0);
PPC_FUNC_IMPL(__imp__sub_825440F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// bl 0x823b7038
	ctx.lr = 0x82544110;
	sub_823B7038(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82544124
	if (ctx.cr6.eq) goto loc_82544124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824ff5f8
	ctx.lr = 0x82544124;
	sub_824FF5F8(ctx, base);
loc_82544124:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544140"))) PPC_WEAK_FUNC(sub_82544140);
PPC_FUNC_IMPL(__imp__sub_82544140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-24736
	ctx.r3.s64 = ctx.r11.s64 + -24736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544150"))) PPC_WEAK_FUNC(sub_82544150);
PPC_FUNC_IMPL(__imp__sub_82544150) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,6912(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
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

__attribute__((alias("__imp__sub_82544170"))) PPC_WEAK_FUNC(sub_82544170);
PPC_FUNC_IMPL(__imp__sub_82544170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82544178;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ff678
	ctx.lr = 0x82544188;
	sub_824FF678(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-23704
	ctx.r11.s64 = ctx.r11.s64 + -23704;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-21268
	ctx.r10.s64 = ctx.r10.s64 + -21268;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r9,r9,-21216
	ctx.r9.s64 = ctx.r9.s64 + -21216;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r10,r11,15852
	ctx.r10.s64 = ctx.r11.s64 + 15852;
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
	// lfs f0,6800(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6800);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6800(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6800, temp.u32);
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
	// lfs f0,6832(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6832);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6832(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6832, temp.u32);
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
	// lfs f0,6864(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6864);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6864, temp.u32);
	// lfs f0,6868(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6868(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6868, temp.u32);
	// lfs f0,6872(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6872, temp.u32);
	// lfs f0,6876(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// lfs f0,6880(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6880(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6880, temp.u32);
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
	// lwz r11,6892(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6892);
	// stw r11,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r11.u32);
	// lwz r11,6896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6896);
	// stw r11,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r11.u32);
	// lwz r11,6900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6900);
	// stw r11,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r11.u32);
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
	// addi r4,r30,6948
	ctx.r4.s64 = ctx.r30.s64 + 6948;
	// lwz r11,6920(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6920);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,6920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6920, ctx.r11.u32);
	// addi r11,r31,6944
	ctx.r11.s64 = ctx.r31.s64 + 6944;
	// lwz r9,6924(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6924);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r9,6924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6924, ctx.r9.u32);
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
	// stw r10,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r10.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x8254430C;
	sub_82A4EA80(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r31,6976
	ctx.r29.s64 = ctx.r31.s64 + 6976;
	// addi r27,r30,6976
	ctx.r27.s64 = ctx.r30.s64 + 6976;
	// stw r28,6984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6984, ctx.r28.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r28,6988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6988, ctx.r28.u32);
	// stw r28,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r28.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r11.u32);
	// stw r28,6996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6996, ctx.r28.u32);
	// stw r28,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r28.u32);
	// beq cr6,0x825443c8
	if (ctx.cr6.eq) goto loc_825443C8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r28,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825443c8
	if (!ctx.cr6.gt) goto loc_825443C8;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544368
	if (ctx.cr0.eq) goto loc_82544368;
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c38
	ctx.lr = 0x82544368;
	sub_82332C38(ctx, base);
loc_82544368:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825443c8
	if (!ctx.cr6.gt) goto loc_825443C8;
loc_82544378:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332d50
	ctx.lr = 0x8254438C;
	sub_82332D50(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825443b4
	if (ctx.cr0.eq) goto loc_825443B4;
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_825443B4:
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82544378
	if (ctx.cr6.lt) goto loc_82544378;
loc_825443C8:
	// lwz r11,7000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,7000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7000, ctx.r11.u32);
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
	// lwz r11,7032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7032);
	// stw r11,7032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7032, ctx.r11.u32);
	// lwz r11,7036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7036);
	// stw r11,7036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7036, ctx.r11.u32);
	// lwz r11,7040(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 7040);
	// stw r11,7040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7040, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82544430"))) PPC_WEAK_FUNC(sub_82544430);
PPC_FUNC_IMPL(__imp__sub_82544430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82544438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r30,6976
	ctx.r31.s64 = ctx.r30.s64 + 6976;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,6992(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6992);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332ca8
	ctx.lr = 0x82544460;
	sub_82332CA8(ctx, base);
	// lwz r3,6988(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6988);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82544470
	if (ctx.cr6.eq) goto loc_82544470;
	// bl 0x82332db8
	ctx.lr = 0x82544470;
	sub_82332DB8(ctx, base);
loc_82544470:
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29556
	ctx.r10.s64 = ctx.r10.s64 + -29556;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,6944(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6944, ctx.r10.u32);
	// bl 0x824ff7c8
	ctx.lr = 0x82544494;
	sub_824FF7C8(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825444a4
	if (ctx.cr0.eq) goto loc_825444A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332db8
	ctx.lr = 0x825444A4;
	sub_82332DB8(ctx, base);
loc_825444A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825444B0"))) PPC_WEAK_FUNC(sub_825444B0);
PPC_FUNC_IMPL(__imp__sub_825444B0) {
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
	// addi r31,r11,-21888
	ctx.r31.s64 = ctx.r11.s64 + -21888;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82332d50
	ctx.lr = 0x825444E8;
	sub_82332D50(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 * 24;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82544514
	if (ctx.cr0.eq) goto loc_82544514;
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
loc_82544514:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82544538
	if (ctx.cr6.eq) goto loc_82544538;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82332c38
	ctx.lr = 0x82544538;
	sub_82332C38(ctx, base);
loc_82544538:
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

__attribute__((alias("__imp__sub_82544550"))) PPC_WEAK_FUNC(sub_82544550);
PPC_FUNC_IMPL(__imp__sub_82544550) {
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
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
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
	// ble cr6,0x825445bc
	if (!ctx.cr6.gt) goto loc_825445BC;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8254458C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x825445ac
	if (ctx.cr6.eq) goto loc_825445AC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8254458c
	if (ctx.cr6.lt) goto loc_8254458C;
	// b 0x825445bc
	goto loc_825445BC;
loc_825445AC:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_825445BC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825445e4
	if (ctx.cr6.eq) goto loc_825445E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x825445DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825445e8
	goto loc_825445E8;
loc_825445E4:
	// bl 0x824daf88
	ctx.lr = 0x825445E8;
	sub_824DAF88(ctx, base);
loc_825445E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825445F8"))) PPC_WEAK_FUNC(sub_825445F8);
PPC_FUNC_IMPL(__imp__sub_825445F8) {
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
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82544658
	if (!ctx.cr6.gt) goto loc_82544658;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82544624:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82544644
	if (ctx.cr6.eq) goto loc_82544644;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82544624
	if (ctx.cr6.lt) goto loc_82544624;
	// b 0x82544658
	goto loc_82544658;
loc_82544644:
	// mulli r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 * 24;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82544660
	if (!ctx.cr6.eq) goto loc_82544660;
loc_82544658:
	// bl 0x824db030
	ctx.lr = 0x8254465C;
	sub_824DB030(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82544660:
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

__attribute__((alias("__imp__sub_82544678"))) PPC_WEAK_FUNC(sub_82544678);
PPC_FUNC_IMPL(__imp__sub_82544678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// addi r11,r11,-21888
	ctx.r11.s64 = ctx.r11.s64 + -21888;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x825446f8
	if (!ctx.cr6.gt) goto loc_825446F8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_825446B4:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825446d4
	if (ctx.cr6.eq) goto loc_825446D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825446b4
	if (ctx.cr6.lt) goto loc_825446B4;
	// b 0x825446f8
	goto loc_825446F8;
loc_825446D4:
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
	ctx.lr = 0x825446F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82544704
	if (!ctx.cr0.eq) goto loc_82544704;
loc_825446F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824db0b0
	ctx.lr = 0x82544704;
	sub_824DB0B0(ctx, base);
loc_82544704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544720"))) PPC_WEAK_FUNC(sub_82544720);
PPC_FUNC_IMPL(__imp__sub_82544720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82544728;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824ff818
	ctx.lr = 0x82544738;
	sub_824FF818(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32244
	ctx.r8.s64 = -2113142784;
	// addi r11,r11,-23704
	ctx.r11.s64 = ctx.r11.s64 + -23704;
	// addi r10,r10,-21268
	ctx.r10.s64 = ctx.r10.s64 + -21268;
	// addi r9,r9,-21216
	ctx.r9.s64 = ctx.r9.s64 + -21216;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r8,r8,15852
	ctx.r8.s64 = ctx.r8.s64 + 15852;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// addi r11,r31,6944
	ctx.r11.s64 = ctx.r31.s64 + 6944;
	// stw r8,6944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6944, ctx.r8.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x8312e7dc
	ctx.lr = 0x82544774;
	sub_8312E7DC(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r28,-32243
	ctx.r28.s64 = -2113077248;
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// lis r7,-32215
	ctx.r7.s64 = -2111242240;
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,18284(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 18284);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,-11444
	ctx.r10.s64 = ctx.r27.s64 + -11444;
	// addi r26,r28,32752
	ctx.r26.s64 = ctx.r28.s64 + 32752;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,16620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f13.f64 = double(temp.f32);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r6,1828
	ctx.r6.s64 = 119799808;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,6980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6980, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f12,17148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17148);
	ctx.f12.f64 = double(temp.f32);
	// ori r6,r6,23951
	ctx.r6.u64 = ctx.r6.u64 | 23951;
	// stw r30,6984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6984, ctx.r30.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r30,6988(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6988, ctx.r30.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r30,6992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6992, ctx.r30.u32);
	// stw r30,6996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6996, ctx.r30.u32);
	// lfs f0,-4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,6976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6976, ctx.r30.u32);
	// lfs f11,-13636(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13636);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// stfs f0,6824(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6824, temp.u32);
	// stfs f13,6828(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6828, temp.u32);
	// stw r29,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r29.u32);
	// stfs f12,6832(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6832, temp.u32);
	// stw r29,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r29.u32);
	// stfs f11,2732(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2732, temp.u32);
	// stw r30,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r30.u32);
	// stw r6,6704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6704, ctx.r6.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r4,3612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3612, ctx.r4.u32);
	// stw r5,6896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6896, ctx.r5.u32);
	// addi r3,r11,-11132
	ctx.r3.s64 = ctx.r11.s64 + -11132;
	// stw r8,6888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6888, ctx.r8.u32);
	// stw r9,6892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6892, ctx.r9.u32);
	// bl 0x82816528
	ctx.lr = 0x82544838;
	sub_82816528(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// stw r29,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r29.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-24396
	ctx.r3.s64 = ctx.r11.s64 + -24396;
	// bl 0x82816528
	ctx.lr = 0x8254484C;
	sub_82816528(ctx, base);
	// lis r9,-32215
	ctx.r9.s64 = -2111242240;
	// lfs f0,64(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1492(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,3364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3364, temp.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r3,5344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5344, ctx.r3.u32);
	// stw r29,2836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2836, ctx.r29.u32);
	// lfs f0,17328(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17328);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r30.u32);
	// stfs f0,3360(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3360, temp.u32);
	// stw r30,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r30.u32);
	// stw r30,3172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3172, ctx.r30.u32);
	// li r9,86
	ctx.r9.s64 = 86;
	// stw r29,5336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5336, ctx.r29.u32);
	// li r7,171
	ctx.r7.s64 = 171;
	// stb r30,193(r8)
	PPC_STORE_U8(ctx.r8.u32 + 193, ctx.r30.u8);
	// li r6,221
	ctx.r6.s64 = 221;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lis r8,-32215
	ctx.r8.s64 = -2111242240;
	// stb r9,194(r5)
	PPC_STORE_U8(ctx.r5.u32 + 194, ctx.r9.u8);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r5,1492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// li r9,25
	ctx.r9.s64 = 25;
	// stb r7,195(r5)
	PPC_STORE_U8(ctx.r5.u32 + 195, ctx.r7.u8);
	// lfs f0,32752(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32752);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,1492(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// lfs f13,-11444(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + -11444);
	ctx.f13.f64 = double(temp.f32);
	// stb r6,196(r7)
	PPC_STORE_U8(ctx.r7.u32 + 196, ctx.r6.u8);
	// lfs f12,912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,6824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,5392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5392, ctx.r11.u32);
	// stw r11,5400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5400, ctx.r11.u32);
	// stfs f31,6864(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6864, temp.u32);
	// stw r11,5396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5396, ctx.r11.u32);
	// stfs f11,1696(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// stfs f11,3120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// stw r30,2236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2236, ctx.r30.u32);
	// stfs f31,6868(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6868, temp.u32);
	// stw r9,6852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6852, ctx.r9.u32);
	// stfs f0,6872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6872, temp.u32);
	// stfs f13,6876(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6876, temp.u32);
	// stw r29,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r29.u32);
	// stfs f12,3948(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// stw r29,924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 924, ctx.r29.u32);
	// stw r4,3076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3076, ctx.r4.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// stw r10,6856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6856, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,6860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6860, ctx.r10.u32);
	// stw r29,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r29.u32);
	// addi r3,r9,-24392
	ctx.r3.s64 = ctx.r9.s64 + -24392;
	// stw r29,3952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3952, ctx.r29.u32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r30,r11,1268
	ctx.r30.s64 = ctx.r11.s64 + 1268;
	// bl 0x82816528
	ctx.lr = 0x82544930;
	sub_82816528(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r4,r31,1740
	ctx.r4.s64 = ctx.r31.s64 + 1740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82509750
	ctx.lr = 0x82544948;
	sub_82509750(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r11,-24948
	ctx.r11.s64 = -1634992128;
	// lis r9,14797
	ctx.r9.s64 = 969736192;
	// ori r11,r11,52313
	ctx.r11.u64 = ctx.r11.u64 | 52313;
	// ori r9,r9,52497
	ctx.r9.u64 = ctx.r9.u64 | 52497;
	// lfs f0,-12104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12104);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,3644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3644, ctx.r11.u32);
	// lis r11,6564
	ctx.r11.s64 = 430178304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,30620
	ctx.r11.u64 = ctx.r11.u64 | 30620;
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stw r29,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r29.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,156(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 156, temp.u32);
	// lwz r10,1492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1492);
	// stfs f0,152(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 152, temp.u32);
	// stw r9,2612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2612, ctx.r9.u32);
	// stw r11,2608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2608, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825449A0"))) PPC_WEAK_FUNC(sub_825449A0);
PPC_FUNC_IMPL(__imp__sub_825449A0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,24774
	ctx.r3.s64 = 1623588864;
	// ori r3,r3,60942
	ctx.r3.u64 = ctx.r3.u64 | 60942;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825449B0"))) PPC_WEAK_FUNC(sub_825449B0);
PPC_FUNC_IMPL(__imp__sub_825449B0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,24669
	ctx.r3.s64 = 1616707584;
	// ori r3,r3,7575
	ctx.r3.u64 = ctx.r3.u64 | 7575;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825449C0"))) PPC_WEAK_FUNC(sub_825449C0);
PPC_FUNC_IMPL(__imp__sub_825449C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,6900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6900);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825449e8
	if (!ctx.cr6.eq) goto loc_825449E8;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f0,16664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16664);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17108);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x825449f8
	goto loc_825449F8;
loc_825449E8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_825449F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82544A00"))) PPC_WEAK_FUNC(sub_82544A00);
PPC_FUNC_IMPL(__imp__sub_82544A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9ec
	ctx.lr = 0x82544A08;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x824ffb80
	ctx.lr = 0x82544A1C;
	sub_824FFB80(ctx, base);
	// lwz r11,5728(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82544a30
	if (ctx.cr6.eq) goto loc_82544A30;
	// lwz r4,5724(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5724);
	// b 0x82544a38
	goto loc_82544A38;
loc_82544A30:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r11,7896
	ctx.r4.s64 = ctx.r11.s64 + 7896;
loc_82544A38:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82409058
	ctx.lr = 0x82544A40;
	sub_82409058(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwz r31,132(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82544a64
	if (ctx.cr6.eq) goto loc_82544A64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82544a64
	if (ctx.cr6.eq) goto loc_82544A64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82332db8
	ctx.lr = 0x82544A64;
	sub_82332DB8(ctx, base);
loc_82544A64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82545354
	if (ctx.cr6.eq) goto loc_82545354;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545354
	if (ctx.cr6.eq) goto loc_82545354;
	// lwz r11,3332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3332);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,-24352
	ctx.r4.s64 = ctx.r9.s64 + -24352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6852(r28)
	PPC_STORE_U32(ctx.r28.u32 + 6852, ctx.r11.u32);
	// lfs f31,904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829e6978
	ctx.lr = 0x82544AA0;
	sub_829E6978(ctx, base);
	// li r11,6856
	ctx.r11.s64 = 6856;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-24332
	ctx.r4.s64 = ctx.r10.s64 + -24332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82544AC4;
	sub_829E6978(ctx, base);
	// li r11,6860
	ctx.r11.s64 = 6860;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-24312
	ctx.r4.s64 = ctx.r10.s64 + -24312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82544AE8;
	sub_829E6978(ctx, base);
	// stfs f1,3360(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3360, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24296
	ctx.r4.s64 = ctx.r11.s64 + -24296;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544B04;
	sub_829E6978(ctx, base);
	// stfs f1,3364(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3364, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24280
	ctx.r4.s64 = ctx.r11.s64 + -24280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544B20;
	sub_829E6978(ctx, base);
	// stfs f1,6872(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6872, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24264
	ctx.r4.s64 = ctx.r11.s64 + -24264;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544B3C;
	sub_829E6978(ctx, base);
	// stfs f1,6876(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6876, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24248
	ctx.r4.s64 = ctx.r11.s64 + -24248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544B58;
	sub_829E6978(ctx, base);
	// li r11,6796
	ctx.r11.s64 = 6796;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-24236
	ctx.r4.s64 = ctx.r10.s64 + -24236;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfiwx f0,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f0.u32);
	// bl 0x829e6978
	ctx.lr = 0x82544B7C;
	sub_829E6978(ctx, base);
	// stfs f1,6800(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6800, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24216
	ctx.r4.s64 = ctx.r11.s64 + -24216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544B98;
	sub_829E6978(ctx, base);
	// stfs f1,6880(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6880, temp.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24196
	ctx.r4.s64 = ctx.r11.s64 + -24196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544BB4;
	sub_829E6978(ctx, base);
	// stfs f1,6884(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 6884, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15280
	ctx.r4.s64 = ctx.r11.s64 + 15280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544BD0;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r23,8
	ctx.r23.s64 = 8;
	// li r21,100
	ctx.r21.s64 = 100;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r22,3
	ctx.r22.s64 = 3;
	// li r26,4
	ctx.r26.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82544dc8
	if (ctx.cr6.eq) goto loc_82544DC8;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r11,15348
	ctx.r27.s64 = ctx.r11.s64 + 15348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544C18;
	sub_829E6978(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82544dc8
	if (!ctx.cr6.gt) goto loc_82544DC8;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x82544C28;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82544c44
	if (ctx.cr0.eq) goto loc_82544C44;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-156(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -156);
	// bl 0x8250d2d0
	ctx.lr = 0x82544C3C;
	sub_8250D2D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82544c48
	goto loc_82544C48;
loc_82544C44:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82544C48:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9896
	ctx.r4.s64 = ctx.r11.s64 + 9896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544C60;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r23
	PPC_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.f0.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15316
	ctx.r4.s64 = ctx.r11.s64 + 15316;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544C80;
	sub_829E6978(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15332
	ctx.r4.s64 = ctx.r11.s64 + 15332;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544C9C;
	sub_829E6978(ctx, base);
	// stfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544CB4;
	sub_829E6978(ctx, base);
	// stfs f1,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15368
	ctx.r4.s64 = ctx.r11.s64 + 15368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544CD0;
	sub_829E6978(ctx, base);
	// stfs f1,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15380
	ctx.r4.s64 = ctx.r11.s64 + 15380;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544CEC;
	sub_829E6978(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15396
	ctx.r4.s64 = ctx.r11.s64 + 15396;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544D08;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r21
	PPC_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.f0.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,15416
	ctx.r4.s64 = ctx.r11.s64 + 15416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544D28;
	sub_829E6978(ctx, base);
	// stfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15436
	ctx.r4.s64 = ctx.r11.s64 + 15436;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544D44;
	sub_829E6978(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544D60;
	sub_829E6978(ctx, base);
	// stfs f1,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r27,r29,60
	ctx.r27.s64 = ctx.r29.s64 + 60;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82544D7C;
	sub_82610248(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82544D90;
	sub_82610248(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82544DA4;
	sub_82610248(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82544DB8;
	sub_82610248(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3484
	ctx.r3.s64 = ctx.r28.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x82544DC8;
	sub_82410060(ctx, base);
loc_82544DC8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15888
	ctx.r4.s64 = ctx.r11.s64 + 15888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544DE0;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82544fc0
	if (ctx.cr6.eq) goto loc_82544FC0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r11,18540
	ctx.r27.s64 = ctx.r11.s64 + 18540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544E10;
	sub_829E6978(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82544fc0
	if (!ctx.cr6.gt) goto loc_82544FC0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x82544E20;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82544e3c
	if (ctx.cr0.eq) goto loc_82544E3C;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-152(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -152);
	// bl 0x8250d2d0
	ctx.lr = 0x82544E34;
	sub_8250D2D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82544e40
	goto loc_82544E40;
loc_82544E3C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82544E40:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32484
	ctx.r4.s64 = ctx.r11.s64 + 32484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544E58;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r23
	PPC_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.f0.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,18508
	ctx.r4.s64 = ctx.r11.s64 + 18508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544E78;
	sub_829E6978(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18524
	ctx.r4.s64 = ctx.r11.s64 + 18524;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544E94;
	sub_829E6978(ctx, base);
	// stfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544EAC;
	sub_829E6978(ctx, base);
	// stfs f1,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18560
	ctx.r4.s64 = ctx.r11.s64 + 18560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544EC8;
	sub_829E6978(ctx, base);
	// stfs f1,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18572
	ctx.r4.s64 = ctx.r11.s64 + 18572;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544EE4;
	sub_829E6978(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18588
	ctx.r4.s64 = ctx.r11.s64 + 18588;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544F00;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r21
	PPC_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.f0.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,18608
	ctx.r4.s64 = ctx.r11.s64 + 18608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544F20;
	sub_829E6978(ctx, base);
	// stfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18628
	ctx.r4.s64 = ctx.r11.s64 + 18628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544F3C;
	sub_829E6978(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18648
	ctx.r4.s64 = ctx.r11.s64 + 18648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544F58;
	sub_829E6978(ctx, base);
	// stfs f1,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// addi r27,r29,60
	ctx.r27.s64 = ctx.r29.s64 + 60;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82544F74;
	sub_82610248(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82544F88;
	sub_82610248(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82544F9C;
	sub_82610248(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82544FB0;
	sub_82610248(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3484
	ctx.r3.s64 = ctx.r28.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x82544FC0;
	sub_82410060(ctx, base);
loc_82544FC0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15920
	ctx.r4.s64 = ctx.r11.s64 + 15920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82544FD8;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825451b0
	if (ctx.cr6.eq) goto loc_825451B0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r11,18728
	ctx.r27.s64 = ctx.r11.s64 + 18728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545008;
	sub_829E6978(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x825451b0
	if (!ctx.cr6.gt) goto loc_825451B0;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x82545018;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82545034
	if (ctx.cr0.eq) goto loc_82545034;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -148);
	// bl 0x8250d2d0
	ctx.lr = 0x8254502C;
	sub_8250D2D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82545038
	goto loc_82545038;
loc_82545034:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82545038:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15936
	ctx.r4.s64 = ctx.r11.s64 + 15936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545050;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r23
	PPC_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.f0.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,18696
	ctx.r4.s64 = ctx.r11.s64 + 18696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545070;
	sub_829E6978(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18712
	ctx.r4.s64 = ctx.r11.s64 + 18712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254508C;
	sub_829E6978(ctx, base);
	// stfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825450A4;
	sub_829E6978(ctx, base);
	// stfs f1,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18748
	ctx.r4.s64 = ctx.r11.s64 + 18748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825450C0;
	sub_829E6978(ctx, base);
	// stfs f1,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18760
	ctx.r4.s64 = ctx.r11.s64 + 18760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825450DC;
	sub_829E6978(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18776
	ctx.r4.s64 = ctx.r11.s64 + 18776;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825450F8;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r21
	PPC_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.f0.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,18796
	ctx.r4.s64 = ctx.r11.s64 + 18796;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545118;
	sub_829E6978(ctx, base);
	// stfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18816
	ctx.r4.s64 = ctx.r11.s64 + 18816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545134;
	sub_829E6978(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,18836
	ctx.r4.s64 = ctx.r11.s64 + 18836;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545150;
	sub_829E6978(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stfs f1,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r27,r29,60
	ctx.r27.s64 = ctx.r29.s64 + 60;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x82545170;
	sub_82610248(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82545180;
	sub_82610248(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82610248
	ctx.lr = 0x82545190;
	sub_82610248(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82610248
	ctx.lr = 0x825451A0;
	sub_82610248(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3484
	ctx.r3.s64 = ctx.r28.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x825451B0;
	sub_82410060(ctx, base);
loc_825451B0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12260
	ctx.r4.s64 = ctx.r11.s64 + -12260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825451C8;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82545354
	if (ctx.cr6.eq) goto loc_82545354;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r27,r11,-12192
	ctx.r27.s64 = ctx.r11.s64 + -12192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x829e6978
	ctx.lr = 0x825451F8;
	sub_829E6978(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x82545354
	if (!ctx.cr6.gt) goto loc_82545354;
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x82333900
	ctx.lr = 0x82545208;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82545224
	if (ctx.cr0.eq) goto loc_82545224;
	// lis r11,-31948
	ctx.r11.s64 = -2093744128;
	// lwz r4,-144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -144);
	// bl 0x8250d2d0
	ctx.lr = 0x8254521C;
	sub_8250D2D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82545228
	goto loc_82545228;
loc_82545224:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82545228:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12244
	ctx.r4.s64 = ctx.r11.s64 + -12244;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545240;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r23
	PPC_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.f0.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-12224
	ctx.r4.s64 = ctx.r11.s64 + -12224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545260;
	sub_829E6978(ctx, base);
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12208
	ctx.r4.s64 = ctx.r11.s64 + -12208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x8254527C;
	sub_829E6978(ctx, base);
	// stfs f1,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545294;
	sub_829E6978(ctx, base);
	// stfs f1,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12172
	ctx.r4.s64 = ctx.r11.s64 + -12172;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825452B0;
	sub_829E6978(ctx, base);
	// stfs f1,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12160
	ctx.r4.s64 = ctx.r11.s64 + -12160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825452CC;
	sub_829E6978(ctx, base);
	// stfs f1,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12144
	ctx.r4.s64 = ctx.r11.s64 + -12144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x825452E8;
	sub_829E6978(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r29,r21
	PPC_STORE_U32(ctx.r29.u32 + ctx.r21.u32, ctx.f0.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,-12124
	ctx.r4.s64 = ctx.r11.s64 + -12124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545308;
	sub_829E6978(ctx, base);
	// stfs f1,104(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12104
	ctx.r4.s64 = ctx.r11.s64 + -12104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545324;
	sub_829E6978(ctx, base);
	// stfs f1,88(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 88, temp.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-12084
	ctx.r4.s64 = ctx.r11.s64 + -12084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829e6978
	ctx.lr = 0x82545340;
	sub_829E6978(ctx, base);
	// stfs f1,92(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 92, temp.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,3484
	ctx.r3.s64 = ctx.r28.s64 + 3484;
	// bl 0x82410060
	ctx.lr = 0x82545354;
	sub_82410060(ctx, base);
loc_82545354:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82a4ea3c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545360"))) PPC_WEAK_FUNC(sub_82545360);
PPC_FUNC_IMPL(__imp__sub_82545360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4e9fc
	ctx.lr = 0x82545368;
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
	// bl 0x825006d0
	ctx.lr = 0x82545384;
	sub_825006D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825453A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-31949
	ctx.r29.s64 = -2093809664;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x825453bc
	if (ctx.cr6.eq) goto loc_825453BC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x825453cc
	if (!ctx.cr6.eq) goto loc_825453CC;
loc_825453BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546cc0
	ctx.lr = 0x825453CC;
	sub_82546CC0(ctx, base);
loc_825453CC:
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,10640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82545450
	if (ctx.cr6.eq) goto loc_82545450;
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82833108
	ctx.lr = 0x825453E4;
	sub_82833108(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82545440
	if (ctx.cr0.eq) goto loc_82545440;
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82545410
	if (ctx.cr6.eq) goto loc_82545410;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82545404;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82545408;
	sub_82409C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82545414
	goto loc_82545414;
loc_82545410:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82545414:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 520);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82545428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826ae0e0
	ctx.lr = 0x82545438;
	sub_826AE0E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82545444
	goto loc_82545444;
loc_82545440:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82545444:
	// lwz r11,13024(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 13024);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82833a30
	ctx.lr = 0x82545450;
	sub_82833A30(ctx, base);
loc_82545450:
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
	// bl 0x82500838
	ctx.lr = 0x8254546C;
	sub_82500838(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea4c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545478"))) PPC_WEAK_FUNC(sub_82545478);
PPC_FUNC_IMPL(__imp__sub_82545478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82545480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825454ac
	if (ctx.cr6.eq) goto loc_825454AC;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_825454AC:
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825454c4
	if (ctx.cr6.eq) goto loc_825454C4;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_825454C4:
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825454dc
	if (ctx.cr6.eq) goto loc_825454DC;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_825454DC:
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825454f4
	if (ctx.cr6.eq) goto loc_825454F4;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_825454F4:
	// lwz r11,6932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254550c
	if (ctx.cr6.eq) goto loc_8254550C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8254550C:
	// lwz r11,6936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545524
	if (ctx.cr6.eq) goto loc_82545524;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82545524:
	// lwz r11,6940(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6940);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8254553c
	if (ctx.cr6.eq) goto loc_8254553C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_8254553C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e57d0
	ctx.lr = 0x82545548;
	sub_824E57D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5888
	ctx.lr = 0x82545554;
	sub_824E5888(ctx, base);
	// bl 0x82547368
	ctx.lr = 0x82545558;
	sub_82547368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82547460
	ctx.lr = 0x82545564;
	sub_82547460(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825487a0
	ctx.lr = 0x82545570;
	sub_825487A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82548840
	ctx.lr = 0x8254557C;
	sub_82548840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	// bl 0x824fffe8
	ctx.lr = 0x82545588;
	sub_824FFFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7004(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7004);
	// bl 0x824fffe8
	ctx.lr = 0x82545594;
	sub_824FFFE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7008(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7008);
	// bl 0x824fffe8
	ctx.lr = 0x825455A0;
	sub_824FFFE8(ctx, base);
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rldicr r6,r11,32,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82500890
	ctx.lr = 0x825455B8;
	sub_82500890(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825455C0"))) PPC_WEAK_FUNC(sub_825455C0);
PPC_FUNC_IMPL(__imp__sub_825455C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x825455C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,6768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825455f8
	if (!ctx.cr6.eq) goto loc_825455F8;
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825455f8
	if (!ctx.cr0.eq) goto loc_825455F8;
	// bl 0x825005e0
	ctx.lr = 0x825455F8;
	sub_825005E0(ctx, base);
loc_825455F8:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82545614
	if (ctx.cr0.eq) goto loc_82545614;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,1535
	ctx.r10.u64 = ctx.r10.u64 | 1535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82545768
	if (!ctx.cr6.eq) goto loc_82545768;
loc_82545614:
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545700
	if (ctx.cr0.eq) goto loc_82545700;
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545690
	if (!ctx.cr6.eq) goto loc_82545690;
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545768
	if (!ctx.cr6.eq) goto loc_82545768;
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545754
	if (ctx.cr6.eq) goto loc_82545754;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x82545650;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,7020(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x8254568C;
	sub_8282B1E0(ctx, base);
	// b 0x82545754
	goto loc_82545754;
loc_82545690:
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545768
	if (!ctx.cr6.eq) goto loc_82545768;
	// lwz r11,5360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545768
	if (!ctx.cr6.eq) goto loc_82545768;
	// lwz r11,7020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545754
	if (ctx.cr6.eq) goto loc_82545754;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x825456C0;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,7020(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7020);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x825456FC;
	sub_8282B1E0(ctx, base);
	// b 0x82545754
	goto loc_82545754;
loc_82545700:
	// lwz r11,7024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545754
	if (ctx.cr6.eq) goto loc_82545754;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x82545718;
	sub_82817280(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,7024(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7024);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 4);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,13024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x82545754;
	sub_8282B1E0(ctx, base);
loc_82545754:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504bf8
	ctx.lr = 0x82545768;
	sub_82504BF8(ctx, base);
loc_82545768:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545770"))) PPC_WEAK_FUNC(sub_82545770);
PPC_FUNC_IMPL(__imp__sub_82545770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea04
	ctx.lr = 0x82545778;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,6916(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6916);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825457a8
	if (ctx.cr6.eq) goto loc_825457A8;
	// lwz r11,6920(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6920);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545820
	if (!ctx.cr6.eq) goto loc_82545820;
loc_825457A8:
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15834
	ctx.r4.s64 = ctx.r11.s64 + 15834;
	// bl 0x8233a258
	ctx.lr = 0x825457B8;
	sub_8233A258(ctx, base);
	// lis r4,6564
	ctx.r4.s64 = 430178304;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r4,r4,30620
	ctx.r4.u64 = ctx.r4.u64 | 30620;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829c3740
	ctx.lr = 0x825457CC;
	sub_829C3740(ctx, base);
	// lwz r11,7012(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82545820
	if (ctx.cr6.eq) goto loc_82545820;
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82817280
	ctx.lr = 0x825457E4;
	sub_82817280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,7012(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7012);
	// li r6,1
	ctx.r6.s64 = 1;
	// ld r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 4);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r3,13024(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13024);
	// rldicr r10,r27,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8282b1e0
	ctx.lr = 0x82545820;
	sub_8282B1E0(ctx, base);
loc_82545820:
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// lfs f31,5864(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5864);
	ctx.f31.f64 = double(temp.f32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8254583c
	if (ctx.cr6.eq) goto loc_8254583C;
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82545848
	if (!ctx.cr6.eq) goto loc_82545848;
loc_8254583C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5864(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5864, temp.u32);
loc_82545848:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82504e58
	ctx.lr = 0x8254585C;
	sub_82504E58(ctx, base);
	// stfs f31,5864(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5864, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82a4ea54
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545870"))) PPC_WEAK_FUNC(sub_82545870);
PPC_FUNC_IMPL(__imp__sub_82545870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82545878;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1608);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825458a8
	if (ctx.cr6.eq) goto loc_825458A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825458A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825458ac
	goto loc_825458AC;
loc_825458A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825458AC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82545a18
	if (ctx.cr6.eq) goto loc_82545A18;
	// lwz r11,2756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545a18
	if (!ctx.cr6.eq) goto loc_82545A18;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,1928(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1928);
	// bl 0x824d77f8
	ctx.lr = 0x825458CC;
	sub_824D77F8(ctx, base);
	// bl 0x82333a20
	ctx.lr = 0x825458D0;
	sub_82333A20(ctx, base);
	// lwz r11,6900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6900);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825459a0
	if (ctx.cr6.eq) goto loc_825459A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82545a0c
	if (!ctx.cr6.eq) goto loc_82545A0C;
	// lwz r9,3500(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3500);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82545928
	if (!ctx.cr6.gt) goto loc_82545928;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,3496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3496);
	// lwz r8,-152(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -152);
loc_82545908:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82545928
	if (ctx.cr6.eq) goto loc_82545928;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82545908
	if (ctx.cr6.lt) goto loc_82545908;
loc_82545928:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82545964
	if (!ctx.cr6.gt) goto loc_82545964;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,3496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3496);
	// lwz r8,-148(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -148);
loc_82545944:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82545964
	if (ctx.cr6.eq) goto loc_82545964;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82545944
	if (ctx.cr6.lt) goto loc_82545944;
loc_82545964:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8254598c
	if (ctx.cr6.eq) goto loc_8254598C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e8c70
	ctx.lr = 0x82545984;
	sub_824E8C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82545a00
	if (!ctx.cr0.gt) goto loc_82545A00;
loc_8254598C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82545a08
	if (ctx.cr6.eq) goto loc_82545A08;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x825459ec
	goto loc_825459EC;
loc_825459A0:
	// lwz r9,3500(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3500);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82545a08
	if (!ctx.cr6.gt) goto loc_82545A08;
	// lis r8,-31948
	ctx.r8.s64 = -2093744128;
	// lwz r11,3496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3496);
	// lwz r8,-156(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -156);
loc_825459BC:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825459dc
	if (ctx.cr6.eq) goto loc_825459DC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x825459bc
	if (ctx.cr6.lt) goto loc_825459BC;
loc_825459DC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82545a08
	if (ctx.cr6.eq) goto loc_82545A08;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
loc_825459EC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824e8c70
	ctx.lr = 0x825459F8;
	sub_824E8C70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82545a08
	if (ctx.cr0.gt) goto loc_82545A08;
loc_82545A00:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82545a0c
	goto loc_82545A0C;
loc_82545A08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82545A0C:
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82545a1c
	goto loc_82545A1C;
loc_82545A18:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82545A1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545A28"))) PPC_WEAK_FUNC(sub_82545A28);
PPC_FUNC_IMPL(__imp__sub_82545A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x824ffa88
	ctx.lr = 0x82545A4C;
	sub_824FFA88(ctx, base);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545a74
	if (ctx.cr0.eq) goto loc_82545A74;
	// lfs f13,6880(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6880);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82545a74
	if (!ctx.cr6.lt) goto loc_82545A74;
	// lfs f13,6884(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6884);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
loc_82545A74:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82545aec
	if (ctx.cr6.eq) goto loc_82545AEC;
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r10,6804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6804);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82545ab8
	if (ctx.cr6.eq) goto loc_82545AB8;
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545ab8
	if (!ctx.cr6.eq) goto loc_82545AB8;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82545ab8
	if (!ctx.cr6.gt) goto loc_82545AB8;
	// addi r5,r31,6864
	ctx.r5.s64 = ctx.r31.s64 + 6864;
	// lwz r4,6856(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6856);
	// lwz r3,6924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82547600
	ctx.lr = 0x82545AB8;
	sub_82547600(ctx, base);
loc_82545AB8:
	// lwz r11,6808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6808);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82545aec
	if (ctx.cr6.eq) goto loc_82545AEC;
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545aec
	if (!ctx.cr6.eq) goto loc_82545AEC;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82545aec
	if (!ctx.cr6.gt) goto loc_82545AEC;
	// addi r5,r31,6868
	ctx.r5.s64 = ctx.r31.s64 + 6868;
	// lwz r4,6860(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6860);
	// lwz r3,6928(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82547600
	ctx.lr = 0x82545AEC;
	sub_82547600(ctx, base);
loc_82545AEC:
	// lwz r11,6768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82545b0c
	if (ctx.cr6.eq) goto loc_82545B0C;
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82545b0c
	if (ctx.cr0.eq) goto loc_82545B0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825006d0
	ctx.lr = 0x82545B0C;
	sub_825006D0(ctx, base);
loc_82545B0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545B28"))) PPC_WEAK_FUNC(sub_82545B28);
PPC_FUNC_IMPL(__imp__sub_82545B28) {
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
	// bl 0x82502d10
	ctx.lr = 0x82545B40;
	sub_82502D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824ff970
	ctx.lr = 0x82545B48;
	sub_824FF970(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82545ba0
	ctx.lr = 0x82545B50;
	sub_82545BA0(ctx, base);
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

__attribute__((alias("__imp__sub_82545B68"))) PPC_WEAK_FUNC(sub_82545B68);
PPC_FUNC_IMPL(__imp__sub_82545B68) {
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
	ctx.lr = 0x82545B80;
	sub_824DD5B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546fc0
	ctx.lr = 0x82545B88;
	sub_82546FC0(ctx, base);
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

__attribute__((alias("__imp__sub_82545BA0"))) PPC_WEAK_FUNC(sub_82545BA0);
PPC_FUNC_IMPL(__imp__sub_82545BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82545BA8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61744
	ctx.lr = 0x82545BB0;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829bed50
	ctx.lr = 0x82545BBC;
	sub_829BED50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82545d74
	if (ctx.cr0.eq) goto loc_82545D74;
	// lwz r11,6900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6900);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f29,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r30,96
	ctx.r29.s64 = ctx.r30.s64 + 96;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f28,148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f27,152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	ctx.f27.f64 = double(temp.f32);
	// addi r10,r10,904
	ctx.r10.s64 = ctx.r10.s64 + 904;
	// addi r11,r11,908
	ctx.r11.s64 = ctx.r11.s64 + 908;
	// addi r3,r30,272
	ctx.r3.s64 = ctx.r30.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
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
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bne cr6,0x82545c70
	if (!ctx.cr6.eq) goto loc_82545C70;
	// lfs f0,6888(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6888);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6892(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6892);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6896(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6896);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82545C54;
	sub_82A4EA80(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// lfs f2,17108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16664);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,164(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 164);
	// b 0x82545ca8
	goto loc_82545CA8;
loc_82545C70:
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r8,r9,13868
	ctx.r8.s64 = ctx.r9.s64 + 13868;
	// lfs f0,13868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13868);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x82a4ea80
	ctx.lr = 0x82545C94;
	sub_82A4EA80(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f2,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,164(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
loc_82545CA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82545CB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,664(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 664);
	// lwz r10,656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,660(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lfs f13,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stw r7,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r7.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stfs f31,188(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stfs f31,204(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// stfs f31,208(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stfs f30,212(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// bl 0x828264e0
	ctx.lr = 0x82545D60;
	sub_828264E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,13024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82825748
	ctx.lr = 0x82545D74;
	sub_82825748(ctx, base);
loc_82545D74:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82a61790
	ctx.lr = 0x82545D80;
	__restfpr_27(ctx, base);
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545D88"))) PPC_WEAK_FUNC(sub_82545D88);
PPC_FUNC_IMPL(__imp__sub_82545D88) {
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
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r30,6900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6900, ctx.r30.u32);
	// stw r30,6904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6904, ctx.r30.u32);
	// bne cr6,0x82545dbc
	if (!ctx.cr6.eq) goto loc_82545DBC;
	// lfs f0,6824(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6824);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82545dc0
	goto loc_82545DC0;
loc_82545DBC:
	// lfs f0,6828(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6828);
	ctx.f0.f64 = double(temp.f32);
loc_82545DC0:
	// stfs f0,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,3120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3120, temp.u32);
	// bl 0x82545ba0
	ctx.lr = 0x82545DD0;
	sub_82545BA0(ctx, base);
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// bne cr6,0x82545e7c
	if (!ctx.cr6.eq) goto loc_82545E7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r10,6792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r10.u32);
	// lfs f0,-32516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32516);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// bl 0x824e57d0
	ctx.lr = 0x82545E08;
	sub_824E57D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5888
	ctx.lr = 0x82545E14;
	sub_824E5888(ctx, base);
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6820, ctx.r11.u32);
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545e48
	if (!ctx.cr6.eq) goto loc_82545E48;
	// bl 0x82548550
	ctx.lr = 0x82545E30;
	sub_82548550(ctx, base);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,5356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5356);
	// b 0x82545e74
	goto loc_82545E74;
loc_82545E48:
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82545e8c
	if (!ctx.cr6.eq) goto loc_82545E8C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82548668
	ctx.lr = 0x82545E60;
	sub_82548668(ctx, base);
	// lwz r11,6924(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6924);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,5360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
loc_82545E74:
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
	// b 0x82545e8c
	goto loc_82545E8C;
loc_82545E7C:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lfs f0,912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3948, temp.u32);
	// bl 0x825462f0
	ctx.lr = 0x82545E8C;
	sub_825462F0(ctx, base);
loc_82545E8C:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82546f10
	ctx.lr = 0x82545E94;
	sub_82546F10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82545EB0"))) PPC_WEAK_FUNC(sub_82545EB0);
PPC_FUNC_IMPL(__imp__sub_82545EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82545EB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r3,r31,5652
	ctx.r3.s64 = ctx.r31.s64 + 5652;
	// lwz r30,5668(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823327e0
	ctx.lr = 0x82545EDC;
	sub_823327E0(ctx, base);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r9,-24180
	ctx.r3.s64 = ctx.r9.s64 + -24180;
	// lis r10,6171
	ctx.r10.s64 = 404422656;
	// ori r10,r10,48165
	ctx.r10.u64 = ctx.r10.u64 | 48165;
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82816528
	ctx.lr = 0x82545F04;
	sub_82816528(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,-20678
	ctx.r10.s64 = -1355153408;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,2640
	ctx.r10.u64 = ctx.r10.u64 | 2640;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-24160
	ctx.r3.s64 = ctx.r9.s64 + -24160;
	// bl 0x82816528
	ctx.lr = 0x82545F34;
	sub_82816528(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,3166
	ctx.r10.s64 = 207486976;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,37513
	ctx.r10.u64 = ctx.r10.u64 | 37513;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-24124
	ctx.r3.s64 = ctx.r9.s64 + -24124;
	// bl 0x82816528
	ctx.lr = 0x82545F64;
	sub_82816528(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lis r10,21293
	ctx.r10.s64 = 1395458048;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,17020
	ctx.r10.u64 = ctx.r10.u64 | 17020;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-24088
	ctx.r3.s64 = ctx.r9.s64 + -24088;
	// bl 0x82816528
	ctx.lr = 0x82545F94;
	sub_82816528(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lis r10,-16745
	ctx.r10.s64 = -1097400320;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// lwz r9,5664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r10,r10,54025
	ctx.r10.u64 = ctx.r10.u64 | 54025;
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lwz r10,5664(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5664);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-24048
	ctx.r3.s64 = ctx.r9.s64 + -24048;
	// bl 0x82816528
	ctx.lr = 0x82545FC4;
	sub_82816528(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82545FD0"))) PPC_WEAK_FUNC(sub_82545FD0);
PPC_FUNC_IMPL(__imp__sub_82545FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82545FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,6792(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6792);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825462dc
	if (ctx.cr0.eq) goto loc_825462DC;
	// lwz r11,2112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825462dc
	if (!ctx.cr6.gt) goto loc_825462DC;
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825462dc
	if (!ctx.cr0.eq) goto loc_825462DC;
	// lwz r11,6944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6944);
	// addi r26,r30,6944
	ctx.r26.s64 = ctx.r30.s64 + 6944;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-6377
	ctx.r11.s64 = -417923072;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,1184
	ctx.r11.u64 = ctx.r11.u64 | 1184;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// lis r31,-31949
	ctx.r31.s64 = -2093809664;
	// lwz r11,6756(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6756);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,6756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6756, ctx.r11.u32);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// bne cr6,0x82546170
	if (!ctx.cr6.eq) goto loc_82546170;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82546074
	if (ctx.cr6.eq) goto loc_82546074;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82546068;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254606C;
	sub_82409C40(ctx, base);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// b 0x82546078
	goto loc_82546078;
loc_82546074:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82546078:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546288
	if (ctx.cr6.eq) goto loc_82546288;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8254609c
	if (ctx.cr6.eq) goto loc_8254609C;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82546094;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x82546098;
	sub_82409C40(ctx, base);
	// b 0x825460a0
	goto loc_825460A0;
loc_8254609C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825460A0:
	// lwz r31,1412(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82546288
	if (ctx.cr6.eq) goto loc_82546288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825460C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82546288
	if (ctx.cr0.eq) goto loc_82546288;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82546288
	if (!ctx.cr6.eq) goto loc_82546288;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// bl 0x82816528
	ctx.lr = 0x825460E0;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x825460F0;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-23968
	ctx.r3.s64 = ctx.r11.s64 + -23968;
	// bl 0x82816528
	ctx.lr = 0x825460FC;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r27,6788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6788, ctx.r27.u32);
	// addi r3,r11,-23940
	ctx.r3.s64 = ctx.r11.s64 + -23940;
	// bl 0x82816528
	ctx.lr = 0x82546110;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x8284dda8
	ctx.lr = 0x82546150;
	sub_8284DDA8(ctx, base);
	// stw r29,6784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6784, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,8516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8516, ctx.r29.u32);
	// b 0x82546288
	goto loc_82546288;
loc_82546170:
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// beq cr6,0x82546194
	if (ctx.cr6.eq) goto loc_82546194;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82546188;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x8254618C;
	sub_82409C40(ctx, base);
	// lwz r11,10548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10548);
	// b 0x82546198
	goto loc_82546198;
loc_82546194:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82546198:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82546288
	if (ctx.cr6.eq) goto loc_82546288;
	// lwz r4,1312(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x825461bc
	if (ctx.cr6.eq) goto loc_825461BC;
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x825461B4;
	sub_829B9720(ctx, base);
	// bl 0x82409c40
	ctx.lr = 0x825461B8;
	sub_82409C40(ctx, base);
	// b 0x825461c0
	goto loc_825461C0;
loc_825461BC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_825461C0:
	// lwz r31,1412(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82546288
	if (ctx.cr6.eq) goto loc_82546288;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825461E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82546288
	if (ctx.cr0.eq) goto loc_82546288;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82546288
	if (!ctx.cr6.eq) goto loc_82546288;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// bl 0x82816528
	ctx.lr = 0x82546200;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x82546210;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-23928
	ctx.r3.s64 = ctx.r11.s64 + -23928;
	// bl 0x82816528
	ctx.lr = 0x8254621C;
	sub_82816528(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r27,6788(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6788, ctx.r27.u32);
	// addi r3,r11,-23940
	ctx.r3.s64 = ctx.r11.s64 + -23940;
	// bl 0x82816528
	ctx.lr = 0x82546230;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r28,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// bl 0x8284dda8
	ctx.lr = 0x8254626C;
	sub_8284DDA8(ctx, base);
	// stw r29,6784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 6784, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,8516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8516, ctx.r28.u32);
loc_82546288:
	// lwz r11,6784(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 6784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825462b8
	if (ctx.cr6.eq) goto loc_825462B8;
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r4,4095
	ctx.r4.s64 = 4095;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lfs f2,-11456(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11456);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32752);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x825462B8;
	sub_829BADB0(ctx, base);
loc_825462B8:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r30,6976
	ctx.r3.s64 = ctx.r30.s64 + 6976;
	// bl 0x82546e58
	ctx.lr = 0x825462C4;
	sub_82546E58(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825462D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x825462e4
	goto loc_825462E4;
loc_825462DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825462f0
	ctx.lr = 0x825462E4;
	sub_825462F0(ctx, base);
loc_825462E4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825462F0"))) PPC_WEAK_FUNC(sub_825462F0);
PPC_FUNC_IMPL(__imp__sub_825462F0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8254631C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r11,788(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82546338
	if (ctx.cr6.eq) goto loc_82546338;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82546348
	if (!ctx.cr6.eq) goto loc_82546348;
loc_82546338:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546cc0
	ctx.lr = 0x82546348;
	sub_82546CC0(ctx, base);
loc_82546348:
	// lwz r11,6932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546360
	if (ctx.cr6.eq) goto loc_82546360;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82546360:
	// lwz r11,6936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546378
	if (ctx.cr6.eq) goto loc_82546378;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
loc_82546378:
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

__attribute__((alias("__imp__sub_82546390"))) PPC_WEAK_FUNC(sub_82546390);
PPC_FUNC_IMPL(__imp__sub_82546390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82546398;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r31,6944
	ctx.r29.s64 = ctx.r31.s64 + 6944;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,6944(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6944);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825463C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// lwz r10,6992(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6992);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// blt 0x8254641c
	if (ctx.cr0.lt) goto loc_8254641C;
	// rlwinm r28,r30,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_825463E0:
	// lwz r11,6988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6988);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x825463f8
	if (ctx.cr6.eq) goto loc_825463F8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82546410
	if (ctx.cr6.eq) goto loc_82546410;
loc_825463F8:
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,6976
	ctx.r3.s64 = ctx.r31.s64 + 6976;
	// bl 0x82332ca8
	ctx.lr = 0x82546410;
	sub_82332CA8(ctx, base);
loc_82546410:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// bge 0x825463e0
	if (!ctx.cr0.lt) goto loc_825463E0;
loc_8254641C:
	// lwz r11,6784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825464bc
	if (ctx.cr6.eq) goto loc_825464BC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-24008
	ctx.r3.s64 = ctx.r11.s64 + -24008;
	// bl 0x82816528
	ctx.lr = 0x82546434;
	sub_82816528(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824cacf0
	ctx.lr = 0x82546444;
	sub_824CACF0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,-23940
	ctx.r3.s64 = ctx.r11.s64 + -23940;
	// lwz r28,6788(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6788);
	// bl 0x82816528
	ctx.lr = 0x82546454;
	sub_82816528(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r10,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r10.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stb r30,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r30.u8);
	// lfs f31,904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 904);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x8284dda8
	ctx.lr = 0x82546498;
	sub_8284DDA8(ctx, base);
	// stw r30,6784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6784, ctx.r30.u32);
	// lis r11,-31949
	ctx.r11.s64 = -2093809664;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32215
	ctx.r10.s64 = -2111242240;
	// li r4,4095
	ctx.r4.s64 = 4095;
	// lfs f1,908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829badb0
	ctx.lr = 0x825464BC;
	sub_829BADB0(ctx, base);
loc_825464BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825464D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e4528
	ctx.lr = 0x825464E0;
	sub_824E4528(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825464F0"))) PPC_WEAK_FUNC(sub_825464F0);
PPC_FUNC_IMPL(__imp__sub_825464F0) {
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
	// lis r11,-18325
	ctx.r11.s64 = -1200947200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,39911
	ctx.r11.u64 = ctx.r11.u64 | 39911;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82546574
	if (ctx.cr6.gt) goto loc_82546574;
	// beq cr6,0x82546568
	if (ctx.cr6.eq) goto loc_82546568;
	// lis r11,22768
	ctx.r11.s64 = 1492123648;
	// ori r11,r11,9999
	ctx.r11.u64 = ctx.r11.u64 | 9999;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465c8
	if (ctx.cr6.eq) goto loc_825465C8;
	// lis r11,27729
	ctx.r11.s64 = 1817247744;
	// ori r11,r11,38877
	ctx.r11.u64 = ctx.r11.u64 | 38877;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82546568
	if (ctx.cr6.eq) goto loc_82546568;
	// lis r11,-24487
	ctx.r11.s64 = -1604780032;
	// ori r11,r11,25589
	ctx.r11.u64 = ctx.r11.u64 | 25589;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465bc
	if (ctx.cr6.eq) goto loc_825465BC;
	// lis r11,-24159
	ctx.r11.s64 = -1583284224;
	// ori r11,r11,45023
	ctx.r11.u64 = ctx.r11.u64 | 45023;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465ec
	if (ctx.cr6.eq) goto loc_825465EC;
	// lis r11,-19208
	ctx.r11.s64 = -1258815488;
	// ori r11,r11,49846
	ctx.r11.u64 = ctx.r11.u64 | 49846;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825465b4
	if (!ctx.cr6.eq) goto loc_825465B4;
loc_82546568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546678
	ctx.lr = 0x82546570;
	sub_82546678(ctx, base);
	// b 0x82546664
	goto loc_82546664;
loc_82546574:
	// lis r11,-15645
	ctx.r11.s64 = -1025310720;
	// ori r11,r11,28507
	ctx.r11.u64 = ctx.r11.u64 | 28507;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465ec
	if (ctx.cr6.eq) goto loc_825465EC;
	// lis r11,-11921
	ctx.r11.s64 = -781254656;
	// ori r11,r11,43710
	ctx.r11.u64 = ctx.r11.u64 | 43710;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465ec
	if (ctx.cr6.eq) goto loc_825465EC;
	// lis r11,-10530
	ctx.r11.s64 = -690094080;
	// ori r11,r11,2106
	ctx.r11.u64 = ctx.r11.u64 | 2106;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465c8
	if (ctx.cr6.eq) goto loc_825465C8;
	// lis r11,-5864
	ctx.r11.s64 = -384303104;
	// ori r11,r11,43951
	ctx.r11.u64 = ctx.r11.u64 | 43951;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x825465bc
	if (ctx.cr6.eq) goto loc_825465BC;
loc_825465B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825465e4
	goto loc_825465E4;
loc_825465BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546738
	ctx.lr = 0x825465C4;
	sub_82546738(ctx, base);
	// b 0x82546664
	goto loc_82546664;
loc_825465C8:
	// lfs f0,6872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// lwz r4,7000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	// bl 0x824ffc38
	ctx.lr = 0x825465DC;
	sub_824FFC38(ctx, base);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_825465E4:
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// b 0x82546664
	goto loc_82546664;
loc_825465EC:
	// lwz r11,6812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82546614
	if (!ctx.cr6.eq) goto loc_82546614;
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82546614
	if (!ctx.cr6.gt) goto loc_82546614;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825487a0
	ctx.lr = 0x82546610;
	sub_825487A0(ctx, base);
	// b 0x82546638
	goto loc_82546638;
loc_82546614:
	// lwz r11,6816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6816);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82546638
	if (!ctx.cr6.eq) goto loc_82546638;
	// lwz r11,6820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6820);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82546638
	if (!ctx.cr6.gt) goto loc_82546638;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82548840
	ctx.lr = 0x82546638;
	sub_82548840(ctx, base);
loc_82546638:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546678
	ctx.lr = 0x82546640;
	sub_82546678(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,6792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// lfs f0,-11444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11444);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r10.u32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// lwz r11,6756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6756);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
loc_82546664:
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

__attribute__((alias("__imp__sub_82546678"))) PPC_WEAK_FUNC(sub_82546678);
PPC_FUNC_IMPL(__imp__sub_82546678) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,6872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// bl 0x82548550
	ctx.lr = 0x8254669C;
	sub_82548550(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82548668
	ctx.lr = 0x825466A8;
	sub_82548668(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	// stw r11,6756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6756, ctx.r11.u32);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// bl 0x824fffe8
	ctx.lr = 0x825466CC;
	sub_824FFFE8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-27300(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// bl 0x825462f0
	ctx.lr = 0x825466E0;
	sub_825462F0(ctx, base);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// li r4,1
	ctx.r4.s64 = 1;
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
	// bl 0x824e57d0
	ctx.lr = 0x8254670C;
	sub_824E57D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5888
	ctx.lr = 0x82546718;
	sub_824E5888(ctx, base);
	// lwz r11,5360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82546738"))) PPC_WEAK_FUNC(sub_82546738);
PPC_FUNC_IMPL(__imp__sub_82546738) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82548550
	ctx.lr = 0x82546754;
	sub_82548550(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82548668
	ctx.lr = 0x82546760;
	sub_82548668(ctx, base);
	// lfs f0,6876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5412(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5412, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,7000(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7000);
	// bl 0x824ffc38
	ctx.lr = 0x82546774;
	sub_824FFC38(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-25080(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25080);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3560, temp.u32);
	// lwz r11,6792(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6792);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,6792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6792, ctx.r11.u32);
	// bl 0x825462f0
	ctx.lr = 0x82546798;
	sub_825462F0(ctx, base);
	// lwz r11,6928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6928);
	// li r4,1
	ctx.r4.s64 = 1;
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
	// bl 0x824e57d0
	ctx.lr = 0x825467C4;
	sub_824E57D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824e5888
	ctx.lr = 0x825467D0;
	sub_824E5888(ctx, base);
	// lwz r11,5360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5360);
	// stw r11,6912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6912, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_825467F0"))) PPC_WEAK_FUNC(sub_825467F0);
PPC_FUNC_IMPL(__imp__sub_825467F0) {
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
	// bl 0x825008f0
	ctx.lr = 0x82546808;
	sub_825008F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6508
	ctx.r4.s64 = ctx.r31.s64 + 6508;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r11,-23900
	ctx.r6.s64 = ctx.r11.s64 + -23900;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x824f9a90
	ctx.lr = 0x82546828;
	sub_824F9A90(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6408
	ctx.r4.s64 = ctx.r31.s64 + 6408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23868
	ctx.r5.s64 = ctx.r11.s64 + -23868;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x82546844;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6412
	ctx.r4.s64 = ctx.r31.s64 + 6412;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23828
	ctx.r5.s64 = ctx.r11.s64 + -23828;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82416240
	ctx.lr = 0x82546860;
	sub_82416240(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6448
	ctx.r4.s64 = ctx.r31.s64 + 6448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-23788
	ctx.r5.s64 = ctx.r11.s64 + -23788;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x824115b8
	ctx.lr = 0x8254687C;
	sub_824115B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,6396
	ctx.r4.s64 = ctx.r31.s64 + 6396;
	// addi r5,r11,-23756
	ctx.r5.s64 = ctx.r11.s64 + -23756;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824f61c8
	ctx.lr = 0x82546898;
	sub_824F61C8(ctx, base);
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

__attribute__((alias("__imp__sub_825468B0"))) PPC_WEAK_FUNC(sub_825468B0);
PPC_FUNC_IMPL(__imp__sub_825468B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x825468B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x825009c8
	ctx.lr = 0x825468C4;
	sub_825009C8(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82546978
	if (!ctx.cr6.eq) goto loc_82546978;
	// addi r11,r31,6904
	ctx.r11.s64 = ctx.r31.s64 + 6904;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825468EC;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6804
	ctx.r10.s64 = ctx.r31.s64 + 6804;
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
	ctx.lr = 0x8254690C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6808
	ctx.r10.s64 = ctx.r31.s64 + 6808;
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
	ctx.lr = 0x8254692C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6844
	ctx.r10.s64 = ctx.r31.s64 + 6844;
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
	ctx.lr = 0x8254694C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r31,6792
	ctx.r10.s64 = ctx.r31.s64 + 6792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82838fd0
	ctx.lr = 0x8254696C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_82546978:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546988"))) PPC_WEAK_FUNC(sub_82546988);
PPC_FUNC_IMPL(__imp__sub_82546988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea00
	ctx.lr = 0x82546990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82500ac0
	ctx.lr = 0x825469A0;
	sub_82500AC0(ctx, base);
	// lwz r11,960(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82546ba8
	if (!ctx.cr6.eq) goto loc_82546BA8;
	// addi r28,r31,6904
	ctx.r28.s64 = ctx.r31.s64 + 6904;
	// addi r30,r31,424
	ctx.r30.s64 = ctx.r31.s64 + 424;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x825469C8;
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
	ctx.lr = 0x825469EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82546a24
	if (!ctx.cr0.eq) goto loc_82546A24;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546A18;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82546A24:
	// addi r28,r31,6804
	ctx.r28.s64 = ctx.r31.s64 + 6804;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546A38;
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
	ctx.lr = 0x82546A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546A70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82546a94
	if (!ctx.cr0.eq) goto loc_82546A94;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546A88;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82546A94:
	// addi r28,r31,6808
	ctx.r28.s64 = ctx.r31.s64 + 6808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546AA8;
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
	ctx.lr = 0x82546ACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82546b04
	if (!ctx.cr0.eq) goto loc_82546B04;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546AF8;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82546B04:
	// lwz r11,6848(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82546b38
	if (ctx.cr6.eq) goto loc_82546B38;
	// addi r11,r31,6844
	ctx.r11.s64 = ctx.r31.s64 + 6844;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546B24;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r10,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r10.u32);
loc_82546B38:
	// addi r28,r31,6792
	ctx.r28.s64 = ctx.r31.s64 + 6792;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546B4C;
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
	ctx.lr = 0x82546B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + ctx.r27.u64;
	// lwz r3,484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82546ba8
	if (!ctx.cr0.eq) goto loc_82546BA8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82838fd0
	ctx.lr = 0x82546B9C;
	sub_82838FD0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82546BA8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82a4ea50
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546BB8"))) PPC_WEAK_FUNC(sub_82546BB8);
PPC_FUNC_IMPL(__imp__sub_82546BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82546BD8;
	sub_82505418(ctx, base);
	// lis r11,16158
	ctx.r11.s64 = 1058930688;
	// ori r11,r11,57223
	ctx.r11.u64 = ctx.r11.u64 | 57223;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82546c34
	if (ctx.cr6.eq) goto loc_82546C34;
	// lis r11,30377
	ctx.r11.s64 = 1990787072;
	// ori r11,r11,63615
	ctx.r11.u64 = ctx.r11.u64 | 63615;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82546c24
	if (ctx.cr6.eq) goto loc_82546C24;
	// lis r11,-19717
	ctx.r11.s64 = -1292173312;
	// ori r11,r11,15943
	ctx.r11.u64 = ctx.r11.u64 | 15943;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82546c3c
	if (!ctx.cr6.eq) goto loc_82546C3C;
	// lwz r11,6844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6844);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,6840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6840, ctx.r11.u32);
	// beq cr6,0x82546c3c
	if (ctx.cr6.eq) goto loc_82546C3C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,6848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6848, ctx.r11.u32);
	// b 0x82546c3c
	goto loc_82546C3C;
loc_82546C24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,6708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6708);
	// bl 0x825464f0
	ctx.lr = 0x82546C30;
	sub_825464F0(ctx, base);
	// b 0x82546c3c
	goto loc_82546C3C;
loc_82546C34:
	// lwz r11,6904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6904);
	// stw r11,6908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6908, ctx.r11.u32);
loc_82546C3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82546C58"))) PPC_WEAK_FUNC(sub_82546C58);
PPC_FUNC_IMPL(__imp__sub_82546C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x824e0598
	sub_824E0598(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546C60"))) PPC_WEAK_FUNC(sub_82546C60);
PPC_FUNC_IMPL(__imp__sub_82546C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	ctx.lr = 0x82546C88;
	sub_828DB368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82546CA0;
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

__attribute__((alias("__imp__sub_82546CC0"))) PPC_WEAK_FUNC(sub_82546CC0);
PPC_FUNC_IMPL(__imp__sub_82546CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82a4ea0c
	ctx.lr = 0x82546CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-21192
	ctx.r10.s64 = ctx.r10.s64 + -21192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r30,-31949
	ctx.r30.s64 = -2093809664;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// lwz r3,84(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x829b9720
	ctx.lr = 0x82546CFC;
	sub_829B9720(ctx, base);
	// bl 0x82416348
	ctx.lr = 0x82546D00;
	sub_82416348(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-23720
	ctx.r3.s64 = ctx.r11.s64 + -23720;
	// bl 0x82816528
	ctx.lr = 0x82546D14;
	sub_82816528(ctx, base);
	// lwz r11,13024(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13024);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8282c818
	ctx.lr = 0x82546D34;
	sub_8282C818(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82a4ea5c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82546D40"))) PPC_WEAK_FUNC(sub_82546D40);
PPC_FUNC_IMPL(__imp__sub_82546D40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82546d54
	if (ctx.cr6.eq) goto loc_82546D54;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82546d58
	goto loc_82546D58;
loc_82546D54:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82546D58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,2056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2056);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82546D70"))) PPC_WEAK_FUNC(sub_82546D70);
PPC_FUNC_IMPL(__imp__sub_82546D70) {
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
	ctx.lr = 0x82546D80;
	sub_824EA480(ctx, base);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23832
	ctx.r11.s64 = ctx.r11.s64 + -23832;
	// lfs f0,92(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
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

__attribute__((alias("__imp__sub_82546DA0"))) PPC_WEAK_FUNC(sub_82546DA0);
PPC_FUNC_IMPL(__imp__sub_82546DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r11,r11,-23720
	ctx.r11.s64 = ctx.r11.s64 + -23720;
	// lfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82546DB0"))) PPC_WEAK_FUNC(sub_82546DB0);
PPC_FUNC_IMPL(__imp__sub_82546DB0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82333900
	ctx.lr = 0x82546DC4;
	sub_82333900(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82546de4
	if (ctx.cr0.eq) goto loc_82546DE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-21192
	ctx.r11.s64 = ctx.r10.s64 + -21192;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82546de8
	goto loc_82546DE8;
loc_82546DE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82546DE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

